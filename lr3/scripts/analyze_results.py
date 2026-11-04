"""Normalize PCLAB exports; preserve every raw RTF and disclose label defects."""
from pathlib import Path
import csv
import json
import re
import statistics
import subprocess
from PIL import Image

ROOT = Path(__file__).resolve().parents[1]
NATIVE = ROOT / 'evidence/native'
OUT = ROOT / 'output/data'
OUT.mkdir(parents=True, exist_ok=True)
summary = {}

def save_csv(name, header, rows):
    with (OUT / f'{name}.csv').open('w', newline='', encoding='utf-8') as stream:
        writer = csv.writer(stream)
        writer.writerow(header)
        writer.writerows(rows)

def describe(rows):
    columns = list(zip(*rows))
    assert all(len(row) == len(rows[0]) for row in rows)
    assert all(v >= 0 for row in rows for v in row)
    return {
        'rows': len(rows), 'x_min': min(columns[0]), 'x_max': max(columns[0]),
        'first_row': rows[0], 'last_row': rows[-1],
        'series': [dict(min=min(c), max=max(c), mean=statistics.mean(c), median=statistics.median(c), total=sum(c)) for c in columns[1:]],
        'ratios_of_sums': [sum(columns[1]) / sum(c) for c in columns[2:]],
    }

for path in sorted(NATIVE.glob('*_Results.rtf')):
    name = path.name.removesuffix('_Results.rtf')
    text = subprocess.check_output(['textutil', '-convert', 'txt', '-stdout', str(path)]).decode('utf-8')
    (NATIVE / f'{name}_Results.txt').write_text(text, encoding='utf-8')
    raw = []
    for line in text.splitlines():
        cells = re.split(r'\s+-\s+', line.strip())
        if len(cells) < 2:
            continue
        try:
            row = [float(cell.replace(',', '.')) for cell in cells]
        except ValueError:
            continue
        raw.append(row)
    if not raw:
        raise ValueError(f'No numeric data: {path}')
    save_csv(name + '_raw_rows', ['raw_column_' + str(k) for k in range(len(raw[0]))], raw)
    note = ''
    if name == 'exp1':
        rows = raw
        header = ['stride_B', 'time_us']
    elif name == 'exp2':
        # Verified against native BMP: the 146683.529 peak belongs to red,
        # but occurs in the second numeric RTF column. RTF labels are reversed.
        rows = [[x, second, first] for x, first, second in raw]
        header = ['fragmentation_K', 'red_series_us', 'green_series_us']
        note = 'RTF column labels contradict the native graph. Numeric column 2 matches red; column 1 matches green. Manual legend maps red to list and green to array. Printed summary 3.5926326E-250 is invalid; ratio recomputed.'
    elif name in ('exp3', 'exp3_ticks'):
        assert len(raw) == 128
        first, second = raw[:64], raw[64:]
        assert [r[0] for r in first] == [r[0] for r in second]
        rows = [[a[0], a[1], b[1]] for a, b in zip(first, second)]
        unit = 'tsc' if name.endswith('ticks') else 'us'
        header = ['offset_B', 'without_prefetch_' + unit, 'with_prefetch_' + unit]
    elif name == 'exp5':
        assert len(raw) == 64
        first, second = raw[:32], raw[32:]
        assert all(a[0] == i*32768 and b[0] == i*32832 for i,(a,b) in enumerate(zip(first, second)))
        rows = [[i, a[1], b[1]] for i, (a, b) in enumerate(zip(first, second))]
        header = ['access_index', 'conflict_us', 'shifted_us']
        save_csv('exp5_addresses', ['access_index', 'conflict_offset_B', 'conflict_us', 'shifted_offset_B', 'shifted_us'], [[i, *a, *b] for i, (a,b) in enumerate(zip(first,second))])
        note = 'Normalized X is access index 0..31. Actual byte offsets differ and are preserved in exp5_addresses.csv and the original RTF/BMP.'
    elif name == 'exp6':
        assert len(raw) == 24
        radix, optimized, quick = raw[:8], raw[8:16], raw[16:]
        assert [r[0] for r in radix] == [r[0] for r in optimized] == [r[0] for r in quick]
        rows = [[q[0],q[1],r[1],o[1]] for q,r,o in zip(quick,radix,optimized)]
        header = ['elements', 'quicksort_us', 'radix_us', 'radix_optimized_us']
    else:
        raise ValueError(name)
    save_csv(name, header, rows)
    result = describe(rows)
    result['source'] = str(path.relative_to(ROOT))
    result['columns'] = header
    result['note'] = note
    result['tail'] = text.splitlines()[-8:]
    if name in ('exp3', 'exp3_ticks', 'exp5', 'exp6'):
        printed = [float(v.replace(',', '.')) for v in re.findall(r'(?:в|в )\s+([0-9]+,[0-9]+)\s+раз', '\n'.join(text.splitlines()[-8:]))]
        assert len(printed) == len(result['ratios_of_sums']), (name, printed)
        assert all(abs(a-b) < 0.00001 for a,b in zip(printed,result['ratios_of_sums'])), (name, printed, result['ratios_of_sums'])
        result['printed_ratios_verified'] = printed
    summary[name] = result
    bitmap = NATIVE / f'{name}.bmp'
    if bitmap.exists():
        Image.open(bitmap).save(OUT / f'{name}.png')

fallback = NATIVE / 'exp4_reproduced.csv'
if fallback.exists():
    with fallback.open() as stream:
        rows = [[float(v) for v in row] for row in list(csv.reader(stream))[1:]]
    with (NATIVE / 'exp4_reproduced_repeats.csv').open() as stream:
        trials = list(csv.DictReader(stream))
    assert len(rows) == 8 and len(trials) == 40
    for trial in trials:
        assert int(trial['checksum_separate']) == int(trial['checksum_interleaved']) == int(trial['expected'])
    for row in rows:
        group = [t for t in trials if int(t['streams']) == int(row[0])]
        assert len(group) == 5
        assert abs(statistics.median(float(t['separate_us']) for t in group) - row[1]) < 0.00001
        assert abs(statistics.median(float(t['interleaved_us']) for t in group) - row[2]) < 0.00001
    header = ['streams', 'separate_median_us', 'interleaved_median_us']
    save_csv('exp4', header, rows)
    summary['exp4'] = describe(rows)
    summary['exp4'].update(source='Independent Win32 implementation; NOT PCLAB', columns=header, validated_checksums=80, repeats_per_point=5)

(ROOT / 'output/measurements.json').write_text(json.dumps(summary, ensure_ascii=False, indent=2) + '\n')
for name, d in summary.items():
    print(name, 'points=', d['rows'], 'ratios=', d['ratios_of_sums'])
