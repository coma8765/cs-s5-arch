import fs from 'node:fs/promises';
import { Workbook, SpreadsheetFile } from '@oai/artifact-tool';
const root = new URL('../', import.meta.url);
const analysis = JSON.parse(await fs.readFile(new URL('evidence/analysis.json', root), 'utf8'));
const wb = Workbook.create();
const summary = wb.worksheets.add('Сравнение');
summary.showGridLines = false;
summary.getRange('A2').values = [['ЛР2. Трассы RISC-V Taiga, вариант 18']];
summary.getRange('A4:G7').values = [
  ['Программа', 'Такты', 'Команд', 'RAW, тактов', 'x31', 'IPC', 'Экономия времени'],
  ...Object.values(analysis).map(x => [x.name, x.cycles, x.executed_instructions, x.raw_conflict_cycles, x.x31, null, null]),
];
summary.getRange('F5:F7').formulas = [['=C5/B5'], ['=C6/B6'], ['=C7/B7']];
summary.getRange('G7').formulas = [['=1-B7/B6']];
summary.getRange('F5:F7').setNumberFormat('0.000');
summary.getRange('G7').setNumberFormat('0.0%');
summary.getRange('A9').values = [['Вариант 18: от первой выборки до последнего BNE. Test: до финального ADDI.']];
summary.getRange('A10').values = [['Расчёт: Verilator 5.052, исходное ядро Taiga; ModelSim используется для просмотра VCD/WLF.']];
summary.getRange('A12').values = [['Источник: gitlab.com/sibragimov/riscv-lab, commit dd4c91753bb4c47864106ac4939097d92739cc08']];
summary.getRange('A14').values = [['F: выборка; ID: диспетчеризация; D: декодирование; W: ожидание; C: конфликт.']];
summary.getRange('A15').values = [['AL: АЛУ; M1–M3: загрузка; B: ветвление; X/DX/FX: отброшенные операции.']];
summary.getRange('A17').values = [['Перенос ADDI устранил 4 такта RAW-ожидания. Панкратов А. А., ИУ7-54Б.']];
summary.getRange('A1:G18').format.font = { name: 'Arial', size: 10 };
summary.getRange('A2').format.font = { size: 14, bold: true };
summary.getRange('A4:G4').format = { fill: '#273F56', font: { color: '#FFFFFF', bold: true } };
summary.getRange('A1:A18').format.columnWidth = 22;
summary.getRange('B1:F18').format.columnWidth = 14;
summary.getRange('G1:G18').format.columnWidth = 20;
summary.getRange('A1:G18').format.rowHeight = 23;
const colors = {F:'#D8E8F5',ID:'#DADDF5',D:'#D6EBDD',W:'#FFEAC5',C:'#FFD3CE',AL:'#BCE5DC',M1:'#E3DEF4',M2:'#E3DEF4',M3:'#E3DEF4',B:'#F4DDC3',X:'#E4E4E4',DX:'#E4E4E4',FX:'#E4E4E4'};
for (const [name, x] of Object.entries(analysis)) {
  const sheet = wb.worksheets.add(name);
  sheet.showGridLines = false;
  sheet.getRange('A2').values = [[name + ': фактическая трасса RTL']];
  sheet.getRange('A3').values = [['Исходные наблюдения: build/' + name + '/cycles.csv; показаны все выборки до завершения результата.']];
  const data = [['№','PC','Код','Команда','ID','Сброшена',...Array.from({length:x.cycles},(_,i)=>i+1)],
    ...x.instructions.map(v=>[v.sequence,v.pc.toString(16).toUpperCase()+'h',v.word+'h',v.asm,v.id,v.discarded?'да':'',...Array.from({length:x.cycles},(_,i)=>v.stages[i+1]||'')])];
  sheet.getRangeByIndexes(4,0,data.length,data[0].length).values = data;
  const used=sheet.getRangeByIndexes(0,0,data.length+4,data[0].length);
  used.format.font={name:'Arial',size:10};
  used.format.rowHeight=20;
  sheet.getRangeByIndexes(4,0,1,data[0].length).format={fill:'#273F56',font:{color:'#FFFFFF',bold:true}};
  sheet.getRange('A2').format.font={size:14,bold:true};
  sheet.getRangeByIndexes(0,0,data.length+4,1).format.columnWidth=5;
  sheet.getRangeByIndexes(0,1,data.length+4,2).format.columnWidth=15;
  sheet.getRangeByIndexes(0,3,data.length+4,1).format.columnWidth=35;
  sheet.getRangeByIndexes(0,4,data.length+4,2).format.columnWidth=11;
  const grid=sheet.getRangeByIndexes(5,6,x.instructions.length,x.cycles);
  grid.format.columnWidth=4.5;
  grid.format.horizontalAlignment='center';
  for(const [row,v] of x.instructions.entries()) for(const [cycle,stage] of Object.entries(v.stages)) {
    if(Number(cycle)<=x.cycles && colors[stage]) sheet.getRangeByIndexes(row+5,Number(cycle)+5,1,1).format.fill=colors[stage];
  }
  sheet.freezePanes.freezeRows(5);
  sheet.freezePanes.freezeColumns(6);
}
wb.recalculate();
console.log((await wb.inspect({kind:'table',range:'Сравнение!A4:G7',include:'values,formulas',tableMaxRows:4,tableMaxCols:7})).ndjson);
console.log((await wb.inspect({kind:'match',searchTerm:'#REF!|#DIV/0!|#VALUE!|#NAME\\?',options:{useRegex:true,maxResults:10},summary:'Formula errors'})).ndjson);
for (const name of ['Сравнение',...Object.keys(analysis)]) {
  const blob=await wb.render({sheetName:name,range:name==='Сравнение'?'A1:G18':'A1:R18',scale:1.5,format:'png'});
  await fs.writeFile(new URL('evidence/sheet-'+name+'.png',root),new Uint8Array(await blob.arrayBuffer()));
}
await (await SpreadsheetFile.exportXlsx(wb)).save(new URL('output/lr2_pipeline_traces.xlsx',root).pathname);
