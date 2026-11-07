import { randomBytes, randomInt, createHash } from 'node:crypto';
import { mkdir, readFile, rename, writeFile } from 'node:fs/promises';
import path from 'node:path';
import { act, createGame, validSave, managerFor } from '../web/game.js';
import { cards } from '../web/cards.js';
import { roomSummary,expiredRoom } from './lobby.js';

const hash = token => createHash('sha256').update(token).digest('hex');
const fail = message => { throw new Error(message); };
const nameOf = value => typeof value==='string' && value.trim().length>0 && value.trim().length<=24 ? value.trim() : fail('Usá un nombre de 1 a 24 caracteres.');
const codeOf = value => typeof value==='string' && /^[A-Z2-9]{8}$/.test(value.toUpperCase()) ? value.toUpperCase() : fail('El código de sala no es válido.');
const pieceOf = value => Number.isInteger(value)&&value>=0&&value<6 ? value : fail('Elegí una pieza válida.');
const isAmount = value => Number.isSafeInteger(value)&&value>0;
const assetActions = new Set(['build','build-estates','sell-building','sell-buildings','mortgage','redeem','offer-trade','offer-card','auction']);
const turnPhases = {roll:['order','roll'],buy:['buy'],skip:['buy'],end:['end'],bail:['roll'],release:['roll'],'card-choice':['card-choice'],bankrupt:['debt'],bid:['auction'],pass:['auction'],'accept-trade':['trade'],'reject-trade':['trade']};

// Esta autorización se ejecuta antes del motor local: el cliente nunca elige a quién representa.
export function authorizedAction(game, playerId, input, {host=false,dice=()=>[randomInt(1,7),randomInt(1,7)]}={}) {
  if(!input||typeof input!=='object'||Array.isArray(input)||typeof input.type!=='string')fail('Jugada inválida.');
  const p=game.players[playerId];
  if(!p||p.bankrupt||game.phase==='over')fail('No podés jugar en este momento.');
  const type=input.type, action={type};
  if(type==='claim') {
    if(!['roll','buy','end'].includes(game.phase)||!game.claims.some(c=>c.id===input.id&&c.payee===playerId))fail('Sólo podés reclamar tus propios cobros pendientes.');
    action.id=input.id;
  } else if(type==='fine') {
    if(!host||!['roll','buy','end'].includes(game.phase)||!Number.isInteger(input.playerId)||!game.players[input.playerId]||game.players[input.playerId].bankrupt)fail('Sólo quien creó la sala puede aplicar la multa acordada por la mesa.');
    action.playerId=input.playerId;
  } else if(assetActions.has(type)) {
    if(!['roll','buy','end','debt'].includes(game.phase)||(game.debt&&game.debt.payer!==playerId))fail('Ahora no podés gestionar ese patrimonio.');
    if(type==='offer-card') {
      if(!p.releaseCards.includes(input.id))fail('La tarjeta no te pertenece.');
    } else if(!Number.isInteger(input.id)||game.properties[input.id]?.owner!==playerId)fail('La propiedad no te pertenece.');
    if(['build','build-estates'].includes(type)&&playerId!==game.turn)fail('Sólo podés construir durante tu turno.');
    action.id=input.id;action.playerId=playerId;
    if(['offer-trade','offer-card'].includes(type)) {
      if(!Number.isInteger(input.buyer)||!game.players[input.buyer]||game.players[input.buyer].bankrupt||input.buyer===playerId||!isAmount(input.price))fail('Comprador o precio inválido.');
      action.buyer=input.buyer;action.price=input.price;
    }
  } else if(turnPhases[type]) {
    if(!turnPhases[type].includes(game.phase))fail('Esta acción no corresponde al momento de la partida.');
    const actor=game.auction?.turn??game.trade?.buyer??managerFor(game);
    if(actor!==playerId)fail('Esperá tu turno.');
    if(type==='roll'){action.dice=dice();action.stay=input.stay===true;}
    if(type==='card-choice'){if(!['pay','draw'].includes(input.choice))fail('Elegí pagar o levantar Suerte.');action.choice=input.choice;}
    if(type==='bid'){if(!isAmount(input.amount))fail('La oferta no es válida.');action.amount=input.amount;action.playerId=playerId;}
    if(type==='pass')action.playerId=playerId;
    if(['accept-trade','bid'].includes(type))action.redeem=input.redeem===true;
  } else fail('Acción desconocida.');
  return action;
}

// Validación compartida por el archivo JSON y PostgreSQL.
export function validateRoom(room){
  if(!room||!Number.isSafeInteger(room.revision)||room.revision<1||!Array.isArray(room.members)||room.members.length<1||room.members.length>6||room.members.some((m,i)=>!m||m.id!==i||!/^([a-f0-9]{64})$/.test(m.tokenHash)||!Array.isArray(m.receipts))||new Set(room.members.map(m=>m.piece)).size!==room.members.length||(room.game&&!validSave(room.game)))fail('Una partida guardada no es válida; se conserva para revisarla.');
  codeOf(room.code);for(const m of room.members){nameOf(m.name);pieceOf(m.piece);}
  return room;
}
export const normalizeRoomCode=codeOf;

export class RoomStore {
  constructor({directory,dice,maxRooms=200,now=()=>Date.now()}={}) {this.now=now;this.directory=directory;this.dice=dice;this.maxRooms=maxRooms;this.rooms=new Map();this.tail=Promise.resolve();}
  async load() {
    if(!this.directory)return;
    await mkdir(this.directory,{recursive:true,mode:0o700});
    let records;
    try {records=JSON.parse(await readFile(path.join(this.directory,'rooms.json'),'utf8'));}
    catch(error){if(error.code==='ENOENT')return;throw new Error('No se pudo leer el archivo de partidas online.',{cause:error});}
    if(!Array.isArray(records))fail('El archivo de partidas online no es válido.');
    for(const room of records) {validateRoom(room);this.rooms.set(room.code,room);}
  }
  async close(){await this.tail;}

  transaction(operation) {
    const result=this.tail.then(async()=>{
      const backup=structuredClone(this.rooms);
      try {const answer=operation();if(this.directory){const target=path.join(this.directory,'rooms.json');await writeFile(target+'.tmp',JSON.stringify([...this.rooms.values()]),{mode:0o600});await rename(target+'.tmp',target);}return answer;}
      catch(error){this.rooms=backup;throw error;}
    });
    this.tail=result.catch(()=>{});return result;
  }
  activity(room){room.lastActivityAt=new Date(this.now()).toISOString();}
  async listRooms(){await this.tail;return [...this.rooms.values()].map(roomSummary);}
  prepareOffline(now){return this.transaction(()=>{for(const room of this.rooms.values()){room.lastActivityAt=room.disconnectedAt===null?new Date(now).toISOString():room.lastActivityAt||room.createdAt;room.disconnectedAt??=new Date(now).toISOString();}});}
  touch(code){return this.transaction(()=>{const room=this.lookup(code);this.activity(room);return {room};});}
  markPresence(code,connected,now){return this.transaction(()=>{const room=this.lookup(code);room.lastActivityAt=new Date(now).toISOString();room.disconnectedAt=connected?null:new Date(now).toISOString();return {room};});}
  purgeExpired(now,policy,active=[]){return this.transaction(()=>{const removed=[];for(const [code,room] of this.rooms)if(!active.includes(code)&&expiredRoom(roomSummary(room),now,policy)){this.rooms.delete(code);removed.push(code);}return removed;});}
  lookup(code){const room=this.rooms.get(codeOf(code));if(!room)fail('No encontramos esa sala. Revisá el código.');return room;}
  authenticate(code,token){const room=this.lookup(code);if(typeof token!=='string'||!/^[a-f0-9]{64}$/.test(token))fail('No se pudo recuperar tu lugar en esta sala.');const member=room.members.find(m=>m.tokenHash===hash(token));if(!member)fail('No se pudo recuperar tu lugar en esta sala.');return {room,member};}
  publicRoom(room,online=[]) {
    const game=room.game?structuredClone(room.game):null;
    if(game)delete game.decks; // Nadie recibe el orden futuro de Suerte y Destino.
    return {code:room.code,revision:room.revision,hostId:0,title:room.title||'Mesa de '+room.members[0].name,visibility:room.visibility||'private',createdAt:room.createdAt,members:room.members.map(({id,name,piece})=>({id,name,piece,connected:online.includes(id)})),game};
  }
  create({name,piece,title='',visibility='private'}) {
    return this.transaction(()=>{
      if(this.rooms.size>=this.maxRooms)fail('El servidor alcanzó el límite de salas.');
      let code;do{code=Array.from({length:8},()=> 'ABCDEFGHJKLMNPQRSTUVWXYZ23456789'[randomInt(32)]).join('');}while(this.rooms.has(code));
      if(typeof title!=='string'||title.trim().length>48)fail('El nombre de la mesa admite hasta 48 caracteres.');
      if(!['private','public'].includes(visibility))fail('Elegí una sala pública o privada.');
      const token=randomBytes(32).toString('hex'),member={id:0,name:nameOf(name),piece:pieceOf(piece),tokenHash:hash(token),receipts:[]};
      const stamp=new Date(this.now()).toISOString();
      const room={code,revision:1,title:title.trim()||'Mesa de '+member.name,visibility,createdAt:stamp,lastActivityAt:stamp,disconnectedAt:stamp,members:[member],game:null};this.rooms.set(code,room);
      return {room,playerId:0,token};
    });
  }
  join(code,{name,piece},{approved=false}={}) {
    return this.transaction(()=>{
      const room=this.lookup(code);if(room.visibility==='public'&&!approved)fail('Esta sala requiere la aprobación de quien la creó. Solicitá unirte desde el lobby.');if(room.game)fail('Esta partida ya empezó. Sólo pueden volver sus participantes.');
      if(room.members.length>=6)fail('La sala ya tiene seis jugadores.');
      pieceOf(piece);if(room.members.some(m=>m.piece===piece))fail('Esa pieza ya fue elegida. Elegí otra.');
      const token=randomBytes(32).toString('hex'),id=room.members.length;
      room.members.push({id,name:nameOf(name),piece,tokenHash:hash(token),receipts:[]});room.revision++;this.activity(room);
      return {room,playerId:id,token};
    });
  }
  start(code,token) {
    return this.transaction(()=>{
      const {room,member}=this.authenticate(code,token);if(member.id!==0)fail('Sólo quien creó la sala puede empezar.');
      if(room.game)return {room};
      if(room.members.length<2)fail('Esperá al menos a otro jugador.');
      room.game=createGame(room.members.map(m=>m.name),{pieces:room.members.map(m=>m.piece)});
      // Barajado del servidor con aleatoriedad independiente de los clientes.
      for(const deck of ['luck','fate']){const ids=Object.keys(cards).filter(id=>cards[id].deck===deck);for(let i=ids.length-1;i>0;i--){const j=randomInt(i+1);[ids[i],ids[j]]=[ids[j],ids[i]];}room.game.decks[deck]=ids;}
      room.revision++;this.activity(room);return {room};
    });
  }
  command(code,token,{id,revision,action}={}) {
    return this.transaction(()=>{
      const {room,member}=this.authenticate(code,token);
      if(typeof id!=='string'||!/^[a-zA-Z0-9_-]{8,80}$/.test(id))fail('La jugada no tiene un identificador válido.');
      if(member.receipts.includes(id))return {room,duplicate:true};
      if(revision!==room.revision)fail('La mesa cambió. Actualizamos la partida; revisá y repetí tu decisión.');
      if(!room.game)fail('La partida todavía no empezó.');
      const actionSafe=authorizedAction(room.game,member.id,action,{host:member.id===0,dice:this.dice});
      let next=act(room.game,actionSafe);
      // El jugador eliminado no necesita seguir conectado para ceder su antiguo turno.
      if(next.phase==='end'&&next.players[next.turn].bankrupt)next=act(next,{type:'end'});
      if(!validSave(next))fail('No se pudo aplicar la jugada.');
      if(JSON.stringify(next)===JSON.stringify(room.game))fail('No se pudo realizar esa acción en el estado actual.');
      room.game=next;room.revision++;this.activity(room);member.receipts.push(id);member.receipts=member.receipts.slice(-256);
      return {room};
    });
  }
}
