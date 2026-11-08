import { TableSounds, TableExperience, centerOf } from '../web/experience.js';
import test from 'node:test';
import assert from 'node:assert/strict';
import vm from 'node:vm';
import { readFileSync } from 'node:fs';
import * as game from '../web/game.js';
import { TableFeedback,innerEdge } from '../web/feedback.js';
import { Lounge } from '../web/lounge.js';
import { ChatPanel } from '../web/chat.js';
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
  setAttribute(k,v){this[k]=v;}append(...els){this.children.push(...els);}replaceChildren(...els){this.children=els;}focus(){this.focused=true;}
  addEventListener(name,fn){(this.listeners[name]??=[]).push(fn);}showModal(){this.open=true;}
  close(){if(!this.open)return;this.open=false;queueMicrotask(()=>{for(const fn of this.listeners.close??[])fn();});}
  insertAdjacentHTML(_,html){this.innerHTML=this.innerHTML+html;}
 }
 for(const m of readFileSync(new URL('../web/index.html',import.meta.url),'utf8').matchAll(/id="([^"]+)"/g))nodes.set(m[1],new Element());
 const dialogs=()=>['mode-dialog','online-dialog','setup-dialog','info-dialog','arrival-dialog','audio-dialog'].map(id=>nodes.get(id));
 const document={getElementById:id=>nodes.get(id)||null,createElement:tag=>new Element(tag),createElementNS:(_,tag)=>new Element(tag),querySelectorAll:selector=>selector==='dialog'?dialogs():[]};
 const data=new Map(),localStorage={getItem:k=>data.get(k)||null,setItem:(k,v)=>data.set(k,v)};
 class TestExperience extends TableExperience {constructor(options){super({...options,canAnimate:()=>animate,reduced:()=>false,...(animationSleep?{sleep:animationSleep}:{})});}}
 const context=vm.createContext({...game,TableFeedback,innerEdge,Lounge,ChatPanel,OnlineSession,TableSounds,TableExperience:TestExperience,centerOf,cards,pieces,pieceWindow,pieceSheet,polygons,document,localStorage,crypto,structuredClone,Uint32Array,Uint8Array,setTimeout,setInterval,clearInterval,queueMicrotask,URL,location:{href:'http://localhost:5187/'},history:{replaceState(){}},console});
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

test('chat: texto seguro, mensajes sin leer, apertura y limpieza al volver a local',async()=>{
 const {nodes,run}=boot();
 run("online.playerId=0;online.refreshChat=async()=>{};chat.update([{id:'msg1',playerId:1,name:'Luis',piece:1,text:'<img src=x onerror=alert(1)>',createdAt:'2026-11-07T12:00:00.000Z'}],{code:'ABCD2345',history:false,added:[{playerId:1}]});");
 assert.equal(nodes.get('chat-button').hidden,false);assert.equal(nodes.get('chat-unread').textContent,'1');
 const message=nodes.get('chat-messages').children[0];assert.equal(message.children[1].textContent,'<img src=x onerror=alert(1)>');assert.equal(message.children[1].innerHTML,'');
 nodes.get('chat-button').onclick();assert.equal(nodes.get('chat-panel').hidden,false);assert.equal(nodes.get('chat-unread').hidden,true);
 run("online.sendChat=async text=>{if(text==='fallo')throw new Error('Sin conexión');};");
 nodes.get('chat-input').value='hola';await nodes.get('chat-form').listeners.submit[0]({preventDefault(){}});assert.equal(nodes.get('chat-input').value,'');
 nodes.get('chat-input').value='fallo';await nodes.get('chat-form').listeners.submit[0]({preventDefault(){}});assert.equal(nodes.get('chat-input').value,'fallo');assert.equal(nodes.get('chat-error').textContent,'Sin conexión');
 await run('online.leave()');assert.equal(nodes.get('chat-button').hidden,true);assert.equal(nodes.get('chat-panel').hidden,true);assert.equal(nodes.get('chat-messages').children.length,0);
});

test('lounge: salas seguras, solicitud, elección de pieza y decisiones del anfitrión',async()=>{
 const {nodes,run}=boot();
 run("online.listLobby=async()=>[{code:'ABCD2345',title:'<b>Mesa</b>',host:'Ana',members:[{id:0,name:'Ana',piece:0}],started:false,status:'waiting',canRequest:true},{code:'EFGH2345',title:'En juego',host:'Luis',members:[{id:0,name:'Luis',piece:1}],started:true,status:'playing',canRequest:false}];online.requestSeat=async(code,name)=>{globalThis.requested={code,name};};");
 await run('lounge.refresh()');assert.equal(nodes.get('waiting-rooms').children[0].children[0].textContent,'<b>Mesa</b>');assert.equal(nodes.get('playing-rooms').children[0].children.at(-1).disabled,true);
 nodes.get('lounge-name').value='Visitante';await nodes.get('waiting-rooms').children[0].children.at(-1).onclick();assert.equal(run('requested.name'),'Visitante');
 run("lounge.admission({id:'request_1',code:'ABCD2345',status:'approved',members:[{id:0,name:'Ana',piece:0}]});online.claimSeat=async(id,piece)=>{globalThis.claimed={id,piece};};");
 assert.equal(nodes.get('admission-choice').hidden,false);assert.equal(nodes.get('admission-piece').children.length,5);assert.equal(nodes.get('admission-piece').children.some(option=>option.value==='0'),false);
 nodes.get('admission-piece').value='2';await nodes.get('claim-seat').onclick();assert.equal(run('claimed.piece'),2);
 run("online.decideSeat=async(id,accept)=>{globalThis.decided={id,accept};};lounge.hostRequests([{id:'request_2',name:'Otra persona'}]);");assert.equal(nodes.get('join-requests').hidden,false);await nodes.get('requests-list').children[0].children[1].onclick();assert.equal(run('decided.accept'),true);
 run('lounge.hostRequests([])');assert.equal(nodes.get('join-requests').hidden,true);
});

test('audio: controles separados y construcciones visibles, con cuatro chacras o una estancia',()=>{
 const {nodes,run}=boot();nodes.get('audio-settings-button').onclick();assert.equal(nodes.get('audio-dialog').open,true);
 nodes.get('audio-volume').value='35';nodes.get('audio-volume').listeners.input[0]();assert.equal(run('sounds.volume'),.35);assert.equal(nodes.get('audio-volume-value').textContent,'35%');
 nodes.get('audio-effects').checked=false;nodes.get('audio-effects').listeners.change[0]();assert.equal(run('sounds.effects'),false);assert.equal(run('sounds.alerts'),true);
 nodes.get('audio-alerts').checked=false;nodes.get('audio-alerts').listeners.change[0]();assert.equal(run('sounds.alerts'),false);
 nodes.get('close-audio').onclick();assert.equal(nodes.get('audio-dialog').open,false);
 run("state=createGame(['Ana','Luis']);for(const id of [1,2,3])state.properties[id]={owner:0,level:4,mortgaged:false,interestDue:false};drawBoard();");
 const land=nodes.get('board').children.find(node=>node.id==='space-1'),houses=land.children.find(node=>node.id==='buildings-1');assert.equal(houses.children.filter(node=>node.class==='house-marker').length,4);assert.ok(land.children.some(node=>node.class==='owner-stripe'));
 run('state.properties[1].level=5;drawBoard();');const estate=nodes.get('board').children.find(node=>node.id==='space-1').children.find(node=>node.id==='buildings-1');assert.equal(estate.children.filter(node=>node.class==='estate-marker').length,1);
});

test('avisos: chat histórico y presencia no suenan; solicitud y aprobación se anuncian una sola vez',()=>{
 const {run}=boot();run("globalThis.cues=[];sounds.play=kind=>cues.push(kind);online.playerId=0;chat.update([{id:'msg1',playerId:1,name:'Luis',piece:1,text:'hola',createdAt:'2026-11-07T12:00:00Z'}],{code:'ABCD2345',history:true,added:[{playerId:1}]});");assert.equal(run('cues.length'),0);
 run("chat.update([{id:'msg1',playerId:1,name:'Luis',piece:1,text:'hola',createdAt:'2026-11-07T12:00:00Z'},{id:'msg2',playerId:1,name:'Luis',piece:1,text:'¿Estás?',createdAt:'2026-11-07T12:01:00Z'}],{code:'ABCD2345',history:false,added:[{playerId:1}]});");assert.equal(run("cues.filter(kind=>kind==='chat').length"),1);
 run("lounge.hostRequests([{id:'req1',name:'Visitante'}]);lounge.hostRequests([{id:'req1',name:'Visitante'}]);lounge.admission({id:'mine',status:'approved',members:[]});lounge.admission({id:'mine',status:'approved',members:[]});");assert.equal(run("cues.filter(kind=>kind==='request').length"),1);assert.equal(run("cues.filter(kind=>kind==='accepted').length"),1);
 run("state=createGame(['Ana','Luis']);state.phase='roll';state.order=null;globalThis.old=structuredClone(state);applyState(structuredClone(state));");assert.equal(run("cues.filter(kind=>kind==='turn').length"),0);
});
