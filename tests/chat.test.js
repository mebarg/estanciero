import test from 'node:test';
import assert from 'node:assert/strict';
import { mkdtemp,rm } from 'node:fs/promises';
import { tmpdir } from 'node:os';
import path from 'node:path';
import { FileChatStore,PostgresChatStore,chatInput } from '../server/chat.js';
import { PostgresRoomStore } from '../server/postgres-rooms.js';
import { embeddedPool } from './helpers/embedded-pg.js';

const member={id:0,name:'Ana',piece:0};
test('chat valida texto, límites e identificadores',()=>{
 for(const input of [null,{}, {id:'valid_id',text:'  '},{id:'valid_id',text:'x'.repeat(501)},{id:'bad!',text:'hola'},{id:'valid_id',text:42}])assert.throws(()=>chatInput(input));
 assert.deepEqual(chatInput({id:'valid_id',text:' hola '}),{clientId:'valid_id',text:'hola'});
});

test('chat en archivo persiste, aísla salas y deduplica al reiniciar',async()=>{
 const directory=await mkdtemp(path.join(tmpdir(),'estanciero-chat-'));
 try{
  const chat=new FileChatStore(directory);await chat.load();
  const input=chatInput({id:'message_01',text:'hola'}),first=await chat.append('ABCD2345',member,input);
  const restored=new FileChatStore(directory);await restored.load();assert.deepEqual(await restored.history('ABCD2345'),[first.message]);assert.deepEqual(await restored.history('EFGH2345'),[]);
  const duplicate=await restored.append('ABCD2345',member,input);assert.equal(duplicate.duplicate,true);assert.equal(duplicate.message.id,first.message.id);
  await restored.append('ABCD2345',{id:1,name:'Luis',piece:1},input);assert.equal((await restored.history('ABCD2345')).length,2);
  for(let n=0;n<102;n++)await restored.append('ABCD2345',member,chatInput({id:'retained_'+n,text:String(n)}));
  assert.equal((await restored.history('ABCD2345')).length,100);assert.equal((await restored.history('ABCD2345'))[0].text,'2');await restored.close();
 }finally{await rm(directory,{recursive:true,force:true});}
});

test('chat PostgreSQL conserva historial, revierte fallos y mantiene intactas las partidas',async()=>{
 const engine=await embeddedPool(),store=new PostgresRoomStore({pool:engine.pool});
 try{
  await store.load();const chat=new PostgresChatStore(store);await chat.load();await chat.load();
  const a=await store.create({name:'Ana',piece:0}),b=await store.create({name:'Luis',piece:1});
  const input=chatInput({id:'message_01',text:'Hola'}),first=await chat.append(a.room.code,member,input);
  assert.equal((await chat.append(a.room.code,member,input)).duplicate,true);assert.deepEqual(await chat.history(b.room.code),[]);
  const restored=new PostgresChatStore(new PostgresRoomStore({pool:engine.pool}));assert.deepEqual(await restored.history(a.room.code),[first.message]);
  engine.pool.failNextCommit();await assert.rejects(chat.append(a.room.code,member,chatInput({id:'rollback_01',text:'No confirmado'})),/simulado/);assert.deepEqual(await chat.history(a.room.code),[first.message]);
  await chat.append(a.room.code,member,chatInput({id:'rollback_01',text:'Ahora sí'}));assert.equal((await chat.history(a.room.code)).length,2);
  for(let n=0;n<102;n++)await chat.append(a.room.code,member,chatInput({id:'retained_'+n,text:String(n)}));
  const history=await chat.history(a.room.code);assert.equal(history.length,100);assert.equal(history[0].text,'2');assert.equal(history.at(-1).text,'101');assert.deepEqual(await store.lookup(a.room.code),a.room);
 }finally{await store.close();await engine.close();}
});
