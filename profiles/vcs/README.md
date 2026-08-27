# VCS profile

This profile builds `VCSNative.exe` for the supported GTA: Vice City Stories PSP executable. It contains the title-specific generated AOT corpus, HLE/profile code, DX12 renderer integration, audio/input support and configuration required by the current native build.

## Quick build on Windows

The canonical Windows performance build is:

```text
profiles\vcs\BUILD_VCS_NINJA_CLANG.bat
```

The validated toolchain is **CMake + Ninja + standalone clang-cl 22.1.8 + lld-link**. Visual Studio 2022 supplies the Windows SDK and MSVC C/C++ runtime/STL environment.

The current V8.12 pipeline first normalizes the V8.11 generated-code baseline and then applies the V8.12 code-density pass before configuring Ninja. The generated AOT corpus remains split into 234 translation units. General generated units use O2, the measured hot set uses the higher optimization tier, AVX2/native fast paths remain enabled, host/core LTO remains enabled and full-corpus AOT LTO remains disabled.

The default build directory is:

```text
out\vcs-release-ninja-clangcl-v812
```

The executable is produced at:

```text
out\vcs-release-ninja-clangcl-v812\bin\Release\VCSNative.exe
```

`BUILD_VCS_NINJA.bat` is the older MSVC/Ninja reconstruction path. It is retained only for legacy/development reconstruction and is not the canonical V8.12 release build.

## V8.12 generated code-density policy

The generated C++ corpus is intentionally large because it is a static translation of the guest executable. Source-file size by itself does not determine runtime speed: comments, whitespace and long C++ spellings disappear during compilation.

Runtime performance is affected by the **compiled native code footprint**, however. Excessive native text increases instruction-cache, iTLB and branch-predictor pressure. V8.12 therefore only performs source compaction where the transformation also preserves or improves the generated machine-code structure.

V8.12 currently performs two semantics-preserving density transformations:

1. The scheduler-visible V8.11 local redispatch fallback is shared once per generated unit instead of being source-expanded at every local boundary. The proven 256-transfer scheduler boundary and the bounded seven-round local redispatch policy are unchanged.
2. Per-PC generated registration is reconstructed from the same V8.11 compact entry masks through one Runtime loop. This preserves the exact registered entry set and exact Runtime tables while removing hundreds of repeated registration call sites from each generated translation unit.

The pass validates the expected 234 units, 181,789 registered generated entries and 11,299 scheduler-local links before the build continues. It writes:

```text
profiles\vcs\generated\v812_code_density_manifest.json
```

with the before/after generated-source byte counts.

## Source layout

```text
config/       VCS profile configuration and executable metadata
data/         Redistributable generated profile data
generated/    AOT C++ generated from the supported executable
host/         VCS HLE, bootstrap, renderer, audio, input and native fast paths
scripts/      Supporting Windows build/run/benchmark scripts
tests/        Profile regression tests
tools/        VCS-specific generator and maintenance tools
third_party/  Bundled dependencies and license notices
progress/     Local handoffs/history; ignored by Git
```

## Supported executable

The profile targets the ULUS-10160 PSP release currently used by the generated corpus. No EBOOT or commercial game asset is included.

## Prepare local game data

The runtime expects a decrypted ELF and the game's `PSP_GAME/USRDIR` data from your own copy. This repository does not include decryption code.

```powershell
.\profiles\vcs\tools\prepare_game.ps1 `
  -ExtractedUmdRoot D:\VCS_EXTRACTED `
  -DecryptedElf D:\local\EBOOT_DECRYPTED.ELF
```

The default destination is `profiles/vcs/game`, which is ignored by Git.

## Windows build requirements

- Visual Studio 2022 with Desktop C++ tools and a Windows SDK.
- Standalone LLVM/Clang 22 or newer. LLVM 22.1.8 is the validated baseline.
- CMake and Ninja. The launcher uses the copies bundled with Visual Studio when available.
- Python 3 for the generated-code transformation and validation steps.

Ninja owns dependency tracking and compile parallelism. Re-running the build after a small ordinary source change only rebuilds affected objects. A generated-code density revision necessarily recompiles the generated units whose source changed.

## Optimization policy

Global aggressive inlining is deliberately avoided for the generated corpus. Previous measurements showed that making the entire AOT body larger can reduce performance even when individual blocks look more optimized. The current policy favors code density and instruction-cache locality:

```text
general generated AOT  -> O2
measured hot AOT       -> higher optimization tier
full AOT LTO           -> OFF
host/core LTO          -> ON
AVX2/native fast paths -> ON
```

The generated compact entry maps, register residency, scheduler-safe resident regions, trusted direct chains and V8.11 local redispatch remain part of the current baseline.

## Resolution configuration

`profiles/vcs/config/VCSNative.ini` exposes both presentation and internal render resolution.

`[Display] ResolutionMode` accepts `PSP`, `Desktop` or `Custom`. `Custom` uses `Width` and `Height`. With `Fullscreen=true`, VCSNative uses a borderless desktop-sized window.

`[Rendering] InternalResolutionMode` accepts `PSP`, `Scale`, `Desktop` or `Custom`. `Scale` uses `InternalScale`; `Custom` uses `InternalWidth` and `InternalHeight`.

## Regenerate VCS AOT code

The VCS profile keeps an address-aware generator target separate from the generic framework generator:

```text
vcs_recomp
```

Its source lives in `profiles/vcs/tools/vcs_codegen_main.cpp`. The canonical clang/Ninja build reapplies the maintained generated-code passes after regeneration.

## Internal SAVE_REPRO diagnostics

`VCSNative.ini` ships with `[Testing] SaveRepro=false`. The checkpoint/trace harness is diagnostic-only and is not a supported gameplay save-state mechanism.
