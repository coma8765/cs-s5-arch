ЛР2. Изучение принципов работы микропроцессорного ядра RISC-V
Ананьев Никита Андреевич, ИУ7-55Б, вариант 2

РЕЗУЛЬТАТЫ
test:         53 такта, 26 выполненных команд, 16 тактов RAW, x31=37.
variant2:     56 тактов, 45 выполненных команд, 0 тактов RAW, x31=37.
variant2_opt: 56 тактов, 45 выполненных команд, 0 тактов RAW, x31=37.
variant2_unrolled: 22 такта, 19 команд, 0 RAW, 0 сбросов, x31=37.
Полная развёртка: ускорение 56/22=2,55 раза, время уменьшено на 60,7%.
В variant2_unrolled.s полностью удалены вычислительный и завершающий циклы.
EBREAK - маркер остановки тестбенча (STOP_ON_EBREAK=1), не аппаратный halt.
Перестановка двух независимых ADDI сохранила результат, ускорение равно 0%.
Вариант 2 уже скрывает задержку LW двумя полезными командами.

ОГРАНИЧЕНИЕ
Расчёт исходного RTL выполнен Verilator 5.052. ModelSim Altera 10.1d
не компилирует sized cast в core/one_hot_to_integer.sv:50.
Журнал ошибки: evidence/modelsim_compile.log.
Скриншоты ModelSim показывают реально импортированные VCD/WLF этого расчёта.
Запуск вычислительной симуляции именно в ModelSim, предписанный методикой,
не подтверждён. Не представлять эти снимки как доказательство такого запуска.
Для повторения нативного запуска в ModelSim нужна совместимая версия
симулятора SystemVerilog; run.bat/run.sh исходного проекта сохранены.

ЧТО ОТКРЫТЬ
output/pdf/lr2_ananyev_iu7_55b_variant2.pdf - отчёт и полные трассы.
output/lr2_pipeline_traces.xlsx - сводка и четыре таблицы по тактам.
output/*_pipeline.csv - те же трассы в машиночитаемом формате.
riscv-lab/src/variant2.s - индивидуальная программа.
riscv-lab/src/variant2_opt.s - проверенная перестановка команд.
riscv-lab/src/variant2_unrolled.s - итоговая оптимизация без циклов и переходов.
evidence/modelsim_*.png - настоящие снимки окна ModelSim.
evidence/*.disasm.txt - дизассемблерные листинги.
build/*/cycles.csv, trace.vcd - исходные наблюдения, не синтетические графики.

ПОВТОРНЫЙ РАСЧЁТ НА MACOS
Зависимости: make, xxd, C++ compiler, Verilator 5.052,
GNU riscv64-elf-binutils 2.47, Python 3.
Из корня lr2:
  make -C riscv-lab/src SRC=test
  make -C riscv-lab/src SRC=variant2
  make -C riscv-lab/src SRC=variant2_unrolled variant2_unrolled.elf variant2_unrolled.hex
  make -C riscv-lab/src SRC=variant2_opt
  python3 scripts/run_native.py test
  python3 scripts/run_native.py variant2
  python3 scripts/run_native.py variant2_opt
  python3 scripts/run_native.py variant2_unrolled
  python3 scripts/analyze_traces.py
  python3 scripts/verify_results.py

На Linux задайте RV_TOOLS для своего cross-binutils, например:
  make -C riscv-lab/src SRC=variant2 RV_TOOLS=riscv64-unknown-elf
Файлы .elf и .hex уже включены в комплект. test.s не изменён.
Если меняете программу, обновите evidence/<имя>.disasm.txt командой
  riscv64-elf-objdump -d -M numeric,no-aliases <имя>.elf
перед анализом её трассы.

ПРОСМОТР В MODELSIM
В Windows файлы уже подготовлены в C:\user\ananyev\riscv-lab\evidence.
Для переносимого архива запустите vcd2wlf для нужной трассы, например:
  cd evidence/modelsim
  vcd2wlf variant2_named.vcd variant2_named.wlf
  vsim -view variant2_named.wlf -do variant2.do
Для заданий 2-4 используйте test_named.vcd и task2.do/task3.do/task4.do.
Для результата - result.do; для перестановки - variant2_opt.do; для развёртки - unrolled.do.
Файлы *_named.vcd подготовлены scripts/prepare_modelsim.py: в заголовке
имена вида register_file[31] заменены на register_file_31. Это обходит
неоднозначный импорт массивов в старый vcd2wlf. Времена и значения сигналов
сохранены побайтно; контрольные суммы в vcd_import_manifest.json.
Исходные trace.vcd также сохранены.

ФОРМИРОВАНИЕ ОТЧЁТА И ТАБЛИЦ
  python3 scripts/build_report.py
Нужны reportlab, Pillow и шрифты Arial/Courier New из macOS.
  node scripts/build_traces.mjs
Нужна библиотека @oai/artifact-tool. Готовый XLSX открывается без этой библиотеки.

МЕТОД И ПОДСЧЁТ ТАКТОВ
Исходное ядро не менялось. В my_tb/tb_observed.sv добавлен наблюдатель
из scripts/observer.svh. CSV снимается на спаде sys_clk.
Конец вычисления - выполнение финального ADDI; запись x31 видна в следующем
такте (57 для варианта 2, 54 для test). Бесконечный цикл lp2 исключён.
Стадии восстановлены по PC, ID, decode_advance, запросам функциональных
блоков и writeback. В таблицах сохранены спекулятивные и сброшенные выборки.
Q явно обозначает ожидание в очереди после ID. Пустые клетки вне времени
жизни команды не означают простой всего ядра. Удаление клеток исказило бы время.
Развёртка: полезный расчёт заканчивается в такте 22, результат виден в 23.
Проверены восемь значений из памяти и последовательный запуск 19 команд.
IPC = выполненные полезные команды / такты, а не число всех выборок.

ИСТОЧНИК
https://gitlab.com/sibragimov/riscv-lab/-/blob/main/main.adoc
Commit: dd4c91753bb4c47864106ac4939097d92739cc08
В источнике работа названа №1; здесь №2 по заданию пользователя.
Исходные лицензии сохранены в riscv-lab.
