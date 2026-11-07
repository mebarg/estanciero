// Textos y efectos de las tarjetas de Suerte y Destino.
export const cards = {
  "s-salida": {
    "deck": "luck",
    "text": "Siga hasta la salida",
    "sourceIndex": 0,
    "type": "goto",
    "position": 0
  },
  "s-salta": {
    "deck": "luck",
    "text": "Siga hasta Salta, Zona Norte. Si pasa por la salida cobre $5000",
    "sourceIndex": 1,
    "type": "goto",
    "position": 13
  },
  "s-colegio": {
    "deck": "luck",
    "text": "Pague $3000 por gastos colegiales",
    "sourceIndex": 2,
    "type": "cash",
    "amount": -3000
  },
  "s-bsaires": {
    "deck": "luck",
    "text": "Siga hasta Buenos Aires Zona Norte",
    "sourceIndex": 3,
    "type": "goto",
    "position": 41
  },
  "s-retroceso": {
    "deck": "luck",
    "text": "Vuelva 3 pasos atras",
    "sourceIndex": 4,
    "type": "back",
    "steps": 3
  },
  "s-libertad": {
    "deck": "luck",
    "text": "Habeas corpus concedido, con esta tarjeta sale usted gratuitamente de la comisaria. Conservela o vendala",
    "sourceIndex": 5,
    "type": "release"
  },
  "s-intereses": {
    "deck": "luck",
    "text": "Cobre $1000 por intereses bancarios",
    "sourceIndex": 6,
    "type": "cash",
    "amount": 1000
  },
  "s-carreras": {
    "deck": "luck",
    "text": "Gano en las carreras. Cobre $3000",
    "sourceIndex": 7,
    "type": "cash",
    "amount": 3000
  },
  "s-velocidad": {
    "deck": "luck",
    "text": "Multa por exceso de velocidad. Pague $300",
    "sourceIndex": 8,
    "type": "cash",
    "amount": -300
  },
  "s-reparacion": {
    "deck": "luck",
    "text": "Sus propiedades tiene que ser reparadas, pague al banco $500 por cada chacra y $2500 por cada estancia",
    "sourceIndex": 9,
    "type": "repairs",
    "house": 500,
    "estate": 2500
  },
  "s-santafe": {
    "deck": "luck",
    "text": "Siga hasta Santa Fe Zona Norte. Si pasa por la salida cobre $5000",
    "sourceIndex": 10,
    "type": "goto",
    "position": 26
  },
  "s-comisaria": {
    "deck": "luck",
    "text": "Marche preso directamente",
    "sourceIndex": 11,
    "type": "jail"
  },
  "s-multa": {
    "deck": "luck",
    "text": "Multa caminera. Pague $400",
    "sourceIndex": 12,
    "type": "cash",
    "amount": -400
  },
  "s-loteria": {
    "deck": "luck",
    "text": "Ha ganado la grande. Cobre $10.000",
    "sourceIndex": 13,
    "type": "cash",
    "amount": 10000
  },
  "s-bodega": {
    "deck": "luck",
    "text": "Haga un paseo hasta la Bodega. Si pasa por la salida cobre $5000",
    "sourceIndex": 14,
    "type": "goto",
    "position": 16
  },
  "s-semillas": {
    "deck": "luck",
    "text": "Por compra de semilla pague al banco $800 por cada chacra, $4000 por cada estancia",
    "sourceIndex": 15,
    "type": "repairs",
    "house": 800,
    "estate": 4000
  },
  "d-concurso1": {
    "deck": "fate",
    "text": "Ha ganado un concurso agricola. Cobre $2000",
    "sourceIndex": 16,
    "type": "cash",
    "amount": 2000
  },
  "d-concurso2": {
    "deck": "fate",
    "text": "Ha ganado un concurso agricola. Cobre $2000",
    "sourceIndex": 17,
    "type": "cash",
    "amount": 2000
  },
  "d-seguro": {
    "deck": "fate",
    "text": "Pague su poliza de seguro con $1000",
    "sourceIndex": 18,
    "type": "cash",
    "amount": -1000
  },
  "d-cumple": {
    "deck": "fate",
    "text": "Es su cumpleaños, cobre $200 de cada uno de los jugadores",
    "sourceIndex": 19,
    "type": "collect",
    "amount": 200
  },
  "d-farmacia": {
    "deck": "fate",
    "text": "Gastos de farmacia. Pague $1000",
    "sourceIndex": 20,
    "type": "cash",
    "amount": -1000
  },
  "d-formosa": {
    "deck": "fate",
    "text": "Vuelve atras hasta Formosa Zona Sur",
    "sourceIndex": 21,
    "type": "backTo",
    "position": 1
  },
  "d-belleza": {
    "deck": "fate",
    "text": "Ha obtenido un segundo premio de belleza. Cobre $200",
    "sourceIndex": 22,
    "type": "cash",
    "amount": 200
  },
  "d-multa-suerte": {
    "deck": "fate",
    "text": "Pague $200 de multa o levante una tarjeta de SUERTE",
    "sourceIndex": 23,
    "type": "choice",
    "amount": 200
  },
  "d-cedulas": {
    "deck": "fate",
    "text": "5% de interes sobre cedulas hipotecarias. Cobre $500",
    "sourceIndex": 24,
    "type": "cash",
    "amount": 500
  },
  "d-comisaria": {
    "deck": "fate",
    "text": "Marche preso directamente",
    "sourceIndex": 25,
    "type": "jail"
  },
  "d-libertad": {
    "deck": "fate",
    "text": "Con esta tarjeta sale usted de la comisaria, conservela hasta utilizarla o venderla",
    "sourceIndex": 26,
    "type": "release"
  },
  "d-salida": {
    "deck": "fate",
    "text": "Siga hasta la salida",
    "sourceIndex": 27,
    "type": "goto",
    "position": 0
  },
  "d-impuesto": {
    "deck": "fate",
    "text": "Devolucion de impuesto, cobre $400",
    "sourceIndex": 28,
    "type": "cash",
    "amount": 400
  },
  "d-acciones": {
    "deck": "fate",
    "text": "Por venta de acciones cobre $1000",
    "sourceIndex": 29,
    "type": "cash",
    "amount": 1000
  },
  "d-herencia": {
    "deck": "fate",
    "text": "Hereda $2000",
    "sourceIndex": 30,
    "type": "cash",
    "amount": 2000
  },
  "d-error": {
    "deck": "fate",
    "text": "Error en los calculos del banco. Cobre $4000",
    "sourceIndex": 31,
    "type": "cash",
    "amount": 4000
  }
};
export function shuffledDecks(seed=1) {
  let random = seed >>> 0;
  const next=()=>{random=(Math.imul(random,1664525)+1013904223)>>>0;return random;};
  return Object.fromEntries(['luck','fate'].map(deck=>{
    const ids=Object.keys(cards).filter(id=>cards[id].deck===deck);
    for(let i=ids.length-1;i>0;i--){const j=next()%(i+1);[ids[i],ids[j]]=[ids[j],ids[i]];}
    return [deck,ids];
  }));
}
