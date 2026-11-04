ЛР 1 — Ананьев Никита Андреевич, ИУ7-55Б, вариант 2

Готовый проект Windows: C:\user\sopc01
Quartus II 13.0 SP1 Web Edition: Q:\altera\13.0sp1

Открытие в интерфейсе:
  Open-Quartus.cmd — проект FPGA и отчёт успешной компиляции.
  Open-Qsys.cmd — процессор, память, UART, System ID и адреса.
  Open-Nios-SBT.cmd — программа hello в Eclipse.
  Open-UART-Waveform.cmd — проверенная диаграмма UART в ModelSim.
  Open-ModelSim.cmd — полный повторный расчёт в ModelSim (медленный в x86 VM).

Результаты:
  FPGA EP4CE6E22C8, 50 МГц, UART 115200 8N1, System ID 00075502.
  output_files/sopc01.sof — конфигурация FPGA с прошивкой hello.elf в RAM.
  software/hello/hello_world_small.c — исходный код.
  software/hello/hello.elf — исполняемая программа.
  simulation/native/run.log — фактический журнал RTL-проверки.
  simulation/native/uart_trace.log — декодированные переданные/принятые байты.
  simulation/native/native_uart.vcd — временная диаграмма.

Проверка пройдена: 65 байтов приветствия и System ID, затем эхо 41 00 7F FF 0A.
Всего подтверждено 70 выходных байтов, стартовые и стоповые биты.
Расчёт выполнен Icarus Verilog 13.0 на ARM64 macOS; ModelSim показывает импортированную диаграмму.
Тестовая обвязка направляет внешний RX в приёмник вместо служебного генератора
модели Altera, повторяя соединение синтезируемой схемы. Сам UART, процессор,
память и программа остаются исходными сгенерированными компонентами проекта.

Повторить нативный расчёт на Mac (Icarus Verilog уже установлен):
  python3 scripts/run_native_sim.py
В simulation/vendor сохранены нужные исходные модели из установленного Quartus;
их условия использования указаны в заголовках файлов.

Аппаратные испытания не выполнялись: физическая FPGA-плата и USB-Blaster
не подключались. Работа подтверждена синтезом и RTL-симуляцией.
