# Inventario estático de textos

Fuente: `recovered/0.45/estanciero.exe`, 602,112 bytes, SHA-256 `db15b971d8d6dc9411ebf48fc3943bdc2f575929c9a67ce143b3a949ec2c0daf`.

Se recorrieron todos los bytes con tres vistas de codificación: ASCII, cp1252 y UTF-16LE (ambos alineamientos). También se buscaron candidatos UTF-16LE terminados en NUL con una longitud de cuatro bytes inmediatamente anterior, estructura usada por literales VB. Se conservan coincidencias y duplicados, no sólo cadenas consideradas legibles.

- Registros candidatos: **60,212**.
- Rangos distintos de bytes: **58,678**.
- Candidatos estructurales de literal con longitud: **213**.
- Registros que solapan imágenes ya identificadas: **40,597**, marcados para no presentarlos como textos de aplicación confirmados.
- Registros del archivo de lectura filtrada: **2,399**. No sustituye al inventario completo.

## Artefactos

- `texts-all-candidates.json.gz` y `texts-all-candidates.tsv.gz`: el inventario **completo** comprimido, incluidos ruido e imágenes, con offsets, longitudes, codificación, hash, sección, categoría, solapamiento y apariciones de punteros crudos.
- `texts.json` y `texts.tsv`: **2,399** registros seleccionados para lectura, fuera de imágenes y sin la categoría de ruido binario de menor confianza; conserva los literales estructurales cortos. El texto TSV se escapa como JSON para preservar líneas y controles.
- `texts-readable.txt`: vista para inspección que omite solapamientos con imágenes y los candidatos binarios de menor confianza.
- `texts-summary.json`: parámetros, identidad del archivo, cobertura y límites del barrido.
- `texts-literals.json/txt`: los **210** candidatos estructurales UTF-16LE con longitud fuera de imágenes; todos conservan sus offsets y las apariciones de punteros crudos.
- `texts-numeric-mentions.json`: **78** fragmentos con números dentro de esos literales. Se conserva el texto sin convertir ambiguamente separadores decimales/millares ni afirmar que sea un campo numérico de la lógica.

## Límites

El barrido es completo **dentro de sus reglas**: cuatro caracteres como mínimo para secuencias imprimibles y uno para candidatos prefijados. No recupera automáticamente textos comprimidos, cifrados o generados dinámicamente. Una secuencia imprimible, especialmente UTF-16 sobre código o imágenes, puede ser ruido. La categoría es una ayuda heurística, no evidencia de que Windows o el juego la mostraran. Las apariciones de punteros no son referencias verificadas por un desensamblador. No se ejecutó el EXE.
