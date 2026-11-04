$env:QUARTUS_ROOTDIR='Q:\altera\13.0sp1\quartus'
$env:SOPC_KIT_NIOS2='Q:\altera\13.0sp1\nios2eds'
$env:PATH="$env:QUARTUS_ROOTDIR\bin64;$env:QUARTUS_ROOTDIR\sopc_builder\bin;"+$env:PATH
$cp=((Get-ChildItem "$env:QUARTUS_ROOTDIR\sopc_builder\model\lib" -Filter '*.jar' | ForEach-Object {$_.FullName}) -join ';')
$project=(Resolve-Path "$PSScriptRoot\..\nios.qsys").Path
$argsList=@('-Xmx1024m','-XX:+UseSerialGC',"-Djava.library.path=$env:QUARTUS_ROOTDIR\bin64",'-cp',$cp,'com.altera.ipedit.QsysEditorApp',$project)
Start-Process 'Q:\Tools\jre6\bin\javaw.exe' -ArgumentList (($argsList | ForEach-Object {'"'+$_+'"'}) -join ' ')
