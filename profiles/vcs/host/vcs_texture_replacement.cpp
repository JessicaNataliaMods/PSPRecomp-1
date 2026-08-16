#include "vcs_texture_replacement.hpp"

#include "vcs_config.hpp"
#include "vcs_runtime_log.hpp"

#include <algorithm>
#include <array>
#include <cctype>
#include <cstring>
#include <fstream>
#include <mutex>
#include <sstream>
#include <unordered_map>
#include <unordered_set>

namespace vcs {
namespace {

// 'tex\0'. Every texture container in the game's .IMG archives starts with it.
constexpr std::uint32_t kTexIdent = 0x00746578u;
// Archive entries are laid out on 2 KiB sector boundaries, so a container can
// only ever begin at one. Scanning by sector rather than byte keeps a false
// positive from a random run of bytes inside model or collision data.
constexpr std::uint64_t kSectorSize = 0x800u;

struct DecodedImage {
    std::uint32_t width{};
    std::uint32_t height{};
    std::vector<std::byte> rgba;
};

struct State {
    std::mutex mutex;
    bool initialized{};
    bool enabled{};
    std::filesystem::path directory;
    // whole-raster content key -> index entry
    std::unordered_map<std::uint64_t, TextureIndexEntry> by_full_content;
    // upper-cased internal name -> .dds path supplied by the user
    std::unordered_map<std::string, std::filesystem::path> overrides;
    // Decoded .dds keyed by upper-cased name. unordered_map keeps element
    // addresses stable across rehash, so a pointer handed to the renderer stays
    // valid for the rest of the process.
    std::unordered_map<std::string, DecodedImage> decoded;
    std::unordered_set<std::string> failed_decodes;
    std::unordered_set<std::string> indexed_archives;
    std::uint64_t textures_indexed{};
    std::uint64_t containers_indexed{};
    std::uint64_t substituted_textures{};
};

State &state() {
    static State instance;
    return instance;
}

std::string upper_copy(std::string value) {
    std::transform(value.begin(), value.end(), value.begin(), [](unsigned char ch) {
        return static_cast<char>(std::toupper(ch));
    });
    return value;
}

std::uint32_t read_u32(const std::uint8_t *bytes) noexcept {
    return static_cast<std::uint32_t>(bytes[0]) |
           (static_cast<std::uint32_t>(bytes[1]) << 8u) |
           (static_cast<std::uint32_t>(bytes[2]) << 16u) |
           (static_cast<std::uint32_t>(bytes[3]) << 24u);
}

std::int16_t read_s16(const std::uint8_t *bytes) noexcept {
    return static_cast<std::int16_t>(static_cast<std::uint16_t>(bytes[0]) |
                                     (static_cast<std::uint16_t>(bytes[1]) << 8u));
}

std::string read_ascii(const std::uint8_t *bytes, std::size_t capacity) {
    std::string value;
    for (std::size_t index = 0; index < capacity; ++index) {
        const unsigned char ch = bytes[index];
        if (ch == 0u) break;
        // Names are plain ASCII identifiers; anything else means this is not a
        // name field and the container should not be trusted.
        if (ch < 0x20u || ch > 0x7Eu) return {};
        value.push_back(static_cast<char>(ch));
    }
    return value;
}

// ---------------------------------------------------------------------------
// DDS decoding
//
// Only what a texture author actually exports: the three classic block formats
// and uncompressed 24/32-bit. Everything lands as RGBA8, which is the form the
// GE renderer already hands the backend for every texture, so a replacement
// joins the normal upload path instead of needing one of its own.
// ---------------------------------------------------------------------------

constexpr std::uint32_t kDdsMagic = 0x20534444u; // 'DDS '
constexpr std::uint32_t four_cc(char a, char b, char c, char d) {
    return static_cast<std::uint32_t>(static_cast<unsigned char>(a)) |
           (static_cast<std::uint32_t>(static_cast<unsigned char>(b)) << 8u) |
           (static_cast<std::uint32_t>(static_cast<unsigned char>(c)) << 16u) |
           (static_cast<std::uint32_t>(static_cast<unsigned char>(d)) << 24u);
}

void write_pixel(std::vector<std::byte> &rgba, std::uint32_t width, std::uint32_t height,
                 std::uint32_t x, std::uint32_t y, std::uint8_t r, std::uint8_t g,
                 std::uint8_t b, std::uint8_t a) {
    if (x >= width || y >= height) return;
    const std::size_t at = (static_cast<std::size_t>(y) * width + x) * 4u;
    rgba[at + 0u] = static_cast<std::byte>(r);
    rgba[at + 1u] = static_cast<std::byte>(g);
    rgba[at + 2u] = static_cast<std::byte>(b);
    rgba[at + 3u] = static_cast<std::byte>(a);
}

// Shared 565 colour half of BC1/BC2/BC3. punchthrough enables BC1's one-bit
// alpha, which BC2 and BC3 must not use because they carry their own alpha.
void decode_color_block(const std::uint8_t *block, bool punchthrough,
                        std::array<std::uint8_t, 16> &r, std::array<std::uint8_t, 16> &g,
                        std::array<std::uint8_t, 16> &b, std::array<std::uint8_t, 16> &a) {
    const std::uint16_t c0 = static_cast<std::uint16_t>(block[0] | (block[1] << 8));
    const std::uint16_t c1 = static_cast<std::uint16_t>(block[2] | (block[3] << 8));
    const auto expand = [](std::uint16_t value, std::uint8_t &er, std::uint8_t &eg,
                           std::uint8_t &eb) {
        const std::uint32_t r5 = (value >> 11u) & 0x1Fu;
        const std::uint32_t g6 = (value >> 5u) & 0x3Fu;
        const std::uint32_t b5 = value & 0x1Fu;
        er = static_cast<std::uint8_t>((r5 * 255u + 15u) / 31u);
        eg = static_cast<std::uint8_t>((g6 * 255u + 31u) / 63u);
        eb = static_cast<std::uint8_t>((b5 * 255u + 15u) / 31u);
    };
    std::array<std::uint8_t, 4> pr{}, pg{}, pb{}, pa{255u, 255u, 255u, 255u};
    expand(c0, pr[0], pg[0], pb[0]);
    expand(c1, pr[1], pg[1], pb[1]);
    if (c0 > c1 || !punchthrough) {
        pr[2] = static_cast<std::uint8_t>((2u * pr[0] + pr[1]) / 3u);
        pg[2] = static_cast<std::uint8_t>((2u * pg[0] + pg[1]) / 3u);
        pb[2] = static_cast<std::uint8_t>((2u * pb[0] + pb[1]) / 3u);
        pr[3] = static_cast<std::uint8_t>((pr[0] + 2u * pr[1]) / 3u);
        pg[3] = static_cast<std::uint8_t>((pg[0] + 2u * pg[1]) / 3u);
        pb[3] = static_cast<std::uint8_t>((pb[0] + 2u * pb[1]) / 3u);
    } else {
        pr[2] = static_cast<std::uint8_t>((pr[0] + pr[1]) / 2u);
        pg[2] = static_cast<std::uint8_t>((pg[0] + pg[1]) / 2u);
        pb[2] = static_cast<std::uint8_t>((pb[0] + pb[1]) / 2u);
        pr[3] = pg[3] = pb[3] = 0u;
        pa[3] = 0u;
    }
    for (std::uint32_t index = 0; index < 16u; ++index) {
        const std::uint32_t selector =
            (block[4u + (index >> 2u)] >> ((index & 3u) * 2u)) & 3u;
        r[index] = pr[selector];
        g[index] = pg[selector];
        b[index] = pb[selector];
        a[index] = pa[selector];
    }
}

void decode_bc_alpha(const std::uint8_t *block, std::array<std::uint8_t, 16> &a) {
    std::array<std::uint8_t, 8> values{};
    values[0] = block[0];
    values[1] = block[1];
    if (values[0] > values[1]) {
        for (std::uint32_t i = 1; i < 7u; ++i)
            values[i + 1u] = static_cast<std::uint8_t>(
                ((7u - i) * values[0] + i * values[1]) / 7u);
    } else {
        for (std::uint32_t i = 1; i < 5u; ++i)
            values[i + 1u] = static_cast<std::uint8_t>(
                ((5u - i) * values[0] + i * values[1]) / 5u);
        values[6] = 0u;
        values[7] = 255u;
    }
    std::uint64_t bits = 0u;
    for (int i = 0; i < 6; ++i)
        bits |= static_cast<std::uint64_t>(block[2 + i]) << (8 * i);
    for (std::uint32_t index = 0; index < 16u; ++index)
        a[index] = values[(bits >> (3u * index)) & 7u];
}

bool decode_dxt(const std::uint8_t *data, std::size_t available, DecodedImage &out,
                int variant) { // 1 = BC1, 3 = BC2, 5 = BC3
    const std::uint32_t block_bytes = variant == 1 ? 8u : 16u;
    const std::uint32_t blocks_x = (out.width + 3u) / 4u;
    const std::uint32_t blocks_y = (out.height + 3u) / 4u;
    if (static_cast<std::uint64_t>(blocks_x) * blocks_y * block_bytes > available) return false;
    std::size_t at = 0u;
    for (std::uint32_t by = 0; by < blocks_y; ++by) {
        for (std::uint32_t bx = 0; bx < blocks_x; ++bx, at += block_bytes) {
            std::array<std::uint8_t, 16> r{}, g{}, b{}, a{};
            const std::uint8_t *color = data + at + (variant == 1 ? 0u : 8u);
            decode_color_block(color, variant == 1, r, g, b, a);
            if (variant == 3) {
                for (std::uint32_t index = 0; index < 16u; ++index) {
                    const std::uint8_t nibble =
                        (data[at + (index >> 1u)] >> ((index & 1u) * 4u)) & 0x0Fu;
                    a[index] = static_cast<std::uint8_t>(nibble * 17u);
                }
            } else if (variant == 5) {
                decode_bc_alpha(data + at, a);
            }
            for (std::uint32_t index = 0; index < 16u; ++index) {
                write_pixel(out.rgba, out.width, out.height, bx * 4u + (index & 3u),
                            by * 4u + (index >> 2u), r[index], g[index], b[index], a[index]);
            }
        }
    }
    return true;
}

std::uint32_t mask_shift(std::uint32_t mask) {
    if (mask == 0u) return 0u;
    std::uint32_t shift = 0u;
    while ((mask & 1u) == 0u) { mask >>= 1u; ++shift; }
    return shift;
}

std::uint8_t extract_channel(std::uint32_t pixel, std::uint32_t mask) {
    if (mask == 0u) return 255u;
    const std::uint32_t value = (pixel & mask) >> mask_shift(mask);
    const std::uint32_t range = mask >> mask_shift(mask);
    if (range == 0u) return 255u;
    return static_cast<std::uint8_t>((value * 255u + range / 2u) / range);
}

bool decode_dds_file(const std::filesystem::path &path, DecodedImage &out) {
    std::ifstream input(path, std::ios::binary | std::ios::ate);
    if (!input) return false;
    const std::streamoff length = input.tellg();
    if (length < 128 || length > 256 * 1024 * 1024) return false;
    input.seekg(0, std::ios::beg);
    std::vector<std::uint8_t> bytes(static_cast<std::size_t>(length));
    input.read(reinterpret_cast<char *>(bytes.data()), length);
    if (!input) return false;
    if (read_u32(bytes.data()) != kDdsMagic) return false;

    const std::uint32_t height = read_u32(bytes.data() + 12u);
    const std::uint32_t width = read_u32(bytes.data() + 16u);
    const std::uint32_t pf_flags = read_u32(bytes.data() + 80u);
    const std::uint32_t fourcc = read_u32(bytes.data() + 84u);
    const std::uint32_t bit_count = read_u32(bytes.data() + 88u);
    const std::uint32_t r_mask = read_u32(bytes.data() + 92u);
    const std::uint32_t g_mask = read_u32(bytes.data() + 96u);
    const std::uint32_t b_mask = read_u32(bytes.data() + 100u);
    const std::uint32_t a_mask = read_u32(bytes.data() + 104u);
    if (width == 0u || height == 0u || width > 8192u || height > 8192u) return false;

    std::size_t data_at = 128u;
    // DX10 extension header. Not decoded: it carries DXGI formats this reader
    // does not claim to handle, and guessing would corrupt the image silently.
    if ((pf_flags & 0x4u) != 0u && fourcc == four_cc('D', 'X', '1', '0')) return false;
    if (data_at >= bytes.size()) return false;

    out.width = width;
    out.height = height;
    try {
        out.rgba.assign(static_cast<std::size_t>(width) * height * 4u, std::byte{0});
    } catch (...) {
        return false;
    }
    const std::uint8_t *data = bytes.data() + data_at;
    const std::size_t available = bytes.size() - data_at;

    if ((pf_flags & 0x4u) != 0u) { // DDPF_FOURCC
        if (fourcc == four_cc('D', 'X', 'T', '1')) return decode_dxt(data, available, out, 1);
        if (fourcc == four_cc('D', 'X', 'T', '3')) return decode_dxt(data, available, out, 3);
        if (fourcc == four_cc('D', 'X', 'T', '5')) return decode_dxt(data, available, out, 5);
        return false;
    }
    if ((pf_flags & 0x40u) == 0u) return false; // DDPF_RGB
    if (bit_count != 32u && bit_count != 24u) return false;
    const std::size_t stride = static_cast<std::size_t>(width) * (bit_count / 8u);
    if (stride * height > available) return false;
    for (std::uint32_t y = 0; y < height; ++y) {
        for (std::uint32_t x = 0; x < width; ++x) {
            const std::uint8_t *pixel = data + y * stride + x * (bit_count / 8u);
            const std::uint32_t value = bit_count == 32u
                ? read_u32(pixel)
                : (static_cast<std::uint32_t>(pixel[0]) |
                   (static_cast<std::uint32_t>(pixel[1]) << 8u) |
                   (static_cast<std::uint32_t>(pixel[2]) << 16u));
            write_pixel(out.rgba, width, height, x, y,
                        extract_channel(value, r_mask), extract_channel(value, g_mask),
                        extract_channel(value, b_mask),
                        bit_count == 32u && a_mask != 0u ? extract_channel(value, a_mask)
                                                         : 255u);
        }
    }
    return true;
}

void scan_override_directory(State &s) {
    std::error_code error;
    if (!std::filesystem::is_directory(s.directory, error) || error) return;
    std::filesystem::recursive_directory_iterator walk(
        s.directory, std::filesystem::directory_options::skip_permission_denied, error);
    if (error) return;
    for (const auto &entry : walk) {
        std::error_code file_error;
        if (!entry.is_regular_file(file_error) || file_error) continue;
        if (upper_copy(entry.path().extension().string()) != ".DDS") continue;
        // Subdirectories exist purely so the user can organise; only the file
        // stem takes part in matching, so TexturesDDS/UI/HUD/radar.dds and
        // TexturesDDS/radar.dds mean the same texture.
        const std::string key = upper_copy(entry.path().stem().string());
        if (key.empty()) continue;
        s.overrides.emplace(key, entry.path());
    }
}

void ensure_initialized(State &s) {
    if (s.initialized) return;
    s.initialized = true;
    const VcsConfiguration &config = vcs_configuration();
    if (!config.initialized || !config.textures.enabled) return;
    s.enabled = true;
    std::filesystem::path directory(config.textures.directory);
    if (directory.is_relative() && !config.executable_directory.empty())
        directory = config.executable_directory / directory;
    s.directory = directory;
    scan_override_directory(s);

    std::ostringstream message;
    message << "texture replacement enabled directory=\"" << s.directory.string()
            << "\" dds_files=" << s.overrides.size();
    runtime_log_line(message.str());
}

} // namespace

std::uint64_t texture_replacement_content_key(const std::uint8_t *bytes,
                                              std::size_t size,
                                              std::uint32_t width,
                                              std::uint32_t height,
                                              std::uint32_t depth,
                                              std::size_t hash_bytes) noexcept {
    if (bytes == nullptr || size == 0u) return 0u;
    // Leading bytes only, and deliberately *not* mixed with the total size. The
    // guest may pad a texture's row pitch when it uploads, and folding the size
    // in would turn that padding into a mismatch and hide a content match that
    // is otherwise perfect. Size is compared separately and reported, which is
    // what stage 1 exists to measure.
    //
    // Shape is mixed in, though, because it is known identically on both sides
    // and costs nothing. Hashing content alone put 235 of this game's 2734
    // textures into shared buckets -- flat and near-flat art collides easily
    // once only its first kilobyte is considered.
    const std::size_t length = hash_bytes == 0u ? size : std::min(size, hash_bytes);
    std::uint64_t hash = 0xCBF29CE484222325ull;
    const auto mix = [&hash](std::uint64_t value) {
        hash ^= value;
        hash *= 0x100000001B3ull;
    };
    // Eight bytes per iteration. A byte at a time makes the loop a chain of
    // dependent multiplies -- the same trap ge_renderer's own signature hash
    // documents avoiding, and hashing a whole raster that way is thousands of
    // them per texture.
    std::size_t index = 0u;
    for (; index + 8u <= length; index += 8u) {
        std::uint64_t word{};
        std::memcpy(&word, bytes + index, sizeof(word));
        mix(word);
    }
    if (index < length) {
        std::uint64_t tail = 0u;
        std::memcpy(&tail, bytes + index, length - index);
        mix(tail ^ (static_cast<std::uint64_t>(length - index) << 56u));
    }
    mix(width);
    mix(height);
    mix(depth);
    return hash != 0u ? hash : 1u;
}

std::vector<TextureIndexEntry> texture_replacement_parse_tex_chunk(
    const std::uint8_t *chunk, std::size_t size) noexcept {
    std::vector<TextureIndexEntry> out;
    if (chunk == nullptr || size < 0x40u || read_u32(chunk) != kTexIdent) return out;

    std::uint32_t file_size = read_u32(chunk + 8u);
    const std::uint32_t reloc = read_u32(chunk + 16u);
    if (file_size > size) file_size = static_cast<std::uint32_t>(size);
    constexpr std::uint32_t head = 0x28u;
    if (reloc > file_size || head >= reloc) return out;

    // The container threads its texture records on a circular linked list whose
    // head sits at 0x28. Each link points at the record's *successor* field, so
    // the record itself begins eight bytes earlier.
    struct Record {
        std::uint32_t object{};
        std::uint32_t raster{};
        std::uint32_t data{};
    };
    std::vector<Record> records;
    std::vector<std::uint32_t> allocations;
    std::uint32_t next = read_u32(chunk + head);
    while (next != head && next >= 8u && next + 72u < reloc && records.size() < 4096u) {
        const std::uint32_t object = next - 8u;
        const std::uint32_t raster = read_u32(chunk + object);
        if (raster + 16u > reloc) break;
        records.push_back(Record{object, raster, read_u32(chunk + raster + 4u)});
        allocations.push_back(object);
        allocations.push_back(raster);
        allocations.push_back(records.back().data);
        const std::uint32_t following = read_u32(chunk + next);
        if (following == 0u) break;
        next = following;
    }
    if (records.empty()) return out;
    allocations.push_back(reloc);

    // A record's raster blob runs until whatever the container allocated next,
    // so its length is the distance to the nearest higher allocation.
    const auto blob_length = [&](std::uint32_t at) -> std::uint64_t {
        std::uint32_t best = reloc;
        for (const std::uint32_t offset : allocations)
            if (offset > at && offset < best) best = offset;
        return best > at ? static_cast<std::uint64_t>(best - at) : 0u;
    };

    for (const Record &record : records) {
        if (record.data >= reloc) continue;
        const std::uint64_t length = blob_length(record.data);
        if (length == 0u || record.data + length > reloc) continue;

        TextureIndexEntry entry{};
        entry.name = upper_copy(read_ascii(chunk + record.object + 16u, 32u));
        if (entry.name.empty()) continue;
        const std::int16_t min_width = read_s16(chunk + record.raster + 8u);
        const std::uint32_t log_w = chunk[record.raster + 10u];
        const std::uint32_t log_h = chunk[record.raster + 11u];
        entry.depth = chunk[record.raster + 12u];
        entry.mipmaps = chunk[record.raster + 13u];
        if ((entry.depth != 4u && entry.depth != 8u) || log_w > 12u || log_h > 12u) continue;
        entry.width = 1u << log_w;
        entry.height = 1u << log_h;
        const std::uint32_t row_pixels = std::max<std::uint32_t>(
            entry.width, min_width > 0 ? static_cast<std::uint32_t>(min_width) : 0u);
        const std::uint64_t row_bytes =
            static_cast<std::uint64_t>(row_pixels) * entry.depth / 8u;
        const std::uint64_t base_bytes = row_bytes * entry.height;
        const std::uint64_t palette_bytes = (entry.depth == 4u ? 16u : 256u) * 4u;
        if (base_bytes == 0u || length < base_bytes + palette_bytes) continue;

        entry.archive_offset = record.data;
        entry.raster_size = base_bytes;
        entry.full_key = texture_replacement_content_key(
            chunk + record.data, static_cast<std::size_t>(base_bytes),
            entry.width, entry.height, entry.depth, 0u);
        out.push_back(std::move(entry));
    }
    return out;
}

void texture_replacement_index_archive(const std::filesystem::path &path) noexcept {
    State &s = state();
    try {
        std::lock_guard<std::mutex> guard(s.mutex);
        ensure_initialized(s);
        if (!s.enabled) return;
        if (upper_copy(path.extension().string()) != ".IMG") return;
        if (!s.indexed_archives.insert(path.generic_string()).second) return;

        std::ifstream input(path, std::ios::binary | std::ios::ate);
        if (!input) return;
        const std::streamoff length = input.tellg();
        if (length <= 0) return;
        input.seekg(0, std::ios::beg);
        std::vector<std::uint8_t> bytes(static_cast<std::size_t>(length));
        input.read(reinterpret_cast<char *>(bytes.data()), length);
        if (!input) return;

        std::uint64_t containers = 0u;
        std::uint64_t textures = 0u;
        for (std::uint64_t offset = 0u; offset + 0x40u <= bytes.size(); offset += kSectorSize) {
            if (read_u32(bytes.data() + offset) != kTexIdent) continue;
            const std::size_t available = bytes.size() - static_cast<std::size_t>(offset);
            auto entries = texture_replacement_parse_tex_chunk(
                bytes.data() + offset, available);
            if (entries.empty()) continue;
            ++containers;
            for (TextureIndexEntry &entry : entries) {
                entry.archive_offset += offset;
                ++textures;
                // A duplicate key usually means two textures are byte-identical
                // -- the game ships the same art under several names. Keep the
                // first; they cannot be told apart by content anyway.
                s.by_full_content.emplace(entry.full_key, std::move(entry));
            }
        }
        s.containers_indexed += containers;
        s.textures_indexed += textures;

        std::ostringstream message;
        message << "texture index archive=\"" << path.filename().string()
                << "\" containers=" << containers << " textures=" << textures;
        runtime_log_line(message.str());
    } catch (...) {
        // Indexing is an optional convenience; a malformed archive must never
        // take the game down with it.
    }
}

bool texture_replacement_lookup(const std::uint8_t *pixels, std::size_t size,
                                std::uint32_t width, std::uint32_t height,
                                std::uint32_t depth, TextureReplacement &out) noexcept {
    State &s = state();
    try {
        std::lock_guard<std::mutex> guard(s.mutex);
        if (!s.initialized || !s.enabled || s.overrides.empty() || pixels == nullptr ||
            size == 0u)
            return false;

        // Whole-raster key. Stage 1 measured every one of this game's textures
        // reaching VRAM byte-identical to its archive copy, so the strong key is
        // usable -- and it has to be, because the leading-bytes key puts several
        // radar tiles in shared buckets and would swap the wrong one.
        const std::uint64_t key =
            texture_replacement_content_key(pixels, size, width, height, depth, 0u);
        const auto found = s.by_full_content.find(key);
        if (found == s.by_full_content.end()) return false;
        const std::string &name = found->second.name;

        const auto override_path = s.overrides.find(name);
        if (override_path == s.overrides.end()) return false;
        if (s.failed_decodes.count(name) != 0u) return false;

        auto decoded = s.decoded.find(name);
        if (decoded == s.decoded.end()) {
            DecodedImage image;
            if (!decode_dds_file(override_path->second, image)) {
                s.failed_decodes.insert(name);
                std::ostringstream message;
                message << "texture replacement FAILED to decode \""
                        << override_path->second.filename().string()
                        << "\" -- supported: DXT1/DXT3/DXT5 and uncompressed 24/32-bit,"
                           " no DX10 header";
                runtime_log_line(message.str());
                return false;
            }
            std::ostringstream message;
            message << "texture replacement active name=\"" << name << "\" original="
                    << found->second.width << 'x' << found->second.height
                    << " replacement=" << image.width << 'x' << image.height;
            runtime_log_line(message.str());
            decoded = s.decoded.emplace(name, std::move(image)).first;
        }

        ++s.substituted_textures;
        out.rgba = decoded->second.rgba.data();
        out.size = decoded->second.rgba.size();
        out.width = decoded->second.width;
        out.height = decoded->second.height;
        return true;
    } catch (...) {
        return false;
    }
}

void texture_replacement_log_summary() noexcept {
    State &s = state();
    try {
        std::lock_guard<std::mutex> guard(s.mutex);
        if (!s.initialized || !s.enabled) return;
        std::size_t matched_overrides = 0u;
        for (const auto &[name, path] : s.overrides) {
            (void)path;
            for (const auto &[key, entry] : s.by_full_content) {
                (void)key;
                if (entry.name == name) {
                    ++matched_overrides;
                    break;
                }
            }
        }
        std::ostringstream message;
        message << "texture replacement summary containers=" << s.containers_indexed
                << " indexed=" << s.textures_indexed
                << " substituted=" << s.substituted_textures
                << " decoded_dds=" << s.decoded.size()
                << " failed_dds=" << s.failed_decodes.size()
                << " dds_files=" << s.overrides.size()
                << " dds_names_found_in_game=" << matched_overrides;
        runtime_log_line(message.str());
    } catch (...) {
    }
}

} // namespace vcs
