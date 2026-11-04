"""Independent RV32I execution check against measured Taiga instruction order."""
from pathlib import Path
import csv,json
r=Path(__file__).resolve().parents[1]
a=json.loads((r/'evidence/analysis.json').read_text())
def signed(v,bits):return v-(1<<bits) if v&(1<<(bits-1)) else v
results={}
for name in ['variant18','variant18_opt']:
 words=[int(x,16) for x in (r/'riscv-lab/src'/f'{name}.hex').read_text().split()]
 memory={0x80000000+4*i:v for i,v in enumerate(words)}
 regs=[0]*32;pc=0x80000000;sequence=[];loads=[]
 while pc!=0x80000034:
  assert len(sequence)<100
  sequence.append(pc);ins=memory[pc];op=ins&127;rd=(ins>>7)&31;f3=(ins>>12)&7;rs1=(ins>>15)&31;rs2=(ins>>20)&31;nxt=pc+4
  if op==0x17:regs[rd]=(pc+(ins&0xfffff000))&0xffffffff
  elif op==0x13 and f3==0:regs[rd]=(regs[rs1]+signed(ins>>20,12))&0xffffffff
  elif op==0x33 and f3==0:regs[rd]=(regs[rs1]+regs[rs2])&0xffffffff
  elif op==0x03 and f3==2:
   address=(regs[rs1]+signed(ins>>20,12))&0xffffffff
   assert 0x80000038<=address<0x8000005c and address%4==0
   regs[rd]=memory[address];loads.append(regs[rd])
  elif op==0x63:
   offset=signed(((ins>>31)<<12)|(((ins>>7)&1)<<11)|(((ins>>25)&63)<<5)|(((ins>>8)&15)<<1),13)
   take=(regs[rs1]!=regs[rs2]) if f3==1 else (regs[rs1]<regs[rs2]) if f3==6 else None
   assert take is not None
   if take:nxt=pc+offset
  else:raise AssertionError(hex(ins))
  regs[0]=0;pc=nxt
 measured=[x['pc'] for x in a[name]['instructions'] if 'execute' in x]
 assert sequence==measured,(name,'retired control flow differs')
 assert loads==[1,2,3,4,8,6,7,5,4]
 assert regs[31]==max(loads)==8 and regs[1]==regs[20]==0x8000005c
 rows=[{k:int(v,16) for k,v in d.items()} for d in csv.DictReader((r/'build'/name/'cycles.csv').open())]
 useful=[d for d in rows if 1<=d['cycle']<=a[name]['cycles'] and not d['reset'] and not d['hold']]
 measured_loads=[d['wb1_rd'] for d in useful if d['wb1_done']]
 assert measured_loads==loads
 end=useful[-1]
 assert end['issue_pc']==0x80000030 and end['branch_new_request'] and end['x1']==end['x20']==regs[1] and end['x31']==8
 bne=[d for d in useful if d['branch_new_request'] and d['issue_pc']==0x80000030]
 assert len(bne)==4 and [d['x1'] for d in bne]==[0x80000044,0x8000004c,0x80000054,0x8000005c]
 assert all(d['x31']==8 for d in rows if d['cycle']>=a[name]['cycles'])
 results[name]={'instructions_checked':len(sequence),'loaded_words':loads,'loop_iterations':4,'cycles':a[name]['cycles'],'final_x31':regs[31],'final_x1':hex(regs[1]),'checks':'passed'}
assert a['variant18']['cycles']==60 and a['variant18_opt']['cycles']==56
assert a['variant18']['raw_conflict_cycles']==4 and a['variant18_opt']['raw_conflict_cycles']==0
(r/'evidence/verification.json').write_text(json.dumps(results,indent=2)+'\n')
print(json.dumps(results,indent=2))
