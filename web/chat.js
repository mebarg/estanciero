import { pieces } from './pieces.js';

export class ChatPanel {
 constructor({session,document:doc=globalThis.document}){
  this.session=session;this.doc=doc;this.code=null;this.unread=0;this.sending=false;
  this.button=doc.getElementById('chat-button');this.panel=doc.getElementById('chat-panel');this.list=doc.getElementById('chat-messages');this.input=doc.getElementById('chat-input');this.send=doc.getElementById('chat-send');this.error=doc.getElementById('chat-error');
  this.button.onclick=()=>this.toggle();doc.getElementById('chat-close').onclick=()=>this.toggle(false);
  this.panel.addEventListener('keydown',event=>{if(event.key==='Escape'){event.preventDefault();this.toggle(false);}});
  doc.getElementById('chat-form').addEventListener('submit',async event=>{
   event.preventDefault();if(this.sending)return;const text=this.input.value;if(!text.trim())return;
   this.sending=true;this.send.disabled=true;this.status('');
   try{await session.sendChat(text);if(this.input.value===text)this.input.value='';}
   catch(error){this.status(error.message);}
   finally{this.sending=false;this.send.disabled=false;if(!this.panel.hidden)this.input.focus();}
  });
 }
 status(text){this.error.textContent=text;}
 toggle(open=this.panel.hidden){this.panel.hidden=!open;this.button.setAttribute('aria-expanded',String(open));if(open){this.unread=0;this.badge();this.input.focus();this.list.scrollTop=this.list.scrollHeight;void this.session.refreshChat();}else this.button.focus();}
 badge(){const badge=this.doc.getElementById('chat-unread');badge.hidden=!this.unread;badge.textContent=String(this.unread);this.button.setAttribute('aria-label',this.unread?`Chat: ${this.unread} mensajes sin leer`:'Chat de la sala');}
 update(messages,{code,history,added=[]}){
  if(this.code!==code){this.code=code;this.unread=0;this.panel.hidden=true;this.button.setAttribute('aria-expanded','false');this.input.value='';this.status('');}
  this.button.hidden=!code;if(!code){this.list.replaceChildren();this.badge();return;}
  this.doc.getElementById('chat-room').textContent='Sala '+code;
  const nearBottom=this.list.scrollHeight-this.list.scrollTop-this.list.clientHeight<70;
  const children=messages.map(message=>{
   const item=this.doc.createElement('li');item.className=message.playerId===this.session.playerId?'chat-message is-mine':'chat-message';
   const heading=this.doc.createElement('div'),name=this.doc.createElement('strong'),time=this.doc.createElement('time'),body=this.doc.createElement('p');
   name.textContent=message.name+' · '+(pieces[message.piece]?.name||'Jugador');time.dateTime=message.createdAt;time.textContent=new Date(message.createdAt).toLocaleTimeString('es-AR',{hour:'2-digit',minute:'2-digit'});body.textContent=message.text;
   heading.append(name,time);item.append(heading,body);return item;
  });
  if(!children.length){const empty=this.doc.createElement('li');empty.className='chat-empty';empty.textContent='La charla empieza acá. Saludá a tu mesa.';children.push(empty);}
  this.list.replaceChildren(...children);
  if(nearBottom||history||added.some(message=>message.playerId===this.session.playerId))this.list.scrollTop=this.list.scrollHeight;
  if(this.panel.hidden&&!history)this.unread+=added.filter(message=>message.playerId!==this.session.playerId).length;
  this.badge();
 }
}
