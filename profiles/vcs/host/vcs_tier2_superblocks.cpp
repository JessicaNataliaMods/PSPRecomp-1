#include "vcs_tier2_superblocks.hpp"

#include <cerrno>
#include <cstdlib>
#include <cstring>

namespace vcs {
namespace tier2_detail {
thread_local std::array<Tier2ClusterCounters, kTier2ClusterCount> g_counters{};
thread_local std::uint32_t g_active_depth = 0u;
}

namespace {
std::uint32_t parse_cluster_mask() noexcept {
    if (const char *global = std::getenv("PSPRECOMP_TIER2_SUPERBLOCKS")) {
        if (std::strcmp(global, "0") == 0 || std::strcmp(global, "off") == 0 ||
            std::strcmp(global, "OFF") == 0 || std::strcmp(global, "false") == 0)
            return 0u;
    }

    constexpr std::uint32_t all = (1u << static_cast<std::uint32_t>(Tier2ClusterId::Count)) - 1u;
    const char *value = std::getenv("PSPRECOMP_TIER2_CLUSTER_MASK");
    if (value == nullptr || *value == '\0') return all;
    errno = 0;
    char *end = nullptr;
    const unsigned long parsed = std::strtoul(value, &end, 0);
    if (errno != 0 || end == value || (end != nullptr && *end != '\0')) return all;
    return static_cast<std::uint32_t>(parsed) & all;
}
} // namespace

std::uint32_t tier2_cluster_mask() noexcept {
    static const std::uint32_t mask = parse_cluster_mask();
    return mask;
}

bool tier2_superblocks_enabled() noexcept {
    return tier2_cluster_mask() != 0u;
}

bool tier2_cluster_enabled(Tier2ClusterId id) noexcept {
    // Never nest a generated Tier-2 superblock inside another Tier-2 frame.
    // Cold/external paths resume the SAFE AOT corpus while the outer logical
    // chain frames are still pending; re-entering another cluster there makes
    // unwind ordering needlessly complex and can expose stale chain_depth.
    if (tier2_detail::g_active_depth != 0u) return false;
    return (tier2_cluster_mask() & (1u << static_cast<std::uint32_t>(id))) != 0u;
}

Tier2CountersSnapshot consume_tier2_counters() noexcept {
    Tier2CountersSnapshot out{};
    out.cluster = tier2_detail::g_counters;
    tier2_detail::g_counters = {};
    return out;
}

const char *tier2_cluster_name(Tier2ClusterId id) noexcept {
    switch (id) {
    case Tier2ClusterId::Entity: return "entity";
    case Tier2ClusterId::Geometry: return "geometry";
    case Tier2ClusterId::Boundary: return "boundary";
    case Tier2ClusterId::Matrix: return "matrix";
    case Tier2ClusterId::Physics: return "physics";
    case Tier2ClusterId::World: return "world";
    case Tier2ClusterId::Edge43: return "edge43";
    case Tier2ClusterId::CollisionLoop: return "collisionloop";
    default: return "unknown";
    }
}

} // namespace vcs
