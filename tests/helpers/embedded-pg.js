import { PGlite } from '@electric-sql/pglite';

// PostgreSQL embebido tiene una conexión. Este puente entrega esa conexión en exclusiva.
// Ejecuta el SQL real, pero no pretende probar bloqueos entre procesos nativos.
export async function embeddedPool(){
  const db=await PGlite.create();let tail=Promise.resolve(),failCommit=false;
  const log=[];
  const pool={
    log,
    failNextCommit(){failCommit=true;},
    async connect(){
      const previous=tail;let unlock;tail=new Promise(resolve=>{unlock=resolve;});await previous;
      return {
        async query(sql,params){
          log.push(sql);
          if(sql==='COMMIT'&&failCommit){failCommit=false;throw Object.assign(new Error('Fallo de escritura simulado'),{code:'58030'});}
          const result=await db.query(sql,params);return {...result,rowCount:result.affectedRows??result.rows.length};
        },
        release(){unlock();}
      };
    },
    async query(sql,params){const c=await pool.connect();try{return await c.query(sql,params);}finally{c.release();}},
    async end(){},
  };
  return {pool,close:()=>db.close()};
}
