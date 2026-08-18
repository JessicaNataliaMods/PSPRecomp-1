#pragma once

#include "psprecomp/guest_memory.hpp"

#include <bit>
#include <cstddef>
#include <cstdint>
#include <cstring>

namespace vcs {

// V8.1 CPU lean path: Tier-2 is entered only when V7 direct-fastmem is active, so
// repeating `fastmem_base != nullptr` at every guest load/store is redundant.
// This profile-local view hoists that decision to the generated Tier-2 hook and
// leaves the generic AOT memory view untouched as the correctness fallback.
class Tier2DirectMemoryView {
public:
    explicit PSPRECOMP_MEMORY_FAST_PATH Tier2DirectMemoryView(
        std::uintptr_t fastmem_base) noexcept
        : base_(reinterpret_cast<std::uint8_t *>(fastmem_base)) {}

    [[nodiscard]] PSPRECOMP_MEMORY_FAST_PATH std::uint8_t aot_load8(std::uint32_t address) const noexcept {
        return *pointer(address);
    }

    [[nodiscard]] PSPRECOMP_MEMORY_FAST_PATH std::uint16_t aot_load16(std::uint32_t address) const noexcept {
        return read_le16(pointer(address));
    }

    [[nodiscard]] PSPRECOMP_MEMORY_FAST_PATH std::uint32_t aot_load32(std::uint32_t address) const noexcept {
        return read_le32(pointer(address));
    }

    PSPRECOMP_MEMORY_FAST_PATH void aot_store8(std::uint32_t address, std::uint8_t value) const noexcept {
        *pointer(address) = value;
    }

    PSPRECOMP_MEMORY_FAST_PATH void aot_store16(std::uint32_t address, std::uint16_t value) const noexcept {
        write_le16(pointer(address), value);
    }

    PSPRECOMP_MEMORY_FAST_PATH void aot_store32(std::uint32_t address, std::uint32_t value) const noexcept {
        write_le32(pointer(address), value);
    }

    template <std::size_t N>
    [[nodiscard]] PSPRECOMP_MEMORY_FAST_PATH bool aot_try_load32_block(
        std::uint32_t address, std::uint32_t (&values)[N]) const noexcept {
        static_assert(N != 0u);
        if constexpr (std::endian::native == std::endian::little) {
            std::memcpy(values, pointer(address), N * sizeof(std::uint32_t));
        } else {
            for (std::size_t i = 0; i < N; ++i)
                values[i] = read_le32(pointer(address + static_cast<std::uint32_t>(i * 4u)));
        }
        return true;
    }

    template <std::size_t N>
    PSPRECOMP_MEMORY_FAST_PATH void aot_load32_block(
        std::uint32_t address, std::uint32_t (&values)[N]) const noexcept {
        (void)aot_try_load32_block(address, values);
    }

    template <std::size_t N>
    [[nodiscard]] PSPRECOMP_MEMORY_FAST_PATH bool aot_try_store32_block(
        std::uint32_t address, const std::uint32_t (&values)[N]) const noexcept {
        static_assert(N != 0u);
        if constexpr (std::endian::native == std::endian::little) {
            std::memcpy(pointer(address), values, N * sizeof(std::uint32_t));
        } else {
            for (std::size_t i = 0; i < N; ++i)
                write_le32(pointer(address + static_cast<std::uint32_t>(i * 4u)), values[i]);
        }
        return true;
    }

    template <std::size_t N>
    PSPRECOMP_MEMORY_FAST_PATH void aot_store32_block(
        std::uint32_t address, const std::uint32_t (&values)[N]) const noexcept {
        (void)aot_try_store32_block(address, values);
    }

    // Preserve the exact alias-sensitive cursor-builder semantics. The common
    // disjoint main-RAM case still uses one cursor read; overlapping aliases
    // use the scalar order so a cursor overwrite remains observable.
    PSPRECOMP_MEMORY_FAST_PATH std::uint32_t aot_append32(
        std::uint32_t cursor_address, std::uint32_t value,
        std::uint32_t *old_pointer = nullptr) const noexcept {
        const std::uint32_t pointer_value = aot_load32(cursor_address);
        const std::uint32_t cursor_offset = ram_offset(cursor_address);
        const std::uint32_t target_offset = ram_offset(pointer_value);
        const bool direct_ram = cursor_offset <= kRamLimit32 && target_offset <= kRamLimit32;
        const bool disjoint = direct_ram &&
            (target_offset + 3u < cursor_offset || cursor_offset + 3u < target_offset);
        if (disjoint) {
            aot_store32(pointer_value, value);
            const std::uint32_t next = pointer_value + 4u;
            aot_store32(cursor_address, next);
            if (old_pointer != nullptr) *old_pointer = pointer_value;
            return next;
        }
        if (old_pointer != nullptr) *old_pointer = pointer_value;
        aot_store32(pointer_value, value);
        const std::uint32_t reloaded = aot_load32(cursor_address);
        const std::uint32_t next = reloaded + 4u;
        aot_store32(cursor_address, next);
        return next;
    }

    PSPRECOMP_MEMORY_FAST_PATH std::uint32_t aot_advance32(std::uint32_t cursor_address) const noexcept {
        const std::uint32_t next = aot_load32(cursor_address) + 4u;
        aot_store32(cursor_address, next);
        return next;
    }

    [[nodiscard]] PSPRECOMP_MEMORY_FAST_PATH std::uint32_t aot_load_word_left(
        std::uint32_t address, std::uint32_t existing) const noexcept {
        const std::uint32_t shift = (address & 3u) * 8u;
        const std::uint32_t memory_word = aot_load32(address & ~3u);
        return (existing & (0x00FFFFFFu >> shift)) | (memory_word << (24u - shift));
    }

    [[nodiscard]] PSPRECOMP_MEMORY_FAST_PATH std::uint32_t aot_load_word_right(
        std::uint32_t address, std::uint32_t existing) const noexcept {
        const std::uint32_t shift = (address & 3u) * 8u;
        const std::uint32_t memory_word = aot_load32(address & ~3u);
        return (existing & (0xFFFFFF00u << (24u - shift))) | (memory_word >> shift);
    }

    PSPRECOMP_MEMORY_FAST_PATH void aot_store_word_left(
        std::uint32_t address, std::uint32_t value) const noexcept {
        const std::uint32_t shift = (address & 3u) * 8u;
        const std::uint32_t aligned = address & ~3u;
        const std::uint32_t memory_word = aot_load32(aligned);
        aot_store32(aligned, (value >> (24u - shift)) | (memory_word & (0xFFFFFF00u << shift)));
    }

    PSPRECOMP_MEMORY_FAST_PATH void aot_store_word_right(
        std::uint32_t address, std::uint32_t value) const noexcept {
        const std::uint32_t shift = (address & 3u) * 8u;
        const std::uint32_t aligned = address & ~3u;
        const std::uint32_t memory_word = aot_load32(aligned);
        aot_store32(aligned, (value << shift) | (memory_word & (0x00FFFFFFu >> (24u - shift))));
    }

private:
    [[nodiscard]] PSPRECOMP_MEMORY_FAST_PATH std::uint8_t *pointer(std::uint32_t address) const noexcept {
        return base_ + static_cast<std::uintptr_t>(address);
    }

    [[nodiscard]] static constexpr std::uint32_t ram_offset(std::uint32_t address) noexcept {
        return (address & 0x1FFFFFFFu) - psprecomp::GuestMemory::kPhysicalBase;
    }

    [[nodiscard]] PSPRECOMP_MEMORY_FAST_PATH static std::uint16_t read_le16(const std::uint8_t *source) noexcept {
        std::uint16_t value{};
        std::memcpy(&value, source, sizeof(value));
        if constexpr (std::endian::native == std::endian::big)
            value = static_cast<std::uint16_t>((value >> 8u) | (value << 8u));
        return value;
    }

    [[nodiscard]] PSPRECOMP_MEMORY_FAST_PATH static std::uint32_t read_le32(const std::uint8_t *source) noexcept {
        std::uint32_t value{};
        std::memcpy(&value, source, sizeof(value));
        if constexpr (std::endian::native == std::endian::big)
            value = ((value >> 24u) & 0x000000FFu) | ((value >> 8u) & 0x0000FF00u) |
                    ((value << 8u) & 0x00FF0000u) | ((value << 24u) & 0xFF000000u);
        return value;
    }

    PSPRECOMP_MEMORY_FAST_PATH static void write_le16(std::uint8_t *destination, std::uint16_t value) noexcept {
        if constexpr (std::endian::native == std::endian::big)
            value = static_cast<std::uint16_t>((value >> 8u) | (value << 8u));
        std::memcpy(destination, &value, sizeof(value));
    }

    PSPRECOMP_MEMORY_FAST_PATH static void write_le32(std::uint8_t *destination, std::uint32_t value) noexcept {
        if constexpr (std::endian::native == std::endian::big)
            value = ((value >> 24u) & 0x000000FFu) | ((value >> 8u) & 0x0000FF00u) |
                    ((value << 8u) & 0x00FF0000u) | ((value << 24u) & 0xFF000000u);
        std::memcpy(destination, &value, sizeof(value));
    }

    static constexpr std::uint32_t kRamLimit32 = 32u * 1024u * 1024u - 4u;
    std::uint8_t *base_{};
};

static_assert(sizeof(Tier2DirectMemoryView) == sizeof(void *));

} // namespace vcs
