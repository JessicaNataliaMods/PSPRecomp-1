#include "vcs_runtime_log.hpp"
#include "vcs_config.hpp"
#include "vcs_tier2_superblocks.hpp"

#include <chrono>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <fstream>
#include <iomanip>
#include <mutex>
#include <sstream>

namespace vcs {
namespace {

struct RuntimeLogState {
    std::mutex mutex;
    std::ofstream file;
    std::filesystem::path path;
    bool enabled{};
    bool flush_every_line{true};
};

RuntimeLogState &state() {
    static RuntimeLogState s;
    return s;
}

std::string timestamp_now() {
    using clock = std::chrono::system_clock;
    const auto now = clock::now();
    const std::time_t t = clock::to_time_t(now);
    std::tm tm{};
#if defined(_WIN32)
    localtime_s(&tm, &t);
#else
    localtime_r(&t, &tm);
#endif
    const auto ms = std::chrono::duration_cast<std::chrono::milliseconds>(
        now.time_since_epoch()) % 1000;
    std::ostringstream out;
    out << std::put_time(&tm, "%Y-%m-%d %H:%M:%S")
        << '.' << std::setw(3) << std::setfill('0') << ms.count();
    return out.str();
}

}

void runtime_log_initialize(const VcsConfiguration &configuration) {
    RuntimeLogState &s = state();
    std::lock_guard<std::mutex> guard(s.mutex);
    s.enabled = configuration.diagnostics.log_to_file;
    s.flush_every_line = configuration.diagnostics.flush_every_line;
    s.path.clear();
    if (s.file.is_open()) s.file.close();
    if (!s.enabled) return;
    std::filesystem::path file_name = configuration.diagnostics.log_file;
    if (file_name.empty()) file_name = "VCSNative.log";
    s.path = configuration.executable_directory / file_name;
    s.file.open(s.path, std::ios::out | std::ios::trunc);
    if (!s.file) {
        s.enabled = false;
        s.path.clear();
        return;
    }
    s.file << "VCSNative runtime log\n";
    s.file << "stage=tier2-v4-amd-uma-compat-2026-08-16\n";
    s.file << "config=" << configuration.source_path.string() << '\n';
    s.file << "started=" << timestamp_now() << '\n';
    s.file << "perf_telemetry=" << (configuration.diagnostics.perf_telemetry ? 1 : 0)
           << " interval_vblanks=" << configuration.diagnostics.perf_telemetry_interval_vblanks
           << "\n";
    s.file << "guest_hotspot=" << (configuration.diagnostics.guest_hotspot_profile ? 1 : 0)
           << " sample_stride=256 interval_vblanks=300\n";
    s.file << "tier2_superblocks=" << (tier2_superblocks_enabled() ? 1 : 0)
           << " version=4 clusters=7 mask=0x" << std::hex << tier2_cluster_mask() << std::dec
           << " hot_blocks=1060 static_fused_calls=49 static_fused_tail=13 hooks=25"
           << " unwind_fix=1 reentry_guard=1 dataflow=1 vfpu_block32=133 mem_runs=35 mem_words=287"
           << " append32=51 advance32=89 simd_mat4=4 simd_matvec=19"
           << " gpr_shadow_clusters=4 gpr_shadow_regs=24 gpr_shadow_occurrences=3428 geometry_shadow=0"
           << " dx12_execute_indirect_default=1 indirect_buffer_mb=4 amd_uma_compat=1 uma_msaa_guard=1 packed0115_amd_stride=12\n\n";
    if (s.flush_every_line) s.file.flush();
}

void runtime_log_shutdown() noexcept {
    RuntimeLogState &s = state();
    std::lock_guard<std::mutex> guard(s.mutex);
    if (s.file.is_open()) {
        s.file << '\n' << '[' << timestamp_now() << "] shutdown\n";
        s.file.flush();
        s.file.close();
    }
    s.path.clear();
    s.enabled = false;
}

bool runtime_log_enabled() noexcept {
    RuntimeLogState &s = state();
    std::lock_guard<std::mutex> guard(s.mutex);
    return s.enabled && s.file.is_open();
}

std::filesystem::path runtime_log_path() {
    RuntimeLogState &s = state();
    std::lock_guard<std::mutex> guard(s.mutex);
    return s.path;
}

void runtime_log_line(std::string_view line) {
    RuntimeLogState &s = state();
    std::lock_guard<std::mutex> guard(s.mutex);
    if (!s.enabled || !s.file.is_open()) return;
    s.file << '[' << timestamp_now() << "] " << line << '\n';
    if (s.flush_every_line) s.file.flush();
}

void runtime_log_error(std::string_view category, std::string_view message) {
    std::ostringstream out;
    out << category << ": " << message;
    runtime_log_line(out.str());
}

} // namespace vcs
