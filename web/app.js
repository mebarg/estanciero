import { TableSounds, TableExperience, centerOf } from './experience.js';
import { OnlineSession } from './online.js';
import { spaces, createGame, act, money, ownsGroup, rentFor, validSave, upgradeSave, bankStock, buildProblem, RULES, managerFor } from './game.js';
import { pieces, pieceWindow, pieceSheet } from './pieces.js';
import { cards } from './cards.js';
import { polygons } from './geometry.js';
const $ = id => document.getElementById(id);
const colors = ['#dfaa54','#7bb8d0','#c78ca7','#a9bc75','#d9a48b','#a7a6d6'];
const key = 'estanciero-partida-v1';
let state = createGame(['Jugador 1','Jugador 2']), selected=1, rolling=false, saved=false;
try { const stored=upgradeSave(JSON.parse(localStorage.getItem(key))); if(stored&&validSave(stored)){state=stored;saved=true;} } catch { /* El juego sigue disponible sin almacenamiento. */ }
let localState=state, onlineMode=false, onlineEntry='create';
const online=new OnlineSession({onRoom:receiveOnline,onStatus:status=>{
  $('online-status').textContent=status;
  $('retry-online').hidden=!online.pendingCommand||online.pending;
  if(onlineMode&&online.room?.game)render();
}});
const sounds=new TableSounds();
const experience=new TableExperience({dice:$('dice'),total:$('dice-total'),caption:$('motion-caption'),count:$('motion-count'),sounds,
  onBoard:()=>drawBoard(true),onChange:()=>render(),movingElement:()=>$('moving-token'),
  positionName:id=>spaces[id].name,playerName:id=>state.players[id]?.name||'Jugador'});
let pendingCard=null,pendingPurchase=false,presentation=Promise.resolve();
function syncSoundButton(){const button=$('sound-button');button.textContent=sounds.enabled?'Sonido: sí':'Sonido: no';button.setAttribute('aria-pressed',String(sounds.enabled));button.setAttribute('aria-label',sounds.enabled?'Silenciar sonidos del juego':'Activar sonidos del juego');}
$('sound-button').onclick=()=>{sounds.toggle();syncSoundButton();if(sounds.enabled)sounds.play('land');};
document.addEventListener?.('pointerdown',()=>sounds.unlock(),{passive:true});
document.addEventListener?.('keydown',()=>sounds.unlock());
function finishArrival(){
  if(experience.busy)return;
  const purchase=pendingPurchase&&state.phase==='buy'&&(!onlineMode||state.turn===online.playerId);
  if(pendingCard&&state.lastCard?.sequence===pendingCard){pendingCard=null;pendingPurchase=false;sounds.play('card');showReceivedCard(purchase);}
  else if(purchase){pendingPurchase=false;showPurchase();}
  else {pendingCard=null;pendingPurchase=false;}
}
function canPlayOnline(){return !experience.busy&&(!onlineMode||(online.ready&&!online.pending&&!online.pendingCommand));}
function canRollDice(){return ['order','roll'].includes(state.phase)&&!rolling&&canPlayOnline()&&(!onlineMode||state.turn===online.playerId);}
function onlineError(error){$('online-status').textContent=error.message;$('online-error').textContent=error.message;}
function applyState(next,{notify=true}={}) {
  const previous=state;state=next;
  if(!state.motion&&experience.anticipation!==null){experience.cancel();rolling=false;}
  if(state.turn!==previous.turn||state.players[state.turn].position!==previous.players[previous.turn].position)selected=state.players[state.turn].position;
  const mine=!onlineMode||state.turn===online.playerId;
  if(notify&&state.phase==='buy'&&mine&&(previous.phase!=='buy'||state.turn!==previous.turn||state.players[state.turn].position!==previous.players[previous.turn].position))pendingPurchase=true;
  if(notify&&state.lastCard&&state.lastCard.sequence!==previous.lastCard?.sequence)pendingCard=state.lastCard.sequence;
  const motion=notify&&state.motion&&state.motion.sequence!==previous.motion?.sequence?state.motion:null;
  if(motion){
    rolling=false;
    presentation=experience.play(motion,polygons).then(completed=>{if(completed){render();finishArrival();}}).catch(()=>{experience.cancel();render();finishArrival();});
  }else{
    render();
    if(notify&&!experience.busy){
      if(state.phase==='over'&&previous.phase!=='over')sounds.play('win');
      else if(state.players.some((p,i)=>p.cash>(previous.players[i]?.cash??p.cash)))sounds.play('money');
      else if(state.players.some((p,i)=>p.cash<(previous.players[i]?.cash??p.cash)))sounds.play('pay');
      finishArrival();
    }
  }
}

function receiveOnline(room) {
  const entering=!onlineMode;
  if(entering){experience.cancel();pendingCard=null;pendingPurchase=false;afterArrival=null;localState=state;onlineMode=true;for(const d of document.querySelectorAll('dialog'))d.close();}
  $('mode-label').textContent='Partida online';$('online-bar').hidden=false;
  $('online-room-code').textContent='SALA '+room.code;
  $('online-identity').textContent='Jugás como '+room.members[online.playerId].name;
  const url=new URL(location.href);url.searchParams.set('sala',room.code);history.replaceState(null,'',url);
  $('online-lobby').hidden=!!room.game;$('game-layout').hidden=!room.game;
  if(room.game){
    if(entering){state=room.game;selected=state.players[state.turn].position;render();if(state.phase==='buy'&&state.turn===online.playerId)showPurchase();}
    else applyState(room.game);
    if($('arrival-dialog').classList.contains('purchase-arrival')&&(state.phase!=='buy'||state.turn!==online.playerId||$('arrival-dialog').dataset.space!==String(state.players[state.turn].position))){$('arrival-dialog').close();}
  }else{
    $('lobby-members').innerHTML=room.members.map(m=>`<div class="lobby-member">${tokenHtml(m,true)}<div><strong>${esc(m.name)}${m.id===online.playerId?' · vos':''}</strong><span>${pieces[m.piece].name} · ${m.connected?'Conectado':'Sin conexión'}${m.id===0?' · Crea la mesa':''}</span></div></div>`).join('');
    $('start-online').hidden=online.playerId!==room.hostId;
    $('start-online').disabled=room.members.length<2||!online.ready;
    $('lobby-hint').textContent=online.playerId===room.hostId?'Podés empezar cuando haya entre 2 y 6 jugadores.':'Quien creó la sala va a iniciar la partida.';
  }
}
async function returnLocal(){
  await online.leave();experience.cancel();pendingCard=null;pendingPurchase=false;afterArrival=null;rolling=false;onlineMode=false;state=localState;selected=state.players[state.turn].position;
  for(const d of document.querySelectorAll('dialog'))d.close();
  $('online-bar').hidden=true;$('online-lobby').hidden=true;$('game-layout').hidden=false;
  $('mode-label').innerHTML='<i></i> Partida local';const url=new URL(location.href);url.searchParams.delete('sala');history.replaceState(null,'',url);render();
}
function esc(text) { return String(text).replace(/[&<>"']/g,c=>({'&':'&amp;','<':'&lt;','>':'&gt;','"':'&quot;',"'":'&#39;'}[c])); }
function save() { if(onlineMode)return;try { localStorage.setItem(key,JSON.stringify(state)); } catch { $('message').textContent='No se pudo guardar. Mantené esta pestaña abierta.'; } }
function dispatch(action) {
  if(experience.busy||rolling)return;
  if(onlineMode){online.action(action).catch(onlineError);return;}
  const next=act(state,action);applyState(next);save();localState=state;
}

function svgEl(tag,attrs={},text) { const el=document.createElementNS('http://www.w3.org/2000/svg',tag); for(const [k,v] of Object.entries(attrs)) el.setAttribute(k,v); if(text!==undefined) el.textContent=text; return el; }
function drawBoard(force=false) {
  if(experience.busy&&!force)return;
  const svg=$('board'); svg.replaceChildren();
  svg.append(svgEl('image',{href:'assets/tablero-original.jpg',x:0,y:0,width:776,height:706}));
  polygons.forEach((points,id)=>{
    const tile=spaces[id], g=svgEl('g',{class:`tile ${id===selected?'selected':''} ${state.phase!=='order'&&id===(experience.moving?.position??state.players[state.turn].position)?'active-space':''}`,tabindex:'0',role:'button','aria-label':`${id}. ${tile.name}${tile.price ? ', '+money(tile.price):''}`});
    const pts=Array.from({length:4},(_,i)=>[points[i*2],points[i*2+1]]), cx=pts.reduce((s,p)=>s+p[0],0)/4, cy=pts.reduce((s,p)=>s+p[1],0)/4;
    g.append(svgEl('polygon',{points:pts.map(p=>p.join(',')).join(' '),fill:'transparent'}));
    const owned=state.properties[id];
    // Los nombres y precios ya están impresos en el tablero.
    // La capa SVG sólo agrega interacción y estado de la partida.
    if(owned) {
      g.append(svgEl('circle',{cx,cy,r:6,fill:colors[owned.owner],stroke:'#fff','stroke-width':2}));
      if(owned.level) g.append(svgEl('text',{x:cx+10,y:cy+4,class:'ownership-level'},owned.level===5?'E':String(owned.level)));
    }
    const occupants=state.players.filter(p=>p.position===id&&!p.bankrupt&&p.id!==experience.moving?.playerId);
    occupants.forEach((p,i)=>{
      const piece=pieces[p.piece??p.id],rows=Math.ceil(occupants.length/2),u=occupants.length===1?.5:(i%2?.7:.3),v=rows===1?.5:(Math.floor(i/2)+.5)/rows;
      const tx=(1-u)*(1-v)*pts[0][0]+u*(1-v)*pts[1][0]+u*v*pts[2][0]+(1-u)*v*pts[3][0];
      const ty=(1-u)*(1-v)*pts[0][1]+u*(1-v)*pts[1][1]+u*v*pts[2][1]+(1-u)*v*pts[3][1];
      const w=occupants.length>2?24:34,h=w*pieceWindow.height/pieceWindow.width;
      g.append(svgEl('ellipse',{cx:tx,cy:ty+4,rx:w/2,ry:5,fill:'#f5eedb',stroke:colors[p.id],'stroke-width':2}));
      const sprite=svgEl('svg',{x:tx-w/2,y:ty-h+9,width:w,height:h,viewBox:`${piece.x} ${piece.y} ${pieceWindow.width} ${pieceWindow.height}`,class:'board-piece','aria-hidden':'true'});
      sprite.append(svgEl('image',{href:pieceSheet.src,x:0,y:0,width:pieceSheet.width,height:pieceSheet.height}));
      sprite.append(svgEl('title',{},`${p.name}: ${piece.name}`));g.append(sprite);
    });
    const inspect=()=>{selected=id; drawBoard(); renderProperty();};
    g.addEventListener('click',inspect); g.addEventListener('keydown',e=>{if(e.key==='Enter'||e.key===' '){e.preventDefault();inspect();}});
    svg.append(g);
  });
  if(experience.moving){
    const p=state.players[experience.moving.playerId],piece=pieces[p.piece??p.id],{x,y}=centerOf(polygons[experience.moving.position]);
    const moving=svgEl('g',{id:'moving-token',class:'moving-token','aria-hidden':'true'});
    moving.append(svgEl('ellipse',{cx:x,cy:y+4,rx:19,ry:5,fill:'#f5eedb',stroke:colors[p.id],'stroke-width':2}));
    const width=40,height=width*pieceWindow.height/pieceWindow.width;
    const sprite=svgEl('svg',{x:x-width/2,y:y-height+9,width,height,viewBox:`${piece.x} ${piece.y} ${pieceWindow.width} ${pieceWindow.height}`,class:'board-piece'});
    sprite.append(svgEl('image',{href:pieceSheet.src,x:0,y:0,width:pieceSheet.width,height:pieceSheet.height}));moving.append(sprite);svg.append(moving);
  }
}
function renderProperty() {
  const tile=spaces[selected],prop=state.properties[selected],owner=prop?state.players[prop.owner]:null;
  const allowed=!!owner&&(!onlineMode||owner.id===online.playerId)&&canPlayOnline()&&['roll','buy','end','debt'].includes(state.phase)&&(!state.debt||state.debt.payer===owner.id)&&!rolling;
  const reason=owner?buildProblem(state,tile.id):'';
  const mortgageCost=prop&&Math.ceil(tile.mortgage*(prop.interestDue?1.1:1));
  let controls='';
  if(allowed) {
    if(tile.type==='land')controls+=`<button class="outline" id="build-button" ${reason?'disabled':''}>Construir · $ 4.000</button>${reason?`<small class="management-hint">${esc(reason)}</small>`:''}${ownsGroup(state,owner.id,tile)&&prop.level<5?'<button class="quiet full" id="estates-button">Completar provincia con estancias</button>':''}`;
    if(prop.level)controls+='<button class="outline" id="sell-building">Vender una mejora · $ 2.000</button><button class="quiet full" id="sell-buildings">Vender todas las mejoras de la provincia</button>';
    controls+=prop.mortgaged?`<button class="outline" id="redeem-button" ${state.phase==='debt'?'disabled':''}>Levantar hipoteca · ${money(mortgageCost)}</button>`:`<button class="outline" id="mortgage-button">Hipotecar · recibís ${money(Math.round(tile.mortgage*.9))}</button>`;
    controls+='<div class="management-row"><button class="quiet" id="trade-button">Vender a otro jugador</button><button class="quiet" id="auction-button">Rematar</button></div>';
  }
  const baseRent=tile.rents?.[0]??(tile.type==='rail'?500:200);
  $('property-panel').innerHTML=`<div class="section-label"><span>EL CASILLERO</span><span>${String(selected).padStart(2,'0')}</span></div>${tile.image?`<button class="card-preview" id="card-preview" aria-label="Ampliar tarjeta de ${esc(tile.name)}"><img src="${tile.image}" alt="Escritura de ${esc(tile.name)}"></button>`:''}<div class="property-detail"><span class="property-category" style="--group:${tile.color}">${esc(tile.group||'Tablero')}</span><h3>${esc(tile.name)}</h3><p>${owner?`De ${esc(owner.name)}${prop.mortgaged?' · Hipotecado':prop.level?` · ${prop.level===5?'Estancia':prop.level+' chacras'}`:''}`:tile.price?'Disponible en el banco':'Casillero especial'}</p>${tile.price?`<div class="property-values"><span>Compra <b>${money(tile.price)}</b></span><span>Alquiler <b>${money(owner?rentFor(state,tile,state.dice[0]+state.dice[1]):baseRent)}</b></span><span>Hipoteca <b>${money(tile.mortgage)}</b></span></div>`:'<p class="muted">Consultá las reglas de los casilleros especiales en “Cómo jugar”.</p>'}</div>${controls?`<div class="property-management"><span class="section-label">PATRIMONIO DE ${esc(owner.name.toUpperCase())}</span>${controls}</div>`:''}`;
  $('card-preview')?.addEventListener('click',()=>showInfo(`<span class="eyebrow">ESCRITURA</span><h2>${esc(tile.name)}</h2><img class="original-card" src="${tile.image}" alt="${esc(tile.name)}"><p>Consultá los alquileres y las condiciones de esta propiedad.</p>`));
  const propertyAction=type=>dispatch({type,id:tile.id,playerId:owner.id});
  for(const [id,type] of [['build-button','build'],['sell-building','sell-building'],['sell-buildings','sell-buildings'],['mortgage-button','mortgage'],['redeem-button','redeem'],['auction-button','auction']])$(id)?.addEventListener('click',()=>propertyAction(type));
  $('trade-button')?.addEventListener('click',()=>offerSale(tile,owner));
  $('estates-button')?.addEventListener('click',()=>{
    const cost=spaces.filter(t=>t.type==='land'&&t.group===tile.group).reduce((n,t)=>n+(5-state.properties[t.id].level)*RULES.houseCost,0);
    showInfo(`<span class="eyebrow">PROVINCIA COMPLETA</span><h2>Estancias en ${esc(tile.group)}.</h2><p>Completar todos los campos con estancias cuesta ${money(cost)}. Se descuentan las mejoras existentes y se devuelven sus chacras al banco.</p><button class="primary" id="confirm-estates">Construir por ${money(cost)}</button>`);
    $('confirm-estates').addEventListener('click',()=>{$('info-dialog').close();propertyAction('build-estates');});
  });
}
function offerSale(tile,owner) {
  const buyers=state.players.filter(p=>!p.bankrupt&&p.id!==owner.id);
  showInfo(`<span class="eyebrow">VENTA ENTRE JUGADORES</span><h2>${esc(tile.name)}.</h2><p>${esc(owner.name)} propone vender este título. No se mueve dinero hasta que el comprador acepte.</p><form id="sale-form"><label for="sale-buyer">Comprador</label><select id="sale-buyer">${buyers.map(p=>`<option value="${p.id}">${esc(p.name)}</option>`).join('')}</select><label for="sale-price">Precio acordado</label><input id="sale-price" type="number" min="1" step="1" required value="${tile.price}"><button class="primary" type="submit">Proponer venta</button></form>`);
  $('sale-form').addEventListener('submit',e=>{e.preventDefault();const buyer=Number($('sale-buyer').value),price=Number($('sale-price').value);$('info-dialog').close();dispatch({type:tile.card?'offer-card':'offer-trade',id:tile.id,playerId:owner.id,buyer,price});});
}
function renderClaims() {
  $('claims-panel').hidden=!state.claims.length;
  $('claims-panel').innerHTML=`<div class="section-label"><span>COBROS PENDIENTES</span></div><p>Se pierden al volver a tirar los dados.</p>${state.claims.map(c=>`<div class="claim-row"><span><b>${esc(state.players[c.payee].name)}</b><small>${esc(c.label)} · ${money(c.amount)}</small></span><button class="outline claim-button" data-id="${c.id}" ${rolling||!canPlayOnline()||(onlineMode&&c.payee!==online.playerId)||!['roll','buy','end'].includes(state.phase)?'disabled':''}>Cobrar</button></div>`).join('')}`;
  document.querySelectorAll('.claim-button').forEach(button=>button.addEventListener('click',()=>dispatch({type:'claim',id:Number(button.dataset.id)})));
}
function tokenHtml(p,large=false) {
  const piece=pieces[p.piece??p.id];
  return `<span class="player-token ${large?'large':''}" style="--player:${colors[p.id]}"><span class="piece-sprite" style="background-image:url('${pieceSheet.src}');background-size:${pieceSheet.width/pieceWindow.width*100}% ${pieceSheet.height/pieceWindow.height*100}%;background-position:${piece.x/(pieceSheet.width-pieceWindow.width)*100}% ${piece.y/(pieceSheet.height-pieceWindow.height)*100}%" role="img" aria-label="${piece.name}"></span><span class="piece-number">${p.id+1}</span></span>`;
}
function titleCount(id) { const n=Object.values(state.properties).filter(p=>p.owner===id).length; return n+' '+(n===1?'título':'títulos'); }
function render() {
  const activeId=state.auction?.turn??state.trade?.buyer??managerFor(state),shownId=experience.moving?.playerId??activeId,p=state.players[shownId];
  $('round').innerHTML=`Ronda ${String(state.round).padStart(2,'0')} <span> / </span> ${state.players.length} jugadores`;
  $('turn-number').textContent=String(shownId+1).padStart(2,'0');
  $('turn-label').textContent=({order:'QUIÉN EMPIEZA',auction:'EL REMATE',trade:'EL COMPRADOR',debt:'DEUDA PENDIENTE'})[state.phase]||'EL TURNO';
  $('active-player').innerHTML=`${tokenHtml(p,true)}<div><h2>${esc(p.name)}</h2><span>${state.phase==='over'?'Partida terminada':p.jail?'En comisaría':state.phase==='auction'?'Le toca ofertar':state.phase==='trade'?'Debe aceptar la propuesta':'Es tu momento'}</span></div>`;
  $('message').textContent=state.message;
  $('last-card').hidden=!state.lastCard;
  $('last-card').innerHTML=state.lastCard?`<span>ÚLTIMA TARJETA · ${state.lastCard.deck==='luck'?'SUERTE':'DESTINO'}</span><p>${esc(state.lastCard.text)}</p>`:'';
  $('center-turn').textContent=state.phase==='over'?`${state.players[state.winner].name} ganó la partida`:`${state.phase==='order'?'ORDEN DE SALIDA':'TURNO DE '+p.name.toLocaleUpperCase('es-AR')}`;
  if(!experience.busy)experience.drawDice(state.dice);
  $('dice').disabled=!canRollDice();
  $('dice').setAttribute('title',canRollDice()?'Tirar los dados':'Esperá a que llegue el momento de tirar');
  const stock=bankStock(state);$('stock').textContent=`BANCO: ${stock.houses} CHACRAS / ${stock.estates} ESTANCIAS`;
  let actions='',diceActions='';
  if(['roll','order'].includes(state.phase)) {
    if(state.phase==='roll'&&p.jail)actions+=`<button class="outline full" id="bail-button" ${p.cash<RULES.bail||rolling?'disabled':''}>Pagar multa · $ 1.000</button>${p.releaseCards.length?'<button class="quiet full" id="release-button">Usar tarjeta de libertad</button>':''}`;
    if(state.phase==='roll'&&p.position===21&&p.restTurns)actions+=`<label class="choice"><input id="stay-choice" type="checkbox" ${rolling?'disabled':''}> Quedarme en Descanso (${p.restTurns} turnos disponibles)</label>`;
    diceActions=`<button class="primary" id="roll-button" ${rolling?'disabled':''}>${rolling?'Tirando…':state.phase==='order'?'Tirar para empezar':p.jail?'Intentar dobles':'Tirar dados'} <span>↗</span></button>`;
    actions+=`<span class="action-hint">${state.phase==='order'?'Empieza el mayor total. Los empates se vuelven a tirar.':state.claims.length?'Todavía hay cobros sin reclamar.':''}</span>`;
  }
  if(state.phase==='buy')actions=`<button class="primary" id="buy-button" ${p.cash<spaces[p.position].price?'disabled':''}>Comprar · ${money(spaces[p.position].price)}</button><button class="outline full" id="inspect-purchase">Ver escritura ampliada</button><button class="quiet full" id="skip-button">Dejar pasar</button>`;
  if(state.phase==='end')diceActions='<button class="primary" id="end-button">'+(state.doubles&&!p.bankrupt?'Volver a tirar':'Terminar turno')+' <span>→</span></button>';
  if(state.phase==='card-choice')actions='<button class="primary" id="choice-pay">Pagar multa · $ 200</button><button class="outline full" id="choice-draw">Levantar una tarjeta de Suerte</button>';
  if(state.phase==='over')actions='<button class="primary" id="again-button">Volver a jugar <span>→</span></button>';
  if(state.phase==='debt')actions=`<p class="debt-summary">Debe ${money(state.debt.amount)} ${state.debt.creditor===null?'al banco':'a '+esc(state.players[state.debt.creditor].name)}. Disponible: ${money(p.cash)}.</p><button class="primary" id="debt-assets">Gestionar patrimonio</button><small class="management-hint">Vendé mejoras, hipotecá o negociá. Al reunir el importe, el pago se realiza automáticamente.</small><button class="quiet full danger" id="bankrupt-button">Entregar bienes y declarar quiebra</button>`;
  if(state.phase==='auction') {
    const a=state.auction,prop=state.properties[a.id];
    actions=`<div class="auction-summary"><b>${esc(spaces[a.id].name)}</b><p>${a.highBidder===null?'Sin ofertas todavía.':`Mayor oferta: ${money(a.highBid)} de ${esc(state.players[a.highBidder].name)}.`}</p></div><form id="bid-form"><label for="bid-amount">Tu oferta</label><input id="bid-amount" type="number" min="${a.highBid+1}" step="1" required value="${a.highBid+100}">${prop?.mortgaged?'<label class="choice"><input id="auction-redeem" type="checkbox"> Levantar la hipoteca si gano (capital + 10%). Si la conservo, pago 10% ahora y 10% al levantarla.</label>':''}<button class="primary" type="submit">Ofertar</button></form><button class="quiet full" id="pass-button">Retirarme de este remate</button>`;
  }
  if(state.phase==='trade') {
    const t=state.trade,prop=t.kind==='card'?null:state.properties[t.id];
    actions=`<div class="auction-summary"><b>${esc(t.kind==='card'?'Tarjeta de libertad':spaces[t.id].name)}</b><p>${esc(state.players[t.seller].name)} pide ${money(t.price)}. El comprador es ${esc(p.name)}.</p></div>${prop?.mortgaged?'<label class="choice"><input id="trade-redeem" type="checkbox"> Levantar la hipoteca ahora. Sin marcar, pago 10% por recibirla y otro 10% cuando la levante.</label>':''}<p class="trade-total" id="trade-total"></p><button class="primary" id="accept-trade">Aceptar compra</button><button class="quiet full" id="reject-trade">Rechazar propuesta</button>`;
  }
  if(experience.busy)actions='<p class="waiting-turn">'+(experience.faces?'Los dados están rodando…':'Mirá el recorrido de la ficha en el tablero.')+'</p>';
  else if(onlineMode&&(!canPlayOnline()||activeId!==online.playerId))actions=`<p class="waiting-turn">${!online.ready?'Esperando reconexión…':online.pending||online.pendingCommand?'Esperando confirmación de tu jugada…':`Esperando a ${esc(p.name)}. Podés consultar la mesa y gestionar tus títulos.`}</p>`;
  if(experience.busy||(onlineMode&&(!canPlayOnline()||activeId!==online.playerId)))diceActions='';
  $('dice-actions').innerHTML=diceActions;
  $('dice-actions').hidden=!diceActions;
  $('actions').innerHTML=actions;
  $('roll-button')?.addEventListener('click',roll);
  $('inspect-purchase')?.addEventListener('click',showPurchase);
  for(const [id,choice] of [['choice-pay','pay'],['choice-draw','draw']])$(id)?.addEventListener('click',()=>dispatch({type:'card-choice',choice}));
  for(const [id,type] of [['buy-button','buy'],['skip-button','skip'],['end-button','end'],['bail-button','bail'],['release-button','release'],['reject-trade','reject-trade']])$(id)?.addEventListener('click',()=>dispatch({type}));
  $('again-button')?.addEventListener('click',openSetup);
  $('debt-assets')?.addEventListener('click',()=>openCollection(state.debt.payer));
  $('bankrupt-button')?.addEventListener('click',()=>{
    showInfo(`<span class="eyebrow">QUIEBRA</span><h2>Entregar el patrimonio.</h2><p>Se liquidarán las mejoras a mitad de precio. El efectivo disponible y los títulos pasarán al acreedor; si es el banco, los títulos saldrán a remate. Este jugador abandona la partida.</p><button class="primary" id="confirm-bankrupt">Declarar la quiebra de ${esc(p.name)}</button>`);
    $('confirm-bankrupt').addEventListener('click',()=>{$('info-dialog').close();dispatch({type:'bankrupt'});});
  });
  $('bid-form')?.addEventListener('submit',e=>{e.preventDefault();dispatch({type:'bid',playerId:state.auction.turn,amount:Number($('bid-amount').value),redeem:!!$('auction-redeem')?.checked});});
  $('pass-button')?.addEventListener('click',()=>dispatch({type:'pass',playerId:state.auction.turn}));
  if(state.trade&&$('accept-trade')){
    const updateTotal=()=>{const t=state.trade,prop=state.properties[t.id],fee=prop?.mortgaged?Math.ceil(spaces[t.id].mortgage*($('trade-redeem')?.checked?1.1:.1)):0;$('trade-total').textContent=`Total a pagar: ${money(t.price+fee)}${fee?' (incluye '+money(fee)+' al banco)':''}.`;};updateTotal();
    $('trade-redeem')?.addEventListener('change',updateTotal);
    $('accept-trade').addEventListener('click',()=>dispatch({type:'accept-trade',redeem:!!$('trade-redeem')?.checked}));
  }
  $('player-count').textContent=`${state.players.length} JUGADORES`;
  $('players').innerHTML=state.players.map(player=>`<div class="player-row ${player.id===shownId?'is-active':''} ${player.bankrupt?'is-out':''}">${tokenHtml(player)}<div><b>${esc(player.name)}</b><small>${player.bankrupt?'En bancarrota':titleCount(player.id)+(onlineMode?' · '+(online.room.members[player.id].connected?'Conectado':'Sin conexión'):'')}</small></div><strong>${money(player.cash)}</strong></div>`).join('');
  $('history').innerHTML=state.log.slice(0,5).map((entry,i)=>`<li><span>${String(state.log.length-i).padStart(2,'0')}</span>${esc(entry)}</li>`).join('');
  drawBoard();renderProperty();renderClaims();
}
async function roll() {
  if(!canRollDice())return;
  sounds.unlock();
  const stay=!!$('stay-choice')?.checked;
  if(onlineMode){
    rolling=true;experience.anticipate();
    try{await online.action({type:'roll',stay});}
    catch(error){experience.cancel();rolling=false;render();onlineError(error);}
    finally{rolling=false;}
    return;
  }
  const random=new Uint32Array(2);crypto.getRandomValues(random);
  dispatch({type:'roll',dice:[random[0]%6+1,random[1]%6+1],stay});
}
$('dice').addEventListener('click',roll);
// La llegada se presenta una sola vez; cerrar una ventana nunca vuelve a aplicar el efecto.
let afterArrival=null;
$('arrival-dialog').addEventListener('close',()=>{const next=afterArrival;afterArrival=null;next?.();});
function showArrival(html,{kind='event',title='Tarjeta recibida',after=null}={}) {
  const dialog=$('arrival-dialog');
  afterArrival=after;dialog.className='arrival-dialog '+kind+'-arrival';
  dialog.setAttribute('aria-label',title);$('arrival-content').innerHTML=html;
  $('arrival-close').onclick=()=>dialog.close();
  if(!dialog.open)dialog.showModal();
}
function showReceivedCard(purchase=false) {
  const card=state.lastCard,deck=card.deck==='luck'?'Suerte':'Destino';
  const person=state.players[card.playerId??state.turn];
  showArrival(`<div class="drawn-card ${card.deck}"><span class="drawn-symbol" aria-hidden="true">${card.deck==='luck'?'!':'?'}</span><h2>${deck}</h2><p class="drawn-recipient">Una tarjeta para ${esc(person.name)}</p><p class="drawn-text">${esc(card.text)}</p></div><p class="arrival-note">${state.phase==='card-choice'?'Al continuar, elegí si pagás la multa o levantás Suerte.':state.phase==='debt'?'Se registró una deuda. Podés reunir el dinero gestionando tu patrimonio.':'El efecto ya se aplicó a la partida.'}</p><button class="primary" id="acknowledge-card">Continuar <span>→</span></button>`,{title:'Tarjeta de '+deck,after:purchase?()=>{if(state.phase==='buy')showPurchase();}:null});
  $('acknowledge-card').onclick=()=>$('arrival-dialog').close();
}
function showPurchase() {
  if(state.phase!=='buy')return;
  const player=state.players[state.turn],tile=spaces[player.position],canBuy=player.cash>=tile.price;
  if(onlineMode&&player.id!==online.playerId)return;
  const rents=tile.rents?`<dl class="purchase-rents">${tile.rents.map((rent,i)=>`<div><dt>${['Campo sin mejoras','Una chacra','Dos chacras','Tres chacras','Cuatro chacras','Una estancia'][i]}</dt><dd>${money(rent)}</dd></div>`).join('')}</dl>`:tile.type==='rail'?'<p>Alquiler según los ferrocarriles del propietario: $ 500 / $ 1.000 / $ 2.000 / $ 4.000.</p>':'<p>Alquiler: 100, 200 o 300 veces el total de los dados, según tenga una, dos o tres compañías.</p>';
  showArrival(`<span class="eyebrow">PROPIEDAD DISPONIBLE</span><h2>${esc(tile.name)}</h2><div class="purchase-layout">${tile.image?`<img class="purchase-card" src="${tile.image}" alt="Escritura de ${esc(tile.name)}">`:''}<div class="purchase-details"><p class="purchase-player">${esc(player.name)}, podés comprar este título.</p><dl class="purchase-summary"><div><dt>Precio de compra</dt><dd>${money(tile.price)}</dd></div><div><dt>Tu efectivo</dt><dd>${money(player.cash)}</dd></div><div><dt>${canBuy?'Te quedarían':'Te faltan'}</dt><dd>${money(Math.abs(player.cash-tile.price))}</dd></div><div><dt>Valor hipotecario</dt><dd>${money(tile.mortgage)}</dd></div></dl><h3>Alquileres</h3>${rents}${tile.type==='land'?`<p class="arrival-note">Provincia completa: doble alquiler del campo sin mejoras. Cada chacra cuesta ${money(RULES.houseCost)}; la estancia reemplaza cuatro chacras y requiere otro pago de ${money(RULES.houseCost)}.</p>`:''}</div></div><div class="purchase-actions"><button class="primary" id="arrival-buy" ${canBuy?'':'disabled'}>Comprar · ${money(tile.price)}</button><button class="outline" id="arrival-skip">Dejar pasar</button></div>`,{kind:'purchase',title:'Comprar '+tile.name});
  $('arrival-dialog').dataset.space=String(tile.id);
  for(const [id,type] of [['arrival-buy','buy'],['arrival-skip','skip']])$(id).onclick=()=>{$('arrival-dialog').close();dispatch({type});};
}
function showInfo(html) { $('info-content').innerHTML=html; if(!$('info-dialog').open)$('info-dialog').showModal(); }
function openSetup() { if(rolling||experience.busy) return; $('mode-dialog').showModal(); }
function nameFields() {
  const old=[...document.querySelectorAll('#name-fields input')].map(el=>el.value),oldPieces=[...document.querySelectorAll('.piece-select')].map(el=>Number(el.value));
  const count=Number($('count').value),selected=[];
  for(let i=0;i<count;i++){const candidate=oldPieces[i]??state.players[i]?.piece??i;selected.push(selected.includes(candidate)?pieces.findIndex((_,j)=>!selected.includes(j)):candidate);}
  $('name-fields').innerHTML=Array.from({length:count},(_,i)=>`<div class="player-setup-row"><label class="name-label" for="name-${i}"><span class="setup-piece" data-player="${i}">${tokenHtml({id:i,piece:selected[i]})}</span><input id="name-${i}" name="player" maxlength="24" required aria-label="Nombre del jugador ${i+1}" value="${esc(old[i]??state.players[i]?.name??`Jugador ${i+1}`)}"></label><select class="piece-select" data-previous="${selected[i]}" aria-label="Pieza del jugador ${i+1}">${pieces.map((p,j)=>`<option value="${j}" ${j===selected[i]?'selected':''}>${p.name}</option>`).join('')}</select></div>`).join('');
  document.querySelectorAll('.piece-select').forEach(select=>select.addEventListener('change',()=>{
    const previous=select.dataset.previous;
    for(const other of document.querySelectorAll('.piece-select'))if(other!==select&&other.value===select.value){other.value=previous;other.dataset.previous=previous;}
    select.dataset.previous=select.value;
    [...document.querySelectorAll('.setup-piece')].forEach((el,i)=>{el.innerHTML=tokenHtml({id:i,piece:Number(document.querySelectorAll('.piece-select')[i].value)});});
  }));
}
$('count').addEventListener('change',nameFields);
$('setup-form').addEventListener('submit',e=>{e.preventDefault();experience.cancel();pendingCard=null;pendingPurchase=false; const names=[...document.querySelectorAll('#name-fields input')].map(el=>el.value);state=createGame(names,{seed:crypto.getRandomValues(new Uint32Array(1))[0],pieces:[...document.querySelectorAll('.piece-select')].map(el=>Number(el.value))});selected=1;save();$('setup-dialog').close();render();});
$('cancel-setup').addEventListener('click',()=>$('setup-dialog').close());
$('new-button').addEventListener('click',openSetup);
$('close-info').addEventListener('click',()=>$('info-dialog').close());
for(const dialog of document.querySelectorAll('dialog')) dialog.addEventListener('click',e=>{if(e.target===dialog){const r=dialog.getBoundingClientRect();if(e.clientX<r.left||e.clientX>r.right||e.clientY<r.top||e.clientY>r.bottom)dialog.close();}});
$('rules-button').addEventListener('click',()=>showRules());
for(const id of ['luck-deck','fate-deck'])$(id).addEventListener('click',()=>{
  const deck=id==='luck-deck'?'luck':'fate';
  showInfo(`<span class="eyebrow">LAS TARJETAS</span><h2>${deck==='luck'?'Suerte':'Destino'}.</h2><p>Este mazo contiene 16 tarjetas.</p><ul class="rules-list">${Object.values(cards).filter(c=>c.deck===deck).map(c=>`<li>${esc(c.text)}</li>`).join('')}</ul><p>Se barajan al comenzar. Cada carta vuelve al fondo después de usarse, salvo la de libertad, que se conserva hasta utilizarla. Las cartas de movimiento cumplen las reglas del casillero de llegada.</p>${state.lastCard?.deck===deck?`<p class="edition-note">Última tarjeta: ${esc(state.lastCard.text)}</p>`:''}`);
});
$('edition-button').addEventListener('click',()=>showInfo(`<span class="eyebrow">JUEGO DE MESA</span><h2>Estanciero.</h2><p>Comprá propiedades, completá provincias y construí chacras y estancias. Negociá con los demás jugadores y administrá tu dinero hasta quedarte con la mesa.</p><p>De 2 a 6 personas pueden jugar en el mismo dispositivo o en una sala privada online. Compartí la invitación para que cada participante entre desde su equipo.</p><p>Consultá “Cómo jugar” para conocer las reglas de la partida.</p>`));
function openCollection(playerId=onlineMode?online.playerId:managerFor(state)) {
  const p=state.players[playerId],owned=spaces.filter(t=>state.properties[t.id]?.owner===p.id);
  showInfo(`<span class="eyebrow">EL PATRIMONIO</span><h2>Títulos de ${esc(p.name)}.</h2><label for="portfolio-player">Gestionar títulos de</label><select id="portfolio-player">${state.players.filter(p=>!p.bankrupt).map(p=>`<option value="${p.id}" ${p.id===playerId?'selected':''}>${esc(p.name)}</option>`).join('')}</select>${owned.length?`<div class="collection">${owned.map(t=>`<button class="collection-item" data-id="${t.id}"><img src="${t.image}" alt="${esc(t.name)}"><span>${esc(t.name)}${state.properties[t.id].mortgaged?' · Hipotecado':''}</span></button>`).join('')}</div>`:'<p>Este jugador todavía no tiene títulos. Puede comprarlos al caer en un casillero disponible o negociar con otro participante.</p>'}`);
  if(p.releaseCards.length&&(!onlineMode||p.id===online.playerId)){$('info-content').insertAdjacentHTML('beforeend',`<div class="release-cards"><h3>Tarjetas de libertad</h3>${p.releaseCards.map(id=>`<button class="outline card-sale" data-card="${id}">Vender tarjeta de ${cards[id].deck==='luck'?'Suerte':'Destino'}</button>`).join('')}</div>`);document.querySelectorAll('.card-sale').forEach(button=>button.addEventListener('click',()=>offerSale({card:true,id:button.dataset.card,name:'Tarjeta de libertad',price:1000},p)));}
  $('portfolio-player').addEventListener('change',()=>openCollection(Number($('portfolio-player').value)));
  document.querySelectorAll('.collection-item').forEach(el=>el.addEventListener('click',()=>{selected=Number(el.dataset.id);$('info-dialog').close();drawBoard();renderProperty();$('property-panel').scrollIntoView({behavior:'smooth',block:'nearest'});}));
}
$('collection-button').addEventListener('click',()=>openCollection());
function showRules() {
  showInfo(`<span class="eyebrow">REGLAMENTO 60 ANIVERSARIO</span><h2>Cómo jugar.</h2><p><a href="https://es.scribd.com/doc/76541637/Reglas-Del-Estanciero" target="_blank" rel="noopener">Consultar el reglamento compartido</a></p><ol class="rules-list"><li><b>Preparación.</b> Cada jugador recibe $ 35.000. Todos tiran: empieza el mayor total. Los empates se desempatan con otra tirada. Esta app admite de 2 a 6 participantes.</li><li><b>Compras y cobros.</b> Comprá títulos libres al precio indicado. El dueño debe reclamar sus alquileres y el jugador sus premios antes de la próxima tirada, incluso si son dobles. Usá los botones de “Cobros pendientes”.</li><li><b>Comisaría.</b> Según esta edición, también quedás preso al caer directamente en Comisaría. Salís pagando $ 1.000 antes de tirar, con tarjeta de libertad o al sacar dobles. Podés gestionar títulos y reclamar cobros estando preso.</li><li><b>Dobles y Descanso.</b> Los dobles dan otra tirada; tres seguidos envían preso. En Descanso podés anunciar que te quedás antes de tirar, hasta dos turnos; los dobles obligan a avanzar. Estacionamiento libre no permite quedarse.</li><li><b>Construcción.</b> Completá una provincia para duplicar el alquiler del campo y construir de manera pareja. Una chacra cuesta $ 4.000; la estancia requiere el equivalente a cuatro chacras y $ 4.000 adicionales. Podés completar una provincia directamente con estancias si alcanza el efectivo y el stock. Hay 32 chacras y 12 estancias.</li><li><b>Hipotecas.</b> Vendé primero las mejoras de la provincia. El banco presta el valor del reverso menos 10% adelantado. Un título hipotecado no cobra alquiler. Si cambia de dueño, el comprador paga 10% al banco; si conserva la hipoteca, vuelve a pagar 10% al levantarla.</li><li><b>Ventas y remates.</b> Los títulos pueden venderse a un precio acordado y el comprador debe aceptar. Las mejoras sólo se venden al banco, a mitad del costo. Podés rematar títulos; los postores ofertan por turnos y gana la mejor oferta. Rechazar una compra libre no fuerza un remate.</li><li><b>Deudas y quiebra.</b> Antes de quebrar podés vender mejoras, hipotecar y negociar. Al reunir el importe se paga la deuda. Si entregás los bienes, se liquidan las mejoras y los títulos pasan al acreedor; si el acreedor es el banco, salen a remate. No se permiten préstamos entre jugadores.</li></ol><p class="edition-note">Hay 16 tarjetas de Suerte y 16 de Destino. Las compañías cuestan $ 3.800 cada una.</p>`);
  if(['roll','buy','end'].includes(state.phase)&&(!onlineMode||online.playerId===online.room.hostId)){
    $('info-content').insertAdjacentHTML('beforeend',`<details class="manual-fine"><summary>Multa por avisar un premio</summary><p>El reglamento prevé $ 500 por recordar a otro jugador el cobro de un premio. La app no escucha conversaciones: si corresponde, la mesa puede aplicar la multa manualmente.</p><form id="fine-form"><label for="fine-player">Jugador que dio el aviso</label><select id="fine-player">${state.players.filter(p=>!p.bankrupt).map(p=>`<option value="${p.id}">${esc(p.name)}</option>`).join('')}</select><button class="outline full" type="submit">Aplicar multa de $ 500</button></form></details>`);
    $('fine-form').addEventListener('submit',e=>{e.preventDefault();const playerId=Number($('fine-player').value);$('info-dialog').close();dispatch({type:'fine',playerId});});
  }
}
function entryMode(kind) {
  onlineEntry=kind;const joining=kind==='join';
  $('room-code-field').hidden=!joining;$('join-code').required=joining;
  $('online-submit').textContent=joining?'Entrar a la sala':'Crear sala';
  $('tab-create').setAttribute('aria-pressed',String(!joining));$('tab-join').setAttribute('aria-pressed',String(joining));
  $('online-form-note').textContent=joining?'Ingresá el código que te compartieron. Si ya estabas en esa sala, recuperaremos tu lugar.':'Vas a crear una sala privada para 2 a 6 jugadores.';
  $('online-error').textContent='';fillOnlinePieces();
}
function fillOnlinePieces(taken=[]) {
  const current=Number($('online-piece').value)||0;
  $('online-piece').innerHTML=pieces.map((piece,i)=>`<option value="${i}" ${taken.includes(i)?'disabled':''}>${piece.name}${taken.includes(i)?' · Ocupada':''}</option>`).join('');
  $('online-piece').value=String(taken.includes(current)?pieces.findIndex((_,i)=>!taken.includes(i)):current);
}
function openOnline(code='') {
  $('mode-dialog').close();$('online-dialog').showModal();entryMode(code?'join':'create');
  $('join-code').value=code;$('resume-online').hidden=!online.remembered();
}
$('choose-local').onclick=async()=>{if(onlineMode)await returnLocal();$('mode-dialog').close();$('setup-dialog').showModal();};
$('choose-online').onclick=()=>openOnline();
$('close-mode').onclick=()=>$('mode-dialog').close();$('close-online').onclick=()=>$('online-dialog').close();
$('tab-create').onclick=()=>entryMode('create');$('tab-join').onclick=()=>entryMode('join');
$('inspect-room').onclick=async()=>{try{const room=await online.inspect($('join-code').value.trim().toUpperCase());fillOnlinePieces(room.members.map(m=>m.piece));$('online-form-note').textContent=room.started?'La partida ya empezó. Sólo pueden volver sus participantes.':room.members.map(m=>m.name).join(', ')+' ya están en la mesa.';}catch(error){$('online-error').textContent=error.message;}};
$('online-form').addEventListener('submit',async event=>{
  event.preventDefault();$('online-submit').disabled=true;$('online-error').textContent='';
  try{
    const code=$('join-code').value.trim().toUpperCase(),credential=onlineEntry==='join'?online.remembered(code):null;
    if(credential)await online.resume(credential);
    else await online.enter(onlineEntry,{name:$('online-name').value.trim(),piece:Number($('online-piece').value),code});
  }catch(error){$('online-error').textContent=error.message;}
  finally{$('online-submit').disabled=false;}
});
$('resume-online').onclick=async()=>{try{await online.resume(online.remembered());}catch(error){$('online-error').textContent=error.message;}};
$('start-online').onclick=async()=>{try{await online.start();}catch(error){onlineError(error);}};
$('leave-online').onclick=returnLocal;
$('retry-online').onclick=()=>online.deliverPending().catch(onlineError);
$('copy-invite').onclick=async()=>{
  const url=new URL(location.href);url.search='';url.searchParams.set('sala',online.room.code);url.hash='';
  try{await navigator.clipboard.writeText(url.href);$('online-status').textContent='Invitación copiada';}
  catch{showInfo(`<h2>Invitá a tu mesa.</h2><p>Compartí este enlace o el código ${esc(online.room.code)}.</p><input aria-label="Enlace de invitación" readonly value="${esc(url.href)}">`);}
};
nameFields(); render();fillOnlinePieces();syncSoundButton();
const invite=new URL(location.href).searchParams.get('sala');
if(invite)openOnline(invite.toUpperCase());
else if(!saved)openSetup();
else if(state.phase==='buy')showPurchase();
