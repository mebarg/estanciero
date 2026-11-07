import assert from 'node:assert/strict';
import { IncomingMessage,ServerResponse } from 'node:http';
import { Duplex } from 'node:stream';

// HTTP y Socket.IO reales sobre streams en memoria: no abre puertos ni suplanta el servidor.
export function transport(app){
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
  let id=0;const events=[];
  return {
   events,
   async send(event,input={}){
    const receipt=String(++id);await request(url,'POST','42'+receipt+JSON.stringify([event,input]));
    for(let attempt=0;attempt<12;attempt++){
     const packets=(await request(url)).body.split('\x1e');
     for(const packet of packets)if(packet.startsWith('42['))events.push(JSON.parse(packet.slice(2)));
     for(const packet of packets)if(packet.startsWith('43'+receipt+'['))return JSON.parse(packet.slice(2+receipt.length))[0];
    }
    assert.fail('No llegó la confirmación Socket.IO');
   },
   async disconnect(){await request(url,'POST','41');}
  };
 }
 return {request,client};
}

