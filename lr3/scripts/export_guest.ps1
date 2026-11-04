$ErrorActionPreference = 'Stop'
$root = 'C:\user\ananyev\lr3'
Get-CimInstance Win32_ComputerSystem | Select-Object Manufacturer,Model,TotalPhysicalMemory,NumberOfLogicalProcessors | Format-List | Out-File "$root\system.txt"
Get-CimInstance Win32_Processor | Select-Object Name,Manufacturer,MaxClockSpeed,NumberOfCores,NumberOfLogicalProcessors | Format-List | Out-File "$root\system.txt" -Append
Get-CimInstance Win32_OperatingSystem | Select-Object Caption,Version,OSArchitecture,TotalVisibleMemorySize | Format-List | Out-File "$root\system.txt" -Append
$docs = [Environment]::GetFolderPath("MyDocuments")
$files = @(Get-ChildItem "$root\exp*.rtf", "$root\exp*.bmp", "$root\exp*.csv", "$docs\exp*.rtf", "$docs\exp*.bmp" -File) + @(Get-Item "$root\system.txt")
Compress-Archive -LiteralPath $files.FullName -DestinationPath "$root\results.zip" -Force
$port = New-Object System.IO.Ports.SerialPort 'COM1',115200,'None',8,'One'
$port.Open()
$port.WriteLine('LR3_EXPORT_BEGIN')
$port.WriteLine([Convert]::ToBase64String([IO.File]::ReadAllBytes("$root\results.zip")))
$port.WriteLine('LR3_EXPORT_END')
$port.Close()
