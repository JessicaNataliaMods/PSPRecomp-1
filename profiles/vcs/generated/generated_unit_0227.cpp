#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
// PSPRECOMP_V811_COMPACT_DISPATCH: 64-slot occupancy masks + per-group base id.
static constexpr std::uint64_t kEntryMasks_recomp_unit_0227[64] = {
    0x0000000000000021ull, 0x0000000000000000ull, 0x0000000000000000ull, 0x0000000000000000ull,
    0x0000000000100000ull, 0x0000080000000000ull, 0x0000000000000000ull, 0x0000000000000000ull,
    0x0000000000000000ull, 0x0000000000000000ull, 0x0000000000000441ull, 0x0000400000000000ull,
    0x0000000000000000ull, 0x0000040000000000ull, 0x0000000000000400ull, 0x0000000000000000ull,
    0x0000000000001000ull, 0x0000000000020000ull, 0x0000000000000000ull, 0x0000000000000000ull,
    0x0000000000000000ull, 0x0000000000000000ull, 0x0000000000000000ull, 0x0000000801000800ull,
    0x0401004010040000ull, 0x0040100401004010ull, 0x1004010040100401ull, 0x0000000000010040ull,
    0x0000000100401004ull, 0x0000010004002040ull, 0x0040100000000000ull, 0x0000000000004401ull,
    0x4000000000000000ull, 0x4010040100400000ull, 0x0000000000040100ull, 0x0000000000000000ull,
    0x0020100000800000ull, 0x0802008020080000ull, 0x0080200400801022ull, 0x2042820000000000ull,
    0x0402010080400910ull, 0x0800000000000000ull, 0x0000000000000000ull, 0x0000800000000000ull,
    0x0002000000000000ull, 0x0000000020108001ull, 0x0000000000000000ull, 0x0000000000000001ull,
    0x0004000000000000ull, 0x0000000000000000ull, 0x0000000000000000ull, 0x0000000000000000ull,
    0x0000000000008004ull, 0x0000000000000001ull, 0x0000000000002000ull, 0x0000000000000000ull,
    0x0010000000000000ull, 0x0000000000000000ull, 0x0000000000000000ull, 0x0000000000000000ull,
    0x0000000000000000ull, 0x0000000000000000ull, 0x0000000002000000ull, 0x0000000000000840ull,
};
static constexpr std::uint16_t kEntryBases_recomp_unit_0227[64] = {
    1u, 3u, 3u, 3u, 3u, 4u, 5u, 5u, 5u, 5u, 5u, 8u, 9u, 9u, 10u, 11u,
    11u, 12u, 13u, 13u, 13u, 13u, 13u, 13u, 16u, 21u, 27u, 34u, 36u, 40u, 44u, 46u,
    49u, 50u, 55u, 57u, 57u, 60u, 65u, 72u, 77u, 85u, 86u, 86u, 87u, 88u, 92u, 92u,
    93u, 94u, 94u, 94u, 94u, 96u, 97u, 98u, 98u, 99u, 99u, 99u, 99u, 99u, 99u, 100u,
};
void recomp_unit_0227_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_redispatch_rounds = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08B90000u;
        entry_id = 0u;
        if (entry_delta < 16176u && (entry_delta & 3u) == 0u) {
            const std::uint32_t entry_slot = entry_delta >> 2u;
            const std::uint32_t entry_group = entry_slot >> 6u;
            const std::uint64_t entry_mask = kEntryMasks_recomp_unit_0227[entry_group];
            const std::uint64_t entry_bit = 1ull << (entry_slot & 63u);
            if ((entry_mask & entry_bit) != 0u) {
                entry_id = static_cast<std::uint16_t>(
                    kEntryBases_recomp_unit_0227[entry_group] +
                    std::popcount(entry_mask & (entry_bit - 1ull)));
            }
        }
    }
    switch (entry_id) {
    case 1u: goto L_08B90000;
    case 2u: goto L_08B90014;
    case 3u: goto L_08B90450;
    case 4u: goto L_08B905AC;
    case 5u: goto L_08B90A00;
    case 6u: goto L_08B90A18;
    case 7u: goto L_08B90A28;
    case 8u: goto L_08B90BB8;
    case 9u: goto L_08B90DA8;
    case 10u: goto L_08B90E28;
    case 11u: goto L_08B91030;
    case 12u: goto L_08B91144;
    case 13u: goto L_08B9172C;
    case 14u: goto L_08B91760;
    case 15u: goto L_08B9178C;
    case 16u: goto L_08B91848;
    case 17u: goto L_08B91870;
    case 18u: goto L_08B91898;
    case 19u: goto L_08B918C0;
    case 20u: goto L_08B918E8;
    case 21u: goto L_08B91910;
    case 22u: goto L_08B91938;
    case 23u: goto L_08B91960;
    case 24u: goto L_08B91988;
    case 25u: goto L_08B919B0;
    case 26u: goto L_08B919D8;
    case 27u: goto L_08B91A00;
    case 28u: goto L_08B91A28;
    case 29u: goto L_08B91A50;
    case 30u: goto L_08B91A78;
    case 31u: goto L_08B91AA0;
    case 32u: goto L_08B91AC8;
    case 33u: goto L_08B91AF0;
    case 34u: goto L_08B91B18;
    case 35u: goto L_08B91B40;
    case 36u: goto L_08B91C08;
    case 37u: goto L_08B91C30;
    case 38u: goto L_08B91C58;
    case 39u: goto L_08B91C80;
    case 40u: goto L_08B91D18;
    case 41u: goto L_08B91D34;
    case 42u: goto L_08B91D68;
    case 43u: goto L_08B91DA0;
    case 44u: goto L_08B91EB0;
    case 45u: goto L_08B91ED8;
    case 46u: goto L_08B91F00;
    case 47u: goto L_08B91F28;
    case 48u: goto L_08B91F38;
    case 49u: goto L_08B920F8;
    case 50u: goto L_08B92158;
    case 51u: goto L_08B92180;
    case 52u: goto L_08B921A8;
    case 53u: goto L_08B921D0;
    case 54u: goto L_08B921F8;
    case 55u: goto L_08B92220;
    case 56u: goto L_08B92248;
    case 57u: goto L_08B9245C;
    case 58u: goto L_08B924B0;
    case 59u: goto L_08B924D4;
    case 60u: goto L_08B9254C;
    case 61u: goto L_08B92574;
    case 62u: goto L_08B9259C;
    case 63u: goto L_08B925C4;
    case 64u: goto L_08B925EC;
    case 65u: goto L_08B92604;
    case 66u: goto L_08B92614;
    case 67u: goto L_08B92630;
    case 68u: goto L_08B9265C;
    case 69u: goto L_08B92688;
    case 70u: goto L_08B926B4;
    case 71u: goto L_08B926DC;
    case 72u: goto L_08B927A4;
    case 73u: goto L_08B927BC;
    case 74u: goto L_08B927C4;
    case 75u: goto L_08B927D8;
    case 76u: goto L_08B927F4;
    case 77u: goto L_08B92810;
    case 78u: goto L_08B92820;
    case 79u: goto L_08B9282C;
    case 80u: goto L_08B92858;
    case 81u: goto L_08B9287C;
    case 82u: goto L_08B928A0;
    case 83u: goto L_08B928C4;
    case 84u: goto L_08B928E8;
    case 85u: goto L_08B929EC;
    case 86u: goto L_08B92BBC;
    case 87u: goto L_08B92CC4;
    case 88u: goto L_08B92D00;
    case 89u: goto L_08B92D3C;
    case 90u: goto L_08B92D50;
    case 91u: goto L_08B92D74;
    case 92u: goto L_08B92F00;
    case 93u: goto L_08B930C8;
    case 94u: goto L_08B93408;
    case 95u: goto L_08B9343C;
    case 96u: goto L_08B93500;
    case 97u: goto L_08B93634;
    case 98u: goto L_08B938D0;
    case 99u: goto L_08B93E64;
    case 100u: goto L_08B93F18;
    case 101u: goto L_08B93F2C;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08B90000:
    goto L_08B90014;
L_08B90014:
    goto L_08B90450;
L_08B90450:
    goto L_08B905AC;
L_08B905AC:
    goto L_08B90A00;
L_08B90A00:
    goto L_08B90A18;
L_08B90A18:
    goto L_08B90A28;
L_08B90A28:
    goto L_08B90BB8;
L_08B90BB8:
    goto L_08B90DA8;
L_08B90DA8:
    goto L_08B90E28;
L_08B90E28:
    goto L_08B91030;
L_08B91030:
    goto L_08B91144;
L_08B91144:
    goto L_08B9172C;
L_08B9172C:
    goto L_08B91760;
L_08B91760:
    goto L_08B9178C;
L_08B9178C:
    goto L_08B91848;
L_08B91848:
    goto L_08B91870;
L_08B91870:
    goto L_08B91898;
L_08B91898:
    goto L_08B918C0;
L_08B918C0:
    goto L_08B918E8;
L_08B918E8:
    goto L_08B91910;
L_08B91910:
    goto L_08B91938;
L_08B91938:
    goto L_08B91960;
L_08B91960:
    goto L_08B91988;
L_08B91988:
    goto L_08B919B0;
L_08B919B0:
    goto L_08B919D8;
L_08B919D8:
    goto L_08B91A00;
L_08B91A00:
    goto L_08B91A28;
L_08B91A28:
    goto L_08B91A50;
L_08B91A50:
    goto L_08B91A78;
L_08B91A78:
    goto L_08B91AA0;
L_08B91AA0:
    goto L_08B91AC8;
L_08B91AC8:
    goto L_08B91AF0;
L_08B91AF0:
    goto L_08B91B18;
L_08B91B18:
    goto L_08B91B40;
L_08B91B40:
    goto L_08B91C08;
L_08B91C08:
    goto L_08B91C30;
L_08B91C30:
    goto L_08B91C58;
L_08B91C58:
    goto L_08B91C80;
L_08B91C80:
    goto L_08B91D18;
L_08B91D18:
    goto L_08B91D34;
L_08B91D34:
    goto L_08B91D68;
L_08B91D68:
    goto L_08B91DA0;
L_08B91DA0:
    goto L_08B91EB0;
L_08B91EB0:
    goto L_08B91ED8;
L_08B91ED8:
    goto L_08B91F00;
L_08B91F00:
    goto L_08B91F28;
L_08B91F28:
    goto L_08B91F38;
L_08B91F38:
    goto L_08B920F8;
L_08B920F8:
    goto L_08B92158;
L_08B92158:
    goto L_08B92180;
L_08B92180:
    goto L_08B921A8;
L_08B921A8:
    goto L_08B921D0;
L_08B921D0:
    goto L_08B921F8;
L_08B921F8:
    goto L_08B92220;
L_08B92220:
    goto L_08B92248;
L_08B92248:
    goto L_08B9245C;
L_08B9245C:
    goto L_08B924B0;
L_08B924B0:
    goto L_08B924D4;
L_08B924D4:
    goto L_08B9254C;
L_08B9254C:
    goto L_08B92574;
L_08B92574:
    goto L_08B9259C;
L_08B9259C:
    goto L_08B925C4;
L_08B925C4:
    goto L_08B925EC;
L_08B925EC:
    goto L_08B92604;
L_08B92604:
    goto L_08B92614;
L_08B92614:
    goto L_08B92630;
L_08B92630:
    goto L_08B9265C;
L_08B9265C:
    goto L_08B92688;
L_08B92688:
    goto L_08B926B4;
L_08B926B4:
    goto L_08B926DC;
L_08B926DC:
    goto L_08B927A4;
L_08B927A4:
    goto L_08B927BC;
L_08B927BC:
    goto L_08B927C4;
L_08B927C4:
    goto L_08B927D8;
L_08B927D8:
    goto L_08B927F4;
L_08B927F4:
    goto L_08B92810;
L_08B92810:
    goto L_08B92820;
L_08B92820:
    goto L_08B9282C;
L_08B9282C:
    goto L_08B92858;
L_08B92858:
    goto L_08B9287C;
L_08B9287C:
    goto L_08B928A0;
L_08B928A0:
    goto L_08B928C4;
L_08B928C4:
    goto L_08B928E8;
L_08B928E8:
    goto L_08B929EC;
L_08B929EC:
    goto L_08B92BBC;
L_08B92BBC:
    goto L_08B92CC4;
L_08B92CC4:
    goto L_08B92D00;
L_08B92D00:
    goto L_08B92D3C;
L_08B92D3C:
    goto L_08B92D50;
L_08B92D50:
    goto L_08B92D74;
L_08B92D74:
    goto L_08B92F00;
L_08B92F00:
    goto L_08B930C8;
L_08B930C8:
    goto L_08B93408;
L_08B93408:
    goto L_08B9343C;
L_08B9343C:
    goto L_08B93500;
L_08B93500:
    goto L_08B93634;
L_08B93634:
    goto L_08B938D0;
L_08B938D0:
    goto L_08B93E64;
L_08B93E64:
    goto L_08B93F18;
L_08B93F18:
    goto L_08B93F2C;
L_08B93F2C:
    ctx.pc = 0x08B94000u; return;
}

void recomp_unit_0227(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0227_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_227(Runtime &runtime) {
    runtime.register_generated_unit(227u, 0x08B90000u, 16384u, &recomp_unit_0227, &recomp_unit_0227_entry);
    // PSPRECOMP_V812_COMPACT_REGISTRATION: same entry set, looped once in Runtime instead of source-expanded calls.
    runtime.register_generated_entry_mask(0x08B90000u, &recomp_unit_0227, "recomp_unit_0227",
                                          kEntryMasks_recomp_unit_0227, 64u);
}
} // namespace psprecomp
