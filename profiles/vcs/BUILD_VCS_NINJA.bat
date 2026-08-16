@echo off
setlocal EnableExtensions
for %%I in ("%~dp0..\..") do set "REPO=%%~fI"
set "BUILD=%REPO%\out\vcs-release-ninja"
set "MARKER95=%BUILD%\.v9_5_host_texture_objects_done"
set "MARKER96=%BUILD%\.v9_6_savedata_cancel_objects_done"
set "MARKERSAFE=%BUILD%\.tier2_hotspot_hotfix_safe_done"

if exist "%BUILD%" if not exist "%MARKERSAFE%" (
  echo [0c-safe] HOTSPOT OPT1 rollback - invalidating only affected objects once...
  for %%U in (0154 0155 0085 0158 0084 0157 0129 0044 0043 0086 0179 0152 0035 0023) do (
    for /r "%BUILD%" %%F in (generated_unit_%%U.cpp.obj) do if exist "%%F" del /f /q "%%F" >nul 2>nul
  )
  for %%N in (main.cpp.obj vcs_config.cpp.obj vcs_profile.cpp.obj vcs_runtime_log.cpp.obj) do (
    for /r "%BUILD%" %%F in (%%N) do if exist "%%F" del /f /q "%%F" >nul 2>nul
  )
)

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
  >"%MARKERSAFE%" echo HOTSPOT OPT1 semantic rollback rebuilt successfully.
)
exit /b %RC%
