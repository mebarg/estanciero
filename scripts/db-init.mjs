import 'dotenv/config';
import { createRoomStorage } from '../server/storage.js';
import { PostgresChatStore } from '../server/chat.js';
import { PostgresRoomStore } from '../server/postgres-rooms.js';
const store=createRoomStorage();
try {
  if(!(store instanceof PostgresRoomStore))throw new Error('Configurá ESTANCIERO_STORAGE=postgres en .env.');
  await store.load();await new PostgresChatStore(store).load();await store.health();
  console.log('PostgreSQL conectado. Las tablas de partidas y chat están listas.');
}catch(error){console.error('No se pudo preparar PostgreSQL:',error.code||error.message);process.exitCode=1;}
finally{await store.close();}
