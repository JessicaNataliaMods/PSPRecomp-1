@echo off
setlocal EnableExtensions EnableDelayedExpansion

rem ================================================================
rem VCS V8.12.5 - Ninja + clang-cl performance/code-density launcher
rem Put this file in PSPRecomp\profiles\vcs.
rem ================================================================

for %%I in ("%~dp0..\..") do set "REPO=%%~fI"
for %%I in ("%~dp0.") do set "PROFILE=%%~fI"
set "BUILD=%REPO%\out\vcs-release-ninja-clangcl-v812"

if not exist "%REPO%\CMakeLists.txt" goto BAD_ROOT
if not exist "%PROFILE%\CMakeLists.txt" goto BAD_ROOT
if not exist "%PROFILE%\tools\apply_v811_perf.py" goto MISSING_OVERLAY
if not exist "%PROFILE%\tests\check_v811_perf.py" goto MISSING_OVERLAY
if not exist "%PROFILE%\tools\apply_v812_code_density.py" goto MISSING_OVERLAY
if not exist "%PROFILE%\tests\check_v812_code_density.py" goto MISSING_OVERLAY
if not exist "%PROFILE%\tools\apply_v8121_probe_link_fix.py" goto MISSING_OVERLAY
if not exist "%PROFILE%\tools\apply_v8123_ge_probe_globals_fix.py" goto MISSING_OVERLAY
if not exist "%PROFILE%\tools\dx12_ge_probe_runtime_globals.cpp" goto MISSING_OVERLAY
if not exist "%PROFILE%\tools\apply_v8124_boot_regression_fix.py" goto MISSING_OVERLAY
if not exist "%PROFILE%\tools\apply_v8125_registration_origin_fix.py" goto MISSING_OVERLAY

echo ================================================================
echo VCS V8.12.5 - CPU / GENERATED CODE-DENSITY BUILD
echo Ninja + clang-cl + lld-link
echo Repository: %REPO%
echo ================================================================

rem VS2022 supplies the Windows SDK/MSVC STL environment.
set "VSROOT=%ProgramFiles%\Microsoft Visual Studio\2022\Community"
if exist "%VSROOT%\Common7\Tools\VsDevCmd.bat" goto HAVE_VS
set "VSROOT=%ProgramFiles%\Microsoft Visual Studio\2022\Professional"
if exist "%VSROOT%\Common7\Tools\VsDevCmd.bat" goto HAVE_VS
set "VSROOT=%ProgramFiles%\Microsoft Visual Studio\2022\Enterprise"
if exist "%VSROOT%\Common7\Tools\VsDevCmd.bat" goto HAVE_VS
set "VSROOT=%ProgramFiles%\Microsoft Visual Studio\2022\BuildTools"
if exist "%VSROOT%\Common7\Tools\VsDevCmd.bat" goto HAVE_VS
goto NO_VS

:HAVE_VS
call "%VSROOT%\Common7\Tools\VsDevCmd.bat" -arch=x64 -host_arch=x64
if errorlevel 1 goto NO_VS

rem Standalone LLVM 22+.
if defined PSPRECOMP_LLVM_BIN (
  set "LLVM_BIN=%PSPRECOMP_LLVM_BIN%"
) else (
  set "LLVM_BIN=%ProgramFiles%\LLVM\bin"
)
set "CLANG_CL=%LLVM_BIN%\clang-cl.exe"
set "LLD_LINK=%LLVM_BIN%\lld-link.exe"
if not exist "%CLANG_CL%" goto NO_LLVM
if not exist "%LLD_LINK%" goto NO_LLVM

echo.
echo LLVM compiler:
"%CLANG_CL%" --version
if errorlevel 1 goto NO_LLVM

rem Prefer CMake/Ninja bundled with VS2022.
set "CMAKE=%VSROOT%\Common7\IDE\CommonExtensions\Microsoft\CMake\CMake\bin\cmake.exe"
set "NINJA=%VSROOT%\Common7\IDE\CommonExtensions\Microsoft\CMake\Ninja\ninja.exe"
if not exist "%CMAKE%" goto NO_CMAKE
if not exist "%NINJA%" goto NO_NINJA
set "CTEST=%VSROOT%\Common7\IDE\CommonExtensions\Microsoft\CMake\CMake\bin\ctest.exe"
if not exist "%CTEST%" set "CTEST=ctest.exe"

rem Python 3.
set "PY=py -3"
py -3 -c "import sys; raise SystemExit(0 if sys.version_info.major == 3 else 1)" >nul 2>&1
if errorlevel 1 set "PY=python"
%PY% -c "import sys; raise SystemExit(0 if sys.version_info.major == 3 else 1)" >nul 2>&1
if errorlevel 1 goto NO_PYTHON

rem Conservative parallelism for the generated corpus.
if defined PSPRECOMP_JOBS (
  set "JOBS=%PSPRECOMP_JOBS%"
) else (
  set "JOBS=10"
)
echo Compile workers: %JOBS%

if exist "%PROFILE%\FIX_FUTURE_TIMESTAMPS.bat" call "%PROFILE%\FIX_FUTURE_TIMESTAMPS.bat"
if errorlevel 1 goto FAIL

echo.
if exist "%PROFILE%\generated\v812_code_density_manifest.json" goto HAVE_V812_SOURCE
echo [0/10] Preparing V8.11 baseline for first V8.12 application...
%PY% "%PROFILE%\tools\apply_v811_perf.py" "%REPO%"
if errorlevel 1 goto FAIL
%PY% "%PROFILE%\tools\apply_v811_perf.py" "%REPO%" --check
if errorlevel 1 goto FAIL
%PY% "%PROFILE%\tests\check_v811_perf.py"
if errorlevel 1 goto FAIL
goto AFTER_V811_BASELINE

:HAVE_V812_SOURCE
echo [0/10] Existing V8.12 source detected.
echo        Repairing the old compact-registration origin bug BEFORE strict V8.12 validation...
%PY% "%PROFILE%\tools\apply_v8125_registration_origin_fix.py" "%REPO%"
if errorlevel 1 goto FAIL
%PY% "%PROFILE%\tools\apply_v8125_registration_origin_fix.py" "%REPO%" --check
if errorlevel 1 goto FAIL

:AFTER_V811_BASELINE
echo.
echo [1/10] Applying/validating V8.12 generated code-density pass...
%PY% "%PROFILE%\tools\apply_v812_code_density.py" "%REPO%"
if errorlevel 1 goto FAIL
%PY% "%PROFILE%\tools\apply_v812_code_density.py" "%REPO%" --check
if errorlevel 1 goto FAIL
%PY% "%PROFILE%\tests\check_v812_code_density.py"
if errorlevel 1 goto FAIL

echo.
echo [2/10] Applying V8.12.1 DX12 probe link fix...
%PY% "%PROFILE%\tools\apply_v8121_probe_link_fix.py" "%REPO%"
if errorlevel 1 goto FAIL
%PY% "%PROFILE%\tools\apply_v8121_probe_link_fix.py" "%REPO%" --check
if errorlevel 1 goto FAIL

echo.
echo [3/10] Applying V8.12.3 isolated GE-probe runtime globals fix...
%PY% "%PROFILE%\tools\apply_v8123_ge_probe_globals_fix.py" "%REPO%"
if errorlevel 1 goto FAIL
%PY% "%PROFILE%\tools\apply_v8123_ge_probe_globals_fix.py" "%REPO%" --check
if errorlevel 1 goto FAIL

echo.
echo [4/10] Applying V8.12.4 boot/runtime regression fix...
%PY% "%PROFILE%\tools\apply_v8124_boot_regression_fix.py" "%REPO%"
if errorlevel 1 goto FAIL
%PY% "%PROFILE%\tools\apply_v8124_boot_regression_fix.py" "%REPO%" --check
if errorlevel 1 goto FAIL

echo.
echo [5/10] Applying/validating V8.12.5 registration-origin + VDOT fix...
%PY% "%PROFILE%\tools\apply_v8125_registration_origin_fix.py" "%REPO%"
if errorlevel 1 goto FAIL
%PY% "%PROFILE%\tools\apply_v8125_registration_origin_fix.py" "%REPO%" --check
if errorlevel 1 goto FAIL
%PY% "%PROFILE%\tools\apply_v812_code_density.py" "%REPO%" --check
if errorlevel 1 goto FAIL
%PY% "%PROFILE%\tests\check_v812_code_density.py"
if errorlevel 1 goto FAIL

echo [6/10] Configuring clang-cl / lld-link / Ninja...
"%CMAKE%" -S "%REPO%" -B "%BUILD%" -G Ninja ^
  "-DCMAKE_MAKE_PROGRAM=%NINJA%" ^
  "-DCMAKE_CXX_COMPILER=%CLANG_CL%" ^
  "-DCMAKE_LINKER=%LLD_LINK%" ^
  "-DCMAKE_CXX_FLAGS_RELEASE=/O2 /DNDEBUG /arch:AVX2 /Gy" ^
  "-DCMAKE_EXE_LINKER_FLAGS_RELEASE=/OPT:REF /OPT:ICF" ^
  -DCMAKE_BUILD_TYPE=Release ^
  -DPSPRECOMP_PROFILE=vcs ^
  -DPSPRECOMP_WINDOWS_GPU_BACKEND=DX12 ^
  -DPSPRECOMP_GENERATED_OPT_LEVEL=2 ^
  -DPSPRECOMP_HOT_GENERATED_OPT_LEVEL=3 ^
  -DPSPRECOMP_GENERATED_INLINE_LEVEL=0 ^
  -DPSPRECOMP_HOT_GENERATED_INLINE_LEVEL=3 ^
  -DPSPRECOMP_PROFILE_GUIDED_AOT=ON ^
  -DPSPRECOMP_LTO=ON ^
  -DPSPRECOMP_VCS_AOT_LTO=OFF ^
  -DPSPRECOMP_NATIVE_AVX2=ON ^
  -DPSPRECOMP_AOT_ASSUME_NO_WRITE_WATCH=ON ^
  -DPSPRECOMP_AOT_PRODUCTION_FASTPATHS=ON ^
  -DPSPRECOMP_RUNTIME_CHAIN_TELEMETRY=OFF ^
  -DPSPRECOMP_VCS_TIER2_DEEP_TELEMETRY=OFF ^
  -DPSPRECOMP_MSVC_CGTHREADS=0 ^
  -DPSPRECOMP_MSVC_MP_JOBS=1 ^
  -DPSPRECOMP_BUILD_TESTS=ON ^
  -DPSPRECOMP_BUILD_PROFILE_TESTS=ON
if errorlevel 1 goto FAIL

echo.
echo [7/10] Building VCSNative...
"%CMAKE%" --build "%BUILD%" --parallel %JOBS% --target VCSNative
if errorlevel 1 goto FAIL

echo.
echo [8/10] Building/running regression tests...
"%CMAKE%" --build "%BUILD%" --parallel %JOBS% --target psprecomp_tests vcs_profile_tests vcs_config_tests audio_resampler_tests vfpu_tier2_tests vcs_bootstrap_paths_tests vcs_dx12_probe vcs_dx12_ge_probe
if errorlevel 1 goto FAIL
"%CTEST%" --test-dir "%BUILD%" --output-on-failure
if errorlevel 1 goto TEST_FAIL

set "BIN=%BUILD%\bin\Release"
if not exist "%BIN%\VCSNative.exe" goto FAIL

echo.
echo [9/10] Running DX12 probes...
"%BIN%\vcs_dx12_probe.exe"
if errorlevel 1 goto FAIL
set "PSPRECOMP_DX12_GE_STRICT=1"
set "PSPRECOMP_GE_PARALLEL_VERTEX_DECODE=0"
set "PSPRECOMP_GE_DIRECT_NONINDEXED_DRAW=1"
set "PSPRECOMP_DX12_PACKED_0115=1"
set "PSPRECOMP_DX12_NATIVE_INDEXED_DRAW=1"
set "PSPRECOMP_DX12_BATCH_MERGE=1"
"%BIN%\vcs_dx12_ge_probe.exe"
if errorlevel 1 goto FAIL
set "PSPRECOMP_DX12_GE_STRICT="

if exist "%PROFILE%\config\VCSNative.ini" copy /Y "%PROFILE%\config\VCSNative.ini" "%BIN%\VCSNative.ini" >nul

echo.
echo [10/10] Done.
for %%F in ("%BIN%\VCSNative.exe") do echo VCSNative.exe size: %%~zF bytes
if exist "%PROFILE%\generated\v812_code_density_manifest.json" (
  %PY% -c "import json,pathlib; p=pathlib.Path(r'%PROFILE%\generated\v812_code_density_manifest.json'); d=json.loads(p.read_text()); print('Generated CPP: {:.2f} MiB  cumulative saved: {:.2f} MiB'.format(d['generated_cpp_bytes_after']/1048576, d['source_bytes_saved_from_baseline']/1048576))"
)
echo ================================================================
echo BUILD OK
echo EXE: %BIN%\VCSNative.exe
echo ================================================================
exit /b 0

:BAD_ROOT
echo ERROR: put BUILD_VCS_NINJA_CLANG.bat in PSPRecomp\profiles\vcs.
exit /b 20
:MISSING_OVERLAY
echo ERROR: V8.11/V8.12/V8.12.1/V8.12.3/V8.12.4/V8.12.5 overlay files are missing under profiles\vcs.
exit /b 21
:NO_VS
echo ERROR: Visual Studio 2022 C++ environment not found in the standard Program Files path.
exit /b 2
:NO_LLVM
echo ERROR: clang-cl.exe or lld-link.exe not found in "%LLVM_BIN%".
echo Expected default: "%ProgramFiles%\LLVM\bin"
exit /b 3
:NO_CMAKE
echo ERROR: Visual Studio bundled CMake was not found.
exit /b 5
:NO_NINJA
echo ERROR: Visual Studio bundled Ninja was not found.
exit /b 6
:NO_PYTHON
echo ERROR: Python 3 was not found.
exit /b 7
:TEST_FAIL
echo ERROR: regression tests failed.
exit /b 8
:FAIL
echo ERROR: V8.12.5 build failed. See the first error above.
exit /b 1
