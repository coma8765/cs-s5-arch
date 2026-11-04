"""Check observed end state, measured instruction schedules, and delivered traces."""
from pathlib import Path
import csv
import json

root = Path(__file__).resolve().parents[1]
analysis = json.loads((root / 'evidence/analysis.json').read_text())
for name, expected_cycles in [('test', 53), ('variant2', 56), ('variant2_opt', 56)]:
    rows = [{k: int(v, 16) for k, v in row.items()}
            for row in csv.DictReader((root / 'build' / name / 'cycles.csv').open())]
    result = next(row for row in rows if row['x31'] == sum(range(1, 9)) + 1)
    assert result['cycle'] == expected_cycles + 1, (name, result['cycle'])
    assert result['x20'] == 0, name
    assert result['x1'] == (0x80000060 if name == 'test' else 0x8000004c), name
    assert analysis[name]['cycles'] == expected_cycles, name
    assert (root / 'build' / name / 'trace.vcd').stat().st_size > 10000
    for item in analysis[name]['instructions']:
        if 'execute' in item:
            assert not item['discarded'], (name, item)
            assert item['execute'] <= item['complete'] <= expected_cycles
    print(name, 'PASS: x31=37, pointer/count, completion time, pipeline consistency')

def first(name, pc):
    return next(v for v in analysis[name]['instructions'] if v['pc'] == pc)

assert first('test', 0x80000010)['stages'] == {'5': 'F', '6': 'ID', '7': 'D', '8': 'C', '9': 'C', '10': 'AL'}
assert first('test', 0x8000001c)['execute'] == 15
assert first('test', 0x80000004)['execute'] == 5
assert first('variant2', 0x8000001c)['stages'] == {'8': 'F', '9': 'ID', '10': 'D', '11': 'AL'}
assert analysis['variant2']['raw_conflict_cycles'] == analysis['variant2_opt']['raw_conflict_cycles'] == 0
print('PASS: required instruction addresses and measured stage numbers')

# The fully unrolled program executes nineteen consecutive instructions with no gaps.
unrolled = analysis['variant2_unrolled']
assert unrolled['cycles'] == 22 and unrolled['result_visible_cycle'] == 23
assert unrolled['raw_conflict_cycles'] == 0 and unrolled['flush_cycles'] == []
executed = [v for v in unrolled['instructions'] if 'execute' in v]
assert [v['pc'] for v in executed] == list(range(0x80000000, 0x8000004c, 4))
assert [v['execute'] for v in executed] == list(range(4, 23))
assert all((int(v['word'], 16) & 0x7f) not in (0x63, 0x67, 0x6f) for v in executed)
rows = [{k: int(v, 16) for k, v in row.items()}
        for row in csv.DictReader((root / 'build/variant2_unrolled/cycles.csv').open())]
assert rows[-1]['cycle'] == 23 and rows[-1]['x31'] == 37
assert rows[-1]['x1'] == 0x80000050
loads = [row['wb1_rd'] for row in rows if not row['reset'] and not row['hold'] and row['wb1_done']]
assert loads == list(range(1, 9)), loads
assert 'LR2_STOP_ON_EBREAK cycle=23 x31=37' in (root / 'build/variant2_unrolled/run.log').read_text()
assert first('test', 0x80000018)['stages']['9'] == 'Q'
assert first('test', 0x80000018)['stages']['10'] == 'Q'
print('variant2_unrolled PASS: eight actual loads, nineteen consecutive operations, no branches, x31=37, EBREAK stop')
