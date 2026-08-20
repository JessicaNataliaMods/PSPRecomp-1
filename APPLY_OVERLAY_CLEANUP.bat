@echo off
setlocal
cd /d "%~dp0"
echo Cleaning obsolete shader files moved into profiles\vcs\host\propershaders\private...
if exist "profiles\\vcs\\host\\ge_cloudworks_present_shader.hpp" del /f /q "profiles\\vcs\\host\\ge_cloudworks_present_shader.hpp"
if exist "profiles\\vcs\\host\\ge_gpu_hdr_shaders.inc" del /f /q "profiles\\vcs\\host\\ge_gpu_hdr_shaders.inc"
if exist "profiles\\vcs\\shaders\\hdr\\LICENSE_SIMULATEHDR.txt" del /f /q "profiles\\vcs\\shaders\\hdr\\LICENSE_SIMULATEHDR.txt"
if exist "profiles\\vcs\\shaders\\hdr\\hdr_blur.frag" del /f /q "profiles\\vcs\\shaders\\hdr\\hdr_blur.frag"
if exist "profiles\\vcs\\shaders\\hdr\\hdr_blur.frag.spv" del /f /q "profiles\\vcs\\shaders\\hdr\\hdr_blur.frag.spv"
if exist "profiles\\vcs\\shaders\\hdr\\hdr_combine.frag" del /f /q "profiles\\vcs\\shaders\\hdr\\hdr_combine.frag"
if exist "profiles\\vcs\\shaders\\hdr\\hdr_combine.frag.spv" del /f /q "profiles\\vcs\\shaders\\hdr\\hdr_combine.frag.spv"
if exist "profiles\\vcs\\shaders\\hdr\\hdr_composite.frag" del /f /q "profiles\\vcs\\shaders\\hdr\\hdr_composite.frag"
if exist "profiles\\vcs\\shaders\\hdr\\hdr_composite.frag.spv" del /f /q "profiles\\vcs\\shaders\\hdr\\hdr_composite.frag.spv"
if exist "profiles\\vcs\\shaders\\hdr\\hdr_extract.frag" del /f /q "profiles\\vcs\\shaders\\hdr\\hdr_extract.frag"
if exist "profiles\\vcs\\shaders\\hdr\\hdr_extract.frag.spv" del /f /q "profiles\\vcs\\shaders\\hdr\\hdr_extract.frag.spv"
if exist "profiles\\vcs\\shaders\\hdr\\hdr_fullscreen.vert" del /f /q "profiles\\vcs\\shaders\\hdr\\hdr_fullscreen.vert"
if exist "profiles\\vcs\\shaders\\hdr\\hdr_fullscreen.vert.spv" del /f /q "profiles\\vcs\\shaders\\hdr\\hdr_fullscreen.vert.spv"
echo Cleanup complete.
endlocal
