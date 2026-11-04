from pathlib import Path
import json, html
from reportlab.pdfgen import canvas
from reportlab.lib.pagesizes import A4
from reportlab.pdfbase import pdfmetrics
from reportlab.pdfbase.ttfonts import TTFont
from reportlab.lib import colors
from reportlab.platypus import Paragraph, Table, TableStyle
from reportlab.lib.styles import ParagraphStyle
from reportlab.lib.utils import ImageReader
ROOT=Path(__file__).resolve().parents[1]
OUT=ROOT/'output/pdf/lr1_ananyev_iu7_55b_variant2.pdf'
E=ROOT/'evidence'
check=json.loads((E/'verification.json').read_text())
assert check['uart_simulation_passed'] is True
hardware=json.loads((E/'hardware-uart-verification.json').read_text())
assert hardware['passed'] is True
for p in ['qsys-system.png','quartus-compile.png','nios-sbt.png','modelsim-uart.png','variant2-output.png']:
    assert (E/p).exists(),p
for name,file in [('Body','Arial.ttf'),('Bold','Arial Bold.ttf'),('Mono','Courier New.ttf')]:
    pdfmetrics.registerFont(TTFont(name,'/System/Library/Fonts/Supplemental/'+file))
W,H=A4; LEFT=46; WIDTH=W-92
c=canvas.Canvas(str(OUT),pagesize=A4)
c.setTitle('ЛР № 1. Проектирование систем на кристалле на основе ПЛИС')
c.setAuthor('Ананьев Никита Андреевич')
style=ParagraphStyle('body',fontName='Body',fontSize=10.5,leading=15,textColor=colors.HexColor('#202b36'))
small=ParagraphStyle('small',parent=style,fontSize=9,leading=12)
page=0
def text(txt,y,size=10.5,bold=False,x=LEFT):
    c.setFont('Bold' if bold else 'Body',size);c.setFillColor(colors.HexColor('#202b36'));c.drawString(x,y,txt)
def para(txt,y,st=style):
    p=Paragraph(txt,st);_,h=p.wrap(WIDTH,H);p.drawOn(c,LEFT,y-h);return y-h-10
def heading(title):
    global page
    page+=1
    text('ЛР № 1  |  ИУ7-55Б  |  Вариант 2',H-30,8)
    c.setStrokeColor(colors.HexColor('#b6c6d4'));c.line(LEFT,H-39,W-LEFT,H-39)
    text(title,H-67,16,True)
    return H-89
def end():
    text('Ананьев Н. А.',25,8);c.setFont('Body',8);c.drawRightString(W-LEFT,25,str(page));c.showPage()
def table(rows,y,widths):
    data=[[Paragraph(html.escape(str(v)),small) for v in row] for row in rows]
    t=Table(data,colWidths=widths,hAlign='LEFT')
    t.setStyle(TableStyle([('BACKGROUND',(0,0),(-1,0),colors.HexColor('#e4edf4')),('GRID',(0,0),(-1,-1),.45,colors.HexColor('#b8c6d3')),('VALIGN',(0,0),(-1,-1),'TOP'),('LEFTPADDING',(0,0),(-1,-1),7),('RIGHTPADDING',(0,0),(-1,-1),7),('TOPPADDING',(0,0),(-1,-1),6),('BOTTOMPADDING',(0,0),(-1,-1),6)]))
    _,h=t.wrap(WIDTH,H);assert y-h>45;t.drawOn(c,LEFT,y-h);return y-h-14
def screenshot(name,y,caption,width=WIDTH,source_box=None):
    im=ImageReader(str(E/name));iw,ih=im.getSize()
    left,top,right,bottom=source_box or (0,0,iw,ih)
    scale=width/(right-left);height=(bottom-top)*scale
    x=LEFT+(WIDTH-width)/2
    c.saveState()
    clip=c.beginPath();clip.rect(x,y-height,width,height)
    c.clipPath(clip,stroke=0)
    c.drawImage(im,x-left*scale,y-(ih-top)*scale,width=iw*scale,height=ih*scale)
    c.restoreState()
    c.setStrokeColor(colors.HexColor('#b8c6d3'));c.rect(x,y-height,width,height)
    return para(caption,y-height-8,small)
# Title
page=1
text('ОТЧЁТ ПО ЛАБОРАТОРНОЙ РАБОТЕ № 1',H-150,15,True)
y=para('Проектирование систем на кристалле<br/>на основе ПЛИС',H-186,ParagraphStyle('title',parent=style,fontName='Bold',fontSize=22,leading=30))
y=H-360
for row in ['Выполнил: Ананьев Никита Андреевич','Группа: ИУ7-55Б','Вариант по списку: 2']:
    text(row,y,12);y-=26
y=para('Среда: Quartus II 13.0 SP1 Web Edition, Nios II Software Build Tools и ModelSim-Altera Starter Edition 10.1d.',y-30)
y=para('<b>Способ проверки:</b> RTL-симуляция системы с исполняемой программой Nios II и испытание физической платы EP4CE6. Конфигурация загружена через USB-Blaster; приветствие, System ID и эхо проверены через UART 21.10.2026.',y-14)
text('Москва, 2026',85,12)
end()
# Architecture
Y=heading('1. Цель и структура системы')
Y=para('Цель работы - освоить построение системы на кристалле в Qsys, синтез для ПЛИС Cyclone IV E и разработку программы управления UART на процессоре Nios II/e.',Y)
Y=para('Создана система для EP4CE6E22C8. Процессор исполняет программу из встроенной памяти, читает аппаратный System ID и обменивается байтами через UART.',Y)
base=Y-190
boxes=[(LEFT,base+110,150,55,'Nios II/e','команды и данные'),(LEFT+175,base+110,150,55,'ОЗУ 8196 байт','слово 32 бита'),(LEFT,base,150,55,'System ID','0x00075502'),(LEFT+175,base,150,55,'UART','115200, 8N1')]
for x,y,w,h,a,b in boxes:
    c.setFillColor(colors.HexColor('#edf4f8'));c.setStrokeColor(colors.HexColor('#386988'));c.roundRect(x,y,w,h,5,fill=1)
    text(a,y+34,11,True,x+10);text(b,y+15,9,False,x+10)
c.setFillColor(colors.HexColor('#386988'));c.rect(LEFT,base+73,325,18,fill=1,stroke=0)
c.setFillColor(colors.white);c.setFont('Bold',10);c.drawCentredString(LEFT+162.5,base+78,'Системная шина Avalon')
for x in [LEFT+75,LEFT+250]:
    c.setStrokeColor(colors.HexColor('#386988'));c.line(x,base+55,x,base+73);c.line(x,base+91,x,base+110)
text('50 МГц',base+147,10,True,LEFT+350);text('Синхронизация',base+124,9,False,LEFT+350);text('и сброс',base+111,9,False,LEFT+350)
text('TX / RX',base+28,10,True,LEFT+350);c.line(LEFT+325,base+28,LEFT+342,base+28)
Y=base-20
Y=para('Рисунок 1. Функциональная схема. Clock Source и контроллер сброса подают тактовый сигнал и сброс на все компоненты; UART соединён с входом IRQ 0 процессора.',Y,small)
Y=table([['Параметр','Значение'],['Процессор','Nios II/e, без аппаратных умножения и деления'],['Тактовая частота','50 МГц; период 20 нс'],['Векторы процессора','Reset: 0x00000000; Exception: 0x00000020'],['System ID','0x00075502; UART выводит 00075502'],['UART','115200 бит/с, 8 бит данных, без чётности, 1 стоп-бит']],Y,[150,WIDTH-150])
end()
# Qsys
Y=heading('2. Проект Qsys и адресное пространство')
Y=screenshot('qsys-system.png',Y,'Рисунок 2. Реальное окно Qsys с готовой системой: 0 ошибок, 0 предупреждений.')
Y=table([['Устройство','Начальный адрес','Конечный адрес'],['On-chip RAM','0x00000000','0x00002003'],['JTAG debug module','0x00004000','0x000047FF'],['UART','0x00005000','0x0000501F'],['System ID','0x00005020','0x00005027']],Y,[WIDTH-208,104,104])
Y=para('Объём RAM оставлен равным 8196 байтам, как в методичке. Qsys резервирует под декодирование этой памяти окно 16 Кбайт; остальные блоки расположены за его пределами. Оба master-интерфейса Nios II подключены к памяти и периферии.',Y,small)
Y=table([['Сигнал','Вывод ПЛИС'],['clk_clk / reset_reset_n','PIN_24 / PIN_88'],['uart0_txd / uart0_rxd','PIN_10 / PIN_23']],Y,[WIDTH-150,150])
end()
# Settings tree
Y=heading('2.1. Дерево настроек ПЛИС')
Y=para('Сводное дерево параметров проекта sopc01. Значения перенесены из сохранённых настроек Quartus (sopc01.qsf) и аппаратной системы Qsys (nios.qsys).',Y)
tree=[
(0,'sopc01 / nios',True),
(1,'ПЛИС и проект Quartus II',True),
(2,'Семейство: Cyclone IV E'),
(2,'Устройство: EP4CE6E22C8'),
(2,'Верхний модуль: nios; язык HDL: Verilog'),
(2,'Файлы: nios/synthesis/nios.qip, sopc01.sdc'),
(1,'Система Qsys',True),
(2,'clk_0: 50 МГц; период 20 нс'),
(2,'nios2_qsys_0: Nios II/e (Tiny)'),
(3,'Reset: onchip_memory2_0.s1 + 0x00'),
(3,'Exception: onchip_memory2_0.s1 + 0x20'),
(2,'onchip_memory2_0: RAM, 8196 байт, слово 32 бита'),
(3,'Начальный адрес 0x00000000; инициализация из HEX'),
(2,'sysid_qsys_0: System ID = 0x00075502'),
(3,'Адрес 0x00005020; вариант 2'),
(2,'uart_0: 115200 бит/с, 8N1, без CTS/RTS'),
(3,'Адрес 0x00005000; прерывание IRQ 0'),
(1,'Назначение внешних выводов',True),
(2,'clk_clk: PIN_24; reset_reset_n: PIN_88'),
(2,'uart0_txd: PIN_10; uart0_rxd: PIN_23'),
(2,'Стандарт всех четырёх выводов: 3.3-V LVTTL'),
(2,'Неиспользуемые выводы: AS INPUT TRI-STATED'),
(1,'Результат сборки',True),
(2,'output_files/sopc01.sof: конфигурация с программой Nios II'),
]
top=Y-12; step=21
c.setFillColor(colors.HexColor('#f1f5f8'))
c.roundRect(LEFT-5,top-(len(tree)-1)*step-16,WIDTH+10,len(tree)*step+12,5,fill=1,stroke=0)
ancestors={}
for i,row in enumerate(tree):
    level,label,*bold=row; y=top-i*step; x=LEFT+12+level*18
    if level:
        c.setStrokeColor(colors.HexColor('#8da6b8'))
        parent_y=ancestors[level-1]
        c.line(x-12,y+4,x-4,y+4);c.line(x-12,y+4,x-12,parent_y-5)
    text(label,y,9.3,bool(bold and bold[0]),x)
    ancestors[level]=y
Y=top-len(tree)*step-15
Y=para('Рисунок 2а. Дерево основных настроек проекта. Это структурированное представление сохранённых параметров; общий вид интерфейса Qsys приведён на рисунке 2.',Y,small)
assert Y>43,Y
end()
# Variant evidence
Y=heading('2.2. Параметр варианта и его вывод')
Y=para('Для группы ИУ7-55Б и варианта 2 в компоненте System ID Peripheral задано значение <b>0x00075502</b> (480514 в десятичной системе). Программа считывает этот регистр и выводит <b>00075502</b>.',Y)
Y=screenshot('qsys-system.png',Y,'Рисунок 2б. Фрагмент сохранённого окна Qsys: компонент sysid_qsys_0 подключён к процессору и расположен по адресу 0x00005020. Значение ID взято из параметра id в nios.qsys.',source_box=(211,74,1275,519))
Y=screenshot('variant2-output.png',Y,'Рисунок 2в. Фрагмент окна с журналом RTL-проверки: System ID 00075502 и успешная проверка UART. Это сохранённый вывод симуляции, а не физической платы.',source_box=(0,0,1280,260))
Y=table([['Сопоставление','Значение'],['Вариант по списку','2'],['Параметр id компонента sysid_qsys_0','480514 = 0x00075502'],['Строка в журнале выполнения','System ID: 00075502'],['Результат проверки значения','PASS startup greeting and System ID 00075502']],Y,[190,WIDTH-190])
assert Y>43,Y
end()
# Quartus
Y=heading('3. Компиляция аппаратного проекта')
Y=screenshot('quartus-compile.png',Y,'Рисунок 3. Результат компиляции в Quartus II Web Edition.')
Y=table([['Показатель','Результат'],['Полная компиляция','Успешно; 0 ошибок, 10 предупреждений'],['Логические элементы','1570 из 6272 (25 %)'],['Регистры','853'],['Память','75808 из 276480 бит (27 %)'],['Пользовательские выводы','4 из 92'],['Setup / hold, медленная модель 85 °C','10,635 нс / 0,452 нс']],Y,[WIDTH-195,195])
Y=para('Образ памяти из hello.elf включён в итоговый sopc01.sof командой обновления MIF и повторной сборкой Assembler: 0 ошибок и 0 предупреждений.',Y,small)
Y=para('Предупреждения относятся к ограничениям Web Edition, служебным цепям отладки и электрическим параметрам внешних выводов. Асинхронные UART и reset исключены из синхронного анализа; расчёт временных характеристик не заменяет испытания платы.',Y,small)
end()
# Code
Y=heading('4. Программа Nios II')
Y=para('Программа передаёт приветствие, считывает аппаратный System ID и выводит его восемью шестнадцатеричными ASCII-символами. Далее каждый принятый байт возвращается через UART.',Y)
code=(ROOT/'sopc01/software/hello/hello_world_small.c').read_text().splitlines()
line_h=12
c.setFillColor(colors.HexColor('#f1f4f6'));c.rect(LEFT-3,Y-len(code)*line_h-14,WIDTH+6,len(code)*line_h+17,fill=1,stroke=0)
c.setFont('Mono',8.4);c.setFillColor(colors.HexColor('#142433'))
for line in code:c.drawString(LEFT+6,Y-10,line);Y-=line_h
Y-=28
Y=para('В BSP выбраны UART для stdin/stdout/stderr, малая библиотека C, прямые и сокращённые драйверы HAL, оптимизация -Os. Параметр -funsigned-char обеспечивает корректный возврат байтов 0x80-0xFF через alt_getchar() в этой версии HAL.',Y)
Y=para('Размер программы (код и инициализированные данные): 1596 байт. Свободно для стека и кучи: 6148 байт. Настройки адресов берутся из автоматически созданного system.h.',Y)
end()
# Eclipse
Y=heading('5. Программный проект в Nios II SBT')
Y=screenshot('nios-sbt.png',Y,'Рисунок 4. Программный проект и исходный код в Nios II Software Build Tools for Eclipse.')
Y=table([['Артефакт','Назначение'],['software/hello_bsp/settings.bsp','Настройки HAL и драйверов'],['software/hello_bsp/system.h','Адреса и параметры аппаратной системы'],['software/hello/hello.elf','Исполняемая программа Nios II'],['software/hello/mem_init/nios_onchip_memory2_0.hex','Образ начального содержимого RAM'],['output_files/sopc01.sof','Образ конфигурации FPGA с программой']],Y,[240,WIDTH-240])
Y=para('Для просмотра в Windows используются Open-Qsys.cmd, Open-Quartus.cmd, Open-Nios-SBT.cmd и Open-UART-Waveform.cmd. Последний открывает готовую диаграмму в ModelSim. Open-ModelSim.cmd запускает полный повторный расчёт.',Y)
end()
# Verification
Y=heading('6. RTL-проверка UART')
Y=screenshot('modelsim-uart.png',Y,'Рисунок 5. Диаграмма нативной RTL-симуляции Icarus Verilog в окне ModelSim-Altera.')
Y=table([['Проверка','Результат'],['Загрузка программы и старт процессора','Подтверждено выводом приветствия из hello.elf'],['Чтение System ID','Получены 8 ASCII-символов: 00075502'],['Эхо по UART','Совпали байты 41, 00, 7F, FF, 0A'],['Формат кадров','Проверены стартовый бит, 8 бит данных и стоп-бит'],['Завершение теста','LAB_SIMULATION_PASS: 70 байтов']],Y,[185,WIDTH-185])
Y=para('Расчёт выполнен Icarus Verilog 13.0 на ARM64 macOS; диаграмма VCD импортирована в ModelSim. Тест формирует реальные последовательные кадры на входе RX и декодирует TX с периодом 1/115200 с. Тест подключает внешний RX вместо служебного генератора модели Altera, повторяя соединение синтезируемой схемы.',Y,small)
Y=para('RTL-проверка подтвердила запуск процессора и обмен по UART. Результаты дополнительного испытания физической платы приведены в следующем разделе.',Y,small)
Y=para('Основание: А. Ю. Попов, С. В. Ибрагимов, Е. Н. Дубровин. «Проектирование систем на кристалле на основе ПЛИС». Москва, 2026. Параметры взяты из предоставленной методички.',Y,small)
assert Y>43,Y
end()
# Physical board
Y=heading('7. Испытание физической платы')
Y=para('21.10.2026 плата EP4CE6 подключена к Mac: USB-Blaster передан в виртуальную Windows с Quartus II, встроенный USB-UART CH340 доступен на Mac как /dev/cu.usbserial-10. Пользователь подтвердил положение обеих перемычек банков на 3,3 В.',Y)
Y=screenshot('hardware-programmer-success.png',Y,'Рисунок 6. Quartus Programmer после загрузки sopc01.sof: USB-Blaster [USB-0], EP4CE6E22, 100% (Successful).',source_box=(0,0,1280,620))
Y=table([['Проверка','Полученный результат'],['JTAG / драйвер','020F10DD; USB-Blaster FYDK2020; usbblstr.inf'],['Загрузка конфигурации','Успешно; SOF с программой Nios II загружен в оперативную конфигурационную память ПЛИС'],['Последовательный порт','115200 бит/с, 8N1; без управления потоком'],['Старт программы','Hello from System on Chip'],['Аппаратный System ID','System ID: 00075502'],['Приглашение','Send any character'],['Эхо: передано / принято','41 00 7F FF 0A / 41 00 7F FF 0A; совпали все 5 байтов']],Y,[170,WIDTH-170])
Y=para('Ожидание UART в первой попытке истекло до записи стартового сообщения. Во второй попытке порт открыт перед повторной загрузкой SOF: получено полное приветствие и правильное эхо. Пять байтов до повторной загрузки сохранены в сыром журнале и не включены в результат теста.',Y,small)
Y=para('<b>Вывод.</b> Работа системы подтверждена как RTL-симуляцией, так и испытанием физической платы. Программа читает аппаратный идентификатор варианта 2 и возвращает входные байты через UART. Flash-память платы не перепрограммировалась; для повторного запуска после отключения питания следует снова загрузить SOF.',Y,small)
assert Y>43,Y
end();c.save();print(OUT)
