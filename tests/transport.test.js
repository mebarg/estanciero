import test from 'node:test';
import assert from 'node:assert/strict';
import { IncomingMessage,ServerResponse } from 'node:http';
import { Duplex } from 'node:stream';
import { createApp } from '../server/app.js';
import { PostgresRoomStore } from '../server/postgres-rooms.js';
import { embeddedPool } from './helpers/embedded-pg.js';

// HTTP y Socket.IO reales sobre streams en memoria: no abre puertos ni suplanta el servidor.
function transport(app){
 async function request(url,method='GET',body='',headers={}){
  const chunks=[],socket=new Duplex({read(){},write(chunk,encoding,done){chunks.push(Buffer.from(chunk));done();}});socket.remoteAddress='127.0.0.1';
  const req=new IncomingMessage(socket);req.url=url;req.method=method;req.headers={host:'localhost','content-type':'text/plain;charset=UTF-8','content-length':Buffer.byteLength(body),...headers};req.httpVersion='1.1';
  const res=new ServerResponse(req);res.assignSocket(socket);
  const result=new Promise((resolve,reject)=>{res.on('finish',()=>{const raw=Buffer.concat(chunks).toString(),split=raw.indexOf('\r\n\r\n');resolve({status:res.statusCode,body:raw.slice(split+4)});});res.on('error',reject);});
  app.server.emit('request',req,res);req.push(body||null);if(body)req.push(null);return result;
 }
 async function client(){
  const hello=await request('/socket.io/?EIO=4&transport=polling');assert.equal(hello.status,200);
  const {sid}=JSON.parse(hello.body.slice(1)),url='/socket.io/?EIO=4&transport=polling&sid='+sid;
  await request(url,'POST','40');assert.match((await request(url)).body,/^40/);
  let id=0;
  return {
   async send(event,input={}){
    const receipt=String(++id);await request(url,'POST','42'+receipt+JSON.stringify([event,input]));
    for(let attempt=0;attempt<12;attempt++){
     const packets=(await request(url)).body.split('\x1e');
     for(const packet of packets)if(packet.startsWith('43'+receipt+'['))return JSON.parse(packet.slice(2+receipt.length))[0];
    }
    assert.fail('No llegó la confirmación Socket.IO');
   },
   async disconnect(){await request(url,'POST','41');}
  };
 }
 return {request,client};
}

for(const storage of ['json','postgres'])test(`servidor HTTP/Socket.IO (${storage}): dos clientes, autorización, sincronización, deduplicación y recuperación del asiento`,{timeout:15000},async()=>{
 const engine=storage==='postgres'?await embeddedPool():null;
 const roomStore=engine?new PostgresRoomStore({pool:engine.pool,dice:()=>[1,2]}):undefined;
 const app=await createApp({directory:null,dice:()=>[1,2],roomStore});
 try{
  const {request,client}=transport(app);
  assert.equal((await request('/health')).body,'{"ok":true}');
  const module=await request('/socket.io/socket.io.esm.min.js');assert.equal(module.status,200);assert.match(module.body,/export/);
  assert.equal((await request('/data/rooms.json')).status,404);
  assert.equal((await request('/socket.io/?EIO=4&transport=polling','GET','',{origin:'https://otro-sitio.example'})).status,403);
  const a=await client(),b=await client();
  const created=await a.send('room:create',{name:'Ana',piece:0});assert.equal(created.ok,true);
  const joined=await b.send('room:join',{code:created.room.code,name:'Luis',piece:1});assert.equal(joined.ok,true);
  const started=await a.send('room:start');assert.equal(started.ok,true);assert.equal(started.room.game.decks,undefined);
  const revision=started.room.revision;
  const rejected=await b.send('game:action',{id:'wrong_actor_01',revision,action:{type:'roll',playerId:0}});assert.equal(rejected.ok,false);
  const input={id:'transport_roll_01',revision,action:{type:'roll',dice:[6,6]}};
  const rolled=await a.send('game:action',input);assert.equal(rolled.ok,true);assert.deepEqual(rolled.room.game.dice,[1,2]);
  const duplicated=await a.send('game:action',input);assert.equal(duplicated.duplicate,true);assert.equal(duplicated.room.revision,rolled.room.revision);
  await b.disconnect();
  const recovered=await client(),resumed=await recovered.send('room:resume',{code:created.room.code,token:joined.token});
  assert.equal(resumed.ok,true);assert.equal(resumed.playerId,1);assert.deepEqual(resumed.room.game,rolled.room.game);
  const invalid=await recovered.send('room:resume',{code:created.room.code,token:'0'.repeat(64)});assert.equal(invalid.ok,false);
 }finally{await app.close();await engine?.close();}
});
