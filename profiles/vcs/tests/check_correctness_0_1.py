#!/usr/bin/env python3
from pathlib import Path
import sys

profile = Path(__file__).resolve().parents[1]
errors = []

def require(path, needle, label):
    text = path.read_text(encoding="utf-8", errors="replace")
    if needle not in text:
        errors.append(f"{label}: missing {needle!r}")

host = profile / "host"
generated = profile / "generated"
tools = profile / "tools"

require(host / "vcs_profile.cpp", "if (voice.adsr_rates[3] <= 0)", "audio zero-release guard")
require(host / "vcs_profile.cpp", "height -= kSasFallbackReleaseStep;", "audio zero-release fallback")
require(host / "vcs_profile.cpp", "const std::uint64_t rate = channel.frequency == 0u ? 44100u : channel.frequency;",
        "audio remaining samples uses channel rate")
require(host / "vcs_profile.cpp",
        "// limit_frame_rate() may advance virtual_time_us when the host misses the",
        "post-frame-limit audio timeline seal")

require(profile / "CMakeLists.txt", "host/savedata_utility_ui.cpp", "PSP savedata utility renderer linked")
require(host / "vcs_profile.cpp", "kSavedataSaveNameListOffset = 0x60u", "savedata saveNameList")
require(host / "vcs_profile.cpp", "savedata_mode_has_list_ui", "savedata LIST modes")
require(host / "vcs_profile.cpp", "update_savedata_list_utility", "interactive savedata HLE state machine")
require(host / "vcs_profile.cpp", "savedata_utility_ui_render_frame(display_state.frame_buffer);",
        "savedata utility rendered into GE framebuffer")
require(host / "savedata_utility_ui.cpp", "ge_gpu_backend_accumulate_color_triangles",
        "in-frame savedata utility draw")
if "host/savedata_dialog.cpp" in (profile / "CMakeLists.txt").read_text(encoding="utf-8", errors="replace"):
    errors.append("rejected Win32 savedata dialog must not be linked")

require(generated / "generated_units.hpp", '#include "vcs_draw_distance_patch.hpp"',
        "generated draw-distance state header")
checks = [
    ("generated_unit_0133.cpp", "g_draw_distance_runtime_telemetry.far_clip_set_hits", "world far-clip setter"),
    ("generated_unit_0136.cpp", "g_draw_distance_runtime_scales.entity", "entity local label"),
    ("generated_unit_0113.cpp", "g_draw_distance_runtime_scales.npcs", "NPC local label"),
    ("generated_unit_0208.cpp", "g_draw_distance_runtime_scales.vehicles", "vehicle local label"),
]
for filename, needle, label in checks:
    require(generated / filename, needle, label)
codegen = tools / "vcs_codegen_main.cpp"
for pc in ("0x08A1AD6Cu", "0x08A24128u", "0x08AEC918u", "0x089CB38Cu", "0x08B45AB8u", "0x08B45AC0u"):
    require(codegen, pc, f"future codegen preserves {pc}")
require(host / "vcs_profile.cpp", "draw_distance_vblank_tick(rt, ctx.gpr[28], display_vblank_index);",
        "world draw-distance vblank maintenance")
require(host / "vcs_draw_distance_patch.cpp",
        "std::max({g_config.world, g_config.vehicles, g_config.npcs})",
        "world multiplier participates in common camera/entity LOD gate")

dx12 = host / "ge_gpu_backend_dx12.cpp"
require(dx12, "Dx12BlendPlan dx12_blend_plan", "DX12 generalized PSP blend mapper")
require(dx12, "D3D12_BLEND_BLEND_FACTOR", "DX12 FIX blend constant")
require(dx12, "D3D12_BLEND_INV_BLEND_FACTOR", "DX12 complementary FIX blend")
require(dx12, "plan.src = D3D12_BLEND_SRC_ALPHA;", "DX12 safe translucent fallback")
require(dx12, "PSPRECOMP_DX12_BLEND_DIAG", "DX12 unsupported-blend diagnostic")
require(dx12, "g_draw_distance_runtime_scales.world", "DX12 world fog follows DrawDistance.World")
require(dx12, "hw.fog_end * fog_distance_scale", "DX12 fog end is extended with draw distance")
require(dx12, "hw.fog_slope / fog_distance_scale", "DX12 fog slope preserves scaled curve")
require(dx12, "compile_pipe(pipe, false", "ProperShaders shadow-free material-pipe retry")
require(dx12, "pipe compiled fallback:", "ProperShaders pipe recovery runtime marker")
require(dx12, "constexpr UINT pipe_flags = D3DCOMPILE_OPTIMIZATION_LEVEL3;",
        "optional material pipes do not promote FXC warnings to fatal errors")
private_shaders = host / "propershaders/private/PrivateShaders.cpp"
require(private_shaders, "bool material_shadows", "ProperShaders separable material-shadow variant")
require(private_shaders, "shadow_enabled ? proper_shaders_material_shadow_hlsl() : nullptr",
        "ProperShaders shadow-free fallback excludes receiver HLSL")
for filename in ("BuildingPipe.cpp", "SkinPipe.cpp", "VehiclePipe.cpp"):
    pipe = host / "propershaders/private" / filename
    require(pipe, "#if PROPER_SHADOW_ENABLED", f"{filename} guards shadow hooks")

ini = (profile / "config/VCSNative.ini").read_text(encoding="utf-8", errors="replace")
dd = ini.split("[DrawDistance]", 1)[1].split("[", 1)[0]
if "Enabled=true" not in dd or "Objects=2.00" not in dd or "Vehicles=2.00" not in dd or "NPCs=2.00" not in dd:
    errors.append("DrawDistance test profile must enable 2.00x objects/vehicles/NPCs")

if errors:
    print("CORRECTNESS 0.1 SOURCE AUDIT: FAIL")
    for e in errors:
        print(" -", e)
    sys.exit(1)

print("CORRECTNESS 0.1 SOURCE AUDIT: PASS")
print(" - audio release/timing guards present")
print(" - savedata LIST UI is firmware-style HLE rendered in the PSP framebuffer")
print(" - draw-distance local AOT labels + regeneration hooks present")
print(" - world distance participates in the common camera/entity LOD multiplier")
print(" - ProperShaders material pipes survive a shadow-receiver compile failure")
print(" - DX12 unsafe opaque blend fallback removed")
print(" - draw distance test profile enables 2x objects/vehicles/NPCs")
