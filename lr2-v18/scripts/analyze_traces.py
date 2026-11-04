"""Derive pipeline occupancy from sampled RTL signals, without an ISA model."""
from pathlib import Path
import csv,json,re
r=Path(__file__).resolve().parents[1]
all_results={}
for name in ['test','variant18','variant18_opt']:
 rows=[{k:int(v,16) for k,v in d.items()} for d in csv.DictReader((r/'build'/name/'cycles.csv').open())]
 rows=[d for d in rows if not d['hold'] and not d['reset']]
 expected=37 if name=='test' else 8
 final_visible=next(d['cycle'] for d in rows if d['x31']==expected)
 last=final_visible-1 if name=='test' else next(d['cycle'] for d in rows if d['branch_new_request'] and d['issue_pc']==0x80000030 and d['x1']==d['x20'])
 rows=[d for d in rows if d['cycle']<=last]
 dis={}
 for line in (r/'evidence'/f'{name}.disasm.txt').read_text().splitlines():
  m=re.match(r'([0-9a-f]{8}):\s+([0-9a-f]{8})\s+(.*)',line)
  if m:dis[int(m[1],16)]=(m[2],re.sub(r'\s+',' ',m[3].split('#')[0].strip()))
 instructions=[];active={};previous_fetch=None;loads={}
 for d in rows:
  c=d['cycle']
  # Complete already launched memory operations.
  for ident,obj in list(loads.items()):
   offset=c-obj['execute']
   if offset>0:obj['stages'][c]='M'+str(offset+1)
   if d['wb1_done'] and d['wb1_id']==ident:
    obj['complete']=c;del loads[ident]
  if previous_fetch is not None and d['fetch_complete']:
   previous_fetch['stages'][c]='ID';previous_fetch['word']=f"{d['fetch_instruction']:08x}"
  if d['decode_valid']:
   obj=active.get(d['decode_id'])
   assert obj and obj['pc']==d['decode_pc'],(name,c,'decode lookup')
   obj['stages'][c]='DX' if d['flush'] else ('D' if d['decode_advance'] else 'W')
  if d['issue_valid']:
   obj=active.get(d['issue_id'])
   assert obj and obj['pc']==d['issue_pc'],(name,c,'issue lookup')
   kinds=[k for k in ['alu','ls','branch'] if d[k+'_new_request']]
   if kinds:
    # JAL can drive ALU and branch together; it lies after the measured section.
    kind='branch' if 'branch' in kinds else kinds[0]
    obj['execute']=c;obj['stages'][c]={'alu':'AL','ls':'M1','branch':'B'}[kind]
    if kind=='ls':loads[d['issue_id']]=obj
    else:obj['complete']=c
   elif d['flush']:obj['stages'][c]='X'
   elif d['rs1_conflict'] or d['rs2_conflict']:obj['stages'][c]='C'
  if d['flush']:
   for obj in active.values():
    if 'execute' not in obj:
     obj['discarded']=True
     if c not in obj['stages']:obj['stages'][c]='X'
   active={k:v for k,v in active.items() if 'execute' in v}
  previous_fetch=None
  if d['pc_assigned']:
   word,asm=dis.get(d['pc'],('????????','данные / вне .text'))
   obj={'sequence':len(instructions)+1,'id':d['pc_id'],'pc':d['pc'],'word':word,'asm':asm,'stages':{c:'FX' if d['flush'] else 'F'},'discarded':bool(d['flush'])}
   instructions.append(obj)
   if not d['flush']:active[d['pc_id']]=obj;previous_fetch=obj
 executed=[x for x in instructions if 'execute' in x]
 assert len(executed)==(26 if name=='test' else 33),(name,len(executed))
 assert executed[-1]['pc']==(0x80000038 if name=='test' else 0x80000030)
 conflicts=sum(bool(d['rs1_conflict'] or d['rs2_conflict']) for d in rows)
 result={'name':name,'cycles':last,'result_visible_cycle':final_visible,'x31':expected,'executed_instructions':len(executed),'raw_conflict_cycles':conflicts,'flush_cycles':[d['cycle'] for d in rows if d['flush']],'instructions':instructions}
 all_results[name]=result
 with (r/'output'/f'{name}_pipeline.csv').open('w') as f:
  w=csv.writer(f);w.writerow(['№','PC','Код','Команда','ID','Сброшена']+list(range(1,last+1)))
  for x in instructions:w.writerow([x['sequence'],f"{x['pc']:08X}",x['word'],x['asm'],x['id'],'да' if x['discarded'] else '']+[x['stages'].get(c,'') for c in range(1,last+1)])
(r/'evidence/analysis.json').write_text(json.dumps(all_results,ensure_ascii=False,indent=2)+'\n')
for k,v in all_results.items():print(k,{x:v[x] for x in ['cycles','x31','executed_instructions','raw_conflict_cycles','flush_cycles']})
