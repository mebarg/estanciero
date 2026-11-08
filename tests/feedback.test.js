import test from 'node:test';
import assert from 'node:assert/strict';
import { createGame,act,validSave,money } from '../web/game.js';
import { tableChanges,TableFeedback,innerEdge } from '../web/feedback.js';
import { TableSounds } from '../web/experience.js';
import { polygons } from '../web/geometry.js';
const fresh=()=>{const s=createGame(['Ana','Luis']);s.phase='roll';s.order=null;return s;};
const property=(owner,level=0)=>({owner,level,mortgaged:false,interestDue:false});

test('compra, construcción y presencia: los efectos comparan estados sin cambiar las reglas',()=>{
 let before=fresh();before=act(before,{type:'roll',dice:[1,2]});const saved=structuredClone(before),after=act(before,{type:'buy'}),c=tableChanges(before,after);
 assert.deepEqual(before,saved);assert.deepEqual(c.titles,[{id:3,playerId:0}]);assert.equal(c.cash[0].delta,-1200);assert.equal(validSave(after),true);
 const repeated=tableChanges(after,structuredClone(after));assert.equal(repeated.titles.length,0);assert.equal(repeated.cash.length,0);assert.equal(repeated.turn,null);assert.equal(repeated.closed,null);
 const province=fresh();for(const id of [1,2,3])province.properties[id]=property(0);const built=act(province,{type:'build',id:1,playerId:0});assert.deepEqual(tableChanges(province,built).buildings,[{id:1,level:1,playerId:0}]);
 for(const id of [1,2,3])province.properties[id].level=4;const estate=act(province,{type:'build',id:1,playerId:0});assert.equal(estate.properties[1].level,5);assert.equal(tableChanges(province,estate).buildings[0].level,5);
});

test('remate que termina con la primera oferta conserva adjudicatario e importe exactos',()=>{
 const start=fresh();start.properties[3]=property(0);const auction=act(start,{type:'auction',id:3,playerId:0});assert.equal(auction.auction.highBidder,null);
 const sold=act(auction,{type:'bid',amount:500,playerId:1});assert.equal(sold.auction,null);assert.equal(validSave(sold),true);assert.deepEqual(tableChanges(auction,sold).closed,{id:3,playerId:1,amount:500});assert.equal(tableChanges(sold,structuredClone(sold)).closed,null);
 const withoutBids=act(auction,{type:'pass',playerId:1});assert.deepEqual(tableChanges(auction,withoutBids).closed,{id:3,playerId:null,amount:0});assert.equal(validSave(withoutBids),true);
 const bad=structuredClone(sold);bad.lastAuction.amount=-1;assert.equal(validSave(bad),false);delete bad.lastAuction;assert.equal(validSave(bad),true);
});

function harness({reduced=false}={}){
 const nodes=new Map(),animations=[],sounds=[],frames=[];let time=0;
 const element=()=>({textContent:'',hidden:false,style:{},children:[],setAttribute(){},append(...children){this.children.push(...children);},remove(){this.removed=true;},getBoundingClientRect:()=>({left:50,top:80,width:80,height:50,right:130}),animate(keyframes,options){let finish;const finished=new Promise(resolve=>{finish=resolve;});const animation={keyframes,options,finished,cancel(){finish();},finish};animations.push(animation);return animation;}});
 for(const id of ['feedback-layer','table-feedback','balance-0','balance-1','player-row-0','player-row-1','space-3','active-player','auction-summary','buildings-1','received-card','luck-deck'])nodes.set(id,element());
 const doc={getElementById:id=>nodes.get(id),createElement:()=>element(),createElementNS:()=>element()};
 const fx=new TableFeedback({document:doc,sounds:{play:kind=>sounds.push(kind)},reduced:()=>reduced,clock:()=>time,frame:fn=>{frames.push(fn);return frames.length;},cancelFrame(){},schedule:()=>0});
 return {fx,nodes,sounds,animations,frames,time:value=>{time=value;}};
}

test('dinero espera la llegada, cuenta hasta el saldo real y sobrevive a un repintado',()=>{
 const h=harness(),before=fresh(),after=structuredClone(before);after.players[0].cash-=2500;
 h.fx.enqueue(before,after);h.fx.refresh();assert.equal(h.nodes.get('balance-0').textContent,money(35000));assert.equal(h.sounds.length,0);
 h.fx.flush();h.time(325);h.fx.refresh();const middle=h.nodes.get('balance-0').textContent;assert.notEqual(middle,money(35000));assert.notEqual(middle,money(32500));
 h.nodes.get('balance-0').textContent='repintado';h.fx.refresh();assert.equal(h.nodes.get('balance-0').textContent,middle);
 h.time(650);h.fx.refresh();assert.equal(h.nodes.get('balance-0').textContent,money(32500));assert.equal(after.players[0].cash,32500);assert.deepEqual(h.sounds,['pay']);
 h.fx.reset();assert.equal(h.fx.balances.size,0);
});

test('título, carta y martillo tienen animación; movimiento reducido conserva el resultado sin vuelos',()=>{
 const h=harness();const before=fresh();before.phase='buy';before.players[0].position=3;const after=act(before,{type:'buy'});h.fx.enqueue(before,after);h.fx.flush();assert.ok(h.sounds.includes('purchase'));assert.ok(h.nodes.get('feedback-layer').children.some(node=>node.className==='title-flight'));assert.ok(h.animations.some(a=>a.options.duration===800));
 h.fx.revealCard('luck');assert.ok(h.sounds.includes('card'));assert.ok(h.animations.some(a=>a.keyframes[0].transform?.includes('rotateY(-180deg)')));
 h.fx.hammer();assert.ok(h.animations.some(a=>a.options.duration===700));h.fx.reset();assert.equal(h.fx.animations.size,0);
 const reduced=harness({reduced:true});reduced.fx.enqueue(before,after);reduced.fx.flush();reduced.fx.revealCard('luck');reduced.fx.hammer();assert.equal(reduced.animations.length,0);assert.equal(reduced.nodes.get('feedback-layer').children.length,0);assert.equal(reduced.nodes.get('balance-0').textContent,money(after.players[0].cash));assert.ok(reduced.sounds.includes('purchase'));assert.match(reduced.nodes.get('table-feedback').textContent,/patrimonio/);
});

test('el aviso de turno online sólo suena para el jugador al que le toca',()=>{
 const before=fresh();before.phase='end';const after=act(before,{type:'end'});
 const mine=harness();mine.fx.enqueue(before,after,{online:true,playerId:1});mine.fx.flush();assert.ok(mine.sounds.includes('turn'));
 const other=harness();other.fx.enqueue(before,after,{online:true,playerId:0});other.fx.flush();assert.equal(other.sounds.includes('turn'),false);
 const same=harness();same.fx.enqueue(after,structuredClone(after),{online:true,playerId:1});same.fx.flush();assert.deepEqual(same.sounds,[]);
 for(const points of polygons){const edge=innerEdge(points);assert.ok(Number.isFinite(edge.a.x));assert.ok(Number.isFinite(edge.b.y));}
});

test('audio separa efectos y avisos, persiste volumen y silencia el MP3 al desactivar efectos',async()=>{
 const data=new Map(),storage={getItem:key=>data.get(key),setItem:(key,value)=>data.set(key,value)};let notes=0,stops=0;
 const parameter=()=>({value:0,setValueAtTime(){},exponentialRampToValueAtTime(){}});
 class Context{constructor(){this.state='running';this.currentTime=0;this.destination={};}createGain(){return {gain:parameter(),connect(){}};}createOscillator(){return {frequency:parameter(),connect(){},disconnect(){},start(){notes++;},stop(){}};}}
 const audio=new TableSounds({storage,Context});await audio.unlock();audio.configure({volume:.4,effects:false});audio.play('purchase');assert.equal(notes,0);audio.play('chat');assert.equal(notes,2);assert.equal(audio.master.gain.value,.18*.4);
 audio.configure({effects:true,alerts:false});audio.play('turn');assert.equal(notes,2);audio.play('money');assert.equal(notes,4);
 audio.diceSource={stop(){stops++;},disconnect(){}};audio.configure({effects:false});assert.equal(stops,1);assert.equal(audio.diceRolling,false);
 const restored=new TableSounds({storage,Context});assert.equal(restored.volume,.4);assert.equal(restored.effects,false);assert.equal(restored.alerts,false);
 audio.configure({effects:true,alerts:true,volume:0});audio.play('build');audio.play('request');assert.equal(notes,4);audio.toggle();assert.equal(new TableSounds({storage,Context}).enabled,false);
});
