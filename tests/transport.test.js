import test from 'node:test';
import assert from 'node:assert/strict';
import { transport } from './helpers/transport.js';
import { createApp } from '../server/app.js';
import { PostgresRoomStore } from '../server/postgres-rooms.js';
import { embeddedPool } from './helpers/embedded-pg.js';

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
  assert.equal((await a.send('chat:history')).ok,false);
  assert.equal((await a.send('chat:send',{id:'anonymous_chat',text:'hola'})).ok,false);
  const created=await a.send('room:create',{name:'Ana',piece:0});assert.equal(created.ok,true);
  const joined=await b.send('room:join',{code:created.room.code,name:'Luis',piece:1});assert.equal(joined.ok,true);
  const revisionBeforeChat=joined.room.revision;
  const chat=await a.send('chat:send',{id:'chat_message_001',text:' Hola mesa <b>amigos</b> ',name:'Falso',playerId:1});assert.equal(chat.ok,true);assert.equal(chat.message.name,'Ana');assert.equal(chat.message.playerId,0);assert.equal(chat.message.text,'Hola mesa <b>amigos</b>');
  const duplicate=await a.send('chat:send',{id:'chat_message_001',text:'otro texto'});assert.equal(duplicate.duplicate,true);assert.equal(duplicate.message.id,chat.message.id);
  const history=await b.send('chat:history');assert.equal(history.messages.length,1);assert.equal(history.messages[0].id,chat.message.id);assert.ok(b.events.some(([event,data])=>event==='chat:message'&&data.message.id===chat.message.id));
  const outsider=await client();await outsider.send('room:create',{name:'Otra mesa',piece:2});assert.deepEqual((await outsider.send('chat:history',{code:created.room.code})).messages,[]);
  assert.equal((await a.send('chat:send',{id:'too_long_chat',text:'x'.repeat(501)})).ok,false);
  for(let n=0;n<3;n++)assert.equal((await a.send('chat:send',{id:'chat_more_00'+n,text:'Mensaje '+n})).ok,true);
  const limited=await a.send('chat:send',{id:'chat_over_limit',text:'Demasiados'});assert.equal(limited.ok,false);assert.match(limited.error,/segundos/);
  assert.equal((await app.store.lookup(created.room.code)).revision,revisionBeforeChat);
  const started=await a.send('room:start');assert.equal(started.ok,true);assert.equal(started.room.game.decks,undefined);
  const revision=started.room.revision;
  const rejected=await b.send('game:action',{id:'wrong_actor_01',revision,action:{type:'roll',playerId:0}});assert.equal(rejected.ok,false);
  const input={id:'transport_roll_01',revision,action:{type:'roll',dice:[6,6]}};
  const rolled=await a.send('game:action',input);assert.equal(rolled.ok,true);assert.deepEqual(rolled.room.game.dice,[1,2]);
  const duplicated=await a.send('game:action',input);assert.equal(duplicated.duplicate,true);assert.equal(duplicated.room.revision,rolled.room.revision);
  await b.disconnect();
  const recovered=await client(),resumed=await recovered.send('room:resume',{code:created.room.code,token:joined.token});
  assert.equal((await recovered.send('chat:history')).messages.length,4);
  assert.equal(resumed.ok,true);assert.equal(resumed.playerId,1);assert.deepEqual(resumed.room.game,rolled.room.game);
  const invalid=await recovered.send('room:resume',{code:created.room.code,token:'0'.repeat(64)});assert.equal(invalid.ok,false);
 }finally{await app.close();await engine?.close();}
});
