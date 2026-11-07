import { RoomStore } from './rooms.js';
import { PostgresRoomStore } from './postgres-rooms.js';

export function createRoomStorage({env=process.env,directory,dice,logger=console,pool}={}){
  const mode=env.ESTANCIERO_STORAGE||(env.DATABASE_URL?'postgres':'json');
  const maxRooms=Number(env.ESTANCIERO_MAX_ROOMS||200);
  if(!Number.isSafeInteger(maxRooms)||maxRooms<1)throw new Error('ESTANCIERO_MAX_ROOMS debe ser un entero positivo.');
  if(mode==='json')return new RoomStore({directory,dice,maxRooms});
  if(mode!=='postgres')throw new Error('ESTANCIERO_STORAGE debe ser json o postgres.');
  const port=Number(env.PGPORT||5433);
  if(!Number.isInteger(port)||port<1||port>65535)throw new Error('PGPORT no es válido.');
  const connection=env.DATABASE_URL?{connectionString:env.DATABASE_URL}:{host:env.PGHOST||'127.0.0.1',port,database:env.PGDATABASE||'estanciero',user:env.PGUSER||'estanciero',password:env.PGPASSWORD};
  return new PostgresRoomStore({pool,dice,maxRooms,logger,poolConfig:{...connection,max:10,connectionTimeoutMillis:5000,idleTimeoutMillis:30000,statement_timeout:10000,query_timeout:15000}});
}
