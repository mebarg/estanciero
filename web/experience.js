// Sólo presentación: nunca decide los dados, el movimiento ni los efectos de una carta.
const soundKey='estanciero-sonido-v1';
const pipPositions={1:[4],2:[0,8],3:[0,4,8],4:[0,2,6,8],5:[0,2,4,6,8],6:[0,2,3,5,6,8]};
export const centerOf=points=>({x:(points[0]+points[2]+points[4]+points[6])/4,y:(points[1]+points[3]+points[5]+points[7])/4});
export function hopFrames(from,to,{jail=false}={}) {
  const dx=to.x-from.x,dy=to.y-from.y,lift=jail?48:18;
  return [
    {transform:'translate(0px,0px) scale(1,1)',offset:0},
    {transform:`translate(${dx*.45}px,${dy*.45-lift}px) scale(1.08,1.08)`,offset:.45},
    {transform:`translate(${dx}px,${dy}px) scale(1.1,.88)`,offset:.87},
    {transform:`translate(${dx}px,${dy}px) scale(1,1)`,offset:1}
  ];
}
// La misma orientación que las caras en CSS; las vueltas completas no cambian el resultado.
export function dieRotation(value,turnsX=0,turnsY=0){
  const angles={1:[0,0],2:[-90,0],3:[0,-90],4:[0,90],5:[90,0],6:[0,180]}[value];
  return `rotateX(${angles[0]+360*turnsX}deg) rotateY(${angles[1]+360*turnsY}deg)`;
}
export class TableSounds {
  constructor({storage=globalThis.localStorage,Context=globalThis.AudioContext||globalThis.webkitAudioContext,fetcher=globalThis.fetch}={}) {
    this.storage=storage;this.Context=Context;this.fetcher=fetcher;this.diceBuffer=null;this.diceSource=null;this.diceRolling=false;this.context=null;this.enabled=true;
    try{this.enabled=storage?.getItem(soundKey)!=='off';}catch{}
  }
  unlock(){
    if(!this.enabled||!this.Context)return Promise.resolve(false);
    try{
      if(!this.context){this.context=new this.Context();this.master=this.context.createGain();this.master.gain.value=.18;this.master.connect(this.context.destination);this.diceGain=this.context.createGain();this.diceGain.gain.value=4;this.diceGain.connect(this.master);}
      const resumed=this.context.state==='suspended'?this.context.resume():Promise.resolve();
      return Promise.all([resumed,this.loadDice()]).then(()=>this.context.state==='running').catch(()=>false);
    }catch{return Promise.resolve(false);}
  }
  toggle(){this.enabled=!this.enabled;try{this.storage?.setItem(soundKey,this.enabled?'on':'off');}catch{}if(this.master)this.master.gain.value=this.enabled ? .18 : 0;if(this.enabled)this.unlock();else this.stopDice();return this.enabled;}
  loadDice(){
    if(this.diceBuffer)return Promise.resolve(this.diceBuffer);
    if(this.diceLoading)return this.diceLoading;
    if(!this.fetcher||!this.context?.decodeAudioData)return Promise.resolve(false);
    this.diceLoading=Promise.resolve().then(()=>this.fetcher.call(globalThis,'assets/dados.mp3',{cache:'reload',...(globalThis.AbortSignal?.timeout?{signal:globalThis.AbortSignal.timeout(5000)}:{})})).then(response=>{if(!response.ok)throw new Error('Audio no disponible');return response.arrayBuffer();}).then(bytes=>this.context.decodeAudioData(bytes)).then(buffer=>{this.diceBuffer=buffer;this.audioError=null;if(this.diceRolling)this.startDice();return buffer;}).catch(error=>{this.diceLoading=null;this.audioError=error;return false;});
    return this.diceLoading;
  }
  async prepareDice(){await this.unlock();return !!this.diceBuffer&&this.enabled;}
  startDice(){
    if(!this.enabled)return;this.diceRolling=true;
    if(!this.diceBuffer||this.diceSource||this.context?.state!=='running')return;
    try{const source=this.context.createBufferSource();source.buffer=this.diceBuffer;source.connect(this.diceGain);source.onended=()=>{source.disconnect();if(this.diceSource===source)this.diceSource=null;};this.diceSource=source;source.start();}catch{}
  }
  stopDice(){
    this.diceRolling=false;const source=this.diceSource;this.diceSource=null;
    if(source){try{source.stop();source.disconnect();}catch{}}
  }
  tone(frequency,duration=.08,delay=0,type='sine',volume=.25){
    if(!this.enabled||!this.context||this.context.state!=='running')return;
    try{const time=this.context.currentTime+delay,osc=this.context.createOscillator(),gain=this.context.createGain();osc.type=type;osc.frequency.setValueAtTime(frequency,time);gain.gain.setValueAtTime(.001,time);gain.gain.exponentialRampToValueAtTime(volume,time+.008);gain.gain.exponentialRampToValueAtTime(.001,time+duration);osc.connect(gain);gain.connect(this.master);osc.onended=()=>{osc.disconnect();gain.disconnect();};osc.start(time);osc.stop(time+duration+.01);}catch{}
  }
  play(kind){
    if(kind==='rattle')return;
    else if(kind==='step')this.tone(260,.045,0,'triangle',.2);
    else if(kind==='land'){this.tone(392,.1);this.tone(523,.12,.075);}
    else if(kind==='card'){this.tone(659,.1);this.tone(880,.15,.09);}
    else if(kind==='money'){this.tone(1047,.07);this.tone(1319,.11,.07);}
    else if(kind==='pay')this.tone(220,.14,0,'triangle',.17);
    else if(kind==='win')[523,659,784,1047].forEach((f,i)=>this.tone(f,.2,i*.13));
  }
}
export class TableExperience {
  constructor({dice,total,caption,count,sounds,onBoard=()=>{},onChange=()=>{},positionName=id=>String(id),playerName=id=>String(id),movingElement=()=>null,reduced=()=>globalThis.matchMedia?.('(prefers-reduced-motion: reduce)').matches??true,canAnimate=()=>typeof globalThis.Element?.prototype.animate==='function',sleep=ms=>new Promise(resolve=>setTimeout(resolve,ms))}={}) {
    Object.assign(this,{dice,total,caption,count,sounds,onBoard,onChange,positionName,playerName,movingElement,reduced,canAnimate,sleep});
    this.busy=false;this.moving=null;this.faces=null;this.generation=0;this.animations=[];this.lastFaces=[1,1];this.anticipation=null;
  }
  drawDice(faces=this.faces||this.lastFaces){
    if(!this.faces)this.lastFaces=[...faces];
    const sides=Array.from({length:6},(_,i)=>{const n=i+1;return `<span class="die-side die-side-${n}">${Array.from({length:9},(_,p)=>`<i class="${pipPositions[n].includes(p)?'pip':''}"></i>`).join('')}</span>`;}).join('');
    let cubes=this.dice.querySelectorAll?.('.die-cube');
    if(cubes?.length!==2){this.dice.innerHTML=faces.map(n=>`<span class="die" aria-hidden="true"><span class="die-cube" data-value="${n}">${sides}</span></span>`).join('');cubes=this.dice.querySelectorAll?.('.die-cube');}
    if(!this.faces)cubes?.forEach((cube,i)=>cube.setAttribute('data-value',String(faces[i])));
    this.dice.setAttribute('aria-label',this.faces?'Dados en movimiento':`Dados: ${faces.join(' y ')}`);
    this.dice.classList.toggle('rolling',!!this.faces);
    this.total.textContent=this.faces?'…':String(faces[0]+faces[1]);
  }
  async tumble(generation,finalFaces){
    await this.sounds.prepareDice?.();
    if(generation!==this.generation)return false;
    const from=[...this.lastFaces];this.faces=[...finalFaces];this.drawDice();this.sounds.startDice?.();
    const cubes=this.dice.querySelectorAll?.('.die-cube'),shells=this.dice.querySelectorAll?.('.die');
    const duration=this.reduced()?80:2060,diceAnimations=[];
    if(!this.reduced()&&cubes?.length===2&&cubes[0].animate){
      cubes.forEach((cube,i)=>{
        diceAnimations.push(cube.animate([{transform:dieRotation(from[i])},{transform:dieRotation(finalFaces[i],i?-4:3,i?-3:4)}],{duration,easing:'cubic-bezier(.12,.65,.2,1)',fill:'forwards'}));
        const tilt=i?'rotateX(-19deg) rotateY(-18deg)':'rotateX(-15deg) rotateY(19deg)',sign=i?-1:1;
        if(shells?.[i]?.animate)diceAnimations.push(shells[i].animate([
          {transform:`translate(0px,0px) ${tilt}`,offset:0},
          {transform:`translate(${sign*8}px,-17px) ${tilt}`,offset:.16},
          {transform:`translate(${-sign*4}px,0px) ${tilt}`,offset:.35},
          {transform:`translate(${sign*3}px,-8px) ${tilt}`,offset:.52},
          {transform:`translate(0px,0px) ${tilt}`,offset:.7},
          {transform:`translate(0px,-2px) ${tilt}`,offset:.8},
          {transform:`translate(0px,0px) ${tilt}`,offset:1}
        ],{duration,easing:'ease-out',fill:'forwards'}));
      });
      this.animations=diceAnimations;
      await Promise.all(diceAnimations.map(animation=>animation.finished.catch(()=>{})));
    }else await this.sleep(duration);
    if(generation!==this.generation)return false;
    // Primero fijar la orientación equivalente; luego retirar la animación sin cambiar la cara.
    this.sounds.stopDice?.();this.faces=null;this.drawDice(finalFaces);
    for(const animation of diceAnimations)animation.cancel();this.animations=[];
    this.sounds.play('land');return true;
  }
  anticipate(){
    this.cancel();const generation=this.generation;this.busy=true;this.faces=[...this.lastFaces];
    this.caption.textContent='Esperando la tirada…';this.count.textContent='';this.drawDice();this.dice.classList.toggle('anticipating',true);this.onChange();
    void this.sleep(6500).then(()=>{if(this.generation===generation&&this.anticipation===generation){this.caption.textContent='Esperando el resultado del servidor…';}});
    this.anticipation=generation;
  }
  cancel(){this.dice.classList.toggle('anticipating',false);this.sounds.stopDice?.();this.generation++;this.anticipation=null;for(const animation of this.animations)animation.cancel();this.animations=[];this.busy=false;this.moving=null;this.faces=null;}
  async play(motion,points){
    this.cancel();const generation=this.generation;
    if(!this.canAnimate()){this.drawDice(motion.dice||this.lastFaces);return true;}
    this.busy=true;this.moving={playerId:motion.playerId,position:motion.from};this.caption.textContent=`${this.playerName(motion.playerId)} ${motion.dice?'tira los dados':'se mueve por la tarjeta'}…`;this.count.textContent='';this.onBoard();this.onChange();
    try{
      if(motion.dice&&!await this.tumble(generation,motion.dice))return false;
      if(generation!==this.generation)return false;
      const steps=this.reduced()?[]:motion.steps;
      let position=motion.from;
      for(let i=0;i<steps.length;i++){
        if(generation!==this.generation)return false;
        const step=steps[i],from=centerOf(points[position]),to=centerOf(points[step.position]);
        this.moving={playerId:motion.playerId,position};this.caption.textContent=`${this.playerName(motion.playerId)} · ${this.positionName(step.position)}`;this.count.textContent=`${i+1} / ${steps.length}`;this.onBoard();
        const el=this.movingElement(),duration=step.kind==='jail'?480:Math.max(85,Math.min(175,2400/steps.length));
        if(el?.animate){const animation=el.animate(hopFrames(from,to,{jail:step.kind==='jail'}),{duration,easing:'ease-in-out',fill:'forwards'});this.animations=[animation];await animation.finished.catch(()=>{});}else await this.sleep(duration);
        if(generation!==this.generation)return false;
        this.sounds.play('step');position=step.position;this.moving.position=position;
      }
      const destination=motion.steps.at(-1)?.position??motion.from;
      this.caption.textContent=motion.steps.length?`${this.playerName(motion.playerId)} llegó a ${this.positionName(destination)}`:`${this.playerName(motion.playerId)}: ${motion.dice?motion.dice.join(' + ')+' = '+motion.dice.reduce((a,b)=>a+b,0):'tarjeta recibida'}`;
      this.count.textContent=motion.steps.length?`${motion.steps.length} ${motion.steps.length===1?'paso':'pasos'}`:'';
      this.sounds.play('land');return true;
    }finally{if(generation===this.generation){for(const animation of this.animations)animation.cancel();this.animations=[];this.busy=false;this.moving=null;this.faces=null;this.onBoard();this.onChange();}}
  }
}
