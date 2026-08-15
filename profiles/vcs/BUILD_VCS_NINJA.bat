@echo off
setlocal EnableExtensions
for %%I in ("%~dp0..\..") do set "REPO=%%~fI"
set "BUILD=%REPO%\out\vcs-release-ninja"
set "MARKER95=%BUILD%\.v9_5_host_texture_objects_done"
set "MARKER96=%BUILD%\.v9_6_savedata_cancel_objects_done"

call "%~dp0FORCE_V9_5_HOST_TEXTURE_OBJECTS.bat"
if errorlevel 1 exit /b %errorlevel%
call "%~dp0FORCE_V9_6_SAVEDATA_CANCEL_OBJECTS.bat"
if errorlevel 1 exit /b %errorlevel%

call "%~dp0scripts\build_release_ninja.bat"
set "RC=%errorlevel%"
if "%RC%"=="0" (
  if not exist "%BUILD%" mkdir "%BUILD%" >nul 2>nul
  >"%MARKER95%" echo V9.5 host-texture isolation successfully rebuilt critical objects.
  >"%MARKER96%" echo V9.6 mode-aware savedata cancellation successfully rebuilt vcs_profile.cpp.
)
exit /b %RC%
