# Reglas de esta versión

Referencia principal: [manual 60 Aniversario compartido por el autor](https://es.scribd.com/doc/76541637/Reglas-Del-Estanciero). Se consultaron el texto público y las imágenes de sus páginas, el 2 de noviembre de 2026. No se reemplazó esta edición por las variantes que aparecen en otras páginas.

## Procedencia de los datos

| Dato | Evidencia usada |
| --- | --- |
| Capital inicial de $35.000, orden por mayor tirada, dobles | Manual, preparación y juego |
| Cobros que vencen al volver a tirar | Manual, compras y premios |
| Comisaría, multa de $1.000 y Descanso opcional de dos turnos | Imagen de página 3 del manual |
| Stock de 32 chacras y 12 estancias | Manual, componentes y construcción |
| Hipotecas, interés adelantado, transferencias y ventas de mejoras | Manual, banco y página 4 |
| Deudas, quiebra, remates y multa por avisar premios | Manual, páginas 4 y 5 |
| Precios de campos y ferrocarriles, impuestos, premio ganadero y salida | Imagen extraída del ejecutable 0.45 |
| Alquileres y costo de mejoras | Las 29 tarjetas JPG conservadas |
| Valores hipotecarios | Los 29 reversos `escaneos/* R.png`, leídos directamente |
| Texto de las 32 tarjetas | Tabla inicializada en el EXE 0.45; offsets y hashes en `recovered/0.45/cards.json` |
| Piezas de los seis participantes | `piezas.webp`, identificadas por el usuario |

El tablero original tiene 42 posiciones, de 0 a 41. La imagen ubica Buenos Aires Norte en 41 y el impuesto a las ventas en 40; la tarjeta JPG de Buenos Aires Norte tiene impreso 40. Para moverse se usa la numeración del tablero.

## Comportamiento implementado

- De dos a seis personas comparten el dispositivo. El texto del manual describe tres a seis; permitir dos es una extensión de la app. Cada una elige una pieza diferente: gaucho, bota, perro, caballo, mate o gallo.
- Todos tiran al comenzar. El mayor total empieza; sólo los empatados en el máximo repiten. Luego se sigue el orden de los asientos.
- El jugador decide si compra un título libre. El manual no exige rematar las propiedades que nadie quiso comprar, por lo que se dejan disponibles en el banco.
- Los alquileres, la salida y el premio ganadero se reclaman con un botón. Vencen cuando vuelven a tirarse los dados, incluso en una repetición por dobles. Pasar el turno todavía permite cobrar hasta esa tirada. Impuestos y efectos de tarjetas son obligatorios.
- Tres dobles seguidos envían directamente a comisaría sin completar el tercer movimiento. También se queda preso al caer directamente en el casillero Comisaría: así lo especifica esta edición, aunque otras reglas de Estanciero lo tratan como visita.
- Se paga la multa antes de tirar, se usa una tarjeta de libertad o se intenta sacar dobles. No se libera automáticamente tras un turno fallido. La salida con dobles se usa como movimiento, sin conceder otra tirada; ésta es una convención para el caso que el manual no desarrolla. Estando preso se puede negociar, hipotecar y reclamar alquileres.
- En Descanso se puede anunciar la intención de permanecer antes de tirar, hasta dos turnos. Sin dobles se consume una permanencia; con dobles se avanza. Estacionamiento libre no permite permanecer.
- Poseer toda una provincia duplica el alquiler del campo sin construcciones. Las chacras se construyen de forma pareja y las estancias sustituyen cuatro chacras. Cada mejora equivale a $4.000. Se puede completar una provincia directamente con estancias, abonando todas las mejoras faltantes y devolviendo las chacras existentes.
- El inventario del banco se calcula a partir de las construcciones reales: 32 chacras y 12 estancias. No se construye sin stock. Para bajar de estancia a cuatro chacras deben existir esas cuatro en el banco; también se permite liquidar todas las mejoras de la provincia. Las ventas al banco devuelven la mitad del costo.
- Antes de hipotecar o vender un título se liquidan las construcciones de su provincia. No se admite construir con una hipoteca en la provincia. Estas restricciones evitan transferir mejoras que sólo pueden negociarse con el banco.
- La hipoteca entrega el valor indicado en el reverso menos 10% adelantado. Se suspende su alquiler. Como el interés ya se pagó al constituirla, su propietario inicial devuelve sólo el principal al levantarla; no se le cobra dos veces el mismo interés.
- El comprador de una hipoteca puede cancelarla en la operación pagando capital más 10%, o pagar 10% al recibirla y otro 10% cuando la cancele después. Los títulos hipotecados recibidos de un quebrado también generan el primer 10%, salvo que la partida ya haya terminado.
- Las ventas entre jugadores requieren una propuesta con precio positivo y aceptación del comprador. El motor verifica el efectivo, incluyendo intereses, antes de transferir. Las tarjetas de libertad también pueden venderse y necesitan aceptación. No se crean préstamos sin garantía ni saldos negativos.
- Los remates aceptan ofertas enteras crecientes por turnos. Retirarse es definitivo para ese remate. El vendedor no puja por su título. Cuando sólo queda el mejor postor se cobra y se adjudica. Sin ofertas, el título continúa con su dueño o disponible en el banco. Esta organización por turnos concreta la instrucción de adjudicar al mayor postor.
- La falta de efectivo crea una deuda y pausa el avance. El deudor puede vender mejoras, hipotecar, vender títulos o rematarlos. Al reunir el importe se paga automáticamente. No se permite declararse quebrado si el valor realizable con el banco alcanza para pagar.
- Si no puede cubrir la deuda y entrega sus bienes, las mejoras se liquidan a mitad de costo. Se transfiere el efectivo y los títulos al acreedor. Cuando la deuda es con el banco, los títulos se rematan uno por uno. Los jugadores eliminados se saltean.
- La condición de cierre es reunir las 29 escrituras o quedar como último participante sin quebrar. Se resuelven las deudas y adjudicaciones pendientes antes del cierre; los cobros todavía no reclamados dejan de aplicarse al finalizar.
- La multa de $500 por recordar un premio es manual en “Cómo jugar”; no se intenta detectar conversaciones.

## Tarjetas recuperadas

Se encontraron 32 asignaciones consecutivas a una tabla de textos en la inicialización nativa del ejecutable, entre offsets `0x86a06` y `0x86c09`. Los dos bloques de 16 se interpretan como Suerte y Destino por sus familias de tarjetas y sus textos; esta clasificación es una inferencia estática. Los textos y sus posiciones en la tabla son observaciones del archivo. La extracción no ejecutó ni decompiló el programa completo.

La tabla contiene dos tarjetas idénticas de concurso agrícola; se conservaron ambas. Otras cadenas se comparten entre mazos. Los efectos se programaron a partir del contenido, sin afirmar que reproducen todos los detalles internos del código viejo.

Los mazos se barajan al crear la partida y luego rotan: la carta usada se coloca al fondo. Las tarjetas de libertad se retiran mientras alguien las conserva; vuelven al mazo original al utilizarse o cuando su titular quiebra. Se implementaron pagos, cobros, movimientos hacia adelante y atrás, prisión, reparación por chacras/estancias, venta de libertad, cumpleaños de $200 por participante y la elección entre multa o Suerte.

Al recibir una carta se abre una ventana con su texto. El efecto se registra una sola vez al sacarla; cerrar la ventana no lo repite. Si el movimiento permite comprar un título, al continuar se abre la escritura ampliada, con precio, efectivo disponible, saldo posterior y alquileres. La casilla del jugador de turno permanece resaltada aunque se consulte otro título. Cerrar la ventana de compra mantiene la decisión disponible en el panel lateral, con un botón para volver a ampliarla.

En cumpleaños, cada pago se resuelve por separado. Si alguien no puede pagar, se gestiona su deuda y luego se continúa con los demás. Una carta que mueve a otra propiedad resuelve la llegada; retroceder no cobra Salida.

## Límites y datos pendientes

- El [contraste web del 3 de noviembre de 2026](investigacion-reglas-web.md) respalda las reglas de la edición elegida y registra variantes y límites de las fuentes. No se encontró evidencia externa suficiente para desempatar todos los importes discrepantes del EXE y las tarjetas.
- Se confirmó en el ejecutable que las tres compañías cuestan $3.800. La función de compra resta ese mismo campo de la tabla al efectivo del jugador. Las hipotecas de $1.900 también figuran en el EXE y los escaneos. La primera versión provisional usaba $3.000; ya fue corregido.
- El rastreo completo encontró diferencias adicionales entre EXE, tablero y tarjetas: por ejemplo, el EXE inicializa chacras y adicional de estancia a $1.000, mientras los JPG imprimen $4.000. Esos valores originales se preservan en [la auditoría](../recovered/0.45/audit/README.md). La web mantiene las reglas basadas en tarjetas/manual salvo la corrección explícita de compañías. Se corrigieron además cuatro alquileres mal transcritos, contrastados ahora con los JPG y la tabla del EXE; no se importaron silenciosamente posibles errores del juego viejo.
- Hay diferencias entre precios del tablero y valores hipotecarios de los reversos. Se respetan ambas fuentes, sin forzar que una hipoteca sea la mitad del precio.
- No se implementan convenios de copropiedad ni arrendamientos privados: la app mantiene un propietario por título. Las compraventas son por título individual y dinero; no hay una pantalla para trueques simultáneos de paquetes.
- No se automatizan las variantes opcionales para acortar partidas. No hay IA. El juego en red usa salas privadas; cada conexión sólo puede actuar por su propio jugador. Ver [modo online](online.md).
- Los datos locales antiguos se migran preservando nombres, efectivo y títulos; la nueva lógica de prisión y cobros se aplica al continuar. El esquema se valida antes de cargarlo.

## Verificación

La actualización de ventanas pasó 47 pruebas del motor y una comprobación de los flujos de interfaz con DOM simulado: Suerte, Destino, elección de multa o Suerte, compra, compra después de una carta de movimiento y un único casillero activo. La compilación estática pasó. No se pudo completar la verificación visual de esta actualización en navegador por un fallo de la conexión de automatización; las comprobaciones de Chrome que siguen corresponden a la interfaz anterior.

Las pruebas cubren los flujos anteriores, estados inválidos, migración, cartas, piezas y simulaciones de partidas completas. La interfaz permite gestionar títulos de distintos participantes sin forzar que estén libres de comisaría. Se probó en Chrome el selector de seis piezas, su exclusividad, sorteo y desempate, reclamo de premio, compra, hipoteca, propuesta de venta con aceptación y remate con cancelación de hipoteca. La partida de QA usó un origen de navegador separado para conservar la partida anterior. A 390 píxeles se comprobó un ancho de contenido de 375 píxeles, sin desbordamiento horizontal. Pasaron 46 pruebas automáticas, incluidas 20 simulaciones de hasta 1.000 acciones por partida; son pruebas de estados y reglas, no una garantía de que todas las simulaciones terminen.
