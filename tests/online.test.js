import test from 'node:test';
import assert from 'node:assert/strict';
import { mkdtemp,readFile,rm } from 'node:fs/promises';
import os from 'node:os';
import path from 'node:path';
import { RoomStore,authorizedAction } from '../server/rooms.js';
import { createGame,validSave,spaces } from '../web/game.js';

const command=(store,seat,action,id='command_0001',revision)=>store.command(seat.room.code,seat.token,{id,revision:revision??store.lookup(seat.room.code).revision,action});
async function table(options={}){const store=new RoomStore(options),a=await store.create({name:'Ana',piece:0}),b=await store.join(a.room.code,{name:'Luis',piece:1});await store.start(a.room.code,a.token);return {store,a,b};}

test('salas privadas: códigos, piezas exclusivas, máximo de seis y comienzo sólo por el anfitrión',async()=>{
 const store=new RoomStore(),a=await store.create({name:'Ana',piece:0});
 assert.match(a.room.code,/^[A-Z2-9]{8}$/);assert.equal(a.token.length,64);
 await assert.rejects(store.start(a.room.code,a.token),/Esperá/);
 await assert.rejects(store.join(a.room.code,{name:'Otro',piece:0}),/ya fue/);
 const b=await store.join(a.room.code,{name:'Luis',piece:1});
 await assert.rejects(store.start(a.room.code,b.token),/Sólo/);
 for(let piece=2;piece<6;piece++)await store.join(a.room.code,{name:'Persona '+piece,piece});
 await assert.rejects(store.join(a.room.code,{name:'Extra',piece:0}),/seis/);
 await store.start(a.room.code,a.token);assert.equal(store.lookup(a.room.code).game.players.length,6);
 await assert.rejects(store.join(a.room.code,{name:'Extra',piece:0}),/ya empezó/);
});

test('el servidor decide los dados, rechaza suplantación y no acepta jugadas fuera de turno',async()=>{
 const {store,a,b}=await table({dice:()=>[1,2]});
 await assert.rejects(command(store,b,{type:'roll'}),/turno/);
 await command(store,a,{type:'roll',dice:[6,6],playerId:1});
 assert.deepEqual(store.lookup(a.room.code).game.dice,[1,2]);
 assert.equal(store.lookup(a.room.code).game.order.rolls[0],3);
 assert.throws(()=>store.authenticate(a.room.code,'0'.repeat(64)),/recuperar/);
 assert.throws(()=>store.authenticate(a.room.code,a.room.members[0].tokenHash),/recuperar/);
});

test('reintentar el mismo identificador no vuelve a comprar ni a tirar, incluso después de cambiar la versión',async()=>{
 const {store,a}=await table({dice:()=>[2,3]});
 const revision=store.lookup(a.room.code).revision;
 await command(store,a,{type:'roll'},'same_command',revision);
 const after=structuredClone(store.lookup(a.room.code));
 const retry=await command(store,a,{type:'roll'},'same_command',revision);
 assert.equal(retry.duplicate,true);assert.deepEqual(store.lookup(a.room.code),after);
 await assert.rejects(command(store,a,{type:'roll'},'other_command',revision),/mesa cambió/);
});

test('se guardan credenciales resumibles, estados y recibos después de reiniciar; no se publican secretos',async()=>{
 const directory=await mkdtemp(path.join(os.tmpdir(),'estanciero-rooms-'));
 try{
   const {store,a}=await table({directory,dice:()=>[3,4]});
   const revision=store.lookup(a.room.code).revision;
   await command(store,a,{type:'roll'},'persist_command',revision);
   const restored=new RoomStore({directory});await restored.load();
   const {room,member}=restored.authenticate(a.room.code,a.token);
   assert.equal(member.id,0);assert.equal(validSave(room.game),true);
   assert.equal((await command(restored,a,{type:'roll'},'persist_command',revision)).duplicate,true);
   const view=restored.publicRoom(room,[0]);
   assert.equal(view.game.decks,undefined);assert.equal(view.members[0].connected,true);
   assert.equal(JSON.stringify(view).includes('tokenHash'),false);assert.equal(JSON.stringify(view).includes('receipts'),false);
   const disk=await readFile(path.join(directory,'rooms.json'),'utf8');assert.equal(disk.includes(a.token),false);
 }finally{await rm(directory,{recursive:true,force:true});}
});

test('las autorizaciones cubren cobros propios, títulos propios, tarjetas de libertad y comprador de una venta',()=>{
 const g=createGame(['Ana','Luis']);g.order=null;g.phase='end';
 g.properties[3]={owner:0,level:0,mortgaged:false,interestDue:false};
 g.claims=[{id:1,payee:0,payer:1,amount:80,label:'Alquiler',space:3}];
 assert.throws(()=>authorizedAction(g,1,{type:'claim',id:1}),/propios/);
 assert.throws(()=>authorizedAction(g,1,{type:'mortgage',id:3,playerId:0}),/pertenece/);
 assert.equal(authorizedAction(g,0,{type:'mortgage',id:3,playerId:1}).playerId,0);
 assert.throws(()=>authorizedAction(g,1,{type:'offer-card',id:'d-libertad',buyer:0,price:200}),/pertenece/);
 g.phase='trade';g.trade={buyer:1};
 assert.throws(()=>authorizedAction(g,0,{type:'accept-trade'}),/turno/);
 assert.equal(authorizedAction(g,1,{type:'accept-trade'}).type,'accept-trade');
 g.trade=null;g.phase='auction';g.auction={turn:1};
 assert.throws(()=>authorizedAction(g,0,{type:'bid',amount:1000,playerId:1}),/turno/);
 assert.equal(authorizedAction(g,1,{type:'bid',amount:1000,playerId:0}).playerId,1);
});

test('multas manuales sólo por anfitrión y acciones desconocidas o importes inválidos se rechazan',()=>{
 const g=createGame(['Ana','Luis']);g.order=null;g.phase='roll';
 assert.throws(()=>authorizedAction(g,1,{type:'fine',playerId:0}),/Sólo/);
 assert.equal(authorizedAction(g,0,{type:'fine',playerId:1},{host:true}).playerId,1);
 assert.throws(()=>authorizedAction(g,0,{type:'replace-state',cash:999999}),/desconocida/);
 g.phase='auction';g.auction={turn:0};assert.throws(()=>authorizedAction(g,0,{type:'bid',amount:Infinity}),/válida/);
});

test('dos decisiones simultáneas con la misma versión se serializan y sólo una puede ejecutarse',async()=>{
 const {store,a}=await table({dice:()=>[1,2]});
 const revision=store.lookup(a.room.code).revision;
 const results=await Promise.allSettled([command(store,a,{type:'roll'},'concurrent_a',revision),command(store,a,{type:'roll'},'concurrent_b',revision)]);
 assert.equal(results.filter(r=>r.status==='fulfilled').length,1);assert.equal(results.filter(r=>r.status==='rejected').length,1);
 assert.equal(store.lookup(a.room.code).revision,revision+1);
});

test('quiebra online: al terminar los remates avanza sin pedir una acción al jugador eliminado',async()=>{
 const {store,a,b}=await table();await store.transaction(()=>{const room=store.lookup(a.room.code);room.game=null;});
 const c=await store.join(a.room.code,{name:'Sol',piece:2});await store.start(a.room.code,a.token);
 await store.transaction(()=>{const g=store.lookup(a.room.code).game;g.order=null;g.phase='debt';g.players[0].cash=0;g.properties[1]={owner:0,level:0,mortgaged:false,interestDue:false};g.debt={payer:0,amount:5000,creditor:null,reason:'impuesto',resume:'end'};});
 await command(store,a,{type:'bankrupt'},'bankruptcy_1');assert.equal(store.lookup(a.room.code).game.phase,'auction');
 await command(store,b,{type:'pass'},'auction_pass_1');await command(store,c,{type:'pass'},'auction_pass_2');
 const g=store.lookup(a.room.code).game;assert.equal(g.players[0].bankrupt,true);assert.equal(g.phase,'roll');assert.equal(g.turn,1);
});

test('simulaciones online aplican la autorización a cada turno, cobro, deuda y remate',async()=>{
 let seed=312;const random=()=>{seed=(Math.imul(seed,1664525)+1013904223)>>>0;return seed;};
 const store=new RoomStore({dice:()=>[random()%6+1,random()%6+1]});
 const a=await store.create({name:'Ana',piece:0}),b=await store.join(a.room.code,{name:'Luis',piece:1}),c=await store.join(a.room.code,{name:'Sol',piece:2});await store.start(a.room.code,a.token);
 const seats=[a,b,c];
 for(let step=0;step<1500;step++){
  const g=store.lookup(a.room.code).game;if(g.phase==='over')break;
  let actor=g.turn,action;
  if(g.claims.length&&['roll','buy','end'].includes(g.phase)){actor=g.claims[0].payee;action={type:'claim',id:g.claims[0].id};}
  else if(['order','roll'].includes(g.phase))action={type:'roll'};
  else if(g.phase==='buy')action={type:g.players[actor].cash>=spaces[g.players[actor].position].price?'buy':'skip'};
  else if(g.phase==='end')action={type:'end'};
  else if(g.phase==='card-choice'){actor=g.cardChoice.player;action={type:'card-choice',choice:'pay'};}
  else if(g.phase==='auction'){actor=g.auction.turn;action={type:'pass'};}
  else if(g.phase==='debt'){actor=g.debt.payer;const id=Object.keys(g.properties).find(id=>g.properties[id].owner===actor&&!g.properties[id].mortgaged&&!g.properties[id].level);action=id?{type:'mortgage',id:Number(id)}:{type:'bankrupt'};}
  else assert.fail(g.phase);
  await command(store,seats[actor],action,'simulation_'+step);
  assert.equal(validSave(store.lookup(a.room.code).game),true);
 }
});
