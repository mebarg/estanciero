import test from 'node:test';
import assert from 'node:assert/strict';
import { PostgresRoomStore } from '../server/postgres-rooms.js';
import { RoomStore } from '../server/rooms.js';
import { createRoomStorage } from '../server/storage.js';
import { validSave } from '../web/game.js';
import { embeddedPool } from './helpers/embedded-pg.js';

async function createTable(store){const a=await store.create({name:'Ana',piece:0}),b=await store.join(a.room.code,{name:'Luis',piece:1});await store.start(a.room.code,a.token);return {a,b};}
async function command(store,seat,action,id,revision){return store.command(seat.room.code,seat.token,{id,action,revision:revision??(await store.lookup(seat.room.code)).revision});}

test('PostgreSQL embebido: salas, transacciones, idempotencia y recuperación',async t=>{
 const engine=await embeddedPool(),{pool}=engine,store=new PostgresRoomStore({pool,dice:()=>[1,2]});
 try{
  await store.load();await store.load();await store.health();
  await t.test('crear, elegir piezas y empezar conserva el contrato del servidor',async()=>{
   const a=await store.create({name:'Ana',piece:0});
   await assert.rejects(store.join(a.room.code,{name:'Otra',piece:0}),/ya fue/);
   const b=await store.join(a.room.code,{name:'Luis',piece:1});
   await assert.rejects(store.start(a.room.code,b.token),/Sólo/);
   const {room}=await store.start(a.room.code,a.token);assert.equal(validSave(room.game),true);
   assert.equal((await store.authenticate(a.room.code,b.token)).member.id,1);
   const view=store.publicRoom(room);assert.equal(view.game.decks,undefined);assert.equal(JSON.stringify(view).includes('tokenHash'),false);
   const row=(await pool.query('SELECT data FROM estanciero_rooms WHERE code = $1',[room.code])).rows[0];assert.equal(JSON.stringify(row.data).includes(a.token),false);
  });
  await t.test('confirmar después de COMMIT y reintentar no repite una tirada',async()=>{
   const {a}=await createTable(store),revision=(await store.lookup(a.room.code)).revision;
   await command(store,a,{type:'roll',dice:[6,6]},'repeat_command',revision);
   const first=await store.lookup(a.room.code);assert.deepEqual(first.game.dice,[1,2]);
   const result=await command(store,a,{type:'roll'},'repeat_command',revision);
   assert.equal(result.duplicate,true);assert.deepEqual(result.room,first);
   assert.ok(pool.log.includes('COMMIT'));
  });
  await t.test('un fallo antes de confirmar revierte estado y recibo, y permite reintentar',async()=>{
   const {a}=await createTable(store),before=await store.lookup(a.room.code);
   pool.failNextCommit();await assert.rejects(command(store,a,{type:'roll'},'rollback_command',before.revision),/simulado/);
   assert.deepEqual(await store.lookup(a.room.code),before);assert.ok(pool.log.includes('ROLLBACK'));
   await command(store,a,{type:'roll'},'rollback_command',before.revision);
   assert.equal((await store.lookup(a.room.code)).revision,before.revision+1);
  });
  await t.test('otra instancia lee las salas y credenciales sin cargar un mapa completo',async()=>{
   const {a,b}=await createTable(store);const restored=new PostgresRoomStore({pool});await restored.load();
   assert.equal((await restored.authenticate(a.room.code,b.token)).member.id,1);
   assert.equal(restored.rooms,undefined);assert.equal(validSave((await restored.lookup(a.room.code)).game),true);
  });
  await t.test('dos decisiones con la misma revisión sólo permiten una actualización',async()=>{
   const {a}=await createTable(store),revision=(await store.lookup(a.room.code)).revision,other=new PostgresRoomStore({pool,dice:()=>[2,3]});
   const results=await Promise.allSettled([command(store,a,{type:'roll'},'concurrent_left',revision),command(other,a,{type:'roll'},'concurrent_right',revision)]);
   assert.equal(results.filter(r=>r.status==='fulfilled').length,1);assert.equal(results.filter(r=>r.status==='rejected').length,1);
   assert.equal((await store.lookup(a.room.code)).revision,revision+1);
   assert.ok(pool.log.some(sql=>sql.endsWith('FOR UPDATE')));
  });
  await t.test('actualizar una sala conserva las otras y las acciones sin permiso no escriben',async()=>{
   const {a,b}=await createTable(store),other=await store.create({name:'Sol',piece:2}),before=await store.lookup(other.room.code);
   await assert.rejects(command(store,b,{type:'roll'},'forbidden_roll'),/turno/);
   await command(store,a,{type:'roll'},'allowed_roll');assert.deepEqual(await store.lookup(other.room.code),before);
  });
  await t.test('el esquema rechaza discrepancias entre revisión y documento',async()=>{
   const {a}=await createTable(store);
   await assert.rejects(pool.query('UPDATE estanciero_rooms SET revision = revision + 1 WHERE code = $1',[a.room.code]),error=>error.code==='23514');
  });
  await t.test('el límite de salas se respeta sin cargar todos sus documentos',async()=>{
   const {rows}=await pool.query('SELECT count(*) AS total FROM estanciero_rooms');
   const limited=new PostgresRoomStore({pool,maxRooms:Number(rows[0].total)});
   await assert.rejects(limited.create({name:'Extra',piece:5}),/límite/);
  });
 }finally{await store.close();await engine.close();}
});

test('configuración: archivo por defecto y PostgreSQL explícito, sin caída automática a JSON',async()=>{
 assert.ok(createRoomStorage({env:{}}) instanceof RoomStore);
 assert.throws(()=>createRoomStorage({env:{ESTANCIERO_STORAGE:'otro'}}),/debe ser/);
 assert.throws(()=>createRoomStorage({env:{ESTANCIERO_STORAGE:'postgres',PGPORT:'incorrecto'}}),/PGPORT/);
 const failure={code:'ECONNREFUSED'},pool={query:async()=>{throw failure;},end:async()=>{}};
 const store=createRoomStorage({env:{ESTANCIERO_STORAGE:'postgres',PGPORT:'5433'},pool});
 await assert.rejects(store.load(),error=>error===failure);assert.ok(store instanceof PostgresRoomStore);assert.equal(store.rooms,undefined);await store.close();
});
