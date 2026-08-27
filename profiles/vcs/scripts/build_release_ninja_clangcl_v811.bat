@echo off
setlocal EnableExtensions EnableDelayedExpansion
for %%I in ("%~dp0..\..\..") do set "REPO=%%~fI"
set "PROFILE=%REPO%\profiles\vcs"
set "BUILD=%REPO%\out\vcs-release-ninja-clangcl-v811"

if not exist "%REPO%\CMakeLists.txt" goto :BAD_ROOT
if not exist "%PROFILE%\CMakeLists.txt" goto :BAD_ROOT

echo ================================================================
echo VCS V8.11 - CPU / CODE-DENSITY BUILD
echo Ninja + clang-cl + lld-link
 echo Base: temp-edits-1 / V8.10.1
 echo Audio work intentionally untouched
 echo ================================================================

call "%PROFILE%\FIX_FUTURE_TIMESTAMPS.bat"
if errorlevel 1 goto :FAIL
call "%PROFILE%\scripts\pick_jobs.bat"
if errorlevel 1 goto :FAIL
if defined PSPRECOMP_NINJA_JOBS set "JOBS=%PSPRECOMP_NINJA_JOBS%"
if not defined JOBS set "JOBS=2"

set "VSROOT="
for %%E in (Community Professional Enterprise BuildTools) do (
  if not defined VSROOT if exist "%ProgramFiles%\Microsoft Visual Studio\2022\%%E\Common7\Tools\VsDevCmd.bat" set "VSROOT=%ProgramFiles%\Microsoft Visual Studio\2022\%%E"
  if not defined VSROOT if exist "%ProgramFiles(x86)%\Microsoft Visual Studio\2022\%%E\Common7\Tools\VsDevCmd.bat" set "VSROOT=%ProgramFiles(x86)%\Microsoft Visual Studio\2022\%%E"
)
if not defined VSROOT (
  set "VSWHERE=%ProgramFiles(x86)%\Microsoft Visual Studio\Installer\vswhere.exe"
  if exist "!VSWHERE!" for /f "delims=" %%I in ('"!VSWHERE!" -latest -version "[17.0,18.0)" -products * -requires Microsoft.VisualStudio.Component.VC.Tools.x86.x64 -property installationPath 2^>nul') do if not defined VSROOT set "VSROOT=%%I"
)
if not defined VSROOT goto :NO_VS
call "%VSROOT%\Common7\Tools\VsDevCmd.bat" -arch=x64 -host_arch=x64 >nul
if errorlevel 1 goto :NO_VS

if defined PSPRECOMP_LLVM_BIN (
  set "LLVM_BIN=%PSPRECOMP_LLVM_BIN%"
) else (
  set "LLVM_BIN=%ProgramFiles%\LLVM\bin"
)
set "CLANG_CL_EXE=%LLVM_BIN%\clang-cl.exe"
set "LLD_LINK_EXE=%LLVM_BIN%\lld-link.exe"
if not exist "%CLANG_CL_EXE%" goto :NO_LLVM
if not exist "%LLD_LINK_EXE%" goto :NO_LLVM
for /f "tokens=3" %%V in ('"%CLANG_CL_EXE%" --version ^| findstr /B /C:"clang version"') do set "CLANG_VERSION=%%V"
for /f "tokens=1 delims=." %%M in ("!CLANG_VERSION!") do set "CLANG_MAJOR=%%M"
if not defined CLANG_MAJOR goto :NO_LLVM
if !CLANG_MAJOR! LSS 22 goto :OLD_LLVM

set "CMAKE_EXE=%VSROOT%\Common7\IDE\CommonExtensions\Microsoft\CMake\CMake\bin\cmake.exe"
if not exist "%CMAKE_EXE%" set "CMAKE_EXE="
if not defined CMAKE_EXE for /f "delims=" %%I in ('where cmake.exe 2^>nul') do if not defined CMAKE_EXE set "CMAKE_EXE=%%~fI"
if not defined CMAKE_EXE goto :NO_CMAKE
set "NINJA_EXE=%VSROOT%\Common7\IDE\CommonExtensions\Microsoft\CMake\Ninja\ninja.exe"
if not exist "%NINJA_EXE%" set "NINJA_EXE="
if not defined NINJA_EXE for /f "delims=" %%I in ('where ninja.exe 2^>nul') do if not defined NINJA_EXE set "NINJA_EXE=%%~fI"
if not defined NINJA_EXE goto :NO_NINJA
for %%I in ("%CMAKE_EXE%") do set "CTEST_EXE=%%~dpIctest.exe"
if not exist "%CTEST_EXE%" set "CTEST_EXE=ctest.exe"

set "PYTHON3_CMD="
py -3 -c "import sys; raise SystemExit(0 if sys.version_info.major == 3 else 1)" >nul 2>&1
if not errorlevel 1 set "PYTHON3_CMD=py -3"
if not defined PYTHON3_CMD (
  python -c "import sys; raise SystemExit(0 if sys.version_info.major == 3 else 1)" >nul 2>&1
  if not errorlevel 1 set "PYTHON3_CMD=python"
)
if not defined PYTHON3_CMD goto :NO_PYTHON

if not defined PSPRECOMP_TIER2_DEEP_TELEMETRY set "PSPRECOMP_TIER2_DEEP_TELEMETRY=OFF"
if not defined PSPRECOMP_RUNTIME_CHAIN_TELEMETRY set "PSPRECOMP_RUNTIME_CHAIN_TELEMETRY=OFF"
if /I "%PSPRECOMP_TIER2_DEEP_TELEMETRY%"=="1" set "PSPRECOMP_TIER2_DEEP_TELEMETRY=ON"
if /I "%PSPRECOMP_RUNTIME_CHAIN_TELEMETRY%"=="1" set "PSPRECOMP_RUNTIME_CHAIN_TELEMETRY=ON"

 echo [0/6] Applying idempotent V8.11 structural CPU pass...
%PYTHON3_CMD% "%PROFILE%\tools\apply_v811_perf.py" "%REPO%"
if errorlevel 1 goto :FAIL
%PYTHON3_CMD% "%PROFILE%\tools\apply_v811_perf.py" "%REPO%" --check
if errorlevel 1 goto :FAIL
%PYTHON3_CMD% "%PROFILE%\tests\check_v811_perf.py"
if errorlevel 1 goto :FAIL

 echo [1/6] Verifying protected V8.10 baseline...
%PYTHON3_CMD% "%PROFILE%\tests\check_v827_save_thread_lifecycle.py"
if errorlevel 1 goto :FAIL
%PYTHON3_CMD% "%PROFILE%\tests\check_v827a_internal_save_repro_gate.py"
if errorlevel 1 goto :FAIL
%PYTHON3_CMD% "%PROFILE%\tests\check_v84_aggressive_cpu.py"
if errorlevel 1 goto :FAIL
%PYTHON3_CMD% "%PROFILE%\tests\check_v85_aggressive_vfpu.py"
if errorlevel 1 goto :FAIL
%PYTHON3_CMD% "%PROFILE%\tests\check_v86_radio_vfpu_ct2.py"
if errorlevel 1 goto :FAIL
%PYTHON3_CMD% "%PROFILE%\tests\check_v88_extreme_cpu_trusted_dispatch.py"
if errorlevel 1 goto :FAIL
%PYTHON3_CMD% "%PROFILE%\tests\check_v89_register_residency.py"
if errorlevel 1 goto :FAIL
%PYTHON3_CMD% "%PROFILE%\tests\check_v810_resident_regions.py"
if errorlevel 1 goto :FAIL

 echo [2/6] Configuring clang-cl !CLANG_VERSION! / lld-link / Ninja...
rem Cold 84%% of generated TUs use O2 instead of Ox/O3 to reduce code footprint.
rem The measured 37-unit hot set remains O3 through PSPRECOMP_HOT_GENERATED_OPT_LEVEL.
rem /arch:AVX2 is forced here because CMake's generic MSVC gate does not reliably
rem classify clang-cl as the Microsoft compiler even though it uses the MSVC ABI.
"%CMAKE_EXE%" -S "%REPO%" -B "%BUILD%" -G Ninja ^
  "-DCMAKE_MAKE_PROGRAM=%NINJA_EXE%" ^
  "-DCMAKE_CXX_COMPILER=%CLANG_CL_EXE%" ^
  "-DCMAKE_LINKER=%LLD_LINK_EXE%" ^
  "-DCMAKE_CXX_FLAGS_RELEASE=/O2 /DNDEBUG /arch:AVX2 /Gy /Gw" ^
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
  -DPSPRECOMP_RUNTIME_CHAIN_TELEMETRY=%PSPRECOMP_RUNTIME_CHAIN_TELEMETRY% ^
  -DPSPRECOMP_VCS_TIER2_DEEP_TELEMETRY=%PSPRECOMP_TIER2_DEEP_TELEMETRY% ^
  -DPSPRECOMP_MSVC_CGTHREADS=0 ^
  -DPSPRECOMP_MSVC_MP_JOBS=1 ^
  -DPSPRECOMP_BUILD_TESTS=ON ^
  -DPSPRECOMP_BUILD_PROFILE_TESTS=ON
if errorlevel 1 goto :FAIL

 echo [3/6] Building VCSNative...
set "NINJA_STATUS=[%%f/%%t %%p ^| %%e elapsed ^| %%r running] "
"%CMAKE_EXE%" --build "%BUILD%" --parallel %JOBS% --target VCSNative
if errorlevel 1 goto :FAIL

 echo [4/6] Building and running regression tests...
"%CMAKE_EXE%" --build "%BUILD%" --parallel %JOBS% --target psprecomp_tests vcs_profile_tests vcs_config_tests audio_resampler_tests vfpu_tier2_tests vcs_bootstrap_paths_tests vcs_dx12_probe vcs_dx12_ge_probe
if errorlevel 1 goto :FAIL
"%CTEST_EXE%" --test-dir "%BUILD%" --output-on-failure
if errorlevel 1 goto :TEST_FAIL

set "BIN=%BUILD%\bin\Release"
if not exist "%BIN%\VCSNative.exe" goto :FAIL
 echo [5/6] DX12 / GE probes...
"%BIN%\vcs_dx12_probe.exe"
if errorlevel 1 goto :FAIL
set "PSPRECOMP_DX12_GE_STRICT=1"
set "PSPRECOMP_GE_PARALLEL_VERTEX_DECODE=0"
set "PSPRECOMP_GE_DIRECT_NONINDEXED_DRAW=1"
set "PSPRECOMP_DX12_PACKED_0115=1"
set "PSPRECOMP_DX12_NATIVE_INDEXED_DRAW=1"
set "PSPRECOMP_DX12_BATCH_MERGE=1"
"%BIN%\vcs_dx12_ge_probe.exe"
if errorlevel 1 goto :FAIL
set "PSPRECOMP_DX12_GE_STRICT="

 echo [6/6] Installing config + reporting size...
copy /Y "%PROFILE%\config\VCSNative.ini" "%BIN%\VCSNative.ini" >nul
for %%F in ("%BIN%\VCSNative.exe") do echo VCSNative.exe size: %%~zF bytes
%PYTHON3_CMD% -c "import pathlib; p=pathlib.Path(r'%PROFILE%')/'generated'; fs=list(p.glob('*.cpp')); n=sum(x.stat().st_size for x in fs); print(f'Generated C++: {len(fs)} files, {n/1048576:.2f} MiB')"

echo.
echo ================================================================
echo V8.11 CLANG-CL BUILD OK
echo EXE: %BIN%\VCSNative.exe
echo Build tree: %BUILD%
echo ================================================================
exit /b 0

:BAD_ROOT
echo ERROR: repository root/profile not found.
exit /b 20
:NO_VS
echo ERROR: Visual Studio 2022 Desktop C++ tools not found.
exit /b 2
:NO_LLVM
echo ERROR: standalone LLVM clang-cl/lld-link not found in "%LLVM_BIN%".
echo Install LLVM 22+ or set PSPRECOMP_LLVM_BIN to its bin directory.
exit /b 3
:OLD_LLVM
echo ERROR: clang-cl !CLANG_VERSION! is too old. VCS requires LLVM 22+.
echo LLVM 19 is known to hang on generated_unit_0103.cpp in this project.
exit /b 4
:NO_CMAKE
echo ERROR: CMake not found.
exit /b 5
:NO_NINJA
echo ERROR: Ninja not found.
exit /b 6
:NO_PYTHON
echo ERROR: Python 3 not found.
exit /b 7
:TEST_FAIL
echo ERROR: regression tests failed.
exit /b 8
:FAIL
echo.
echo ERROR: V8.11 clang-cl Ninja build failed.
echo Send the FIRST real compiler/test error above.
exit /b 12
