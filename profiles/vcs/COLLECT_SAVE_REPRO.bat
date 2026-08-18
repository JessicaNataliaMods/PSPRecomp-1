@echo off
setlocal EnableExtensions
for %%I in ("%~dp0..\..") do set "REPO=%%~fI"
set "BIN=%REPO%\out\vcs-release-ninja\bin\Release"
set "CHECKPOINT=%BIN%\VCS_SAVE_REPRO_CHECKPOINT.bin"
set "TRACE=%BIN%\VCS_SAVE_REPRO_TRACE.txt"
set "LOG=%BIN%\VCSNative.log"
set "MISSING=%BIN%\VCS_SAVE_REPRO_TRACE_MISSING.txt"
set "BUNDLE=%BIN%\VCS_SAVE_REPRO_BUNDLE.zip"
if not exist "%CHECKPOINT%" (
  echo ERROR: missing %CHECKPOINT%
  echo The expensive post-mission checkpoint is not present.
  pause
  exit /b 2
)
if exist "%MISSING%" del /q "%MISSING%" >nul 2>&1
set "FILES='%CHECKPOINT%'"
if exist "%TRACE%" (
  set "FILES=%FILES%,'%TRACE%'"
) else (
  >"%MISSING%" echo VCS SAVE REPRO TRACE WAS NOT WRITTEN.
  >>"%MISSING%" echo The checkpoint is valid and is included in this bundle.
  >>"%MISSING%" echo V8.2.6B adds a post-F8/GetAsyncKeyState F10 fallback; restore the checkpoint and retry F10 if a full trace is still needed.
  set "FILES=%FILES%,'%MISSING%'"
  echo WARNING: %TRACE% is missing.
  echo The bundle will still be created with the checkpoint and runtime log.
)
if exist "%LOG%" set "FILES=%FILES%,'%LOG%'"
powershell -NoProfile -ExecutionPolicy Bypass -Command "Compress-Archive -LiteralPath @(%FILES%) -DestinationPath '%BUNDLE%' -Force"
if errorlevel 1 (
  echo ERROR: could not create bundle.
  pause
  exit /b 4
)
echo.
echo SAVE REPRO bundle created:
echo   %BUNDLE%
echo.
if not exist "%TRACE%" echo NOTE: trace missing, but checkpoint was preserved in the ZIP.
echo Send this ZIP back in the chat.
pause
exit /b 0
