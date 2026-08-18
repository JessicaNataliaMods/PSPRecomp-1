@echo off
setlocal EnableExtensions
for %%I in ("%~dp0..\..") do set "REPO=%%~fI"
set "BIN=%REPO%\out\vcs-release-ninja\bin\Release"
set "GAME=%BIN%\PSP_DATA"
set "CHECKPOINT=%BIN%\VCS_SAVE_REPRO_CHECKPOINT.bin"
set "TRACE=%BIN%\VCS_SAVE_REPRO_TRACE.txt"
if not exist "%CHECKPOINT%" (
  echo ERROR: checkpoint not found:
  echo   %CHECKPOINT%
  echo.
  echo Finish the problematic mission once with V8.2.6 and press F8 after gameplay returns.
  pause
  exit /b 2
)
if not exist "%GAME%\PSP_GAME\SYSDIR\EBOOT_DECRYPTED.ELF" (
  echo ERROR: PSP_DATA not found beside the Release executable:
  echo   %GAME%
  pause
  exit /b 3
)
if exist "%TRACE%" del /q "%TRACE%" >nul 2>&1
set "PSPRECOMP_SAVE_REPRO_TESTING=1"
set "PSPRECOMP_SAVE_REPRO_AUTO_RESTORE=1"
echo ================================================================
echo VCS SAVE REPRO - AUTO RESTORE
 echo Checkpoint:
 echo   %CHECKPOINT%
echo ================================================================
call "%~dp0scripts\play.bat" "%GAME%"
exit /b %ERRORLEVEL%
