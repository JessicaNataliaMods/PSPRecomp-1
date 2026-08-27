#pragma once

#include "psprecomp/allegrex_context.hpp"
#include "psprecomp/guest_memory.hpp"
#include "psprecomp/nid_registry.hpp"

#include <cstdint>
#include <filesystem>
#include <functional>
#include <string>
#include <string_view>
#include <type_traits>
#include <unordered_map>
#include <vector>

namespace psprecomp {

// generated direct-unit chaining stays on a zero-observer fast path.
// Diagnostics flip this once for the process and transparently fall back to the
// fully instrumented runtime lookup. Keeping this as a plain process-global bool
// makes the common branch one predictable load instead of a hook/table walk.
extern bool g_runtime_chain_observers_active;
// Fast-path copy of the scheduler cadence. It is configured before guest
// execution and lets compile-time direct AOT chains charge ordinary work
// without calling an out-of-line helper on every cross-unit edge.
extern std::uint64_t g_runtime_starvation_interval_fast;
// Same idea for the thread-switch generation used by every compile-time direct
// chain. Keeping it as a public fast-path scalar avoids two out-of-line accessor
// calls per chain when the compiler cannot see through a giant generated unit.
extern std::uint64_t g_runtime_thread_switch_generation_fast;

#if defined(_MSC_VER)
#define PSPRECOMP_RUNTIME_FORCEINLINE __forceinline
#define PSPRECOMP_RESTRICT __restrict
#elif defined(__GNUC__) || defined(__clang__)
#define PSPRECOMP_RUNTIME_FORCEINLINE inline __attribute__((always_inline))
#define PSPRECOMP_RESTRICT __restrict__
#else
#define PSPRECOMP_RUNTIME_FORCEINLINE inline
#define PSPRECOMP_RESTRICT
#endif

// The cross-unit hot-register cache (AotHotRegisterCache) was removed here.  It
// kept seven GPRs and six scalar FPRs live in a second object alongside
// AllegrexContext for the whole duration of a generated unit.  Inside the
// ~10,000-line single functions this corpus emits, that pushed MSVC's optimizer
// past the point where it converges: affected units never finished compiling and
// grew past 2 GB each, which exhausted system memory during a normal build.  The
// last configuration observed booting on hardware (Stage 45.7) does not have it.
struct RuntimeExecutionContextToken {
    std::int32_t thread_uid{-1};
    std::uint64_t switch_generation{};
};

void set_runtime_thread_identity(std::int32_t uid, const std::string &name) noexcept;
[[nodiscard]] std::int32_t runtime_thread_uid() noexcept;
[[nodiscard]] const char *runtime_thread_name() noexcept;
[[nodiscard]] std::uint32_t runtime_dispatch_pc() noexcept;
[[nodiscard]] RuntimeExecutionContextToken capture_runtime_execution_context() noexcept;
[[nodiscard]] bool runtime_execution_context_matches(RuntimeExecutionContextToken token) noexcept;
// Hot direct-chain guard.  The generation increments on every PSP thread
// identity transition, including switch-away/switch-back, so one 64-bit value
// is sufficient to detect stale native caller frames.  Keep the richer token
// above for diagnostics and generic/indirect paths.
[[nodiscard]] std::uint64_t runtime_thread_switch_generation() noexcept;
[[nodiscard]] bool runtime_thread_switch_generation_matches(std::uint64_t generation) noexcept;

// Per-generated-unit call census, armed with PSPRECOMP_UNIT_PROFILE=1.
//
// Exists to answer one question the build cannot answer on its own: which of the
// 234 generated units are actually hot, so VCS_HOT_UNIT_IDS can name them
// instead of carrying a single hand-picked entry. Counting is a load of one
// global bool and a predictable branch on the chained-call path, so leaving it
// compiled in costs nothing measurable when it is off.
inline constexpr std::size_t kUnitProfileCapacity = 512u;
extern bool g_unit_profile_enabled;
extern std::uint64_t g_unit_profile_counts[kUnitProfileCapacity];
void report_unit_profile(std::size_t limit = 40u);

// Low-overhead guest/AOT hotspot sampler used by the VCS performance build.
// Unit entry counts are exact while wall-clock timing is sampled sparsely.
// Sampled durations are inclusive of nested native AOT calls; this is
// deliberate, because the next Tier-2 pass needs to identify expensive trace
// roots before instrumenting individual basic blocks in only those units.
inline constexpr std::size_t kGuestHotspotPcCapacity = 4096u;
extern bool g_guest_hotspot_profile_enabled;
extern std::uint32_t g_guest_hotspot_sample_mask;
extern std::uint64_t g_guest_hotspot_unit_calls[kUnitProfileCapacity];

struct GuestHotspotUnitEntry {
    std::uint32_t unit{};
    std::uint64_t calls{};
    std::uint64_t samples{};
    std::uint64_t inclusive_sample_ns{};
};

struct GuestHotspotPcEntry {
    std::uint32_t unit{};
    std::uint32_t pc{};
    std::uint64_t samples{};
    std::uint64_t inclusive_sample_ns{};
};

struct GuestHotspotSnapshot {
    std::uint32_t sample_stride{1u};
    std::uint64_t total_unit_calls{};
    std::uint64_t total_samples{};
    std::vector<GuestHotspotUnitEntry> units;
    std::vector<GuestHotspotPcEntry> pcs;
};

void set_guest_hotspot_profile(bool enabled, std::uint32_t sample_shift = 8u) noexcept;
[[nodiscard]] std::uint64_t guest_hotspot_clock_ns() noexcept;
void guest_hotspot_record_sample(std::uint32_t unit, std::uint32_t pc,
                                 std::uint64_t elapsed_ns) noexcept;
[[nodiscard]] GuestHotspotSnapshot consume_guest_hotspot_profile(
    std::size_t unit_limit = 16u, std::size_t pc_limit = 24u);

class Runtime {
public:
    using RecompiledFunction = void (*)(Runtime &, AllegrexContext &);
    using RecompiledEntryFunction = void (*)(Runtime &, AllegrexContext &, std::uint16_t,
                                             GuestMemory::AotFastView &);
    using HleFunction = std::function<void(Runtime &, AllegrexContext &)>;
    using NativeFastPath = void (*)(Runtime &, AllegrexContext &);

    explicit Runtime(std::uint32_t ram_size = 32u * 1024u * 1024u);

    GuestMemory &memory() noexcept { return memory_; }
    const GuestMemory &memory() const noexcept { return memory_; }
    NidRegistry &nids() noexcept;
    const NidRegistry &nids() const noexcept;

    void register_function(std::uint32_t address, RecompiledFunction function, std::string name);
    void register_hle(std::string library, std::uint32_t nid, HleFunction function);
    [[nodiscard]] bool has_function(std::uint32_t address) const;
    [[nodiscard]] std::size_t function_count() const noexcept;

    void set_game_root(std::filesystem::path root);
    [[nodiscard]] const std::filesystem::path &game_root() const noexcept;
    [[nodiscard]] std::filesystem::path translate_path(const std::string &psp_path) const;

    void run(std::uint32_t entry, std::uint64_t max_dispatches = 10'000'000u);
    void stop(std::string reason);
    [[nodiscard]] bool stopped() const noexcept;
    [[nodiscard]] const std::string &stop_reason() const noexcept;

    void unsupported(std::uint32_t pc, std::uint32_t instruction, const std::string &reason);
    void arithmetic_overflow(std::uint32_t pc, std::uint32_t instruction);
    void invoke_import(std::string_view library, std::uint32_t nid, AllegrexContext &ctx);
    // Generated import wrappers have a stable numeric slot. Resolve the
    // library/NID hash maps only on the first call, then invoke the bound HLE
    // std::function directly on every subsequent frame.
    void invoke_import_cached(std::uint32_t slot, std::string_view library,
                              std::uint32_t nid, AllegrexContext &ctx);
    // Executes one registered AOT function in a caller-supplied context without
    // charging guest scheduler work. Used by host render integrations that must
    // call a pure guest math helper with an isolated stack/context.
    [[nodiscard]] bool invoke_isolated_aot(std::uint32_t address,
                                           AllegrexContext &ctx);
    // Profiles may register native replacements for selected guest functions.
    // Generated profile code can call this API without putting game-specific
    // addresses or implementations in the reusable runtime.
    void register_native_fast_path(std::uint32_t address, NativeFastPath function);
    void invoke_native_fast_path(std::uint32_t address, AllegrexContext &ctx);

    // Bounded cross-unit call chaining.
    //
    // The hottest guest routines are five-instruction leaves in a different
    // generated unit than their caller, so a plain `jal` costs two full outer
    // dispatches: one to enter the leaf and one to return.  This executes an
    // ordinary translated unit inline instead, leaving ctx.pc wherever the
    // callee stopped so the caller can resume locally only when it matches its
    // own return address.
    //
    // It stays safe because a generated unit never runs an import inline: any
    // `jal` to an import wrapper leaves the unit through the outer loop.  Every
    // thread switch therefore still happens with the runtime in control, and a
    // switched context is rejected by an execution-context token before the
    // generated caller is allowed to resume its local native frame.  Checking
    // only the return PC is insufficient because another PSP thread can resume
    // at the same address.  Depth is bounded so guest recursion cannot exhaust
    // the native stack.  PSPRECOMP_NO_CHAIN=1 disables it for A/B checks.
    [[nodiscard]] bool invoke_chained_call(AllegrexContext &ctx,
                                           GuestMemory::AotFastView *shared_aot_mem = nullptr);
    // Fast path for compile-time-known cross-unit targets.  Automatic AOT knows
    // the 16 KiB unit index and can avoid the large guest-PC dispatch table.
    // Units containing an import/HLE/host override fall back to the exact
    // per-PC chainability path at runtime.
    [[nodiscard]] bool invoke_chained_unit(AllegrexContext &ctx, std::uint32_t unit_index,
                                           GuestMemory::AotFastView *shared_aot_mem = nullptr);

    // V8.11: scheduler-exact top-level local redispatch. Generated code keeps
    // the proven 256-JR boundary, publishes ctx.pc, and asks Runtime to perform
    // the same logical outer-dispatch accounting without paying PC->unit lookup
    // and native function return/re-entry when it is safe to remain in-place.
    [[nodiscard]] bool continue_generated_local_dispatch(AllegrexContext &ctx);

    // Compile-time direct chain shared implementation. V8.8 adds a trusted
    // specialization for title profiles that can prove at build time that the
    // target 16 KiB generated bucket contains no import/HLE/host replacement.
    // Trusted chains keep every chain-depth, context-invalidation and scheduler
    // safe point, but remove the per-edge generated-layout and poisoned-unit
    // loads from the production hot path.
    template <bool TrustedUnit, auto Function, std::uint32_t UnitIndex,
              std::uint16_t DirectEntryId = 0u, std::uint32_t DirectTargetPc = 0u>
    [[nodiscard]] PSPRECOMP_RUNTIME_FORCEINLINE bool invoke_chained_direct_impl(
        AllegrexContext &ctx, GuestMemory::AotFastView *shared_aot_mem = nullptr) {
#if !defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
        // Diagnostics/observers deliberately retain the canonical lookup path so
        // instrumentation sees exactly the same boundaries as an untrusted call.
        if (g_runtime_chain_observers_active) {
            if constexpr (DirectTargetPc != 0u) ctx.pc = DirectTargetPc;
            return invoke_chained_unit(ctx, UnitIndex, shared_aot_mem);
        }
#endif
        if constexpr (!TrustedUnit) {
            if (UnitIndex >= kGeneratedUnitFastCapacity || !generated_unit_layout_valid_) {
                if constexpr (DirectTargetPc != 0u) ctx.pc = DirectTargetPc;
                return invoke_chained_unit(ctx, UnitIndex, shared_aot_mem);
            }
            if (generated_unit_disabled_[UnitIndex] != 0u) {
                // Mixed buckets can contain PSP import/HLE/host replacements.
                // Exact per-PC chaining remains mandatory for those units.
                if constexpr (DirectTargetPc != 0u) {
                    ctx.pc = DirectTargetPc;
                    return invoke_chained_call(ctx, shared_aot_mem);
                } else {
                    return false;
                }
            }
        } else {
            static_assert(UnitIndex < kGeneratedUnitFastCapacity,
                          "trusted generated unit index outside fast table");
        }
        if (chain_depth_ >= chain_depth_limit_) {
            // The caller removed the ordinary ctx.pc=target store from the hot
            // path. Restore it only on the rare depth-limit unwind so the outer
            // dispatcher still enters the exact guest destination.
            if constexpr (DirectTargetPc != 0u) ctx.pc = DirectTargetPc;
            return false;
        }

        // compile-time direct chains also carry their exact target
        // PC/entry id as template constants. The generated caller therefore does
        // not dirty AllegrexContext::pc before every successful native call; the
        // target PC is materialized only if chaining must unwind/fallback.
        //
        // compile-time direct chains no longer load the global PSP
        // thread generation before and after every native unit call.  The only
        // safe point able to switch PSP ownership while generated frames remain
        // nested is run_starvation_boundary(), which raises one Runtime-local
        // invalidation flag.  All active direct ancestors see that same hot
        // byte and unwind. This replaces two process-global 64-bit loads on
        // every fixed cross-unit transfer with one normally-false local load.
#if defined(PSPRECOMP_RUNTIME_CHAIN_TELEMETRY)
        bool guest_hotspot_sample = false;
        std::uint64_t guest_hotspot_start_ns = 0u;
        if (g_guest_hotspot_profile_enabled) {
            if constexpr (UnitIndex < kUnitProfileCapacity)
                ++g_guest_hotspot_unit_calls[UnitIndex];
            const std::uint64_t ticket = ++guest_hotspot_ticket_;
            guest_hotspot_sample =
                (ticket & static_cast<std::uint64_t>(g_guest_hotspot_sample_mask)) == 0u;
            if (guest_hotspot_sample) guest_hotspot_start_ns = guest_hotspot_clock_ns();
        }
#endif

        struct DepthGuard {
            std::uint32_t &depth;
            explicit DepthGuard(std::uint32_t &value) : depth(value) { ++depth; }
            ~DepthGuard() { --depth; }
        } guard(chain_depth_);
        if constexpr (DirectEntryId != 0u &&
                      std::is_invocable_v<decltype(Function), Runtime &, AllegrexContext &, std::uint16_t,
                                          GuestMemory::AotFastView &>) {
            if (shared_aot_mem != nullptr) {
                Function(*this, ctx, DirectEntryId, *shared_aot_mem);
            } else {
                auto local_aot_mem = memory_.aot_fast_view();
                Function(*this, ctx, DirectEntryId, local_aot_mem);
            }
        } else if constexpr (DirectEntryId != 0u &&
                             std::is_invocable_v<decltype(Function), Runtime &, AllegrexContext &, std::uint16_t>) {
            Function(*this, ctx, DirectEntryId);
        } else {
            Function(*this, ctx);
        }
#if defined(PSPRECOMP_RUNTIME_CHAIN_TELEMETRY)
        if (guest_hotspot_sample) {
            const std::uint64_t end_ns = guest_hotspot_clock_ns();
            guest_hotspot_record_sample(UnitIndex, DirectTargetPc,
                                        end_ns >= guest_hotspot_start_ns
                                            ? end_ns - guest_hotspot_start_ns : 0u);
        }
        if (g_unit_profile_enabled) ++g_unit_profile_counts[UnitIndex];
#endif
#if !defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
        if (track_dispatch_counters_) {
            ++chained_dispatches_;
            ++dispatch_work_count_;
        }
#endif

        // A scheduler boundary in any descendant switched PSP ownership.
        // Unwind every still-live native caller without touching another global
        // generation counter or scheduling from stale guest registers.
        if (chain_context_invalidated_) {
            const std::uint64_t interval = g_runtime_starvation_interval_fast;
            if (interval != 0u) ++dispatches_since_import_;
            return false;
        }

        const std::uint64_t starvation_interval = g_runtime_starvation_interval_fast;
        if (starvation_interval == 0u) return true;
        if (++dispatches_since_import_ < starvation_interval) return true;
        return run_starvation_boundary(ctx);
    }

    template <auto Function, std::uint32_t UnitIndex, std::uint16_t DirectEntryId = 0u,
              std::uint32_t DirectTargetPc = 0u>
    [[nodiscard]] PSPRECOMP_RUNTIME_FORCEINLINE bool invoke_chained_direct(
        AllegrexContext &ctx, GuestMemory::AotFastView *shared_aot_mem = nullptr) {
        return invoke_chained_direct_impl<false, Function, UnitIndex, DirectEntryId, DirectTargetPc>(
            ctx, shared_aot_mem);
    }

    template <auto Function, std::uint32_t UnitIndex, std::uint16_t DirectEntryId = 0u,
              std::uint32_t DirectTargetPc = 0u>
    [[nodiscard]] PSPRECOMP_RUNTIME_FORCEINLINE bool invoke_chained_trusted_direct(
        AllegrexContext &ctx, GuestMemory::AotFastView *shared_aot_mem = nullptr) {
        return invoke_chained_direct_impl<true, Function, UnitIndex, DirectEntryId, DirectTargetPc>(
            ctx, shared_aot_mem);
    }

    // Profile-selected compact generated leaves. Unlike V8.7 body inlining,
    // the translated leaf exists once out-of-line and callers only bypass the
    // giant generated-unit entry switch. Eligibility is intentionally external
    // to the generic Runtime: a title optimizer may use this only for proven
    // leaves containing no nested call/import/host boundary.
    template <auto Function, std::uint32_t UnitIndex, std::uint32_t DirectTargetPc>
    [[nodiscard]] PSPRECOMP_RUNTIME_FORCEINLINE bool invoke_compact_generated_leaf(
        AllegrexContext &ctx, GuestMemory::AotFastView *shared_aot_mem = nullptr) {
#if !defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
        if (g_runtime_chain_observers_active) {
            ctx.pc = DirectTargetPc;
            return invoke_chained_unit(ctx, UnitIndex, shared_aot_mem);
        }
#endif
        static_assert(UnitIndex < kGeneratedUnitFastCapacity,
                      "compact generated leaf unit outside fast table");
        if (chain_depth_ >= chain_depth_limit_) {
            ctx.pc = DirectTargetPc;
            return false;
        }
        struct DepthGuard {
            std::uint32_t &depth;
            explicit DepthGuard(std::uint32_t &value) : depth(value) { ++depth; }
            ~DepthGuard() { --depth; }
        } guard(chain_depth_);
        if (shared_aot_mem != nullptr) {
            Function(ctx, *shared_aot_mem);
        } else {
            auto local_aot_mem = memory_.aot_fast_view();
            Function(ctx, local_aot_mem);
        }
#if defined(PSPRECOMP_RUNTIME_CHAIN_TELEMETRY)
        if (g_unit_profile_enabled && UnitIndex < kUnitProfileCapacity)
            ++g_unit_profile_counts[UnitIndex];
#endif
#if !defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
        if (track_dispatch_counters_) {
            ++chained_dispatches_;
            ++dispatch_work_count_;
        }
#endif
        if (chain_context_invalidated_) {
            const std::uint64_t interval = g_runtime_starvation_interval_fast;
            if (interval != 0u) ++dispatches_since_import_;
            return false;
        }
        const std::uint64_t starvation_interval = g_runtime_starvation_interval_fast;
        if (starvation_interval == 0u) return true;
        if (++dispatches_since_import_ < starvation_interval) return true;
        return run_starvation_boundary(ctx);
    }

    // V8.10 resident generated regions. These are statically proven generated
    // leaves with no nested guest/HLE/host boundary. Callers pass their current
    // architectural scalar values by reference; V8.9 register-resident locals
    // therefore flow directly into the callee without materializing the whole
    // AllegrexContext at the call boundary. Since the region cannot recurse into
    // another generated call, chain-depth admission is not needed; preserve the
    // original logical dispatch/starvation accounting after the leaf completes.
    // Resident leaves may bypass AllegrexContext materialization only when this
    // logical dispatch cannot hit the starvation/preemption safe-point.  If the
    // next dispatch is a safe-point, generated callers fall back to the ordinary
    // fully-synchronized chained path before any PSP thread ownership can change.
    [[nodiscard]] PSPRECOMP_RUNTIME_FORCEINLINE bool resident_generated_leaf_fast_allowed() const noexcept {
        const std::uint64_t interval = g_runtime_starvation_interval_fast;
        return interval == 0u || (dispatches_since_import_ + 1u) < interval;
    }

    template <auto Function, std::uint32_t UnitIndex, std::uint16_t DirectEntryId,
              std::uint32_t DirectTargetPc>
    [[nodiscard]] PSPRECOMP_RUNTIME_FORCEINLINE bool invoke_resident_scheduler_fallback(
        AllegrexContext &ctx, GuestMemory::AotFastView *shared_aot_mem = nullptr) {
        return invoke_chained_direct_impl<true, Function, UnitIndex, DirectEntryId, DirectTargetPc>(
            ctx, shared_aot_mem);
    }

    template <auto Function, std::uint32_t UnitIndex, std::uint16_t DirectEntryId,
              std::uint32_t DirectTargetPc, typename... ResidentArgs>
    [[nodiscard]] PSPRECOMP_RUNTIME_FORCEINLINE bool invoke_resident_generated_leaf(
        AllegrexContext &ctx, GuestMemory::AotFastView *shared_aot_mem,
        ResidentArgs &...resident_args) {
        static_assert(UnitIndex < kGeneratedUnitFastCapacity,
                      "resident generated leaf unit outside fast table");
        if (shared_aot_mem != nullptr) {
            Function(*shared_aot_mem, resident_args...);
        } else {
            auto local_aot_mem = memory_.aot_fast_view();
            Function(local_aot_mem, resident_args...);
        }
#if defined(PSPRECOMP_RUNTIME_CHAIN_TELEMETRY)
        if (g_unit_profile_enabled && UnitIndex < kUnitProfileCapacity)
            ++g_unit_profile_counts[UnitIndex];
#endif
#if !defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
        if (track_dispatch_counters_) {
            ++chained_dispatches_;
            ++dispatch_work_count_;
        }
#endif
        if (chain_context_invalidated_) {
            const std::uint64_t interval = g_runtime_starvation_interval_fast;
            if (interval != 0u) ++dispatches_since_import_;
            return false;
        }
        const std::uint64_t starvation_interval = g_runtime_starvation_interval_fast;
        if (starvation_interval == 0u) return true;
        // The caller checked resident_generated_leaf_fast_allowed() immediately
        // before entering this leaf, so this increment cannot reach a preemption
        // boundary while architectural state is still resident outside ctx.
        ++dispatches_since_import_;
        return true;
    }

    // Tier-2 hot-leaf lowering keeps the scheduler accounting that an ordinary
    // cross-unit generated call would have performed, while allowing trivial
    // leaf accessors to be emitted directly in their measured caller.  No HLE
    // or PSP ownership switch can occur inside those leaf bodies, so only the
    // starvation safe-point cadence needs to be preserved here.
    [[nodiscard]] PSPRECOMP_RUNTIME_FORCEINLINE bool account_inlined_generated_leaf(
        AllegrexContext &ctx) {
        const std::uint64_t starvation_interval = g_runtime_starvation_interval_fast;
        if (starvation_interval == 0u) return true;
        if (++dispatches_since_import_ < starvation_interval) return true;
        return run_starvation_boundary(ctx);
    }

    // Tier-2 profile-guided superblocks can fuse a cross-unit edge into a local
    // C++ goto.  The guest-visible control flow is unchanged, but the ordinary
    // invoke_chained_direct() native frame no longer exists.  These helpers keep
    // the two pieces of runtime state owned by that removed frame exact:
    // chain-depth limiting and execution-driven scheduler accounting.
    //
    // Enter is intentionally separate from completion.  A fused J/JAL may run
    // through many local blocks before the logical chain frame unwinds, matching
    // the old nested native-call behavior rather than moving starvation safe
    // points into the middle of the guest trace.
    template <std::uint32_t UnitIndex, std::uint32_t TargetPc>
    [[nodiscard]] PSPRECOMP_RUNTIME_FORCEINLINE bool tier2_enter_fused_transfer(
        AllegrexContext &ctx) {
        if (chain_depth_ >= chain_depth_limit_) {
            ctx.pc = TargetPc;
            return false;
        }
        ++chain_depth_;
#if defined(PSPRECOMP_RUNTIME_CHAIN_TELEMETRY)
        if (g_unit_profile_enabled && UnitIndex < kUnitProfileCapacity)
            ++g_unit_profile_counts[UnitIndex];
        if (g_guest_hotspot_profile_enabled && UnitIndex < kUnitProfileCapacity)
            ++g_guest_hotspot_unit_calls[UnitIndex];
#endif
        return true;
    }

    // Complete N logical invoke_chained_direct() frames in unwind order.  This
    // deliberately performs scheduler accounting once per removed frame.  After
    // the first PSP context switch, remaining ancestors mirror the normal direct
    // chain path: they advance dispatch work without running another scheduler
    // boundary and unwind immediately.
    [[nodiscard]] PSPRECOMP_RUNTIME_FORCEINLINE bool tier2_complete_fused_transfers(
        AllegrexContext &ctx, std::uint32_t count) {
        bool same_context = true;
        while (count-- != 0u) {
#if !defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
            if (track_dispatch_counters_) {
                ++chained_dispatches_;
                ++dispatch_work_count_;
            }
#endif
            const std::uint64_t interval = g_runtime_starvation_interval_fast;
            if (chain_context_invalidated_) {
                if (interval != 0u) ++dispatches_since_import_;
                same_context = false;
            } else if (interval != 0u) {
                if (++dispatches_since_import_ >= interval && !run_starvation_boundary(ctx))
                    same_context = false;
            }
            if (chain_depth_ != 0u) --chain_depth_;
        }
        return same_context;
    }

    void register_generated_unit(std::uint32_t unit_index, std::uint32_t unit_address,
                                 std::uint32_t unit_span, RecompiledFunction function,
                                 RecompiledEntryFunction entry_function = nullptr);
    [[nodiscard]] std::uint64_t dispatch_work_count() const noexcept { return dispatch_work_count_; }

    AllegrexContext &cpu() noexcept;
    const AllegrexContext &cpu() const noexcept;

    // Ordered "library:nid -> call count" snapshot, empty unless
    // PSPRECOMP_HLE_HISTOGRAM is set.  Used to tell a synchronous compute phase
    // apart from a wait loop the host never satisfies.
    [[nodiscard]] std::vector<std::pair<std::string, std::uint64_t>> hle_histogram() const;
    void report_hle_histogram(std::size_t limit = 25u) const;

private:
    struct FunctionEntry {
        RecompiledFunction function{};
        std::string name;
    };

    struct TransparentStringHash {
        using is_transparent = void;
        std::size_t operator()(std::string_view value) const noexcept {
            return std::hash<std::string_view>{}(value);
        }
    };
    using HleLibrary = std::unordered_map<std::uint32_t, HleFunction>;

    static std::string hle_key(std::string_view library, std::uint32_t nid);
    [[nodiscard]] RecompiledFunction lookup_function(std::uint32_t address) const noexcept;
    // Dense unit lookup for the production outer dispatcher.  Unlike
    // lookup_function(), this touches a 512-entry table rather than the
    // multi-megabyte per-PC table when the PC belongs to a clean generated
    // unit. Host/import-overlapped units are poisoned and return nullptr.
    [[nodiscard]] RecompiledFunction lookup_generated_unit(std::uint32_t address) const noexcept;
    [[nodiscard]] const FunctionEntry *lookup_entry(std::uint32_t address) const noexcept;
    // Returns false only when the starvation/preemption hook changed the PSP
    // execution context at this safe boundary.
    [[nodiscard]] bool account_dispatch_work(AllegrexContext &ctx, bool allow_preemption);
    // Called only once per configured scheduler interval by the header-inline
    // direct-chain fast path. Keeping hook/context-token work here leaves the
    // other ~4095 boundaries as a counter increment + predictable compare.
    [[nodiscard]] bool run_starvation_boundary(AllegrexContext &ctx);

    GuestMemory memory_;
    NidRegistry nids_;
    AllegrexContext cpu_;
    std::unordered_map<std::uint32_t, FunctionEntry> functions_;
    // Direct PC table, covering only the registered code window rather than all
    // of guest RAM.  direct_base_ is its 1 MiB-aligned first canonical address.
    std::vector<RecompiledFunction> direct_functions_;
    // Same indexing, but null for import wrappers and every other non-unit
    // entry, so chaining can reject them with one array probe.
    std::vector<RecompiledFunction> direct_chainable_;
    // Dense fixed table for compile-time direct unit chaining. Keeping this in
    // the Runtime object avoids vector indirections and repeated size loads on
    // hot generated call edges. Larger corpora fall back to exact PC dispatch
    // for indices beyond this conservative capacity.
    static constexpr std::size_t kGeneratedUnitFastCapacity = 512u;
    std::array<RecompiledFunction, kGeneratedUnitFastCapacity> generated_units_{};
    // Entry-form companion used by dynamic JR/JALR chains so they can share the
    // caller's AotFastView instead of rebuilding RAM pointers/limits each unit.
    std::array<RecompiledEntryFunction, kGeneratedUnitFastCapacity> generated_unit_entries_{};
    // Consulted only while registering. An overlapping host/import entry poisons
    // the whole unit for the fast path; calls then unwind to exact PC dispatch.
    std::array<std::uint8_t, kGeneratedUnitFastCapacity> generated_unit_disabled_{};
    std::uint32_t generated_unit_base_{};
    std::uint32_t generated_unit_span_{};
    bool generated_unit_layout_valid_{true};
    std::uint32_t direct_base_{};
    std::uint32_t chain_depth_{};
    std::uint32_t chain_depth_limit_{};
    // Set only when a scheduler safe-point actually changes PSP execution
    // ownership while native AOT frames may still be nested. Cleared at the
    // beginning of each outer Runtime dispatch.
    bool chain_context_invalidated_{};
    // Enabled only inside Runtime::run's production outer loop when no outer
    // dispatch observer/heartbeat/progress contract would be skipped.
    bool local_redispatch_fastpath_active_{};
    // Per-runtime sampler ticket. Only touched when hotspot profiling is on;
    // keeping it local avoids contending on a process-global counter.
    std::uint64_t guest_hotspot_ticket_{};
    std::uint64_t dispatches_since_import_{};
    std::uint64_t chained_dispatches_{};
    std::uint64_t dispatch_work_count_{};
    std::unordered_map<std::string, HleLibrary,
                       TransparentStringHash, std::equal_to<>> hle_;
    std::unordered_map<std::uint32_t, NativeFastPath> native_fast_paths_;
    std::vector<const HleFunction *> import_bindings_;
    std::filesystem::path game_root_;
    bool stopped_{};
    std::string stop_reason_;
    bool hle_histogram_enabled_{};
    // keep high-frequency dispatch counters completely cold unless
    // the user explicitly asks for them. They previously dirtied the Runtime
    // cache line on every native chained call during normal gameplay.
    bool track_dispatch_counters_{};
    std::unordered_map<std::string, std::uint64_t> hle_histogram_;
};

// Identifies the PSP execution context that entered a host import wrapper.
// A kernel HLE call may schedule a different thread while the wrapper is still
// on the native stack.  Checking only ctx.pc is insufficient because the new
// thread can legitimately be waiting at the same import stub.  The switch
// generation makes return-address normalization conditional on still owning
// the original PSP thread context.

// Prints one "[count-pc] pc=... hits=..." line per address armed through
// PSPRECOMP_COUNT_PC (comma-separated, up to eight).  Counts both entry paths,
// the outer dispatch loop and invoke_chained_call, so a routine reached only
// through cross-unit chaining is still seen.  Answers "does this guest routine
// ever run?" without the overhead that makes the chain tracer alter the run.
void report_counted_pcs();

// Replaced by psp_recomp output once a real function map is available.
void register_generated_functions(Runtime &runtime);

// Optional liveness callback for the host.  It is invoked from the production
// dispatch loop roughly every `interval` outer dispatches so a presentation
// layer can stay informative during long synchronous guest phases.  Passing a
// null hook or a zero interval disables it and restores the previous loop.
using RuntimeHeartbeatHook = void (*)(std::uint64_t dispatch, std::uint32_t pc);
void set_runtime_heartbeat_hook(RuntimeHeartbeatHook hook, std::uint64_t interval) noexcept;

// Execution-driven time and preemption.
//
// On real hardware the PSP clock advances with executed cycles and the kernel
// preempts from a timer interrupt.  A cooperative runtime that only advances
// virtual time when a thread sleeps deadlocks against guest busy-waits: the
// world loader polls sceKernelGetSystemTime / sceKernelPollEventFlag /
// sceUmdGetDriveStat without ever blocking, so the clock froze and the UMD
// stream thread it was waiting on never came due.
//
// The hook fires from the outer dispatch loop every `interval` dispatches,
// regardless of how often the guest enters the kernel, and never from inside a
// chained call.  A dispatch boundary is a safe preemption point because ctx.pc
// is precisely the next instruction to run.
using RuntimeStarvationHook = void (*)(Runtime &, AllegrexContext &);
void set_runtime_starvation_hook(RuntimeStarvationHook hook, std::uint64_t interval) noexcept;

// One-shot scheduling barriers and other host services occasionally need to
// observe a completed *outer* dispatch.  This fires after a translated unit or
// import wrapper returns to Runtime::run, never from inside a chained call.
// `dispatch_pc` and `dispatch_thread_uid` identify the unit and PSP thread
// that started the dispatch, even if an HLE call switched `ctx` to another
// thread before the translated wrapper returned.
using RuntimePreDispatchHook = void (*)(Runtime &, AllegrexContext &, std::uint32_t dispatch_pc,
                                        std::int32_t dispatch_thread_uid);
void set_runtime_pre_dispatch_hook(RuntimePreDispatchHook hook) noexcept;
using RuntimePostDispatchHook = void (*)(Runtime &, AllegrexContext &, std::uint32_t dispatch_pc,
                                         std::int32_t dispatch_thread_uid);
void set_runtime_post_dispatch_hook(RuntimePostDispatchHook hook) noexcept;

// Optional diagnostics around native cross-unit calls.  Unlike the outer
// dispatch hooks these fire for calls performed through invoke_chained_call(),
// so a host profile can inspect a nested guest routine without disabling the
// fast chaining path or changing guest timing.  `target_pc` is captured before
// the callee runs and `native_depth` is the zero-based chained-call depth.
using RuntimePreChainedCallHook = void (*)(Runtime &, AllegrexContext &, std::uint32_t target_pc,
                                           std::uint32_t native_depth);
using RuntimePostChainedCallHook = void (*)(Runtime &, AllegrexContext &, std::uint32_t target_pc,
                                            std::uint32_t native_depth);
void set_runtime_pre_chained_call_hook(RuntimePreChainedCallHook hook) noexcept;
void set_runtime_post_chained_call_hook(RuntimePostChainedCallHook hook) noexcept;

#undef PSPRECOMP_RUNTIME_FORCEINLINE

} // namespace psprecomp
