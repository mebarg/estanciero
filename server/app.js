import http from 'node:http';
import { readFile } from 'node:fs/promises';
import path from 'node:path';
import { Server } from 'socket.io';
import { RoomStore } from './rooms.js';
import { FileChatStore,PostgresChatStore,chatInput } from './chat.js';

export async function createApp({directory=path.resolve('data'),root=path.resolve('web'),dice,logger=console,roomStore}={}) {
  const store=roomStore||new RoomStore({directory,dice});
  const chat=store.pool?new PostgresChatStore(store):new FileChatStore(store.directory);
  try{await store.load();await chat.load();}catch(error){await store.close();throw error;}
  const server=http.createServer(async(req,res)=>{
    try {
      if(!['GET','HEAD'].includes(req.method)){res.writeHead(405).end();return;}
      const pathname=decodeURIComponent(new URL(req.url,'http://localhost').pathname);
      if(pathname==='/health'){try{await store.health?.();res.writeHead(200,{'Content-Type':'application/json'}).end('{"ok":true}');}catch{res.writeHead(503,{'Content-Type':'application/json'}).end('{"ok":false}');}return;}
      const target=path.resolve(root,'.'+(pathname==='/'?'/index.html':pathname));
      if(!target.startsWith(root+path.sep)){res.writeHead(403).end();return;}
      const content=await readFile(target);
      const mime={'.html':'text/html; charset=utf-8','.js':'text/javascript; charset=utf-8','.css':'text/css; charset=utf-8','.jpg':'image/jpeg','.png':'image/png','.webp':'image/webp','.mp3':'audio/mpeg'};
      res.writeHead(200,{'Content-Type':mime[path.extname(target)]||'application/octet-stream','Cache-Control':'no-cache','X-Content-Type-Options':'nosniff','Referrer-Policy':'same-origin'});
      res.end(req.method==='HEAD'?undefined:content);
    }catch{res.writeHead(404).end('No encontrado');}
  });
  const io=new Server(server,{maxHttpBufferSize:16384,allowRequest:(req,done)=>{
    let same=true;try{same=!req.headers.origin||new URL(req.headers.origin).host===req.headers.host;}catch{same=false;}
    done(null,same);
  }});
  const onlineIds=code=>[...new Set([...io.sockets.sockets.values()].filter(s=>s.data.code===code).map(s=>s.data.playerId))];
  const snapshot=room=>store.publicRoom(room,onlineIds(room.code));
  const broadcastRoom=room=>io.to(room.code).emit('room:state',snapshot(room));
  const broadcast=async code=>broadcastRoom(await store.lookup(code));
  const presence=code=>{void broadcast(code).catch(error=>logger.error('No se pudo actualizar la presencia:',error.code||'error'));};
  const chatLimits=new Map();
  const ipLimits=new Map();
  function roomRate(socket){
    const ip=socket.handshake.address,now=Date.now();
    for(const [key,v] of ipLimits)if(now-v.since>60000)ipLimits.delete(key);
    const limit=ipLimits.get(ip)||{since:now,count:0};limit.count++;ipLimits.set(ip,limit);
    if(limit.count>60)throw new Error('Demasiados intentos. Esperá un minuto.');
  }
  io.on('connection',socket=>{
    let since=Date.now(),count=0,credential=null;
    async function attach(result) {
      const old=socket.data.code;
      if(old)await socket.leave(old);
      credential={code:result.room.code,token:result.token};socket.data={code:result.room.code,playerId:result.playerId};
      await socket.join(result.room.code);if(old&&old!==result.room.code)presence(old);
    }
    function handle(event,operation){socket.on(event,async(input={},ack)=>{
      if(typeof ack!=='function')return;
      const now=Date.now();if(now-since>1000){since=now;count=0;}if(++count>30){ack({ok:false,error:'Esperá un momento antes de volver a intentar.'});return;}
      try {const answer=await operation(input);ack({ok:true,...answer});}
      catch(error){if(error.code)logger.error('Error de sala:',error.code);let room;try{if(socket.data.code)room=await store.lookup(socket.data.code);}catch{}ack({ok:false,error:error.code?'No se pudo guardar la partida. Intentá nuevamente.':error.message,...(room?{room:snapshot(room)}:{})});}
    });}
    handle('room:create',async input=>{roomRate(socket);const result=await store.create(input);await attach(result);broadcastRoom(result.room);return {room:snapshot(result.room),playerId:result.playerId,token:result.token};});
    handle('room:join',async input=>{roomRate(socket);const result=await store.join(input.code,input);await attach(result);broadcastRoom(result.room);return {room:snapshot(result.room),playerId:result.playerId,token:result.token};});
    handle('room:resume',async input=>{
      const {room,member}=await store.authenticate(input.code,input.token);
      await attach({room,playerId:member.id,token:input.token});broadcastRoom(room);return {room:snapshot(room),playerId:member.id};
    });
    handle('room:inspect',async input=>{roomRate(socket);const room=await store.lookup(input.code);return {room:{code:room.code,started:!!room.game,members:room.members.map(({name,piece})=>({name,piece}))}};});
    handle('room:start',async()=>{
      if(!credential)throw new Error('Primero entrá a una sala.');
      const {room}=await store.start(credential.code,credential.token);broadcastRoom(room);return {room:snapshot(room)};
    });
    handle('game:action',async input=>{
      if(!credential)throw new Error('Primero entrá a una sala.');
      const {room,duplicate}=await store.command(credential.code,credential.token,input);broadcastRoom(room);return {room:snapshot(room),duplicate:!!duplicate};
    });
    handle('chat:history',async()=>{
      if(!credential)throw new Error('Primero entrá a una sala.');
      const seat={...credential};await store.authenticate(seat.code,seat.token);
      return {code:seat.code,messages:await chat.history(seat.code)};
    });
    handle('chat:send',async input=>{
      if(!credential)throw new Error('Primero entrá a una sala.');
      const seat={...credential},validated=chatInput(input),{member}=await store.authenticate(seat.code,seat.token);
      const now=Date.now(),key=seat.code+':'+member.id;
      for(const [id,times] of chatLimits)if(now-times.at(-1)>10000)chatLimits.delete(id);
      const recent=(chatLimits.get(key)||[]).filter(time=>now-time<10000);
      if(recent.length>=5)throw new Error('Esperá unos segundos antes de enviar más mensajes.');
      recent.push(now);chatLimits.set(key,recent);
      const result=await chat.append(seat.code,member,validated);
      if(!result.duplicate)io.to(seat.code).emit('chat:message',{code:seat.code,message:result.message});
      return {code:seat.code,...result};
    });
    handle('room:leave',async()=>{const code=socket.data.code;credential=null;socket.data={};if(code){await socket.leave(code);presence(code);}return {};});
    socket.on('disconnect',()=>{if(socket.data.code)presence(socket.data.code);});
  });
  return {server,io,store,close:async()=>{await new Promise(resolve=>io.close(resolve));await chat.close();await store.close();}};
}
