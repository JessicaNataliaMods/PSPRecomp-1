#pragma once

#include "psprecomp/guest_memory.hpp"

#include <array>
#include <chrono>
#include <cstddef>
#include <cstdint>

namespace psprecomp {
class Runtime;
struct AllegrexContext;
}

namespace vcs {

enum class Tier2ClusterId : std::uint32_t {
    Entity = 0u,      // 0152/0153 leaf accessors + 0154/0155 entity loop
    Geometry = 1u,    // 0084/0085 geometry/collision hot functions
    Boundary = 2u,    // 0085/0086 unit-boundary loop
    Matrix = 3u,      // 0044 matrix/VFPU hot function
    Physics = 4u,     // 0129 hot transform/physics function
    World = 5u,       // 0157/0158 dominant world/streaming hot functions
    Edge43 = 6u,      // 0043/0044 cross-unit boundary
    Count = 7u,
};

constexpr std::size_t kTier2ClusterCount = static_cast<std::size_t>(Tier2ClusterId::Count);

struct Tier2ClusterCounters {
    std::uint64_t entries{};
    std::uint64_t fused_tail_edges{};
    std::uint64_t fused_calls{};
    std::uint64_t cold_exits{};
    std::uint64_t fallbacks{};
    std::uint64_t sampled_entries{};
    std::uint64_t sampled_ns{};
};

struct Tier2CountersSnapshot {
    std::array<Tier2ClusterCounters, kTier2ClusterCount> cluster{};
};

namespace tier2_detail {
extern thread_local std::array<Tier2ClusterCounters, kTier2ClusterCount> g_counters;
extern thread_local std::uint32_t g_active_depth;

inline Tier2ClusterCounters &counters(Tier2ClusterId id) noexcept {
    return g_counters[static_cast<std::size_t>(id)];
}

// Deep Tier-2 coverage/timing is intentionally compile-time opt-in in V8.
// The V7 log showed tens of thousands of Tier-2 entries per 60-vblank window;
// even a "cheap" counter increment + sample branch at every entry pollutes the
// CPU benchmark we are trying to improve. Normal performance builds therefore
// compile this instrumentation out completely. Overall PERF telemetry remains
// available. Define PSPRECOMP_TIER2_DEEP_TELEMETRY for profiling builds.
#if defined(PSPRECOMP_TIER2_DEEP_TELEMETRY)
class SampleScope {
public:
    explicit SampleScope(Tier2ClusterId id) noexcept
        : counter_(&counters(id)) {
        ++g_active_depth;
        active_ = true;
        const std::uint64_t entry = ++counter_->entries;
        sample_ = (entry & 0xFFu) == 0u;
        if (sample_) {
            ++counter_->sampled_entries;
            start_ = std::chrono::steady_clock::now();
        }
    }

    ~SampleScope() noexcept {
        finish();
        if (active_) {
            if (g_active_depth != 0u) --g_active_depth;
            active_ = false;
        }
    }

    void finish() noexcept {
        if (!sample_ || finished_) return;
        const auto ns = std::chrono::duration_cast<std::chrono::nanoseconds>(
            std::chrono::steady_clock::now() - start_).count();
        if (ns > 0) counter_->sampled_ns += static_cast<std::uint64_t>(ns);
        finished_ = true;
    }

    Tier2ClusterCounters &stats() noexcept { return *counter_; }

private:
    Tier2ClusterCounters *counter_{};
    std::chrono::steady_clock::time_point start_{};
    bool sample_{};
    bool finished_{};
    bool active_{};
};
#else
struct NoopCounter {
    constexpr NoopCounter &operator++() noexcept { return *this; }
};
struct NoopTier2ClusterCounters {
    NoopCounter entries, fused_tail_edges, fused_calls, cold_exits, fallbacks;
    NoopCounter sampled_entries, sampled_ns;
};
class SampleScope {
public:
    explicit SampleScope(Tier2ClusterId) noexcept { ++g_active_depth; }
    ~SampleScope() noexcept { if (g_active_depth != 0u) --g_active_depth; }
    constexpr void finish() noexcept {}
    constexpr NoopTier2ClusterCounters &stats() noexcept { return counter_; }
private:
    NoopTier2ClusterCounters counter_{};
};
#endif
} // namespace tier2_detail

bool tier2_superblocks_enabled() noexcept;
bool tier2_cluster_enabled(Tier2ClusterId id) noexcept;
std::uint32_t tier2_cluster_mask() noexcept;
Tier2CountersSnapshot consume_tier2_counters() noexcept;
const char *tier2_cluster_name(Tier2ClusterId id) noexcept;

void tier2_superblock_entity(psprecomp::Runtime &, psprecomp::AllegrexContext &,
                             psprecomp::GuestMemory::AotFastView &, std::uint32_t entry_pc);
void tier2_superblock_geometry(psprecomp::Runtime &, psprecomp::AllegrexContext &,
                               psprecomp::GuestMemory::AotFastView &, std::uint32_t entry_pc);
void tier2_superblock_boundary(psprecomp::Runtime &, psprecomp::AllegrexContext &,
                               psprecomp::GuestMemory::AotFastView &, std::uint32_t entry_pc);
void tier2_superblock_matrix(psprecomp::Runtime &, psprecomp::AllegrexContext &,
                             psprecomp::GuestMemory::AotFastView &, std::uint32_t entry_pc);
void tier2_superblock_physics(psprecomp::Runtime &, psprecomp::AllegrexContext &,
                              psprecomp::GuestMemory::AotFastView &, std::uint32_t entry_pc);
void tier2_superblock_world(psprecomp::Runtime &, psprecomp::AllegrexContext &,
                            psprecomp::GuestMemory::AotFastView &, std::uint32_t entry_pc);
void tier2_superblock_edge43(psprecomp::Runtime &, psprecomp::AllegrexContext &,
                             psprecomp::GuestMemory::AotFastView &, std::uint32_t entry_pc);

} // namespace vcs
