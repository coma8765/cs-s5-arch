#!/usr/bin/env python3
"""Run the same generated Nios II system with native Icarus Verilog."""
import argparse, pathlib, shutil, subprocess
p=argparse.ArgumentParser()
p.add_argument('--quartus-root',type=pathlib.Path,default=pathlib.Path(__file__).resolve().parents[1]/'simulation/vendor/quartus13')
a=p.parse_args()
root=pathlib.Path(__file__).resolve().parents[1]
sim=root/'nios/simulation';syn=root/'nios/synthesis/submodules'
lib=a.quartus_root/'eda/sim_lib'
out=root/'simulation/native';out.mkdir(exist_ok=True)
files=[root/'simulation/tb_sopc01.sv',root/'simulation/native_trace.sv',sim/'nios.v']
files+=sorted((sim/'submodules').glob('*.v'))
files += [f for f in sorted(syn.iterdir()) if f.suffix in ('.v','.sv') and not f.name.startswith(('nios_nios2_qsys_0','nios_onchip_memory2_0'))]
files += [lib/n for n in ('altera_mf.v','altera_primitives.v','220model.v','sgate.v','cycloneive_atoms.v')]
for f in files:
    if not f.exists(): raise FileNotFoundError(f)
shutil.copy2(root/'software/hello/mem_init/nios_onchip_memory2_0.hex',out)
for f in (sim/'submodules').iterdir():
    if f.name.startswith('nios_nios2_qsys_0') and f.suffix in ('.hex','.dat'): shutil.copy2(f,out)
cmd=['iverilog','-g2012','-gno-assertions','-s','tb_sopc01','-s','native_trace','-o',str(out/'test.vvp'),*map(str,files)]
with (out/'compile.log').open('w') as log:
    subprocess.run(cmd,stdout=log,stderr=subprocess.STDOUT,check=True)
with (out/'run.log').open('w') as log:
    subprocess.run(['vvp','-i','test.vvp'],cwd=out,stdout=log,stderr=subprocess.STDOUT,check=True)
result=(out/'run.log').read_text(encoding='latin1')
if 'LAB_SIMULATION_PASS: 70 output bytes verified' not in result:
    raise RuntimeError('UART test did not pass; inspect '+str(out/'run.log'))
print(result.replace('\x00','').replace('\x7f','[7F]').replace('\xff','[FF]'))
