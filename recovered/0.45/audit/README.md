# Auditoría del ejecutable Estanciero 0.45

Se analizó estáticamente el archivo completo de **602.112 bytes**, sin ejecutar el juego ni el instalador. SHA-256: `db15b971d8d6dc9411ebf48fc3943bdc2f575929c9a67ce143b3a949ec2c0daf`.

## Las compañías sí están en el ejecutable

| Compañía | Precio de compra | Hipoteca | Asignación nativa del precio |
| --- | ---: | ---: | --- |
| Compania Petrolera | $ 3.800 | $ 1.900 | `0x483d9b` |
| Bodega | $ 3.800 | $ 1.900 | `0x484781` |
| Ingenio | $ 3.800 | $ 1.900 | `0x485bea` |

Los tres precios se guardan como float32: bits `0x456d8000`, equivalentes a **3.800**. No se dedujeron de la hipoteca. La función de compra `FUN_0048b0b0` resta al dinero del jugador el campo `tabla + casillero × 116 + 16`; también usa ese campo al mostrar el mensaje de compra. La instrucción `0x48b15f` contiene la resta. Se corrigió la web, que antes usaba $3.000 como valor provisional.

Evidencia Ghidra de compra: `ev_e05e2cbd7581b70fed5ccc05818b2aba57d2efcbe34cc904abc4975abc50dead`. [Pseudocódigo de compra](procedures/48b0b0.pseudo.c) · [registro REA](purchase-ghidra.json).

## Cobertura del rastreo

| Área | Resultado | Detalle |
| --- | ---: | --- |
| Barrido textual | 602.112 bytes | ASCII, cp1252 y UTF-16LE en ambos alineamientos |
| Literales UTF-16 con estructura BSTR, fuera de imágenes | 210 | No confundir con todos los candidatos imprimibles |
| Candidatos textuales legibles seleccionados | 2.399 | Conservan nivel de confianza y ubicación |
| Catálogo textual bruto | 60.212 candidatos | Comprimido; incluye ruido y solapamientos etiquetados |
| Casilleros recuperados | 42 | Registros de 116 bytes; 800 asignaciones numéricas y 160 de texto |
| Tarjetas recuperadas | 32 | Conserva duplicados; textos cotejados con la tabla del inicializador |
| Funciones nativas detectadas por Ghidra | 80 | Metadatos y pseudocódigo de las 80; no son el fuente original |
| Instrucciones dentro de cuerpos detectados | 30.901 | Límites estáticos de Ghidra, no ejecución observada |
| Operandos numéricos inventariados | 22.026 | Cantidades, direcciones, bits y desplazamientos, sin confundirlos |
| Lecturas flotantes estáticas | 24 | Bytes y decodificación IEEE-754 |
| Importaciones PE | 105 | MSVBVM60.DLL; además se identificaron tres declaraciones VB de APIs dinámicas |

## Dónde revisar todo

- [Tabla de casilleros legible](board-data.tsv): nombres, zonas, precios, hipotecas, alquileres y costos.
- [Tabla completa con evidencias](board-data.json): además incluye las seis posiciones X/Y de fichas por casillero, instrucciones y offsets de cada asignación.
- [Literales estructurales de la aplicación](texts-literals.txt) · [catálogo legible de textos](texts-readable.txt) · [resumen textual](texts-summary.md).
- [Candidatos textuales completos](texts-all-candidates.json.gz): el barrido bruto conserva hasta el ruido de imágenes, identificado como tal.
- [Valores numéricos y puntos de uso](numbers-summary.md) · [operandos dentro de funciones](numbers-body-operands.json.gz) · [candidatos no clasificados](numbers-unclassified-operands.json.gz).
- [Metadatos PE e importaciones](pe-metadata.json).
- [Índice de las 80 funciones](procedures-index.json): enlaza sus archivos `.pseudo.c` y el registro de evidencia de cada una.
- [Desensamblado del inicializador](initialization.asm) · [desensamblado lineal bruto](numbers-objdump.txt.gz).
- [Diferencias frente a la versión web](differences.json): separa los datos del EXE de las decisiones basadas en tablero y tarjetas.

## Hallazgos que conviene distinguir

- **Valores confirmados:** capital inicial $35.000, paso por salida $5.000 y premio ganadero $2.500. Las tarjetas contienen sus importes y la rutina de reparación diferencia $500/$2.500 de reparaciones y $800/$4.000 de semillas por chacra/estancia.
- **Construcciones:** la tabla y el texto de la interfaz del EXE usan $1.000 por chacra y $1.000 adicionales para estancia en los 22 campos; las tarjetas JPG imprimen $4.000. La función `FUN_0048b3f0` presenta los campos `+0x2c` y `+0x30` con esos conceptos. Son dos fuentes diferentes, no se mezclaron como si coincidieran.
- **Prisión y Descanso:** el ejecutable contiene mensajes y contadores de dos turnos. El mensaje de multa menciona $1.000; el helper identificado sólo comprueba fondos, de modo que este análisis no afirma un débito en esa rama sin más trazado.
- **Hipotecas:** `FUN_004781e0` suma el principal entero al efectivo al hipotecar; `FUN_00478ec0` calcula y resta principal más 10% para levantarla. Es distinto de cobrar el interés por adelantado, como indica el manual compartido. La web conserva explícitamente la regla del manual.
- **Numeración:** el EXE usa índice 40 para Buenos Aires Norte y 41 para impuesto a las ventas; la imagen muestra esos números invertidos. La web sigue la imagen y el informe conserva ambos índices.
- **Alquiler sospechoso:** Mendoza Sur con tres chacras figura en el EXE a $2.500; la tarjeta imprime $10.500. Se preservó el dato del EXE para revisión y se mantuvo la tarjeta en el juego moderno.
- **Precios diferentes:** Córdoba Centro/Norte y Buenos Aires Sur/Centro/Norte tienen precios distintos entre tabla del EXE e imagen del tablero. Están listados abajo.
- **Correcciones del prototipo:** se detectaron cuatro transcripciones erróneas y se corrigieron tras contrastar EXE y JPG: Río Negro Sur con cuatro chacras ($7.600), Santa Fe Sur/Centro con una ($1.700) y Córdoba Sur con dos ($6.500).

## Diferencias económicas actuales, salvo construcción

| Casillero del EXE | Campo | EXE | Web / fuente visual |
| --- | --- | ---: | ---: |
| Prov. Rio Negro Zona Norte | hipoteca | 1.000 | 1.100 |
| Prov. Mendoza Zona Sur | alquiler nivel 3 | 2.500 | 10.500 |
| Prov. Cordoba Zona Centro | compra | 6.000 | 6.400 |
| Prov. Cordoba Zona Norte | compra | 6.400 | 7.000 |
| Prov. Buenos Aires Zona Sur | compra | 7.000 | 8.000 |
| Prov. Buenos Aires Zona Centro | compra | 7.000 | 8.000 |
| Prov. Buenos Aires Zona Norte | compra | 7.400 | 9.000 |

Los $4.000 por mejora de la web proceden de los JPG; los $1.000 de la tabla nativa quedan disponibles en el inventario. No se alteraron silenciosamente estas discrepancias al corregir el precio de las compañías.

## Qué significa «completo» aquí

Se recorrieron todos los bytes con los criterios de extracción declarados y se exportaron todas las funciones nativas del inventario de Ghidra. Eso **no equivale a entender el significado de cada byte**, recuperar el proyecto VB6 original ni verificar cada rama ejecutándose. Los textos construidos dinámicamente, datos comprimidos/codificados no reconocidos y destinos indirectos pueden requerir más análisis. Los números sin contexto quedan como candidatos, no como precios. Los cuerpos de funciones son resultados heurísticos del desensamblador.

No se analizaron de igual manera los otros instaladores ni las bibliotecas de terceros. Esta auditoría corresponde exactamente al EXE 0.45 identificado por su hash.

## Reproducir los catálogos

Desde la raíz del proyecto, con Python, GNU objdump y Node disponibles:

```sh
python3 scripts/extract-board-data.py
python3 scripts/extract-cards.py
python3 scripts/audit-texts.py
python3 scripts/audit-numbers.py
python3 scripts/summarize-executable-audit.py
```

Los registros Ghidra se conservaron completos y sus IDs se incluyen en cada JSON de función. Para volver a decompilar se necesita el proveedor REA/Ghidra disponible; estos cinco scripts no ejecutan el juego ni recrean por sí mismos esa etapa.
