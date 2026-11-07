import test from 'node:test';
import assert from 'node:assert/strict';
import { EventEmitter } from 'node:events';
import { OnlineSession } from '../web/online.js';
import { FileChatStore,chatInput } from '../server/chat.js';
import { RoomStore } from '../server/rooms.js';

// Transporte simulado: ejercita cliente y servidor juntos sin necesitar puertos de red.
class Hub {
 constructor(){this.store=new RoomStore({dice:()=>[1,2]});this.chat=new FileChatStore();this.clients=[];this.loseNextReply=false;}
 io=()=>{const socket=new EventEmitter();socket.connected=false;socket.connect=()=>{socket.connected=true;queueMicrotask(()=>socket.emit('connect'));};socket.disconnect=()=>{socket.connected=false;socket.emit('disconnect');};socket.timeout=()=>({emitWithAck:(event,input)=>this.request(socket,event,input)});this.clients.push(socket);return socket;};
 publish(room){for(const socket of this.clients)if(socket.connected&&socket.credential?.code===room.code)socket.emit('room:state',this.snapshot(room));}
 snapshot(room){return this.store.publicRoom(room,this.clients.filter(s=>s.connected&&s.credential?.code===room.code).map(s=>s.playerId));}
 async request(socket,event,input){
  try{
   let result;
   if(event==='room:create')result=await this.store.create(input);
   if(event==='room:join')result=await this.store.join(input.code,input);
   if(result){socket.credential={code:result.room.code,token:result.token};socket.playerId=result.playerId;this.publish(result.room);return {ok:true,room:this.snapshot(result.room),token:result.token,playerId:result.playerId};}
   if(event==='room:resume'){const {room,member}=this.store.authenticate(input.code,input.token);socket.credential=input;socket.playerId=member.id;this.publish(room);return {ok:true,room:this.snapshot(room),playerId:member.id};}
   if(event==='room:start'){const {room}=await this.store.start(socket.credential.code,socket.credential.token);this.publish(room);return {ok:true,room:this.snapshot(room)};}
   if(event==='game:action'){
    const {room,duplicate}=await this.store.command(socket.credential.code,socket.credential.token,input);this.publish(room);
    if(this.loseNextReply){this.loseNextReply=false;return Promise.reject(new Error('Se perdió la confirmación'));}
    return {ok:true,room:this.snapshot(room),duplicate};
   }
   if(event==='chat:history')return {ok:true,code:socket.credential.code,messages:await this.chat.history(socket.credential.code)};
   if(event==='chat:send'){
    const {member}=this.store.authenticate(socket.credential.code,socket.credential.token),code=socket.credential.code;
    const result=await this.chat.append(code,member,chatInput(input));
    if(!result.duplicate)for(const peer of this.clients)if(peer.connected&&peer.credential?.code===code)peer.emit('chat:message',{code,message:result.message});
    if(this.loseNextReply){this.loseNextReply=false;return Promise.reject(new Error('Confirmación perdida'));}
    return {ok:true,code,...result};
   }
   if(event==='room:leave'){socket.credential=null;return {ok:true};}
  }catch(error){return {ok:false,error:error.message,...(socket.credential?{room:this.snapshot(this.store.lookup(socket.credential.code))}:{})};}
 }
}
function client(hub){return new OnlineSession({onRoom:()=>{},onStatus:()=>{},loadClient:async()=>({io:hub.io})});}
function storage(){const data=new Map();Object.defineProperty(globalThis,'localStorage',{configurable:true,value:{getItem:k=>data.get(k)||null,setItem:(k,v)=>data.set(k,v)}});}
const tick=()=>new Promise(resolve=>setImmediate(resolve));

test('dos clientes entran, sincronizan una partida y recuperan su identidad al reconectar',async()=>{
 storage();const hub=new Hub(),a=client(hub),b=client(hub);
 await a.enter('create',{name:'Ana',piece:0});await b.enter('join',{code:a.room.code,name:'Luis',piece:1});
 assert.equal(a.room.members.length,2);assert.equal(b.playerId,1);
 await a.start();assert.equal(a.room.game.phase,'order');assert.deepEqual(a.room,b.room);
 await a.action({type:'roll',dice:[6,6]});assert.deepEqual(a.room.game.dice,[1,2]);assert.deepEqual(a.room,b.room);
 b.socket.disconnect();assert.equal(b.ready,false);b.socket.connect();await tick();await tick();
 assert.equal(b.ready,true);assert.equal(b.playerId,1);assert.deepEqual(b.room.game,a.room.game);
 const c=client(hub);await c.resume(c.remembered(a.room.code));assert.equal(c.playerId,1);assert.equal(c.room.game.order.rolls[0],3);
});

test('confirmación perdida se reintenta con el mismo ID sin ejecutar dos veces',async()=>{
 storage();const hub=new Hub(),a=client(hub),b=client(hub);
 await a.enter('create',{name:'Ana',piece:0});await b.enter('join',{code:a.room.code,name:'Luis',piece:1});await a.start();
 const revision=a.room.revision;hub.loseNextReply=true;
 const result=await a.action({type:'roll'});assert.equal(result.duplicate,true);assert.equal(a.room.revision,revision+1);assert.equal(a.pendingCommand,null);assert.equal(a.pending,false);
});

test('un rechazo confirmado sincroniza y libera el bloqueo de la siguiente decisión',async()=>{
 storage();const hub=new Hub(),a=client(hub),b=client(hub);
 await a.enter('create',{name:'Ana',piece:0});await b.enter('join',{code:a.room.code,name:'Luis',piece:1});await a.start();
 await assert.rejects(b.action({type:'roll'}),/turno/);assert.equal(b.pendingCommand,null);assert.equal(b.pending,false);
 await a.action({type:'roll'});await b.action({type:'roll'});assert.equal(b.room.game.order.pending[0],0);
});

test('chat: confirmación perdida, reconexión, deduplicación y cambio de sala',async()=>{
 storage();const hub=new Hub(),a=client(hub),b=client(hub);
 await a.enter('create',{name:'Ana',piece:0});await b.enter('join',{code:a.room.code,name:'Luis',piece:1});
 hub.loseNextReply=true;await assert.rejects(a.sendChat('hola'),/confirmación/);const pending=a.chatPending.id;
 assert.equal(a.messages.length,1);assert.equal(b.messages.length,1);
 const retried=await a.sendChat('hola');assert.equal(retried.duplicate,true);assert.equal(retried.message.clientId,pending);assert.equal(a.messages.length,1);assert.equal(a.chatPending,null);
 b.socket.disconnect();await a.sendChat('¿Volviste?');assert.equal(b.messages.length,1);
 b.socket.connect();await tick();await tick();assert.equal(b.messages.length,2);
 b.socket.emit('chat:message',{code:'OTRA2345',message:{id:'foreign',text:'Otro chat'}});assert.equal(b.messages.length,2);
 await b.leave();assert.equal(b.messages.length,0);await b.enter('create',{name:'Luis',piece:1});assert.equal(b.messages.length,0);
});
