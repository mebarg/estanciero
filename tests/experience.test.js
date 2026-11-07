import test from 'node:test';
import assert from 'node:assert/strict';
import { createGame,act,validSave } from '../web/game.js';
import { TableExperience,TableSounds,dieRotation } from '../web/experience.js';
import { polygons } from '../web/geometry.js';
const fresh=()=>{const s=createGame(['Ana','Luis']);s.phase='roll';s.order=null;return s;};
const first=(s,deck,id)=>{s.decks[deck]=[id,...s.decks[deck].filter(c=>c!==id)];return s;};
const positions=s=>s.motion.steps.map(step=>step.position);

test('el recorrido cruza Salida paso por paso y no vuelve a ejecutar cobros al reproducirlo',()=>{
 const s=fresh();s.players[0].position=40;
 const next=act(s,{type:'roll',dice:[1,2]});assert.deepEqual(positions(next),[41,0,1]);assert.equal(next.claims.length,1);assert.equal(next.claims[0].amount,5000);
 const after=act(next,{type:'buy'});assert.deepEqual(after.motion,next.motion);assert.equal(after.claims.length,1);assert.equal(validSave(after),true);
});
test('una carta de retroceso conserva el camino de ida y los tres saltos de vuelta',()=>{
 const s=first(fresh(),'luck','s-retroceso');s.players[0].position=12;
 const next=act(s,{type:'roll',dice:[1,2]});assert.deepEqual(positions(next),[13,14,15,14,13,12]);assert.deepEqual(next.motion.steps.slice(-3).map(s=>s.kind),['back','back','back']);assert.equal(next.players[0].position,12);
});
test('Marche preso muestra el recorrido hasta la casilla y un traslado directo a Comisaría',()=>{
 const s=fresh();s.players[0].position=32;
 const next=act(s,{type:'roll',dice:[1,2]});assert.deepEqual(positions(next),[33,34,35,14]);assert.equal(next.motion.steps.at(-1).kind,'jail');assert.equal(next.players[0].jail,1);
});
test('un intento fallido en prisión y el sorteo inicial no inventan pasos',()=>{
 const s=fresh();s.players[0].position=14;s.players[0].jail=1;
 assert.deepEqual(positions(act(s,{type:'roll',dice:[1,2]})),[]);
 const order=act(createGame(['Ana','Luis']),{type:'roll',dice:[6,6]});assert.equal(order.motion.playerId,0);assert.equal(order.turn,1);assert.equal(order.motion.kind,'order');assert.deepEqual(positions(order),[]);
});
test('elegir levantar Suerte puede crear un segundo recorrido sin otra tirada',()=>{
 let s=first(fresh(),'fate','d-multa-suerte');s.players[0].position=7;s=act(s,{type:'roll',dice:[1,2]});s=first(s,'luck','s-salta');
 const next=act(s,{type:'card-choice',choice:'draw'});assert.equal(next.motion.sequence,s.motion.sequence+1);assert.equal(next.motion.kind,'card');assert.equal(next.motion.dice,null);assert.deepEqual(positions(next),[11,12,13]);assert.equal(validSave(next),true);
});
test('partidas anteriores siguen siendo válidas y se rechazan recorridos malformados',()=>{
 const s=fresh();assert.equal(validSave(s),true);const next=act(s,{type:'roll',dice:[1,2]});next.motion.steps.push({position:99,kind:'step'});assert.equal(validSave(next),false);
});
function element(){return {textContent:'',innerHTML:'',classList:{toggle(){}},setAttribute(){}};}
function animator(overrides={}){
 const sounds=[],captions=[],frames=[],fake=element();
 const experience=new TableExperience({dice:element(),total:element(),caption:fake,count:element(),sounds:{play:type=>sounds.push(type)},positionName:id=>'Casilla '+id,playerName:()=> 'Ana',canAnimate:()=>true,reduced:()=>false,sleep:async()=>{},movingElement:()=>({animate:(keyframes)=>{frames.push(keyframes);return {finished:Promise.resolve(),cancel(){}};}}),onBoard:()=>captions.push(fake.textContent),...overrides});
 return {experience,sounds,captions,frames};
}
const motion={sequence:1,playerId:0,kind:'roll',from:0,dice:[2,3],steps:[{position:1,kind:'step'},{position:2,kind:'step'},{position:3,kind:'step'}]};

test('el presentador conoce el resultado desde el principio y completa un salto por cada paso',async()=>{
 const {experience,frames,sounds}=animator();const faces=[];const draw=experience.drawDice.bind(experience);experience.drawDice=(value)=>{faces.push(value||[...experience.faces]);draw(value);};
 await experience.play(motion,polygons);assert.equal(faces.length,2);assert.deepEqual(faces[0],[2,3]);assert.deepEqual(faces.at(-1),[2,3]);assert.equal(frames.length,3);assert.equal(sounds.filter(type=>type==='step').length,3);assert.equal(experience.busy,false);assert.equal(experience.moving,null);assert.match(experience.caption.textContent,/Casilla 3/);
});
test('movimiento reducido conserva el resultado y evita los saltos',async()=>{
 const {experience,frames}=animator({reduced:()=>true});await experience.play(motion,polygons);assert.equal(frames.length,0);assert.equal(experience.total.textContent,'5');assert.match(experience.caption.textContent,/Casilla 3/);assert.equal(experience.busy,false);
});
test('cancelar un recorrido viejo no pisa una presentación nueva',async()=>{
 let release;const wait=new Promise(resolve=>{release=resolve;});let pauses=0;
 const {experience}=animator({sleep:()=>++pauses===1?wait:Promise.resolve()});
 const old=experience.play(motion,polygons);assert.equal(experience.busy,true);
 const next={...motion,sequence:2,kind:'card',dice:null,from:8,steps:[]};assert.equal(await experience.play(next,polygons),true);
 const caption=experience.caption.textContent;release();assert.equal(await old,false);assert.equal(experience.caption.textContent,caption);assert.equal(experience.busy,false);
});
test('sonidos esperan interacción, respetan silencio y guardan la preferencia',()=>{
 const data=new Map(),storage={getItem:k=>data.get(k),setItem:(k,v)=>data.set(k,v)};let contexts=0,notes=0;
 const param={value:0,setValueAtTime(){},exponentialRampToValueAtTime(){}};
 class Context {constructor(){contexts++;this.state='running';this.currentTime=0;this.destination={};}createGain(){return {gain:{...param},connect(){}};}createOscillator(){return {frequency:param,connect(){},start(){notes++;},stop(){}};}}
 const sounds=new TableSounds({storage,Context});sounds.play('land');assert.equal(contexts,0);sounds.unlock();sounds.play('land');assert.equal(contexts,1);assert.equal(notes,2);
 sounds.toggle();sounds.play('money');assert.equal(notes,2);assert.equal(new TableSounds({storage,Context}).enabled,false);assert.equal(contexts,1);
});

test('el MP3 se carga una vez, no se reinicia al cambiar las caras y se detiene al silenciar',async()=>{
 let fetches=0,starts=0,stops=0;const buffer={duration:2.09};
 class Context {
  constructor(){this.state='running';this.destination={};}
  createGain(){return {gain:{value:0},connect(){}};}
  async decodeAudioData(){return buffer;}
  createBufferSource(){return {buffer:null,connect(){},disconnect(){},start(){starts++;},stop(){stops++;}};}
 }
 const sounds=new TableSounds({storage:{getItem(){return null;},setItem(){}},Context,fetcher:async path=>{assert.equal(path,'assets/dados.mp3');fetches++;return {ok:true,arrayBuffer:async()=>new ArrayBuffer(4)};}});
 sounds.unlock();sounds.unlock();await sounds.diceLoading;
 sounds.startDice();for(let i=0;i<14;i++)sounds.play('rattle');sounds.startDice();
 assert.equal(fetches,1);assert.equal(starts,1);assert.equal(sounds.diceSource.buffer,buffer);
 sounds.toggle();assert.equal(stops,1);assert.equal(sounds.diceSource,null);sounds.startDice();assert.equal(starts,1);
});

test('una descarga fallida se reintenta y nunca reproduce el efecto antiguo',async()=>{
 let requests=0,notes=0,starts=0,connected;
 class Context {
  constructor(){this.state='running';this.destination={};}
  createGain(){return {gain:{value:0},connect(){}};}
  async decodeAudioData(){return {duration:2.09};}
  createOscillator(){notes++;throw new Error('El sonido anterior no debe ejecutarse');}
  createBufferSource(){return {connect(node){connected=node;},disconnect(){},start(){starts++;},stop(){}};}
 }
 const sounds=new TableSounds({storage:{getItem(){return null;}},Context,fetcher:async function(path,options){assert.equal(this,globalThis);assert.equal(options.cache,'reload');requests++;return {ok:requests>1,arrayBuffer:async()=>new ArrayBuffer(4)};}});
 assert.equal(await sounds.prepareDice(),false);sounds.play('rattle');assert.equal(notes,0);assert.equal(starts,0);
 assert.equal(await sounds.prepareDice(),true);sounds.startDice();assert.equal(requests,2);assert.equal(starts,1);assert.equal(connected.gain.value,4);assert.equal(sounds.audioError,null);
});

test('el giro acaba con la cara ganadora hacia el frente para los seis resultados',()=>{
 const normals={1:[0,0,1],2:[0,-1,0],3:[1,0,0],4:[-1,0,0],5:[0,1,0],6:[0,0,-1]};
 for(let face=1;face<=6;face++)for(const [tx,ty] of [[3,4],[-4,-3]]){
  const angles=[...dieRotation(face,tx,ty).matchAll(/\((-?[\d.]+)deg\)/g)].map(m=>Number(m[1])*Math.PI/180),[x,y,z]=normals[face],a=angles[0],b=angles[1];
  const rotatedY=[Math.cos(b)*x+Math.sin(b)*z,y,-Math.sin(b)*x+Math.cos(b)*z];
  const front=Math.sin(a)*rotatedY[1]+Math.cos(a)*rotatedY[2];
  assert.ok(Math.abs(front-1)<1e-9,'La cara '+face+' debe quedar mirando al frente');
 }
});

test('las caras definitivas se fijan antes de retirar la animación, sin cambio visible al finalizar',async()=>{
 const finishes=[],endings=[];
 const cubes=[1,6].map(value=>({value,attributes:{},setAttribute(key,value){if(key==='data-value')this.value=Number(value);},animate(frames){endings.push(frames.at(-1).transform);return {finished:new Promise(resolve=>finishes.push(resolve)),cancel:()=>{assert.deepEqual(cubes.map(c=>c.value),[2,3]);}};}}));
 const shells=[0,1].map(()=>({animate(){return {finished:new Promise(resolve=>finishes.push(resolve)),cancel(){}};}}));
 const dice={...element(),querySelectorAll:selector=>selector==='.die-cube'?cubes:shells};
 const {experience}=animator({dice});experience.lastFaces=[1,6];
 const result=experience.play({...motion,steps:[]},polygons);await new Promise(resolve=>setImmediate(resolve));
 assert.deepEqual(cubes.map(c=>c.value),[1,6]);assert.equal(experience.total.textContent,'…');
 assert.deepEqual(endings,[dieRotation(2,3,4),dieRotation(3,-4,-3)]);
 for(const finish of finishes)finish();await result;
 assert.deepEqual(cubes.map(c=>c.value),[2,3]);assert.equal(experience.total.textContent,'5');
});
