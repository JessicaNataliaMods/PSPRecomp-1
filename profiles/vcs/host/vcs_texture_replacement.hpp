#pragma once

#include <cstddef>
#include <cstdint>
#include <filesystem>
#include <string>
#include <vector>

namespace vcs {

// DDS texture replacement, matched by the *internal* texture name the game's
// own TEX containers carry.
//
// Why not the VRAM address: the address a texture happens to occupy is a
// transient property of one boot, and any mod that rebuilds the game's archives
// moves it. The name inside the TEX container is the stable, human-meaningful
// anchor, and it is re-read from whatever archives are actually installed, so an
// asset mod shifts the index with it instead of invalidating it.
//
// Nothing is precomputed or shipped. Both halves of the mapping -- the names and
// the content hashes that bridge them to what the GE samples -- are derived at
// runtime from the installed files.

struct TextureIndexEntry {
    std::string name;      // internal TEX name, upper-cased for matching
    std::uint32_t width{};
    std::uint32_t height{};
    std::uint32_t depth{}; // 4 or 8 bits per pixel, palettized
    std::uint32_t mipmaps{};
    std::uint64_t archive_offset{};
    std::uint64_t raster_size{};
    // Two keys on purpose. The leading-bytes key tolerates the guest padding a
    // texture's pitch on upload; the whole-raster key cannot, but discriminates
    // far better. Measured on this game's main archive, the leading-bytes key
    // puts three genuinely different textures into shared buckets -- all of them
    // radar tiles, which share a uniform first kilobyte. Stage 1 carries both and
    // reports which one the GE actually matches, so stage 2 can commit to the
    // strongest key the guest's upload behaviour allows.
    std::uint64_t content_key{};
    std::uint64_t full_key{};
};

// Indexes one of the game's .IMG archives, if it has not been seen yet. Called
// as the host registers archives the guest actually opens, which keeps user
// backup copies sitting next to the real files out of the index.
void texture_replacement_index_archive(const std::filesystem::path &path) noexcept;

// Offers the raster bytes the GE is about to sample. Stage 1 only identifies and
// records; no substitution happens yet. Dimensions and bit depth participate in
// the key, so two textures now have to agree on shape *and* content to collide.
void texture_replacement_observe_texture(const std::uint8_t *pixels,
                                         std::size_t size,
                                         std::uint32_t width,
                                         std::uint32_t height,
                                         std::uint32_t depth) noexcept;

// A decoded replacement, owned by the module and stable for the process's life.
struct TextureReplacement {
    const std::byte *rgba{};
    std::size_t size{};
    std::uint32_t width{};
    std::uint32_t height{};
};

// Looks up a replacement for the texture the GE is about to upload, decoding the
// .dds on first use. Returns false when there is no override for it, which is
// the overwhelmingly common case and costs one hash.
[[nodiscard]] bool texture_replacement_lookup(const std::uint8_t *pixels,
                                              std::size_t size,
                                              std::uint32_t width,
                                              std::uint32_t height,
                                              std::uint32_t depth,
                                              TextureReplacement &out) noexcept;

// Writes the index/override/match tally to the runtime log. Called at shutdown.
void texture_replacement_log_summary() noexcept;

// Exposed for tests.
[[nodiscard]] std::vector<TextureIndexEntry> texture_replacement_parse_tex_chunk(
    const std::uint8_t *chunk, std::size_t size) noexcept;
// hash_bytes caps how much raster takes part; 0 means the whole thing.
[[nodiscard]] std::uint64_t texture_replacement_content_key(
    const std::uint8_t *bytes, std::size_t size, std::uint32_t width,
    std::uint32_t height, std::uint32_t depth, std::size_t hash_bytes) noexcept;

} // namespace vcs
