@echo off
setlocal EnableExtensions
for %%I in ("%~dp0..\..") do set "REPO=%%~fI"
set "BUILD=%REPO%\out\vcs-release-ninja"
set "MARKER=%BUILD%\.v9_3_clean_rebase_objects_done"

call "%~dp0FORCE_V9_3_CLEAN_REBASE_OBJECTS.bat"
if errorlevel 1 exit /b %errorlevel%

call "%~dp0scripts\build_release_ninja.bat"
set "RC=%errorlevel%"
if "%RC%"=="0" (
  if not exist "%BUILD%" mkdir "%BUILD%" >nul 2>nul
  >"%MARKER%" echo V9.3 clean rebase successfully rebuilt critical objects.
)
exit /b %RC%
