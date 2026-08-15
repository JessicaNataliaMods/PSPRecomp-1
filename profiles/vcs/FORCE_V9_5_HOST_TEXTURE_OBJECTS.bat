@echo off
setlocal EnableExtensions
for %%I in ("%~dp0..\..") do set "REPO=%%~fI"
set "BUILD=%REPO%\out\vcs-release-ninja"
set "MARKER=%BUILD%\.v9_5_host_texture_objects_done"

if exist "%MARKER%" exit /b 0

echo [V9.5] SAVEDATA HOST TEXTURES: invalidating stale DX12/UI objects...
if not exist "%BUILD%" (
  echo [V9.5] Build tree does not exist yet; normal build will create it.
  exit /b 0
)

powershell.exe -NoLogo -NoProfile -ExecutionPolicy Bypass -Command ^
  "$build=[IO.Path]::GetFullPath('%BUILD%');" ^
  "$names=@('ge_gpu_backend_dx12.cpp.obj','savedata_utility_ui.cpp.obj');" ^
  "$found=Get-ChildItem -LiteralPath $build -Recurse -File -Filter '*.obj' -ErrorAction SilentlyContinue ^| Where-Object { $names -contains $_.Name };" ^
  "Write-Host ('[V9.5] stale objects found: ' + $found.Count);" ^
  "foreach($f in $found){Write-Host ('  deleting: ' + $f.FullName); Remove-Item -LiteralPath $f.FullName -Force -ErrorAction Stop};" ^
  "$src=@('%REPO%\profiles\vcs\host\ge_gpu_backend_dx12.cpp','%REPO%\profiles\vcs\host\savedata_utility_ui.cpp');" ^
  "$now=Get-Date; foreach($p in $src){if(Test-Path -LiteralPath $p){(Get-Item -LiteralPath $p).LastWriteTime=$now}}"
if errorlevel 1 (
  echo ERROR: failed to invalidate V9.5 DX12/UI objects.
  exit /b 1
)

echo [V9.5] DX12/UI objects invalidated. Ninja must compile them again.
exit /b 0
