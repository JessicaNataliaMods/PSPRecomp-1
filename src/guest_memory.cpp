#include "psprecomp/guest_memory.hpp"
#include "psprecomp/common.hpp"

#include <algorithm>
#include <atomic>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <limits>
#include <string_view>

#if defined(_WIN32)
#ifndef NOMINMAX
#define NOMINMAX
#endif
#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#endif

namespace psprecomp {

// Declared in runtime.hpp/runtime.cpp.  guest_memory.cpp intentionally avoids
// including runtime.hpp because Runtime owns a GuestMemory instance.
std::int32_t runtime_thread_uid() noexcept;
const char *runtime_thread_name() noexcept;
std::uint32_t runtime_dispatch_pc() noexcept;

namespace {
struct WriteWatch {
    bool enabled{};
    std::uint32_t address{};
    std::uint32_t size{4u};
};

const WriteWatch &write_watch() {
    static const WriteWatch watch = [] {
        WriteWatch result{};
        const char *text = std::getenv("PSPRECOMP_WATCH_WRITE");
        if (text == nullptr || *text == '\0') return result;
        char *end = nullptr;
        const unsigned long address = std::strtoul(text, &end, 0);
        if (end == text || *end != '\0' || address > 0xFFFFFFFFul) return result;
        result.enabled = true;
        result.address = static_cast<std::uint32_t>(address);
        if (const char *size_text = std::getenv("PSPRECOMP_WATCH_WRITE_SIZE")) {
            char *size_end = nullptr;
            const unsigned long size = std::strtoul(size_text, &size_end, 0);
            if (size_end != size_text && *size_end == '\0' && size != 0ul && size <= 0xFFFFFFFFul)
                result.size = static_cast<std::uint32_t>(size);
        }
        return result;
    }();
    return watch;
}

bool overlaps_watch(std::uint32_t address, std::size_t length) {
    const WriteWatch &watch = write_watch();
    if (!watch.enabled || length == 0u) return false;
    const std::uint32_t canonical_address = address & 0x1FFFFFFFu;
    const std::uint32_t canonical_watch = watch.address & 0x1FFFFFFFu;
    const std::uint64_t first_end = static_cast<std::uint64_t>(canonical_address) + length;
    const std::uint64_t watch_end = static_cast<std::uint64_t>(canonical_watch) + watch.size;
    return static_cast<std::uint64_t>(canonical_address) < watch_end &&
           static_cast<std::uint64_t>(canonical_watch) < first_end;
}

bool environment_enabled_default_on(const char *name) noexcept {
    const char *value = std::getenv(name);
    if (value == nullptr || *value == '\0') return true;
    const std::string_view text(value);
    return !(text == "0" || text == "off" || text == "OFF" ||
             text == "false" || text == "FALSE" || text == "no" || text == "NO");
}

void log_write_watch(std::uint32_t address, std::size_t length, const char *operation,
                     std::uint64_t old_value, std::uint64_t new_value) {
    if (!overlaps_watch(address, length)) return;
    std::cerr << "[watch-write] uid=" << runtime_thread_uid()
              << " name=" << runtime_thread_name()
              << " pc=" << hex32(runtime_dispatch_pc())
              << " op=" << operation
              << " address=" << hex32(address)
              << " size=" << length
              << " old=0x" << std::hex << old_value
              << " new=0x" << new_value << std::dec << "\n";
}
}

bool GuestMemory::initialize_direct_fastmem(std::uint32_t size_bytes) noexcept {
    direct_fastmem_base_ = nullptr;
    fastmem_view_count_ = 0u;
    fastmem_views_.fill(nullptr);
    fastmem_ram_mapping_ = nullptr;
    fastmem_vram_mapping_ = nullptr;

    if (!environment_enabled_default_on("PSPRECOMP_AOT_DIRECT_FASTMEM"))
        return false;

#if defined(_WIN32) && INTPTR_MAX > INT32_MAX
    HANDLE ram_mapping = CreateFileMappingW(
        INVALID_HANDLE_VALUE, nullptr, PAGE_READWRITE, 0u,
        static_cast<DWORD>(size_bytes), nullptr);
    if (ram_mapping == nullptr) return false;

    HANDLE vram_mapping = CreateFileMappingW(
        INVALID_HANDLE_VALUE, nullptr, PAGE_READWRITE, 0u,
        static_cast<DWORD>(kVramSize), nullptr);
    if (vram_mapping == nullptr) {
        CloseHandle(ram_mapping);
        return false;
    }

    // Map the exact alias model used by canonical(address): the top three bits
    // are ignored, so every 0x20000000 mirror must resolve to the same physical
    // bytes.  VRAM additionally has four 2 MiB mirrors inside its 8 MiB window.
    // No 4 GiB reservation is needed; only the 40 live sparse views consume VA.
    const auto clear_attempt = [&]() noexcept {
        for (std::size_t i = 0u; i < fastmem_view_count_; ++i) {
            if (fastmem_views_[i] != nullptr) UnmapViewOfFile(fastmem_views_[i]);
            fastmem_views_[i] = nullptr;
        }
        fastmem_view_count_ = 0u;
    };

    const auto map_exact = [&](HANDLE mapping, std::uintptr_t host_address,
                               std::size_t bytes) noexcept -> bool {
        void *const requested = reinterpret_cast<void *>(host_address);
        void *const view = MapViewOfFileEx(mapping, FILE_MAP_ALL_ACCESS, 0u, 0u,
                                           bytes, requested);
        if (view != requested) {
            if (view != nullptr) UnmapViewOfFile(view);
            return false;
        }
        if (fastmem_view_count_ >= fastmem_views_.size()) {
            UnmapViewOfFile(view);
            return false;
        }
        fastmem_views_[fastmem_view_count_++] = view;
        return true;
    };

    // High, 64 KiB-aligned bases keep the sparse PSP 4 GiB window away from
    // ordinary executable/heap allocations. Try several independent 1 TiB
    // slots so ASLR or another mapping cannot make fastmem boot-critical.
    constexpr std::uintptr_t kFirstCandidate = UINT64_C(0x0000040000000000);
    constexpr std::uintptr_t kCandidateStep  = UINT64_C(0x0000010000000000);
    constexpr std::size_t kCandidateCount = 24u;

    bool mapped = false;
    for (std::size_t attempt = 0u; attempt < kCandidateCount && !mapped; ++attempt) {
        clear_attempt();
        const std::uintptr_t base = kFirstCandidate + kCandidateStep * attempt;
        bool ok = true;

        for (std::uint32_t alias = 0u; alias < 8u && ok; ++alias) {
            const std::uint32_t guest = kPhysicalBase + alias * 0x20000000u;
            ok = map_exact(ram_mapping, base + guest, size_bytes);
        }
        for (std::uint32_t alias = 0u; alias < 8u && ok; ++alias) {
            for (std::uint32_t mirror = 0u; mirror < kVramMirrorCount && ok; ++mirror) {
                const std::uint32_t guest = kVramPhysicalBase + mirror * kVramSize +
                                            alias * 0x20000000u;
                ok = map_exact(vram_mapping, base + guest, kVramSize);
            }
        }

        if (ok) {
            // Verify that the OS really gave us coherent aliases before any
            // guest data is loaded. This turns a broken/partial mapping into a
            // clean fallback rather than latent guest-memory corruption.
            auto *const probe_base = reinterpret_cast<std::uint8_t *>(base);
            const std::uint32_t ram_probe_offset = size_bytes - 1u;
            probe_base[kPhysicalBase + ram_probe_offset] = 0x5Au;
            for (std::uint32_t alias = 0u; alias < 8u && ok; ++alias) {
                const std::uint32_t guest = kPhysicalBase + alias * 0x20000000u;
                ok = probe_base[guest + ram_probe_offset] == 0x5Au;
            }
            probe_base[kPhysicalBase + ram_probe_offset] = 0u;

            const std::uint32_t vram_probe_offset = kVramSize - 1u;
            probe_base[kVramPhysicalBase + vram_probe_offset] = 0xA5u;
            for (std::uint32_t alias = 0u; alias < 8u && ok; ++alias) {
                for (std::uint32_t mirror = 0u; mirror < kVramMirrorCount && ok; ++mirror) {
                    const std::uint32_t guest = kVramPhysicalBase + mirror * kVramSize +
                                                alias * 0x20000000u;
                    ok = probe_base[guest + vram_probe_offset] == 0xA5u;
                }
            }
            probe_base[kVramPhysicalBase + vram_probe_offset] = 0u;
        }

        if (ok) {
            direct_fastmem_base_ = reinterpret_cast<std::uint8_t *>(base);
            mapped = true;
        }
    }

    if (!mapped) {
        clear_attempt();
        CloseHandle(vram_mapping);
        CloseHandle(ram_mapping);
        return false;
    }

    fastmem_ram_mapping_ = ram_mapping;
    fastmem_vram_mapping_ = vram_mapping;
    return true;
#else
    (void)size_bytes;
    return false;
#endif
}

void GuestMemory::shutdown_direct_fastmem() noexcept {
#if defined(_WIN32) && INTPTR_MAX > INT32_MAX
    for (std::size_t i = 0u; i < fastmem_view_count_; ++i) {
        if (fastmem_views_[i] != nullptr) UnmapViewOfFile(fastmem_views_[i]);
        fastmem_views_[i] = nullptr;
    }
    fastmem_view_count_ = 0u;
    if (fastmem_vram_mapping_ != nullptr) {
        CloseHandle(static_cast<HANDLE>(fastmem_vram_mapping_));
        fastmem_vram_mapping_ = nullptr;
    }
    if (fastmem_ram_mapping_ != nullptr) {
        CloseHandle(static_cast<HANDLE>(fastmem_ram_mapping_));
        fastmem_ram_mapping_ = nullptr;
    }
#endif
    direct_fastmem_base_ = nullptr;
}

GuestMemory::GuestMemory(std::uint32_t size_bytes)
    : ram_size_(size_bytes),
      write_watch_enabled_(std::getenv("PSPRECOMP_WATCH_WRITE") != nullptr) {
    if (size_bytes != 32u * 1024u * 1024u && size_bytes != 64u * 1024u * 1024u) {
        throw Error("PSP RAM size must be 32 MiB or 64 MiB");
    }

    if (initialize_direct_fastmem(size_bytes)) {
        // These two aliases are backed by the same page-file sections as every
        // other PSP mirror in the fastmem arena.  Keeping the ordinary pointers
        // on those mappings makes HLE/raw_pointer/ELF loading coherent with the
        // generated AOT direct-address path without a shadow copy.
        vram_data_ = direct_fastmem_base_ + kVramPhysicalBase;
        ram_data_ = direct_fastmem_base_ + kPhysicalBase;
    } else {
        fallback_vram_.assign(kVramSize, 0u);
        fallback_ram_.assign(size_bytes, 0u);
        vram_data_ = fallback_vram_.data();
        ram_data_ = fallback_ram_.data();
    }

    ram_limit8_ = size_bytes - 1u;
    ram_limit16_ = size_bytes - 2u;
    ram_limit32_ = size_bytes - 4u;
}

GuestMemory::~GuestMemory() {
    shutdown_direct_fastmem();
}

std::uint32_t GuestMemory::size() const noexcept { return ram_size_; }
std::uint32_t GuestMemory::vram_size() const noexcept { return kVramSize; }

bool GuestMemory::is_vram_window(std::uint32_t canonical_address) const noexcept {
    return canonical_address >= kVramPhysicalBase &&
           canonical_address < kVramPhysicalBase + kVramAddressSpan;
}

std::size_t GuestMemory::vram_offset(std::uint32_t canonical_address) const noexcept {
    return static_cast<std::size_t>((canonical_address - kVramPhysicalBase) & (kVramSize - 1u));
}

bool GuestMemory::contains(std::uint32_t address, std::size_t length) const noexcept {
    const std::uint32_t c = canonical(address);
    const std::uint64_t end = static_cast<std::uint64_t>(c) + static_cast<std::uint64_t>(length);
    if (is_vram_window(c) && end <= static_cast<std::uint64_t>(kVramPhysicalBase) + kVramAddressSpan)
        return true;
    if (c >= kPhysicalBase && end <= static_cast<std::uint64_t>(kPhysicalBase) + ram_size_)
        return true;
    return false;
}

GuestMemory::ResolvedAddress GuestMemory::resolve(std::uint32_t address, std::size_t length) const {
    if (!contains(address, length)) {
        throw Error("Guest memory access outside PSP RAM/EDRAM at " + hex32(address));
    }
    const std::uint32_t c = canonical(address);
    if (is_vram_window(c))
        return {Region::Vram, vram_offset(c)};
    return {Region::Ram, static_cast<std::size_t>(c - kPhysicalBase)};
}

std::span<const std::uint8_t> GuestMemory::region_bytes(Region region) const noexcept {
    return region == Region::Vram
        ? std::span<const std::uint8_t>(vram_data_, kVramSize)
        : std::span<const std::uint8_t>(ram_data_, ram_size_);
}
std::span<std::uint8_t> GuestMemory::region_bytes(Region region) noexcept {
    return region == Region::Vram
        ? std::span<std::uint8_t>(vram_data_, kVramSize)
        : std::span<std::uint8_t>(ram_data_, ram_size_);
}

// The `_slow` bodies below are the original aot_* implementations, reached only
// when the inline main-RAM fast path in the header declines the access: EDRAM,
// an out-of-range address, a region-crossing width, or an armed write watch.
std::uint8_t GuestMemory::aot_load8_slow(std::uint32_t address) const {
    const std::uint32_t c = canonical(address);
    if (is_vram_window(c)) return vram_data_[vram_offset(c)];
    if (c >= kPhysicalBase && c - kPhysicalBase < ram_size_)
        return ram_data_[static_cast<std::size_t>(c - kPhysicalBase)];
    return load8(address);
}

std::uint16_t GuestMemory::aot_load16_slow(std::uint32_t address) const {
    const std::uint32_t c = canonical(address);
    if (is_vram_window(c)) {
        const std::size_t offset = vram_offset(c);
        if (offset + 2u <= static_cast<std::size_t>(kVramSize))
            return static_cast<std::uint16_t>(vram_data_[offset]) |
                   static_cast<std::uint16_t>(static_cast<std::uint16_t>(vram_data_[offset + 1u]) << 8u);
    } else if (c >= kPhysicalBase) {
        const std::size_t offset = static_cast<std::size_t>(c - kPhysicalBase);
        if (offset + 2u <= ram_size_)
            return static_cast<std::uint16_t>(ram_data_[offset]) |
                   static_cast<std::uint16_t>(static_cast<std::uint16_t>(ram_data_[offset + 1u]) << 8u);
    }
    return load16(address);
}

std::uint32_t GuestMemory::aot_load32_slow(std::uint32_t address) const {
    const std::uint32_t c = canonical(address);
    const std::uint8_t *data = nullptr;
    std::size_t data_size = 0u;
    std::size_t offset = 0u;
    if (is_vram_window(c)) {
        data = vram_data_;
        data_size = kVramSize;
        offset = vram_offset(c);
    } else if (c >= kPhysicalBase) {
        data = ram_data_;
        data_size = ram_size_;
        offset = static_cast<std::size_t>(c - kPhysicalBase);
    }
    if (data != nullptr && offset + 4u <= data_size) {
        return static_cast<std::uint32_t>(data[offset]) |
               (static_cast<std::uint32_t>(data[offset + 1u]) << 8u) |
               (static_cast<std::uint32_t>(data[offset + 2u]) << 16u) |
               (static_cast<std::uint32_t>(data[offset + 3u]) << 24u);
    }
    return load32(address);
}

std::uint32_t GuestMemory::aot_load_word_left(std::uint32_t address, std::uint32_t existing) const {
    const std::uint32_t shift = (address & 3u) * 8u;
    const std::uint32_t memory_word = aot_load32(address & ~3u);
    return (existing & (0x00FFFFFFu >> shift)) | (memory_word << (24u - shift));
}
std::uint32_t GuestMemory::aot_load_word_right(std::uint32_t address, std::uint32_t existing) const {
    const std::uint32_t shift = (address & 3u) * 8u;
    const std::uint32_t memory_word = aot_load32(address & ~3u);
    return (existing & (0xFFFFFF00u << (24u - shift))) | (memory_word >> shift);
}

void GuestMemory::aot_store8_slow(std::uint32_t address, std::uint8_t value) {
    if (write_watch_enabled_) { store8(address, value); return; }
    const std::uint32_t c = canonical(address);
    if (is_vram_window(c)) { vram_data_[vram_offset(c)] = value; return; }
    if (c >= kPhysicalBase && c - kPhysicalBase < ram_size_) {
        ram_data_[static_cast<std::size_t>(c - kPhysicalBase)] = value;
        return;
    }
    store8(address, value);
}
void GuestMemory::aot_store16_slow(std::uint32_t address, std::uint16_t value) {
    if (write_watch_enabled_) { store16(address, value); return; }
    const std::uint32_t c = canonical(address);
    std::uint8_t *data = nullptr;
    std::size_t data_size = 0u;
    std::size_t offset = 0u;
    if (is_vram_window(c)) { data = vram_data_; data_size = kVramSize; offset = vram_offset(c); }
    else if (c >= kPhysicalBase) { data = ram_data_; data_size = ram_size_; offset = static_cast<std::size_t>(c - kPhysicalBase); }
    if (data != nullptr && offset + 2u <= data_size) {
        data[offset] = static_cast<std::uint8_t>(value & 0xFFu);
        data[offset + 1u] = static_cast<std::uint8_t>((value >> 8u) & 0xFFu);
        return;
    }
    store16(address, value);
}
void GuestMemory::aot_store32_slow(std::uint32_t address, std::uint32_t value) {
    if (write_watch_enabled_) { store32(address, value); return; }
    const std::uint32_t c = canonical(address);
    std::uint8_t *data = nullptr;
    std::size_t data_size = 0u;
    std::size_t offset = 0u;
    if (is_vram_window(c)) { data = vram_data_; data_size = kVramSize; offset = vram_offset(c); }
    else if (c >= kPhysicalBase) { data = ram_data_; data_size = ram_size_; offset = static_cast<std::size_t>(c - kPhysicalBase); }
    if (data != nullptr && offset + 4u <= data_size) {
        data[offset] = static_cast<std::uint8_t>(value & 0xFFu);
        data[offset + 1u] = static_cast<std::uint8_t>((value >> 8u) & 0xFFu);
        data[offset + 2u] = static_cast<std::uint8_t>((value >> 16u) & 0xFFu);
        data[offset + 3u] = static_cast<std::uint8_t>((value >> 24u) & 0xFFu);
        return;
    }
    store32(address, value);
}
void GuestMemory::aot_store_word_left(std::uint32_t address, std::uint32_t value) {
    const std::uint32_t shift = (address & 3u) * 8u;
    const std::uint32_t aligned = address & ~3u;
    const std::uint32_t memory_word = aot_load32(aligned);
    aot_store32(aligned, (value >> (24u - shift)) | (memory_word & (0xFFFFFF00u << shift)));
}
void GuestMemory::aot_store_word_right(std::uint32_t address, std::uint32_t value) {
    const std::uint32_t shift = (address & 3u) * 8u;
    const std::uint32_t aligned = address & ~3u;
    const std::uint32_t memory_word = aot_load32(aligned);
    aot_store32(aligned, (value << shift) | (memory_word & (0x00FFFFFFu >> (24u - shift))));
}

void GuestMemory::aot_copy_lz_match(std::uint32_t destination, std::uint32_t source,
                                    std::uint32_t length) {
    if (length == 0u) return;

    const std::uint32_t canonical_destination = canonical(destination);
    const std::uint32_t canonical_source = canonical(source);
    if (canonical_source >= canonical_destination)
        throw Error("Invalid forward LZ match from " + hex32(source) + " to " + hex32(destination));

    // Write watches and mirrored EDRAM boundaries need the ordinary accessors
    // so every byte retains the same observability and wrapping behavior.
    const auto bytewise_copy = [&] {
        for (std::uint32_t index = 0u; index < length; ++index)
            aot_store8(destination + index, aot_load8(source + index));
    };
    if (write_watch_enabled_) {
        bytewise_copy();
        return;
    }

    const ResolvedAddress destination_resolved = resolve(destination, length);
    const ResolvedAddress source_resolved = resolve(source, length);
    if (destination_resolved.region != source_resolved.region) {
        bytewise_copy();
        return;
    }

    auto data = region_bytes(destination_resolved.region);
    if (destination_resolved.offset + length > data.size() ||
        source_resolved.offset + length > data.size() ||
        source_resolved.offset >= destination_resolved.offset) {
        bytewise_copy();
        return;
    }

    const std::size_t destination_offset = destination_resolved.offset;
    const std::size_t source_offset = source_resolved.offset;
    const std::size_t total = static_cast<std::size_t>(length);
    const std::size_t distance = destination_offset - source_offset;

    // Seed one full match-distance (or the entire short copy), then duplicate
    // the already produced prefix in geometrically growing non-overlapping
    // chunks. This is equivalent to the guest's forward byte loop, including
    // distance=1 runs, but completes in O(log(length)) host copies.
    std::size_t copied = (std::min)(distance, total);
    std::memcpy(data.data() + destination_offset, data.data() + source_offset, copied);
    while (copied < total) {
        const std::size_t chunk = (std::min)(copied, total - copied);
        std::memcpy(data.data() + destination_offset + copied, data.data() + destination_offset, chunk);
        copied += chunk;
    }
}

std::uint8_t *GuestMemory::raw_pointer(std::uint32_t address, std::size_t length) noexcept {
    return const_cast<std::uint8_t *>(
        static_cast<const GuestMemory *>(this)->raw_pointer(address, length));
}

const std::uint8_t *GuestMemory::raw_pointer(std::uint32_t address, std::size_t length) const noexcept {
    const std::uint32_t c = canonical(address);
    if (is_vram_window(c)) {
        const std::size_t offset = vram_offset(c);
        // A run that would wrap past the end of the 2 MiB EDRAM image is not
        // contiguous in host memory even though it is legal in guest space.
        if (offset + length <= static_cast<std::size_t>(kVramSize)) return vram_data_ + offset;
        return nullptr;
    }
    if (c < kPhysicalBase) return nullptr;
    const std::size_t offset = static_cast<std::size_t>(c - kPhysicalBase);
    if (offset + length <= ram_size_) return ram_data_ + offset;
    return nullptr;
}

std::uint8_t GuestMemory::load8(std::uint32_t address) const {
    const auto r = resolve(address, 1u);
    return region_bytes(r.region)[r.offset];
}
std::uint16_t GuestMemory::load16(std::uint32_t address) const {
    return static_cast<std::uint16_t>(load8(address)) |
           static_cast<std::uint16_t>(static_cast<std::uint16_t>(load8(address + 1u)) << 8u);
}
std::uint32_t GuestMemory::load32(std::uint32_t address) const {
    return static_cast<std::uint32_t>(load8(address)) |
           (static_cast<std::uint32_t>(load8(address + 1u)) << 8u) |
           (static_cast<std::uint32_t>(load8(address + 2u)) << 16u) |
           (static_cast<std::uint32_t>(load8(address + 3u)) << 24u);
}
std::uint32_t GuestMemory::load_word_left(std::uint32_t address, std::uint32_t existing) const {
    const std::uint32_t shift = (address & 3u) * 8u;
    const std::uint32_t memory_word = load32(address & ~3u);
    return (existing & (0x00FFFFFFu >> shift)) | (memory_word << (24u - shift));
}
std::uint32_t GuestMemory::load_word_right(std::uint32_t address, std::uint32_t existing) const {
    const std::uint32_t shift = (address & 3u) * 8u;
    const std::uint32_t memory_word = load32(address & ~3u);
    return (existing & (0xFFFFFF00u << (24u - shift))) | (memory_word >> shift);
}
void GuestMemory::store8(std::uint32_t address, std::uint8_t value) {
    const auto r = resolve(address, 1u);
    auto data = region_bytes(r.region);
    const std::uint8_t old = data[r.offset];
    log_write_watch(address, 1u, "store8", old, value);
    data[r.offset] = value;
}
void GuestMemory::store16(std::uint32_t address, std::uint16_t value) {
    const std::uint16_t old = load16(address);
    log_write_watch(address, 2u, "store16", old, value);
    const auto write_byte = [this](std::uint32_t byte_address, std::uint8_t byte) {
        const auto r = resolve(byte_address, 1u);
        region_bytes(r.region)[r.offset] = byte;
    };
    write_byte(address, static_cast<std::uint8_t>(value & 0xFFu));
    write_byte(address + 1u, static_cast<std::uint8_t>((value >> 8u) & 0xFFu));
}
void GuestMemory::store32(std::uint32_t address, std::uint32_t value) {
    const std::uint32_t old = load32(address);
    log_write_watch(address, 4u, "store32", old, value);
    const auto write_byte = [this](std::uint32_t byte_address, std::uint8_t byte) {
        const auto r = resolve(byte_address, 1u);
        region_bytes(r.region)[r.offset] = byte;
    };
    write_byte(address, static_cast<std::uint8_t>(value & 0xFFu));
    write_byte(address + 1u, static_cast<std::uint8_t>((value >> 8u) & 0xFFu));
    write_byte(address + 2u, static_cast<std::uint8_t>((value >> 16u) & 0xFFu));
    write_byte(address + 3u, static_cast<std::uint8_t>((value >> 24u) & 0xFFu));
}
void GuestMemory::store_word_left(std::uint32_t address, std::uint32_t value) {
    const std::uint32_t shift = (address & 3u) * 8u;
    const std::uint32_t aligned = address & ~3u;
    const std::uint32_t memory_word = load32(aligned);
    store32(aligned, (value >> (24u - shift)) | (memory_word & (0xFFFFFF00u << shift)));
}
void GuestMemory::store_word_right(std::uint32_t address, std::uint32_t value) {
    const std::uint32_t shift = (address & 3u) * 8u;
    const std::uint32_t aligned = address & ~3u;
    const std::uint32_t memory_word = load32(aligned);
    store32(aligned, (value << shift) | (memory_word & (0x00FFFFFFu >> (24u - shift))));
}
void GuestMemory::memory_barrier() const noexcept {
    std::atomic_thread_fence(std::memory_order_seq_cst);
}
void GuestMemory::copy_in(std::uint32_t address, std::span<const std::uint8_t> source) {
    if (!contains(address, source.size()))
        throw Error("Guest memory access outside PSP RAM/EDRAM at " + hex32(address));
    log_write_watch(address, source.size(), "copy_in", 0u, 0u);
    std::size_t copied = 0u;
    while (copied < source.size()) {
        const std::uint32_t current = address + static_cast<std::uint32_t>(copied);
        const auto r = resolve(current, 1u);
        auto data = region_bytes(r.region);
        const std::size_t chunk = (std::min)(source.size() - copied, data.size() - r.offset);
        std::copy_n(source.begin() + static_cast<std::ptrdiff_t>(copied), chunk,
                    data.begin() + static_cast<std::ptrdiff_t>(r.offset));
        copied += chunk;
    }
}
void GuestMemory::copy_out(std::uint32_t address, std::span<std::uint8_t> destination) const {
    if (!contains(address, destination.size()))
        throw Error("Guest memory access outside PSP RAM/EDRAM at " + hex32(address));
    std::size_t copied = 0u;
    while (copied < destination.size()) {
        const std::uint32_t current = address + static_cast<std::uint32_t>(copied);
        const auto r = resolve(current, 1u);
        const auto data = region_bytes(r.region);
        const std::size_t chunk = (std::min)(destination.size() - copied, data.size() - r.offset);
        std::copy_n(data.begin() + static_cast<std::ptrdiff_t>(r.offset), chunk,
                    destination.begin() + static_cast<std::ptrdiff_t>(copied));
        copied += chunk;
    }
}
void GuestMemory::zero(std::uint32_t address, std::size_t length) {
    if (!contains(address, length))
        throw Error("Guest memory access outside PSP RAM/EDRAM at " + hex32(address));
    log_write_watch(address, length, "zero", 0u, 0u);
    std::size_t cleared = 0u;
    while (cleared < length) {
        const std::uint32_t current = address + static_cast<std::uint32_t>(cleared);
        const auto r = resolve(current, 1u);
        auto data = region_bytes(r.region);
        const std::size_t chunk = (std::min)(length - cleared, data.size() - r.offset);
        std::fill_n(data.begin() + static_cast<std::ptrdiff_t>(r.offset), chunk, 0u);
        cleared += chunk;
    }
}
std::string GuestMemory::read_c_string(std::uint32_t address, std::size_t max_length) const {
    std::string out;
    out.reserve(std::min<std::size_t>(max_length, 64u));
    for (std::size_t i = 0; i < max_length; ++i) {
        const char ch = static_cast<char>(load8(address + static_cast<std::uint32_t>(i)));
        if (ch == '\0') return out;
        out.push_back(ch);
    }
    throw Error("Unterminated guest string at " + hex32(address));
}
std::span<const std::uint8_t> GuestMemory::bytes() const noexcept {
    return {ram_data_, ram_size_};
}
std::span<const std::uint8_t> GuestMemory::vram_bytes() const noexcept {
    return {vram_data_, kVramSize};
}

} // namespace psprecomp
