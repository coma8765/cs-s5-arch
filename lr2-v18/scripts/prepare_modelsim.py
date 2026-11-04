"""Rename VCD identifiers for ModelSim 10.1d; preserve timestamps and values byte for byte."""
from pathlib import Path
import hashlib
import json
import shutil

root = Path(__file__).resolve().parents[1]
out = root / 'evidence/modelsim'
transfer = root / 'tmp/named'
transfer.mkdir(parents=True, exist_ok=True)
manifest = {}
for name in ['test', 'variant18', 'variant18_opt']:
    original = (root / 'build' / name / 'trace.vcd').read_bytes()
    marker = b'$enddefinitions $end'
    header, body = original.split(marker, 1)
    lines = []
    for line in header.decode().splitlines():
        tokens = line.split()
        if tokens and tokens[0] in ('$scope', '$var'):
            index = 2 if tokens[0] == '$scope' else 4
            old = tokens[index]
            new = old.replace('[', '_').replace(']', '')
            line = line.replace(old, new, 1)
        lines.append(line)
    result = ('\n'.join(lines) + '\n').encode() + marker + body
    assert result.split(marker, 1)[1] == body
    filename = name + '_named.vcd'
    (out / filename).write_bytes(result)
    shutil.copy2(out / filename, transfer / filename)
    manifest[name] = {'original_vcd_sha256': hashlib.sha256(original).hexdigest(),
                      'unchanged_value_section_sha256': hashlib.sha256(body).hexdigest()}

views = json.loads((root / 'evidence/views.json').read_text())
for name, (dataset, signals, begin, end) in views.items():
    ds = dataset + '_named'
    lines = ['onerror {resume}', 'catch {dataset open ' + ds + '.wlf ' + ds + '}', 'view wave', 'delete wave *']
    for label, path in signals:
        path = path.replace('[', '_').replace(']', '')
        radix = 'unsigned' if label == 'Cycle' else 'hexadecimal'
        lines.append(f'add wave -noupdate -label {{{label}}} -radix {radix} {{{ds}:{path}}}')
    lines += ['configure wave -namecolwidth 180', 'configure wave -valuecolwidth 100',
              'configure wave -timelineunits us', 'configure wave -rowmargin 4', 'update',
              f'wave zoom range {begin}us {end}us']
    (out / (name + '.do')).write_text('\n'.join(lines) + '\n')
    shutil.copy2(out / (name + '.do'), transfer / (name + '.do'))

setup = ['file mkdir C:/user/artem/lr2-v18/evidence', 'cd C:/user/artem/lr2-v18/evidence', 'foreach f [glob D:/*.do] {file copy -force $f [file tail $f]}']
for name in ['test', 'variant18', 'variant18_opt']:
    setup += [f'file copy -force D:/{name}_named.vcd {name}_named.vcd',
              f'exec Q:/altera/13.0sp1/modelsim_ase/win32aloem/vcd2wlf.exe {name}_named.vcd {name}_named.wlf']
setup += ['do variant18.do']
(transfer / 'setup.do').write_text('\n'.join(setup) + '\n')
(out / 'vcd_import_manifest.json').write_text(json.dumps(manifest, indent=2) + '\n')
print('Renamed identifiers only; all original VCD timestamps and signal values are unchanged.')
