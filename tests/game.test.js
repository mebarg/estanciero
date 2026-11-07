import test from 'node:test';
import assert from 'node:assert/strict';
import { readFileSync } from 'node:fs';
import { act,createGame,ownsGroup,rentFor,spaces,validSave,upgradeSave,bankStock,buildProblem } from '../web/game.js';
import { cards } from '../web/cards.js';
const fresh=(n=2)=>{const s=createGame(['Ana','Luis','Sol','Eva','Luz','Leo'].slice(0,n));s.phase='roll';s.order=null;return s;};
const own=(s,id,owner=0,level=0,mortgaged=false)=>{s.properties[id]={owner,level,mortgaged,interestDue:false};return s;};
const roll=(s,a,b,extra={})=>act(s,{type:'roll',dice:[a,b],...extra});
const collect=s=>{for(const c of [...s.claims]){if(!['roll','buy','end'].includes(s.phase))break;s=act(s,{type:'claim',id:c.id});}return s;};
const firstCard=(s,deck,id)=>{s.decks[deck]=[id,...s.decks[deck].filter(c=>c!==id)];return s;};
test('capital inicial, seis jugadores y sorteo de salida con desempate',()=>{
  let s=createGame(['Ana','Luis','Sol']);assert.equal(s.players[0].cash,35000);
  s=roll(s,3,4);s=roll(s,4,3);s=roll(s,1,2);assert.deepEqual(s.order.pending,[0,1]);
  s=roll(s,2,2);s=roll(s,5,4);assert.equal(s.turn,1);assert.equal(s.phase,'roll');assert.equal(validSave(s),true);
  assert.equal(createGame(['1','2','3','4','5','6']).players.length,6);
});
test('compra al precio del tablero sin mutar el estado anterior',()=>{
  const s=fresh(),next=act(roll(s,1,2),{type:'buy'});assert.equal(s.players[0].position,0);assert.equal(next.players[0].cash,33800);assert.equal(next.properties[3].owner,0);assert.equal(spaces[41].price,9000);assert.equal(spaces[40].type,'tax');
});
test('el alquiler requiere reclamar; no se cobra automáticamente',()=>{
  const landed=roll(own(fresh(),3,1),1,2);assert.equal(landed.players[0].cash,35000);assert.equal(landed.claims[0].amount,80);
  const paid=collect(landed);assert.equal(paid.players[0].cash,34920);assert.equal(paid.players[1].cash,35080);
});
test('un alquiler no reclamado vence al tirar después de pasar turno',()=>{
  let s=act(roll(own(fresh(),3,1),1,2),{type:'end'});assert.equal(s.claims.length,1);s=roll(s,1,3);assert.equal(s.claims.length,0);assert.equal(s.players[0].cash,35000);
});
test('salida y premio ganadero se reclaman; impuestos son obligatorios',()=>{
  let s=fresh();s.players[0].position=40;s=roll(s,1,2);assert.equal(s.players[0].cash,35000);s=collect(s);assert.equal(s.players[0].cash,40000);
  s=fresh();s.players[0].position=4;s=collect(roll(s,1,2));assert.equal(s.players[0].cash,37500);
  assert.equal(roll(fresh(),1,3).players[0].cash,30000);
  s=fresh();s.players[0].position=37;assert.equal(roll(s,1,2).players[0].cash,33000);
});
test('provincia completa duplica sólo el campo sin construir',()=>{
  const s=fresh();for(const id of [1,2,3])own(s,id);assert.equal(ownsGroup(s,0,spaces[1]),true);assert.equal(rentFor(s,spaces[1],7),80);s.properties[1].level=1;assert.equal(rentFor(s,spaces[1],7),200);
});
test('escalas de ferrocarriles, compañías y suspensión de alquiler al hipotecar',()=>{
  const s=own(own(fresh(),12,1),18,1);assert.equal(rentFor(s,spaces[12],7),1000);own(s,8,1);own(s,16,1);assert.equal(rentFor(s,spaces[8],7),1400);s.properties[12].mortgaged=true;assert.equal(rentFor(s,spaces[12],7),0);
});
test('rechazar una compra no obliga a rematar',()=>{
  let s=act(roll(fresh(),1,2),{type:'skip'});assert.equal(s.phase,'end');assert.equal(s.auction,null);s=act(s,{type:'end'});assert.equal(s.turn,1);
});
test('dobles repiten turno y el tercero envía a comisaría sin avanzar',()=>{
  let s=fresh();for(let i=0;i<3;i++){s=roll(s,1,1);if(s.phase==='buy')s=act(s,{type:'skip'});if(i<2)s=act(s,{type:'end'});}
  assert.equal(s.players[0].position,14);assert.equal(s.players[0].jail,1);assert.equal(s.doubles,0);assert.equal(act(s,{type:'end'}).turn,1);
});
test('en esta edición caer directamente en Comisaría también encarcela',()=>{
  const s=fresh();s.players[0].position=11;assert.equal(roll(s,1,2).players[0].jail,1);
});
test('no sacar dobles mantiene preso y pagar multa habilita la salida',()=>{
  let s=fresh();s.players[0].position=14;s.players[0].jail=1;s=roll(s,1,2);assert.equal(s.players[0].jail,1);assert.equal(s.players[0].position,14);
  s.phase='roll';s=act(s,{type:'bail'});assert.equal(s.players[0].jail,0);assert.equal(s.players[0].cash,34000);assert.equal(roll(s,1,2).players[0].position,17);
});
test('dobles para salir de comisaría no dan otra tirada adicional',()=>{
  let s=fresh();s.players[0].position=14;s.players[0].jail=1;s=roll(s,2,2);assert.equal(s.players[0].position,18);s=act(s,{type:'skip'});assert.equal(act(s,{type:'end'}).turn,1);
});
test('Descanso se anuncia, dura hasta dos turnos y los dobles obligan a avanzar',()=>{
  let s=fresh();s.players[0].position=18;s=roll(s,1,2);assert.equal(s.players[0].restTurns,2);
  s.phase='roll';s=roll(s,1,2,{stay:true});assert.equal(s.players[0].position,21);assert.equal(s.players[0].restTurns,1);
  s.phase='roll';s=roll(s,2,3,{stay:true});assert.equal(s.players[0].restTurns,0);
  s.phase='roll';assert.equal(roll(s,1,2,{stay:true}).players[0].position,24);
  s=fresh();s.players[0].position=21;s.players[0].restTurns=2;assert.equal(roll(s,2,2,{stay:true}).players[0].position,25);
});
test('construcción exige provincia completa, pareja y sin hipotecas',()=>{
  let s=own(fresh(),1);assert.match(buildProblem(s,1),/provincia/);own(s,2);own(s,3);s.properties[2].mortgaged=true;assert.match(buildProblem(s,1),/hipoteca/);s.properties[2].mortgaged=false;
  s=act(s,{type:'build',id:1});assert.equal(s.players[0].cash,31000);assert.equal(act(s,{type:'build',id:1}).properties[1].level,1);s=act(s,{type:'sell-building',id:1});assert.equal(s.players[0].cash,33000);
});
test('estancia devuelve cuatro chacras al banco; stock limitado',()=>{
  let s=fresh();for(const id of [1,2,3])own(s,id,0,4);assert.deepEqual(bankStock(s),{houses:20,estates:12});s=act(s,{type:'build',id:1});assert.deepEqual(bankStock(s),{houses:24,estates:11});
  s=fresh();for(const id of [1,2,3])own(s,id);for(const id of [5,6,9,11,13,17,19,20])own(s,id,1,4);assert.match(buildProblem(s,1),/no tiene chacras/);assert.equal(act(s,{type:'build',id:1}).properties[1].level,0);
});
test('compra directa de estancias paga el equivalente completo y liquida a mitad',()=>{
  let s=fresh();s.players[0].cash=100000;for(const id of [1,2,3])own(s,id);s=act(s,{type:'build-estates',id:1});assert.equal(s.players[0].cash,40000);assert.equal(s.properties[1].level,5);assert.equal(bankStock(s).estates,9);
  s=act(s,{type:'sell-building',id:1});assert.equal(s.properties[1].level,4);assert.equal(s.players[0].cash,42000);s=act(s,{type:'sell-buildings',id:1});assert.equal(s.players[0].cash,70000);
});
test('hipoteca con 10% adelantado y rescate sin interés duplicado',()=>{
  let s=act(own(fresh(),1),{type:'mortgage',id:1});assert.equal(s.players[0].cash,35450);assert.equal(s.properties[1].mortgaged,true);assert.equal(rentFor(s,spaces[1],7),0);
  s=act(s,{type:'redeem',id:1});assert.equal(s.players[0].cash,34950);assert.equal(s.properties[1].mortgaged,false);
  assert.equal(spaces[12].mortgage,1900);assert.equal(spaces[27].mortgage,1700);assert.equal(spaces[41].mortgage,3700);
});
test('no se hipotecan ni transfieren campos con mejoras en la provincia',()=>{
  const s=own(own(fresh(),1,0,1),2);assert.equal(act(s,{type:'mortgage',id:2}).properties[2].mortgaged,false);assert.equal(act(s,{type:'offer-trade',id:2,buyer:1,price:1000}).trade,null);
});
test('un jugador preso puede gestionar títulos y reclamar alquiler',()=>{
  let s=own(fresh(),1);s.players[0].jail=1;s.players[0].position=14;assert.equal(act(s,{type:'mortgage',id:1}).players[0].cash,35450);
  s=own(fresh(),3,1);s.players[1].jail=1;s.players[1].position=14;assert.equal(collect(roll(s,1,2)).players[1].cash,35080);
});
test('la compraventa requiere aceptar o se rechaza sin transferir valores',()=>{
  let s=act(own(fresh(),1),{type:'offer-trade',id:1,buyer:1,price:2000});assert.equal(s.properties[1].owner,0);assert.equal(act(s,{type:'reject-trade'}).properties[1].owner,0);
  s=act(s,{type:'accept-trade'});assert.equal(s.properties[1].owner,1);assert.equal(s.players[0].cash,37000);assert.equal(s.players[1].cash,33000);assert.equal(s.phase,'roll');
});
test('transferir hipoteca cobra 10% ahora y otra vez al levantarla después',()=>{
  let s=act(own(fresh(),1),{type:'mortgage',id:1});s=act(s,{type:'offer-trade',id:1,buyer:1,price:1000});s=act(s,{type:'accept-trade'});assert.equal(s.players[1].cash,33950);assert.equal(s.properties[1].interestDue,true);
  s=act(s,{type:'redeem',id:1,playerId:1});assert.equal(s.players[1].cash,33400);
});
test('levantar la hipoteca al comprarla cobra una sola vez el 10%',()=>{
  let s=act(own(fresh(),1),{type:'mortgage',id:1});s=act(s,{type:'offer-trade',id:1,buyer:1,price:1000});s=act(s,{type:'accept-trade',redeem:true});assert.equal(s.players[1].cash,33450);assert.equal(s.properties[1].mortgaged,false);
});
test('falta de efectivo crea deuda; hipotecar permite pagar sin quebrar',()=>{
  let s=own(own(fresh(),1),3,1);s.players[0].cash=10;s=collect(roll(s,1,2));assert.equal(s.phase,'debt');assert.equal(s.players[0].bankrupt,false);
  s=act(s,{type:'mortgage',id:1});assert.equal(s.phase,'end');assert.equal(s.players[0].cash,380);assert.equal(s.players[1].cash,35080);
});
test('vender mejoras también permite cubrir una deuda',()=>{
  let s=own(own(fresh(),1,0,1),3,1);s.players[0].cash=10;s=collect(roll(s,1,2));s=act(s,{type:'sell-building',id:1});assert.equal(s.debt,null);assert.equal(s.players[0].cash,1930);
});
test('remate voluntario adjudica la mejor oferta y excluye al vendedor',()=>{
  let s=act(own(fresh(3),1),{type:'auction',id:1});assert.equal(s.auction.turn,1);assert.equal(validSave(s),true);
  s=act(s,{type:'bid',playerId:1,amount:300});assert.equal(s.auction.turn,2);assert.equal(validSave(s),true);s=act(s,{type:'bid',playerId:2,amount:400});s=act(s,{type:'pass',playerId:1});assert.equal(s.properties[1].owner,2);assert.equal(s.players[0].cash,35400);assert.equal(s.players[2].cash,34600);
});
test('remate sin ofertas conserva el título y una oferta sin efectivo no vale',()=>{
  let s=act(own(fresh(3),1),{type:'auction',id:1});s=act(s,{type:'bid',playerId:1,amount:999999});assert.equal(s.auction.highBid,0);s=act(s,{type:'pass',playerId:1});s=act(s,{type:'pass',playerId:2});assert.equal(s.properties[1].owner,0);assert.equal(s.phase,'roll');
});
test('rematar durante una deuda paga al cerrar la subasta',()=>{
  let s=own(own(fresh(3),1),3,1);s.players[0].cash=10;s=collect(roll(s,1,2));s=act(s,{type:'auction',id:1});s=act(s,{type:'bid',playerId:1,amount:500});s=act(s,{type:'pass',playerId:2});assert.equal(s.debt,null);assert.equal(s.players[0].cash,430);assert.equal(s.phase,'end');
});
test('quiebra contra banco remata bienes y permite pasar al siguiente jugador',()=>{
  let s=own(fresh(3),1);s.players[0].cash=1;s=act(roll(s,1,3),{type:'bankrupt'});assert.equal(s.phase,'auction');assert.equal(s.auction.seller,null);assert.equal(validSave(s),true);
  s=act(s,{type:'bid',playerId:1,amount:100});s=act(s,{type:'pass',playerId:2});assert.equal(s.properties[1].owner,1);assert.equal(s.phase,'end');assert.equal(act(s,{type:'end'}).turn,1);
});
test('quiebra con acreedor transfiere títulos y declara ganador',()=>{
  let s=own(own(fresh(),1),3,1,5);s.players[0].cash=10;s=collect(roll(s,1,2));s=act(s,{type:'bankrupt'});assert.equal(s.properties[1].owner,1);assert.equal(s.winner,1);assert.equal(s.phase,'over');assert.equal(validSave(s),true);
});
test('mazo vuelve al fondo y retroceder resuelve el casillero de llegada',()=>{
  let s=firstCard(fresh(),'luck','s-retroceso');s.players[0].position=12;s=roll(s,1,2);assert.equal(s.players[0].position,12);assert.equal(s.phase,'buy');assert.equal(s.decks.luck.at(-1),'s-retroceso');assert.equal(validSave(s),true);
});
test('tarjeta de libertad se conserva fuera del mazo y vuelve al utilizarla',()=>{
  let s=firstCard(fresh(),'fate','d-libertad');s.players[0].position=7;s=roll(s,1,2);assert.deepEqual(s.players[0].releaseCards,['d-libertad']);assert.equal(s.decks.fate.includes('d-libertad'),false);
  s.phase='roll';s.players[0].position=14;s.players[0].jail=1;s=act(s,{type:'release'});assert.equal(s.players[0].jail,0);assert.equal(s.decks.fate.at(-1),'d-libertad');assert.equal(validSave(s),true);
});
test('una tarjeta negativa crea deuda, no saldo negativo',()=>{
  let s=firstCard(fresh(),'fate','d-farmacia');s.players[0].position=7;s.players[0].cash=1;s=roll(s,1,2);assert.equal(s.phase,'debt');assert.equal(s.players[0].cash,1);assert.equal(s.debt.amount,1000);
});
test('se rechazan dados y guardados malformados',()=>{
  assert.equal(validSave(createGame(['Ana','Luis'])),true);assert.equal(validSave(null),false);
  for(const mutate of [s=>s.players[0].cash=-1,s=>s.decks.luck.pop(),s=>s.properties[99]={owner:0},s=>s.phase='debt',s=>s.properties[1]=null,s=>s.claims.push({})]){const s=fresh();mutate(s);assert.equal(validSave(s),false);}
  assert.throws(()=>roll(fresh(),0,7));
});
test('migración conserva saldos y títulos de partidas previas',()=>{
  const old={version:1,boardRevision:2,players:[{id:0,name:'Ana',cash:12345,position:3,jail:0,bankrupt:false},{id:1,name:'Luis',cash:14000,position:0,jail:0,bankrupt:false}],turn:0,round:3,phase:'end',dice:[1,2],doubles:0,properties:{3:{owner:0,level:0}},winner:null,log:['Partida previa.']};
  const s=upgradeSave(old);assert.equal(s.players[0].cash,12345);assert.equal(s.properties[3].owner,0);assert.equal(validSave(s),true);assert.equal(upgradeSave({version:1,players:[null,null]}),null);
});
test('32 tarjetas originales y duplicados recuperados se conservan',()=>{
  assert.equal(Object.keys(cards).length,32);assert.equal(Object.values(cards).filter(c=>c.deck==='luck').length,16);assert.equal(Object.values(cards).filter(c=>c.deck==='fate').length,16);
  assert.equal(cards['d-concurso1'].text,cards['d-concurso2'].text);assert.equal(new Set(Object.values(cards).map(c=>c.sourceIndex)).size,32);
});
test('las tres compañías cuestan $3.800 según la tabla y función de compra del EXE',()=>{
  for(const id of [8,16,31]){
    assert.equal(spaces[id].price,3800);
    const s=fresh();s.players[0].position=id-3;
    const bought=act(roll(s,1,2),{type:'buy'});
    assert.equal(bought.players[0].cash,31200);assert.equal(bought.properties[id].owner,0);
  }
});
test('los alquileres se contrastan contra la tabla extraída y las tarjetas conservadas',()=>{
  const native=JSON.parse(readFileSync(new URL('../recovered/0.45/audit/board-data.json',import.meta.url),'utf8'));
  for(const record of native.records.filter(r=>r.typeText==='p')){
    const id=record.index===40?41:record.index,expected=[...record.rents];
    // Diferencia real: EXE dice 2.500; p17.jpg imprime 10.500.
    if(record.index===17)expected[3]=10500;
    assert.deepEqual(spaces[id].rents,expected,`Alquiler incorrecto en ${id}`);
  }
});
test('reparaciones y semillas calculan chacras y estancias por separado',()=>{
  let s=own(own(firstCard(fresh(),'luck','s-reparacion'),1,0,2),2,0,5);s.players[0].position=12;s=roll(s,1,2);assert.equal(s.players[0].cash,31500);
  s=own(own(firstCard(fresh(),'luck','s-semillas'),1,0,2),2,0,5);s.players[0].position=12;s=roll(s,1,2);assert.equal(s.players[0].cash,29400);
});
test('cumpleaños cobra a los demás y una deuda no bloquea los pagos siguientes',()=>{
  let s=firstCard(fresh(3),'fate','d-cumple');s.players[0].position=7;s.players[1].cash=10;s=roll(s,1,2);assert.equal(s.debt.payer,1);assert.equal(s.payments.length,1);assert.equal(s.players[2].cash,35000);assert.equal(validSave(s),true);
  s=act(s,{type:'bankrupt'});assert.equal(s.players[1].bankrupt,true);assert.equal(s.players[0].cash,35210);assert.equal(s.players[2].cash,34800);assert.equal(s.payments.length,0);assert.equal(validSave(s),true);
});
test('tarjeta de multa permite pagar o levantar Suerte sin duplicar efectos',()=>{
  let s=firstCard(fresh(),'fate','d-multa-suerte');s.players[0].position=7;s=roll(s,1,2);assert.equal(s.phase,'card-choice');assert.equal(validSave(s),true);
  const paid=act(s,{type:'card-choice',choice:'pay'});assert.equal(paid.players[0].cash,34800);assert.equal(paid.phase,'end');
  s=firstCard(s,'luck','s-loteria');s=act(s,{type:'card-choice',choice:'draw'});assert.equal(s.players[0].cash,45000);assert.equal(s.lastCard.id,'s-loteria');assert.equal(validSave(s),true);
});
test('volver a Formosa no cobra salida; avanzar hasta Salta sí la cruza',()=>{
  let s=firstCard(fresh(),'fate','d-formosa');s.players[0].position=22;s=roll(s,1,2);assert.equal(s.players[0].position,1);assert.equal(s.claims.length,0);
  s=firstCard(fresh(),'luck','s-salta');s.players[0].position=33;s=roll(s,1,2);assert.equal(s.players[0].position,13);assert.equal(s.claims[0].amount,5000);
});
test('vender una tarjeta de libertad necesita aceptación y conserva el mazo',()=>{
  let s=firstCard(fresh(),'fate','d-libertad');s.players[0].position=7;s=roll(s,1,2);s=act(s,{type:'offer-card',id:'d-libertad',buyer:1,price:700});assert.equal(validSave(s),true);
  s=act(s,{type:'accept-trade'});assert.deepEqual(s.players[0].releaseCards,[]);assert.deepEqual(s.players[1].releaseCards,['d-libertad']);assert.equal(s.players[1].cash,34300);assert.equal(validSave(s),true);
});
test('cada jugador tiene una pieza distinta y la elección se guarda',()=>{
  const s=createGame(['Ana','Luis','Sol'],{pieces:[5,0,4]});assert.deepEqual(s.players.map(p=>p.piece),[5,0,4]);assert.equal(validSave(s),true);assert.throws(()=>createGame(['Ana','Luis'],{pieces:[0,0]}));
});
test('no se permite quebrar mientras los valores del banco cubran la deuda',()=>{
  let s=own(own(fresh(),1),3,1);s.players[0].cash=10;s=collect(roll(s,1,2));s=act(s,{type:'bankrupt'});assert.equal(s.phase,'debt');assert.equal(s.players[0].bankrupt,false);assert.match(s.message,/Todavía/);
});
test('la multa por avisar premios se aplica manualmente y puede crear deuda',()=>{
  let s=act(fresh(),{type:'fine',playerId:1});assert.equal(s.players[1].cash,34500);s.players[1].cash=10;s=act(s,{type:'fine',playerId:1});assert.equal(s.debt.payer,1);assert.equal(s.debt.amount,500);
});
test('20 simulaciones conservan caja, títulos, cartas, stock y estados válidos',()=>{
  let seed=47;const next=()=>{seed=(Math.imul(seed,1664525)+1013904223)>>>0;return seed;};
  for(let game=0;game<20;game++){
    let s=createGame(['Ana','Luis','Sol'],{seed:next()});
    for(let step=0;step<1000&&s.phase!=='over';step++){
      if(s.claims.length&&['roll','buy','end'].includes(s.phase)&&next()%4)s=act(s,{type:'claim',id:s.claims[0].id});
      else if(['order','roll'].includes(s.phase)){if(s.phase==='roll'&&s.players[s.turn].jail&&s.players[s.turn].cash>=1000&&next()%2)s=act(s,{type:'bail'});else s=roll(s,next()%6+1,next()%6+1,{stay:!!(next()%2)});}
      else if(s.phase==='buy')s=act(s,{type:s.players[s.turn].cash>=spaces[s.players[s.turn].position].price?'buy':'skip'});
      else if(s.phase==='end')s=act(s,{type:'end'});
      else if(s.phase==='debt'){const id=Object.keys(s.properties).find(id=>s.properties[id].owner===s.debt.payer&&!s.properties[id].mortgaged&&!s.properties[id].level);s=act(s,id?{type:'mortgage',id:Number(id)}:{type:'bankrupt'});}
      else if(s.phase==='card-choice')s=act(s,{type:'card-choice',choice:'pay'});
      else if(s.phase==='auction')s=act(s,{type:'pass',playerId:s.auction.turn});else assert.fail(s.phase);
      assert.equal(validSave(s),true,`Partida ${game}, paso ${step}, fase ${s.phase}: ${s.message}`);
    }
  }
});

test('cada recepción de carta se identifica sin repetirse al gestionar el turno',()=>{
  let s=firstCard(fresh(),'luck','s-loteria');s.players[0].position=12;s=roll(s,1,2);
  assert.equal(s.lastCard.sequence,1);assert.equal(s.lastCard.playerId,0);assert.equal(s.players[0].cash,45000);
  s=act(s,{type:'end'});assert.equal(s.lastCard.sequence,1);
  s.phase='roll';s.turn=0;s.players[0].position=12;s=firstCard(s,'luck','s-loteria');s=roll(s,1,2);
  assert.equal(s.lastCard.id,'s-loteria');assert.equal(s.lastCard.sequence,2);assert.equal(s.players[0].cash,55000);assert.equal(validSave(s),true);
  const bad=structuredClone(s);bad.lastCard.sequence=-1;assert.equal(validSave(bad),false);
});
