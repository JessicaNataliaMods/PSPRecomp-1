# BOOTFIX NOTICE — 2026-08-16

The original EXTREME configuration in this document produced a Windows startup regression (black screen before loading). The current source tree is **BOOTFIX-safe**: GPR/FPR block promotion, cross-unit tail chaining, the VCS 2048 local-transfer cap, and forced async/tick/parallel-vertex startup defaults are disabled in the default path. Safe VFPU/FCR31/unaligned-memory lowerings remain enabled. See `VCS_TIER2_BOOTFIX_2026-08-16.md`.

---

# VCS Recomp — Tier-2 Extreme CPU/GE Optimization Handoff

**Date:** 2026-08-16  
**Baseline input:** `PSPRecomp-temp-edits-1.zip`  
**Goal:** apply the actionable optimizations from `VCS_RECOMP_PERFORMANCE_THEORY_2026-08-14.md` without reintroducing the known global-code-bloat / MSVC non-convergence failures.

## Result in one sentence

This tree now has a profile-guided Tier-2 source-lowering layer over the existing AOT: hot-block GPR/FPR promotion, compile-time VFPU lowering, direct tail cross-unit transfers, fast unaligned guest memory, direct FCR31 condition lowering, hotter local chaining, profile-ranked AOT input layout, async GE/default host parallelism, and an idempotent reapply/build workflow.

This is intentionally **not** described as a complete new SSA compiler. A true cross-basic-block trace/SSA tier needs physical PC/trace profiles from the problematic city route; inventing traces statically would risk the same I-cache/code-size regression already measured in this project.

---

## 1. Cross-unit tail transfers: no chain-depth consumption

Fixed cross-unit `J` / branch edges that provably end the current generated frame now use:

```cpp
Runtime::invoke_chained_direct_tail<...>()
```

instead of call-style `invoke_chained_direct`.

Impact in the current generated corpus:

- **1,331** fixed cross-unit tail edges converted.
- Ordinary call-style direct chains drop from **50,932 -> 49,601** because those 1,331 edges are now classified correctly.
- Tail edges no longer consume `chain_depth_`, avoiding periodic unwind/re-dispatch solely because a long tail-transfer path crossed the normal call-depth limit.
- `PSPRECOMP_NO_CHAIN=1` remains authoritative and disables the tail path as well.
- Scheduler work is charged at the tail boundary before entering the target; if PSP ownership changes, the target is not entered using the switched context.

Both generic and VCS-specific code generators emit the new form, so this is not only a one-off generated-source patch.

---

## 2. Local transfer budget: 256 -> 2048

The generator already had the newer 2048 limit, but the checked-in VCS generated corpus was stale at 256.

- **11,299** local-transfer guards changed from `< 256u` to `< 2048u`.
- Current source and future codegen are now consistent.
- This reduces unnecessary outer-runtime redispatch for long intra-unit dynamic-control sequences.

---

## 3. Profile-guided GPR/FPR promotion on the measured hot 37 units

The existing unit profile identified 37 units accounting for roughly 80% of measured cross-unit activity. Register promotion is deliberately limited to these units because previous global cache/inlining experiments caused excessive MSVC memory/compile cost and I-cache/code-size regressions.

Hot IDs:

```text
0023 0024 0097 0030 0011 0091 0084 0043 0067 0163
0087 0142 0066 0152 0109 0179 0085 0215 0064 0149
0095 0199 0092 0206 0022 0190 0200 0080 0164 0198
0088 0155 0213 0154 0169 0035 0089
```

The conservative block-local pass:

- skips blocks with runtime/opaque execution boundaries;
- loads hot architectural registers into locals;
- tracks dirty values;
- flushes them at generated control exits;
- preserves delay-slot ordering;
- uses threshold 3 to avoid excessive register pressure.

Measured source transformations:

- GPR: **8,733 blocks**, **13,706 locals**, **74,603 occurrences replaced**, **12,173 dirty-register flush obligations**.
- FPR: **1,460 blocks**, **2,656 locals**, **15,138 occurrences replaced**, **2,602 dirty-register flush obligations**.
- Direct generated references to `ctx.gpr[]`: **1,230,757 -> 1,182,033** (**-48,724**).
- Direct generated references to `ctx.fpr[]`: **196,805 -> 186,925** (**-9,880**).

The marker `PSPRECOMP_VCS_TIER2_HOT_BLOCK_CACHE=1` makes this expensive transform idempotent.

---

## 4. VFPU Tier-2 compile-time lowering

The hot AOT now turns literal VFPU operands into template arguments so row/column/transpose/lane mapping and tiny loop sizes become compile-time constants.

New/expanded compile-time helpers cover:

- matrix read/write;
- destination-prefix writes with constexpr side;
- cross/quaternion;
- `VH2F` / `VF2H`;
- `VHDP`;
- `VX2I`;
- min/max;
- compare3;
- `VROT`;
- `VOCP`;
- horizontal `VAVG/VFAD` family;
- `VMSCL`;
- `VMMOV`;
- matrix init.

Transform counts from the untouched baseline hot set:

```text
matrix_reads=101
matrix_writes=15
destination_prefix_side=71
cross_quat=74
vh2f=41
vhdp=16
vx2i=20
vminmax=8
compare3=4
vrot=5
vf2h=3
horizontal=3
vocp=10
vmscl=1
vmmov=2
matrix_init=9
```

After the final pass, the 37 hot units contain **zero generic VFPU compute/read/matrix helper calls**. The only remaining generic VFPU calls there are **15 `eat_vfpu_prefixes()` calls**, which are the intended tiny architectural reset operation.

### Differential validation

A permanent `vfpu_tier2_tests` target was added. It compares the generic implementation against Tier-2 helpers bit-for-bit across the literal combinations used by the hot set and randomized VFPU state.

Additional one-off validation during this pass also covered:

- 65 distinct combinations from the earlier Tier-2 families;
- 7 destination-prefix `(register,length)` combinations, 512 randomized trials each;
- 13 combinations from the final six VFPU families, 256 randomized trials each.

All comparisons passed.

---

## 5. Unaligned MIPS guest-memory operations moved into AotFastView

`LWL/LWR/SWL/SWR` were still escaping the shared `AotFastView` and calling `GuestMemory` directly.

Added inline fast-view implementations preserving the exact MIPS merge formulas and the existing RAM/VRAM/write-watch fallback semantics.

Corpus change:

- **2,051** unaligned AOT accesses moved from `rt.memory().aot_*` to `aot_mem.aot_*`.
- Direct unaligned `GuestMemory` calls in generated units: **2,051 -> 0**.

Core regression tests include lane cases for LWL/LWR/SWL/SWR.

---

## 6. FPU condition helper boundaries eliminated

The generated AOT had:

- **8,321** calls to `ctx.set_fpu_condition(...)`;
- **8,321** calls to `ctx.fpu_condition()`.

Those operations only write/read FCR31 bit 23. Codegen now lowers them directly to bitwise `ctx.fcr31` operations.

Result:

- **16,642 helper boundaries removed** from the generated corpus.
- Remaining generated `set_fpu_condition` / `fpu_condition` calls: **0 / 0**.

This is especially important for cold AOT units built with `/Ob0`, where a tiny helper is otherwise more likely to survive as an actual host call.

---

## 7. GE overlap and host parallelism are now actual application defaults

`VCSNative` now installs performance defaults before configuration/profile initialization while preserving explicit environment overrides:

```text
PSPRECOMP_GE_BACKEND=directx12              (Windows)
PSPRECOMP_GE_ASYNC=1
PSPRECOMP_TIME_TICK_DISPATCHES=4096
PSPRECOMP_GE_PARALLEL_VERTEX_DECODE=1
PSPRECOMP_GE_PARALLEL_VERTEX_THRESHOLD=768
PSPRECOMP_GE_PARALLEL_VERTEX_MAX_WORKERS=6
PSPRECOMP_RASTER_THREADS=4
```

This matters because launching the executable directly does not inherit `PLAY_VCS.bat` environment variables.

The existing high-performance DX12 paths (hardware cull, packed 0x0115 decode, direct non-indexed draw, native indexed draw, batch merge and texture upload ring) were already default-on internally and remain overrideable for A/B diagnostics.

`PLAY_VCS.bat` also explicitly enables the async/parallel path.

---

## 8. PLAY/build workflow fixed and Tier-2 made persistent

A critical launcher mismatch was corrected:

- `BUILD_VCS_NINJA.bat` builds into `out\vcs-release-ninja`;
- the old `PLAY_VCS.bat` did not search that folder and could launch an older binary from `out\vcs-ninja` or another tree;
- it now checks `out\vcs-release-ninja` first.

New files/workflow:

- `profiles\vcs\APPLY_TIER2_EXTREME.bat`
- `profiles\vcs\tools\apply_tier2_extreme.py`
- `profiles\vcs\tools\optimize_generated_vfpu_hot.py`
- `profiles\vcs\tests\vfpu_tier2_tests.cpp`

All three normal Windows build paths now reapply the idempotent Tier-2 transform before compiling:

- `BUILD_VCS.bat`
- `BUILD_VCS_NINJA.bat`
- `BUILD_VCS_FAST.bat`

Therefore a future manual AOT regeneration does not silently discard this pass when the user performs the next normal build.

---

## 9. Hot-code layout / I-cache policy

Under `PSPRECOMP_PROFILE_GUIDED_AOT`, the 37 measured hot sources are removed from their old positions and prepended in profile rank order before the remaining generated units are supplied to the target.

This is a **linker-input/layout hint**, not a claim that MSVC is forced to emit an exact `.text` ordering. It keeps the hot set contiguous at input while avoiding the already-measured mistake of aggressively inlining/expanding the entire 100+ MB generated corpus.

The generated-source size changed only:

```text
108,732,904 -> 109,407,605 bytes
+674,701 bytes (+0.6205%)
```

That is intentionally small relative to the amount of runtime indirection/state work removed.

---

## 10. Validation completed in this environment

Passed:

- root `psprecomp_tests`: **1/1, 100%**;
- VCS lightweight regression set: **4/4, 100%** (`vcs_config_tests`, `audio_resampler_tests`, `vfpu_tier2_tests`, `vcs_bootstrap_paths_tests`);
- generic `psp_recomp` codegen target: built;
- VCS `vcs_recomp` codegen target: built;
- final syntax validation of all **37/37 hot generated units** after the full Tier-2 transformation: passed;
- `main.cpp` performance-default changes: syntax checked;
- Tier-2 reapply pass on the final tree: **idempotent, 0 pending transformations**.

The large Linux `vcs_profile_tests` translation unit was attempted earlier in this pass but exceeded the tool-call compile window without producing a compiler error. It is not reported as passed or failed here.

A Windows/DX12 physical gameplay FPS run cannot be performed in this Linux container, so **no FPS number is fabricated**.

---

## 11. What still requires a physical gameplay profile

The 2026-08-14 document proposed a complete trace/superblock/SSA second compiler tier. The safe parts that can be derived from the existing unit profile are now implemented, but these remaining steps require measurements from the exact heavy-city route:

1. **Cross-basic-block trace/superblock formation** — needs hot-PC / edge order, not only hot-unit counts.
2. **True SSA promotion across branch boundaries** — should be driven by those traces so state is materialized only at actual exits.
3. **Additional native lowering of GTA functions** — needs top accumulated guest PCs/functions. The existing proven native collision/VFPU paths are retained; no guessed function replacement was added.
4. **MSVC PGO training** — needs a representative Windows gameplay training run before `/USEPROFILE` has meaning.
5. **Further GE synchronization removal** — must be decided from `ge_async_wait_us`; removing barriers blindly risks framebuffer-feedback correctness.

These are data-dependent optimization stages, not missing one-line switches.

---

## 12. First physical benchmark to run

Build the performance tree with:

```bat
profiles\vcs\BUILD_VCS_NINJA.bat
```

Then run the same known heavy-city route uncapped. For a diagnostic run, set:

```bat
set PSPRECOMP_FRAME_TIME_DIAG=1
set PSPRECOMP_UNIT_PROFILE=1
profiles\vcs\PLAY_VCS.bat
```

Capture at least:

```text
FPS / frame_us
guest_cpu_us
ge_async_wait_us
CPU usage per core
GPU usage
```

A/B escape hatches remain available:

```text
PSPRECOMP_NO_CHAIN=1
PSPRECOMP_GE_ASYNC=0
PSPRECOMP_GE_PARALLEL_VERTEX_DECODE=0
PSPRECOMP_TIME_TICK_DISPATCHES=256
```

Do **not** raise `PSPRECOMP_CHAIN_DEPTH` to 1024: this tree retains the known-safe default 48 for call-style chains; the new tail transfers avoid consuming that depth in the first place.

---

## Static before/after summary

| Metric | Before | After |
|---|---:|---:|
| Generated units | 234 | 234 |
| Generated source bytes | 108,732,904 | 109,407,605 |
| `ctx.gpr[]` refs | 1,230,757 | 1,182,033 |
| `ctx.fpr[]` refs | 196,805 | 186,925 |
| FPU condition helper calls | 16,642 | 0 |
| local-transfer cap 256 | 11,299 | 0 |
| local-transfer cap 2048 | 0 | 11,299 |
| direct tail chains | 0 | 1,331 |
| unaligned `GuestMemory` AOT calls | 2,051 | 0 |
| unaligned `AotFastView` calls | 0 | 2,051 |
| Tier-2 hot unit markers | 0 | 37 |
| generic VFPU compute/read/matrix calls in hot 37 | 28 before final family pass | 0 |

## Bottom line

This is a materially deeper optimization pass than changing flags or increasing thread counts. It reduces the amount of host work used to represent guest state/control flow while constraining code growth to the measured hot set. The next large architectural jump should be driven by a physical heavy-city trace rather than another blind global transformation.

## 2026-08-16 MSVC 19.44 test-link hotfix

A clean Windows Ninja rebuild confirmed that `VCSNative.exe` links successfully, but
`vfpu_tier2_tests` could trigger MSVC C1001 during the LTCG `Generating code` phase.
The test target now explicitly disables IPO/LTCG (`/GL-` on MSVC). This does **not**
disable host/core LTCG for `VCSNative`; it only avoids running the compiler's LTCG
back-end over the template-heavy differential test.
