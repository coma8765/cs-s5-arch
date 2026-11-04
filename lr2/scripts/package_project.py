"""Package source, measured evidence and deliverables without host build caches."""
from pathlib import Path
import hashlib
import json
import zipfile

root = Path(__file__).resolve().parents[1]
target = root / 'output/lr2_ananyev_variant2_project.zip'
files = [root / 'README.txt']
for directory in ['riscv-lab', 'scripts', 'docs', 'evidence', 'output']:
    for path in (root / directory).rglob('*'):
        rel = path.relative_to(root)
        if path.is_symlink() or not path.is_file():
            continue
        if any(part in {'.git', '.ast-index', 'node_modules', '__pycache__', 'rtl_work'} for part in rel.parts):
            continue
        if path == target or path.name.endswith('.inspect.ndjson') or path.name.startswith('sheet-'):
            continue
        if path.suffix in {'.pyc', '.zip'}:
            continue
        files.append(path)
for name in ['test', 'variant2', 'variant2_opt', 'variant2_unrolled']:
    for filename in ['cycles.csv', 'trace.vcd', 'compile.log', 'run.log']:
        files.append(root / 'build' / name / filename)
files = sorted(set(files))
manifest = {str(p.relative_to(root)): hashlib.sha256(p.read_bytes()).hexdigest() for p in files}
with zipfile.ZipFile(target, 'w', zipfile.ZIP_DEFLATED) as archive:
    for path in files:
        archive.write(path, 'lr2/' + str(path.relative_to(root)))
    archive.writestr('lr2/SHA256.json', json.dumps(manifest, ensure_ascii=False, indent=2) + '\n')
with zipfile.ZipFile(target) as archive:
    assert archive.testzip() is None
    assert 'lr2/output/pdf/lr2_ananyev_iu7_55b_variant2.pdf' in archive.namelist()
print(target)
print(f'{len(files)} files, {target.stat().st_size:,} bytes; ZIP integrity OK')
