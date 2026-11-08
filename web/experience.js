// Sólo presentación: nunca decide los dados, el movimiento ni los efectos de una carta.
const soundKey='estanciero-sonido-v1',audioKey='estanciero-audio-v2';
const alertSounds=new Set(['turn','chat','request','accepted','rejected','joined']);
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
    this.storage=storage;this.Context=Context;this.fetcher=fetcher;this.diceBuffer=null;this.diceSource=null;this.diceRolling=false;this.context=null;this.enabled=true;this.volume=1;this.effects=true;this.alerts=true;this.sources=new Map();
    try{this.enabled=storage?.getItem(soundKey)!=='off';const prefs=JSON.parse(storage?.getItem(audioKey)||'null');if(prefs){if(typeof prefs.enabled==='boolean')this.enabled=prefs.enabled;if(Number.isFinite(prefs.volume))this.volume=Math.max(0,Math.min(1,prefs.volume));if(typeof prefs.effects==='boolean')this.effects=prefs.effects;if(typeof prefs.alerts==='boolean')this.alerts=prefs.alerts;}}catch{}
  }
  unlock(){
    if(!this.enabled||!this.Context)return Promise.resolve(false);
    try{
      if(!this.context){this.context=new this.Context();this.master=this.context.createGain();this.master.gain.value=.18*this.volume;this.master.connect(this.context.destination);this.effectsGain=this.context.createGain();this.effectsGain.gain.value=this.effects?1:0;this.effectsGain.connect(this.master);this.alertsGain=this.context.createGain();this.alertsGain.gain.value=this.alerts?1:0;this.alertsGain.connect(this.master);this.diceGain=this.context.createGain();this.diceGain.gain.value=4;this.diceGain.connect(this.effectsGain);}
      const resumed=this.context.state==='suspended'?this.context.resume():Promise.resolve();
      return Promise.all([resumed,this.effects?this.loadDice():false]).then(()=>this.context.state==='running').catch(()=>false);
    }catch{return Promise.resolve(false);}
  }
  savePreferences(){try{this.storage?.setItem(audioKey,JSON.stringify({enabled:this.enabled,volume:this.volume,effects:this.effects,alerts:this.alerts}));this.storage?.setItem(soundKey,this.enabled?'on':'off');}catch{}}
  configure(options={}){
    if(Number.isFinite(options.volume))this.volume=Math.max(0,Math.min(1,options.volume));
    for(const key of ['effects','alerts'])if(typeof options[key]==='boolean')this[key]=options[key];
    if(this.master)this.master.gain.value=this.enabled ? .18*this.volume : 0;
    if(this.effectsGain)this.effectsGain.gain.value=this.effects?1:0;if(this.alertsGain)this.alertsGain.gain.value=this.alerts?1:0;
    if(!this.enabled||!this.effects){this.stopDice();this.stopCategory('effects');}if(!this.enabled||!this.alerts)this.stopCategory('alerts');
    this.savePreferences();
  }
  toggle(){this.enabled=!this.enabled;this.configure();if(this.enabled)void this.unlock();return this.enabled;}
  allowed(category='effects'){return this.enabled&&this.volume>0&&this[category]&&this.context?.state==='running';}
  stopCategory(category){for(const [source,bus] of this.sources)if(bus===category){try{source.stop();}catch{}this.sources.delete(source);}}
  track(source,category,cleanup){this.sources.set(source,category);source.onended=()=>{this.sources.delete(source);cleanup();};}
  loadDice(){
    if(this.diceBuffer)return Promise.resolve(this.diceBuffer);
    if(this.diceLoading)return this.diceLoading;
    if(!this.fetcher||!this.context?.decodeAudioData)return Promise.resolve(false);
    this.diceLoading=Promise.resolve().then(()=>this.fetcher.call(globalThis,'assets/dados.mp3',{cache:'reload',...(globalThis.AbortSignal?.timeout?{signal:globalThis.AbortSignal.timeout(5000)}:{})})).then(response=>{if(!response.ok)throw new Error('Audio no disponible');return response.arrayBuffer();}).then(bytes=>this.context.decodeAudioData(bytes)).then(buffer=>{this.diceBuffer=buffer;this.audioError=null;if(this.diceRolling&&this.effects)this.startDice();return buffer;}).catch(error=>{this.diceLoading=null;this.audioError=error;return false;});
    return this.diceLoading;
  }
  async prepareDice(){await this.unlock();return !!this.diceBuffer&&this.enabled;}
  startDice(){
    if(!this.enabled||!this.effects||!this.volume)return;this.diceRolling=true;
    if(!this.diceBuffer||this.diceSource||this.context?.state!=='running')return;
    try{const source=this.context.createBufferSource();source.buffer=this.diceBuffer;source.connect(this.diceGain);source.onended=()=>{source.disconnect();if(this.diceSource===source)this.diceSource=null;};this.diceSource=source;source.start();}catch{}
  }
  stopDice(){
    this.diceRolling=false;const source=this.diceSource;this.diceSource=null;
    if(source){try{source.stop();source.disconnect();}catch{}}
  }
  tone(frequency,duration=.08,delay=0,type='sine',volume=.25,category='effects'){
    if(!this.allowed(category))return;
    try{const time=this.context.currentTime+delay,osc=this.context.createOscillator(),gain=this.context.createGain();osc.type=type;osc.frequency.setValueAtTime(frequency,time);gain.gain.setValueAtTime(.001,time);gain.gain.exponentialRampToValueAtTime(volume,time+.008);gain.gain.exponentialRampToValueAtTime(.001,time+duration);osc.connect(gain);gain.connect(category==='alerts'?this.alertsGain:this.effectsGain);this.track(osc,category,()=>{osc.disconnect();gain.disconnect();});osc.start(time);osc.stop(time+duration+.01);}catch{}
  }
  noise(duration=.15,delay=0,volume=.12,frequency=1700){
    if(!this.allowed())return;
    try{const time=this.context.currentTime+delay,length=Math.ceil(this.context.sampleRate*duration),buffer=this.context.createBuffer(1,length,this.context.sampleRate),data=buffer.getChannelData(0);
      for(let i=0;i<length;i++)data[i]=(Math.random()*2-1)*(1-i/length);
      const source=this.context.createBufferSource(),filter=this.context.createBiquadFilter(),gain=this.context.createGain();source.buffer=buffer;filter.type='bandpass';filter.frequency.value=frequency;filter.Q.value=.6;gain.gain.value=volume;source.connect(filter);filter.connect(gain);gain.connect(this.effectsGain);this.track(source,'effects',()=>{source.disconnect();filter.disconnect();gain.disconnect();});source.start(time);
    }catch{this.tone(frequency,.045,delay,'triangle',volume*.35);}
  }
  play(kind){
    const category=alertSounds.has(kind)?'alerts':'effects';if(!this.allowed(category))return;
    const note=(f,d=.1,t=0,type='sine',v=.2)=>this.tone(f,d,t,type,v,category);
    if(kind==='rattle')return;
    if(kind==='step')note(260,.045,0,'triangle',.2);
    else if(kind==='land'){note(392,.1);note(523,.12,.075);}
    else if(kind==='card'){this.noise(.23,0,.24,2000);this.noise(.15,.14,.13,2800);note(659,.08,.15,'sine',.09);}
    else if(kind==='purchase'){this.noise(.08,0,.15,800);[523,659,784].forEach((f,i)=>note(f,.13,.06+i*.075,'triangle',.2));}
    else if(kind==='build'){this.noise(.07,0,.2,450);note(165,.07,0,'triangle',.22);this.noise(.07,.11,.18,650);note(330,.09,.13,'triangle',.18);}
    else if(kind==='bid'){note(440,.06);note(554,.09,.065);}
    else if(kind==='gavel'){this.noise(.09,0,.36,380);note(110,.1,0,'triangle',.4);this.noise(.06,.13,.22,500);note(147,.08,.13,'triangle',.25);}
    else if(kind==='money'){note(1047,.07);note(1319,.11,.07);}
    else if(kind==='pay')note(220,.14,0,'triangle',.17);
    else if(kind==='turn'){note(659,.12);note(880,.2,.14);}
    else if(kind==='chat'){note(784,.055,0,'sine',.12);note(1047,.08,.065,'sine',.1);}
    else if(kind==='request'){note(523,.1);note(659,.12,.13);note(523,.1,.26);}
    else if(kind==='accepted'){note(523,.09);note(659,.09,.08);note(784,.16,.17);}
    else if(kind==='rejected'){note(440,.1,0,'sine',.12);note(330,.13,.11,'sine',.12);}
    else if(kind==='joined'){note(587,.08,0,'sine',.12);note(740,.12,.08,'sine',.12);}
    else if(kind==='win')[523,659,784,1047].forEach((f,i)=>note(f,.2,i*.13));
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
