@echo off
cd /d C:\user\sopc01
Q:\altera\13.0sp1\quartus\bin64\quartus_cdb.exe sopc01 --update_mif
if errorlevel 1 exit /b %errorlevel%
Q:\altera\13.0sp1\quartus\bin64\quartus_asm.exe sopc01
exit /b %errorlevel%