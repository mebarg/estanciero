const savedKey='estanciero-online-v1';
export class OnlineSession {
  constructor({onRoom,onStatus,loadClient=()=>import('/socket.io/socket.io.esm.min.js')}){this.loadClient=loadClient;this.onRoom=onRoom;this.onStatus=onStatus;this.room=null;this.playerId=null;this.credential=null;this.socket=null;this.ready=false;this.pending=false;this.pendingCommand=null;}
  remembered(code=null){try{const value=JSON.parse(localStorage.getItem(savedKey));if(value?.sessions){const key=code?.toUpperCase()??value.lastCode;return value.sessions[key]?{code:key,token:value.sessions[key]}:null;}return value?.code&&value?.token&&(!code||value.code===code.toUpperCase())?value:null;}catch{return null;}}
  remember(){try{let old=JSON.parse(localStorage.getItem(savedKey))||{};const sessions={...(old.sessions||{}),...(old.code?{[old.code]:old.token}:{}),[this.credential.code]:this.credential.token};localStorage.setItem(savedKey,JSON.stringify({lastCode:this.credential.code,sessions}));}catch{}}

  async connect(){
    if(this.socket)return;
    let io;try{({io}=await this.loadClient());}catch{throw new Error('El modo online necesita el servidor del juego. Abrilo con npm run dev o desde su dirección publicada.');}
    this.socket=io({autoConnect:false,reconnection:true});
    this.socket.on('room:state',room=>{if(this.credential?.code===room.code)this.receive(room);});
    this.socket.on('disconnect',()=>{this.ready=false;this.onStatus('Sin conexión. Intentando recuperar tu lugar…');});
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
  async enter(kind,input){
    await this.ensureConnected();
    const result=await this.request('room:'+kind,input);
    this.credential={code:result.room.code,token:result.token};this.playerId=result.playerId;this.ready=true;
    this.remember();
    this.receive(result.room);this.onStatus('Conectado');return result;
  }
  async resume(credential){
    if(!credential)throw new Error('No hay una sala guardada para recuperar.');
    if(credential.code!==this.credential?.code){this.room=null;this.playerId=null;}
    this.credential=credential;await this.ensureConnected();
    const result=await this.request('room:resume',credential);this.playerId=result.playerId;this.ready=true;this.remember();this.receive(result.room);this.onStatus('Conectado');return result;
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
    this.credential=null;this.room=null;this.playerId=null;this.ready=false;this.pendingCommand=null;this.pending=false;
    this.socket?.disconnect();this.socket=null;
  }
}
