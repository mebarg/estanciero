"""Extrae imágenes incrustadas, sin ejecutar el EXE. Requiere Pillow.

Uso: python3 scripts/extract-assets.py ruta/al/estanciero.exe carpeta/nueva
"""
from pathlib import Path
from io import BytesIO
import hashlib
import json
import struct
import sys
from PIL import Image


def jpeg_end(data, start):
    pos = start + 2
    while pos < len(data):
        if data[pos] != 255:
            raise ValueError('Marcador JPEG inválido')
        while data[pos] == 255:
            pos += 1
        marker = data[pos]
        pos += 1
        if marker == 0xD9:
            return pos
        if marker == 0xD8 or 0xD0 <= marker <= 0xD7 or marker == 1:
            continue
        length = struct.unpack_from('>H', data, pos)[0]
        if length < 2:
            raise ValueError('Longitud JPEG inválida')
        pos += length
        if marker == 0xDA:
            while pos < len(data):
                marker_start = data.index(b'\xff', pos)
                pos = marker_start + 1
                while data[pos] == 255:
                    pos += 1
                if data[pos] == 0 or 0xD0 <= data[pos] <= 0xD7:
                    pos += 1
                    continue
                pos = marker_start
                break
    raise ValueError('JPEG sin cierre')


def gif_end(data, start):
    def subblocks(pos):
        while data[pos]:
            pos += data[pos] + 1
        return pos + 1
    pos = start + 13
    packed = data[start + 10]
    if packed & 128:
        pos += 3 * 2 ** ((packed & 7) + 1)
    while pos < len(data):
        kind = data[pos]
        if kind == 0x3B:
            return pos + 1
        if kind == 0x21:
            pos = subblocks(pos + 2)
        elif kind == 0x2C:
            packed = data[pos + 9]
            pos += 10
            if packed & 128:
                pos += 3 * 2 ** ((packed & 7) + 1)
            pos = subblocks(pos + 1)
        else:
            raise ValueError('Bloque GIF inválido')
    raise ValueError('GIF sin cierre')


def extract(source, destination):
    data = source.read_bytes()
    destination.mkdir(parents=True, exist_ok=False)
    records = []
    failures = []
    for extension, signature in [('jpg', b'\xff\xd8\xff'), ('bmp', b'BM'), ('gif', b'GIF89a'), ('gif', b'GIF87a')]:
        start = 0
        while (offset := data.find(signature, start)) >= 0:
            start = offset + 1
            try:
                if extension == 'jpg':
                    end = jpeg_end(data, offset)
                elif extension == 'gif':
                    end = gif_end(data, offset)
                else:
                    end = offset + int.from_bytes(data[offset + 2:offset + 6], 'little')
                if not offset < end <= len(data):
                    raise ValueError('Rango fuera del archivo')
                payload = data[offset:end]
                image = Image.open(BytesIO(payload))
                image.load()
                stem = f'{extension}-{offset:08x}'
                (destination / f'{stem}.{extension}').write_bytes(payload)
                image.save(destination / f'{stem}.png')
                records.append({'file': f'{stem}.{extension}', 'preview': f'{stem}.png', 'offset': offset,
                                'length': len(payload), 'width': image.width, 'height': image.height,
                                'sha256': hashlib.sha256(payload).hexdigest()})
            except (ValueError, OSError, IndexError, struct.error) as error:
                failures.append({'extension': extension, 'offset': offset, 'reason': str(error)})
    manifest = {'source': str(source), 'sha256': hashlib.sha256(data).hexdigest(),
                'method': 'signature-carving-with-format-boundaries-and-Pillow-validation',
                'images': records, 'rejected_candidates': failures}
    (destination / 'inventory.json').write_text(json.dumps(manifest, indent=2) + '\n')
    print(f'{len(records)} imágenes extraídas en {destination}; {len(failures)} candidatos descartados.')
    for record in records:
        if record['width'] > 500:
            print(record)


if __name__ == '__main__':
    extract(Path(sys.argv[1]), Path(sys.argv[2]))
