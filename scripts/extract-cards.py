"""Extrae las 32 asignaciones de texto de la inicialización del EXE 0.45.

No ejecuta la aplicación. El bloque y el orden se contrastaron con objdump.
La identificación de los dos bloques de 16 como Suerte/Destino es inferida.
"""
from pathlib import Path
import hashlib
import json
import re
import struct

source = Path('recovered/0.45/estanciero.exe')
data = source.read_bytes()
digest = hashlib.sha256(data).hexdigest()
if digest != 'db15b971d8d6dc9411ebf48fc3943bdc2f575929c9a67ce143b3a949ec2c0daf':
    raise ValueError('El ejecutable no es la versión analizada')
start, end = 0x86a06, 0x86c09
refs = list(re.finditer(b'\xba(.{4})', data[start:end], re.S))
if len(refs) != 32:
    raise ValueError('El bloque no contiene las 32 asignaciones esperadas')
records = []
for index, match in enumerate(refs):
    offset = struct.unpack('<I', match[1])[0] - 0x400000
    cursor = offset
    while data[cursor:cursor + 2] != b'\0\0':
        cursor += 2
    records.append({'index': index, 'deck': 'luck' if index < 16 else 'fate',
                    'stringOffset': offset, 'assignmentOffset': start + match.start(),
                    'text': data[offset:cursor].decode('utf-16-le'),
                    'sha256': hashlib.sha256(data[offset:cursor]).hexdigest()})
manifest = {'source': str(source), 'sourceSha256': digest,
            'method': '32 consecutive native string assignments; two 16-slot decks inferred from card families', 'cards': records}
Path('recovered/0.45/cards.json').write_text(json.dumps(manifest, ensure_ascii=False, indent=2) + '\n')
print('32 textos recuperados, con offsets y hashes. Los duplicados de la tabla se conservan.')
