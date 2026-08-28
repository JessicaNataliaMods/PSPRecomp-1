#!/usr/bin/env python3
from __future__ import annotations

import argparse
import re
from pathlib import Path

MARKER = "PSPRECOMP_V815_ASYNC_GE_OVERLAP"
PRESENT_MARKER = "PSPRECOMP_V815_PRESENT_SAFEPOINT"
MAIN_MARKER = "PSPRECOMP_V815_PRODUCTION_DEFAULTS"
LOG_MARKER = "PSPRECOMP_V815_RUNTIME_LOG"


def read(path: Path) -> str:
    return path.read_text(encoding="utf-8", errors="strict")


def write_if_changed(path: Path, old: str, new: str) -> bool:
    if old == new:
        return False
    tmp = path.with_suffix(path.suffix + ".v815tmp")
    tmp.write_text(new, encoding="utf-8", newline="\n")
    tmp.replace(path)
    return True


def require_once(text: str, needle: str, path: Path, desc: str) -> None:
    count = text.count(needle)
    if count != 1:
        raise RuntimeError(f"{path}: expected one {desc}, found {count}")


def patch_profile(path: Path) -> bool:
    old = read(path)
    if MARKER in old and PRESENT_MARKER in old:
        return False
    text = old

    state_anchor = "    bool stop_requested{};\n    std::atomic<bool> started{false};\n"
    require_once(text, state_anchor, path, "GE async state anchor")
    text = text.replace(
        state_anchor,
        "    bool stop_requested{};\n"
        f"    // {MARKER}: presentation owns the backend only between GE tasks.\n"
        "    bool presentation_requested{};\n"
        "    bool worker_busy{};\n"
        "    std::uint64_t present_safe_points{};\n"
        "    std::atomic<bool> started{false};\n",
        1,
    )

    enabled_re = re.compile(
        r"bool ge_async_enabled\(\) noexcept \{\n.*?    return enabled;\n\}\n",
        re.DOTALL,
    )
    matches = list(enabled_re.finditer(text))
    if len(matches) != 1:
        raise RuntimeError(f"{path}: expected one ge_async_enabled(), found {len(matches)}")
    enabled_impl = f'''bool ge_async_enabled() noexcept {{
    // {MARKER}: VCSNative opts this in at process startup. Keeping the profile
    // layer environment-gated preserves unit-test isolation and a zero-cost
    // PSPRECOMP_GE_ASYNC=0 rollback without another build.
    static const bool enabled = [] {{
        const char *value = std::getenv("PSPRECOMP_GE_ASYNC");
        return value != nullptr && *value != '\\0' &&
               std::strcmp(value, "0") != 0 &&
               std::strcmp(value, "false") != 0 && std::strcmp(value, "FALSE") != 0 &&
               std::strcmp(value, "off") != 0 && std::strcmp(value, "OFF") != 0;
    }}();
    return enabled;
}}
'''
    m = matches[0]
    text = text[:m.start()] + enabled_impl + text[m.end():]

    decl_anchor = (
        "bool ge_async_wait_idle(psprecomp::Runtime &runtime);\n"
        "bool ge_async_wait_list(psprecomp::Runtime &runtime, std::uint32_t id);\n"
    )
    require_once(text, decl_anchor, path, "GE async declarations")
    text = text.replace(
        decl_anchor,
        "bool ge_async_wait_idle(psprecomp::Runtime &runtime);\n"
        "bool ge_async_begin_presentation(psprecomp::Runtime &runtime);\n"
        "void ge_async_end_presentation() noexcept;\n"
        "bool ge_async_wait_list(psprecomp::Runtime &runtime, std::uint32_t id);\n",
        1,
    )

    start_anchor = (
        "    ge_async.runtime = &runtime;\n"
        "    ge_async.stop_requested = false;\n"
        "    ge_async.started.store(true, std::memory_order_release);\n"
    )
    require_once(text, start_anchor, path, "worker start state")
    text = text.replace(
        start_anchor,
        "    ge_async.runtime = &runtime;\n"
        "    ge_async.stop_requested = false;\n"
        "    ge_async.presentation_requested = false;\n"
        "    ge_async.worker_busy = false;\n"
        "    ge_async.started.store(true, std::memory_order_release);\n",
        1,
    )

    wait_anchor = (
        "            ge_async.cv.wait(lock, [] { return ge_async.stop_requested || !ge_async.pending.empty(); });\n"
        "            if (ge_async.stop_requested && ge_async.pending.empty()) break;\n"
        "            task = std::move(ge_async.pending.front());\n"
    )
    require_once(text, wait_anchor, path, "worker task wait")
    text = text.replace(
        wait_anchor,
        "            ge_async.cv.wait(lock, [] {\n"
        "                return ge_async.stop_requested ||\n"
        "                       (!ge_async.presentation_requested && !ge_async.pending.empty());\n"
        "            });\n"
        "            if (ge_async.stop_requested && ge_async.pending.empty()) break;\n"
        "            ge_async.worker_busy = true;\n"
        "            task = std::move(ge_async.pending.front());\n",
        1,
    )

    invalid_anchor = (
        "                ge_async.live_stalls.erase(task.id);\n"
        "                ge_async.outstanding.fetch_sub(1u, std::memory_order_acq_rel);\n"
        "                ge_async.cv.notify_all();\n"
        "                continue;\n"
    )
    require_once(text, invalid_anchor, path, "stale async task path")
    text = text.replace(
        invalid_anchor,
        "                ge_async.live_stalls.erase(task.id);\n"
        "                ge_async.outstanding.fetch_sub(1u, std::memory_order_acq_rel);\n"
        "                ge_async.worker_busy = false;\n"
        "                ge_async.cv.notify_all();\n"
        "                continue;\n",
        1,
    )

    complete_anchor = (
        "            ++ge_async.completed;\n"
        "            ge_async.outstanding.fetch_sub(1u, std::memory_order_acq_rel);\n"
    )
    require_once(text, complete_anchor, path, "async completion path")
    text = text.replace(
        complete_anchor,
        "            ++ge_async.completed;\n"
        "            ge_async.outstanding.fetch_sub(1u, std::memory_order_acq_rel);\n"
        "            ge_async.worker_busy = false;\n",
        1,
    )

    impl_anchor = "bool ge_async_wait_list(psprecomp::Runtime &runtime, std::uint32_t id) {\n"
    require_once(text, impl_anchor, path, "ge_async_wait_list")
    safe_impl = f'''// {PRESENT_MARKER}
bool ge_async_begin_presentation(psprecomp::Runtime &runtime) {{
    if (!ge_async_enabled() || !ge_async.started.load(std::memory_order_acquire)) return true;
    const auto begin = std::chrono::steady_clock::now();
    {{
        std::unique_lock lock(ge_async.mutex);
        ge_async.presentation_requested = true;
        ge_async.cv.notify_all();
        ge_async.cv.wait(lock, [] {{
            return !ge_async.worker_busy || ge_async.fatal.load(std::memory_order_acquire) ||
                   ge_async.stop_requested;
        }});
        ge_async.last_wait_ns.store(
            static_cast<std::uint64_t>(std::chrono::duration_cast<std::chrono::nanoseconds>(
                std::chrono::steady_clock::now() - begin).count()),
            std::memory_order_release);
    }}
    runtime.memory().memory_barrier();
    ge_async_drain_completions();
    if (!ge_async_check_fatal(runtime)) {{
        ge_async_end_presentation();
        return false;
    }}
    return true;
}}

void ge_async_end_presentation() noexcept {{
    if (!ge_async.started.load(std::memory_order_acquire)) return;
    {{
        std::lock_guard lock(ge_async.mutex);
        if (!ge_async.presentation_requested) return;
        ge_async.presentation_requested = false;
        ++ge_async.present_safe_points;
    }}
    ge_async.cv.notify_all();
}}

'''
    text = text.replace(impl_anchor, safe_impl + impl_anchor, 1)

    vblank_anchor = (
        "        // The display consumes the completed GE frame.  This is a real PSP\n"
        "        // visibility boundary: allow guest/GE overlap during the frame, then\n"
        "        // wait only here before framebuffer presentation and vblank callbacks.\n"
        "        if (!ge_async_wait_idle(rt)) return;\n"
        "        ++display_vblank_index;\n"
    )
    require_once(text, vblank_anchor, path, "old VBlank idle barrier")
    text = text.replace(
        vblank_anchor,
        f'''        // {PRESENT_MARKER}: VBlank itself is not a global GE DrawSync.
        // Keep CPU/GE overlap alive through callbacks/telemetry and acquire the
        // renderer safe-point only immediately around frame finalization below.
        ++display_vblank_index;
''',
        1,
    )

    present_anchor = (
        "        const auto present_entry = perf_timing_enabled()\n"
        "            ? std::chrono::steady_clock::now() : std::chrono::steady_clock::time_point{};\n"
    )
    require_once(text, present_anchor, path, "presentation timing anchor")
    text = text.replace(
        present_anchor,
        f'''        // {PRESENT_MARKER}: pause the GE worker only while renderer/backend
        // presentation state is consumed. Pending/stalled lists stay queued and
        // resume immediately after this narrow critical section.
        const bool ge_present_gate_active = ge_async_running();
        if (!ge_async_begin_presentation(rt)) return;
        struct GePresentationRelease {{
            bool active;
            ~GePresentationRelease() {{ if (active) ge_async_end_presentation(); }}
        }} ge_presentation_release{{ge_present_gate_active}};
        const auto present_entry = perf_timing_enabled()
            ? std::chrono::steady_clock::now() : std::chrono::steady_clock::time_point{{}};
''',
        1,
    )

    release_anchor = (
        "        if (perf_timing_enabled())\n"
        "            frame_time_stats.present_time += std::chrono::steady_clock::now() - present_entry;\n"
        "        limit_frame_rate();\n"
    )
    require_once(text, release_anchor, path, "presentation safe-point release anchor")
    text = text.replace(
        release_anchor,
        "        if (perf_timing_enabled())\n"
        "            frame_time_stats.present_time += std::chrono::steady_clock::now() - present_entry;\n"
        "        if (ge_presentation_release.active) {\n"
        "            ge_async_end_presentation();\n"
        "            ge_presentation_release.active = false;\n"
        "        }\n"
        "        limit_frame_rate();\n",
        1,
    )

    stop_anchor = (
        "    ge_async.started.store(false, std::memory_order_release);\n"
        "    ge_async.runtime = nullptr;\n"
        "    ge_async.pending.clear();\n"
    )
    require_once(text, stop_anchor, path, "worker stop reset")
    text = text.replace(
        stop_anchor,
        "    ge_async.started.store(false, std::memory_order_release);\n"
        "    ge_async.runtime = nullptr;\n"
        "    ge_async.presentation_requested = false;\n"
        "    ge_async.worker_busy = false;\n"
        "    ge_async.pending.clear();\n",
        1,
    )

    reset_anchor = (
        "        ge_async.stop_requested = false;\n"
        "        ge_async.fatal.store(false, std::memory_order_release);\n"
    )
    reset_count = text.count(reset_anchor)
    if reset_count < 1:
        raise RuntimeError(f"{path}: profile reset async state anchor missing")
    text = text.replace(
        reset_anchor,
        "        ge_async.stop_requested = false;\n"
        "        ge_async.presentation_requested = false;\n"
        "        ge_async.worker_busy = false;\n"
        "        ge_async.present_safe_points = 0u;\n"
        "        ge_async.fatal.store(false, std::memory_order_release);\n",
    )

    return write_if_changed(path, old, text)


def patch_main(path: Path) -> bool:
    old = read(path)
    if MAIN_MARKER in old:
        return False
    text = old
    anchor = "int main(int argc, char **argv) {\n#ifdef _WIN32\n    SetUnhandledExceptionFilter(&vcs_unhandled_exception_filter);\n#endif\n    try {\n"
    require_once(text, anchor, path, "main startup anchor")
    injected = f'''int main(int argc, char **argv) {{
#ifdef _WIN32
    SetUnhandledExceptionFilter(&vcs_unhandled_exception_filter);
#endif
    // {MAIN_MARKER}: VCS production defaults. Tests do not execute this main(),
    // so their historical synchronous behavior stays isolated. User environment
    // variables always win and provide immediate compatibility rollback.
#ifdef _WIN32
    if (std::getenv("PSPRECOMP_GE_ASYNC") == nullptr)
        _putenv_s("PSPRECOMP_GE_ASYNC", "1");
    if (std::getenv("PSPRECOMP_GE_PARALLEL_VERTEX_DECODE") == nullptr)
        _putenv_s("PSPRECOMP_GE_PARALLEL_VERTEX_DECODE", "1");
#else
    if (std::getenv("PSPRECOMP_GE_ASYNC") == nullptr)
        setenv("PSPRECOMP_GE_ASYNC", "1", 0);
    if (std::getenv("PSPRECOMP_GE_PARALLEL_VERTEX_DECODE") == nullptr)
        setenv("PSPRECOMP_GE_PARALLEL_VERTEX_DECODE", "1", 0);
#endif
    try {{
'''
    text = text.replace(anchor, injected, 1)
    return write_if_changed(path, old, text)


def patch_runtime_log(path: Path) -> bool:
    old = read(path)
    text = old
    stage_old = '    s.file << "stage=perf-v8.10-extreme-cpu-resident-regions-2026-08-18\\n";\n'
    if stage_old in text:
        text = text.replace(
            stage_old,
            f'    s.file << "stage=perf-v8.15-async-ge-overlap-2026-08-27\\n"; // {LOG_MARKER}\n',
            1,
        )
    elif LOG_MARKER not in text:
        raise RuntimeError(f"{path}: runtime stage anchor changed")
    text = text.replace(
        '           << " ge_async_default=0 parallel_vertex_decode_default=0"\n',
        '           << " ge_async_default=1 parallel_vertex_decode_default=1"\n', 1)
    text = text.replace(
        '           << " ge_async_quarantined=1 parallel_vertex_decode_quarantined=1 legacy_perf_env_ignored=1"\n',
        '           << " ge_async_quarantined=0 ge_async_present_safepoint=1 parallel_vertex_decode_quarantined=0 legacy_perf_env_ignored=1"\n', 1)
    if LOG_MARKER not in text:
        raise RuntimeError(f"{path}: V8.15 log marker missing")
    return write_if_changed(path, old, text)


def check(root: Path) -> None:
    profile = read(root / "profiles/vcs/host/vcs_profile.cpp")
    main = read(root / "profiles/vcs/host/main.cpp")
    log = read(root / "profiles/vcs/host/vcs_runtime_log.cpp")

    for token in (MARKER, PRESENT_MARKER, "presentation_requested", "worker_busy",
                  "ge_async_begin_presentation", "ge_async_end_presentation"):
        if token not in profile:
            raise RuntimeError(f"V8.15 check: profile missing {token}")
    # V8.15.2 checker-scope fix: ge_async_wait_idle(rt) is intentionally still
    # used by real PSP GE synchronization HLEs (DrawSync/GetCmd/context
    # save/restore).  Only the sceDisplay wait_vblank path must stop using the
    # global outstanding==0 barrier.  The old checker scanned the entire file
    # and falsely rejected those legitimate HLE barriers.
    vblank_start = profile.find("auto wait_vblank =")
    if vblank_start < 0:
        raise RuntimeError("V8.15 check: wait_vblank lambda missing")
    vblank_prefix = profile[vblank_start:vblank_start + 1800]
    if PRESENT_MARKER not in vblank_prefix:
        raise RuntimeError("V8.15 check: VBlank presentation safe-point marker missing")
    if "if (!ge_async_wait_idle(rt)) return;" in vblank_prefix:
        raise RuntimeError("V8.15 check: VBlank still waits outstanding==0")
    if "!ge_async.presentation_requested && !ge_async.pending.empty()" not in profile:
        raise RuntimeError("V8.15 check: worker can start tasks during presentation")
    if profile.count("ge_async.worker_busy = true;") != 1 or profile.count("ge_async.worker_busy = false;") < 3:
        raise RuntimeError("V8.15 check: worker_busy ownership transitions incomplete")
    if 'std::getenv("PSPRECOMP_GE_ASYNC")' not in profile:
        raise RuntimeError("V8.15 check: new async environment gate missing")
    if MAIN_MARKER not in main:
        raise RuntimeError("V8.15 check: production-default marker missing")
    # V8.15.4: the prerequisite checker must be monotonic. A previous interrupted
    # build may already have applied V8.15.1, whose stronger force-activation
    # block intentionally replaces the original V8.15 conditional default.
    # Accept either representation instead of rejecting the newer state.
    async_default_v815 = '_putenv_s("PSPRECOMP_GE_ASYNC", "1")' in main
    async_default_v8151 = '_putenv_s("PSPRECOMP_GE_ASYNC", v8151_force_sync ? "0" : "1")' in main
    decode_default_v815 = '_putenv_s("PSPRECOMP_GE_PARALLEL_VERTEX_DECODE", "1")' in main
    decode_default_v8151 = '_putenv_s("PSPRECOMP_GE_PARALLEL_VERTEX_DECODE", v8151_force_sync ? "0" : "1")' in main
    if not (async_default_v815 or async_default_v8151):
        raise RuntimeError("V8.15 check: Windows production async default missing")
    if not (decode_default_v815 or decode_default_v8151):
        raise RuntimeError("V8.15 check: Windows parallel vertex default missing")
    if not ("stage=perf-v8.15-async-ge-overlap-2026-08-27" in log or
            "stage=perf-v8.15.1-async-ge-overlap-force-activation-2026-08-27" in log):
        raise RuntimeError("V8.15 check: runtime log missing V8.15/V8.15.1 stage")
    for token in ("ge_async_default=1", "parallel_vertex_decode_default=1",
                  "ge_async_present_safepoint=1"):
        if token not in log:
            raise RuntimeError(f"V8.15 check: runtime log missing {token}")


def main_entry() -> int:
    ap = argparse.ArgumentParser()
    ap.add_argument("root", nargs="?", default=None)
    ap.add_argument("--check", action="store_true")
    ns = ap.parse_args()
    root = Path(ns.root).resolve() if ns.root else Path(__file__).resolve().parents[3]
    if ns.check:
        check(root)
        print("V8.15 CHECK OK: async GE overlap safe-point + parallel vertex production default")
        return 0
    changed = []
    if patch_profile(root / "profiles/vcs/host/vcs_profile.cpp"): changed.append("vcs_profile.cpp")
    if patch_main(root / "profiles/vcs/host/main.cpp"): changed.append("main.cpp")
    if patch_runtime_log(root / "profiles/vcs/host/vcs_runtime_log.cpp"): changed.append("vcs_runtime_log.cpp")
    check(root)
    print("V8.15 async GE overlap applied: " + (", ".join(changed) if changed else "already applied"))
    print("  VCSNative defaults: async GE=ON, parallel vertex decode=ON")
    print("  VBlank synchronization: current worker task only; queued/stalled lists do not block")
    print("  rollback without rebuild: PSPRECOMP_GE_ASYNC=0 / PSPRECOMP_GE_PARALLEL_VERTEX_DECODE=0")
    return 0


if __name__ == "__main__":
    raise SystemExit(main_entry())
