// GTA Vice City Stories (PSP, ULUS-10160) - VCSNative draw-distance patch
// Target: VCSRecomp Stage 40 / load base 0x08804000
//
// INI (VCSNative.ini):
//
// [DrawDistance]
// Enabled = 1
// World = 1.50
// Vehicles = 1.50
// NPCs = 1.50
//
// 1.0 = original PSP distance. Values below 1.0 are clamped to 1.0.
// World is allowed up to 8.0; Vehicles/NPCs up to 4.0.
// For mission compatibility, keep Vehicles/NPCs <= 2.0 unless tested.
//
// Integration (no header required):
//   1) Add this .cpp to VCSNative's target sources.
//   2) In host/main.cpp, after register_generated_functions(runtime), declare/call:
//        namespace vcs {
//        void install_draw_distance_patch(psprecomp::Runtime &,
//                                         const std::filesystem::path &);
//        }
//        vcs::install_draw_distance_patch(runtime, configuration.source_path);
//
// The install call MUST be after register_generated_functions(runtime), because this
// file intentionally replaces a few AOT entry labels in Runtime's function table.

#include "vcs_draw_distance_patch.hpp"
#include "psprecomp/runtime.hpp"
#include "psprecomp/common.hpp"   // hex32, para o relatorio de hooks vivos/mortos

#include <algorithm>
#include <bit>
#include <cctype>
#include <cmath>
#include <cstdint>
#include <cstdlib>
#include <filesystem>
#include <fstream>
#include <iostream>
#include <limits>
#include <string>
#include <string_view>
#include <unordered_map>

namespace vcs {

DrawDistanceRuntimeScales g_draw_distance_runtime_scales{};

namespace {

struct DrawDistanceConfig {
    bool enabled{false};
    float world{1.0f};
    float vehicles{1.0f};
    float npcs{1.0f};
};

DrawDistanceConfig g_config{};

// ULUS-10160 / VCSNative AOT guest addresses.

// VCS globals, addressed from $gp (r28).
constexpr std::uint32_t kGpFarClipOffset  = 7796u; // CDraw::ms_fFarClipZ
constexpr std::uint32_t kGpIdeCountOffset = 7656u; // IDE/model-info slot count
constexpr std::uint32_t kGpIdeTableOffset = 24u;   // IDE/model-info pointer table

// VCS CBaseModelInfo-like layout exposed by the IDE table.
constexpr std::uint32_t kModelHashOffset  = 0x08u;
constexpr std::uint32_t kModelTypeOffset  = 0x10u;
constexpr std::uint32_t kDrawDist1Offset  = 0x2Cu;
constexpr std::uint32_t kDrawDist2Offset  = 0x30u;
constexpr std::uint32_t kDrawDist3Offset  = 0x34u;
constexpr std::uint8_t  kIdeTypeObject    = 1u;
constexpr std::uint8_t  kIdeTypeTimedObj  = 3u;

struct OriginalWorldModel {
    std::uint32_t hash{};
    std::uint8_t type{};
    float d1{};
    float d2{};
    float d3{};
};

std::unordered_map<std::uint32_t, OriginalWorldModel> g_original_world_models;
bool g_far_clip_seen{};
float g_far_clip_last_raw{};
float g_far_clip_last_scaled{};

std::string trim_copy(std::string value) {
    auto is_space = [](unsigned char c) { return std::isspace(c) != 0; };
    while (!value.empty() && is_space(static_cast<unsigned char>(value.front())))
        value.erase(value.begin());
    while (!value.empty() && is_space(static_cast<unsigned char>(value.back())))
        value.pop_back();
    return value;
}

std::string lower_copy(std::string value) {
    std::transform(value.begin(), value.end(), value.begin(), [](unsigned char c) {
        return static_cast<char>(std::tolower(c));
    });
    return value;
}

std::string strip_comment(std::string value) {
    bool quoted = false;
    char quote = '\0';
    for (std::size_t i = 0; i < value.size(); ++i) {
        const char c = value[i];
        if (c == '\'' || c == '"') {
            if (!quoted) {
                quoted = true;
                quote = c;
            } else if (quote == c) {
                quoted = false;
            }
        } else if (!quoted && (c == ';' || c == '#')) {
            value.resize(i);
            break;
        }
    }
    return trim_copy(std::move(value));
}

bool parse_bool(std::string value, bool &out) {
    value = lower_copy(trim_copy(std::move(value)));
    if (value == "1" || value == "true" || value == "yes" || value == "on") {
        out = true;
        return true;
    }
    if (value == "0" || value == "false" || value == "no" || value == "off") {
        out = false;
        return true;
    }
    return false;
}

bool parse_float(std::string value, float &out) {
    value = trim_copy(std::move(value));
    if (value.empty()) return false;
    char *end = nullptr;
    const float v = std::strtof(value.c_str(), &end);
    if (end == value.c_str() || *end != '\0' || !std::isfinite(v)) return false;
    out = v;
    return true;
}

DrawDistanceConfig load_config(const std::filesystem::path &path) {
    DrawDistanceConfig cfg{};
    std::ifstream in(path);
    if (!in) return cfg;

    bool in_section = false;
    std::string line;
    while (std::getline(in, line)) {
        line = strip_comment(std::move(line));
        if (line.empty()) continue;

        if (line.front() == '[' && line.back() == ']') {
            const std::string section = lower_copy(trim_copy(line.substr(1, line.size() - 2)));
            in_section = (section == "drawdistance" || section == "draw distance");
            continue;
        }
        if (!in_section) continue;

        const std::size_t eq = line.find('=');
        if (eq == std::string::npos) continue;
        const std::string key = lower_copy(trim_copy(line.substr(0, eq)));
        const std::string value = trim_copy(line.substr(eq + 1));

        if (key == "enabled") {
            parse_bool(value, cfg.enabled);
        } else if (key == "world" || key == "worldmultiplier") {
            parse_float(value, cfg.world);
        } else if (key == "vehicles" || key == "cars" || key == "vehiclemultiplier") {
            parse_float(value, cfg.vehicles);
        } else if (key == "npcs" || key == "peds" || key == "npcmultiplier") {
            parse_float(value, cfg.npcs);
        }
    }

    cfg.world = std::clamp(cfg.world, 1.0f, 8.0f);
    cfg.vehicles = std::clamp(cfg.vehicles, 1.0f, 4.0f);
    cfg.npcs = std::clamp(cfg.npcs, 1.0f, 4.0f);
    return cfg;
}

float load_float(psprecomp::Runtime &runtime, std::uint32_t address) {
    return std::bit_cast<float>(runtime.memory().load32(address));
}

void store_float(psprecomp::Runtime &runtime, std::uint32_t address, float value) {
    runtime.memory().store32(address, std::bit_cast<std::uint32_t>(value));
}

bool sane_draw_distance(float value) {
    // Zero/negative values can be sentinels in model-info. Leave them untouched.
    return std::isfinite(value) && value > 0.0f && value < 100000.0f;
}

bool nearly_equal(float a, float b) {
    const float scale = std::max({1.0f, std::fabs(a), std::fabs(b)});
    return std::fabs(a - b) <= scale * 1.0e-4f;
}

float scaled_or_original(float original, float multiplier) {
    return sane_draw_distance(original) ? original * multiplier : original;
}

// Returns true once it has actually written entries, so the caller can stop
// retrying. Called every frame from SetFarClipZ until it succeeds.
bool patch_world_model_table(psprecomp::Runtime &runtime, std::uint32_t gp) {
    if (g_config.world <= 1.0f || gp == 0u) return false;

    const std::uint32_t count = runtime.memory().load32(gp + kGpIdeCountOffset);
    const std::uint32_t table = runtime.memory().load32(gp + kGpIdeTableOffset);

    // Corrupt/uninitialized globals must never turn this optional patch into a crash.
    const bool bad = count == 0u || count > 32768u || table == 0u ||
        !runtime.memory().contains(table, static_cast<std::size_t>(count) * 4u);
    // The guard sits before the "entries patched" banner, so a wrong GP offset
    // used to look exactly like the hook never running. Report the values once.
    static bool guard_logged = false;
    if (!guard_logged) {
        guard_logged = true;
        std::cerr << "[draw-distance] ide_init gp=" << psprecomp::hex32(gp)
                  << " count@" << kGpIdeCountOffset << "=" << count
                  << " table@" << kGpIdeTableOffset << "=" << psprecomp::hex32(table)
                  << (bad ? "  -> GUARD REJEITOU" : "  -> ok") << "\n";
    }
    if (bad) return false;

    std::uint32_t patched = 0u;
    for (std::uint32_t i = 0; i < count; ++i) {
        const std::uint32_t info = runtime.memory().load32(table + i * 4u);
        if (info == 0u || !runtime.memory().contains(info, 0x38u)) continue;

        const std::uint8_t type = runtime.memory().load8(info + kModelTypeOffset);
        if (type != kIdeTypeObject && type != kIdeTypeTimedObj) continue;

        const std::uint32_t hash = runtime.memory().load32(info + kModelHashOffset);
        const float cur1 = load_float(runtime, info + kDrawDist1Offset);
        const float cur2 = load_float(runtime, info + kDrawDist2Offset);
        const float cur3 = load_float(runtime, info + kDrawDist3Offset);

        auto found = g_original_world_models.find(info);
        if (found == g_original_world_models.end() || found->second.hash != hash || found->second.type != type) {
            found = g_original_world_models.emplace(
                info, OriginalWorldModel{hash, type, cur1, cur2, cur3}).first;
        } else {
            // If the game reloaded/rebuilt the same model-info address, refresh the baseline
            // instead of multiplying an already multiplied value again.
            const OriginalWorldModel &old = found->second;
            const bool still_patched =
                nearly_equal(cur1, scaled_or_original(old.d1, g_config.world)) &&
                nearly_equal(cur2, scaled_or_original(old.d2, g_config.world)) &&
                nearly_equal(cur3, scaled_or_original(old.d3, g_config.world));
            const bool still_original =
                nearly_equal(cur1, old.d1) && nearly_equal(cur2, old.d2) && nearly_equal(cur3, old.d3);
            if (!still_patched && !still_original) {
                found->second = OriginalWorldModel{hash, type, cur1, cur2, cur3};
            }
        }

        const OriginalWorldModel &base = found->second;
        store_float(runtime, info + kDrawDist1Offset, scaled_or_original(base.d1, g_config.world));
        store_float(runtime, info + kDrawDist2Offset, scaled_or_original(base.d2, g_config.world));
        store_float(runtime, info + kDrawDist3Offset, scaled_or_original(base.d3, g_config.world));
        ++patched;
    }

    static bool logged = false;
    if (!logged && patched != 0u) {
        std::cerr << "[draw-distance] world model-info entries patched=" << patched
                  << " multiplier=" << g_config.world << "\n";
        // "entries patched" only proves the writes happened. Print a couple of
        // real before/after pairs so the magnitude is visible, and print the far
        // clip alongside -- if the values grow but nothing appears on screen, the
        // limit is fog or the renderer reads other fields, not this table.
        std::uint32_t shown = 0u;
        for (std::uint32_t i = 0; i < count && shown < 3u; ++i) {
            const std::uint32_t info = runtime.memory().load32(table + i * 4u);
            if (info == 0u || !runtime.memory().contains(info, 0x38u)) continue;
            const auto found = g_original_world_models.find(info);
            if (found == g_original_world_models.end()) continue;
            std::cerr << "  [dd-amostra] info=" << psprecomp::hex32(info)
                      << " d1 " << found->second.d1 << " -> "
                      << load_float(runtime, info + kDrawDist1Offset)
                      << " | d2 " << found->second.d2 << " -> "
                      << load_float(runtime, info + kDrawDist2Offset) << "\n";
            ++shown;
        }
        std::cerr << "  [dd-amostra] far_clip@" << kGpFarClipOffset << "="
                  << load_float(runtime, gp + kGpFarClipOffset) << "\n";
        logged = true;
    }
    // Re-check on a later pass whether our values survived. If the game
    // repopulates the table, they will have gone back to the originals.
    static std::uint32_t verifications = 0u;
    if (logged && patched != 0u && verifications < 3u) {
        ++verifications;
        std::uint32_t intact = 0u, reverted = 0u;
        for (const auto &[info, base] : g_original_world_models) {
            const float now = load_float(runtime, info + kDrawDist1Offset);
            if (nearly_equal(now, scaled_or_original(base.d1, g_config.world))) ++intact;
            else if (nearly_equal(now, base.d1)) ++reverted;
        }
        std::cerr << "  [dd-verifica] passada=" << verifications
                  << " intactos=" << intact << " revertidos=" << reverted << "\n";
    }
    return patched != 0u;
}

} // namespace

void install_draw_distance_patch(psprecomp::Runtime &runtime,
                                 const std::filesystem::path &ini_path) {
    g_config = load_config(ini_path);
    g_original_world_models.clear();
    g_far_clip_seen = false;
    g_far_clip_last_raw = 0.0f;
    g_far_clip_last_scaled = 0.0f;
    g_draw_distance_runtime_scales = {};
    if (g_config.enabled) {
        g_draw_distance_runtime_scales.entity = std::max(g_config.vehicles, g_config.npcs);
        g_draw_distance_runtime_scales.vehicles = g_config.vehicles;
        g_draw_distance_runtime_scales.npcs = g_config.npcs;
    }

    if (!g_config.enabled) {
        std::cerr << "[draw-distance] disabled\n";
        return;
    }

    // World is maintained at vblank. Entity/vehicle/NPC constants are
    // patched directly at their generated local labels, because gameplay reaches
    // those labels with intra-unit gotos that cannot be intercepted by the runtime
    // function registry.

    if (g_config.world > 1.0f) {
        // World distance is maintained from the display-vblank boundary. Both
        // historical entry hooks can be reached as local labels inside an AOT
        // unit and therefore bypass Runtime::register_function entirely. Keeping
        // them registered also poisons direct chaining for no reliable benefit.
        std::cerr << "[draw-distance] world path=vblank (no fragile far_clip/IDE AOT hooks)\n";
    }

    if (g_config.vehicles > 1.0f || g_config.npcs > 1.0f) {
        // Entity/vehicle/NPC labels are also reached by local gotos inside their
        // generated units. Runtime::register_function cannot intercept those
        // paths. The generated corpus now reads g_draw_distance_runtime_scales
        // at the exact labels instead, so do not install misleading dead hooks.
        std::cerr << "[draw-distance] entity/vehicle/NPC path=generated-local-label" << "\n";
    }
    std::cerr << "[draw-distance] enabled"
              << " world=" << g_config.world
              << " vehicles=" << g_config.vehicles
              << " npcs=" << g_config.npcs
              << " entity_lod=" << std::max(g_config.vehicles, g_config.npcs)
              << "\n";
}

void draw_distance_vblank_tick(psprecomp::Runtime &runtime,
                               std::uint32_t guest_gp,
                               std::uint64_t vblank_index) noexcept {
    if (!g_config.enabled || g_config.world <= 1.0f || guest_gp == 0u) return;
    try {
        const std::uint32_t far_address = guest_gp + kGpFarClipOffset;
        if (runtime.memory().contains(far_address, sizeof(std::uint32_t))) {
            const float current = load_float(runtime, far_address);
            if (std::isfinite(current) && current > 0.0f) {
                // Never multiply our own value again. If the game writes a new
                // dynamic far clip (weather/interior/etc.), treat that new value
                // as the next raw baseline and scale it exactly once.
                if (!g_far_clip_seen ||
                    (!nearly_equal(current, g_far_clip_last_scaled) &&
                     !nearly_equal(current, g_far_clip_last_raw))) {
                    g_far_clip_seen = true;
                    g_far_clip_last_raw = current;
                    g_far_clip_last_scaled = current * g_config.world;
                }
                if (g_far_clip_seen && !nearly_equal(current, g_far_clip_last_scaled))
                    store_float(runtime, far_address, g_far_clip_last_scaled);
            }
        }

        // The model-info table can appear after the first gameplay vblanks and
        // can be repopulated by streaming. Retry aggressively at startup, then
        // refresh twice a second-ish without touching generated guest code.
        if (vblank_index < 240u || (vblank_index % 120u) == 0u)
            (void)patch_world_model_table(runtime, guest_gp);
    } catch (const std::exception &error) {
        static bool logged = false;
        if (!logged) {
            logged = true;
            std::cerr << "[draw-distance] vblank maintenance disabled after error: "
                      << error.what() << "\n";
        }
    }
}

} // namespace vcs
