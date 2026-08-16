@echo off
setlocal EnableExtensions
for %%I in ("%~dp0..\..") do set "REPO=%%~fI"
where py >nul 2>nul
if not errorlevel 1 (
  py -3 "%~dp0tools\apply_tier2_extreme.py" "%~dp0generated"
  exit /b %errorlevel%
)
where python >nul 2>nul
if errorlevel 1 (
  echo Python 3 not found. Install Python 3 or run tools\apply_tier2_extreme.py manually.
  exit /b 2
)
python "%~dp0tools\apply_tier2_extreme.py" "%~dp0generated"
exit /b %errorlevel%
