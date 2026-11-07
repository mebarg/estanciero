"""Lectura estática del inicializador nativo del EXE 0.45.

Interpreta sólo asignaciones de constantes y copias de cadenas de una función
sin saltos. No carga ni ejecuta el programa. Falla ante instrucciones no cubiertas.
"""
from pathlib import Path
import csv
import hashlib
import json
import re
import struct
import subprocess

SOURCE = Path('recovered/0.45/estanciero.exe')
DEST = Path('recovered/0.45/audit')
START, END, BASE, STRIDE = 0x4832e0, 0x486c0e, 0x400000, 116


def extract():
    data = SOURCE.read_bytes()
    digest = hashlib.sha256(data).hexdigest()
    if digest != 'db15b971d8d6dc9411ebf48fc3943bdc2f575929c9a67ce143b3a949ec2c0daf':
        raise ValueError('Se requiere el EXE 0.45 analizado')
    output = subprocess.check_output(['objdump', '-d', '-Mintel', f'--start-address={START}', f'--stop-address={END}', str(SOURCE)], text=True)
    instructions = []
    for line in output.splitlines():
        match = re.match(r'^\s*([0-9a-f]+):\t([0-9a-f ]+)\t(.+)$', line)
        if match:
            instructions.append((int(match[1], 16), match[3].strip(), bytes.fromhex(match[2])))
    registers = {}
    writes = []
    memory = {}
    strings = {}
    count = 0

    def pointer(expression):
        match = re.fullmatch(r'([a-z]+)(?:\+(0x[0-9a-f]+))?', expression)
        if not match:
            raise ValueError(f'Expresión de dirección desconocida: {expression}')
        value = registers.get(match[1])
        if not isinstance(value, tuple):
            raise ValueError(f'Registro sin puntero: {expression} = {value}')
        return value[0], value[1] + int(match[2] or '0', 16)

    def source(operand):
        if operand in registers:
            return registers[operand]
        match = re.fullmatch(r'(?:DWORD PTR )?ds:(0x[0-9a-f]+)', operand)
        if match:
            address = int(match[1], 16)
            return {0x491034: ('board', 0), 0x491050: ('cards', 0), 0x401130: ('strcopy', 0)}[address]
        if operand.startswith('0x'):
            return int(operand, 16)
        raise ValueError(f'Operando no admitido: {operand}')

    def read_text(address):
        offset = address - BASE
        length = struct.unpack_from('<I', data, offset - 4)[0]
        if length > 10000 or length % 2 or data[offset+length:offset+length+2] != b'\0\0':
            raise ValueError(f'BSTR inválido: {hex(address)}')
        return data[offset:offset+length].decode('utf-16-le'), offset, length

    for address, instruction, raw in instructions:
        count += 1
        op, _, operands = instruction.partition(' ')
        operands = operands.strip()
        if op in ['push', 'pop', 'ret']:
            continue
        if op == 'mov':
            left, right = operands.split(',', 1)
            value = source(right)
            match = re.fullmatch(r'(WORD|DWORD) PTR \[(.+)\]', left)
            if match:
                table, offset = pointer(match[2])
                if not isinstance(value, int):
                    raise ValueError('Se intentó escribir un puntero como un número')
                record = {'address': hex(address), 'fileOffset': address-BASE, 'instruction': instruction,
                          'table': table, 'destinationOffset': offset, 'width': 2 if match[1]=='WORD' else 4,
                          'rawInteger': value, 'instructionHex': raw.hex()}
                if record['width'] == 4:
                    record['float32'] = struct.unpack('<f', struct.pack('<I', value))[0]
                writes.append(record)
                memory[(table, offset)] = record
            else:
                registers[left] = value
        elif op == 'lea':
            left, right = operands.split(',', 1)
            registers[left] = pointer(right[1:-1])
        elif op == 'add':
            left, right = operands.split(',', 1)
            value = registers[left]
            if not isinstance(value, tuple):
                raise ValueError('Suma no simbólica')
            registers[left] = value[0], value[1] + int(right, 16)
        elif op == 'call':
            if operands != 'esi' or registers['esi'] != ('strcopy', 0):
                raise ValueError(f'Llamada no admitida: {instruction}')
            table, offset = registers['ecx']
            text, text_offset, length = read_text(registers['edx'])
            strings[(table, offset)] = {'text': text, 'sourceOffset': text_offset, 'sourceBytes': length,
                                       'assignmentAddress': hex(address), 'destinationOffset': offset,
                                       'table': table}
            for register in ['eax', 'ecx', 'edx']:
                registers.pop(register, None)
        else:
            raise ValueError(f'Instrucción no soportada: {hex(address)} {instruction}')

    def number(base, field):
        value = memory.get(('board', base+field))
        return value.get('float32', value['rawInteger']) if value else None

    def text(base, field):
        return strings.get(('board', base+field), {}).get('text')

    records = []
    for index in range(42):
        base = index * STRIDE
        record = {'index': index, 'recordOffset': base, 'id': memory[('board', base)]['rawInteger'],
                  'typeText': text(base, 4), 'name': text(base, 8), 'zoneText': text(base, 12),
                  'priceOrAmount': number(base, 16), 'rents': [number(base, off) for off in range(20, 44, 4)],
                  'houseCost': number(base, 44), 'estateExtraCost': number(base, 48),
                  'pieceX': [number(base, off) for off in range(52, 76, 4)],
                  'pieceY': [number(base, off) for off in range(76, 100, 4)],
                  'mortgage': number(base, 104), 'siblingIndicesText': text(base, 112),
                  'unclassifiedOffsets': [field for field in [2, 100, 108] if ('board', base+field) in memory or ('board', base+field) in strings]}
        record['fieldEvidence'] = {str(off-base): val for (table, off), val in memory.items() if table=='board' and base<=off<base+STRIDE}
        record['stringEvidence'] = {str(off-base): val for (table, off), val in strings.items() if table=='board' and base<=off<base+STRIDE}
        records.append(record)
    assert [r['id'] for r in records] == list(range(42))
    card_texts = [strings[('cards', i*4)]['text'] for i in range(32)]
    previous = json.loads(Path('recovered/0.45/cards.json').read_text())['cards']
    assert card_texts == [r['text'] for r in previous]
    DEST.mkdir(parents=True, exist_ok=True)
    manifest = {'source': str(SOURCE), 'sha256': digest, 'method': 'bounded-static-constant-assignment-parser',
                'scope': {'function': hex(START), 'endExclusive': hex(END), 'instructions': count, 'recordSize': STRIDE, 'records': 42},
                'limitations': ['No target execution. External calls are represented only as literal string assignments.',
                                'Unassigned fields are null, not assumed zero.',
                                'Field meanings derived from use sites and comparison with known cards.'],
                'records': records, 'assignments': writes, 'stringAssignments': list(strings.values())}
    (DEST/'board-data.json').write_text(json.dumps(manifest, ensure_ascii=False, indent=2)+'\n')
    (DEST/'initialization.asm').write_text(output)
    with (DEST/'board-data.tsv').open('w') as f:
        columns=['index','name','zoneText','typeText','priceOrAmount','mortgage','houseCost','estateExtraCost','rents','siblingIndicesText']
        writer=csv.DictWriter(f,fieldnames=columns,delimiter='\t');writer.writeheader()
        for record in records:
            writer.writerow({key: json.dumps(record[key],ensure_ascii=False) if isinstance(record[key], list) else record[key] for key in columns})
    print(f'{count} instrucciones leídas: {len(writes)} asignaciones numéricas y {len(strings)} asignaciones de texto.')
    for record in records:
        print(record['index'],record['typeText'],record['name'],record['zoneText'],record['priceOrAmount'],record['rents'],record['mortgage'])


if __name__ == '__main__':
    extract()
