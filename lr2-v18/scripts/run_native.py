"""Compile and run the supplied Taiga RTL with a simulation-only observer."""
from pathlib import Path
import json, subprocess, sys
root=Path(__file__).resolve().parents[1];taiga=root/'riscv-lab/taiga'
files=json.loads((root/'scripts/sources.json').read_text())
name=sys.argv[1] if len(sys.argv)>1 else 'test'
out=root/'build'/name;out.mkdir(parents=True,exist_ok=True)
args=['verilator','--binary','--timing','--trace','--trace-structs','--top-module','tb','-Wno-fatal','-j','4','--Mdir',str(out/'obj'),'-GHEX_FILE="'+str(root/'riscv-lab/src'/f'{name}.hex')+'"']
args += ['-I'+str(taiga/p) for p in ['lib','core','local_memory','l2_arbiter','examples/zedboard','my_tb']]
args += [str(taiga/f) for f in files]
with (out/'compile.log').open('w') as log:
 result=subprocess.run(args,cwd=taiga,stdout=log,stderr=subprocess.STDOUT)
if result.returncode:
 print((out/'compile.log').read_text()[-14000:]);sys.exit(result.returncode)
with (out/'run.log').open('w') as log:
 result=subprocess.run([str(out/'obj/Vtb')],cwd=out,stdout=log,stderr=subprocess.STDOUT)
print((out/'run.log').read_text());sys.exit(result.returncode)
