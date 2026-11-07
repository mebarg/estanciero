"""Read-only PE/import and numeric-operand inventory for the supplied VB6 EXE.

No executable is launched. Requires Python 3 and GNU objdump, no Python packages.
The linear disassembly of .text is NOT accepted as proof that all of .text is code.
Native candidates are separately bounded to the corridor after VB form metadata,
with prologue/direct-flow candidates distinguished from other decoded bytes.
"""
from pathlib import Path
import argparse
import bisect
import collections
import datetime
import gzip
import hashlib
import json
import math
import re
import struct
import subprocess


def audit(source, out):
    data = source.read_bytes()
    if data[:2] != b'MZ':
        raise ValueError('Expected DOS/PE header')
    u16 = lambda at: struct.unpack_from('<H', data, at)[0]
    u32 = lambda at: struct.unpack_from('<I', data, at)[0]
    pe = u32(0x3c)
    if data[pe:pe + 4] != b'PE\0\0':
        raise ValueError('Missing PE signature')
    coff, optional = pe + 4, pe + 24
    if u16(optional) != 0x10b:
        raise ValueError('This parser handles PE32, not PE32+')
    image_base = u32(optional + 28)
    sections = []
    section_table = optional + u16(coff + 16)
    for i in range(u16(coff + 2)):
        at = section_table + i * 40
        section = dict(name=data[at:at + 8].rstrip(b'\0').decode('ascii'),
                       virtual_size=u32(at + 8), rva=u32(at + 12),
                       raw_size=u32(at + 16), file_offset=u32(at + 20),
                       characteristics=f'0x{u32(at + 36):08x}')
        sections.append(section)

    def va_offset(va, size=1):
        rva = va - image_base
        if 0 <= rva < u32(optional + 60) and rva + size <= len(data):
            return rva
        matches = [s for s in sections if s['rva'] <= rva and
                   rva + size <= s['rva'] + s['raw_size']]
        if len(matches) != 1:
            return None
        offset = matches[0]['file_offset'] + rva - matches[0]['rva']
        return offset if offset + size <= len(data) else None

    def cstring_rva(rva):
        at = va_offset(image_base + rva)
        if at is None:
            raise ValueError('Unmapped string RVA')
        return data[at:data.index(b'\0', at)].decode('ascii', 'replace')

    directory_names = ['export', 'import', 'resource', 'exception', 'security', 'relocation',
                       'debug', 'architecture', 'globalptr', 'tls', 'load_config', 'bound_import',
                       'iat', 'delay_import', 'clr', 'reserved']
    directories = [dict(index=i, name=directory_names[i], rva=u32(optional + 96 + i * 8),
                        size=u32(optional + 100 + i * 8))
                   for i in range(min(u32(optional + 92), 16))]
    imports = []
    imp = directories[1]
    at = va_offset(image_base + imp['rva'], 20)
    while at is not None and at + 20 <= len(data):
        oft, timestamp, chain, name_rva, ft = struct.unpack_from('<5I', data, at)
        if not any((oft, timestamp, chain, name_rva, ft)):
            break
        entries = []
        lookup = va_offset(image_base + (oft or ft), 4)
        if lookup is None:
            raise ValueError('Unmapped import lookup')
        index = 0
        while (value := u32(lookup + index * 4)):
            entry = {'index': index, 'lookup_file_offset': lookup + index * 4,
                     'lookup_value': f'0x{value:08x}', 'iat_va': f'0x{image_base + ft + index * 4:08x}'}
            if value & 0x80000000:
                entry['ordinal'] = value & 0xffff
            else:
                name_at = va_offset(image_base + value, 3)
                if name_at is not None:
                    entry['hint'] = u16(name_at)
                    entry['name'] = data[name_at + 2:data.index(b'\0', name_at + 2)].decode('ascii', 'replace')
                else:
                    entry['unresolved_bound_value'] = True
            entries.append(entry)
            index += 1
            if index > 4096:
                raise ValueError('Import budget exceeded')
        imports.append(dict(dll=cstring_rva(name_rva), descriptor_file_offset=at,
                            original_first_thunk_rva=oft, first_thunk_rva=ft,
                            timestamp=timestamp, entries=entries))
        at += 20

    digest = hashlib.sha256(data).hexdigest()
    pe_metadata = dict(source=str(source), sha256=digest, bytes=len(data), machine=f'0x{u16(coff):04x}',
                       format='PE32', linker=f'{data[optional + 2]}.{data[optional + 3]}',
                       coff_timestamp=u32(coff + 4),
                       coff_timestamp_utc=datetime.datetime.fromtimestamp(u32(coff + 4), datetime.timezone.utc).isoformat(),
                       image_base=f'0x{image_base:08x}', entrypoint_va=f'0x{image_base + u32(optional + 16):08x}',
                       entrypoint_file_offset=va_offset(image_base + u32(optional + 16)),
                       image_size=u32(optional + 56), subsystem=u16(optional + 68),
                       coff_characteristics=f'0x{u16(coff + 18):04x}',
                       dll_characteristics=f'0x{u16(optional + 70):04x}',
                       sections=sections, directories=directories, imports=imports,
                       limits=['Static file metadata, not observed Windows loading.',
                               'The executable section includes image/form resources and string pools.'])
    pe_metadata['late_bound_api_declarations'] = [
        {'dll':'gdi32','name':'CreatePolygonRgn','descriptor_va':'0x470bb0','resolver_stub_va':'0x470bc8'},
        {'dll':'gdi32','name':'PtInRegion','descriptor_va':'0x470bf4','resolver_stub_va':'0x470c0c'},
        {'dll':'kernel32','name':'Sleep','descriptor_va':'0x470c44','resolver_stub_va':'0x470c5c'}]

    command = ['objdump', '-d', '-Mintel', '--insn-width=16', str(source)]
    result = subprocess.run(command, check=True, capture_output=True, text=True)
    out.mkdir(parents=True, exist_ok=True)
    (out / 'numbers-objdump.txt.gz').write_bytes(gzip.compress(result.stdout.encode(), mtime=0))
    (out / 'numbers-objdump.txt').unlink(missing_ok=True)
    instructions = {}
    def parse_disassembly(output):
        for line in output.splitlines():
            fields = line.split('\t')
            if len(fields) < 3 or not re.fullmatch(r'\s*[0-9a-f]+:', fields[0]):
                continue
            va = int(fields[0].strip()[:-1], 16)
            raw = bytes.fromhex(fields[1])
            asm = fields[2].strip()
            if not asm or not raw:
                continue
            mnemonic, _, operands = asm.partition(' ')
            instructions[va] = dict(va=f'0x{va:08x}', file_offset=va_offset(va, len(raw)),
                                    bytes=raw.hex(), mnemonic=mnemonic,
                                    operands=operands.strip(), assembly=asm,
                                    byte_length=len(raw))
    parse_disassembly(result.stdout)

    # Target-specific bounds, anchored in bytes and the first native VB prologue.
    # Everything before 0x475c10, except runtime startup, remains data/unclassified.
    start, end = 0x475c10, 0x48fec9
    if digest != 'db15b971d8d6dc9411ebf48fc3943bdc2f575929c9a67ce143b3a949ec2c0daf':
        raise ValueError('Known native corridor applies only to the analyzed 0.45 hash')
    prologues = [image_base + m.start() for m in re.finditer(b'\x55\x8b\xec\x83\xec', data)
                 if start <= image_base + m.start() < end]
    extra_ranges = [(0x4018c0, 0x4018d2), (0x470bc8, 0x470be1),
                    (0x470c0c, 0x470c25), (0x470c5c, 0x470c75)]
    # These three late-bound API helpers are interleaved with VB metadata.
    # Decode from exact observed entrypoints rather than the misleading global
    # linear alignment, which starts their first instruction one byte too early.
    for low, high in extra_ranges:
        for va in list(instructions):
            if low <= va < high:
                del instructions[va]
        decoded = subprocess.run(['objdump', '-d', '-Mintel', '--insn-width=16',
                                  f'--start-address={hex(low)}', f'--stop-address={hex(high)}',
                                  str(source)], check=True, capture_output=True, text=True)
        parse_disassembly(decoded.stdout)
    inventory_path = out / 'procedures-ghidra.json'
    ghidra_evidence = None
    ghidra_entries = []
    if inventory_path.exists():
        inventory = json.loads(inventory_path.read_text())
        if inventory.get('subject', {}).get('digest', {}).get('sha256') == digest:
            ghidra_evidence = inventory.get('evidence_id')
            ghidra_entries = [(int(p['address'], 16), p['value'])
                              for p in inventory['normalized_result']
                              if p['address'].startswith('0x') and
                              not p['procedure']['external'] and not p['procedure']['thunk']]
    body_ranges = []
    body_index_path = out / 'procedures-index.json'
    if body_index_path.exists():
        body_index = json.loads(body_index_path.read_text())
        if body_index.get('source_sha256') == digest:
            for proc in body_index['records']:
                for bounds in proc.get('body', {}).get('ranges', []):
                    low, high = int(bounds['start'], 16), int(bounds['end'], 16) + 1
                    body_ranges.append((low, high, proc['address'], proc['name'], proc.get('info_evidence_id')))
                    decoded = subprocess.run(['objdump','-d','-Mintel','--insn-width=16',
                                              f'--start-address={hex(low)}',f'--stop-address={hex(high)}',str(source)],
                                             check=True,capture_output=True,text=True)
                    parse_disassembly(decoded.stdout)
    seeds = sorted(set(prologues + [0x4832e0, image_base + u32(optional + 16), 0x4018c0] +
                       [va for va, _ in ghidra_entries] + [a for a, _ in extra_ranges]))
    def selected_va(va):
        return start <= va < end or any(a <= va < b for a, b in extra_ranges) or any(a<=va<b for a,b,*_ in body_ranges)
    reachable = set()
    queue = list(seeds)
    unresolved = []
    while queue:
        cursor = queue.pop()
        while cursor not in reachable and cursor in instructions:
            if not selected_va(cursor):
                break
            reachable.add(cursor)
            inst = instructions[cursor]
            mnemonic, operand = inst['mnemonic'], inst['operands']
            target = re.fullmatch(r'0x([0-9a-f]+)', operand)
            target = int(target[1], 16) if target else None
            if mnemonic.startswith('ret') or mnemonic in ('int3', 'hlt', 'ud2', '(bad)'):
                break
            if mnemonic in ('call', 'jmp') or mnemonic.startswith('j') or mnemonic.startswith('loop'):
                if target is not None:
                    queue.append(target)
                elif mnemonic in ('call', 'jmp'):
                    unresolved.append({'va': inst['va'], 'assembly': inst['assembly']})
                if mnemonic == 'jmp':
                    break
            cursor += inst['byte_length']

    def float_candidate(value, bits=32):
        raw = value.to_bytes(bits // 8, 'little', signed=False)
        number = struct.unpack('<f' if bits == 32 else '<d', raw)[0]
        return number if math.isfinite(number) and 1e-12 <= abs(number) <= 1e12 else None

    operands_inventory, float_reads = [], []
    selected = [inst for va, inst in sorted(instructions.items()) if selected_va(va)]
    ghidra_entries.sort()
    entry_addresses = [a for a, _ in ghidra_entries]
    for inst in selected:
        va = int(inst['va'], 16)
        owners = [dict(entry=entry,name=name,info_evidence_id=evidence)
                  for low,high,entry,name,evidence in body_ranges if low<=va and va+inst['byte_length']<=high]
        confidence = 'ghidra-defined-body-instruction-candidate' if owners else ('prologue-or-direct-flow-candidate' if va in reachable else 'other-linear-decode-in-native-corridor')
        # Cap certainty at candidate: no decoder can establish runtime reachability here.
        inst['classification'] = confidence
        inst['ghidra_body_owners'] = owners
        nearest = bisect.bisect_right(entry_addresses, va) - 1
        anchor = None
        if nearest >= 0:
            anchor = dict(address=hex(ghidra_entries[nearest][0]), name=ghidra_entries[nearest][1],
                          role='preceding Ghidra-observed entry; not a verified containment/body range')
            inst['preceding_ghidra_entry'] = anchor
        for operand_index, operand in enumerate(inst['operands'].split(',')):
            operand = operand.strip()
            for match in re.finditer(r'(?<![\w])(?:0x[0-9a-f]+|\d+)(?![\w])', operand):
                token = match[0]
                value = int(token, 16 if token.startswith('0x') else 10)
                inside_address = '[' in operand
                direct_target = inst['mnemonic'] in ('call', 'jmp') or inst['mnemonic'].startswith(('j', 'loop'))
                if inside_address:
                    kind = 'address-displacement-or-scale'
                elif direct_target:
                    kind = 'control-flow-target'
                elif operand.startswith(('ds:', 'cs:', 'fs:', 'gs:')):
                    kind = 'absolute-memory-reference'
                elif va_offset(value) is not None:
                    kind = 'mapped-image-address'
                else:
                    kind = 'immediate-bits-or-integer'
                record = dict(va=inst['va'], file_offset=inst['file_offset'], instruction=inst['assembly'],
                              classification=confidence, operand_index=operand_index, token=token,
                              unsigned=value, kind=kind)
                if anchor:
                    record['preceding_ghidra_entry'] = anchor
                record['ghidra_body_owners'] = owners
                if kind == 'immediate-bits-or-integer' and 0 <= value < 2 ** 32:
                    f32 = float_candidate(value)
                    if f32 is not None:
                        record['float32_candidate'] = f32
                    if value >= 2 ** 31:
                        record['signed32'] = value - 2 ** 32
                operands_inventory.append(record)
        if inst['mnemonic'].startswith('f'):
            memory = re.search(r'(DWORD|QWORD) PTR (?:ds:)?0x([0-9a-f]+)', inst['operands'])
            if memory:
                width = 4 if memory[1] == 'DWORD' else 8
                address = int(memory[2], 16)
                offset = va_offset(address, width)
                if offset is not None:
                    payload = data[offset:offset + width]
                    value = struct.unpack('<f' if width == 4 else '<d', payload)[0]
                    float_reads.append(dict(instruction_va=inst['va'], instruction=inst['assembly'],
                                            classification=confidence, data_va=f'0x{address:08x}',
                                            data_file_offset=offset, bytes=payload.hex(), width=width,
                                            ieee754_value=value if math.isfinite(value) else str(value),
                                            caution='A floating-point operand is not automatically an economic amount.'))

    # Ranking aids inspection, it does not assign currency semantics.
    plausible = [r for r in operands_inventory if r['kind'] == 'immediate-bits-or-integer' and
                 ('float32_candidate' in r and 100 <= abs(r['float32_candidate']) <= 1000000 or
                  r['unsigned'] in [100,200,300,400,500,800,1000,1500,1900,2000,2500,3000,3500,3800,4000,5000,10000,35000])]
    summary = dict(source=str(source), sha256=digest, command=command,
                   coverage={'file_bytes': len(data),
                             'linear_disassembly_instruction_records_all_text_section': len(instructions),
                             'selected_native_corridor': {'start_va': hex(start), 'end_va_exclusive': hex(end),
                                                          'selection': 'after final VB metadata and before import directory'},
                             'native_candidate_instruction_records': len(selected),
                             'prologue_seeds': len(prologues), 'flow_candidate_instruction_records': len(reachable),
                             'extra_exact_decode_ranges': [[hex(a), hex(b)] for a,b in extra_ranges],
                             'ghidra_non_thunk_entry_anchors': len(ghidra_entries),
                             'ghidra_body_ranges':len(body_ranges),
                             'instruction_records_inside_ghidra_bodies':sum(bool(r['ghidra_body_owners']) for r in selected),
                             'numeric_operands_inside_ghidra_bodies':sum(bool(r['ghidra_body_owners']) for r in operands_inventory),
                             'all_numeric_operands_in_selected_records': len(operands_inventory),
                             'floating_point_memory_reads': len(float_reads),
                             'unresolved_indirect_calls_or_jumps': len(unresolved)},
                   ghidra_procedure_inventory_evidence=ghidra_evidence,
                   limitations=['No target code was executed.',
                                'All numeric operands in the bounded native corridor are retained, including displacements and addresses.',
                                'Decoded instruction candidates are not guaranteed to be executed or reachable.',
                                'Prologue seeds/direct-flow traversal miss indirect dispatch destinations and can include cleanup paths.',
                                'Bytes decoded outside the selected native corridor are not called code; .text contains substantial image/form/string data.',
                                'Immediate float interpretations are bit-pattern candidates until data-flow or initialization establishes their type.',
                                'Economic semantics require a use-site trace; frequency/size alone does not establish a price or rule.',
                                'The 42-board-record initialization is interpreted separately by the main investigation.'])
    def write_json(name, obj, compressed=False):
        payload=(json.dumps(obj, indent=2, ensure_ascii=False) + '\n').encode()
        if compressed:
            (out/(name+'.gz')).write_bytes(gzip.compress(payload,mtime=0))
            (out/name).unlink(missing_ok=True)
        else:
            (out/name).write_bytes(payload)
    write_json('pe-metadata.json', pe_metadata)
    write_json('numbers-summary.json', summary)
    write_json('numbers-operands.json', operands_inventory, True)
    write_json('numbers-body-operands.json', [r for r in operands_inventory if r['ghidra_body_owners']], True)
    write_json('numbers-unclassified-operands.json', [r for r in operands_inventory if not r['ghidra_body_owners']], True)
    write_json('numbers-float-reads.json', float_reads)
    write_json('numbers-monetary-candidates.json', plausible)
    write_json('numbers-native-instructions.json', selected, True)
    write_json('numbers-flow-seeds.json', [hex(n) for n in seeds])
    write_json('numbers-indirect-flow.json', unresolved)
    fields = ['va','file_offset','classification','kind','unsigned','float32_candidate','instruction']
    tsv='\t'.join(fields)+'\n'+''.join('\t'.join(str(row.get(key,'' )).replace('\t',' ') for key in fields)+'\n' for row in operands_inventory)
    (out/'numbers-operands.tsv.gz').write_bytes(gzip.compress(tsv.encode(),mtime=0))
    (out/'numbers-operands.tsv').unlink(missing_ok=True)
    by={int(r['va'],16):i for i,r in enumerate(selected)}
    focus_specs=[
        ('initial_player_cash',0x479a88,'float32 35000 written to player record +0x8'),
        ('mortgage_redemption',0x478f81,'property +0x68 / 10.0 then added to principal and compared to player cash'),
        ('mortgage_redemption_alternate',0x47902f,'division by static 10.0 in the same procedure'),
        ('mortgage_interest',0x479158,'division by static 10.0 in the same procedure'),
        ('jail_affordability_check',0x47b801,'float32 1000 passed to helper 0x4878c0; this helper tests affordability, not an observed debit'),
        ('cattle_prize',0x47ad33,'fadd static float32 2500.0'),
        ('salary',0x4891cb,'fadd static float32 5000.0'),
        ('repair_seed_rates',0x489452,'integer 4000 and 800 for card case 0x10'),
        ('repair_property_rates',0x489466,'integer 2500 and 500 for card case 0x0a'),
        ('birthday_credit',0x482aef,'fadd static float32 200.0'),
        ('birthday_debit',0x482b3e,'fsub the same static float32 200.0'),
        ('card_fixed_credit',0x482c2f,'fadd static float32 500.0'),
        ('sale_half_value_1',0x4803e9,'division by float32 2.0'),
        ('sale_half_value_2',0x4804fb,'division by float32 2.0'),
        ('dice_range',0x48863f,'multiply float32 6.0 then add 1.0'),
        ('card_range',0x482166,'multiply float32 16.0 then add 1.0')]
    focus=[]
    for name,va,observation in focus_specs:
        i=by[va]
        focus.append(dict(name=name,address=hex(va),file_offset=selected[i]['file_offset'],observation=observation,
                          classification='static observation; semantic roles require procedure context',
                          ghidra_body_owners=selected[i]['ghidra_body_owners'],
                          context=[{k:r[k] for k in ['va','file_offset','bytes','assembly']} for r in selected[max(0,i-8):i+10]]))
    write_json('numbers-focus.json',dict(sourceSha256=digest,records=focus))
    print(json.dumps(summary['coverage'], indent=2))


if __name__ == '__main__':
    parser = argparse.ArgumentParser()
    parser.add_argument('source', nargs='?', default='recovered/0.45/estanciero.exe', type=Path)
    parser.add_argument('output', nargs='?', default='recovered/0.45/audit', type=Path)
    args = parser.parse_args()
    audit(args.source, args.output)
