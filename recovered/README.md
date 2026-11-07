# Recursos recuperados

`tablero-original.jpg` contiene la imagen original de 776 × 706 píxeles extraída del ejecutable 0.45, sin redibujar ni retocar. Los dos rectángulos negros forman parte de la imagen: son los lugares de los mazos Suerte (arriba) y Destino (abajo), según la captura de la aplicación aportada por su autor.

Se extrajo `estanciero.exe` del CAB 0.45 usando `cabextract`, sin ejecutar el instalador. SHA-256 del ejecutable: `db15b971d8d6dc9411ebf48fc3943bdc2f575929c9a67ce143b3a949ec2c0daf`.

Las imágenes están incrustadas fuera del árbol convencional de recursos PE. El inventario PE de REA sólo encontró iconos y metadatos de versión (evidencia `ev_b52970390e7fe9eac709ee676b7a64a4f64e067fa27cc389c70e54f52b486958`). La extracción de imágenes se hizo con el script local `scripts/extract-assets.py`, leyendo límites de cada formato y verificando que Pillow pudiera decodificar cada archivo completo. Esta extracción es evidencia del script local, no una extracción realizada por REA.

`0.45/assets/inventory.json` conserva el offset, tamaño, dimensiones y SHA-256 de cada imagen. Contiene JPEG, BMP y GIF originales, además de copias PNG para inspección. Las miniaturas JPEG incrustadas también aparecen como imágenes separadas.

El ejecutable que ya estaba suelto en `apps/ESTANCIERO0.30/estanciero/` mide sólo 131.072 bytes y el analizador detectó secciones que exceden su tamaño. Por eso se usó el ejecutable completo de 602.112 bytes del instalador 0.45.

Corrección de procedencia: según la aclaración del autor, `puntos.txt` contiene coordenadas para dibujar/ubicar las fichas; no es el recurso gráfico del tablero. La versión web usa esos datos como zonas de interacción y ubicación de fichas sobre la imagen original.

## Textos de tarjetas

Se recuperaron 32 asignaciones de texto en la inicialización nativa del mismo EXE. `0.45/cards.json` conserva las posiciones en la tabla, offsets y hashes. `scripts/extract-cards.py` reproduce la extracción para este hash concreto. La clasificación de los dos bloques de 16 como Suerte/Destino es una inferencia a partir de los textos; los duplicados de la tabla se mantienen. `0.45/card-table.asm` conserva el fragmento de objdump usado para contrastar el orden de las asignaciones. Los efectos se implementaron desde las instrucciones textuales, sin ejecutar el programa original.

## Auditoría completa del ejecutable

El [índice de auditoría](0.45/audit/README.md) reúne el rastreo de todos los bytes para textos, la tabla de 42 casilleros, las constantes, los metadatos PE y el pseudocódigo Ghidra de las 80 funciones nativas detectadas. Incluye una comparación con la versión web, sin dar por equivalentes los datos del EXE, las imágenes y el reglamento. Se confirmó el precio de $3.800 de las tres compañías en su inicializador y la función que descuenta la compra.
