@echo off
cd /d Q:\altera\13.0sp1\nios2eds\bin\eclipse_nios2
start "" eclipse.exe -vm "Q:\altera\13.0sp1\quartus\bin\jre\bin\client\jvm.dll" -data "%~dp0eclipse-workspace" -perspective com.altera.sbtgui.ui.cPerspective
