# Inventario numérico y metadatos PE

Artefacto: `recovered/0.45/estanciero.exe`, 602.112 bytes, SHA-256 `db15b971d8d6dc9411ebf48fc3943bdc2f575929c9a67ce143b3a949ec2c0daf`.

Reproducir: `python3 scripts/audit-numbers.py`. Se usa GNU objdump y Python estándar, sin ejecutar el EXE. La interpretación de la tabla de 42 casilleros la realiza por separado el análisis principal.

## Cobertura y archivos

- `pe-metadata.json`: secciones, directorios, cabecera y 105 importaciones de `MSVBVM60.DLL` (94 por nombre y 11 por ordinal). El PE32 usa base `0x400000`, entrada `0x4018c8`, linker 6.0 y fecha de cabecera `2007-06-02T16:16:35+00:00`.
- Además hay tres declaraciones VB de APIs resueltas dinámicamente: `gdi32!CreatePolygonRgn`, `gdi32!PtInRegion` y `kernel32!Sleep`. No se confunden con las importaciones del directorio PE.
- `numbers-objdump.txt.gz`: desensamblado lineal completo. **No todo es código:** `.text` contiene imágenes, formularios, cadenas y metadatos.
- `numbers-native-instructions.json.gz`: 33.085 registros de instrucciones candidatas en el corredor nativo `0x475c10..0x48fec9`, el arranque y tres pequeños resolutores de APIs intercalados en los metadatos.
- `numbers-operands.json.gz` / `.tsv.gz`: 22.026 operandos numéricos de esos registros, incluidos direcciones, desplazamientos y bits inmediatos. Cada entrada conserva su instrucción y offset.
- `numbers-float-reads.json`: 24 lecturas flotantes directas a memoria estática, con bytes y valor IEEE-754 decodificado.
- `numbers-monetary-candidates.json`: selección para inspección por magnitud, **sin asignar significado monetario automáticamente**.
- `numbers-flow-seeds.json` / `numbers-indirect-flow.json`: semillas y destinos indirectos que este recorrido sencillo no resuelve.
- `numbers-focus.json`: contextos de instrucciones de los hallazgos útiles descritos abajo.

Se cruzaron 80 entradas nativas no thunk y los 171 rangos de cuerpos de función exportados de Ghidra por la investigación principal. Se desensambló cada rango desde su inicio: 30.901 instrucciones y 21.059 operandos están contenidos en esos cuerpos. Los restantes 2.184 registros de instrucciones y 967 operandos conservan etiquetas de candidatos fuera de cuerpo. `numbers-body-operands.json.gz` y `numbers-unclassified-operands.json.gz` permiten revisar los dos conjuntos por separado. Los cuerpos son resultados estáticos heurísticos de Ghidra, no prueba de ejecución. Se encontraron además 74 prólogos VB. La entrada anterior de Ghidra se adjunta como ancla cuando corresponde, sin confundirla con pertenencia al cuerpo. Los resolutores `0x470bc8`, `0x470c0c` y `0x470c5c` se desensamblaron desde sus entradas exactas: la desensamblación lineal global los alineaba un byte antes.

## Valores fuera del inicializador de casilleros

| Uso / evidencia | Dirección de instrucción | Observación |
| --- | --- | --- |
| Capital de jugador | `0x479a88` | Escribe `0x4708b800`, interpretado como float32 **35.000**, en el campo de registro de jugador `+0x8`. Este campo se vuelve a usar en comparaciones y cobros. |
| Interés y levantamiento de hipoteca | `0x478f74..0x478fba` | Lee el campo de propiedad `+0x68`, lo divide por constante float **10**, suma de nuevo el principal y compara con el campo de efectivo del jugador. Es evidencia fuerte de cálculo **principal + 10%**; requiere el contexto del procedimiento para atribuir la rama exacta. Otras divisiones por 10 aparecen en `0x47902f` y `0x479158`. |
| Multa de comisaría | `0x47b801` | Carga float32 **1.000** y pasa su dirección a `FUN_004878c0`, que verifica si alcanza el efectivo. Esa llamada **no debita** dinero. El procedimiento referencia los textos de comisaría y multa; falta identificar un débito efectivo para afirmar que esta rama cobra la multa. |
| Premio ganadero | `0x47ad33` | `fadd` de la constante float32 **2.500** en `0x4012a0`; concuerda con el mensaje y el tablero. |
| Paso por salida | `0x4891cb` | `fadd` de float32 **5.000** en `0x401498`, dentro del flujo de movimiento. |
| Semillas | `0x489452`, `0x489459` | Carga enteros **4.000** y **800** en el caso de tarjeta `0x10`. Concuerda con el texto de semillas por estancia y chacra. |
| Reparaciones | `0x489466`, `0x48946d` | Carga enteros **2.500** y **500** para el caso `0x0a`. Concuerda con el texto de reparaciones por estancia y chacra. |
| Cumpleaños | `0x482aef`, `0x482b3e` | Suma y resta float32 **200**; las dos operaciones usan la misma constante estática `0x4013e4`. |
| Cobro de tarjeta | `0x482c2f` | Suma float32 **500**, compatible con la tarjeta de intereses sobre cédulas. |
| Venta por mitad del valor | `0x4803e9`, `0x4804fb` | Divide por float32 **2**. La interpretación como venta de mejoras se conserva como candidata hasta el trazado completo de esos procedimientos. |
| Dados | `0x48863f`, `0x488645` | Multiplicación por float32 **6** y suma de **1**. Es el patrón de selección de dado. |
| Selección de tarjeta | `0x482166`, `0x48216c` | Multiplicación por float32 **16** y suma de **1**, consistente con cada mazo de 16 cartas. |

Los valores 500, 1.000, 4.000, etc. también aparecen como bits flotantes o enteros en otros lugares, incluidos coordenadas y datos del tablero. La coincidencia numérica por sí sola no demuestra que sean reglas.

## Diferencias detectadas en los textos de la aplicación

Las cadenas del propio ejecutable alrededor de `0x4717bc` y `0x4740a0` indican arresto de **dos turnos** cuando no salen dobles. La lógica estática lo respalda: `FUN_0048f820` activa el indicador de arresto del jugador (`+0x16`) e inicializa el contador (`+0x24`) en cero al fallar los dobles; `FUN_004760c0` incrementa ese contador y omite el turno mientras es menor que dos. `0x471690` indica uso automático de una tarjeta de libertad. Las anclas principales de los mensajes son `FUN_0047b7b0` y `FUN_0048f820`.

El texto de Descanso (`0x4714cc`) también pregunta por **dos turnos**, referenciado desde `FUN_0047ab40`. Al aceptar, el contador de jugador `+0x25` arranca en uno; `FUN_004760c0` lo incrementa y omite el turno en uno y dos, y lo restablece a cero cuando llega a tres. Es evidencia estática de dos turnos omitidos.

No se identificó un contador inequívoco de existencias bancarias de 32 chacras o 12 estancias en esta inspección. Las apariciones de los enteros 32 y 12 también son tamaños de pila, índices y desplazamientos; no prueban esos límites.

## Límites

No se ejecutó ni instrumentó la aplicación. Los catálogos retienen candidatos y etiquetas de incertidumbre. El recorrido de flujo no resuelve los 4.179 saltos o llamadas indirectos observados, no prueba que cada rama se ejecute ni convierte los cuerpos heurísticos de Ghidra en comportamiento verificado. Tampoco trata como código el grueso de los recursos incrustados en `.text`. Este trabajo recupera constantes y puntos de uso; no reconstruye automáticamente la intención de cada número ni el código fuente original.
