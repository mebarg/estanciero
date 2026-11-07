# Hallazgos textuales observados

Estos son literales estructurales fuera de imágenes. Su contenido está confirmado en los bytes; describir un efecto en un mensaje no demuestra que la lógica siempre lo ejecute así.

- **Comisaría y duración del arresto**, offset `0x717bc`, literal `text-43054`: "Usted cayo en la comisaria. Debe pagar $ 1000 de multa y tirar los dados, si saca dobles sale, si no pasara 2 turnos arrestado."
- **Comisaría, tarjeta automática**, offset `0x71690`, literal `text-43025`: "Usted cayo en la comisaria. Debe pagar $1000 de multa, como tiene una tarjeta sale automaticamente."
- **Mensaje al fallar dobles**, offset `0x740a0`, literal `text-44091`: "No tiene suerte, No tiro dobles y permanece 2 turnos en la carcel."
- **Descanso**, offset `0x714cc`, literal `text-42979`: "Desea permanecer 2 turnos en descanso?"
- **Hipoteca**, offset `0x70f88`, literal `text-42809`: "Va a hipotecar esta propiedad por: $"
- **Levantar hipoteca**, offset `0x71108`, literal `text-42849`: "Va a levantar la hipoteca pagando: $"
- **Alquiler por provincia completa**, offset `0x73894`, literal `text-43938`: "Teniendo una provincia completa el alquiler de los campos se duplica"
- **Máximo de jugadores**, offset `0x736ec`, literal `text-43901`: "Maximo 6 jugadores"
- **Conexión**, offset `0x73614`, literal `text-43877`: "Esperando jugador"

## Pistas de estructura y datos

- Se observan nombres de formularios `frm_main`, `frm_nuevo_multi`, `frm_nuevo_solo`, `frm_compra`, `frm_alquiler`, `frm_tarjeta`, `frm_vendera`, `frm_carcel`, `frm_op`, `frm_dados`, `frm_prop` y `frm_sobre` en el catálogo ASCII. Son nombres del artefacto, no código fuente recuperado.
- Se observan textos Cliente/Servidor y componentes Winsock. No se ensayó una conexión ni se afirma que el modo de red funcione.
- El literal que menciona `5%` se refiere a una tarjeta de cédulas hipotecarias que paga $500, no a una tasa del banco aplicable a las hipotecas.
- No aparece `35000` como texto ni una descripción explícita del capital inicial en los candidatos estructurales. Esto no establece ausencia del valor: los importes de la lógica pueden ser constantes binarias.
- Los textos de hipotecar y levantar hipoteca no incluyen una tasa del 10% en el propio literal. La tasa debe verificarse siguiendo código/constantes, no tomando los mensajes como una tabla numérica completa.

Los 78 fragmentos numéricos en literales están catalogados aparte; las constantes numéricas de instrucciones y tablas corresponden a otro tipo de evidencia.
