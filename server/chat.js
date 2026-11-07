import { randomUUID } from 'node:crypto';
import { mkdir,readFile,writeFile,rename } from 'node:fs/promises';
import path from 'node:path';

export function chatInput(input){
 if(!input||typeof input.text!=='string'||!input.text.trim()||input.text.trim().length>500)throw new Error('Escribí un mensaje de hasta 500 caracteres.');
 if(typeof input.id!=='string'||!/^[a-zA-Z0-9_-]{8,80}$/.test(input.id))throw new Error('El mensaje no tiene un identificador válido.');
 return {text:input.text.trim(),clientId:input.id};
}
export function chatMessage(member,input){return {id:randomUUID(),clientId:input.clientId,playerId:member.id,name:member.name,piece:member.piece,text:input.text,createdAt:new Date().toISOString()};}

export class FileChatStore {
 constructor(directory){this.directory=directory;this.messages=new Map();this.tail=Promise.resolve();}
 async load(){if(!this.directory)return;try{const records=JSON.parse(await readFile(path.join(this.directory,'chat.json'),'utf8'));if(!Array.isArray(records))throw new Error('Archivo de chat inválido.');this.messages=new Map(records);}catch(error){if(error.code!=='ENOENT')throw error;}}
 async history(code){await this.tail;return structuredClone(this.messages.get(code)||[]);}
 append(code,member,input){const work=this.tail.then(async()=>{
  const current=this.messages.get(code)||[],duplicate=current.find(m=>m.playerId===member.id&&m.clientId===input.clientId);if(duplicate)return {message:duplicate,duplicate:true};
  const message=chatMessage(member,input),next=new Map(this.messages);next.set(code,[...current,message].slice(-100));
  if(this.directory){await mkdir(this.directory,{recursive:true,mode:0o700});const file=path.join(this.directory,'chat.json');await writeFile(file+'.tmp',JSON.stringify([...next]),{mode:0o600});await rename(file+'.tmp',file);}
  this.messages=next;return {message,duplicate:false};
 });this.tail=work.catch(()=>{});return work;}
 prune(validCodes){const work=this.tail.then(async()=>{const next=new Map([...this.messages].filter(([code])=>validCodes.includes(code)));if(next.size===this.messages.size)return;if(this.directory){const file=path.join(this.directory,'chat.json');await writeFile(file+'.tmp',JSON.stringify([...next]),{mode:0o600});await rename(file+'.tmp',file);}this.messages=next;});this.tail=work.catch(()=>{});return work;}
 async close(){await this.tail;}
}

export const CHAT_SCHEMA=`CREATE TABLE IF NOT EXISTS estanciero_chat (
 seq BIGSERIAL PRIMARY KEY,
 room_code TEXT NOT NULL REFERENCES estanciero_rooms(code) ON DELETE CASCADE,
 player_id INTEGER NOT NULL CHECK (player_id BETWEEN 0 AND 5),
 client_id TEXT NOT NULL,
 message JSONB NOT NULL,
 UNIQUE(room_code,player_id,client_id)
)`;
export class PostgresChatStore {
 constructor(store){this.store=store;}
 async load(){await this.store.pool.query(CHAT_SCHEMA);}
 async history(code){const {rows}=await this.store.pool.query('SELECT message FROM estanciero_chat WHERE room_code = $1 ORDER BY seq DESC LIMIT 100',[code]);return rows.reverse().map(row=>row.message);}
 append(code,member,input){return this.store.transaction(async client=>{
  await client.query('SELECT pg_advisory_xact_lock(hashtext($1))',['estanciero:chat:'+code]);
  const old=await client.query('SELECT message FROM estanciero_chat WHERE room_code = $1 AND player_id = $2 AND client_id = $3',[code,member.id,input.clientId]);
  if(old.rows.length)return {message:old.rows[0].message,duplicate:true};
  const message=chatMessage(member,input);
  await client.query('INSERT INTO estanciero_chat (room_code,player_id,client_id,message) VALUES ($1,$2,$3,$4::jsonb)',[code,member.id,input.clientId,JSON.stringify(message)]);
  await client.query('DELETE FROM estanciero_chat WHERE room_code = $1 AND seq NOT IN (SELECT seq FROM estanciero_chat WHERE room_code = $1 ORDER BY seq DESC LIMIT 100)',[code]);
  return {message,duplicate:false};
 });}
 async close(){}
}
