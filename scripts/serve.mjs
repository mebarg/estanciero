import 'dotenv/config';
import { createRoomStorage } from '../server/storage.js';
import path from 'node:path';
import { createApp } from '../server/app.js';
const option=name=>process.argv.find(arg=>arg.startsWith('--'+name+'='))?.split('=').slice(1).join('=');
const directory=path.resolve(option('data-dir')||process.env.ESTANCIERO_DATA_DIR||'data');
const roomStore=createRoomStorage({directory});
let app;
try{app=await createApp({roomStore});}catch(error){console.error('No se pudo iniciar el almacenamiento del juego:',error.code||error.message);process.exit(1);}
app.server.listen(Number(option('port')||process.env.PORT||5187),'0.0.0.0',()=>{
  console.log('Estanciero local y online: http://localhost:'+app.server.address().port);
});
for(const signal of ['SIGINT','SIGTERM'])process.once(signal,async()=>{await app.close();process.exit(0);});
