import { money,spaces } from './game.js';

// Compara instantáneas confirmadas: los efectos nunca ejecutan reglas ni alteran el estado.
export function tableChanges(before,after){
 const cash=after.players.flatMap(player=>{const previous=before.players[player.id];return previous&&previous.cash!==player.cash?[{playerId:player.id,from:previous.cash,to:player.cash,delta:player.cash-previous.cash}]:[];});
 const titles=[],buildings=[];
 for(const [key,property] of Object.entries(after.properties)){
  const id=Number(key),old=before.properties[id];
  if(!old||old.owner!==property.owner)titles.push({id,playerId:property.owner});
  if(property.level>(old?.level||0))buildings.push({id,level:property.level,playerId:property.owner});
 }
 const oldAuction=before.auction,newAuction=after.auction;
 const closed=after.lastAuction&&after.lastAuction.sequence!==before.lastAuction?.sequence?{id:after.lastAuction.id,playerId:after.lastAuction.winner,amount:after.lastAuction.amount}:null;
 const bid=!!newAuction&&newAuction.highBid>0&&(!oldAuction||oldAuction.id!==newAuction.id||oldAuction.highBid!==newAuction.highBid||oldAuction.highBidder!==newAuction.highBidder);
 return {cash,titles,buildings,bid,closed,turn:after.phase!=='order'&&after.phase!=='over'&&(before.turn!==after.turn||before.phase==='order')?after.turn:null,won:after.phase==='over'&&before.phase!=='over'?after.winner:null};
}
export function innerEdge(points){
 const vertices=Array.from({length:4},(_,i)=>({x:points[2*i],y:points[2*i+1]}));
 return vertices.map((a,i)=>({a,b:vertices[(i+1)%4]})).sort((u,v)=>{const distance=e=>((e.a.x+e.b.x)/2-388)**2+((e.a.y+e.b.y)/2-353)**2;return distance(u)-distance(v);})[0];
}
export class TableFeedback {
 constructor({document:doc,sounds,reduced=()=>globalThis.matchMedia?.('(prefers-reduced-motion: reduce)').matches??true,clock=()=>globalThis.performance?.now()??Date.now(),frame=globalThis.requestAnimationFrame?.bind(globalThis),cancelFrame=globalThis.cancelAnimationFrame?.bind(globalThis),schedule=setTimeout}={}){
  Object.assign(this,{doc,sounds,reduced,clock,frame,cancelFrame,schedule});this.queue=[];this.balances=new Map();this.animations=new Set();this.nodes=new Set();this.frameId=null;this.generation=0;this.notice=0;
 }
 reset(){this.generation++;this.queue=[];this.balances.clear();if(this.frameId!==null)this.cancelFrame?.(this.frameId);this.frameId=null;for(const animation of this.animations)animation.cancel();this.animations.clear();for(const node of this.nodes)node.remove?.();this.nodes.clear();const status=this.doc.getElementById('table-feedback');if(status){status.textContent='';status.hidden=true;}}
 enqueue(before,after,options={}){const changes=tableChanges(before,after);this.queue.push({changes,after,options});}
 animate(element,frames,options={}){
  if(!element?.animate||this.reduced())return null;
  const animation=element.animate(frames,{duration:450,easing:'ease-out',...options});this.animations.add(animation);Promise.resolve(animation.finished).catch(()=>{}).finally(()=>this.animations.delete(animation));return animation;
 }
 pulse(element){this.animate(element,[{outline:'0px solid transparent',filter:'brightness(1)'},{outline:'3px solid #dfba76',filter:'brightness(1.12)',offset:.35},{outline:'0px solid transparent',filter:'brightness(1)'}],{duration:650});}
 say(text){const status=this.doc.getElementById('table-feedback');if(!status)return;const notice=++this.notice,generation=this.generation;status.hidden=false;status.textContent=text;this.animate(status,[{opacity:0,transform:'translateY(6px)'},{opacity:1,transform:'translateY(0)'}],{duration:180});const timer=this.schedule(()=>{if(notice===this.notice&&generation===this.generation)status.hidden=true;},3500);timer?.unref?.();}
 async temporary(node,animation){if(!animation)return;this.nodes.add(node);try{await animation.finished;}catch{}finally{node.remove?.();this.nodes.delete(node);}}
 float(change){
  if(this.reduced())return;const anchor=this.doc.getElementById('balance-'+change.playerId),layer=this.doc.getElementById('feedback-layer'),rect=anchor?.getBoundingClientRect?.();if(!rect||!layer)return;
  const node=this.doc.createElement('span');node.className='money-float '+(change.delta>0?'cash-in':'cash-out');node.textContent=(change.delta>0?'+':'−')+money(Math.abs(change.delta));node.style.left=Math.min(rect.right-55,(globalThis.innerWidth||1920)-140)+'px';node.style.top=rect.top+'px';node.setAttribute('aria-hidden','true');layer.append(node);
  const animation=this.animate(node,[{opacity:0,transform:'translateY(5px)'},{opacity:1,transform:'translateY(-8px)',offset:.2},{opacity:1,transform:'translateY(-25px)',offset:.75},{opacity:0,transform:'translateY(-38px)'}],{duration:1100});if(animation)void this.temporary(node,animation);else node.remove?.();
 }
 titleFlight(title){
  const source=this.doc.getElementById('space-'+title.id)?.getBoundingClientRect?.(),target=this.doc.getElementById('player-row-'+title.playerId)?.getBoundingClientRect?.(),layer=this.doc.getElementById('feedback-layer');
  this.pulse(this.doc.getElementById('space-'+title.id));this.pulse(this.doc.getElementById('player-row-'+title.playerId));
  if(this.reduced()||!source||!target||!layer||!spaces[title.id].image)return;
  const card=this.doc.createElement('img');card.className='title-flight';card.src=spaces[title.id].image;card.alt='';card.setAttribute('aria-hidden','true');const x=source.left+source.width/2-30,y=source.top+source.height/2-40;card.style.left=x+'px';card.style.top=y+'px';layer.append(card);
  const dx=target.left+target.width/2-x-30,dy=target.top+target.height/2-y-40;
  const animation=this.animate(card,[{opacity:0,transform:'scale(.4) rotate(-12deg)'},{opacity:1,transform:'translate(0,-20px) scale(1) rotate(5deg)',offset:.25},{opacity:1,transform:`translate(${dx*.8}px,${dy*.8}px) scale(.75) rotate(-4deg)`,offset:.8},{opacity:0,transform:`translate(${dx}px,${dy}px) scale(.25) rotate(0deg)`}],{duration:800});if(animation)void this.temporary(card,animation);else card.remove?.();
 }
 hammer(){
  if(this.reduced())return;const layer=this.doc.getElementById('feedback-layer');if(!layer)return;
  const icon=this.doc.createElementNS('http://www.w3.org/2000/svg','svg');icon.setAttribute('viewBox','0 0 60 60');icon.setAttribute('class','gavel-effect');icon.setAttribute('aria-hidden','true');
  const shape=this.doc.createElementNS('http://www.w3.org/2000/svg','path');shape.setAttribute('d','M16 9H40V22H16Z M26 22H31V47H26Z M9 49H48V54H9Z');icon.append(shape);layer.append(icon);
  const animation=this.animate(icon,[{opacity:0,transform:'rotate(-35deg) scale(.8)'},{opacity:1,transform:'rotate(-35deg) scale(1)',offset:.2},{opacity:1,transform:'rotate(14deg) scale(1)',offset:.45},{opacity:1,transform:'rotate(-8deg) scale(1)',offset:.65},{opacity:0,transform:'rotate(0deg) scale(.9)'}],{duration:700});if(animation)void this.temporary(icon,animation);else icon.remove?.();
 }
 revealCard(deck){
  this.sounds.play('card');const card=this.doc.getElementById('received-card'),source=this.doc.getElementById(deck+'-deck')?.getBoundingClientRect?.(),target=card?.getBoundingClientRect?.();if(!target||!source)return;
  const dx=source.left+source.width/2-target.left-target.width/2,dy=source.top+source.height/2-target.top-target.height/2;
  this.animate(card,[{transform:`translate(${dx}px,${dy}px) scale(.18) rotateY(-180deg)`,opacity:.4},{transform:'translate(0,-8px) scale(.97) rotateY(-90deg)',opacity:1,offset:.55},{transform:'translate(0,0) scale(1) rotateY(0deg)',opacity:1}],{duration:620,easing:'cubic-bezier(.2,.7,.2,1)'});
 }
 refresh(){
  const waiting=new Set();for(const {changes} of this.queue)for(const change of changes.cash)if(!waiting.has(change.playerId)&&!this.balances.has(change.playerId)){const node=this.doc.getElementById('balance-'+change.playerId);if(node)node.textContent=money(change.from);waiting.add(change.playerId);}
  const now=this.clock();for(const [id,balance] of this.balances){const progress=this.reduced()?1:Math.min(1,Math.max(0,(now-balance.start)/650)),value=Math.round(balance.from+(balance.to-balance.from)*(1-(1-progress)**3));const node=this.doc.getElementById('balance-'+id);if(node)node.textContent=money(value);if(progress===1)this.balances.delete(id);}
  if(this.balances.size&&this.frame&&this.frameId===null)this.frameId=this.frame(()=>{this.frameId=null;this.refresh();});
 }
 flush(){
  for(const {changes:c,after:s,options} of this.queue.splice(0)){
   for(const change of c.cash){const old=this.balances.get(change.playerId);const progress=old?Math.min(1,Math.max(0,(this.clock()-old.start)/650)):1,from=old?Math.round(old.from+(old.to-old.from)*(1-(1-progress)**3)):change.from;if(this.frame&&!this.reduced())this.balances.set(change.playerId,{from,to:change.to,start:this.clock()});else{const node=this.doc.getElementById('balance-'+change.playerId);if(node)node.textContent=money(change.to);}this.float(change);}
   for(const title of c.titles.slice(0,3))this.titleFlight(title);
   for(const building of c.buildings)this.animate(this.doc.getElementById('buildings-'+building.id),[{transform:'translateY(-12px) scale(.4)',opacity:0},{transform:'translateY(2px) scale(1.12)',opacity:1,offset:.7},{transform:'translateY(0) scale(1)',opacity:1}],{duration:470});
   if(c.bid){this.sounds.play('bid');this.pulse(this.doc.getElementById('auction-summary'));}
   if(c.closed){this.sounds.play('gavel');this.hammer();this.say(c.closed.playerId===null?'El remate cerró sin ofertas.':`${s.players[c.closed.playerId].name} ganó ${spaces[c.closed.id].name} por ${money(c.closed.amount)}.`);}
   else if(c.titles.length){this.sounds.play('purchase');this.say(c.titles.length===1?`${s.players[c.titles[0].playerId].name} sumó ${spaces[c.titles[0].id].name} a su patrimonio.`:`Se transfirieron ${c.titles.length} títulos.`);}
   else if(c.buildings.length){this.sounds.play('build');this.say(c.buildings.some(b=>b.level===5)?'Una nueva estancia en la mesa.':'Nuevas chacras en la mesa.');}
   else if(c.cash.length){const mine=options.online?c.cash.find(change=>change.playerId===options.playerId):c.cash.find(change=>change.delta>0)||c.cash[0];if(mine)this.sounds.play(mine.delta>0?'money':'pay');this.say(c.cash.map(change=>`${s.players[change.playerId].name}: ${change.delta>0?'+':'−'}${money(Math.abs(change.delta))}`).join(' · '));}
   if(c.turn!==null){this.pulse(this.doc.getElementById('active-player'));this.pulse(this.doc.getElementById('player-row-'+c.turn));if(!options.online||c.turn===options.playerId){this.sounds.play('turn');this.say(options.online?`Es tu turno, ${s.players[c.turn].name}.`:`Turno de ${s.players[c.turn].name}.`);}}
   if(c.won!==null){this.sounds.play('win');this.say(`${s.players[c.won].name} ganó la partida.`);}
  }
  this.refresh();
 }
}
