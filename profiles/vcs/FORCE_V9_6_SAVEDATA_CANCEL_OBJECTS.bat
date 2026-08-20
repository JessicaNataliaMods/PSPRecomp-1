@echo off
setlocal EnableExtensions
for %%I in ("%~dp0..\..") do set "REPO=%%~fI"
set "BUILD=%REPO%\out\vcs-release-ninja"
set "MARKER=%BUILD%\.v9_6_savedata_cancel_objects_done"

if exist "%MARKER%" exit /b 0

echo [V9.6] SAVEDATA CANCEL: invalidating stale profile objects...
if not exist "%BUILD%" (
  echo [V9.6] Build tree does not exist yet; normal build will create it.
  exit /b 0
)

powershell.exe -NoLogo -NoProfile -ExecutionPolicy Bypass -Command ^
  "$build=[IO.Path]::GetFullPath('%BUILD%');" ^
  "$names=@('vcs_profile.cpp.obj');" ^
  "$found=@(Get-ChildItem -LiteralPath $build -Recurse -File -Filter '*.obj' -ErrorAction SilentlyContinue); $found=@($found.Where({$names -contains $_.Name}));" ^
  "Write-Host ('[V9.6] stale objects found: ' + $found.Count);" ^
  "foreach($f in $found){Write-Host ('  deleting: ' + $f.FullName); Remove-Item -LiteralPath $f.FullName -Force -ErrorAction Stop};" ^
  "$src='%REPO%\profiles\vcs\host\vcs_profile.cpp';" ^
  "if(Test-Path -LiteralPath $src){(Get-Item -LiteralPath $src).LastWriteTime=Get-Date}"
if errorlevel 1 (
  echo ERROR: failed to invalidate V9.6 savedata cancel objects.
  exit /b 1
)

echo [V9.6] Savedata cancel objects invalidated. Ninja must compile vcs_profile.cpp again.
exit /b 0
