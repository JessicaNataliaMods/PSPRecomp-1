@echo off
setlocal
rem Compatibility launcher: keep one authoritative V8.11 build path.
call "%~dp0build_release_ninja_clangcl_v811.bat"
exit /b %ERRORLEVEL%
