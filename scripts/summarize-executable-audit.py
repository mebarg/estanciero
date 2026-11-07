"""Produce un índice legible y contrasta la tabla original con la versión web."""
from pathlib import Path
import hashlib
import json
import subprocess

root = Path('recovered/0.45/audit')
board = json.loads((root/'board-data.json').read_text())
texts = json.loads((root/'texts-summary.json').read_text())
numbers = json.loads((root/'numbers-summary.json').read_text())
procedures = json.loads((root/'procedures-index.json').read_text())
modern = json.loads(subprocess.check_output(['node','--input-type=module','-e',
    "import { spaces,RULES } from './web/game.js';console.log(JSON.stringify({spaces,RULES}));"],text=True))
differences = []
for record in board['records']:
    index = 41 if record['index']==40 else 40 if record['index']==41 else record['index']
    current = modern['spaces'][index]
    name = ' '.join(s for s in [record['name'],record['zoneText']] if s)
    values = [('compra',record['priceOrAmount'],current.get('price'))] if record['typeText'] in ['p','c','t'] else []
    if record['typeText']=='p':
        values += [('hipoteca',record['mortgage'],current['mortgage']),('chacra',record['houseCost'],modern['RULES']['houseCost']),
                   ('adicional estancia',record['estateExtraCost'],modern['RULES']['houseCost'])]
        values += [(f'alquiler nivel {level}',old,new) for level,(old,new) in enumerate(zip(record['rents'],current['rents']))]
    for field,original,value in values:
        if original!=value:
            differences.append({'exeIndex':record['index'],'webIndex':index,'name':name,'field':field,'exe':original,'web':value})
(root/'differences.json').write_text(json.dumps({'scope':'EXE 0.45 versus current web application; indices 40/41 matched by title name, not silently conflated',
    'differences':differences},ensure_ascii=False,indent=2)+'\n')

def fmt(value):
    return '—' if value is None else f'{value:,.0f}'.replace(',','.')

company_rows=[]
for record in board['records']:
    if record['typeText']=='c':
        evidence=record['fieldEvidence']['16']
        company_rows.append(f"| {record['name']} | $ {fmt(record['priceOrAmount'])} | $ {fmt(record['mortgage'])} | `{evidence['address']}` |")
report=f'''# Auditoría del ejecutable Estanciero 0.45

Se analizó estáticamente el archivo completo de **{texts['source_bytes']:,} bytes**, sin ejecutar el juego ni el instalador. SHA-256: `{texts['source_sha256']}`.

## Las compañías sí están en el ejecutable

| Compañía | Precio de compra | Hipoteca | Asignación nativa del precio |
| --- | ---: | ---: | --- |
{chr(10).join(company_rows)}

Los tres precios se guardan como float32: bits `0x456d8000`, equivalentes a **3.800**. No se dedujeron de la hipoteca. La función de compra `FUN_0048b0b0` resta al dinero del jugador el campo `tabla + casillero × 116 + 16`; también usa ese campo al mostrar el mensaje de compra. La instrucción `0x48b15f` contiene la resta. Se corrigió la web, que antes usaba $3.000 como valor provisional.

Evidencia Ghidra de compra: `ev_e05e2cbd7581b70fed5ccc05818b2aba57d2efcbe34cc904abc4975abc50dead`. [Pseudocódigo de compra](procedures/48b0b0.pseudo.c) · [registro REA](purchase-ghidra.json).

## Cobertura del rastreo

| Área | Resultado | Detalle |
| --- | ---: | --- |
| Barrido textual | {texts['source_bytes']:,} bytes | ASCII, cp1252 y UTF-16LE en ambos alineamientos |
| Literales UTF-16 con estructura BSTR, fuera de imágenes | 210 | No confundir con todos los candidatos imprimibles |
| Candidatos textuales legibles seleccionados | 2.399 | Conservan nivel de confianza y ubicación |
| Catálogo textual bruto | {texts['records']:,} candidatos | Comprimido; incluye ruido y solapamientos etiquetados |
| Casilleros recuperados | 42 | Registros de 116 bytes; 800 asignaciones numéricas y 160 de texto |
| Tarjetas recuperadas | 32 | Conserva duplicados; textos cotejados con la tabla del inicializador |
| Funciones nativas detectadas por Ghidra | 80 | Metadatos y pseudocódigo de las 80; no son el fuente original |
| Instrucciones dentro de cuerpos detectados | {numbers['coverage']['instruction_records_inside_ghidra_bodies']:,} | Límites estáticos de Ghidra, no ejecución observada |
| Operandos numéricos inventariados | {numbers['coverage']['all_numeric_operands_in_selected_records']:,} | Cantidades, direcciones, bits y desplazamientos, sin confundirlos |
| Lecturas flotantes estáticas | {numbers['coverage']['floating_point_memory_reads']} | Bytes y decodificación IEEE-754 |
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
'''
for difference in differences:
    if difference['field'] not in ['chacra','adicional estancia']:
        report+=f"| {difference['name']} | {difference['field']} | {fmt(difference['exe'])} | {fmt(difference['web'])} |\n"
report+='''
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
'''
(root/'README.md').write_text(report.replace('602,112','602.112').replace('60,212','60.212').replace('30,901','30.901').replace('22,026','22.026'))
print('Índice generado; diferencias económicas:',len(differences))

# Manifestar los artefactos terminados sin depender de marcas de tiempo.
manifest=[]
for path in sorted(root.rglob('*')):
    if path.is_file() and path.name!='files-manifest.json':
        raw=path.read_bytes();manifest.append({'path':str(path.relative_to(root)),'bytes':len(raw),'sha256':hashlib.sha256(raw).hexdigest()})
(root/'files-manifest.json').write_text(json.dumps({'source_sha256':texts['source_sha256'],'files':manifest},indent=2)+'\n')
print('Artefactos inventariados:',len(manifest))
