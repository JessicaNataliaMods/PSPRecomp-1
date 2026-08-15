#include "savedata_utility_ui.hpp"

#include "ge_gpu_backend.hpp"

#include <algorithm>
#include <array>
#include <cctype>
#include <cstdio>
#include <cstring>
#include <fstream>
#include <limits>
#include <span>
#include <string_view>
#include <vector>

extern "C" {
#include <libavcodec/avcodec.h>
#include <libavutil/imgutils.h>
#include <libswscale/swscale.h>
}

namespace vcs {
namespace {

struct DecodedIcon {
    std::uint32_t width{};
    std::uint32_t height{};
    std::vector<std::byte> rgba;
    std::uint64_t cache_key{};
};

struct UiState {
    bool active{};
    std::uint32_t mode{};
    std::vector<SavedataSlotEntry> slots;
    std::vector<DecodedIcon> icons;
    std::size_t selected{};
    SavedataUtilityUiPrompt prompt{SavedataUtilityUiPrompt::List};
    std::string message;
    bool operation_ok{true};
    bool confirm_yes{};
};

UiState g_ui{};
bool g_logged_missing_target = false;
bool g_logged_first_frame = false;

struct TrackedTarget {
    std::uint32_t address{};
    GeGpuDrawDescriptor draw{};
    bool valid{};
};
constexpr std::size_t kTrackedTargets = 8u;
std::array<TrackedTarget, kTrackedTargets> g_targets{};
std::uint32_t g_last_observed_target{};

std::uint64_t icon_cache_key(std::string_view path, std::span<const std::byte> rgba) noexcept {
    std::uint64_t hash = 1469598103934665603ull;
    auto mix = [&](std::uint8_t value) {
        hash ^= value;
        hash *= 1099511628211ull;
    };
    for (unsigned char ch : path) mix(ch);
    for (const std::byte value : rgba) mix(static_cast<std::uint8_t>(value));
    // Zero means "derive the normal PSP texture key" to the backend, so keep
    // this host-only cache identity nonzero.
    return hash != 0u ? hash : 1u;
}

DecodedIcon decode_png_icon(const SavedataSlotEntry &slot) noexcept {
    DecodedIcon out;
    if (slot.icon0_path.empty()) return out;
    try {
        std::ifstream file(slot.icon0_path, std::ios::binary | std::ios::ate);
        if (!file) return out;
        const std::streamoff length = file.tellg();
        if (length <= 0 || length > 4 * 1024 * 1024 ||
            length > static_cast<std::streamoff>(std::numeric_limits<int>::max())) return out;
        file.seekg(0, std::ios::beg);
        std::vector<std::uint8_t> compressed(static_cast<std::size_t>(length));
        file.read(reinterpret_cast<char *>(compressed.data()), length);
        if (!file) return out;

        const AVCodec *decoder = avcodec_find_decoder(AV_CODEC_ID_PNG);
        if (decoder == nullptr) return out;
        AVCodecContext *codec = avcodec_alloc_context3(decoder);
        AVPacket *packet = av_packet_alloc();
        AVFrame *frame = av_frame_alloc();
        if (codec == nullptr || packet == nullptr || frame == nullptr) {
            if (frame != nullptr) av_frame_free(&frame);
            if (packet != nullptr) av_packet_free(&packet);
            if (codec != nullptr) avcodec_free_context(&codec);
            return out;
        }
        bool ok = false;
        if (avcodec_open2(codec, decoder, nullptr) >= 0 &&
            av_new_packet(packet, static_cast<int>(compressed.size())) >= 0) {
            std::memcpy(packet->data, compressed.data(), compressed.size());
            if (avcodec_send_packet(codec, packet) >= 0 && avcodec_receive_frame(codec, frame) >= 0 &&
                frame->width > 0 && frame->height > 0 && frame->width <= 2048 && frame->height <= 2048) {
                const std::size_t pixels = static_cast<std::size_t>(frame->width) * frame->height;
                if (pixels <= (16u * 1024u * 1024u) / 4u) {
                    out.rgba.resize(pixels * 4u);
                    SwsContext *sws = sws_getContext(frame->width, frame->height,
                        static_cast<AVPixelFormat>(frame->format), frame->width, frame->height,
                        AV_PIX_FMT_RGBA, SWS_BILINEAR, nullptr, nullptr, nullptr);
                    if (sws != nullptr) {
                        std::uint8_t *dst_data[4]{reinterpret_cast<std::uint8_t *>(out.rgba.data()), nullptr, nullptr, nullptr};
                        int dst_linesize[4]{frame->width * 4, 0, 0, 0};
                        if (sws_scale(sws, frame->data, frame->linesize, 0, frame->height,
                                      dst_data, dst_linesize) == frame->height) {
                            out.width = static_cast<std::uint32_t>(frame->width);
                            out.height = static_cast<std::uint32_t>(frame->height);
                            out.cache_key = icon_cache_key(slot.icon0_path, out.rgba);
                            ok = true;
                        }
                        sws_freeContext(sws);
                    }
                }
            }
        }
        av_frame_free(&frame);
        av_packet_free(&packet);
        avcodec_free_context(&codec);
        if (!ok) return DecodedIcon{};
    } catch (...) {
        return DecodedIcon{};
    }
    return out;
}

struct IconQuad {
    std::size_t index{};
    float x{};
    float y{};
    float w{};
    float h{};
};

// Compact 5x7 firmware-style bitmap font. The system savedata utility only
// needs readable UI/metadata, so lower case is folded to upper case and unknown
// codepoints become '?'. This keeps the renderer independent from a Windows
// font API or an external font asset.
struct Glyph { char c; std::array<std::uint8_t, 7> r; };
constexpr std::array<Glyph, 43> kGlyphs{{
    {' ', {0,0,0,0,0,0,0}}, {'0',{14,17,19,21,25,17,14}},
    {'1',{4,12,4,4,4,4,14}}, {'2',{14,17,1,2,4,8,31}},
    {'3',{30,1,1,14,1,1,30}}, {'4',{2,6,10,18,31,2,2}},
    {'5',{31,16,16,30,1,1,30}}, {'6',{14,16,16,30,17,17,14}},
    {'7',{31,1,2,4,8,8,8}}, {'8',{14,17,17,14,17,17,14}},
    {'9',{14,17,17,15,1,1,14}},
    {'A',{14,17,17,31,17,17,17}}, {'B',{30,17,17,30,17,17,30}},
    {'C',{14,17,16,16,16,17,14}}, {'D',{30,17,17,17,17,17,30}},
    {'E',{31,16,16,30,16,16,31}}, {'F',{31,16,16,30,16,16,16}},
    {'G',{14,17,16,23,17,17,15}}, {'H',{17,17,17,31,17,17,17}},
    {'I',{14,4,4,4,4,4,14}}, {'J',{7,2,2,2,18,18,12}},
    {'K',{17,18,20,24,20,18,17}}, {'L',{16,16,16,16,16,16,31}},
    {'M',{17,27,21,21,17,17,17}}, {'N',{17,25,21,19,17,17,17}},
    {'O',{14,17,17,17,17,17,14}}, {'P',{30,17,17,30,16,16,16}},
    {'Q',{14,17,17,17,21,18,13}}, {'R',{30,17,17,30,20,18,17}},
    {'S',{15,16,16,14,1,1,30}}, {'T',{31,4,4,4,4,4,4}},
    {'U',{17,17,17,17,17,17,14}}, {'V',{17,17,17,17,17,10,4}},
    {'W',{17,17,17,21,21,21,10}}, {'X',{17,17,10,4,10,17,17}},
    {'Y',{17,17,10,4,4,4,4}}, {'Z',{31,1,2,4,8,16,31}},
    {'.',{0,0,0,0,0,12,12}}, {':',{0,12,12,0,12,12,0}},
    {'-',{0,0,0,31,0,0,0}}, {'/',{1,2,4,8,16,0,0}},
    {'?',{14,17,1,2,4,0,4}}, {'%',{17,2,4,8,17,0,0}},
}};

const Glyph *glyph_for(char value) noexcept {
    unsigned char u = static_cast<unsigned char>(value);
    if (u >= 'a' && u <= 'z') value = static_cast<char>(u - 'a' + 'A');
    for (const Glyph &glyph : kGlyphs) if (glyph.c == value) return &glyph;
    for (const Glyph &glyph : kGlyphs) if (glyph.c == '?') return &glyph;
    return nullptr;
}

void quad(std::vector<GeGpuVertex> &v, float x0, float y0, float x1, float y1,
          std::uint32_t color) {
    GeGpuVertex a{}, b{}, c{}, d{};
    a.x=x0; a.y=y0; a.rgba=color;
    b.x=x1; b.y=y0; b.rgba=color;
    c.x=x1; c.y=y1; c.rgba=color;
    d.x=x0; d.y=y1; d.rgba=color;
    v.push_back(a); v.push_back(b); v.push_back(c);
    v.push_back(a); v.push_back(c); v.push_back(d);
}

void gradient_quad(std::vector<GeGpuVertex> &v, float x0, float y0, float x1, float y1,
                   std::uint32_t top_left, std::uint32_t top_right,
                   std::uint32_t bottom_left, std::uint32_t bottom_right) {
    GeGpuVertex a{}, b{}, c{}, d{};
    a.x=x0; a.y=y0; a.rgba=top_left;
    b.x=x1; b.y=y0; b.rgba=top_right;
    c.x=x1; c.y=y1; c.rgba=bottom_right;
    d.x=x0; d.y=y1; d.rgba=bottom_left;
    v.push_back(a); v.push_back(b); v.push_back(c);
    v.push_back(a); v.push_back(c); v.push_back(d);
}

void text(std::vector<GeGpuVertex> &v, std::string_view value, float x, float y,
          float scale, std::uint32_t color, std::size_t max_chars = 64u) {
    float pen = x;
    std::size_t emitted = 0u;
    for (char ch : value) {
        if (emitted++ >= max_chars || ch == '\n' || ch == '\r') break;
        const Glyph *g = glyph_for(ch);
        if (g != nullptr) {
            for (std::size_t row=0; row<7; ++row) {
                for (std::size_t col=0; col<5; ++col) {
                    if ((g->r[row] & (1u << (4u-col))) == 0u) continue;
                    const float px=pen+static_cast<float>(col)*scale;
                    const float py=y+static_cast<float>(row)*scale;
                    quad(v,px,py,px+scale,py+scale,color);
                }
            }
        }
        pen += 6.0f * scale;
    }
}

std::string first_line(std::string value, std::size_t max_chars) {
    const std::size_t line = value.find_first_of("\r\n");
    if (line != std::string::npos) value.resize(line);
    if (value.size() > max_chars) {
        if (max_chars > 3u) value = value.substr(0, max_chars - 3u) + "...";
        else value.resize(max_chars);
    }
    return value;
}

std::string slot_primary(const SavedataSlotEntry &slot) {
    if (!slot.exists) return "NEW SAVE DATA";
    if (!slot.savedata_title.empty()) return first_line(slot.savedata_title, 34u);
    if (!slot.title.empty()) return first_line(slot.title, 34u);
    return slot.save_name;
}

std::string slot_detail(const SavedataSlotEntry &slot) {
    if (!slot.exists) return "EMPTY SLOT";
    if (!slot.detail.empty()) return first_line(slot.detail, 44u);
    return slot.save_name;
}

const char *heading(std::uint32_t mode) noexcept {
    switch (mode) {
    case 4u: return "LOAD GAME";
    case 5u: return "SAVE GAME";
    case 6u: return "DELETE";
    default: return "SAVED DATA";
    }
}

const char *confirm_message(std::uint32_t mode) noexcept {
    switch (mode) {
    case 5u: return "OVERWRITE THIS SAVE DATA?";
    case 6u: return "DELETE THIS SAVE DATA?";
    default: return "LOAD THIS SAVE DATA?";
    }
}

TrackedTarget *target_for(std::uint32_t address) noexcept {
    for (TrackedTarget &target : g_targets)
        if (target.valid && target.address == address) return &target;
    return nullptr;
}

void configure_overlay_draw(GeGpuDrawDescriptor &draw, std::size_t vertex_count) noexcept {
    draw.primitive = 3u;
    draw.vertex_count = static_cast<std::uint32_t>(vertex_count);
    draw.vertex_type = 0u;
    draw.through = true;
    draw.widescreen_hud = false;
    draw.texture_enabled = false;
    draw.texture_address = 0u;
    draw.texture_format = 0u;
    draw.texture_content_signature = 0u;
    draw.texture_cache_key_hint = 0u;
    draw.texture_image_key_hint = 0u;
    draw.texture_use_alpha = false;
    draw.texture_double_color = false;
    draw.blend_enabled = false;
    draw.color_write_mask = 0u;
    draw.alpha_test_enabled = false;
    draw.depth_test_enabled = false;
    draw.depth_write_enabled = false;
    draw.fog_enabled = false;
    draw.clear_mode = false;
    draw.scissor_x0 = 0; draw.scissor_y0 = 0;
    draw.scissor_x1 = 479; draw.scissor_y1 = 271;
}

void text_wrapped(std::vector<GeGpuVertex> &v, std::string value,
                  float x, float y, float scale, std::uint32_t color,
                  std::size_t chars_per_line, std::size_t max_lines) {
    for (char &ch : value) if (ch == '\r' || ch == '\n' || ch == '\t') ch = ' ';
    std::size_t pos = 0u;
    for (std::size_t line = 0u; line < max_lines && pos < value.size(); ++line) {
        while (pos < value.size() && value[pos] == ' ') ++pos;
        std::size_t take = std::min(chars_per_line, value.size() - pos);
        if (pos + take < value.size()) {
            const std::size_t space = value.rfind(' ', pos + take);
            if (space != std::string::npos && space > pos) take = space - pos;
        }
        text(v, std::string_view(value).substr(pos, take), x,
             y + static_cast<float>(line) * (8.0f * scale + 2.0f), scale, color, take);
        pos += take;
    }
}

void draw_banner(std::vector<GeGpuVertex> &v, std::uint32_t white) {
    // PSP utility banner geometry mirrored from the firmware-style HLE path:
    // 480x23 translucent bar, small system icon at x=10, title at x=30.
    quad(v, 0, 0, 480, 23, 0xFF585863u);
    quad(v, 10, 6, 22, 18, 0xFFB0B0B0u);
    quad(v, 13, 9, 19, 15, 0xFF585863u);
    text(v, heading(g_ui.mode), 30, 7, 1.45f, white, 16);
}

void draw_save_thumbnail(std::vector<GeGpuVertex> &v, std::vector<IconQuad> &icons,
                         float x, float y, float w, float h, bool selected,
                         bool exists, std::size_t index) {
    const std::uint32_t fill = exists ? 0xFF505050u : 0xFF333333u;
    const std::uint32_t border = selected ? 0xFFF0F0F0u : 0xFF777777u;
    quad(v, x, y, x + w, y + h, fill);
    if (exists && index < g_ui.icons.size() && !g_ui.icons[index].rgba.empty())
        icons.push_back(IconQuad{index, x, y, w, h});
    const float b = selected ? 1.5f : 0.75f;
    quad(v, x-b, y-b, x+w+b, y, border);
    quad(v, x-b, y+h, x+w+b, y+h+b, border);
    quad(v, x-b, y, x, y+h, border);
    quad(v, x+w, y, x+w+b, y+h, border);
    if (index >= g_ui.icons.size() || g_ui.icons[index].rgba.empty()) {
        char label[16]{};
        std::snprintf(label, sizeof(label), "%u", static_cast<unsigned>(index + 1u));
        text(v, label, x + w * 0.47f, y + h * 0.43f,
             selected ? 1.1f : 0.75f, 0xFFD0D0D0u, 4);
    }
}

void draw_selected_info(std::vector<GeGpuVertex> &v, const SavedataSlotEntry &slot,
                        std::uint32_t white, std::uint32_t dim) {
    if (!slot.exists) {
        text(v, "NEW DATA", 180, 132, 1.15f, white, 20);
        return;
    }
    const std::string title = !slot.title.empty() ? first_line(slot.title, 34u)
                                                   : "GRAND THEFT AUTO: VICE CITY STORIES";
    text(v, title, 180, 121, 1.0f, dim, 36);
    quad(v, 180, 136, 480, 137, white);
    // The host-side savedata directory does not currently persist the PSP clock
    // fields; show the stable slot id here instead of fabricating a date/time.
    text(v, slot.save_name, 180, 142, 0.85f, white, 30);
    text(v, slot_primary(slot), 175, 158, 1.05f, white, 35);
    text_wrapped(v, slot.detail, 175, 179, 0.82f, white, 41u, 4u);
}

void draw_bottom_buttons(std::vector<GeGpuVertex> &v, const char *label,
                         std::uint32_t dim) {
    text(v, label, 330, 249, 0.9f, dim, 28);
}

void render_list(std::vector<GeGpuVertex> &v, std::vector<IconQuad> &icons) {
    constexpr std::uint32_t white = 0xFFF4F4F4u;
    constexpr std::uint32_t dim = 0xFFD0CCD4u;

    // V9.3 clean-rebase visual change only: reproduce the user-supplied
    // purple/pink background with native vertex interpolation. This keeps the
    // exact proven V9 framebuffer/render path: no extra texture, target, or
    // high-resolution overlay is introduced. Colors are sampled from the four
    // corners of the supplied 1920x1080 gradient.
    gradient_quad(v, 0, 0, 480, 272,
                  0xFFE23072u, 0xFFE02F72u,
                  0xFFCDB3E1u, 0xFFCEABE3u);
    draw_banner(v, white);

    if (g_ui.prompt == SavedataUtilityUiPrompt::NoData || g_ui.slots.empty()) {
        text(v, g_ui.message.empty() ? "THERE IS NO DATA" : g_ui.message,
             164, 132, 1.15f, white, 34);
        draw_bottom_buttons(v, "O BACK", dim);
        return;
    }

    const std::size_t selected = std::min(g_ui.selected, g_ui.slots.size() - 1u);
    const SavedataSlotEntry &slot = g_ui.slots[selected];

    if (g_ui.prompt == SavedataUtilityUiPrompt::List) {
        // Match the PSP utility's save-list composition: selected ICON0 is
        // 144x80 at (27,97); neighboring saves are 81x45 above/below it.
        for (std::size_t i = 0; i < g_ui.slots.size(); ++i) {
            float x, y, w, h;
            if (i == selected) {
                x = 27.0f; y = 97.0f; w = 144.0f; h = 80.0f;
            } else {
                x = 58.5f; w = 81.0f; h = 45.0f;
                if (i < selected)
                    y = 97.0f - 13.0f - 45.0f * static_cast<float>(selected - i);
                else
                    y = 97.0f + 48.0f + 45.0f * static_cast<float>(i - selected);
            }
            if (y < -60.0f || y > 271.0f) continue;
            draw_save_thumbnail(v, icons, x, y, w, h, i == selected, g_ui.slots[i].exists, i);
        }
        draw_selected_info(v, slot, white, dim);
        draw_bottom_buttons(v, "X ENTER   O BACK", dim);
        return;
    }

    // Confirm/result states switch to one 144x80 icon, like PSP firmware.
    draw_save_thumbnail(v, icons, 27, 97, 144, 80, true, slot.exists, selected);
    text(v, slot_primary(slot), 8, 198, 0.85f, dim, 50);
    text(v, slot.save_name, 8, 214, 0.75f, dim, 30);

    if (g_ui.prompt == SavedataUtilityUiPrompt::Confirm) {
        const char *message = g_ui.message.empty() ? confirm_message(g_ui.mode)
                                                    : g_ui.message.c_str();
        text(v, message, 196, 126, 1.0f, white, 40);
        if (g_ui.confirm_yes)
            quad(v, 282, 145, 324, 162, 0xFF505050u);
        else
            quad(v, 348, 145, 388, 162, 0xFF505050u);
        text(v, "YES", 302, 151, 1.0f, g_ui.confirm_yes ? white : dim, 8);
        text(v, "NO", 366, 151, 1.0f, g_ui.confirm_yes ? dim : white, 8);
        draw_bottom_buttons(v, "X ENTER   O BACK", dim);
    } else {
        text(v, g_ui.message, 206, 132, 1.05f,
             g_ui.operation_ok ? white : dim, 40);
        draw_bottom_buttons(v, "O BACK", dim);
    }
}

} // namespace

void savedata_utility_ui_begin(std::uint32_t mode,
                               const std::vector<SavedataSlotEntry> &slots,
                               std::size_t selected) noexcept {
    g_ui.active = true;
    g_ui.mode = mode;
    g_ui.slots = slots;
    g_ui.icons.clear();
    g_ui.icons.reserve(g_ui.slots.size());
    for (const SavedataSlotEntry &slot : g_ui.slots)
        g_ui.icons.push_back(decode_png_icon(slot));
    g_logged_missing_target = false;
    g_logged_first_frame = false;
    g_ui.selected = slots.empty() ? 0u : std::min(selected, slots.size()-1u);
    g_ui.prompt = slots.empty() ? SavedataUtilityUiPrompt::NoData
                                : SavedataUtilityUiPrompt::List;
    g_ui.message = slots.empty() ? "THERE IS NO SAVE DATA." : "";
    g_ui.operation_ok = true;
    g_ui.confirm_yes = false;
}

void savedata_utility_ui_end() noexcept {
    g_ui = UiState{};
}

bool savedata_utility_ui_active() noexcept { return g_ui.active; }

void savedata_utility_ui_set_selected(std::size_t selected) noexcept {
    if (!g_ui.slots.empty()) g_ui.selected = std::min(selected, g_ui.slots.size()-1u);
}

void savedata_utility_ui_set_prompt(SavedataUtilityUiPrompt prompt,
                                    const char *message,
                                    bool operation_ok) noexcept {
    g_ui.prompt = prompt;
    g_ui.message = message != nullptr ? message : "";
    g_ui.operation_ok = operation_ok;
}

void savedata_utility_ui_set_confirm_choice(bool yes) noexcept {
    g_ui.confirm_yes = yes;
}

void savedata_utility_ui_observe_draw(const GeGpuDrawDescriptor &draw,
                                      std::uint32_t vertex_weight) noexcept {
    if (draw.clear_mode || vertex_weight == 0u) return;
    const std::uint32_t address = draw.framebuffer_address & 0x001FFFF0u;
    if (address == 0u) return;
    if (address == g_last_observed_target) return;
    g_last_observed_target = address;
    // Keep one framebuffer-layout sample even before a utility opens. A PSP
    // title may stop issuing world/frontend draws while sceUtility owns the
    // screen, so waiting until InitStart would leave the HLE surface without a
    // render-target descriptor. Known targets are not recopied on every draw.
    if (target_for(address) != nullptr) return;
    for (TrackedTarget &target : g_targets) {
        if (target.valid) continue;
        target.valid = true;
        target.address = address;
        target.draw = draw;
        return;
    }
    // Small bounded cache: replace slot zero rather than allocate in hot GE code.
    g_targets[0] = TrackedTarget{address, draw, true};
}

void savedata_utility_ui_render_frame(std::uint32_t selected_framebuffer) noexcept {
    if (!g_ui.active || !ge_gpu_backend_graphics_ready()) return;
    const std::uint32_t address = selected_framebuffer & 0x001FFFF0u;
    TrackedTarget *target = target_for(address);
    if (target == nullptr) {
        if (!g_logged_missing_target) {
            std::fprintf(stderr,
                "[savedata-ui] V9.3 active but framebuffer target 0x%08X was never observed; no UI frame can be submitted\n",
                address);
            g_logged_missing_target = true;
        }
        return;
    }

    static thread_local std::vector<GeGpuVertex> vertices;
    static thread_local std::vector<IconQuad> icon_quads;
    vertices.clear();
    icon_quads.clear();
    vertices.reserve(12000u);
    icon_quads.reserve(8u);
    render_list(vertices, icon_quads);
    if (vertices.empty()) return;

    GeGpuDrawDescriptor draw = target->draw;
    configure_overlay_draw(draw, vertices.size());
    ge_gpu_backend_accumulate_color_triangles(draw, vertices);
    if (!g_logged_first_frame) {
        std::fprintf(stderr,
            "[savedata-ui] V9.3 first UI frame submitted target=0x%08X vertices=%zu\n",
            address, vertices.size());
        g_logged_first_frame = true;
    }

    // ICON0.PNG is PSP savedata content supplied by the game/firmware request.
    // Decode it in-process and sample it through the same DX12 GE backend rather
    // than replacing it with host artwork. Each icon keeps a stable host-only
    // texture key; if the backend evicts it, texture_available() naturally
    // triggers a re-upload on a later utility frame.
    for (const IconQuad &quad_info : icon_quads) {
        if (quad_info.index >= g_ui.icons.size()) continue;
        const DecodedIcon &icon = g_ui.icons[quad_info.index];
        if (icon.rgba.empty() || icon.width == 0u || icon.height == 0u) continue;

        GeGpuDrawDescriptor icon_draw = target->draw;
        configure_overlay_draw(icon_draw, 6u);
        icon_draw.texture_enabled = true;
        icon_draw.texture_address = 0u;
        icon_draw.texture_buffer_width = icon.width;
        icon_draw.texture_width = icon.width;
        icon_draw.texture_height = icon.height;
        icon_draw.texture_format = 3u; // host-decoded RGBA8
        icon_draw.texture_function = 3u; // REPLACE
        icon_draw.texture_use_alpha = true;
        icon_draw.texture_linear = true;
        icon_draw.texture_min_linear = true;
        icon_draw.texture_mag_linear = true;
        icon_draw.texture_clamp_u = true;
        icon_draw.texture_clamp_v = true;
        icon_draw.texture_cache_key_hint = icon.cache_key;
        icon_draw.texture_image_key_hint = icon.cache_key;
        icon_draw.texture_content_signature = icon.cache_key;

        if (!ge_gpu_backend_texture_available(icon_draw) &&
            !ge_gpu_backend_upload_decoded_texture(icon_draw, icon.width, icon.height, icon.rgba))
            continue;

        std::array<GeGpuVertex, 6> textured{};
        auto set = [&](GeGpuVertex &vert, float x, float y, float u, float vv) {
            vert.x = x; vert.y = y; vert.rgba = 0xFFFFFFFFu; vert.u = u; vert.v = vv;
        };
        const float x0 = quad_info.x, y0 = quad_info.y;
        const float x1 = quad_info.x + quad_info.w, y1 = quad_info.y + quad_info.h;
        const float u1 = static_cast<float>(icon.width), v1 = static_cast<float>(icon.height);
        set(textured[0], x0, y0, 0.0f, 0.0f);
        set(textured[1], x1, y0, u1, 0.0f);
        set(textured[2], x1, y1, u1, v1);
        set(textured[3], x0, y0, 0.0f, 0.0f);
        set(textured[4], x1, y1, u1, v1);
        set(textured[5], x0, y1, 0.0f, v1);
        ge_gpu_backend_accumulate_color_triangles(icon_draw, textured);
    }
}

} // namespace vcs
