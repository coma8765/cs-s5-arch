"""Package the report, measurements, provenance and reproducible sources."""
from pathlib import Path
import hashlib
import json
import zipfile

root = Path(__file__).resolve().parents[1]
archive = root / 'output/lr3_ananyev_iu7_55b.zip'
manifest = root / 'output/package_sha256.json'
assert (root / 'output/pdf/lr3_ananyev_iu7_55b.pdf').is_file()
files = [p for p in root.rglob('*') if p.is_file() and not ({'tmp', '__pycache__', '.git'} & set(p.relative_to(root).parts)) and p.suffix != '.zip' and p.name != '.DS_Store' and p != manifest]
checksums = {str(p.relative_to(root)): hashlib.sha256(p.read_bytes()).hexdigest() for p in sorted(files)}
manifest.write_text(json.dumps(checksums, ensure_ascii=False, indent=2) + '\n')
with zipfile.ZipFile(archive, 'w', compression=zipfile.ZIP_DEFLATED, compresslevel=9) as bundle:
    for p in sorted(files + [manifest]):
        bundle.write(p, p.relative_to(root))
with zipfile.ZipFile(archive) as bundle:
    assert bundle.testzip() is None
    print('files', len(bundle.namelist()))
print(archive)
print('bytes', archive.stat().st_size)
