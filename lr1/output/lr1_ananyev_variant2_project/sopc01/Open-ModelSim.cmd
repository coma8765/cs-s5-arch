@echo off
cd /d "%~dp0simulation"
start "" "Q:\altera\13.0sp1\modelsim_ase\win32aloem\vsim.exe" -do run_gui.do
