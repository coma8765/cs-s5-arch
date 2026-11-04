Лабораторная работа №2. Изучение принципов работы микропроцессорного ядра RISC-V
Панкратов А. А., ИУ7-54Б, вариант 18.
Дата эксперимента: 23.10.2026.

РЕЗУЛЬТАТ
Программа находит беззнаковый максимум массива [1,2,3,4,8,6,7,5,4].
Обе версии дают x31=8 и x1=x20=0x8000005C после четырёх итераций.
Исходная версия: 60 тактов, 33 команды, 4 такта RAW-ожидания.
После переноса ADDI между загрузками и первым BLTU: 56 тактов, 33 команды, 0 RAW.
Сокращение времени: 6,67%. Ускорение: 1,0714 раза.
Граница измерения: выполнение последнего BNE, а не первое появление x31=8.

ОГРАНИЧЕНИЕ СРЕДЫ
RTL рассчитан Verilator 5.052. ModelSim Altera Starter Edition 10.1d используется
для просмотра импортированных VCD/WLF и получения снимков его интерфейса.
Компиляция исходного ядра старым ModelSim остановилась на sized cast.
Пробная адаптация отдельной копии не завершена (ошибка компиляции ras.sv);
она не использована для результатов и не включена в проект. Лог приложен.
Расчёт именно в ModelSim здесь не подтверждён. Для полного соответствия методике
нужна совместимая версия симулятора либо проверенная адаптация исходников.
Оригинальное RTL ядра сохранено без изменений.

ФАЙЛЫ
output/pdf/lr2_pankratov_iu7_54b_variant18.pdf - отчёт с листингами и полными трассами.
output/lr2_pipeline_traces.xlsx - сводка и три полные матрицы стадий.
output/*_pipeline.csv - те же матрицы в текстовом формате.
riscv-lab/src/variant18.s и variant18_opt.s - исходная и переставленная программы.
riscv-lab/src/test.s - исходный пример для заданий 2-4.
evidence/*.disasm.txt - дизассемблерные листинги.
evidence/modelsim_*.png - снимки интерфейса ModelSim.
build/*/cycles.csv, trace.vcd - исходные наблюдения симулятора.
evidence/analysis.json - реконструкция стадий конвейера.
evidence/verification.json - независимая проверка исполнения машинного кода.
docs/main.adoc - методические указания.

ПОВТОРНЫЙ ЗАПУСК НА macOS
Нужны make, C++-компилятор, Verilator и riscv64-elf-binutils в PATH.
cd riscv-lab/src
make SRC=test test.elf test.hex
make SRC=variant18 variant18.elf variant18.hex
make SRC=variant18_opt variant18_opt.elf variant18_opt.hex
cd ../..
python3 scripts/run_native.py test
python3 scripts/run_native.py variant18
python3 scripts/run_native.py variant18_opt
python3 scripts/analyze_traces.py
python3 scripts/verify_results.py

ПРОСМОТР В ModelSim
python3 scripts/prepare_modelsim.py
Преобразовать evidence/modelsim/*_named.vcd утилитой vcd2wlf из поставки ModelSim:
vcd2wlf variant18_named.vcd variant18_named.wlf
Аналогично для test_named и variant18_opt_named.
В ModelSim перейти в каталог с WLF и DO, затем выполнить: do variant18.do
Задания 2-4: do task2.do, do task3.do, do task4.do.
Результат: do result.do. Перестановка: do variant18_opt.do.
Имена элементов массивов в импортируемых VCD заменены для совместимости
(register_file[31] -> register_file_31). Все временные метки и значения сохранены
побайтно; контрольные суммы есть в evidence/modelsim/vcd_import_manifest.json.
Оригинальные VCD лежат в build.

Для изменения фамилии и пересборки PDF: изменить данные в scripts/build_report.py.
Требуются Python с reportlab и Pillow и системные шрифты Arial/Courier New.
Таблица создаётся scripts/build_traces.mjs с @oai/artifact-tool.

ИСТОЧНИК
https://gitlab.com/sibragimov/riscv-lab/-/blob/main/main.adoc
Commit: dd4c91753bb4c47864106ac4939097d92739cc08.
В методичке работа названа №1; номер №2 сохранён согласно заданию пользователя.
