import { Pool } from 'pg';
import { RoomStore,validateRoom,normalizeRoomCode } from './rooms.js';

export const ROOM_SCHEMA=`
CREATE TABLE IF NOT EXISTS estanciero_rooms (
 code TEXT PRIMARY KEY CHECK (code ~ '^[A-Z2-9]{8}$'),
 revision BIGINT NOT NULL CHECK (revision > 0),
 data JSONB NOT NULL CHECK (jsonb_typeof(data) = 'object'),
 created_at TIMESTAMPTZ NOT NULL DEFAULT now(),
 updated_at TIMESTAMPTZ NOT NULL DEFAULT now(),
 CHECK (data->>'code' = code),
 CHECK ((data->>'revision')::bigint = revision)
)`;

// Cada operación reutiliza las reglas de RoomStore con una sola sala en memoria.
// PostgreSQL mantiene la autoridad y el bloqueo; no hay una caché de todas las partidas.
export class PostgresRoomStore {
  constructor({pool,poolConfig,dice,maxRooms=200,now=()=>Date.now(),logger=console}={}){
    this.now=now;this.pool=pool||new Pool(poolConfig);this.dice=dice;this.maxRooms=maxRooms;this.pending=new Set();
    this.pool.on?.('error',error=>logger.error('Conexión PostgreSQL interrumpida:',error.code||'error'));
  }
  async load(){await this.pool.query(ROOM_SCHEMA);}
  async health(){await this.pool.query('SELECT 1');}
  publicRoom(room,online=[]){return RoomStore.prototype.publicRoom.call(null,room,online);}
  local(room=null){const store=new RoomStore({dice:this.dice,maxRooms:this.maxRooms,now:this.now});if(room)store.rooms.set(room.code,structuredClone(room));return store;}
  decode(row){if(!row)return null;const room=validateRoom(row.data);if(row.code!==room.code||Number(row.revision)!==room.revision)throw new Error('La sala guardada tiene una revisión inconsistente.');return room;}
  async lookup(code){
    code=normalizeRoomCode(code);
    const {rows}=await this.pool.query('SELECT code, revision, data FROM estanciero_rooms WHERE code = $1',[code]);
    const room=this.decode(rows[0]);if(!room)throw new Error('No encontramos esa sala. Revisá el código.');return room;
  }
  async authenticate(code,token){const room=await this.lookup(code);return this.local(room).authenticate(code,token);}
  transaction(work){
    const promise=(async()=>{
      const client=await this.pool.connect();let begun=false,discard;
      try{await client.query('BEGIN');begun=true;const result=await work(client);await client.query('COMMIT');return result;}
      catch(error){if(begun)try{await client.query('ROLLBACK');}catch(rollbackError){discard=rollbackError;}throw error;}
      finally{client.release(discard);}
    })();
    this.pending.add(promise);promise.then(()=>this.pending.delete(promise),()=>this.pending.delete(promise));return promise;
  }
  create(input){return this.transaction(async client=>{
    // Sólo la creación comparte un bloqueo para respetar el límite global de salas.
    await client.query("SELECT pg_advisory_xact_lock(hashtext('estanciero:room-create'))");
    const count=await client.query('SELECT count(*) AS total FROM estanciero_rooms');
    if(Number(count.rows[0].total)>=this.maxRooms)throw new Error('El servidor alcanzó el límite de salas.');
    for(let attempt=0;attempt<10;attempt++){
      const result=await this.local().create(input),room=result.room;
      const inserted=await client.query('INSERT INTO estanciero_rooms (code, revision, data) VALUES ($1, $2, $3::jsonb) ON CONFLICT (code) DO NOTHING RETURNING code',[room.code,room.revision,JSON.stringify(room)]);
      if(inserted.rowCount)return result;
    }
    throw new Error('No se pudo asignar un código de sala. Intentá nuevamente.');
  });}
  mutate(code,operation){return this.transaction(async client=>{
    code=normalizeRoomCode(code);
    const selected=await client.query('SELECT code, revision, data FROM estanciero_rooms WHERE code = $1 FOR UPDATE',[code]);
    const current=this.decode(selected.rows[0]);if(!current)throw new Error('No encontramos esa sala. Revisá el código.');
    const local=this.local(current),result=await operation(local);
    if(JSON.stringify(result.room)!==JSON.stringify(current)){
      validateRoom(result.room);
      const updated=await client.query('UPDATE estanciero_rooms SET revision = $2, data = $3::jsonb, updated_at = now() WHERE code = $1 AND revision = $4',[code,result.room.revision,JSON.stringify(result.room),current.revision]);
      if(updated.rowCount!==1)throw new Error('La sala cambió mientras se guardaba la jugada.');
    }
    return result;
  });}
  join(code,input,options){return this.mutate(code,store=>store.join(code,input,options));}
  start(code,token){return this.mutate(code,store=>store.start(code,token));}
  command(code,token,input){return this.mutate(code,store=>store.command(code,token,input));}
  async listRooms(){
    const {rows}=await this.pool.query(`SELECT code, data->>'title' AS title, COALESCE(data->>'visibility','private') AS visibility, data->'game'->>'phase' AS phase, data->>'createdAt' AS "createdAt", COALESCE(data->>'lastActivityAt',data->>'createdAt') AS "lastActivityAt", data->>'disconnectedAt' AS "disconnectedAt", (SELECT jsonb_agg(jsonb_build_object('id',m->'id','name',m->'name','piece',m->'piece')) FROM jsonb_array_elements(data->'members') m) AS members FROM estanciero_rooms`);
    return rows.map(row=>({...row,title:row.title||'Mesa de '+row.members[0].name}));
  }
  async prepareOffline(now){await this.pool.query(`UPDATE estanciero_rooms SET data = jsonb_set(jsonb_set(data,'{lastActivityAt}',CASE WHEN data->'disconnectedAt' = 'null'::jsonb THEN to_jsonb($1::text) ELSE COALESCE(data->'lastActivityAt',data->'createdAt') END),'{disconnectedAt}',COALESCE(NULLIF(data->'disconnectedAt','null'::jsonb),to_jsonb($1::text)))`,[new Date(now).toISOString()]);}
  touch(code){return this.mutate(code,store=>store.touch(code));}
  markPresence(code,connected,now){return this.mutate(code,store=>store.markPresence(code,connected,now));}
  async purgeExpired(now,policy,active=[]){return this.transaction(async client=>{
    const {rows}=await client.query(`DELETE FROM estanciero_rooms WHERE code <> ALL($1::text[]) AND COALESCE(data->>'lastActivityAt',data->>'createdAt')::timestamptz <= CASE WHEN data->'game'->>'phase' = 'over' THEN $2::timestamptz WHEN data->'game'->>'phase' IS NOT NULL THEN $3::timestamptz ELSE $4::timestamptz END RETURNING code`,[active,new Date(now-policy.finished).toISOString(),new Date(now-policy.playing).toISOString(),new Date(now-policy.waiting).toISOString()]);return rows.map(row=>row.code);
  });}
  async close(){await Promise.allSettled([...this.pending]);await this.pool.end();}
}
