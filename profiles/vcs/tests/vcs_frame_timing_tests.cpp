#include "vcs_frame_timing.hpp"
#include <cmath>
#include <filesystem>
#include <fstream>
#include <iostream>
#include <iterator>
#include <string>

int main() {
    for (const unsigned fps : {30u, 60u, 100u, 120u, 144u, 200u, 240u}) {
        double seconds = 0.0;
        for (unsigned frame = 0; frame < fps * 60u; ++frame) {
            const float measured = 50.0f / fps;
            const float dt = measured < 0.5f
                ? vcs::game_minimum_timestep(measured, 0.5f, fps > 30u) : measured;
            seconds += dt / 50.0;
        }
        if (std::abs(seconds - 60.0) > 0.001) {
            std::cerr << "Animation drift at " << fps << " FPS: " << seconds << '\n';
            return 1;
        }
    }
    if (vcs::game_minimum_timestep(0.1f, 0.5f, false) != 0.5f ||
        vcs::game_minimum_timestep(0.0f, 0.5f, true) != 0.0f) return 1;
    double elapsed = 0.0, animation = 0.0;
    for (unsigned frame = 0; frame < 10000; ++frame) {
        const float milliseconds = frame % 3 == 0 ? 3.0f : 12.0f;
        const float measured = milliseconds / 20.0f;
        elapsed += milliseconds;
        animation += (measured < 0.5f
            ? vcs::game_minimum_timestep(measured, 0.5f, true) : measured) * 20.0;
    }
    if (std::abs(elapsed - animation) > 0.01) return 1;

    // Replay the root-displacement -> velocity -> physics-displacement chain.
    // Test both stock fallback factors: ped 0.5, cutscene object 2.0.
    for (float stock_scale : {0.5f, 2.0f}) {
        for (unsigned fps : {30u, 60u, 100u, 120u, 144u, 200u, 240u}) {
            double distance = 0.0;
            for (unsigned frame = 0; frame < fps * 10u; ++frame) {
                const float dt = 50.0f / fps;
                const float root_delta = 3.0f / fps; // 3 metres/second
                const float scale = dt < 0.5f
                    ? vcs::game_root_motion_scale(dt, stock_scale, true) : 1.0f / dt;
                distance += root_delta * scale * dt;
            }
            if (std::abs(distance - 30.0) > 0.001) {
                std::cerr << "Root-motion distance changed with FPS: " << fps << ' ' << distance << '\n';
                return 1;
            }
        }
        if (vcs::game_root_motion_scale(0.25f, stock_scale, false) != stock_scale ||
            vcs::game_root_motion_scale(0.0f, stock_scale, true) != 0.0f) return 1;

        double expected = 0.0, integrated = 0.0;
        for (unsigned frame = 0; frame < 10000u; ++frame) {
            // Cross the old threshold repeatedly, including paused frames.
            const float milliseconds = frame % 5 == 0 ? 0.0f : (frame % 2 == 0 ? 4.0f : 16.0f);
            const float dt = milliseconds / 20.0f;
            const float delta = -2.0f * milliseconds / 1000.0f;
            const float scale = dt < 0.5f
                ? vcs::game_root_motion_scale(dt, stock_scale, true) : 1.0f / dt;
            expected += delta;
            integrated += delta * scale * dt;
        }
        if (!std::isfinite(integrated) || std::abs(expected - integrated) > 0.001) return 1;
    }

    // Generated intra-unit jumps bypass Runtime::register_function. Catch a
    // regeneration that silently removes the actual CTimer patch, not just a
    // regression in the standalone arithmetic helper.
    std::ifstream generated(std::filesystem::path(__FILE__).parent_path().parent_path()
                            / "generated/generated_unit_0131.cpp");
    const std::string source{std::istreambuf_iterator<char>(generated), {}};
    const auto begin = source.find("L_08A11438:\n");
    const auto end = source.find("L_08A11440:\n", begin);
    if (begin == std::string::npos || end == std::string::npos ||
        source.substr(begin, end - begin).find("vcs::game_minimum_timestep(") == std::string::npos) {
        std::cerr << "Generated CTimer high-FPS patch is missing\n";
        return 1;
    }
    for (const auto &unit : {"generated_unit_0069.cpp", "generated_unit_0133.cpp"}) {
        std::ifstream input(std::filesystem::path(__FILE__).parent_path().parent_path() / "generated" / unit);
        const std::string code{std::istreambuf_iterator<char>(input), {}};
        const char *label = std::string(unit) == "generated_unit_0069.cpp" ? "L_0891997C:\n" : "L_08A199DC:\n";
        const auto at = code.find(label);
        if (at == std::string::npos || code.substr(at, 600).find("vcs::game_root_motion_scale(") == std::string::npos) {
            std::cerr << "Generated root-motion patch missing: " << unit << '\n';
            return 1;
        }
    }
    std::cout << "VCS frame timing and root motion: 30/60/100/120/144/200/240 FPS PASS\n";
}
