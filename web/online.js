const savedKey='estanciero-online-v1';
export class OnlineSession {
  constructor({onRoom,onStatus,onChat=()=>{},onChatStatus=()=>{},onAdmission=()=>{},onLobbyRequests=()=>{},loadClient=()=>import('/socket.io/socket.io.esm.min.js')}){this.onAdmission=onAdmission;this.onLobbyRequests=onLobbyRequests;this.admission=null;this.onChat=onChat;this.onChatStatus=onChatStatus;this.messages=[];this.chatCode=null;this.chatPending=null;this.loadClient=loadClient;this.onRoom=onRoom;this.onStatus=onStatus;this.room=null;this.playerId=null;this.credential=null;this.socket=null;this.ready=false;this.pending=false;this.pendingCommand=null;}
  remembered(code=null){try{const value=JSON.parse(localStorage.getItem(savedKey));if(value?.sessions){const key=code?.toUpperCase()??value.lastCode;return value.sessions[key]?{code:key,token:value.sessions[key]}:null;}return value?.code&&value?.token&&(!code||value.code===code.toUpperCase())?value:null;}catch{return null;}}
  remember(){try{let old=JSON.parse(localStorage.getItem(savedKey))||{};const sessions={...(old.sessions||{}),...(old.code?{[old.code]:old.token}:{}),[this.credential.code]:this.credential.token};localStorage.setItem(savedKey,JSON.stringify({lastCode:this.credential.code,sessions}));}catch{}}

  async connect(){
    if(this.socket)return;
    let io;try{({io}=await this.loadClient());}catch{throw new Error('El modo online necesita el servidor del juego. Abrilo con npm run dev o desde su dirección publicada.');}
    this.socket=io({autoConnect:false,reconnection:true});
    this.socket.on('lobby:requests',requests=>this.onLobbyRequests(requests));
    this.socket.on('lobby:request-status',request=>{this.admission=request;this.onAdmission(request);});
    this.socket.on('chat:message',data=>{if(data.code===this.credential?.code)this.receiveChat(data.code,[data.message]);});
    this.socket.on('room:state',room=>{if(this.credential?.code===room.code)this.receive(room);});
    this.socket.on('disconnect',()=>{if(this.admission){this.admission={...this.admission,status:'cancelled'};this.onAdmission(this.admission);}this.ready=false;this.onStatus('Sin conexión. Intentando recuperar tu lugar…');});
    this.socket.on('connect_error',()=>{this.ready=false;this.onStatus('No pudimos conectar. Seguimos intentando…');});
    this.socket.on('connect',async()=>{
      if(!this.credential||!this.room)return;
      try{await this.resume(this.credential);if(this.pendingCommand)await this.deliverPending();}
      catch(error){this.onStatus(error.message);}
    });
    this.socket.connect();
  }
  async request(event,input={}){
    if(!this.socket?.connected)throw new Error('Sin conexión con el servidor. Esperá a que vuelva la conexión.');
    let result;
    try{result=await this.socket.timeout(8000).emitWithAck(event,input);}catch{throw new Error('No llegó la confirmación del servidor. La conexión se volverá a comprobar.');}
    if(result.room&&result.room.game!==undefined&&this.credential?.code===result.room.code)this.receive(result.room);
    if(!result.ok){const error=new Error(result.error||'No se pudo realizar la operación.');error.confirmed=true;throw error;}
    return result;
  }
  async ensureConnected(){
    await this.connect();if(this.socket.connected)return;
    await new Promise((resolve,reject)=>{const timer=setTimeout(()=>{this.socket.off('connect',done);reject(new Error('No pudimos conectar con el servidor. Intentá nuevamente.'));},8000);const done=()=>{clearTimeout(timer);resolve();};this.socket.once('connect',done);});
  }
  receive(room){if(this.room?.code===room.code&&room.revision<this.room.revision)return;this.room=room;if(this.playerId!==null)this.onRoom(room);}
  async adopt(result){
    this.admission=null;this.onAdmission(null);this.credential={code:result.room.code,token:result.token};this.playerId=result.playerId;this.ready=true;
    this.remember();this.receive(result.room);this.onStatus('Conectado');await this.refreshChat();return result;
  }
  async listLobby(){await this.ensureConnected();return (await this.request('lobby:list')).rooms;}
  async requestSeat(code,name){await this.ensureConnected();const {request}=await this.request('lobby:request',{code,name});if(this.admission?.id!==request.id||this.admission?.status==='pending'){this.admission=request;this.onAdmission(request);}return request;}
  async cancelSeat(){await this.request('lobby:cancel');this.admission=null;this.onAdmission(null);}
  async decideSeat(id,accept){return this.request('lobby:decide',{id,accept});}
  async claimSeat(id,piece){return this.adopt(await this.request('lobby:claim',{id,piece}));}
  async enter(kind,input){
    await this.ensureConnected();
    const result=await this.request('room:'+kind,input);
    return this.adopt(result);
  }
  async resume(credential){
    if(!credential)throw new Error('No hay una sala guardada para recuperar.');
    if(credential.code!==this.credential?.code){this.room=null;this.playerId=null;}
    this.credential=credential;await this.ensureConnected();
    const result=await this.request('room:resume',credential);this.playerId=result.playerId;this.ready=true;this.remember();this.receive(result.room);this.onStatus('Conectado');await this.refreshChat();return result;
  }
  receiveChat(code,messages,{history=false}={}){
    if(code!==this.credential?.code)return;
    if(this.chatCode!==code){this.chatCode=code;this.messages=[];this.chatPending=null;}
    const old=new Set(this.messages.map(message=>message.id));
    const added=messages.filter(message=>!old.has(message.id));
    const merged=new Map((history?[...messages,...this.messages]:[...this.messages,...messages]).map(message=>[message.id,message]));
    this.messages=[...merged.values()].sort((a,b)=>a.createdAt.localeCompare(b.createdAt)).slice(-100);
    this.onChat(this.messages,{code,history,added});
  }
  async refreshChat(){
    const code=this.credential?.code;if(!code)return;
    if(this.chatCode!==code){this.chatCode=code;this.messages=[];this.chatPending=null;this.onChat([],{code,history:true,added:[]});}
    try{const result=await this.request('chat:history');if(this.credential?.code===code){this.receiveChat(code,result.messages,{history:true});this.onChatStatus('');}}
    catch{if(this.credential?.code===code)this.onChatStatus('No se pudo cargar el historial. Volvé a abrir el chat para reintentar.');}
  }
  async sendChat(text){
    if(!this.ready||!this.credential)throw new Error('Esperá a recuperar la conexión para enviar.');
    text=text.trim();if(!text||text.length>500)throw new Error('Escribí un mensaje de hasta 500 caracteres.');
    const code=this.credential.code;
    if(!this.chatPending||this.chatPending.text!==text)this.chatPending={id:crypto.randomUUID(),text};
    const pending=this.chatPending;
    try{const result=await this.request('chat:send',pending);if(this.credential?.code===code){this.receiveChat(code,[result.message]);if(this.chatPending===pending)this.chatPending=null;}return result;}
    catch(error){if(error.confirmed&&this.chatPending===pending)this.chatPending=null;throw error;}
  }
  async inspect(code){await this.ensureConnected();return (await this.request('room:inspect',{code})).room;}
  async start(){return this.request('room:start');}
  async action(action){
    if(this.pending)throw new Error('Esperá la confirmación de la jugada anterior.');
    if(!this.ready||!this.socket?.connected)throw new Error('Esperá a recuperar la conexión antes de jugar.');
    if(this.pendingCommand)throw new Error('Hay una jugada sin confirmar. Usá Reintentar jugada antes de continuar.');
    this.pendingCommand={id:Array.from(crypto.getRandomValues(new Uint8Array(16)),n=>n.toString(16).padStart(2,'0')).join(''),revision:this.room.revision,action};
    return this.deliverPending();
  }
  async deliverPending(){
    if(this.pending||!this.pendingCommand)return;
    this.pending=true;this.onStatus('Enviando jugada…');
    try{
      const command=this.pendingCommand;let result;
      try{result=await this.request('game:action',command);}catch(error){if(error.confirmed||!this.socket?.connected)throw error;result=await this.request('game:action',command);}
      this.pendingCommand=null;return result;
    }catch(error){
      // Un rechazo explícito ya trajo el estado actual. Un timeout conserva el mismo ID.
      if(error.confirmed)this.pendingCommand=null;
      if(this.socket?.connected){try{await this.request('room:resume',this.credential);}catch{}}
      throw error;
    }finally{this.pending=false;this.onStatus(this.ready?'Conectado':'Sin conexión. Intentando recuperar tu lugar…');}
  }
  async leave(){
    if(this.socket?.connected)try{await this.request('room:leave');}catch{}
    this.admission=null;this.onAdmission(null);this.onLobbyRequests([]);
    this.messages=[];this.chatCode=null;this.chatPending=null;this.onChat([],{code:null,history:true,added:[]});
    this.credential=null;this.room=null;this.playerId=null;this.ready=false;this.pendingCommand=null;this.pending=false;
    this.socket?.disconnect();this.socket=null;
  }
}
