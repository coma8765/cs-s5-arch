@echo off
cd /d C:\user\sopc01\simulation
start "" Q:\altera\13.0sp1\modelsim_ase\win32aloem\vsim.exe -view native\native_uart.wlf -do view_native.do
