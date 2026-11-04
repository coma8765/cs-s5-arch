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
OUT = ROOT / 'output/pdf/lr2_ananyev_iu7_55b_variant2.pdf'
if '--preview' in sys.argv:
    OUT = ROOT / 'tmp/pdfs/preview.pdf'
OUT.parent.mkdir(parents=True, exist_ok=True)
for name, filename in [('Arial', 'Arial.ttf'), ('ArialB', 'Arial Bold.ttf'), ('Mono', 'Courier New.ttf')]:
    pdfmetrics.registerFont(TTFont(name, '/System/Library/Fonts/Supplemental/' + filename))
DATA = json.loads((ROOT / 'evidence/analysis.json').read_text())
c = canvas.Canvas(str(OUT), pagesize=A4)
c.setTitle('ЛР2. Изучение принципов работы микропроцессорного ядра RISC-V')
c.setAuthor('Ананьев Никита Андреевич, ИУ7-55Б')
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
    c.drawString(42, H - 29, 'ИУ7-55Б  /  Ананьев Н. А.  /  ЛР2  /  Вариант 2')
    c.setFillColor(GRAY)
    c.drawString(42, 24, 'RISC-V Taiga · эксперименты 21, 23.10.2026')
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
para('Выполнил: <b>Ананьев Никита Андреевич</b><br/>Группа: <b>ИУ7-55Б</b><br/>Индивидуальный вариант: <b>2</b>', 12, gap=50)
para('Москва, 2026', 12)
para('Основание: методические указания С. В. Ибрагимова, А. Ю. Попова, Е. Н. Дубровина из репозитория sibragimov/riscv-lab. В исходном документе работа обозначена как №1; в настоящем отчёте используется номер №2 согласно заданию.', 9)

page('Цель, модель и условия эксперимента')
para('Цель работы: изучить выборку, диспетчеризацию, декодирование и выполнение команд RV32I; проследить зависимости по данным и оценить влияние порядка команд на заполнение конвейера.')
heading('Основные сведения')
para('RV32I содержит 32 регистра общего назначения по 32 бита. Регистр x0 постоянно равен нулю. Команды загрузки обращаются к памяти, арифметические команды работают с регистрами. В исследуемой системе локальная двухпортовая память начинается с адреса 0x80000000.')
para('В Taiga стадии F, ID и D пропускают до одной команды за такт. Исполнительные блоки могут работать параллельно: АЛУ и блок ветвлений выполняют операцию за один такт, загрузка проходит M1-M3. Зависимая команда ждёт готовности операнда; ошибочное предсказание перехода вызывает сброс спекулятивных команд.')
heading('Воспроизводимость и ограничение среды')
para('Использован репозиторий sibragimov/riscv-lab, commit<br/><font name="Mono" size="8">dd4c91753bb4c47864106ac4939097d92739cc08</font>.<br/>Ассемблер: GNU riscv64-elf-binutils 2.47, целевая архитектура RV32I. RTL-расчёт: Verilator 5.052. Базовые прогоны: 460 мкс; развёрнутая версия останавливается тестбенчем на EBREAK. Описание ядра не изменялось; в тестбенч добавлен наблюдатель для CSV и VCD.')
para('<b>ModelSim Altera Starter Edition 10.1d используется как просмотрщик импортированных VCD/WLF.</b> Попытка компиляции исходного ядра в этой версии завершилась ошибкой синтаксиса sized cast в one_hot_to_integer.sv. Поэтому снимки окна ModelSim показывают результат расчёта Verilator, а не выполненную в ModelSim симуляцию. Этап запуска расчёта именно в ModelSim остаётся отклонением от методики.')
para('Во всех сравнениях конец выполнения - такт работы АЛУ для финального addi x31,x31,1. Запись нового x31 наблюдается следующим фронтом. Это исключает смешение времени вычисления и момента отображения результата.')

page('Задание 1. Индивидуальная программа')
para('Файл test.s сохранён без изменений. Индивидуальная программа помещена в src/variant2.s; в Makefile задано SRC=variant2. Обрабатывается массив из восьми 32-битных слов.')
source = (ROOT / 'riscv-lab/src/variant2.s').read_text()
code(source, 8)
para('Команда с пометкой #! - add x31,x31,x2. Псевдокоманда la разворачивается в пару auipc/addi. Массив располагается с адреса 0x8000002c.')

page('Задание 1. Дизассемблирование и результат')
lines = (ROOT / 'evidence/variant2.disasm.txt').read_text().splitlines()
code('\n'.join(line.expandtabs(1).replace('          ', ' ') for line in lines if line.startswith('8000')), 8.3)
heading('Псевдокод')
code('x = [1, 2, 3, 4, 5, 6, 7, 8]\nsum = 0\np = &x[0]\ncount = 8\nwhile count != 0:\n    value = *p\n    p = p + 4\n    count = count - 1\n    sum = sum + value\nx31 = sum + 1\nwhile True: pass', 9)
para('Ожидаемое значение: x31 = 1 + 2 + 3 + 4 + 5 + 6 + 7 + 8 + 1 = <b>37 = 0x00000025</b>. Конечный x20 равен 0, x1 указывает за массив: 0x8000004c.')
para('Тестовая программа также собрана: test.hex содержит исходный пример. Её листинг сохранён отдельно в evidence/test.disasm.txt. Задания 2-4 выполнены на этой программе, как требует методика.')

page('Задание 2. Выборка и диспетчеризация')
para('Вариант 2: команда test.s по адресу <b>0x80000010</b>, первая итерация. Код 0x002f8fb3 соответствует add x31,x31,x2; присвоен ID=4.')
shot('task2', 'Рисунок 1. Фактическая трасса test, открытая в ModelSim (VCD/WLF, расчёт Verilator).')
table([['Стадия', 'Такт', 'Наблюдаемое событие'], ['F', '5', 'PC=80000010, PC_ID=4, Assigned=1'], ['ID', '6', 'Fetch_done=1, Instruction=002f8fb3'], ['D', '7', 'Decode_PC=80000010, Decode_ID=4']], [70, 50, 391], 8.5)
para('Значение fetch_complete в такте 6 подтверждает выборку предыдущего такта. После записи кода команды в таблицу метаданных формируется пакет decode. Позднее эта команда испытывает RAW-конфликт в тактах 8-9 и выполняется в такте 10.')

page('Задание 3. Декодирование и планирование')
para('Вариант 2: команда test.s по адресу <b>0x8000001c</b>, первая итерация. Код 0x0080a103: lw x2,8(x1), ID=7.')
shot('task3', 'Рисунок 2. Декодирование, ожидание и передача команды в LSU.')
para('Выборка выполняется в такте 8, диспетчеризация - в такте 9. После ожидания в очереди команда достигает входа декодера. В тактах 12-13 decode_advance=0: предыдущий add ожидает результат загрузки x2. Это ожидание в декодере обозначено W; RAW-конфликт C относится к предыдущему add.')
para('В такте <b>14</b> decode_advance разрешает продвижение lw; в такте <b>15</b> появляется запрос LSU с ID=7. Стадии загрузки: M1=15, M2=16, M3=17. Таким образом, задержка команды вызвана занятостью предыдущей ступени, а не собственной арифметической зависимостью.')

page('Задание 4. Выполнение в АЛУ')
para('Вариант 2: команда test.s по адресу <b>0x80000004</b>, auipc x1,0x0, ID=1. Она формирует адрес относительно текущего PC.')
shot('task4', 'Рисунок 3. Входы АЛУ, запрос выполнения и результат AUIPC.')
table([['Параметр', 'Значение'], ['Стадии', 'F=2; ID=3; D=4; AL=5'], ['Первый операнд', '0x80000004 (адрес команды)'], ['Второй операнд', '0x00000000 (imm20 << 12)'], ['Результат', '0x80000004; запись x1 видна в такте 6']], [160, 351], 9)
para('Следующая команда addi x1,x1,60 завершает формирование адреса массива тестовой программы: 0x80000040. На диаграмме важно сопоставлять результат АЛУ с ID и сигналом запроса, поскольку выходная шина сама по себе не означает выполнение новой команды.')

page('Задание 5. Все стадии отмеченной команды')
para('Индивидуальная программа variant2. Команда #! по адресу <b>0x8000001c</b>: add x31,x31,x2, первая итерация, ID=7.')
shot('variant2', 'Рисунок 4. Выборка, диспетчеризация, декодирование и выполнение команды #!.')
table([['F', 'ID', 'D', 'AL', 'Запись x31'], ['8', '9', '10', '11', '12: x31=1']], [80, 80, 80, 80, 191], 10)
para('Загрузка lw x2,0(x1) проходит M1-M3 в тактах 8-10. Между lw и зависимым add стоят два независимых addi, поэтому add получает готовый x2 без тактов C. Наблюдается перекрытие работы LSU и АЛУ.')
para('Всего выполнено 45 полезных команд: 4 команды инициализации, 8 итераций по 5 команд и финальный addi. Полные трассы, включая выбранные и затем сброшенные команды, приведены в приложениях и электронной таблице.')

page('Задание 5. Проверка результата')
shot('result', 'Рисунок 5. Изменение накопленной суммы и получение x31=0x25.')
para('Последовательность частичных сумм: <b>1, 3, 6, 10, 15, 21, 28, 36</b>. После финального прибавления единицы получено <b>37</b>. Результат совпадает с аналитическим расчётом задания 1.')
para('Финальный addi выполняется в такте <b>56</b>, значение x31=37 видно в такте <b>57</b>. Временной интервал расчёта 460 мкс включает и дальнейшее выполнение бесконечного цикла lp2; этот цикл не включён в оценку полезного времени.')
para('В ходе полезного вычисления не зарегистрировано RAW-конфликтов. Сбросы конвейера зафиксированы в тактах <b>13 и 52</b>: это восстановление потока после предсказания ветвлений. Часть спекулятивно выбранных команд не выполняется; такие строки сохранены в трассах и отмечены как сброшенные.')

page('Перестановка команд: исходный текст')
para('Проверена перестановка двух независимых addi внутри цикла. Порядок lw и изменения указателя сохранён; арифметический смысл и условия завершения не меняются. Файл: variant2_opt.s.')
opt = (ROOT / 'riscv-lab/src/variant2_opt.s').read_text()
code(opt, 8)
para('Обозначение opt в имени файла означает проверяемую попытку оптимизации. Исходный вариант 2 уже содержит достаточный интервал между загрузкой и использованием результата, поэтому уменьшение числа RAW-конфликтов здесь невозможно: их исходное число равно нулю.')

page('Перестановка команд: листинг и сравнение')
lines = (ROOT / 'evidence/variant2_opt.disasm.txt').read_text().splitlines()
code('\n'.join(line.expandtabs(1).replace('          ', ' ') for line in lines if line.startswith('8000')), 8.3)
table([['Программа', 'Такты', 'Команды', 'RAW', 'x31', 'IPC'], ['test', '53', '26', '16', '37', '0,491'], ['variant2', '56', '45', '0', '37', '0,804'], ['variant2_opt', '56', '45', '0', '37', '0,804']], [131, 70, 90, 65, 65, 90], 9)
para('IPC рассчитан как число выполненных полезных команд / число тактов до финального addi. Сокращение времени после перестановки: (56 - 56) / 56 = <b>0%</b>; коэффициент ускорения - <b>1,00</b>. Значение x31 и положения сбросов совпадают.')
para('У тестового примера меньше команд благодаря развёртке цикла, но больше остановок из-за повторяющейся зависимости lw → add. В текущем запуске он завершает вычисление за 53 такта. В иллюстрации методички приведено 47 тактов; в этом отчёте зафиксирован результат измерения для указанного commit и данной конфигурации расчёта.')

page('Проверка переставленной программы и выводы')
shot('variant2_opt', 'Рисунок 6. Трасса переставленной версии: порядок ADDI изменён, командных конфликтов нет.')
para('Перестановка сохранила результат и полную длительность исполнения. В исходном варианте 2 две полезные операции уже скрывают задержку загрузки. Поэтому выбранная перестановка не даёт дополнительного ускорения.')
para('Отдельный эксперимент с полным удалением цикла приведён далее. В нём изменены число команд и набор регистров: все восемь элементов загружаются независимо, после чего суммируются.')
para('Изучены все четыре стадии конвейера, наблюдены RAW-конфликты и сбросы по ветвлениям, сопоставлены аппаратные сигналы с адресами и ID команд. Все четыре запуска дали ожидаемое x31=37. Ограничение: вычислительный прогон произведён Verilator; ModelSim 10.1d использован для просмотра импортированных диаграмм.')

page('Оптимизация: полное удаление цикла')
para('Файл variant2_unrolled.s содержит прямую последовательность обработки восьми элементов. Нет BNE, J, JAL или JALR. Счётчик и обновление указателя больше не нужны. Восемь загрузок используют разные регистры x2-x9; первая сумма инициализируется через x0.')
code((ROOT / 'riscv-lab/src/variant2_unrolled.s').read_text(), 8)
para('EBREAK служит только маркером окончания этого эксперимента. Параметр STOP_ON_EBREAK=1 заставляет наблюдатель тестбенча вызвать $finish при появлении маркера на входе выполнения. Это не аппаратная инструкция выключения процессора. Полезное время заканчивается на предшествующем ADDI; EBREAK в него не включён.', 9)

page('Развёртка: измеренное ускорение')
table([['Программа', 'Такты', 'Команды', 'RAW', 'Сбросы'], ['test', '53', '26', '16', '2'], ['variant2', '56', '45', '0', '2'], ['variant2_opt', '56', '45', '0', '2'], ['variant2_unrolled', '22', '19', '0', '0']], [151, 80, 100, 80, 100], 9)
para('<b>x31=37</b> получен во всех случаях. Для развёртки финальный ADDI выполняется в такте 22; x31 обновляется в такте 23. Тестбенч заканчивает расчёт при EBREAK в том же наблюдаемом такте, на отметке 75 мкс.')
para('Ускорение относительно исходного варианта 2: <b>56 / 22 = 2,55 раза</b>. Сокращение времени: <b>(56 - 22) / 56 = 60,7%</b>. По отношению к test: 53 / 22 = 2,41 раза. IPC развёртки: 19 / 22 = 0,864.')
para('Все 19 полезных команд запускаются в исполнительные блоки подряд, в тактах 4-22. Интервал между последовательными запусками равен одному такту. Нет RAW-конфликтов, ожиданий W и сбросов по ветвлению. Начальные три такта нужны для заполнения конвейера.')
para('Цена развёртки: размер .text увеличился с 44 до 80 байт, включая завершающие J/EBREAK соответственно; используются дополнительные регистры x3-x9. Решение специализировано для массива из восьми элементов. Оно сохраняет результат x31, но не прежнее конечное значение указателя: x1 остаётся адресом начала массива 0x80000050.')
# UNROLLED_SCREENSHOT

page('Что означают пропуски в трассе test')
para('Пустая клетка не является командой NOP. Каждая строка описывает одну команду, а столбцы - общую шкалу тактов. До выборки команды и после её завершения клетки естественно пусты; в это время другие строки могут содержать работающие стадии.')
para('Промежутки между диспетчеризацией ID и первым появлением команды на входе декодера теперь явно обозначены <b>Q</b>: команда находится в очереди метаданных. Q добавлено по наблюдаемым моментам ID и D/W; исходные такты, сигналы и длительность не изменялись.')
heading('Пример: ADD по адресу 0x80000018 в test')
table([['Такт', 'Состояние', 'Причина'], ['7', 'F', 'Выборка команды'], ['8', 'ID', 'Диспетчеризация'], ['9-10', 'Q', 'Ожидание в очереди перед декодером'], ['11', 'D', 'Декодирование'], ['12-13', 'C', 'Загруженное значение x2 ещё не готово'], ['14', 'AL', 'Сложение после готовности операнда']], [65, 85, 361], 9)
para('В test восемь пар LW/ADD с непосредственной зависимостью дают суммарно 16 тактов C. W отмечает остановку следующей команды на входе декодера, а X/DX/FX - сброшенные команды при восстановлении после перехода. Это разные состояния, их нельзя заменять удалением столбцов.')
para('В новой развёрнутой программе эти причины задержек устранены кодом: загрузки независимы, а ветвлений нет. В таблице остаются лишь пустые области вне времени жизни команды и неполные выборки за границей полезного расчёта. Исходный test сохранён как контрольный пример заданий 2-4.')

page('Файлы, повторный запуск и источники')
para('Рабочая папка: Documents/u/s5/arch/lr2. Исходный проект находится в riscv-lab; все дополнения к эксперименту вынесены в scripts, evidence и output. В Windows копия проекта размещена в C:\\user\\ananyev\\riscv-lab.')
code('cd riscv-lab/src\nmake SRC=test\nmake SRC=variant2\nmake SRC=variant2_opt\nmake SRC=variant2_unrolled variant2_unrolled.elf\ncd ../..\npython3 scripts/run_native.py test\npython3 scripts/run_native.py variant2\npython3 scripts/run_native.py variant2_opt\npython3 scripts/run_native.py variant2_unrolled\npython3 scripts/analyze_traces.py', 9)
para('Команды рассчитаны на PATH с GNU riscv64-elf-binutils, make, Verilator и C++-компилятором. Для ModelSim преобразовать evidence/modelsim/*_named.vcd командой vcd2wlf и открыть полученный WLF с соответствующим .do. В этих VCD переименованы только элементы массивов (например, register_file[31] в register_file_31) для совместимости импорта; все времена и значения сохранены побайтно.')
para('Электронное приложение output/lr2_pipeline_traces.xlsx содержит сводку и четыре полные матрицы. Машиночитаемые наблюдения: build/*/cycles.csv; разбор стадий: evidence/analysis.json; полные волновые формы: build/*/trace.vcd. Исходники, результаты и инструкции входят в архив проекта.')
heading('Как читать полные трассы')
para('F - выборка; ID - диспетчеризация; D - успешное декодирование; W - ожидание на входе декодера; C - конфликт операндов; AL - АЛУ; M1-M3 - загрузка; B - ветвление. X, DX и FX отмечают сброс команды на соответствующем этапе. Знак * у номера строки означает отброшенную команду. Q явно отмечает ожидание в очереди метаданных между ID и входом декодера.')
para('Трассы ограничены тактом завершения полезного результата. Поэтому последние спекулятивные выборки могут не иметь дальнейших стадий. Код ???????? означает, что код команды неизвестен: результат выборки не был принят до сброса или до конца рассматриваемого интервала.')
para('Источник задания и теории: <link href="https://gitlab.com/sibragimov/riscv-lab/-/blob/main/main.adoc" color="#126CA6">gitlab.com/sibragimov/riscv-lab/-/blob/main/main.adoc</link>. Авторы ядра Taiga: Eric Matthews, Lesley Shannon. В комплекте сохранены исходные файлы и лицензии репозитория.')

COLORS = {'F':'#D8E8F5','ID':'#DADDF5','D':'#D6EBDD','Q':'#EAF0F5','W':'#FFEAC5','C':'#FFD3CE','AL':'#BCE5DC','M1':'#E3DEF4','M2':'#E3DEF4','M3':'#E3DEF4','B':'#F4DDC3','X':'#E4E4E4','DX':'#E4E4E4','FX':'#E4E4E4'}
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
    para('F / ID / D: выборка / диспетчеризация / декодирование; Q: очередь; W: ожидание; C: конфликт; AL: АЛУ; M1-M3: память; B: переход; X/DX/FX: сброс.', 8)

c.save()
print(OUT)
print('Pages:', PAGE)
