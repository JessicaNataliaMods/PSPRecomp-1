@echo off
setlocal EnableExtensions
for %%I in ("%~dp0..\..") do set "REPO=%%~fI"
set "BUILD=%REPO%\out\vcs-release-ninja"
set "MARKER=%BUILD%\.v9_4_savedata_ui_objects_done"

if exist "%MARKER%" exit /b 0

echo [V9.4] SAVEDATA/UI: invalidating stale incremental objects...
if not exist "%BUILD%" (
  echo [V9.4] Build tree does not exist yet; normal build will create it.
  exit /b 0
)

powershell.exe -NoLogo -NoProfile -ExecutionPolicy Bypass -Command ^
  "$build=[IO.Path]::GetFullPath('%BUILD%');" ^
  "$names=@('vcs_profile.cpp.obj','savedata_utility_ui.cpp.obj');" ^
  "$found=Get-ChildItem -LiteralPath $build -Recurse -File -Filter '*.obj' -ErrorAction SilentlyContinue ^| Where-Object { $names -contains $_.Name };" ^
  "Write-Host ('[V9.4] stale objects found: ' + $found.Count);" ^
  "foreach($f in $found){Write-Host ('  deleting: ' + $f.FullName); Remove-Item -LiteralPath $f.FullName -Force -ErrorAction Stop};" ^
  "$src=@('%REPO%\profiles\vcs\host\vcs_profile.cpp','%REPO%\profiles\vcs\host\savedata_utility_ui.cpp');" ^
  "$now=Get-Date; foreach($p in $src){if(Test-Path -LiteralPath $p){(Get-Item -LiteralPath $p).LastWriteTime=$now}}"
if errorlevel 1 (
  echo ERROR: failed to invalidate V9.4 savedata/UI objects.
  exit /b 1
)

echo [V9.4] Savedata/UI objects invalidated. Ninja must compile them again.
exit /b 0
