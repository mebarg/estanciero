import { cards, shuffledDecks } from './cards.js';
// Precios y casilleros del tablero; alquileres de las escrituras.
// Reglas de la edición 60 Aniversario. Compañías: $3.800.
const groups = [
  ['Formosa', '#584495', [[1,'Sur',40,200,600,1700,3000,4750],[2,'Centro',40,200,600,1700,3000,4750],[3,'Norte',80,400,800,3400,6000,9500]]],
  ['Río Negro', '#8eb747', [[5,'Sur',110,570,1700,5150,7600,9500],[6,'Norte',150,750,2000,5700,8500,11500]]],
  ['Salta', '#e2be32', [[9,'Sur',200,1000,2800,8500,12000,14200],[11,'Centro',200,1000,2800,8500,12000,14200],[13,'Norte',230,1150,3400,9500,13000,17000]]],
  ['Mendoza', '#ac579c', [[17,'Sur',250,1350,3800,10500,14200,18000],[19,'Centro',250,1350,3800,10500,14200,18000],[20,'Norte',300,1500,4200,11500,15000,19000]]],
  ['Santa Fe', '#26985d', [[23,'Sur',350,1700,4750,13000,16000,20000],[24,'Centro',350,1700,4750,13000,16000,20000],[26,'Norte',400,2000,5750,14000,17000,21000]]],
  ['Tucumán', '#dc873e', [[29,'Sur',400,2200,6000,15000,18000,21000],[30,'Norte',450,2400,6800,16000,19500,23000]]],
  ['Córdoba', '#399dc3', [[32,'Sur',500,2500,6500,17000,21000,24000],[33,'Centro',450,2400,6800,16000,19500,23000],[34,'Norte',550,2850,8500,19000,23000,27000]]],
  ['Buenos Aires', '#cf5550', [[37,'Sur',650,3300,9500,22000,25000,30000],[39,'Centro',650,3300,9500,22000,25000,30000],[40,'Norte',1000,4000,12000,26000,31000,36000]]],
];
export const spaces = Array.from({ length: 42 }, (_, id) => ({ id, type: 'event', name: 'Destino', color: '#b1a479' }));
for (const [group,color,properties] of groups) for (const [id,zone,...rents] of properties) {
  spaces[id] = { id, type: 'land', group, zone, name: `${group} · ${zone}`, color, rents, price: Math.ceil((rents[0] * 12 + 1000) / 100) * 100, image: `assets/p${id}.jpg` };
}
for (const [id,name] of [[12,'Gral. Belgrano'],[18,'Gral. San Martín'],[22,'Gral. Mitre'],[27,'Gral. Urquiza']]) spaces[id] = { id, type: 'rail', name, group: 'Ferrocarril', price: 4000, color:'#70837f', image:`assets/p${id}.jpg` };
for (const [id,name] of [[8,'Petrolera'],[16,'Bodega'],[31,'Ingenio']]) spaces[id] = { id, type: 'company', name, group: 'Compañía', price: 3800, color:'#70837f', image:`assets/p${id}.jpg` };
for (const [id,type,name] of [[0,'start','Salida'],[4,'tax','Contribución'],[7,'event','Destino'],[10,'event','Suerte'],[14,'jail','Comisaría'],[15,'tax','Impuesto'],[21,'rest','Descanso'],[25,'event','Suerte'],[28,'event','Destino'],[35,'goJail','A comisaría'],[36,'tax','Contribución'],[38,'event','Suerte'],[41,'event','Destino']]) spaces[id] = { id,type,name,color:'#a6ad98' };
// El tablero original ubica Buenos Aires Norte en 41; la tarjeta JPG dice 40.
spaces[41] = { ...spaces[40], id:41 };
for (const [id,type,name,amount] of [[4,'tax','Impuesto a los réditos',5000],[7,'bonus','Premio ganadero',2500],[10,'event','Destino'],[15,'event','Suerte'],[25,'event','Destino'],[28,'rest','Estacionamiento libre'],[35,'goJail','Marche preso'],[36,'event','Suerte'],[38,'event','Destino'],[40,'tax','Impuesto a las ventas',2000]]) spaces[id] = { id,type,name,amount,color:'#a6ad98' };
const boardPrices = {1:1000,2:1000,3:1200,5:2000,6:2200,9:2600,11:2600,12:3600,13:3000,17:3400,18:3600,19:3400,20:3800,22:3600,23:4200,24:4200,26:4600,27:3600,29:5000,30:5400,32:6000,33:6400,34:7000,37:8000,39:8000,41:9000};
for (const [id,price] of Object.entries(boardPrices)) spaces[id].price=price;

// Valores hipotecarios leídos de los reversos escaneados, no calculados
// como mitad del precio: hay diferencias entre esta edición y los escaneos.
const mortgageValues = {1:500,2:500,3:600,5:1000,6:1100,8:1900,9:1300,11:1300,12:1900,13:1500,16:1900,17:1700,18:1800,19:1700,20:1900,22:1800,23:2100,24:2100,26:2300,27:1700,29:2500,30:2700,31:1900,32:3000,33:3000,34:3200,37:3500,39:3500,41:3700};
for(const [id,mortgage] of Object.entries(mortgageValues)) spaces[id].mortgage=mortgage;
export const RULES = Object.freeze({ initialCash:35000, salary:5000, bail:1000, houseCost:4000, houses:32, estates:12, interest:0.1 });
export const money = n => '$ ' + new Intl.NumberFormat('es-AR').format(n);

export function createGame(names, {seed=1,pieces=null}={}) {
  if(!Array.isArray(names)||names.length<2||names.length>6||names.some(n=>typeof n!=='string')) throw new Error('Se necesitan entre 2 y 6 jugadores.');
  pieces??=names.map((_,id)=>id);
  if(!Array.isArray(pieces)||pieces.length!==names.length||pieces.some(id=>!Number.isInteger(id)||id<0||id>5)||new Set(pieces).size!==pieces.length)throw new Error('Cada jugador debe elegir una pieza diferente.');
  return { version:2, ruleRevision:3, boardRevision:2, players:names.map((name,id)=>({id,piece:pieces[id],name:name.trim().slice(0,24)||`Jugador ${id+1}`,cash:RULES.initialCash,position:0,jail:0,restTurns:0,releaseCards:[],bankrupt:false})),
    turn:0,startPlayer:0,round:1,phase:'order',dice:[1,1],doubles:0,properties:{},claims:[],nextClaim:1,debt:null,auction:null,auctionQueue:[],trade:null,
    order:{pending:names.map((_,i)=>i),rolls:{}},decks:shuffledDecks(seed),lastCard:null,cardChoice:null,payments:[],winner:null,
    log:['Cada jugador recibe $ 35.000. Se tiran los dados para decidir quién empieza.'],message:'Cada participante tira una vez. Empieza quien obtenga el mayor total.' };
}
export function note(s,text) { s.message=text;s.log.unshift(text);s.log=s.log.slice(0,80); }
const integer=n=>Number.isSafeInteger(n)&&n>=0;
const alive=(s,id)=>Number.isInteger(id)&&s.players[id]&&!s.players[id].bankrupt;
const siblings=tile=>spaces.filter(t=>t.type==='land'&&t.group===tile.group);
export function ownsGroup(s,player,tile) {return tile?.type==='land'&&siblings(tile).every(t=>s.properties[t.id]?.owner===player);}
export function bankStock(s) {
  const used=Object.values(s.properties);
  return {houses:RULES.houses-used.reduce((n,p)=>n+(p.level<5?p.level:0),0),estates:RULES.estates-used.filter(p=>p.level===5).length};
}
export function rentFor(s,tile,total) {
  const prop=s.properties[tile.id];if(!prop||prop.mortgaged)return 0;
  if(tile.type==='land')return tile.rents[prop.level]*(prop.level===0&&ownsGroup(s,prop.owner,tile)?2:1);
  const count=spaces.filter(t=>t.type===tile.type&&s.properties[t.id]?.owner===prop.owner).length;
  return tile.type==='rail'?[0,500,1000,2000,4000][count]:count*100*total;
}
export const managerFor=s=>s.debt?.payer??s.turn;
const groupHasBuildings=(s,tile)=>tile.type==='land'&&siblings(tile).some(t=>s.properties[t.id]?.level>0);
export function buildProblem(s,id) {
  const tile=spaces[id],prop=s.properties[id],p=s.players[s.turn];
  if(!tile||!prop||prop.owner!==p.id||!ownsGroup(s,p.id,tile))return 'Necesitás ser dueño de la provincia completa.';
  if(!['roll','end'].includes(s.phase)||p.bankrupt)return 'Construí durante tu turno, sin deudas pendientes.';
  if(siblings(tile).some(t=>s.properties[t.id].mortgaged))return 'Primero levantá las hipotecas de la provincia.';
  if(prop.level===5)return 'Este campo ya tiene una estancia.';
  if(siblings(tile).some(t=>s.properties[t.id].level<prop.level))return 'Construí de manera pareja en la provincia.';
  if(p.cash<RULES.houseCost)return 'No alcanza el efectivo.';
  if(prop.level<4&&bankStock(s).houses<1)return 'El banco no tiene chacras disponibles.';
  if(prop.level===4&&bankStock(s).estates<1)return 'El banco no tiene estancias disponibles.';
  return '';
}
function winnerCheck(s) {
  if(s.debt||s.auction||s.trade||s.auctionQueue.length||s.payments.length||s.cardChoice)return;
  const remaining=s.players.filter(p=>!p.bankrupt);
  const all=spaces.filter(t=>t.price);
  const winner=remaining.length===1?remaining[0]:remaining.find(p=>all.every(t=>s.properties[t.id]?.owner===p.id));
  if(winner){s.winner=winner.id;s.phase='over';s.claims=[];note(s,`${winner.name} ganó la partida.`);}
}
function claim(s,payee,amount,label,payer=null,space=null) {
  s.claims.push({id:s.nextClaim++,payee,payer,amount,label,space});
  note(s,`${s.players[payee].name} puede reclamar ${money(amount)} por ${label} antes de la próxima tirada.`);
}
function settleDebt(s) {
  const d=s.debt;if(!d||s.phase==='auction'||s.phase==='trade')return;
  const payer=s.players[d.payer];if(payer.cash<d.amount)return;
  payer.cash-=d.amount;if(d.creditor!==null)s.players[d.creditor].cash+=d.amount;
  s.debt=null;s.phase=d.resume;note(s,`${payer.name} pagó ${money(d.amount)} por ${d.reason}.`);processPayments(s);winnerCheck(s);
}
function processPayments(s) {
  while(!s.debt&&s.payments.length){const payment=s.payments.shift();if(alive(s,payment.payer)&&(payment.creditor===null||alive(s,payment.creditor)))charge(s,payment.payer,payment.amount,payment.creditor,payment.reason);}
}
function charge(s,payer,amount,creditor,reason) {
  if(!amount)return;
  const player=s.players[payer];
  if(player.cash>=amount){player.cash-=amount;if(creditor!==null)s.players[creditor].cash+=amount;note(s,`${player.name} paga ${money(amount)} por ${reason}.`);}
  else {s.debt={payer,amount,creditor,reason,resume:s.phase};s.phase='debt';note(s,`${player.name} debe ${money(amount)} por ${reason}. Puede vender mejoras, hipotecar o negociar antes de quebrar.`);}
}
function sendToJail(s,player) {if(s.motion&&player.position!==14)s.motion.steps.push({position:14,kind:'jail'});player.position=14;player.jail=1;player.restTurns=0;s.doubles=0;note(s,`${player.name} va a comisaría. Puede pagar $ 1.000, usar una tarjeta o intentar dobles.`);}
function landing(s,player,depth=0) {
  if(depth>8)throw new Error('Demasiados movimientos encadenados.');
  const tile=spaces[player.position],prop=s.properties[tile.id];
  note(s,`${player.name} llegó a ${tile.name}.`);
  if(tile.price) {
    if(!prop){s.phase='buy';note(s,`${tile.name} está disponible por ${money(tile.price)}.`);}
    else if(prop.owner!==player.id){const amount=rentFor(s,tile,s.dice[0]+s.dice[1]);if(amount)claim(s,prop.owner,amount,`alquiler de ${tile.name}`,player.id,tile.id);}
  } else if(tile.type==='tax')charge(s,player.id,tile.amount,null,tile.name);
  else if(tile.type==='bonus')claim(s,player.id,tile.amount,tile.name);
  else if(tile.type==='jail'||tile.type==='goJail')sendToJail(s,player);
  else if(tile.id===21){player.restTurns=2;note(s,`${player.name} puede elegir descansar hasta dos turnos, anunciándolo antes de tirar.`);}
  else if(tile.type==='event')drawCard(s,player,[15,36].includes(tile.id)?'luck':'fate',depth);
}
function move(s,player,steps,{salary=true,depth=0}={}) {
  const raw=player.position+steps;
  if(s.motion)for(let i=1;i<=Math.abs(steps);i++)s.motion.steps.push({position:((player.position+Math.sign(steps)*i)%42+42)%42,kind:steps<0?'back':'step'});
  if(salary&&steps>0&&raw>=42)claim(s,player.id,RULES.salary,'paso por Salida');
  player.position=((raw%42)+42)%42;player.restTurns=0;landing(s,player,depth);
}
function drawCard(s,player,deck,depth) {
  const id=s.decks[deck].shift();if(!id){note(s,'No hay tarjetas disponibles en este mazo.');return;}
  const card=cards[id];s.lastCard={id,deck,text:card.text,demonstration:false,playerId:player.id,sequence:(s.lastCard?.sequence??0)+1};
  if(card.type==='release')player.releaseCards.push(id);else s.decks[deck].push(id);
  note(s,`${deck==='luck'?'Suerte':'Destino'} para ${player.name}: ${card.text}`);
  if(card.type==='cash'){if(card.amount<0)charge(s,player.id,-card.amount,null,'tarjeta de '+(deck==='luck'?'Suerte':'Destino'));else player.cash+=card.amount;}
  else if(card.type==='jail')sendToJail(s,player);
  else if(card.type==='back')move(s,player,-card.steps,{salary:false,depth:depth+1});
  else if(card.type==='goto')move(s,player,(card.position-player.position+42)%42||42,{depth:depth+1});
  else if(card.type==='backTo')move(s,player,-((player.position-card.position+42)%42),{salary:false,depth:depth+1});
  else if(card.type==='repairs'){
    const properties=Object.values(s.properties).filter(p=>p.owner===player.id),houses=properties.reduce((n,p)=>n+(p.level<5?p.level:0),0),estates=properties.filter(p=>p.level===5).length;
    charge(s,player.id,houses*card.house+estates*card.estate,null,`tarjeta: ${houses} chacras y ${estates} estancias`);
  }else if(card.type==='collect'){
    s.payments=s.players.filter(p=>!p.bankrupt&&p.id!==player.id).map(p=>({payer:p.id,creditor:player.id,amount:card.amount,reason:'cumpleaños de '+player.name}));processPayments(s);
  }else if(card.type==='choice'){s.cardChoice={player:player.id,cardId:id,resume:s.phase};s.phase='card-choice';}
}
function transferCost(tile,prop,redeem) {return prop.mortgaged?Math.ceil(tile.mortgage*(redeem?1.1:0.1)):0;}
function auctionStart(s,id,seller,resume) {
  const available=s.players.filter(p=>!p.bankrupt&&p.id!==seller).map(p=>p.id);
  s.auction={id,seller,resume,turn:available[0],passed:[],highBid:0,highBidder:null,redeem:false};s.phase='auction';
  note(s,`Remate de ${spaces[id].name}. Cada participante puede ofertar o retirarse.`);
}
function nextBankAuction(s,resume) {
  if(s.auctionQueue.length){auctionStart(s,s.auctionQueue.shift(),null,resume);return;}
  s.phase=resume;settleDebt(s);winnerCheck(s);
}
function auctionFinish(s) {
  const a=s.auction,tile=spaces[a.id];s.auction=null;
  s.lastAuction={sequence:(s.lastAuction?.sequence||0)+1,id:a.id,winner:a.highBidder,amount:a.highBid};
  if(a.highBidder!==null){
    const old=s.properties[a.id]||{owner:a.highBidder,level:0,mortgaged:false};
    const buyer=s.players[a.highBidder],fee=transferCost(tile,old,a.redeem);
    buyer.cash-=a.highBid+fee;if(a.seller!==null)s.players[a.seller].cash+=a.highBid;
    s.properties[a.id]={...old,owner:buyer.id,mortgaged:old.mortgaged&&!a.redeem,interestDue:!!old.mortgaged&&!a.redeem};
    note(s,`${buyer.name} ganó el remate de ${tile.name} por ${money(a.highBid)}${fee?' y pagó '+money(fee)+' al banco por la hipoteca':''}.`);
  }else note(s,`El remate de ${tile.name} quedó sin ofertas.`);
  if(s.auctionQueue.length)nextBankAuction(s,a.resume);else{s.phase=a.resume;settleDebt(s);winnerCheck(s);}
}
function auctionNext(s) {
  const a=s.auction;
  const candidates=s.players.filter(p=>!p.bankrupt&&p.id!==a.seller&&!a.passed.includes(p.id)&&p.id!==a.highBidder);
  if(!candidates.length){auctionFinish(s);return;}
  for(let step=1;step<=s.players.length;step++){const id=(a.turn+step)%s.players.length;if(candidates.some(p=>p.id===id)){a.turn=id;return;}}
}
function bankrupt(s) {
  const d=s.debt,p=s.players[d.payer],ids=Object.keys(s.properties).filter(id=>s.properties[id].owner===p.id);
  const recovery=p.cash+ids.reduce((n,id)=>n+s.properties[id].level*RULES.houseCost/2+(s.properties[id].mortgaged?0:Math.round(spaces[id].mortgage*.9)),0);
  if(recovery>=d.amount){note(s,'Todavía se puede cubrir esta deuda vendiendo mejoras e hipotecando títulos. Gestioná primero ese patrimonio.');return;}
  for(const id of ids){p.cash+=s.properties[id].level*RULES.houseCost/2;s.properties[id].level=0;}
  const paid=Math.min(p.cash,d.amount);p.cash-=paid;if(d.creditor!==null)s.players[d.creditor].cash+=paid;
  // Cualquier sobrante de liquidar mejoras también pertenece al acreedor.
  if(d.creditor!==null){s.players[d.creditor].cash+=p.cash;p.cash=0;}
  let inheritedInterest=0;
  for(const id of ids){
    if(d.creditor===null){delete s.properties[id];s.auctionQueue.push(Number(id));}
    else {s.properties[id].owner=d.creditor;if(s.properties[id].mortgaged){inheritedInterest+=Math.ceil(spaces[id].mortgage*.1);s.properties[id].interestDue=true;}}
  }
  for(const id of p.releaseCards)s.decks[cards[id].deck].push(id);
  p.releaseCards=[];p.bankrupt=true;p.jail=0;p.restTurns=0;p.cash=0;s.debt=null;s.doubles=0;
  s.claims=s.claims.filter(c=>c.payee!==p.id&&c.payer!==p.id);s.phase=d.resume;
  if(s.players[s.turn].bankrupt)s.phase='end';
  note(s,`${p.name} se declaró en quiebra. Las mejoras se liquidaron a mitad de precio.`);
  if(s.players.filter(p=>!p.bankrupt).length===1){s.auctionQueue=[];s.payments=[];winnerCheck(s);return;}
  if(inheritedInterest)charge(s,d.creditor,inheritedInterest,null,'interés de hipotecas heredadas');
  if(s.auctionQueue.length)nextBankAuction(s,s.phase);else {processPayments(s);winnerCheck(s);}
}
function orderRoll(s,dice) {
  const total=dice[0]+dice[1];s.dice=dice;s.order.rolls[s.turn]=total;note(s,`${s.players[s.turn].name} obtuvo ${total} para decidir el orden.`);s.order.pending.shift();
  if(s.order.pending.length){s.turn=s.order.pending[0];return;}
  const entries=Object.entries(s.order.rolls),max=Math.max(...entries.map(([,n])=>n)),tied=entries.filter(([,n])=>n===max).map(([id])=>Number(id));
  if(tied.length>1){s.order={pending:tied,rolls:{}};s.turn=tied[0];note(s,'Empate en el mayor total. Vuelven a tirar los jugadores empatados.');}
  else{s.turn=tied[0];s.startPlayer=s.turn;s.order=null;s.phase='roll';note(s,`${s.players[s.turn].name} empieza la partida.`);}
}
function propertyActor(s,action) {return action.playerId??managerFor(s);}
export function act(state,action) {
  const s=structuredClone(state);if(s.phase==='over')return s;
  const p=s.players[s.turn];
  if(action.type==='fine'&&['roll','buy','end'].includes(s.phase)&&alive(s,action.playerId)){charge(s,action.playerId,500,null,'multa por avisar el cobro de un premio');return s;}
  if(action.type==='card-choice'&&s.phase==='card-choice'){
    const choice=s.cardChoice;if(!['pay','draw'].includes(action.choice))return s;
    s.cardChoice=null;s.phase=choice.resume;
    if(action.choice==='pay')charge(s,choice.player,cards[choice.cardId].amount,null,'multa de Destino');else {s.motion={sequence:(s.motion?.sequence??0)+1,playerId:choice.player,kind:'card',from:s.players[choice.player].position,dice:null,steps:[]};drawCard(s,s.players[choice.player],'luck',0);}
    return s;
  }
  if(action.type==='roll'){
    if(!['order','roll'].includes(s.phase))return s;
    const dice=action.dice;if(!Array.isArray(dice)||dice.length!==2||dice.some(n=>!Number.isInteger(n)||n<1||n>6))throw new Error('Dados inválidos.');
    s.motion={sequence:(s.motion?.sequence??0)+1,playerId:p.id,kind:s.phase==='order'?'order':'roll',from:p.position,dice:[...dice],steps:[]};
    if(s.phase==='order'){orderRoll(s,dice);return s;}
    // El reglamento pone el límite al tirar de nuevo, incluso si son dobles.
    if(s.claims.length)note(s,'Vencieron los cobros no reclamados antes de esta tirada.');s.claims=[];
    s.dice=dice;s.phase='end';const isDouble=dice[0]===dice[1],total=dice[0]+dice[1];
    if(p.jail){s.doubles=0;if(!isDouble){note(s,`${p.name} no sacó dobles y sigue en comisaría.`);return s;}p.jail=0;note(s,`${p.name} salió de comisaría con dobles.`);move(s,p,total);return s;}
    if(action.stay&&p.position===21&&p.restTurns>0&&!isDouble){p.restTurns--;s.doubles=0;note(s,`${p.name} eligió descansar. Le quedan ${p.restTurns} turnos de descanso.`);return s;}
    s.doubles=isDouble?s.doubles+1:0;
    if(s.doubles===3){sendToJail(s,p);return s;}
    move(s,p,total);return s;
  }
  if(action.type==='claim'&&['roll','buy','end'].includes(s.phase)){
    const c=s.claims.find(c=>c.id===action.id);if(!c)return s;
    s.claims=s.claims.filter(item=>item.id!==c.id);
    if(c.payer===null){s.players[c.payee].cash+=c.amount;note(s,`${s.players[c.payee].name} cobró ${money(c.amount)} por ${c.label}.`);}
    else charge(s,c.payer,c.amount,c.payee,c.label);
    return s;
  }
  if(action.type==='buy'&&s.phase==='buy'){
    const tile=spaces[p.position];if(s.properties[tile.id]||!tile.price||p.cash<tile.price){note(s,'No alcanza el efectivo para comprar. Podés gestionar tus títulos o dejar pasar.');return s;}
    p.cash-=tile.price;s.properties[tile.id]={owner:p.id,level:0,mortgaged:false,interestDue:false};s.phase='end';note(s,`${p.name} compró ${tile.name} por ${money(tile.price)}.`);winnerCheck(s);return s;
  }
  if(action.type==='skip'&&s.phase==='buy'){s.phase='end';note(s,`${p.name} deja pasar la compra. El reglamento no obliga a rematar los títulos rechazados.`);return s;}
  if(action.type==='bail'&&p.jail&&s.phase==='roll'){
    if(p.cash<RULES.bail){note(s,'Necesitás $ 1.000 para pagar la multa. Podés gestionar tus títulos o intentar dobles.');return s;}
    p.cash-=RULES.bail;p.jail=0;note(s,`${p.name} pagó $ 1.000 y puede tirar para salir.`);return s;
  }
  if(action.type==='release'&&p.jail&&s.phase==='roll'&&p.releaseCards.length){const id=p.releaseCards.shift();s.decks[cards[id].deck].push(id);p.jail=0;note(s,`${p.name} usó su tarjeta de libertad. Vuelve al fondo del mazo.`);return s;}
  if(action.type==='end'&&s.phase==='end'){
    if(s.doubles>0&&!p.bankrupt&&!p.jail){s.phase='roll';note(s,`${p.name} sacó dobles. Vuelve a tirar.`);return s;}
    do{s.turn=(s.turn+1)%s.players.length;if(s.turn===s.startPlayer)s.round++;}while(s.players[s.turn].bankrupt);
    s.phase='roll';s.doubles=0;note(s,`Turno de ${s.players[s.turn].name}.`);return s;
  }
  if(action.type==='bankrupt'&&s.phase==='debt'){bankrupt(s);return s;}
  if(action.type==='bid'&&s.phase==='auction'){
    const a=s.auction;if(action.playerId!==a.turn||!integer(action.amount)||action.amount<=a.highBid)return s;
    const fee=transferCost(spaces[a.id],s.properties[a.id]||{mortgaged:false},!!action.redeem);
    if(s.players[a.turn].cash<action.amount+fee){note(s,'La oferta y los gastos hipotecarios superan tu efectivo.');return s;}
    a.highBid=action.amount;a.highBidder=a.turn;a.redeem=!!action.redeem;note(s,`${s.players[a.turn].name} ofrece ${money(action.amount)}.`);auctionNext(s);return s;
  }
  if(action.type==='pass'&&s.phase==='auction'&&action.playerId===s.auction.turn){s.auction.passed.push(action.playerId);auctionNext(s);return s;}
  if(action.type==='reject-trade'&&s.phase==='trade'){const resume=s.trade.resume;s.trade=null;s.phase=resume;note(s,'La propuesta fue rechazada. No se transfirió dinero ni títulos.');return s;}
  if(action.type==='accept-trade'&&s.phase==='trade'){
    const t=s.trade,buyer=s.players[t.buyer],seller=s.players[t.seller];
    if(t.kind==='card'){
      if(buyer.cash<t.price){note(s,'El comprador no tiene suficiente efectivo.');return s;}
      buyer.cash-=t.price;seller.cash+=t.price;seller.releaseCards=seller.releaseCards.filter(id=>id!==t.id);buyer.releaseCards.push(t.id);
      s.trade=null;s.phase=t.resume;note(s,`${buyer.name} compró una tarjeta de libertad a ${seller.name} por ${money(t.price)}.`);settleDebt(s);return s;
    }
    const prop=s.properties[t.id];
    const fee=transferCost(spaces[t.id],prop,!!action.redeem);
    if(buyer.cash<t.price+fee){note(s,'El comprador no tiene efectivo para el precio y los gastos hipotecarios.');return s;}
    buyer.cash-=t.price+fee;seller.cash+=t.price;prop.owner=buyer.id;prop.interestDue=!!prop.mortgaged&&!action.redeem;if(action.redeem)prop.mortgaged=false;
    s.trade=null;s.phase=t.resume;note(s,`${buyer.name} aceptó comprar ${spaces[t.id].name} a ${seller.name} por ${money(t.price)}${fee?' y pagó '+money(fee)+' al banco':''}.`);settleDebt(s);winnerCheck(s);return s;
  }
  // Operaciones de patrimonio: también disponibles preso o al cubrir una deuda.
  if(!['roll','buy','end','debt'].includes(s.phase))return s;
  if(action.type==='offer-card'){
    const actor=propertyActor(s,action);
    if(!alive(s,actor)||(s.debt&&s.debt.payer!==actor)||!s.players[actor].releaseCards.includes(action.id)||!alive(s,action.buyer)||action.buyer===actor||!integer(action.price)||action.price<1)return s;
    s.trade={kind:'card',id:action.id,seller:actor,buyer:action.buyer,price:action.price,resume:s.phase};s.phase='trade';note(s,`${s.players[actor].name} propone vender una tarjeta de libertad a ${s.players[action.buyer].name} por ${money(action.price)}.`);return s;
  }
  const actor=propertyActor(s,action),tile=spaces[action.id],prop=s.properties[action.id];
  if(!alive(s,actor)||!tile||!prop||prop.owner!==actor||(s.debt&&s.debt.payer!==actor))return s;
  const owner=s.players[actor];
  if(action.type==='build'){
    if(actor!==s.turn)return s;const error=buildProblem(s,tile.id);if(error){note(s,error);return s;}
    prop.level++;owner.cash-=RULES.houseCost;note(s,`${owner.name} construyó ${prop.level===5?'una estancia':'una chacra'} en ${tile.name}.`);
  }else if(action.type==='build-estates'){
    if(actor!==s.turn||!['roll','end'].includes(s.phase)||!ownsGroup(s,actor,tile))return s;
    const group=siblings(tile),cost=group.reduce((n,t)=>n+(5-s.properties[t.id].level)*RULES.houseCost,0),needed=group.filter(t=>s.properties[t.id].level<5).length;
    if(!needed||group.some(t=>s.properties[t.id].mortgaged)||owner.cash<cost||bankStock(s).estates<needed){note(s,'No alcanza el efectivo o el stock, o hay una hipoteca en la provincia.');return s;}
    owner.cash-=cost;for(const t of group)s.properties[t.id].level=5;note(s,`${owner.name} completó ${tile.group} con estancias por ${money(cost)}.`);
  }else if(action.type==='sell-building'){
    if(prop.level===0)return s;
    if(siblings(tile).some(t=>s.properties[t.id]?.owner===actor&&s.properties[t.id].level>prop.level)){note(s,'Vendé las mejoras de manera pareja, empezando por los campos más construidos.');return s;}
    if(prop.level===5&&bankStock(s).houses<4){note(s,'No hay cuatro chacras para reemplazar la estancia. Podés vender todas las mejoras de la provincia.');return s;}
    prop.level--;owner.cash+=RULES.houseCost/2;note(s,`${owner.name} vendió una mejora por $ 2.000.`);settleDebt(s);
  }else if(action.type==='sell-buildings'){
    if(tile.type!=='land')return s;let refund=0;
    for(const t of siblings(tile))if(s.properties[t.id]?.owner===actor){refund+=s.properties[t.id].level*RULES.houseCost/2;s.properties[t.id].level=0;}
    owner.cash+=refund;note(s,`${owner.name} vendió las mejoras de ${tile.group} por ${money(refund)}.`);settleDebt(s);
  }else if(action.type==='mortgage'){
    if(prop.mortgaged||groupHasBuildings(s,tile)){note(s,'Vendé primero todas las mejoras de la provincia.');return s;}
    prop.mortgaged=true;prop.interestDue=false;const received=Math.round(tile.mortgage*.9);owner.cash+=received;
    note(s,`${owner.name} hipotecó ${tile.name}: ${money(tile.mortgage)} menos 10% adelantado; recibe ${money(received)}.`);settleDebt(s);
  }else if(action.type==='redeem'){
    if(!prop.mortgaged||s.phase==='debt')return s;const cost=Math.ceil(tile.mortgage*(prop.interestDue?1.1:1));
    if(owner.cash<cost){note(s,`Se necesitan ${money(cost)} para levantar esta hipoteca.`);return s;}
    owner.cash-=cost;prop.mortgaged=false;prop.interestDue=false;note(s,`${owner.name} levantó la hipoteca de ${tile.name} por ${money(cost)}.`);
  }else if(action.type==='offer-trade'){
    if(!alive(s,action.buyer)||action.buyer===actor||!integer(action.price)||action.price===0||groupHasBuildings(s,tile)){note(s,'Elegí otro comprador, un precio positivo y un título sin mejoras en su provincia.');return s;}
    s.trade={kind:'property',id:tile.id,seller:actor,buyer:action.buyer,price:action.price,resume:s.phase};s.phase='trade';note(s,`${owner.name} propone vender ${tile.name} por ${money(action.price)} a ${s.players[action.buyer].name}. El comprador debe aceptar.`);
  }else if(action.type==='auction'){
    if(groupHasBuildings(s,tile)){note(s,'Vendé primero las mejoras de esta provincia.');return s;}
    auctionStart(s,tile.id,actor,s.phase);
  }
  return s;
}

export function validSave(s) {
  try {
    const phases=['order','roll','buy','end','debt','auction','trade','card-choice','over'];
    if(!s||s.version!==2||s.ruleRevision!==3||!Array.isArray(s.players)||s.players.length<2||s.players.length>6||!phases.includes(s.phase)||!integer(s.turn)||!s.players[s.turn]||!integer(s.startPlayer)||!s.players[s.startPlayer]||!integer(s.round)||s.round<1||!integer(s.doubles)||s.doubles>2)return false;
    if(!Array.isArray(s.dice)||s.dice.length!==2||!s.dice.every(n=>Number.isInteger(n)&&n>=1&&n<=6)||!Array.isArray(s.log)||s.log.length>80||!s.log.every(t=>typeof t==='string')||typeof s.message!=='string')return false;
    if(!s.players.every((p,i)=>p&&p.id===i&&typeof p.name==='string'&&p.name.length<=24&&integer(p.cash)&&integer(p.position)&&p.position<42&&[0,1].includes(p.jail)&&integer(p.restTurns)&&p.restTurns<=2&&Array.isArray(p.releaseCards)&&p.releaseCards.every(id=>cards[id]?.type==='release')&&typeof p.bankrupt==='boolean'))return false;
    if(s.motion){const m=s.motion;if(!integer(m.sequence)||m.sequence<1||!integer(m.playerId)||!s.players[m.playerId]||!['roll','order','card'].includes(m.kind)||!integer(m.from)||m.from>=42||!Array.isArray(m.steps)||m.steps.length>400||!m.steps.every(step=>step&&integer(step.position)&&step.position<42&&['step','back','jail'].includes(step.kind))||(m.kind==='card'?m.dice!==null:!Array.isArray(m.dice)||m.dice.length!==2||!m.dice.every(n=>Number.isInteger(n)&&n>=1&&n<=6)))return false;}
    const pieces=s.players.map(p=>p.piece??p.id);if(pieces.some(id=>!integer(id)||id>5)||new Set(pieces).size!==pieces.length)return false;
    if(!s.properties||typeof s.properties!=='object'||Array.isArray(s.properties)||!Object.entries(s.properties).every(([id,p])=>spaces[id]?.price&&p&&alive(s,p.owner)&&integer(p.level)&&p.level<=(spaces[id].type==='land'?5:0)&&typeof p.mortgaged==='boolean'&&typeof p.interestDue==='boolean'&&(!p.mortgaged||p.level===0)&&(!p.interestDue||p.mortgaged)))return false;
    const stock=bankStock(s);if(stock.houses<0||stock.estates<0)return false;
    if(!Array.isArray(s.claims)||!integer(s.nextClaim)||s.nextClaim<1||!s.claims.every(c=>c&&integer(c.id)&&c.id<s.nextClaim&&alive(s,c.payee)&&(c.payer===null||alive(s,c.payer))&&integer(c.amount)&&c.amount>0&&typeof c.label==='string'&&(c.space===null||!!spaces[c.space]))||new Set(s.claims.map(c=>c.id)).size!==s.claims.length)return false;
    const resumes=['roll','buy','end','debt'];
    if(s.debt&&(!alive(s,s.debt.payer)||!integer(s.debt.amount)||s.debt.amount<1||(s.debt.creditor!==null&&!alive(s,s.debt.creditor))||s.debt.creditor===s.debt.payer||typeof s.debt.reason!=='string'||!['roll','buy','end'].includes(s.debt.resume)))return false;
    if(!Array.isArray(s.payments)||!s.payments.every(p=>p&&integer(p.payer)&&s.players[p.payer]&&integer(p.creditor)&&s.players[p.creditor]&&p.payer!==p.creditor&&integer(p.amount)&&p.amount>0&&typeof p.reason==='string'))return false;
    if((s.phase==='card-choice')!==!!s.cardChoice)return false;
    if(s.cardChoice&&(!alive(s,s.cardChoice.player)||cards[s.cardChoice.cardId]?.type!=='choice'||s.cardChoice.resume!=='end'))return false;
    if((s.phase==='debt')!==!!s.debt&&!['trade','auction'].includes(s.phase))return false;
    if(!Array.isArray(s.auctionQueue)||!s.auctionQueue.every(id=>spaces[id]?.price&&!s.properties[id])||new Set(s.auctionQueue).size!==s.auctionQueue.length)return false;
    if((s.phase==='auction')!==!!s.auction)return false;
    if(s.auction){const a=s.auction;if(!spaces[a.id]?.price||!alive(s,a.turn)||a.turn===a.seller||!resumes.includes(a.resume)||!Array.isArray(a.passed)||!a.passed.every(id=>alive(s,id)&&id!==a.seller)||new Set(a.passed).size!==a.passed.length||a.passed.includes(a.turn)||!integer(a.highBid)||typeof a.redeem!=='boolean')return false;
      if(a.seller===null?s.properties[a.id]:s.properties[a.id]?.owner!==a.seller)return false;
      if(a.highBidder===null?a.highBid!==0:!alive(s,a.highBidder)||a.highBidder===a.seller||a.highBid<1||a.highBidder===a.turn||a.passed.includes(a.highBidder))return false;
      if(a.highBidder!==null&&s.players[a.highBidder].cash<a.highBid+transferCost(spaces[a.id],s.properties[a.id]||{mortgaged:false},a.redeem))return false;
    }
    if((s.phase==='trade')!==!!s.trade)return false;
    if(s.trade){const t=s.trade;if(!alive(s,t.seller)||!alive(s,t.buyer)||t.seller===t.buyer||!integer(t.price)||t.price<1||!resumes.includes(t.resume))return false;
      if(t.kind==='card'){if(!s.players[t.seller].releaseCards.includes(t.id))return false;}
      else if(t.kind!=='property'||s.properties[t.id]?.owner!==t.seller||groupHasBuildings(s,spaces[t.id]))return false;
    }
    if((s.phase==='order')!==!!s.order)return false;
    if(s.order){const o=s.order;if(!Array.isArray(o.pending)||!o.pending.length||o.pending[0]!==s.turn||!o.pending.every(id=>alive(s,id))||new Set(o.pending).size!==o.pending.length||!o.rolls||!Object.entries(o.rolls).every(([id,n])=>alive(s,Number(id))&&Number.isInteger(n)&&n>=2&&n<=12&&!o.pending.includes(Number(id))))return false;}
    if(!s.decks||!Array.isArray(s.decks.luck)||!Array.isArray(s.decks.fate)||!['luck','fate'].every(deck=>s.decks[deck].every(id=>cards[id]?.deck===deck)))return false;
    const cardIds=[...s.decks.luck,...s.decks.fate,...s.players.flatMap(p=>p.releaseCards)];
    if(cardIds.length!==Object.keys(cards).length||new Set(cardIds).size!==cardIds.length)return false;
    if(s.lastCard&&(!cards[s.lastCard.id]||s.lastCard.deck!==cards[s.lastCard.id].deck||s.lastCard.text!==cards[s.lastCard.id].text||s.lastCard.demonstration!==false))return false;
    if(s.lastCard&&((s.lastCard.sequence!==undefined&&(!integer(s.lastCard.sequence)||s.lastCard.sequence<1))||(s.lastCard.playerId!==undefined&&(!integer(s.lastCard.playerId)||s.lastCard.playerId>=s.players.length))))return false;
    if(s.lastAuction){const a=s.lastAuction;if(!integer(a.sequence)||a.sequence<1||!integer(a.id)||!spaces[a.id]?.price||!integer(a.amount)||(a.winner===null?a.amount!==0:!integer(a.winner)||!s.players[a.winner]||a.amount<1))return false;}
    const remaining=s.players.filter(p=>!p.bankrupt);
    if(s.phase==='over')return alive(s,s.winner)&&!s.debt&&!s.auction&&!s.trade;
    return s.winner===null&&remaining.length>=2&&(!s.players[s.turn].bankrupt||['end','auction','debt','trade'].includes(s.phase));
  }catch{return false;}
}

export function upgradeSave(old) {
  if(validSave(old))return old;
  if(old?.version===2&&!old.ruleRevision&&Array.isArray(old.players)){
    const s=structuredClone(old);s.ruleRevision=3;s.payments=[];s.cardChoice=null;s.lastCard=null;s.decks=shuffledDecks();
    for(const p of s.players){p.piece=p.id;p.releaseCards=(p.releaseCards||[]).filter(id=>cards[id]?.type==='release');for(const id of p.releaseCards)s.decks[cards[id].deck]=s.decks[cards[id].deck].filter(c=>c!==id);}
    if(s.trade)s.trade.kind='property';
    return validSave(s)?s:null;
  }
  if(!old||old.version!==1||!Array.isArray(old.players)||old.players.length<2||old.players.length>4||!['roll','buy','end','over'].includes(old.phase)||old.players.some(p=>!p||typeof p.name!=='string'))return null;
  const s=createGame(old.players.map(p=>p.name));
  s.order=null;s.phase=old.phase;s.turn=old.turn;s.round=old.round;s.dice=old.dice;s.doubles=old.doubles;s.winner=old.winner;
  s.players=old.players.map(p=>({...p,restTurns:0,releaseCards:[]}));
  if(!old.properties||typeof old.properties!=='object')return null;
  s.properties=Object.fromEntries(Object.entries(old.properties).map(([id,p])=>[!old.boardRevision&&id==='40'?'41':id,{...p,mortgaged:false,interestDue:false}]));
  if(!old.boardRevision)for(const p of s.players)if(p.position===40)p.position=41;
  s.log=Array.isArray(old.log)?old.log.slice(0,79):[];note(s,'Partida migrada: se conserva el patrimonio y se aplica el reglamento de la edición 60 Aniversario.');
  return validSave(s)?s:null;
}
