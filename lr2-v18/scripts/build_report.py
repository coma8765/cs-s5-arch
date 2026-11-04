"""Rebuild the lab report from measured traces and actual ModelSim screenshots."""
from pathlib import Path
import json
import sys
from xml.sax.saxutils import escape
from reportlab.pdfgen import canvas
from reportlab.lib.pagesizes import A4, A3, landscape
from reportlab.lib.colors import HexColor, white
from reportlab.pdfbase import pdfmetrics
from reportlab.pdfbase.ttfonts import TTFont
from reportlab.platypus import Paragraph
from reportlab.lib.styles import ParagraphStyle
from PIL import Image

ROOT = Path(__file__).resolve().parents[1]
OUT = ROOT / 'output/pdf/lr2_pankratov_iu7_54b_variant18.pdf'
if '--layout-draft' in sys.argv:
    OUT = ROOT / 'tmp/pdfs/layout-draft.pdf'
if '--preview' in sys.argv:
    OUT = ROOT / 'tmp/pdfs/preview.pdf'
OUT.parent.mkdir(parents=True, exist_ok=True)
for name, filename in [('Arial', 'Arial.ttf'), ('ArialB', 'Arial Bold.ttf'), ('Mono', 'Courier New.ttf')]:
    pdfmetrics.registerFont(TTFont(name, '/System/Library/Fonts/Supplemental/' + filename))
DATA = json.loads((ROOT / 'evidence/analysis.json').read_text())
c = canvas.Canvas(str(OUT), pagesize=A4)
c.setTitle('ЛР2. Изучение принципов работы микропроцессорного ядра RISC-V')
c.setAuthor('Панкратов А. А., ИУ7-54Б')
NAVY = HexColor('#203C53')
GRAY = HexColor('#526273')
PAGE = 0
W, H = A4
Y = 0


def page(title, size=A4):
    global PAGE, W, H, Y
    if '--preview' in sys.argv and PAGE == 11:
        c.save()
        raise SystemExit('Preview: first 11 completed pages')
    if PAGE:
        c.showPage()
    PAGE += 1
    W, H = size
    c.setPageSize(size)
    c.setFillColor(NAVY)
    c.rect(0, H - 8, W, 8, fill=1, stroke=0)
    c.setFont('Arial', 8)
    c.drawString(42, H - 29, 'ИУ7-54Б  /  Панкратов А. А.  /  ЛР2  /  Вариант 18')
    c.setFillColor(GRAY)
    c.drawString(42, 24, 'RISC-V Taiga · эксперимент 23.10.2026')
    c.drawRightString(W - 42, 24, str(PAGE))
    Y = H - 64
    title_style = ParagraphStyle('title', fontName='ArialB', fontSize=18, leading=23, textColor=NAVY)
    p = Paragraph(escape(title), title_style)
    _, height = p.wrap(W - 84, H)
    p.drawOn(c, 42, Y - height)
    Y -= height + 22


def para(text, size=10, color=GRAY, gap=12):
    global Y
    s = ParagraphStyle('body', fontName='Arial', fontSize=size, leading=size * 1.45, textColor=color)
    p = Paragraph(text, s)
    _, height = p.wrap(W - 84, H)
    if Y - height < 43:
        raise ValueError(f'Page {PAGE} overflow: {text[:60]}')
    p.drawOn(c, 42, Y - height)
    Y -= height + gap


def heading(text):
    global Y
    c.setFont('ArialB', 12)
    c.setFillColor(NAVY)
    c.drawString(42, Y - 12, text)
    Y -= 28


def code(text, size=8.1):
    global Y
    lines = text.expandtabs(4).strip('\n').splitlines()
    height = len(lines) * (size * 1.4) + 20
    if Y - height < 45:
        raise ValueError(f'Code overflow on page {PAGE}')
    c.setFillColor(HexColor('#F0F4F7'))
    c.roundRect(42, Y - height, W - 84, height, 5, fill=1, stroke=0)
    c.setFillColor(NAVY)
    c.setFont('Mono', size)
    for i, line in enumerate(lines):
        if pdfmetrics.stringWidth(line, 'Mono', size) > W - 108:
            raise ValueError(f'Code line too wide: {line}')
        c.drawString(53, Y - 15 - i * size * 1.4, line)
    Y -= height + 14


def shot(name, caption, max_height=340):
    global Y
    path = ROOT / 'evidence' / f'modelsim_{name}.png'
    if '--layout-draft' in sys.argv:
        para('ЧЕРНОВИК ВЁРСТКИ: место для снимка ' + name, 12)
        Y -= 280
        para(caption, 8.2)
        return
    if not path.exists():
        raise FileNotFoundError(path)
    iw, ih = Image.open(path).size
    width = min(W - 84, max_height * iw / ih)
    height = width * ih / iw
    if Y - height < 65:
        raise ValueError(f'Image overflow on {PAGE}')
    c.drawImage(str(path), (W - width) / 2, Y - height, width, height)
    Y -= height + 10
    para(caption, 8.2, gap=16)


def table(rows, widths, size=9):
    global Y
    rh = 26
    for ri, row in enumerate(rows):
        x = 42
        c.setFillColor(NAVY if ri == 0 else HexColor('#F1F5F8') if ri % 2 else white)
        c.rect(x, Y - rh, sum(widths), rh, fill=1, stroke=0)
        c.setFont('ArialB' if ri == 0 else 'Arial', size)
        c.setFillColor(white if ri == 0 else NAVY)
        for cell, width in zip(row, widths):
            if pdfmetrics.stringWidth(str(cell), 'Arial', size) > width - 12:
                raise ValueError(f'Table cell too wide: {cell}')
            c.drawString(x + 6, Y - 17, str(cell))
            x += width
        Y -= rh
    Y -= 16


page('Лабораторная работа №2')
Y -= 78
para('Изучение принципов работы<br/>микропроцессорного ядра RISC-V', 24, NAVY, 38)
para('Архитектура RV32I и конвейер ядра Taiga', 13, gap=60)
para('Выполнил: <b>Панкратов А. А.</b><br/>Группа: <b>ИУ7-54Б</b><br/>Индивидуальный вариант: <b>18</b>', 12, gap=50)
para('Москва, 2026', 12)
para('Основание: методические указания С. В. Ибрагимова, А. Ю. Попова, Е. Н. Дубровина, sibragimov/riscv-lab. В исходном документе работа обозначена как №1; здесь используется номер №2 согласно заданию.', 9)

page('Цель, теория и условия эксперимента')
para('Цель: изучить прохождение команд RV32I через конвейер Taiga, выявить зависимости по данным и оценить ускорение после перестановки независимых команд.')
heading('Организация конвейера')
para('RV32I содержит 32 регистра по 32 бита; x0 всегда равен нулю. Команды LW загружают слова из памяти. ADD и ADDI выполняют сложение. BLTU сравнивает операнды как беззнаковые числа, BNE проверяет неравенство. Псевдокоманда LA разворачивается в AUIPC и ADDI.')
para('Стадии Taiga: F - выборка, ID - диспетчеризация, D - декодирование, затем выполнение соответствующим блоком. АЛУ и блок ветвлений выполняют операцию за один такт; загрузка проходит M1-M3. RAW-конфликт задерживает команду, использующую ещё не записанный операнд. Ошибочное предсказание перехода приводит к сбросу выбранных команд.')
heading('Среда и воспроизводимость')
para('Использован исходный Taiga из commit<br/><font name="Mono" size="8">dd4c91753bb4c47864106ac4939097d92739cc08</font>.<br/>Ассемблер GNU riscv64-elf-binutils 2.47, архитектура RV32I. Моделирование: Verilator 5.052, 460 мкс, период такта 2 мкс. Ядро не изменено; наблюдатель тестбенча сохраняет CSV и VCD.')
para('<b>Снимки получены в интерфейсе ModelSim Altera Starter Edition 10.1d при просмотре импортированных VCD/WLF.</b> Расчёт выполнен Verilator. ModelSim 10.1d отклоняет ряд параметризованных приведений типов в исходном ядре. Пробная адаптация отдельной копии не завершена: компиляция остановилась в ras.sv. Расчёт именно в ModelSim в данной работе не подтверждён.')
para('Для индивидуальной программы длительность измеряется от первой выборки до выполнения четвёртого BNE при x1=x20. Достижение x31=8 происходит раньше окончания обхода массива и не используется как критерий завершения. Для test используется выполнение финального ADDI.')

page('Задание 1. Программа варианта 18')
para('Программа находит беззнаковый максимум девяти слов. Первый элемент загружается в x31, затем за итерацию рассматриваются два элемента. Исходный test.s сохранён для заданий 2-4. В записи из методички add с непосредственным операндом явно записан как addi; смысл операции сохранён.')
code((ROOT/'riscv-lab/src/variant18.s').read_text(),7.6)
para('Команда #! - lw x2,0(x1), адрес 0x80000014. В Makefile и сценариях запуска выбран variant18.hex.',9)

page('Задание 1. Машинный код и расчёт')
def listing(name):
    import re
    return '\n'.join(f'{m[1]}: {m[2]}  {re.sub(chr(9)," ",m[3]).split("#")[0].strip()}' for line in (ROOT/'evidence'/f'{name}.disasm.txt').read_text().splitlines() if (m:=re.match(r'([0-9a-f]{8}):\s+([0-9a-f]{8})\s+(.*)',line)))
code(listing('variant18'),7.6)
heading('Псевдокод')
code('a = [1, 2, 3, 4, 8, 6, 7, 5, 4]\nx31 = a[0]\nfor i in [1, 3, 5, 7]:\n    if unsigned(a[i]) >= unsigned(x31):\n        x31 = a[i]\n    if unsigned(a[i+1]) >= unsigned(x31):\n        x31 = a[i+1]\nwhile True: pass',8.6)
para('Ожидаемый результат: <b>max(1, 2, 3, 4, 8, 6, 7, 5, 4) = 8 = 0x00000008</b>. Адрес массива _x=0x80000038, адрес за массивом x20=0x8000005C. После четвёртой итерации x1=x20.')
table([['Итерация','Пара элементов','x31 после пары'],['1','2, 3','3'],['2','4, 8','8'],['3','6, 7','8'],['4','5, 4','8']],[110,200,201],9)

page('Задание 2. Выборка и диспетчеризация')
para('Вариант 18: test.s, <b>0x80000024, вторая итерация</b>. Команда lw x2,12(x1), код 0x00C0A103, ID=5. Учитывается второй выполненный экземпляр команды; спекулятивные выборки отдельно помечены в трассе.')
shot('task2','Рисунок 1. Выборка команды второй итерации в окне ModelSim. Расчёт RTL выполнен Verilator.')
table([['Стадия','Такт','Сигналы'],['F','33','PC=80000024, PC_ID=5, Assigned=1'],['ID','34','Fetch_done=1, Instruction=00c0a103'],['D','41','Decode_PC=80000024, Decode_ID=5']],[70,50,391],8.5)
para('После выборки команда поступает в очередь метаданных. В тактах 39-40 она ожидает на входе декодера (W), в такте 41 продвигается далее. Загрузка выполняется в тактах 42-44. Интервал между ID и D связан с занятостью последующих ступеней.')

page('Задание 3. Декодирование и планирование')
para('Вариант 18: test.s, <b>0x80000030, вторая итерация</b>. Команда addi x20,x20,-1, код 0xFFFA0A13, ID=0. Она уменьшает число оставшихся итераций с 1 до 0.')
shot('task3','Рисунок 2. Декодирование ADDI и передача в АЛУ.')
table([['Событие','Такт'],['Выборка и диспетчеризация','F=36; ID=37'],['Успешное декодирование','D=46; Advance=1'],['Выполнение','AL=47; ALU_request=1'],['Обновление x20','48: x20=0']],[270,241],9)
para('В такте 46 декодер формирует операнды и сведения о назначении. В такте 47 запрос поступает в АЛУ. Собственных тактов C у этой команды нет: её операнд x20 уже готов. Предшествующее ожидание между ID и D отражает заполнение очереди командами, ожидающими результаты загрузок.')

page('Задание 4. Выполнение загрузки')
para('Вариант 18: test.s, <b>0x8000001C, вторая итерация</b>. Команда lw x2,8(x1), код 0x0080A103, ID=3. Она загружает седьмой элемент исходного тестового массива.')
shot('task4','Рисунок 3. Запрос LSU, формирование адреса, готовность результата и запись x2.')
table([['Параметр','Значение'],['Стадии','F=31; ID=32; D=37; M1-M3=38-40'],['База x1 и смещение','0x80000050 + 0x00000008'],['Эффективный адрес','0x80000058'],['Результат','7; WB_done=1, WB_ID=3 в такте 40'],['Запись x2','x2=7 видно в такте 41']],[160,351],8.7)
para('Готовность результата определяется по WB_done вместе с WB_ID. Значение шины WB_value вне валидного такта не следует принимать за завершение рассматриваемой команды. Последующая загрузка другого элемента может изменить x2, поэтому важна привязка к номеру такта.')

page('Задание 5. Все стадии команды #!')
para('В variant18 команда <b>lw x2,0(x1)</b> по адресу <b>0x80000014</b> впервые обрабатывает a[1]=2. Идентификатор этой команды - 5.')
shot('variant18','Рисунок 4. Выборка, диспетчеризация, декодирование и три такта загрузки команды #!.')
table([['F','ID','D','M1','M2','M3','x2=2'],['6','7','8','9','10','11','12']],[65,65,65,65,65,65,121],10)
para('LW получает адрес 0x8000003C. Запрос к LSU запускается в такте 9, результат готов в такте 11, изменение регистра видно в такте 12. Следующая LW загружает x3. Однако BLTU x2,x31 приходит на выполнение ещё в такте 11 и ждёт x2 один такт C.')
para('Такая зависимость повторяется в каждой из четырёх итераций: такты C исходной программы - <b>11, 24, 33, 48</b>. Полная матрица стадий, включая сброшенные выборки, приведена в приложении.')

page('Задание 5. Проверка конечного состояния')
shot('result','Рисунок 5. Максимум x31=8 и завершение обхода при x1=x20=0x8000005C.')
para('Значения максимума при обновлениях: <b>1, 2, 3, 4, 8</b>. После второй итерации новых максимумов нет. Программа продолжает проверку оставшихся четырёх элементов и завершает полезный цикл только после четвёртой пары.')
para('Последний BNE выполняется в такте <b>60</b>; x1=x20, переход обратно не выполняется. Итоговый x31=<b>8</b>, что совпадает с аналитическим расчётом. Бесконечный цикл lp2 исключён из измерения.')
para('Выполнено <b>33 команды</b>: 5 команд инициализации, 4 итерации по 6 обязательных команд и 4 обновления максимума. Сбросы до выбранной границы зафиксированы в тактах 18, 35, 40, 50, 55. Их причина - восстановление потока после ошибок предсказания ветвлений.')

page('Оптимизация перестановкой команд')
para('Увеличение x1 перенесено сразу после двух LW, перед первым BLTU. Обе загрузки уже используют старый указатель, сравнения зависят только от x2, x3 и x31. BNE получает тот же новый x1. Поэтому перенос сохраняет алгоритм для всех значений элементов.')
code((ROOT/'riscv-lab/src/variant18_opt.s').read_text(),7.6)
para('Независимая ADDI занимает такт, который раньше простаивал при ожидании x2. Число исполняемых команд не меняется.',9)

page('Оптимизированный машинный код')
code(listing('variant18_opt'),7.6)
shot('variant18_opt','Рисунок 6. Перенесённая ADDI и последующий BLTU без RAW-ожидания.',max_height=285)
para('В первой итерации ADDI по адресу 0x8000001C выполняется в такте 11, BLTU по 0x80000020 - в такте 12. К этому моменту x2 готов. У BLTU больше нет стадии C.',9)

page('Сравнение трасс и выводы')
table([['Программа','Такты','Команды','RAW','x31','IPC']]+[[n,str(d['cycles']),str(d['executed_instructions']),str(d['raw_conflict_cycles']),str(d['x31']),f"{d['executed_instructions']/d['cycles']:.3f}"] for n,d in DATA.items()],[131,70,90,65,65,90],9)
para('IPC = число выполненных полезных команд / число тактов. Для двух индивидуальных версий используется одна граница - выполнение последнего BNE. Тестовый пример приведён как отдельный эксперимент для заданий 2-4; он вычисляет другую функцию.')
code('Сокращение времени = (60 - 56) / 60 = 6.67%\nКоэффициент ускорения = 60 / 56 = 1.0714\nRAW-ожидания: 4 -> 0 тактов\nЧисло выполненных команд: 33 -> 33',9)
para('Перестановка сократила выполнение на четыре такта, по одному на каждую итерацию. Финальные x31=8 и x1=x20 сохранились. RAW-ожидания устранены; потери, связанные с предсказанием переходов, остаются. Сбросы оптимизированной версии: 17, 33, 38, 47, 52.')
para('Изучены стадии конвейера и выполнение команд разными блоками. Наблюдения подтверждают, что независимая операция между загрузкой и использованием её результата скрывает задержку памяти. В варианте 18 это дало измеримое ускорение без изменения алгоритма и числа команд.')
para('Ограничение эксперимента: временные диаграммы открыты в ModelSim, но RTL рассчитан Verilator. Для полного соответствия требованию запуска симуляции именно в ModelSim нужен совместимый SystemVerilog-симулятор либо отдельно проверенная адаптация исходников.')

page('Приложения и повторный запуск')
para('Проект хранится в lr2-v18. Автор: Панкратов А. А., ИУ7-54Б. Полные матрицы представлены в PDF и в электронной таблице, исходные наблюдения - в CSV и VCD.')
code('cd riscv-lab/src\nmake SRC=test test.elf test.hex\nmake SRC=variant18 variant18.elf variant18.hex\nmake SRC=variant18_opt variant18_opt.elf variant18_opt.hex\ncd ../..\npython3 scripts/run_native.py test\npython3 scripts/run_native.py variant18\npython3 scripts/run_native.py variant18_opt\npython3 scripts/analyze_traces.py\npython3 scripts/verify_results.py',8)
para('Нужны GNU riscv64-elf-binutils, make, Verilator и C++-компилятор. Сценарий prepare_modelsim.py создаёт совместимые с импортом VCD: квадратные скобки в именах массивов заменены подчёркиваниями. Времена и значения сохранены побайтно; контрольные суммы находятся в vcd_import_manifest.json.')
heading('Обозначения трассы')
para('F - выборка; ID - диспетчеризация; D - успешное декодирование; W - ожидание на входе декодера; C - конфликт операндов; AL - АЛУ; M1-M3 - память; B - ветвление. X, DX и FX отмечают сброс на соответствующем этапе. Знак * у номера строки означает отброшенную команду.')
para('Пустой интервал между ID и D может означать ожидание в очереди метаданных. Последние выборки могут не иметь продолжения из-за границы измерения. Код ???????? означает отсутствие принятого результата выборки в рассматриваемом интервале.')
para('Источник: <link href="https://gitlab.com/sibragimov/riscv-lab/-/blob/main/main.adoc" color="#126CA6">sibragimov/riscv-lab, main.adoc</link>. Авторы ядра Taiga: Eric Matthews, Lesley Shannon. В комплект включены исходники и лицензии репозитория.')

COLORS = {'F':'#D8E8F5','ID':'#DADDF5','D':'#D6EBDD','W':'#FFEAC5','C':'#FFD3CE','AL':'#BCE5DC','M1':'#E3DEF4','M2':'#E3DEF4','M3':'#E3DEF4','B':'#F4DDC3','X':'#E4E4E4','DX':'#E4E4E4','FX':'#E4E4E4'}
for name, data in DATA.items():
    page('Приложение. Полная трасса ' + name, landscape(A3))
    para(f'{data["cycles"]} тактов; {data["executed_instructions"]} выполненных команд; x31={data["x31"]}. Все выборки до конца вычисления; * - сброшенная команда.', 9, gap=10)
    headers = ['№', 'PC (hex)', 'Код (hex)', 'Команда', 'ID']
    widths = [25, 67, 67, 173, 22]
    cw = (W - 84 - sum(widths)) / data['cycles']
    widths += [cw] * data['cycles']
    rows = [headers + list(range(1, data['cycles'] + 1))]
    for v in data['instructions']:
        rows.append([str(v['sequence']) + ('*' if v['discarded'] else ''), f'{v["pc"]:08x}', v['word'], v['asm'], v['id']] + [v['stages'].get(str(i), '') for i in range(1, data['cycles'] + 1)])
    rh = 10.4
    for ri, row in enumerate(rows):
        x = 42
        for ci, (value, width) in enumerate(zip(row, widths)):
            fill = NAVY if ri == 0 else HexColor(COLORS.get(str(value), '#F5F7F9' if ri % 2 else '#FFFFFF'))
            c.setFillColor(fill)
            c.rect(x, Y - rh, width, rh, fill=1, stroke=0)
            c.setStrokeColor(HexColor('#D5DEE5'))
            c.setLineWidth(0.15)
            c.rect(x, Y - rh, width, rh, fill=0, stroke=1)
            font = 'ArialB' if ri == 0 else 'Mono' if ci in [1, 2, 3] else 'Arial'
            size = 6.6 if ci == 3 else 6.5
            c.setFont(font, size)
            c.setFillColor(white if ri == 0 else NAVY)
            if ci < 5:
                c.drawString(x + 2, Y - 7.6, str(value))
            else:
                c.drawCentredString(x + width / 2, Y - 7.6, str(value))
            x += width
        Y -= rh
    if Y < 55:
        raise ValueError('Trace overflow')
    Y -= 13
    para('F / ID / D: выборка / диспетчеризация / декодирование; W: ожидание; C: конфликт; AL: АЛУ; M1-M3: память; B: переход; X/DX/FX: сброс.', 8)

c.save()
print(OUT)
print('Pages:', PAGE)
