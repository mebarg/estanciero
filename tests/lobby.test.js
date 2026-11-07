import test from 'node:test';
import assert from 'node:assert/strict';
import { createApp } from '../server/app.js';
import { RoomStore } from '../server/rooms.js';
import { PostgresRoomStore } from '../server/postgres-rooms.js';
import { lobbyPolicy,visibleRooms } from '../server/lobby.js';
import { createGame } from '../web/game.js';
import { embeddedPool } from './helpers/embedded-pg.js';
import { transport } from './helpers/transport.js';

const policy=lobbyPolicy({});
for(const mode of ['json','postgres'])test(`lobby ${mode}: solicitudes, aprobación, privacidad, caducidad y permisos`,{timeout:15000},async()=>{
 let time=Date.parse('2026-11-07T12:00:00Z');const now=()=>time,engine=mode==='postgres'?await embeddedPool():null;
 const roomStore=engine?new PostgresRoomStore({pool:engine.pool,now}):new RoomStore({now});const app=await createApp({roomStore,now});
 try{
  const {client}=transport(app),host=await client(),visitor=await client(),other=await client();
  const created=await host.send('room:create',{name:'Ana',piece:0,title:'La mesa del sábado',visibility:'public'});assert.equal(created.ok,true);
  const code=created.room.code;
  const privateRoom=await other.send('room:create',{name:'Privada',piece:2});assert.equal(privateRoom.ok,true);
  const listed=await visitor.send('lobby:list');assert.equal(listed.rooms.length,1);assert.equal(listed.rooms[0].title,'La mesa del sábado');assert.equal(listed.rooms[0].canRequest,true);assert.equal(JSON.stringify(listed).includes('tokenHash'),false);assert.equal(listed.rooms[0].game,undefined);
  assert.equal((await visitor.send('room:join',{code,name:'Intruso',piece:1,approved:true})).ok,false);
  const requested=await visitor.send('lobby:request',{code,name:'Luis'});assert.equal(requested.ok,true);const id=requested.request.id;
  assert.equal((await host.send('lobby:requests')).requests[0].name,'Luis');assert.equal((await other.send('lobby:decide',{id,accept:true})).ok,false);
  assert.equal((await visitor.send('lobby:claim',{id,piece:1})).ok,false);
  assert.equal((await host.send('lobby:decide',{id,accept:true})).ok,true);
  assert.equal((await other.send('lobby:claim',{id,piece:1})).ok,false);
  assert.equal((await visitor.send('lobby:claim',{id,piece:0})).ok,false);
  const joined=await visitor.send('lobby:claim',{id,piece:1});assert.equal(joined.ok,true);assert.equal(joined.room.members[1].name,'Luis');assert.equal(joined.playerId,1);
  const repeated=await visitor.send('lobby:claim',{id,piece:2});assert.equal(repeated.playerId,1);assert.equal(repeated.room.members.length,2);
  assert.equal((await visitor.send('lobby:requests')).ok,false);
  const rejectedClient=await client(),rejected=await rejectedClient.send('lobby:request',{code,name:'Rechazado'});assert.equal((await host.send('lobby:decide',{id:rejected.request.id,accept:false})).ok,true);assert.equal((await rejectedClient.send('lobby:claim',{id:rejected.request.id,piece:2})).ok,false);
  const expiring=await client(),expired=await expiring.send('lobby:request',{code,name:'Demorado'});time+=policy.request+1;await app.maintain();assert.equal((await host.send('lobby:decide',{id:expired.request.id,accept:true})).ok,false);
  const late=await client(),lateRequest=await late.send('lobby:request',{code,name:'Tarde'});await host.send('lobby:decide',{id:lateRequest.request.id,accept:true});assert.equal((await host.send('room:start')).ok,true);
  assert.equal((await late.send('lobby:claim',{id:lateRequest.request.id,piece:2})).ok,false);assert.equal((await late.send('lobby:list')).rooms[0].started,true);assert.equal((await late.send('lobby:list')).rooms[0].canRequest,false);
  await host.disconnect();await visitor.disconnect();await new Promise(resolve=>setImmediate(resolve));
  const offline=await late.send('lobby:list');assert.equal(offline.rooms[0].status,'offline');
  time+=policy.offline+1;assert.equal((await late.send('lobby:list')).rooms.length,0);assert.ok(await app.store.lookup(code));
  const resumed=await client();assert.equal((await resumed.send('room:resume',{code,token:created.token})).ok,true);assert.equal((await late.send('lobby:list')).rooms[0].status,'playing');
 }finally{await app.close();await engine?.close();}
});

for(const mode of ['json','postgres'])test(`limpieza ${mode}: plazos, salas conectadas y conservación de actividad`,async()=>{
 let time=Date.parse('2026-11-07T12:00:00Z');const now=()=>time,engine=mode==='postgres'?await embeddedPool():null;
 const store=engine?new PostgresRoomStore({pool:engine.pool,now}):new RoomStore({now});await store.load();
 try{
  const waiting=await store.create({name:'Espera',piece:0,visibility:'public'}),playing=await store.create({name:'Juega',piece:0}),finished=await store.create({name:'Fin',piece:0}),active=await store.create({name:'Conectada',piece:0});
  const setGame=async(code,over)=>{const update=local=>local.transaction(()=>{const room=local.lookup(code);room.game=createGame(['Uno','Dos']);if(over){room.game.phase='over';room.game.order=null;room.game.winner=0;}room.revision++;return {room};});if(engine)await store.mutate(code,update);else await update(store);};
  await setGame(playing.room.code,false);await setGame(finished.room.code,true);
  time+=policy.waiting-1;assert.deepEqual(await store.purgeExpired(time,policy,[active.room.code]),[]);
  time+=2;assert.deepEqual(await store.purgeExpired(time,policy,[active.room.code]),[waiting.room.code]);assert.ok(await store.lookup(playing.room.code));
  time=Date.parse('2026-11-07T12:00:00Z')+policy.finished;assert.deepEqual(await store.purgeExpired(time,policy,[active.room.code]),[finished.room.code]);
  time=Date.parse('2026-11-07T12:00:00Z')+policy.playing-1;await store.markPresence(playing.room.code,true,time);await store.markPresence(playing.room.code,false,time);
  time+=2;assert.deepEqual(await store.purgeExpired(time,policy,[active.room.code]),[]);
  time+=policy.playing;assert.deepEqual(await store.purgeExpired(time,policy,[active.room.code]),[playing.room.code]);
  const list=await store.listRooms();assert.equal(list.length,1);assert.equal(list[0].code,active.room.code);
  // Un reinicio después de una caída no debe borrar una sala que estaba conectada.
  await store.markPresence(active.room.code,true,time);time+=policy.playing+1;await store.prepareOffline(time);
  const afterRestart=await store.listRooms();assert.equal(afterRestart[0].disconnectedAt,new Date(time).toISOString());assert.equal(afterRestart[0].lastActivityAt,new Date(time).toISOString());assert.deepEqual(await store.purgeExpired(time,policy),[]);

 }finally{await store.close();await engine?.close();}
});

test('plazos configurables y partidas terminadas ocultas',()=>{
 assert.throws(()=>lobbyPolicy({ESTANCIERO_WAITING_HOURS:'0'}));assert.equal(lobbyPolicy({ESTANCIERO_OFFLINE_MINUTES:'2'}).offline,120000);
 assert.deepEqual(visibleRooms([{visibility:'public',phase:'over',lastActivityAt:new Date().toISOString()}],()=>[0],Date.now(),policy),[]);
});
