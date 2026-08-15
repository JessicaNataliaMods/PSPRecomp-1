@echo off
call "%~dp0scripts\build_release_ninja.bat"
exit /b %errorlevel%
