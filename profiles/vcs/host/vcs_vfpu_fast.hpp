#pragma once

#include "psprecomp/allegrex_context.hpp"

#include <bit>
#include <cmath>
#include <cstdint>

namespace vcs {


// V5 measured-hot VFPU lowering.  The PSP resets S/T/D prefixes after each
// consuming instruction; VCS overwhelmingly executes with those architectural
// defaults already installed (S=T=0xE4, D=0).  The generic helpers must still
// decode every lane because arbitrary games can program prefixes.  Tier-2 can
// cheaply branch around that work in the profile-guided hot regions while
// retaining the exact generic helper as the uncommon fallback.

template <std::uint32_t VectorRegister, std::uint32_t Length>
PSPRECOMP_CONTEXT_FORCEINLINE void tier2_vfpu_write_dest_fast(
    psprecomp::AllegrexContext &ctx, const float *source) noexcept {
    static_assert(Length >= 1u && Length <= 4u);
    if (ctx.vfpu_ctrl[2] == 0u) {
        ctx.template write_vfpu_vector_ct<VectorRegister, Length>(source);
        // D was default, but S/T may have been consumed by the instruction.
        ctx.eat_vfpu_prefixes();
        return;
    }
    ctx.template write_vfpu_vector_with_destination_prefix_ct<VectorRegister, Length>(source);
}

template <std::uint32_t DestinationRegister, std::uint32_t SourceRegister,
          std::uint32_t TargetScalarRegister, std::uint32_t Length>
PSPRECOMP_CONTEXT_FORCEINLINE void tier2_vfpu_vscl_fast(
    psprecomp::AllegrexContext &ctx) noexcept {
    static_assert(Length >= 1u && Length <= 4u);
    if (ctx.vfpu_ctrl[0] == 0xE4u && ctx.vfpu_ctrl[1] == 0xE4u &&
        ctx.vfpu_ctrl[2] == 0u) {
        float source[4]{};
        ctx.template read_vfpu_vector_ct<SourceRegister, Length>(source);
        const float scalar = std::bit_cast<float>(
            ctx.template vfpu_scalar_bits_ct<(TargetScalarRegister & 0x7Fu)>());
        float result[4]{};
        result[0] = source[0] * scalar;
        if constexpr (Length >= 2u) result[1] = source[1] * scalar;
        if constexpr (Length >= 3u) result[2] = source[2] * scalar;
        if constexpr (Length >= 4u) result[3] = source[3] * scalar;
        ctx.template write_vfpu_vector_ct<DestinationRegister, Length>(result);
        return;
    }
    ctx.template execute_vfpu_vscl_ct<DestinationRegister, SourceRegister,
                                      TargetScalarRegister, Length>();
}

template <std::uint32_t DestinationScalarRegister, std::uint32_t SourceRegister,
          std::uint32_t TargetRegister, std::uint32_t Length>
PSPRECOMP_CONTEXT_FORCEINLINE void tier2_vfpu_vdot_fast(
    psprecomp::AllegrexContext &ctx) noexcept {
    static_assert(Length >= 1u && Length <= 4u);
    if (ctx.vfpu_ctrl[0] == 0xE4u && ctx.vfpu_ctrl[1] == 0xE4u &&
        ctx.vfpu_ctrl[2] == 0u) {
        float source[4]{};
        float target[4]{};
        ctx.template read_vfpu_vector_ct<SourceRegister, Length>(source);
        ctx.template read_vfpu_vector_ct<TargetRegister, Length>(target);
        // Preserve the original expression/order; lanes outside Length remain
        // exact +0 under default prefixes.
        const float result[1]{
            source[0] * target[0] + source[1] * target[1] +
            source[2] * target[2] + source[3] * target[3]
        };
        ctx.template write_vfpu_vector_ct<DestinationScalarRegister, 1u>(result);
        return;
    }
    ctx.template execute_vfpu_vdot_ct<DestinationScalarRegister, SourceRegister,
                                      TargetRegister, Length>();
}

template <std::uint32_t SourceRegister, std::uint32_t TargetRegister,
          std::uint32_t Length, std::uint32_t Condition>
PSPRECOMP_CONTEXT_FORCEINLINE void tier2_vfpu_vcmp_fast(
    psprecomp::AllegrexContext &ctx) noexcept {
    static_assert(Length >= 1u && Length <= 4u);
    static_assert(Condition < 16u);
    if (!(ctx.vfpu_ctrl[0] == 0xE4u && ctx.vfpu_ctrl[1] == 0xE4u &&
          ctx.vfpu_ctrl[2] == 0u)) {
        ctx.template execute_vfpu_vcmp_ct<SourceRegister, TargetRegister, Length, Condition>();
        return;
    }

    float source[4]{};
    float target[4]{};
    ctx.template read_vfpu_vector_ct<SourceRegister, Length>(source);
    ctx.template read_vfpu_vector_ct<TargetRegister, Length>(target);
    auto compare_lane = [](float sv, float tv) -> bool {
        if constexpr (Condition == 0u) return false;
        else if constexpr (Condition == 1u) return sv == tv;
        else if constexpr (Condition == 2u) return sv < tv;
        else if constexpr (Condition == 3u) return sv <= tv;
        else if constexpr (Condition == 4u) return true;
        else if constexpr (Condition == 5u) return sv != tv;
        else if constexpr (Condition == 6u) return sv >= tv;
        else if constexpr (Condition == 7u) return sv > tv;
        else if constexpr (Condition == 8u) return sv == 0.0f;
        else if constexpr (Condition == 9u) return std::isnan(sv);
        else if constexpr (Condition == 10u) return std::isinf(sv);
        else if constexpr (Condition == 11u) return std::isnan(sv) || std::isinf(sv);
        else if constexpr (Condition == 12u) return sv != 0.0f;
        else if constexpr (Condition == 13u) return !std::isnan(sv);
        else if constexpr (Condition == 14u) return !std::isinf(sv);
        else return !(std::isnan(sv) || std::isinf(sv));
    };

    const bool r0 = compare_lane(source[0], target[0]);
    const bool r1 = Length >= 2u ? compare_lane(source[1], target[1]) : false;
    const bool r2 = Length >= 3u ? compare_lane(source[2], target[2]) : false;
    const bool r3 = Length >= 4u ? compare_lane(source[3], target[3]) : false;
    std::uint32_t lane_bits = static_cast<std::uint32_t>(r0);
    if constexpr (Length >= 2u) lane_bits |= static_cast<std::uint32_t>(r1) << 1u;
    if constexpr (Length >= 3u) lane_bits |= static_cast<std::uint32_t>(r2) << 2u;
    if constexpr (Length >= 4u) lane_bits |= static_cast<std::uint32_t>(r3) << 3u;
    bool any = r0;
    bool all = r0;
    if constexpr (Length >= 2u) { any = any || r1; all = all && r1; }
    if constexpr (Length >= 3u) { any = any || r2; all = all && r2; }
    if constexpr (Length >= 4u) { any = any || r3; all = all && r3; }
    constexpr std::uint32_t affected = ((1u << Length) - 1u) | (1u << 4u) | (1u << 5u);
    const std::uint32_t update = lane_bits | (static_cast<std::uint32_t>(any) << 4u) |
                                 (static_cast<std::uint32_t>(all) << 5u);
    ctx.vfpu_ctrl[3] = (ctx.vfpu_ctrl[3] & ~affected) | (update & affected);
    // S/T/D were already defaults, so consuming them requires no stores.
}

template <std::uint32_t DestinationRegister, std::uint32_t SourceRegister,
          std::uint32_t Length, std::uint32_t ConditionIndex, bool MoveIfFalse>
PSPRECOMP_CONTEXT_FORCEINLINE void tier2_vfpu_vcmov_fast(
    psprecomp::AllegrexContext &ctx) noexcept {
    static_assert(Length >= 1u && Length <= 4u);
    static_assert(ConditionIndex < 8u);
    if (!(ctx.vfpu_ctrl[0] == 0xE4u && ctx.vfpu_ctrl[1] == 0xE4u &&
          ctx.vfpu_ctrl[2] == 0u)) {
        ctx.template execute_vfpu_vcmov_ct<DestinationRegister, SourceRegister, Length,
                                           ConditionIndex, MoveIfFalse>();
        return;
    }

    float source[4]{};
    float destination[4]{};
    ctx.template read_vfpu_vector_ct<SourceRegister, Length>(source);
    ctx.template read_vfpu_vector_ct<DestinationRegister, Length>(destination);
    const std::uint32_t condition_code = ctx.vfpu_ctrl[3];
    if constexpr (ConditionIndex < 6u) {
        const bool cc = ((condition_code >> ConditionIndex) & 1u) != 0u;
        if (cc == !MoveIfFalse) {
            destination[0] = source[0];
            if constexpr (Length >= 2u) destination[1] = source[1];
            if constexpr (Length >= 3u) destination[2] = source[2];
            if constexpr (Length >= 4u) destination[3] = source[3];
        }
    } else if constexpr (ConditionIndex == 6u) {
        constexpr bool want = !MoveIfFalse;
        if ((((condition_code >> 0u) & 1u) != 0u) == want) destination[0] = source[0];
        if constexpr (Length >= 2u)
            if ((((condition_code >> 1u) & 1u) != 0u) == want) destination[1] = source[1];
        if constexpr (Length >= 3u)
            if ((((condition_code >> 2u) & 1u) != 0u) == want) destination[2] = source[2];
        if constexpr (Length >= 4u)
            if ((((condition_code >> 3u) & 1u) != 0u) == want) destination[3] = source[3];
    }
    ctx.template write_vfpu_vector_ct<DestinationRegister, Length>(destination);
}

} // namespace vcs
