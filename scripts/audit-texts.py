"""Inventario estático reproducible de cadenas en un PE, sin ejecutar el programa.

Escanea todos los bytes (incluidos recursos e imágenes) y separa evidencia de
contenido de inferencias sobre su posible uso. Los resultados son candidatos:
ni un bloque imprimible ni una aparición de un puntero prueba una referencia
ejecutable o que una cadena se haya mostrado al usuario.
"""
from __future__ import annotations

import argparse
import bisect
import csv
import hashlib
import gzip
import io
import json
import re
import struct
import unicodedata
from collections import Counter, defaultdict
from pathlib import Path


def pe_layout(data):
    pe = struct.unpack_from('<I', data, 0x3c)[0]
    if data[pe:pe+4] != b'PE\0\0':
        raise ValueError('No es un PE')
    count, optional_size = struct.unpack_from('<H', data, pe+6)[0], struct.unpack_from('<H', data, pe+20)[0]
    optional = pe + 24
    magic = struct.unpack_from('<H', data, optional)[0]
    image_base = struct.unpack_from('<I' if magic == 0x10b else '<Q', data, optional + (28 if magic == 0x10b else 24))[0]
    header_size = struct.unpack_from('<I', data, optional+60)[0]
    sections = []
    for i in range(count):
        off = optional + optional_size + 40*i
        name = data[off:off+8].rstrip(b'\0').decode('ascii', 'replace')
        virtual_size, rva, raw_size, raw_offset = struct.unpack_from('<IIII', data, off+8)
        sections.append(dict(name=name, rva=rva, virtual_size=virtual_size, raw_offset=raw_offset, raw_size=raw_size))
    return image_base, header_size, sections


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('source', nargs='?', type=Path, default=Path('recovered/0.45/estanciero.exe'))
    parser.add_argument('--output', type=Path, default=Path('recovered/0.45/audit'))
    parser.add_argument('--image-inventory', type=Path, default=Path('recovered/0.45/assets/inventory.json'))
    parser.add_argument('--min-chars', type=int, default=4)
    args = parser.parse_args()
    data = args.source.read_bytes()
    digest = hashlib.sha256(data).hexdigest()
    image_base, header_size, sections = pe_layout(data)
    image_ranges = []
    if args.image_inventory.exists():
        inventory = json.loads(args.image_inventory.read_text())
        if inventory['sha256'] != digest:
            raise ValueError('El inventario de imágenes pertenece a otro ejecutable')
        image_ranges = [(i['offset'], i['offset'] + i['length'], i['file']) for i in inventory['images']]

    def location(off):
        if off < header_size:
            return 'PE headers', image_base + off
        for section in sections:
            if section['raw_offset'] <= off < section['raw_offset'] + section['raw_size']:
                return section['name'], image_base + section['rva'] + off - section['raw_offset']
        return 'unmapped-file-bytes', None

    def printable(char):
        return char in '\t\r\n' or char.isprintable()

    candidates = []
    seen = set()

    def add(offset, length, text, encoding, method, **extra):
        identity = (offset, length, encoding, method)
        if identity in seen:
            return
        seen.add(identity)
        section, va = location(offset)
        overlap = [name for a, b, name in image_ranges if offset < b and offset+length > a]
        letters = [c for c in text if c.isalpha()]
        latin = sum('LATIN' in unicodedata.name(c, '') for c in letters)
        latin_ratio = latin / len(letters) if letters else 0
        has_words = bool(re.search(r'[A-Za-zÁÉÍÓÚÜÑáéíóúüñ]{3}', text))
        noise = not has_words or latin_ratio < .75
        if overlap:
            category, confidence = 'embedded-image-payload-or-metadata', 'low-as-application-text'
        elif section == '.rsrc':
            category, confidence = 'pe-resource-text-candidate', 'structural-candidate'
        elif re.search(r'(?:[A-Za-z]:\\|https?://|[\w.-]+@[\w.-]+\.[A-Za-z]{2,})', text):
            category, confidence = 'path-or-address', 'text-observed-use-unknown'
        elif re.fullmatch(r'[\s$+\-0-9.,%:/]+', text):
            category, confidence = 'numeric-text', 'text-observed-use-unknown'
        elif re.search(r'(?i)(msvbvm|__vba|\.dll\b|\.ocx\b|\.tlb\b|^_[A-Za-z]|^Get[A-Z]|^Set[A-Z])', text):
            category, confidence = 'runtime-api-or-component', 'text-observed-use-unknown'
        elif re.search(r'(?i)(hipotec|comisari|tarjeta|dinero|jugador|chacra|estancia|compa[nñ]ia|pague|cobre|provincia|preso|alquiler|ganador|premio|conect|servidor)', text):
            category, confidence = 'game-or-ui-text-candidate', 'higher-when-length-prefixed' if method == 'length-prefixed-utf16le-null-terminated' else 'text-observed-use-unknown'
        elif re.fullmatch(r'[A-Za-z_][A-Za-z_0-9.]*', text) and has_words:
            category, confidence = 'identifier-candidate', 'text-observed-use-unknown'
        elif noise:
            category, confidence = 'printable-binary-candidate', 'low'
        else:
            category, confidence = 'text-candidate', 'text-observed-use-unknown'
        record = dict(offset=offset, offset_hex=f'0x{offset:x}', byte_length=length,
                      character_length=len(text), encoding=encoding, method=method,
                      text=text, raw_sha256=hashlib.sha256(data[offset:offset+length]).hexdigest(),
                      section=section, virtual_address=f'0x{va:x}' if va is not None else None,
                      category=category, confidence=confidence, embedded_image_overlaps=overlap,
                      latin_letter_ratio=round(latin_ratio, 4), raw_pointer_occurrences=[])
        record.update(extra)
        candidates.append(record)

    # ASCII and cp1252 are independent views. Extended printable cp1252 bytes
    # can join true ASCII text to adjacent binary data; retaining both avoids
    # silently discarding the more precise ASCII boundary.
    for encoding in ('ascii', 'cp1252'):
        start, chars = None, []
        for off, byte in enumerate(data):
            try:
                char = bytes([byte]).decode(encoding)
                accepted = printable(char)
            except UnicodeDecodeError:
                accepted = False
            if accepted:
                if start is None:
                    start = off
                chars.append(char)
            else:
                if start is not None and len(chars) >= args.min_chars:
                    add(start, off-start, ''.join(chars), encoding, 'maximal-printable-run')
                start, chars = None, []
        if start is not None and len(chars) >= args.min_chars:
            add(start, len(data)-start, ''.join(chars), encoding, 'maximal-printable-run')

    # Read UTF-16LE code points in both byte alignments; valid surrogate pairs
    # are admitted. Unpaired surrogates terminate a candidate.
    for alignment in (0, 1):
        off, start, chars = alignment, None, []
        while off + 1 < len(data):
            unit = struct.unpack_from('<H', data, off)[0]
            step = 2
            if 0xd800 <= unit <= 0xdbff and off+3 < len(data):
                second = struct.unpack_from('<H', data, off+2)[0]
                if 0xdc00 <= second <= 0xdfff:
                    char = chr(0x10000 + ((unit-0xd800)<<10) + second-0xdc00)
                    step = 4
                else:
                    char = '\0'
            elif 0xd800 <= unit <= 0xdfff:
                char = '\0'
            else:
                char = chr(unit)
            if printable(char):
                if start is None:
                    start = off
                chars.append(char)
            else:
                if start is not None and len(chars) >= args.min_chars:
                    add(start, off-start, ''.join(chars), 'utf-16le', 'maximal-printable-run', alignment=alignment)
                start, chars = None, []
            off += step
        if start is not None and len(chars) >= args.min_chars:
            add(start, off-start, ''.join(chars), 'utf-16le', 'maximal-printable-run', alignment=alignment)

    # VB native literals use a four-byte byte-count preceding UTF-16LE. Search
    # each byte offset, validate its whole range, strict decoding and trailing
    # NUL. This is structural evidence, not proof of a VB runtime use-site.
    for prefix in range(len(data)-6):
        length = struct.unpack_from('<I', data, prefix)[0]
        if not length or length % 2 or length > 65536:
            continue
        off = prefix+4
        if off+length+2 > len(data) or data[off+length:off+length+2] != b'\0\0':
            continue
        try:
            text = data[off:off+length].decode('utf-16le')
        except UnicodeDecodeError:
            continue
        if text and all(printable(c) for c in text):
            add(off, length, text, 'utf-16le', 'length-prefixed-utf16le-null-terminated',
                prefix_offset=prefix, prefix_bytes=4, declared_byte_length=length)

    candidates.sort(key=lambda r:(r['offset'], r['byte_length'], r['encoding'], r['method']))
    by_va = defaultdict(list)
    for index, record in enumerate(candidates):
        record['id'] = f'text-{index:05d}'
        if record['virtual_address']:
            by_va[int(record['virtual_address'], 16)].append(record)
    for off in range(len(data)-3):
        value = struct.unpack_from('<I', data, off)[0]
        if value in by_va:
            for record in by_va[value]:
                record['raw_pointer_occurrences'].append(off)

    summary = dict(source=str(args.source), source_bytes=len(data), source_sha256=digest,
                   scanned_file_range=[0, len(data)], minimum_run_characters=args.min_chars,
                   unicode_alignments=[0, 1], encodings=['ascii', 'cp1252', 'utf-16le'],
                   length_prefixed_minimum_characters=1, records=len(candidates),
                   counts_by_encoding=dict(Counter(r['encoding'] for r in candidates)),
                   counts_by_method=dict(Counter(r['method'] for r in candidates)),
                   counts_by_category=dict(Counter(r['category'] for r in candidates)),
                   counts_by_section=dict(Counter(r['section'] for r in candidates)),
                   records_overlapping_images=sum(bool(r['embedded_image_overlaps']) for r in candidates),
                   distinct_observed_ranges=len({(r['offset'],r['byte_length']) for r in candidates}),
                   image_base=f'0x{image_base:x}', sections=sections,
                   limitations=[
                       'All file bytes were scanned under the stated character and minimum-length rules; this is not proof that every semantic text is recovered.',
                       'Arbitrary Unicode and cp1252 runs can be printable interpretations of machine code, image data or numerical constants.',
                       'Compressed, encrypted, encoded, custom-serialized and dynamically assembled text is not recovered merely by a printable-run scan.',
                       'ASCII/cp1252/UTF-16LE views overlap and structural BSTR candidates can duplicate the same underlying text.',
                       'No unprefixed run shorter than the selected minimum is listed; length-prefixed candidates accept one character.',
                       'Raw pointer occurrences are byte matches, including unaligned locations; they are not disassembler-verified cross-references.',
                       'Only the supplied PE file was read; no target execution, network request or inference that a candidate appeared in the UI was performed.'
                   ])
    args.output.mkdir(parents=True, exist_ok=True)
    all_json = (json.dumps(dict(summary=summary, texts=candidates), ensure_ascii=False, indent=2)+'\n').encode()
    (args.output/'texts-all-candidates.json.gz').write_bytes(gzip.compress(all_json, mtime=0))
    (args.output/'texts-summary.json').write_text(json.dumps(summary, ensure_ascii=False, indent=2)+'\n')
    def tsv(records):
        f = io.StringIO(newline='')
        writer = csv.writer(f, delimiter='\t')
        writer.writerow(['id','offset','byte_length','encoding','method','category','image_overlap','raw_pointer_occurrences','text_json'])
        for r in records:
            writer.writerow([r['id'],r['offset_hex'],r['byte_length'],r['encoding'],r['method'],r['category'],','.join(r['embedded_image_overlaps']),','.join(hex(o) for o in r['raw_pointer_occurrences']),json.dumps(r['text'], ensure_ascii=False)])
        return f.getvalue()
    (args.output/'texts-all-candidates.tsv.gz').write_bytes(gzip.compress(tsv(candidates).encode(), mtime=0))
    readable = [r for r in candidates if not r['embedded_image_overlaps'] and r['category'] != 'printable-binary-candidate']
    selection = dict(selected_records=len(readable), all_candidate_records=len(candidates),
                     filter='outside known image payloads and not categorized as low-confidence printable-binary-candidate; includes structural candidates shorter than 4 characters')
    (args.output/'texts.json').write_text(json.dumps(dict(summary=summary, selection=selection, texts=readable), ensure_ascii=False, indent=2)+'\n')
    (args.output/'texts.tsv').write_text(tsv(readable))
    literals = [r for r in candidates if r['method'] == 'length-prefixed-utf16le-null-terminated' and not r['embedded_image_overlaps']]
    (args.output/'texts-literals.json').write_text(json.dumps(dict(source=str(args.source), source_sha256=digest,
        scope='Length-prefixed UTF-16LE candidates outside known embedded image ranges; raw pointer occurrences are not verified xrefs',
        records=len(literals), texts=literals), ensure_ascii=False, indent=2)+'\n')
    with (args.output/'texts-literals.txt').open('w') as f:
        f.write('CANDIDATOS ESTRUCTURALES UTF-16LE CON LONGITUD, FUERA DE IMÁGENES\n')
        for r in literals:
            f.write(f"{r['offset_hex']} ({r['byte_length']} bytes; {len(r['raw_pointer_occurrences'])} apariciones de puntero) {json.dumps(r['text'], ensure_ascii=False)}\n")
    number_mentions = []
    for r in literals:
        for match in re.finditer(r'(?:\$\s*)?\d+(?:[.,]\d+)*\s*%?', r['text']):
            raw = match.group().rstrip()
            relative = len(r['text'][:match.start()].encode('utf-16le'))
            byte_length = len(raw.encode('utf-16le'))
            offset = r['offset'] + relative
            assert data[offset:offset+byte_length].decode('utf-16le') == raw
            number_mentions.append(dict(literal_id=r['id'], offset=offset, offset_hex=f'0x{offset:x}',
                byte_length=byte_length, literal_offset=r['offset'], raw_token=raw,
                context=r['text'], interpretation='numeric-looking text, not an independently recovered numeric field'))
    (args.output/'texts-numeric-mentions.json').write_text(json.dumps(dict(source_sha256=digest,
        records=len(number_mentions), mentions=number_mentions), ensure_ascii=False, indent=2)+'\n')
    with (args.output/'texts-readable.txt').open('w') as f:
        f.write('CANDIDATOS de texto fuera de imágenes; no se afirma uso en ejecución.\n')
        f.write('Los mismos bytes pueden aparecer bajo distintas interpretaciones.\n\n')
        for r in readable:
            f.write(f"{r['offset_hex']} [{r['encoding']}; {r['method']}; {r['category']}] {json.dumps(r['text'], ensure_ascii=False)}\n")
    for r in candidates:
        assert hashlib.sha256(data[r['offset']:r['offset']+r['byte_length']]).hexdigest() == r['raw_sha256']
    report = f'''# Inventario estático de textos

Fuente: `{args.source}`, {len(data):,} bytes, SHA-256 `{digest}`.

Se recorrieron todos los bytes con tres vistas de codificación: ASCII, cp1252 y UTF-16LE (ambos alineamientos). También se buscaron candidatos UTF-16LE terminados en NUL con una longitud de cuatro bytes inmediatamente anterior, estructura usada por literales VB. Se conservan coincidencias y duplicados, no sólo cadenas consideradas legibles.

- Registros candidatos: **{len(candidates):,}**.
- Rangos distintos de bytes: **{summary['distinct_observed_ranges']:,}**.
- Candidatos estructurales de literal con longitud: **{summary['counts_by_method'].get('length-prefixed-utf16le-null-terminated',0):,}**.
- Registros que solapan imágenes ya identificadas: **{summary['records_overlapping_images']:,}**, marcados para no presentarlos como textos de aplicación confirmados.
- Registros del archivo de lectura filtrada: **{len(readable):,}**. No sustituye al inventario completo.

## Artefactos

- `texts-all-candidates.json.gz` y `texts-all-candidates.tsv.gz`: el inventario **completo** comprimido, incluidos ruido e imágenes, con offsets, longitudes, codificación, hash, sección, categoría, solapamiento y apariciones de punteros crudos.
- `texts.json` y `texts.tsv`: **{len(readable):,}** registros seleccionados para lectura, fuera de imágenes y sin la categoría de ruido binario de menor confianza; conserva los literales estructurales cortos. El texto TSV se escapa como JSON para preservar líneas y controles.
- `texts-readable.txt`: vista para inspección que omite solapamientos con imágenes y los candidatos binarios de menor confianza.
- `texts-summary.json`: parámetros, identidad del archivo, cobertura y límites del barrido.
- `texts-literals.json/txt`: los **{len(literals)}** candidatos estructurales UTF-16LE con longitud fuera de imágenes; todos conservan sus offsets y las apariciones de punteros crudos.
- `texts-numeric-mentions.json`: **{len(number_mentions)}** fragmentos con números dentro de esos literales. Se conserva el texto sin convertir ambiguamente separadores decimales/millares ni afirmar que sea un campo numérico de la lógica.

## Límites

El barrido es completo **dentro de sus reglas**: cuatro caracteres como mínimo para secuencias imprimibles y uno para candidatos prefijados. No recupera automáticamente textos comprimidos, cifrados o generados dinámicamente. Una secuencia imprimible, especialmente UTF-16 sobre código o imágenes, puede ser ruido. La categoría es una ayuda heurística, no evidencia de que Windows o el juego la mostraran. Las apariciones de punteros no son referencias verificadas por un desensamblador. No se ejecutó el EXE.
'''
    (args.output/'texts-summary.md').write_text(report)
    findings = [
        ('Comisaría y duración del arresto', 'Usted cayo en la comisaria. Debe pagar $ 1000 de multa y tirar los dados, si saca dobles sale, si no pasara 2 turnos arrestado.'),
        ('Comisaría, tarjeta automática', 'Usted cayo en la comisaria. Debe pagar $1000 de multa, como tiene una tarjeta sale automaticamente.'),
        ('Mensaje al fallar dobles', 'No tiene suerte, No tiro dobles y permanece 2 turnos en la carcel.'),
        ('Descanso', 'Desea permanecer 2 turnos en descanso?'),
        ('Hipoteca', 'Va a hipotecar esta propiedad por: $'),
        ('Levantar hipoteca', 'Va a levantar la hipoteca pagando: $'),
        ('Alquiler por provincia completa', 'Teniendo una provincia completa el alquiler de los campos se duplica'),
        ('Máximo de jugadores', 'Maximo 6 jugadores'),
        ('Conexión', 'Esperando jugador'),
    ]
    finding_lines = ['# Hallazgos textuales observados', '',
        'Estos son literales estructurales fuera de imágenes. Su contenido está confirmado en los bytes; describir un efecto en un mensaje no demuestra que la lógica siempre lo ejecute así.', '']
    for label, expected in findings:
        matches = [r for r in literals if r['text'] == expected]
        for r in matches:
            finding_lines += [f"- **{label}**, offset `{r['offset_hex']}`, literal `{r['id']}`: {json.dumps(r['text'], ensure_ascii=False)}"]
    finding_lines += ['', '## Pistas de estructura y datos', '',
        '- Se observan nombres de formularios `frm_main`, `frm_nuevo_multi`, `frm_nuevo_solo`, `frm_compra`, `frm_alquiler`, `frm_tarjeta`, `frm_vendera`, `frm_carcel`, `frm_op`, `frm_dados`, `frm_prop` y `frm_sobre` en el catálogo ASCII. Son nombres del artefacto, no código fuente recuperado.',
        '- Se observan textos Cliente/Servidor y componentes Winsock. No se ensayó una conexión ni se afirma que el modo de red funcione.',
        '- El literal que menciona `5%` se refiere a una tarjeta de cédulas hipotecarias que paga $500, no a una tasa del banco aplicable a las hipotecas.',
        '- No aparece `35000` como texto ni una descripción explícita del capital inicial en los candidatos estructurales. Esto no establece ausencia del valor: los importes de la lógica pueden ser constantes binarias.',
        '- Los textos de hipotecar y levantar hipoteca no incluyen una tasa del 10% en el propio literal. La tasa debe verificarse siguiendo código/constantes, no tomando los mensajes como una tabla numérica completa.',
        '', 'Los 78 fragmentos numéricos en literales están catalogados aparte; las constantes numéricas de instrucciones y tablas corresponden a otro tipo de evidencia.']
    (args.output/'texts-findings.md').write_text('\n'.join(finding_lines)+'\n')
    print(json.dumps({**{k:summary[k] for k in ['source_bytes','records','distinct_observed_ranges','counts_by_encoding','counts_by_method','counts_by_category','records_overlapping_images']},'readable_records':len(readable)}, ensure_ascii=False))


if __name__ == '__main__':
    main()
