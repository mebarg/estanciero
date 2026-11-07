import { TableSounds, TableExperience, centerOf } from '../web/experience.js';
import test from 'node:test';
import assert from 'node:assert/strict';
import vm from 'node:vm';
import { readFileSync } from 'node:fs';
import * as game from '../web/game.js';
import { OnlineSession } from '../web/online.js';
import { cards } from '../web/cards.js';
import { pieces,pieceWindow,pieceSheet } from '../web/pieces.js';
import { polygons } from '../web/geometry.js';

// DOM mínimo para comprobar decisiones y transiciones de la UI; no simula CSS ni layout.
function boot({animationSleep,animate=false}={}){
 const nodes=new Map();
 class Element {
  constructor(tag='div'){this.tagName=tag;this.children=[];this.listeners={};this.open=false;this.value='2';this.dataset={};this.className='';this.classList={toggle(){},contains:name=>this.className.split(' ').includes(name)};}
  set innerHTML(html){this.html=html;for(const m of html.matchAll(/id="([^"]+)"/g))nodes.set(m[1],new Element());}
  get innerHTML(){return this.html??'';}
  setAttribute(k,v){this[k]=v;}append(...els){this.children.push(...els);}replaceChildren(){this.children=[];}
  addEventListener(name,fn){(this.listeners[name]??=[]).push(fn);}showModal(){this.open=true;}
  close(){if(!this.open)return;this.open=false;queueMicrotask(()=>{for(const fn of this.listeners.close??[])fn();});}
  insertAdjacentHTML(_,html){this.innerHTML=this.innerHTML+html;}
 }
 for(const m of readFileSync(new URL('../web/index.html',import.meta.url),'utf8').matchAll(/id="([^"]+)"/g))nodes.set(m[1],new Element());
 const dialogs=()=>['mode-dialog','online-dialog','setup-dialog','info-dialog','arrival-dialog'].map(id=>nodes.get(id));
 const document={getElementById:id=>nodes.get(id)||null,createElementNS:(_,tag)=>new Element(tag),querySelectorAll:selector=>selector==='dialog'?dialogs():[]};
 const data=new Map(),localStorage={getItem:k=>data.get(k)||null,setItem:(k,v)=>data.set(k,v)};
 class TestExperience extends TableExperience {constructor(options){super({...options,canAnimate:()=>animate,reduced:()=>false,...(animationSleep?{sleep:animationSleep}:{})});}}
 const context=vm.createContext({...game,OnlineSession,TableSounds,TableExperience:TestExperience,centerOf,cards,pieces,pieceWindow,pieceSheet,polygons,document,localStorage,crypto,structuredClone,Uint32Array,Uint8Array,setTimeout,queueMicrotask,URL,location:{href:'http://localhost:5187/'},history:{replaceState(){}},console});
 vm.runInContext(readFileSync(new URL('../web/app.js',import.meta.url),'utf8').replace(/^import .*;\n/gm,''),context);
 return {nodes,run:code=>vm.runInContext(code,context),data};
}
const tick=()=>new Promise(r=>setImmediate(r));

test('modo local conserva compra ampliada, cobro único y casillero activo',async()=>{
 const {nodes,run}=boot();assert.equal(nodes.get('mode-dialog').open,true);await nodes.get('choose-local').onclick();assert.equal(nodes.get('setup-dialog').open,true);
 run("state=createGame(['Ana','Luis']);state.phase='roll';state.order=null;dispatch({type:'roll',dice:[1,2]});");
 await run('presentation');assert.match(nodes.get('arrival-content').innerHTML,/PROPIEDAD DISPONIBLE/);assert.match(nodes.get('arrival-content').innerHTML,/purchase-card/);
 nodes.get('arrival-buy').onclick();await tick();assert.equal(run('state.properties[3].owner'),0);assert.equal(run('state.players[0].cash'),33800);
 assert.equal(nodes.get('board').children.filter(n=>n.class?.includes('active-space')).length,1);
});

test('una carta de movimiento precede la compra y cerrarla no repite el efecto',async()=>{
 const {nodes,run}=boot();
 run("state=createGame(['Ana','Luis']);state.phase='roll';state.order=null;state.players[0].position=12;state.decks.luck=['s-salta',...state.decks.luck.filter(id=>id!=='s-salta')];dispatch({type:'roll',dice:[1,2]});");
 await run('presentation');assert.match(nodes.get('arrival-content').innerHTML,/drawn-card luck/);assert.equal(run('state.players[0].position'),13);
 nodes.get('acknowledge-card').onclick();await tick();assert.match(nodes.get('arrival-content').innerHTML,/PROPIEDAD DISPONIBLE/);
 nodes.get('arrival-skip').onclick();await tick();assert.equal(run('state.lastCard.sequence'),1);
});

test('online: sala de espera, controles ajenos ocultos y retorno a partida local sin sobrescribirla',async()=>{
 const {nodes,run,data}=boot();
 run("localState=state;online.playerId=1;online.ready=true;online.credential={code:'ABCD2345',token:'test'};online.room={code:'ABCD2345',revision:1,hostId:0,members:[{id:0,name:'Ana',piece:0,connected:true},{id:1,name:'Luis',piece:1,connected:true}],game:null};receiveOnline(online.room);");
 assert.equal(nodes.get('online-lobby').hidden,false);assert.equal(nodes.get('game-layout').hidden,true);assert.equal(nodes.get('start-online').hidden,true);
 run("online.room.game=createGame(['Ana','Luis']);online.room.game.properties[3]={owner:0,level:0,mortgaged:false,interestDue:false};receiveOnline(online.room);selected=3;renderProperty();");
 assert.match(nodes.get('actions').innerHTML,/Esperando a Ana/);assert.doesNotMatch(nodes.get('actions').innerHTML,/id="roll-button"/);
 assert.doesNotMatch(nodes.get('property-panel').innerHTML,/id="mortgage-button"/);
 assert.equal(data.has('estanciero-partida-v1'),false);
 await run('returnLocal()');assert.equal(run('onlineMode'),false);assert.equal(nodes.get('game-layout').hidden,false);assert.equal(run('state.players[0].name'),'Jugador 1');
});

test('las decisiones y ventanas esperan los dados y el recorrido, sin ejecutar una compra temprana',async()=>{
 let release,pauses=0;const wait=new Promise(resolve=>{release=resolve;});
 const {nodes,run}=boot({animate:true,animationSleep:()=>++pauses===1?wait:Promise.resolve()});
 run("state=createGame(['Ana','Luis']);state.phase='roll';state.order=null;dispatch({type:'roll',dice:[1,2]});");
 assert.equal(run('experience.busy'),true);assert.equal(nodes.get('arrival-dialog').open,false);
 assert.match(nodes.get('actions').innerHTML,/recorrido|rodando/);
 run("dispatch({type:'buy'});");assert.equal(run('state.properties[3]'),undefined);
 release();await run('presentation');
 assert.equal(run('experience.busy'),false);assert.equal(nodes.get('arrival-dialog').open,true);assert.match(nodes.get('arrival-content').innerHTML,/PROPIEDAD DISPONIBLE/);
 nodes.get('arrival-buy').onclick();assert.equal(run('state.properties[3].owner'),0);
});

test('una actualización de presencia online no vuelve a reproducir el último movimiento',async()=>{
 let pauses=0;
 const {run}=boot({animate:true,animationSleep:async()=>{pauses++;}});
 run("state=createGame(['Ana','Luis']);state.phase='roll';state.order=null;applyState(act(state,{type:'roll',dice:[1,2]}));");await run('presentation');
 const first=pauses;run('applyState(structuredClone(state));');await run('presentation');assert.equal(pauses,first);
});

test('tocar los dados tira sólo cuando corresponde y bloquea otra tirada durante la decisión de llegada',async()=>{
 const {nodes,run}=boot();
 run("state=createGame(['Ana','Luis']);state.phase='roll';state.order=null;render();");
 assert.equal(nodes.get('dice').disabled,false);
 await nodes.get('dice').listeners.click[0]();await run('presentation');
 assert.equal(run('state.motion.sequence'),1);assert.equal(nodes.get('dice').disabled,true);
 await nodes.get('dice').listeners.click[0]();assert.equal(run('state.motion.sequence'),1);
 run("state=createGame(['Ana','Luis']);onlineMode=true;online.ready=true;online.playerId=1;online.room={members:[{connected:true},{connected:true}]};render();");
 assert.equal(nodes.get('dice').disabled,true);assert.equal(run('canRollDice()'),false);
});
