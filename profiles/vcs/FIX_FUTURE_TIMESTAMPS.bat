@echo off
setlocal EnableExtensions

for %%I in ("%~dp0..\..") do set "REPO=%%~fI"

echo ================================================================
echo PSPRecomp - FIX FUTURE FILE TIMESTAMPS
echo Repository:
echo   %REPO%
echo ================================================================
echo.

powershell.exe -NoLogo -NoProfile -ExecutionPolicy Bypass -Command ^
  "$repo=[IO.Path]::GetFullPath('%REPO%');" ^
  "$now=Get-Date;" ^
  "$safe=$now.AddSeconds(-5);" ^
  "$skip=@('\out\','\.git\','\.vs\','\build\','\CMakeFiles\');" ^
  "$future=Get-ChildItem -LiteralPath $repo -Recurse -File -Force -ErrorAction SilentlyContinue | Where-Object {" ^
  "  $p=$_.FullName;" ^
  "  $blocked=$false;" ^
  "  foreach($s in $skip){if($p.IndexOf($s,[StringComparison]::OrdinalIgnoreCase)-ge 0){$blocked=$true;break}};" ^
  "  (-not $blocked) -and $_.LastWriteTime -gt $now.AddSeconds(2)" ^
  "};" ^
  "Write-Host ('Current local time: ' + $now.ToString('yyyy-MM-dd HH:mm:ss'));" ^
  "Write-Host ('Future-dated source files: ' + $future.Count);" ^
  "foreach($f in $future){" ^
  "  Write-Host ('  fixing: ' + $f.FullName + ' [' + $f.LastWriteTime.ToString('yyyy-MM-dd HH:mm:ss') + ']');" ^
  "  $f.LastWriteTime=$safe" ^
  "};" ^
  "if($future.Count -gt 0){Write-Host ('Normalized to: ' + $safe.ToString('yyyy-MM-dd HH:mm:ss'))} else {Write-Host 'No future timestamps found.'}"
if errorlevel 1 (
  echo.
  echo ERROR: PowerShell timestamp normalization failed.
  pause
  exit /b 1
)

echo.
echo Timestamp check complete.
exit /b 0
