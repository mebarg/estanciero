import { pieces } from './pieces.js';
export class Lounge {
 constructor({session,document:doc,onSelect=()=>{}}){
  this.session=session;this.doc=doc;this.onSelect=onSelect;this.loading=false;this.request=null;this.rooms=[];
  doc.getElementById('refresh-lounge').onclick=()=>this.refresh();
  doc.getElementById('cancel-admission').onclick=()=>session.cancelSeat().catch(error=>this.error(error));
  doc.getElementById('claim-seat').onclick=async()=>{const button=doc.getElementById('claim-seat');button.disabled=true;try{await session.claimSeat(this.request.id,Number(doc.getElementById('admission-piece').value));}catch(error){this.error(error);try{const room=await session.inspect(this.request.code);this.pieces(room.members);}catch{}}finally{button.disabled=false;}};
 }
 error(error){this.doc.getElementById('lounge-error').textContent=error.message;}
 async refresh(){if(this.loading)return;this.loading=true;this.doc.getElementById('refresh-lounge').disabled=true;
  try{this.rooms=await this.session.listLobby();this.render();this.doc.getElementById('lounge-error').textContent='';}catch(error){this.error(error);}finally{this.loading=false;this.doc.getElementById('refresh-lounge').disabled=false;}
 }
 element(tag,text,className){const el=this.doc.createElement(tag);if(text!==undefined)el.textContent=text;if(className)el.className=className;return el;}
 render(){
  const doc=this.doc;
  for(const [id,started] of [['waiting-rooms',false],['playing-rooms',true]]){
   const rooms=this.rooms.filter(room=>room.started===started);
   const children=rooms.map(room=>{
    const card=this.element('article',undefined,'lounge-room'),title=this.element('h4',room.title),status=this.element('span',room.status==='offline'?'Sin jugadores conectados':started?'En juego':'En espera','room-status');
    card.append(title,status,this.element('p',room.members.map(member=>member.name).join(' · ')),this.element('small',`${room.members.length}/6 jugadores · Anfitrión: ${room.host}`));
    const button=this.element('button',this.session.remembered(room.code)?'Retomar mi lugar':room.canRequest?'Solicitar unirme':started?'Partida en curso':room.members.length>=6?'Mesa completa':'Anfitrión sin conexión','outline');
    button.disabled=(!room.canRequest&&!this.session.remembered(room.code))||!!this.request&&['pending','approved'].includes(this.request.status);
    button.onclick=async()=>{button.disabled=true;try{const credential=this.session.remembered(room.code);if(credential){await this.session.resume(credential);return;}const name=doc.getElementById('lounge-name').value.trim();if(!name)throw new Error('Escribí tu nombre para solicitar un lugar.');await this.session.requestSeat(room.code,name);}catch(error){this.error(error);}finally{this.render();}};
    card.append(button);return card;
   });
   if(!children.length)children.push(this.element('p',started?'Todavía no hay partidas en juego.':'No hay mesas esperando. Podés crear la tuya.','lounge-empty'));
   doc.getElementById(id).replaceChildren(...children);
  }
 }
 pieces(members){const select=this.doc.getElementById('admission-piece'),previous=Number(select.value),free=pieces.map((piece,id)=>({piece,id})).filter(({id})=>!members.some(member=>member.piece===id));select.replaceChildren(...free.map(({piece,id})=>{const option=this.element('option',piece.name);option.value=String(id);return option;}));select.value=String(free.some(({id})=>id===previous)?previous:free[0]?.id??'');this.doc.getElementById('claim-seat').disabled=!free.length;}
 admission(request){this.request=request;const doc=this.doc;doc.getElementById('admission-panel').hidden=!request;if(!request){this.render();return;}
  const descriptions={pending:'Tu solicitud fue enviada. Esperá la respuesta de quien creó la mesa.',approved:'¡Te aceptaron! Elegí una pieza libre para entrar.',rejected:'No aceptaron tu solicitud. Podés buscar otra mesa.',expired:'La solicitud venció. Podés volver a pedir un lugar.',cancelled:'La solicitud se canceló. Podés volver a pedir un lugar.',started:'La mesa empezó o ya no admite jugadores.'};
  doc.getElementById('admission-status').textContent=descriptions[request.status]||'';doc.getElementById('admission-choice').hidden=request.status!=='approved';doc.getElementById('cancel-admission').hidden=!['pending','approved'].includes(request.status);
  if(request.status==='approved')this.pieces(request.members||[]);this.render();
 }
 hostRequests(requests){const panel=this.doc.getElementById('join-requests');panel.hidden=!requests.length;
  const rows=requests.map(request=>{const row=this.element('div',undefined,'join-request');row.append(this.element('strong',request.name));for(const [label,accept] of [['Aceptar',true],['Rechazar',false]]){const button=this.element('button',label,'outline');button.onclick=async()=>{button.disabled=true;try{await this.session.decideSeat(request.id,accept);}catch(error){this.doc.getElementById('requests-error').textContent=error.message;}finally{button.disabled=false;}};row.append(button);}return row;});this.doc.getElementById('requests-list').replaceChildren(...rows);
 }
}
