@echo off
setlocal EnableExtensions EnableDelayedExpansion

for %%I in ("%~dp0..\..\..") do set "REPO=%%~fI"
set "PROFILE=%REPO%\profiles\vcs"
set "BUILD=%REPO%\out\vcs-release-ninja"

if not exist "%REPO%\CMakeLists.txt" (
    echo ERROR: PSPRecomp root was not resolved correctly:
    echo   %REPO%
    pause
    exit /b 20
)
if not exist "%PROFILE%\CMakeLists.txt" (
    echo ERROR: VCS profile was not found:
    echo   %PROFILE%
    pause
    exit /b 21
)

rem ---------------------------------------------------------------------------
rem CRITICAL: ZIPs created in a UTC environment can extract on a UTC-3 Windows
rem machine with source mtimes several hours in the future. CMake/Ninja then
rem loops forever regenerating build.ninja because an input always remains newer
rem than the freshly written manifest.
rem
rem Clamp ONLY source files whose timestamp is actually > current local time.
rem Existing normal files and all out/build artifacts remain untouched.
rem ---------------------------------------------------------------------------
echo [0/7] Checking for future-dated source files...
call "%PROFILE%\FIX_FUTURE_TIMESTAMPS.bat"
if errorlevel 1 goto :FAIL

call "%PROFILE%\scripts\pick_jobs.bat"
if errorlevel 1 goto :FAIL
if defined PSPRECOMP_NINJA_JOBS set "JOBS=%PSPRECOMP_NINJA_JOBS%"
if not defined JOBS set "JOBS=2"

set "VSROOT="
if exist "%ProgramFiles%\Microsoft Visual Studio\2022\Community\Common7\Tools\VsDevCmd.bat" (
    set "VSROOT=%ProgramFiles%\Microsoft Visual Studio\2022\Community"
)
if not defined VSROOT if exist "%ProgramFiles%\Microsoft Visual Studio\2022\Professional\Common7\Tools\VsDevCmd.bat" (
    set "VSROOT=%ProgramFiles%\Microsoft Visual Studio\2022\Professional"
)
if not defined VSROOT if exist "%ProgramFiles%\Microsoft Visual Studio\2022\Enterprise\Common7\Tools\VsDevCmd.bat" (
    set "VSROOT=%ProgramFiles%\Microsoft Visual Studio\2022\Enterprise"
)
if not defined VSROOT if exist "%ProgramFiles%\Microsoft Visual Studio\2022\BuildTools\Common7\Tools\VsDevCmd.bat" (
    set "VSROOT=%ProgramFiles%\Microsoft Visual Studio\2022\BuildTools"
)

if not defined VSROOT (
    set "VSWHERE=%ProgramFiles(x86)%\Microsoft Visual Studio\Installer\vswhere.exe"
    if not exist "!VSWHERE!" set "VSWHERE=%ProgramFiles%\Microsoft Visual Studio\Installer\vswhere.exe"
    if exist "!VSWHERE!" (
        set "VSWHERE_OUT=%TEMP%\psprecomp_vswhere_%RANDOM%_%RANDOM%.txt"
        "!VSWHERE!" -latest -version "[17.0,18.0)" -products * -requires Microsoft.VisualStudio.Component.VC.Tools.x86.x64 -property installationPath > "!VSWHERE_OUT!" 2>nul
        if exist "!VSWHERE_OUT!" (
            set /p VSROOT=<"!VSWHERE_OUT!"
            del /q "!VSWHERE_OUT!" >nul 2>nul
        )
    )
)
if not defined VSROOT goto :NO_VS
if not exist "%VSROOT%\Common7\Tools\VsDevCmd.bat" goto :NO_VS

echo Initializing VS2022 x64 environment...
echo   VS root: %VSROOT%
call "%VSROOT%\Common7\Tools\VsDevCmd.bat" -arch=x64 -host_arch=x64 >nul
if errorlevel 1 goto :VS_ENV_FAIL
where cl.exe >nul 2>nul
if errorlevel 1 goto :NO_CL

set "CMAKE_EXE=%VSROOT%\Common7\IDE\CommonExtensions\Microsoft\CMake\CMake\bin\cmake.exe"
if not exist "%CMAKE_EXE%" set "CMAKE_EXE="
if not defined CMAKE_EXE (
    for /f "delims=" %%I in ('where cmake.exe 2^>nul') do if not defined CMAKE_EXE set "CMAKE_EXE=%%~fI"
)
if not defined CMAKE_EXE if exist "%ProgramFiles%\CMake\bin\cmake.exe" set "CMAKE_EXE=%ProgramFiles%\CMake\bin\cmake.exe"
if not defined CMAKE_EXE goto :NO_CMAKE

set "NINJA_EXE=%VSROOT%\Common7\IDE\CommonExtensions\Microsoft\CMake\Ninja\ninja.exe"
if not exist "%NINJA_EXE%" set "NINJA_EXE="
if not defined NINJA_EXE (
    for /f "delims=" %%I in ('where ninja.exe 2^>nul') do if not defined NINJA_EXE set "NINJA_EXE=%%~fI"
)
if not defined NINJA_EXE goto :NO_NINJA

for %%I in ("%CMAKE_EXE%") do set "CTEST_EXE=%%~dpIctest.exe"
if not exist "%CTEST_EXE%" set "CTEST_EXE=ctest.exe"

set "NINJA_STATUS=[%%f/%%t %%p ^| %%e elapsed ^| %%r running] "
set "BOOTFIX_STAMP=%BUILD%\.vcs_tier2_bootfix_20260816_v1"
set "SUPERBLOCK_STAMP=%BUILD%\.vcs_tier2_v4_150fps_buildfix3_20260816"
set "AMD_COMPAT_STAMP=%BUILD%\.vcs_dx12_amd_uma_compat_20260816"
set "PERF_V5_STAMP=%BUILD%\.vcs_perf_v5_async_vfpu_20260816"
set "PERF_V5_STALLFIX_STAMP=%BUILD%\.vcs_perf_v5_async_stallfix_20260817"
set "PERF_V5_PRESENTFIX_STAMP=%BUILD%\.vcs_perf_v5_async_presentfix_20260817"
set "PERF_V5_SYNC_RECOVERY_STAMP=%BUILD%\.vcs_perf_v5_sync_recovery_20260817"
set "PERF_V5_STABLE_RECOVERY2_STAMP=%BUILD%\.vcs_perf_v5_stable_recovery2_20260817"
set "PERF_V6_ENTITY_LEAF_STAMP=%BUILD%\.vcs_perf_v6_entity_leaf_inline_20260817"
set "PERF_V6_ENTITY_LEAF_FIX1_STAMP=%BUILD%\.vcs_perf_v6_entity_leaf_inline_crashfix1_20260817"
set "PERF_V7_ARCH_FASTMEM_STAMP=%BUILD%\.vcs_perf_v7_arch_fastmem_20260817"

echo ================================================================
echo VCS - NINJA PERFORMANCE INCREMENTAL BUILD
echo.
echo Repository:       %REPO%
echo Build tree:       %BUILD%
echo Visual Studio:    %VSROOT%
echo CMake:            %CMAKE_EXE%
echo Ninja:            %NINJA_EXE%
echo Ninja workers:    %JOBS%
echo cl.exe /MP:       OFF ^(Ninja owns compile parallelism^)
echo Generated AOT:    O3, cold /Ob0, measured hot /Ob3; V7 architectural direct-fastmem over V6 CRASHFIX1; risky async/decode quarantined
echo Host/core LTCG:   ON
echo AVX2/fast paths:  ON
echo ================================================================
echo.
echo [0b/7] Reapplying BOOTFIX-safe Tier-2 transforms (OPT1 semantic transforms disabled)...
call "%PROFILE%\APPLY_TIER2_EXTREME.bat"
if errorlevel 1 goto :FAIL

echo [0b2/7] Building V7 ARCH FASTMEM over gameplay-stable V6 CRASHFIX1...
set "PYTHON3_CMD="
py -3 -c "import sys; raise SystemExit(0 if sys.version_info.major == 3 else 1)" >nul 2>&1
if not errorlevel 1 set "PYTHON3_CMD=py -3"
if not defined PYTHON3_CMD (
    python -c "import sys; raise SystemExit(0 if sys.version_info.major == 3 else 1)" >nul 2>&1
    if not errorlevel 1 set "PYTHON3_CMD=python"
)
if not defined PYTHON3_CMD goto :NO_PYTHON3
echo   Python 3:        %PYTHON3_CMD%
%PYTHON3_CMD% "%PROFILE%\tools\build_tier2_superblocks.py" "%PROFILE%"
if errorlevel 1 goto :FAIL

if exist "%BUILD%" if not exist "%SUPERBLOCK_STAMP%" (
  echo.
  echo [0c-super/7] Tier2 V4 BUILDFIX3 - invalidating Geometry + runtime log once...
  rem BUILDFIX3 only changes Geometry codegen/shadow policy and runtime metadata.
  rem Keep every already-valid V4 object so Ninja does not repeat the expensive build.
  del /s /q "%BUILD%\*vcs_tier2_cluster_geometry*.obj" >nul 2>&1
  del /s /q "%BUILD%\*vcs_runtime_log*.obj" >nul 2>&1
)

if exist "%BUILD%" if not exist "%AMD_COMPAT_STAMP%" (
  echo.
  echo [0c-amd/7] DX12 AMD/UMA compatibility - invalidating backend + runtime log once...
  rem Do not touch generated/Tier2 objects: this compatibility revision only changes host DX12 policy.
  del /s /q "%BUILD%\*ge_gpu_backend_dx12*.obj" >nul 2>&1
  del /s /q "%BUILD%\*vcs_runtime_log*.obj" >nul 2>&1
)

if exist "%BUILD%" if not exist "%PERF_V5_STAMP%" (
  echo.
  echo [0c-v5/7] V5 ASYNC/VFPU - invalidating hot clusters + changed host objects once...
  rem Hooks/generated units are unchanged. Rebuild only the five modified Tier2 cluster TUs and host policy/backend/log.
  del /s /q "%BUILD%\*vcs_tier2_cluster_entity*.obj" >nul 2>&1
  del /s /q "%BUILD%\*vcs_tier2_cluster_matrix*.obj" >nul 2>&1
  del /s /q "%BUILD%\*vcs_tier2_cluster_physics*.obj" >nul 2>&1
  del /s /q "%BUILD%\*vcs_tier2_cluster_world*.obj" >nul 2>&1
  del /s /q "%BUILD%\*vcs_tier2_cluster_edge43*.obj" >nul 2>&1
  del /s /q "%BUILD%\*vcs_config*.obj" >nul 2>&1
  del /s /q "%BUILD%\*vcs_native_fast_paths*.obj" >nul 2>&1
  del /s /q "%BUILD%\*ge_gpu_backend_dx12*.obj" >nul 2>&1
  del /s /q "%BUILD%\*vcs_runtime_log*.obj" >nul 2>&1
)

if exist "%BUILD%" if not exist "%PERF_V5_STALLFIX_STAMP%" (
  echo.
  echo [0c-v5fix/7] V5 GE ASYNC STALL-RACE FIX - invalidating profile + runtime log once...
  rem Hotfix only changes the async GE scheduler/telemetry. Keep all Tier2 and DX12 objects.
  del /s /q "%BUILD%\*vcs_profile*.obj" >nul 2>&1
  del /s /q "%BUILD%\*vcs_runtime_log*.obj" >nul 2>&1
)

if exist "%BUILD%" if not exist "%PERF_V5_PRESENTFIX_STAMP%" (
  echo.
  echo [0c-v5present/7] V5 GE ASYNC PRESENTFIX - invalidating profile + runtime log once...
  rem Presentation safe-point fix only changes async GE/display scheduling + metadata.
  del /s /q "%BUILD%\*vcs_profile*.obj" >nul 2>&1
  del /s /q "%BUILD%\*vcs_runtime_log*.obj" >nul 2>&1
)

if exist "%BUILD%" if not exist "%PERF_V5_SYNC_RECOVERY_STAMP%" (
  echo.
  echo [0c-v5sync/7] V5 SYNC RECOVERY - restoring proven GE scheduler + safe defaults once...
  rem Only scheduler/config/log changed. Preserve expensive Tier2/DX12 objects.
  del /s /q "%BUILD%\*vcs_profile*.obj" >nul 2>&1
  del /s /q "%BUILD%\*vcs_config*.obj" >nul 2>&1
  del /s /q "%BUILD%\*vcs_runtime_log*.obj" >nul 2>&1
)

if exist "%BUILD%" if not exist "%PERF_V5_STABLE_RECOVERY2_STAMP%" (
  echo.
  echo [0c-v5stable2/7] V5 STABLE RECOVERY2 - quarantining parallel decode + V5 VFPU/native experiments once...
  rem Restore only the five V5-modified Tier2 clusters and native/config/log objects.
  rem Geometry and Boundary remain untouched to avoid the prior MSVC compile-time cliff.
  del /s /q "%BUILD%\*vcs_tier2_cluster_entity*.obj" >nul 2>&1
  del /s /q "%BUILD%\*vcs_tier2_cluster_matrix*.obj" >nul 2>&1
  del /s /q "%BUILD%\*vcs_tier2_cluster_physics*.obj" >nul 2>&1
  del /s /q "%BUILD%\*vcs_tier2_cluster_world*.obj" >nul 2>&1
  del /s /q "%BUILD%\*vcs_tier2_cluster_edge43*.obj" >nul 2>&1
  del /s /q "%BUILD%\*vcs_config*.obj" >nul 2>&1
  del /s /q "%BUILD%\*vcs_native_fast_paths*.obj" >nul 2>&1
  del /s /q "%BUILD%\*vcs_runtime_log*.obj" >nul 2>&1
)

if exist "%BUILD%" if not exist "%PERF_V6_ENTITY_LEAF_STAMP%" (
  echo.
  echo [0c-v6entity/7] V6 ENTITY LEAF INLINE - invalidating Entity + runtime log once...
  rem V6 changes only the Entity Tier2 TU, its generator, and runtime metadata.
  rem Keep Geometry and every generated AOT object to preserve the stable incremental build.
  del /s /q "%BUILD%\*vcs_tier2_cluster_entity*.obj" >nul 2>&1
  del /s /q "%BUILD%\*vcs_runtime_log*.obj" >nul 2>&1
)

if exist "%BUILD%" if not exist "%PERF_V6_ENTITY_LEAF_FIX1_STAMP%" (
  echo.
  echo [0c-v6entityfix1/7] V6 ENTITY LEAF INLINE CRASHFIX1 - publishing continuation PC before scheduler boundary...
  rem Only Entity codegen and runtime metadata changed. No Geometry/AOT rebuild.
  del /s /q "%BUILD%\*vcs_tier2_cluster_entity*.obj" >nul 2>&1
  del /s /q "%BUILD%\*vcs_runtime_log*.obj" >nul 2>&1
)

if exist "%BUILD%" if not exist "%PERF_V7_ARCH_FASTMEM_STAMP%" (
  echo.
  echo [0c-v7fastmem/7] V7 ARCH FASTMEM - one-time AOT memory-model rebuild...
  rem This is intentionally not a micro hotfix: guest_memory.hpp is inlined into every
  rem generated unit so all AOT objects must see the direct-fastmem address model.
  rem Geometry/Boundary keep their exact V4 Tier2 source; they only recompile against
  rem the new memory view. This one-time rebuild is required for a global CPU change.
  del /s /q "%BUILD%\*generated_unit_*.obj" >nul 2>&1
  del /s /q "%BUILD%\*vcs_tier2_cluster*.obj" >nul 2>&1
  del /s /q "%BUILD%\*guest_memory*.obj" >nul 2>&1
  del /s /q "%BUILD%\*vcs_profile*.obj" >nul 2>&1
  del /s /q "%BUILD%\*vcs_runtime_log*.obj" >nul 2>&1
  del /s /q "%BUILD%\*main*.obj" >nul 2>&1
)

if exist "%BUILD%" if not exist "%BOOTFIX_STAMP%" (
  echo.
  echo [0c/7] BOOTFIX revision changed - invalidating stale .obj/.pch once...
  del /s /q "%BUILD%\*.obj" >nul 2>&1
  del /s /q "%BUILD%\*.pch" >nul 2>&1
)

echo.
echo [1/7] Configuring persistent Ninja Release tree...
"%CMAKE_EXE%" -S "%REPO%" -B "%BUILD%" -G Ninja ^
  "-DCMAKE_MAKE_PROGRAM=%NINJA_EXE%" ^
  -DCMAKE_BUILD_TYPE=Release ^
  -DPSPRECOMP_PROFILE=vcs ^
  -DPSPRECOMP_GENERATED_OPT_LEVEL=3 ^
  -DPSPRECOMP_LTO=ON ^
  -DPSPRECOMP_NATIVE_AVX2=ON ^
  -DPSPRECOMP_AOT_ASSUME_NO_WRITE_WATCH=ON ^
  -DPSPRECOMP_AOT_PRODUCTION_FASTPATHS=ON ^
  -DPSPRECOMP_MSVC_CGTHREADS=0 ^
  -DPSPRECOMP_MSVC_MP_JOBS=1 ^
  -DPSPRECOMP_PROFILE_GUIDED_AOT=ON ^
  -DPSPRECOMP_HOT_GENERATED_OPT_LEVEL=3 ^
  -DPSPRECOMP_GENERATED_INLINE_LEVEL=0 ^
  -DPSPRECOMP_HOT_GENERATED_INLINE_LEVEL=3 ^
  -DPSPRECOMP_VCS_AOT_LTO=OFF ^
  -DPSPRECOMP_BUILD_TESTS=ON ^
  -DPSPRECOMP_BUILD_PROFILE_TESTS=ON
if errorlevel 1 goto :FAIL

echo.
echo [2/7] Building VCSNative with Ninja...
"%CMAKE_EXE%" --build "%BUILD%" --parallel %JOBS% --target VCSNative
if errorlevel 1 goto :FAIL
>"%BOOTFIX_STAMP%" echo VCS Tier2 BOOTFIX 2026-08-16 v1
>"%SUPERBLOCK_STAMP%" echo VCS Tier2 V4 BUILDFIX3 2026-08-16
>"%AMD_COMPAT_STAMP%" echo VCS DX12 AMD UMA COMPAT 2026-08-16
>"%PERF_V5_STAMP%" echo VCS PERF V5 ASYNC VFPU 2026-08-16
>"%PERF_V5_STALLFIX_STAMP%" echo VCS PERF V5 GE ASYNC STALL-RACE FIX 2026-08-17
>"%PERF_V5_PRESENTFIX_STAMP%" echo VCS PERF V5 GE ASYNC PRESENTFIX 2026-08-17
>"%PERF_V5_SYNC_RECOVERY_STAMP%" echo VCS PERF V5 SYNC RECOVERY 2026-08-17
>"%PERF_V5_STABLE_RECOVERY2_STAMP%" echo VCS PERF V5 STABLE RECOVERY2 2026-08-17
>"%PERF_V6_ENTITY_LEAF_STAMP%" echo VCS PERF V6 ENTITY LEAF INLINE 2026-08-17
>"%PERF_V6_ENTITY_LEAF_FIX1_STAMP%" echo VCS PERF V6 ENTITY LEAF INLINE CRASHFIX1 2026-08-17
>"%PERF_V7_ARCH_FASTMEM_STAMP%" echo VCS PERF V7 ARCH FASTMEM 2026-08-17

echo.
echo [2b/7] Building tests and DX12 probes...
"%CMAKE_EXE%" --build "%BUILD%" --parallel %JOBS% --target ^
  psprecomp_tests vcs_profile_tests vcs_config_tests audio_resampler_tests vfpu_tier2_tests ^
  vcs_bootstrap_paths_tests vcs_dx12_probe vcs_dx12_ge_probe
if errorlevel 1 goto :FAIL

echo.
echo [3/7] Running regression tests...
"%CTEST_EXE%" --test-dir "%BUILD%" --output-on-failure
if errorlevel 1 goto :TEST_FAIL

set "BIN=%BUILD%\bin\Release"
if not exist "%BIN%\VCSNative.exe" (
    echo ERROR: VCSNative.exe was not produced:
    echo   %BIN%\VCSNative.exe
    goto :FAIL
)

echo.
echo [4/7] DX12 device/swapchain probe...
"%BIN%\vcs_dx12_probe.exe"
if errorlevel 1 goto :DX12_FAIL

echo.
echo [5/7] GE compatibility probe...
set "PSPRECOMP_DX12_GE_STRICT=1"
set "PSPRECOMP_GE_PARALLEL_VERTEX_DECODE=0"
set "PSPRECOMP_GE_DIRECT_NONINDEXED_DRAW=0"
set "PSPRECOMP_DX12_PACKED_0115=0"
set "PSPRECOMP_DX12_NATIVE_INDEXED_DRAW=0"
set "PSPRECOMP_DX12_BATCH_MERGE=0"
"%BIN%\vcs_dx12_ge_probe.exe"
if errorlevel 1 goto :GE_FAIL
set "PSPRECOMP_DX12_GE_STRICT="

echo.
echo [6/7] GE production probe...
set "PSPRECOMP_DX12_GE_STRICT=1"
set "PSPRECOMP_GE_GPU_HW_CULL=1"
set "PSPRECOMP_GE_PARALLEL_VERTEX_DECODE=0"
set "PSPRECOMP_GE_DIRECT_NONINDEXED_DRAW=1"
set "PSPRECOMP_DX12_PACKED_0115=1"
set "PSPRECOMP_DX12_NATIVE_INDEXED_DRAW=1"
set "PSPRECOMP_DX12_BATCH_MERGE=1"
"%BIN%\vcs_dx12_ge_probe.exe"
if errorlevel 1 goto :GE_PROD_FAIL
set "PSPRECOMP_DX12_GE_STRICT="

echo.
echo [7/7] Installing current VCS config...
copy /Y "%PROFILE%\config\VCSNative.ini" "%BIN%\VCSNative.ini" >nul
if errorlevel 1 goto :FAIL

echo.
echo ================================================================
echo NINJA BUILD OK
echo EXE:
echo   %BIN%\VCSNative.exe
echo.
echo Later runs reuse:
echo   %BUILD%
echo ================================================================
exit /b 0

:NO_VS
echo ERROR: Visual Studio 2022 with Desktop C++ tools was not found.
pause
exit /b 2
:VS_ENV_FAIL
echo ERROR: VsDevCmd.bat failed to initialize x64.
pause
exit /b 3
:NO_CL
echo ERROR: cl.exe was not found after initializing VS2022.
pause
exit /b 4
:NO_CMAKE
echo ERROR: CMake was not found.
pause
exit /b 5
:NO_NINJA
echo ERROR: ninja.exe was not found.
pause
exit /b 6

:NO_PYTHON3
echo ERROR: Python 3 was not found.
echo The Tier-2 superblock generator requires Python 3.
echo Tried: py -3 and python.
pause
exit /b 7
:TEST_FAIL
echo ERROR: regression tests failed.
pause
exit /b 8
:DX12_FAIL
echo ERROR: DX12 probe failed.
pause
exit /b 9
:GE_FAIL
echo ERROR: compatibility GE probe failed.
pause
exit /b 10
:GE_PROD_FAIL
echo ERROR: production GE probe failed.
pause
exit /b 11
:FAIL
echo.
echo ERROR: Ninja VCS build failed.
echo Send the FIRST real error shown above.
pause
exit /b 12
