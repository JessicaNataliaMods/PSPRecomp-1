#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
// PSPRECOMP_V811_COMPACT_DISPATCH: 64-slot occupancy masks + per-group base id.
static constexpr std::uint64_t kEntryMasks_recomp_unit_0228[64] = {
    0x0000402010080401ull, 0x0000000000000000ull, 0x0000000000000000ull, 0x0000000000000000ull,
    0x0000000000000000ull, 0x0000000000000000ull, 0x0010000000000001ull, 0x1000000000000000ull,
    0x0040000000000000ull, 0x0000000000000002ull, 0x0000000000000000ull, 0x0000000080000000ull,
    0x0000000000000000ull, 0x0000000000000000ull, 0x0000000000000000ull, 0x4000000000000000ull,
    0x0000000000000000ull, 0x0000000000000000ull, 0x0000000080000000ull, 0x0000000000000000ull,
    0x1000000000000000ull, 0x0000000000004082ull, 0x2000000000000000ull, 0x0000000000000104ull,
    0x0000000000000000ull, 0x0000000000004000ull, 0x0000000000000000ull, 0x0000000000000000ull,
    0x0000000000000000ull, 0x0000000801008000ull, 0x0000000000000000ull, 0x0000000080000000ull,
    0x0000000000000000ull, 0x0000000000080000ull, 0x0000000000000008ull, 0x8040201000000000ull,
    0x310A0C0402010180ull, 0x0203010082506030ull, 0x0000402010180804ull, 0x0000000000000000ull,
    0x1080000200000000ull, 0x0000800000000000ull, 0x0000000000000000ull, 0x0008000000040000ull,
    0x0000000000000000ull, 0x0000000000000000ull, 0x0000000000000000ull, 0x0000000000000000ull,
    0x0088000000000000ull, 0x0000000000000000ull, 0x0000000000000000ull, 0x0000000001000800ull,
    0x0000000000000000ull, 0x0000000000000000ull, 0x0000000000000000ull, 0x0020000008000200ull,
    0x0000008002000000ull, 0x0000200008080000ull, 0x0000001080000400ull, 0x0000000000000000ull,
    0x4002000204010200ull, 0x0000000000000000ull, 0x0000002000000000ull, 0x0000010000000000ull,
};
static constexpr std::uint16_t kEntryBases_recomp_unit_0228[64] = {
    1u, 7u, 7u, 7u, 7u, 7u, 7u, 9u, 10u, 11u, 12u, 12u, 13u, 13u, 13u, 13u,
    14u, 14u, 14u, 15u, 15u, 16u, 19u, 20u, 22u, 22u, 23u, 23u, 23u, 23u, 26u, 26u,
    27u, 27u, 28u, 29u, 33u, 45u, 57u, 64u, 64u, 67u, 68u, 68u, 70u, 70u, 70u, 70u,
    70u, 72u, 72u, 72u, 74u, 74u, 74u, 74u, 77u, 79u, 82u, 85u, 85u, 91u, 91u, 92u,
};
void recomp_unit_0228_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_redispatch_rounds = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08B94000u;
        entry_id = 0u;
        if (entry_delta < 16292u && (entry_delta & 3u) == 0u) {
            const std::uint32_t entry_slot = entry_delta >> 2u;
            const std::uint32_t entry_group = entry_slot >> 6u;
            const std::uint64_t entry_mask = kEntryMasks_recomp_unit_0228[entry_group];
            const std::uint64_t entry_bit = 1ull << (entry_slot & 63u);
            if ((entry_mask & entry_bit) != 0u) {
                entry_id = static_cast<std::uint16_t>(
                    kEntryBases_recomp_unit_0228[entry_group] +
                    std::popcount(entry_mask & (entry_bit - 1ull)));
            }
        }
    }
    switch (entry_id) {
    case 1u: goto L_08B94000;
    case 2u: goto L_08B94028;
    case 3u: goto L_08B9404C;
    case 4u: goto L_08B94070;
    case 5u: goto L_08B94094;
    case 6u: goto L_08B940B8;
    case 7u: goto L_08B94600;
    case 8u: goto L_08B946D0;
    case 9u: goto L_08B947F0;
    case 10u: goto L_08B948D8;
    case 11u: goto L_08B94904;
    case 12u: goto L_08B94B7C;
    case 13u: goto L_08B94FF8;
    case 14u: goto L_08B9527C;
    case 15u: goto L_08B954F0;
    case 16u: goto L_08B95504;
    case 17u: goto L_08B9551C;
    case 18u: goto L_08B95538;
    case 19u: goto L_08B956F4;
    case 20u: goto L_08B95708;
    case 21u: goto L_08B95720;
    case 22u: goto L_08B95938;
    case 23u: goto L_08B95D3C;
    case 24u: goto L_08B95D60;
    case 25u: goto L_08B95D8C;
    case 26u: goto L_08B95F7C;
    case 27u: goto L_08B9614C;
    case 28u: goto L_08B9620C;
    case 29u: goto L_08B96390;
    case 30u: goto L_08B963B4;
    case 31u: goto L_08B963D8;
    case 32u: goto L_08B963FC;
    case 33u: goto L_08B9641C;
    case 34u: goto L_08B96420;
    case 35u: goto L_08B96440;
    case 36u: goto L_08B96464;
    case 37u: goto L_08B96488;
    case 38u: goto L_08B964A8;
    case 39u: goto L_08B964AC;
    case 40u: goto L_08B964C4;
    case 41u: goto L_08B964CC;
    case 42u: goto L_08B964E0;
    case 43u: goto L_08B964F0;
    case 44u: goto L_08B964F4;
    case 45u: goto L_08B96510;
    case 46u: goto L_08B96514;
    case 47u: goto L_08B96534;
    case 48u: goto L_08B96538;
    case 49u: goto L_08B96550;
    case 50u: goto L_08B96558;
    case 51u: goto L_08B96564;
    case 52u: goto L_08B9657C;
    case 53u: goto L_08B965A0;
    case 54u: goto L_08B965C0;
    case 55u: goto L_08B965C4;
    case 56u: goto L_08B965E4;
    case 57u: goto L_08B96608;
    case 58u: goto L_08B9662C;
    case 59u: goto L_08B9664C;
    case 60u: goto L_08B96650;
    case 61u: goto L_08B96670;
    case 62u: goto L_08B96694;
    case 63u: goto L_08B966B8;
    case 64u: goto L_08B96884;
    case 65u: goto L_08B968DC;
    case 66u: goto L_08B968F0;
    case 67u: goto L_08B969BC;
    case 68u: goto L_08B96B48;
    case 69u: goto L_08B96BCC;
    case 70u: goto L_08B970CC;
    case 71u: goto L_08B970DC;
    case 72u: goto L_08B9732C;
    case 73u: goto L_08B97360;
    case 74u: goto L_08B97724;
    case 75u: goto L_08B9776C;
    case 76u: goto L_08B977D4;
    case 77u: goto L_08B97864;
    case 78u: goto L_08B9789C;
    case 79u: goto L_08B9794C;
    case 80u: goto L_08B9796C;
    case 81u: goto L_08B979B4;
    case 82u: goto L_08B97A28;
    case 83u: goto L_08B97A7C;
    case 84u: goto L_08B97A90;
    case 85u: goto L_08B97C24;
    case 86u: goto L_08B97C40;
    case 87u: goto L_08B97C68;
    case 88u: goto L_08B97C84;
    case 89u: goto L_08B97CC4;
    case 90u: goto L_08B97CF8;
    case 91u: goto L_08B97E94;
    case 92u: goto L_08B97FA0;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08B94000:
    goto L_08B94028;
L_08B94028:
    goto L_08B9404C;
L_08B9404C:
    goto L_08B94070;
L_08B94070:
    goto L_08B94094;
L_08B94094:
    goto L_08B940B8;
L_08B940B8:
    goto L_08B94600;
L_08B94600:
    goto L_08B946D0;
L_08B946D0:
    goto L_08B947F0;
L_08B947F0:
    goto L_08B948D8;
L_08B948D8:
    goto L_08B94904;
L_08B94904:
    goto L_08B94B7C;
L_08B94B7C:
    goto L_08B94FF8;
L_08B94FF8:
    goto L_08B9527C;
L_08B9527C:
    goto L_08B954F0;
L_08B954F0:
    goto L_08B95504;
L_08B95504:
    goto L_08B9551C;
L_08B9551C:
    goto L_08B95538;
L_08B95538:
    goto L_08B956F4;
L_08B956F4:
    goto L_08B95708;
L_08B95708:
    goto L_08B95720;
L_08B95720:
    goto L_08B95938;
L_08B95938:
    goto L_08B95D3C;
L_08B95D3C:
    goto L_08B95D60;
L_08B95D60:
    goto L_08B95D8C;
L_08B95D8C:
    goto L_08B95F7C;
L_08B95F7C:
    goto L_08B9614C;
L_08B9614C:
    goto L_08B9620C;
L_08B9620C:
    goto L_08B96390;
L_08B96390:
    goto L_08B963B4;
L_08B963B4:
    goto L_08B963D8;
L_08B963D8:
    goto L_08B963FC;
L_08B963FC:
    goto L_08B9641C;
L_08B9641C:
    goto L_08B96420;
L_08B96420:
    goto L_08B96440;
L_08B96440:
    goto L_08B96464;
L_08B96464:
    goto L_08B96488;
L_08B96488:
    goto L_08B964A8;
L_08B964A8:
    goto L_08B964AC;
L_08B964AC:
    goto L_08B964C4;
L_08B964C4:
    goto L_08B964CC;
L_08B964CC:
    goto L_08B964E0;
L_08B964E0:
    goto L_08B964F0;
L_08B964F0:
    goto L_08B964F4;
L_08B964F4:
    goto L_08B96510;
L_08B96510:
    goto L_08B96514;
L_08B96514:
    goto L_08B96534;
L_08B96534:
    goto L_08B96538;
L_08B96538:
    goto L_08B96550;
L_08B96550:
    goto L_08B96558;
L_08B96558:
    goto L_08B96564;
L_08B96564:
    goto L_08B9657C;
L_08B9657C:
    goto L_08B965A0;
L_08B965A0:
    goto L_08B965C0;
L_08B965C0:
    goto L_08B965C4;
L_08B965C4:
    goto L_08B965E4;
L_08B965E4:
    goto L_08B96608;
L_08B96608:
    goto L_08B9662C;
L_08B9662C:
    goto L_08B9664C;
L_08B9664C:
    goto L_08B96650;
L_08B96650:
    goto L_08B96670;
L_08B96670:
    goto L_08B96694;
L_08B96694:
    goto L_08B966B8;
L_08B966B8:
    goto L_08B96884;
L_08B96884:
    goto L_08B968DC;
L_08B968DC:
    goto L_08B968F0;
L_08B968F0:
    goto L_08B969BC;
L_08B969BC:
    goto L_08B96B48;
L_08B96B48:
    goto L_08B96BCC;
L_08B96BCC:
    goto L_08B970CC;
L_08B970CC:
    goto L_08B970DC;
L_08B970DC:
    goto L_08B9732C;
L_08B9732C:
    goto L_08B97360;
L_08B97360:
    goto L_08B97724;
L_08B97724:
    goto L_08B9776C;
L_08B9776C:
    goto L_08B977D4;
L_08B977D4:
    goto L_08B97864;
L_08B97864:
    goto L_08B9789C;
L_08B9789C:
    goto L_08B9794C;
L_08B9794C:
    goto L_08B9796C;
L_08B9796C:
    goto L_08B979B4;
L_08B979B4:
    goto L_08B97A28;
L_08B97A28:
    goto L_08B97A7C;
L_08B97A7C:
    goto L_08B97A90;
L_08B97A90:
    goto L_08B97C24;
L_08B97C24:
    goto L_08B97C40;
L_08B97C40:
    goto L_08B97C68;
L_08B97C68:
    goto L_08B97C84;
L_08B97C84:
    goto L_08B97CC4;
L_08B97CC4:
    goto L_08B97CF8;
L_08B97CF8:
    goto L_08B97E94;
L_08B97E94:
    goto L_08B97FA0;
L_08B97FA0:
    ctx.pc = 0x08B98000u; return;
}

void recomp_unit_0228(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0228_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_228(Runtime &runtime) {
    runtime.register_generated_unit(228u, 0x08B94000u, 16384u, &recomp_unit_0228, &recomp_unit_0228_entry);
    runtime.register_function(0x08B94000u, &recomp_unit_0228, "recomp_unit_0228");
    runtime.register_function(0x08B94028u, &recomp_unit_0228, "recomp_unit_0228");
    runtime.register_function(0x08B9404Cu, &recomp_unit_0228, "recomp_unit_0228");
    runtime.register_function(0x08B94070u, &recomp_unit_0228, "recomp_unit_0228");
    runtime.register_function(0x08B94094u, &recomp_unit_0228, "recomp_unit_0228");
    runtime.register_function(0x08B940B8u, &recomp_unit_0228, "recomp_unit_0228");
    runtime.register_function(0x08B94600u, &recomp_unit_0228, "recomp_unit_0228");
    runtime.register_function(0x08B946D0u, &recomp_unit_0228, "recomp_unit_0228");
    runtime.register_function(0x08B947F0u, &recomp_unit_0228, "recomp_unit_0228");
    runtime.register_function(0x08B948D8u, &recomp_unit_0228, "recomp_unit_0228");
    runtime.register_function(0x08B94904u, &recomp_unit_0228, "recomp_unit_0228");
    runtime.register_function(0x08B94B7Cu, &recomp_unit_0228, "recomp_unit_0228");
    runtime.register_function(0x08B94FF8u, &recomp_unit_0228, "recomp_unit_0228");
    runtime.register_function(0x08B9527Cu, &recomp_unit_0228, "recomp_unit_0228");
    runtime.register_function(0x08B954F0u, &recomp_unit_0228, "recomp_unit_0228");
    runtime.register_function(0x08B95504u, &recomp_unit_0228, "recomp_unit_0228");
    runtime.register_function(0x08B9551Cu, &recomp_unit_0228, "recomp_unit_0228");
    runtime.register_function(0x08B95538u, &recomp_unit_0228, "recomp_unit_0228");
    runtime.register_function(0x08B956F4u, &recomp_unit_0228, "recomp_unit_0228");
    runtime.register_function(0x08B95708u, &recomp_unit_0228, "recomp_unit_0228");
    runtime.register_function(0x08B95720u, &recomp_unit_0228, "recomp_unit_0228");
    runtime.register_function(0x08B95938u, &recomp_unit_0228, "recomp_unit_0228");
    runtime.register_function(0x08B95D3Cu, &recomp_unit_0228, "recomp_unit_0228");
    runtime.register_function(0x08B95D60u, &recomp_unit_0228, "recomp_unit_0228");
    runtime.register_function(0x08B95D8Cu, &recomp_unit_0228, "recomp_unit_0228");
    runtime.register_function(0x08B95F7Cu, &recomp_unit_0228, "recomp_unit_0228");
    runtime.register_function(0x08B9614Cu, &recomp_unit_0228, "recomp_unit_0228");
    runtime.register_function(0x08B9620Cu, &recomp_unit_0228, "recomp_unit_0228");
    runtime.register_function(0x08B96390u, &recomp_unit_0228, "recomp_unit_0228");
    runtime.register_function(0x08B963B4u, &recomp_unit_0228, "recomp_unit_0228");
    runtime.register_function(0x08B963D8u, &recomp_unit_0228, "recomp_unit_0228");
    runtime.register_function(0x08B963FCu, &recomp_unit_0228, "recomp_unit_0228");
    runtime.register_function(0x08B9641Cu, &recomp_unit_0228, "recomp_unit_0228");
    runtime.register_function(0x08B96420u, &recomp_unit_0228, "recomp_unit_0228");
    runtime.register_function(0x08B96440u, &recomp_unit_0228, "recomp_unit_0228");
    runtime.register_function(0x08B96464u, &recomp_unit_0228, "recomp_unit_0228");
    runtime.register_function(0x08B96488u, &recomp_unit_0228, "recomp_unit_0228");
    runtime.register_function(0x08B964A8u, &recomp_unit_0228, "recomp_unit_0228");
    runtime.register_function(0x08B964ACu, &recomp_unit_0228, "recomp_unit_0228");
    runtime.register_function(0x08B964C4u, &recomp_unit_0228, "recomp_unit_0228");
    runtime.register_function(0x08B964CCu, &recomp_unit_0228, "recomp_unit_0228");
    runtime.register_function(0x08B964E0u, &recomp_unit_0228, "recomp_unit_0228");
    runtime.register_function(0x08B964F0u, &recomp_unit_0228, "recomp_unit_0228");
    runtime.register_function(0x08B964F4u, &recomp_unit_0228, "recomp_unit_0228");
    runtime.register_function(0x08B96510u, &recomp_unit_0228, "recomp_unit_0228");
    runtime.register_function(0x08B96514u, &recomp_unit_0228, "recomp_unit_0228");
    runtime.register_function(0x08B96534u, &recomp_unit_0228, "recomp_unit_0228");
    runtime.register_function(0x08B96538u, &recomp_unit_0228, "recomp_unit_0228");
    runtime.register_function(0x08B96550u, &recomp_unit_0228, "recomp_unit_0228");
    runtime.register_function(0x08B96558u, &recomp_unit_0228, "recomp_unit_0228");
    runtime.register_function(0x08B96564u, &recomp_unit_0228, "recomp_unit_0228");
    runtime.register_function(0x08B9657Cu, &recomp_unit_0228, "recomp_unit_0228");
    runtime.register_function(0x08B965A0u, &recomp_unit_0228, "recomp_unit_0228");
    runtime.register_function(0x08B965C0u, &recomp_unit_0228, "recomp_unit_0228");
    runtime.register_function(0x08B965C4u, &recomp_unit_0228, "recomp_unit_0228");
    runtime.register_function(0x08B965E4u, &recomp_unit_0228, "recomp_unit_0228");
    runtime.register_function(0x08B96608u, &recomp_unit_0228, "recomp_unit_0228");
    runtime.register_function(0x08B9662Cu, &recomp_unit_0228, "recomp_unit_0228");
    runtime.register_function(0x08B9664Cu, &recomp_unit_0228, "recomp_unit_0228");
    runtime.register_function(0x08B96650u, &recomp_unit_0228, "recomp_unit_0228");
    runtime.register_function(0x08B96670u, &recomp_unit_0228, "recomp_unit_0228");
    runtime.register_function(0x08B96694u, &recomp_unit_0228, "recomp_unit_0228");
    runtime.register_function(0x08B966B8u, &recomp_unit_0228, "recomp_unit_0228");
    runtime.register_function(0x08B96884u, &recomp_unit_0228, "recomp_unit_0228");
    runtime.register_function(0x08B968DCu, &recomp_unit_0228, "recomp_unit_0228");
    runtime.register_function(0x08B968F0u, &recomp_unit_0228, "recomp_unit_0228");
    runtime.register_function(0x08B969BCu, &recomp_unit_0228, "recomp_unit_0228");
    runtime.register_function(0x08B96B48u, &recomp_unit_0228, "recomp_unit_0228");
    runtime.register_function(0x08B96BCCu, &recomp_unit_0228, "recomp_unit_0228");
    runtime.register_function(0x08B970CCu, &recomp_unit_0228, "recomp_unit_0228");
    runtime.register_function(0x08B970DCu, &recomp_unit_0228, "recomp_unit_0228");
    runtime.register_function(0x08B9732Cu, &recomp_unit_0228, "recomp_unit_0228");
    runtime.register_function(0x08B97360u, &recomp_unit_0228, "recomp_unit_0228");
    runtime.register_function(0x08B97724u, &recomp_unit_0228, "recomp_unit_0228");
    runtime.register_function(0x08B9776Cu, &recomp_unit_0228, "recomp_unit_0228");
    runtime.register_function(0x08B977D4u, &recomp_unit_0228, "recomp_unit_0228");
    runtime.register_function(0x08B97864u, &recomp_unit_0228, "recomp_unit_0228");
    runtime.register_function(0x08B9789Cu, &recomp_unit_0228, "recomp_unit_0228");
    runtime.register_function(0x08B9794Cu, &recomp_unit_0228, "recomp_unit_0228");
    runtime.register_function(0x08B9796Cu, &recomp_unit_0228, "recomp_unit_0228");
    runtime.register_function(0x08B979B4u, &recomp_unit_0228, "recomp_unit_0228");
    runtime.register_function(0x08B97A28u, &recomp_unit_0228, "recomp_unit_0228");
    runtime.register_function(0x08B97A7Cu, &recomp_unit_0228, "recomp_unit_0228");
    runtime.register_function(0x08B97A90u, &recomp_unit_0228, "recomp_unit_0228");
    runtime.register_function(0x08B97C24u, &recomp_unit_0228, "recomp_unit_0228");
    runtime.register_function(0x08B97C40u, &recomp_unit_0228, "recomp_unit_0228");
    runtime.register_function(0x08B97C68u, &recomp_unit_0228, "recomp_unit_0228");
    runtime.register_function(0x08B97C84u, &recomp_unit_0228, "recomp_unit_0228");
    runtime.register_function(0x08B97CC4u, &recomp_unit_0228, "recomp_unit_0228");
    runtime.register_function(0x08B97CF8u, &recomp_unit_0228, "recomp_unit_0228");
    runtime.register_function(0x08B97E94u, &recomp_unit_0228, "recomp_unit_0228");
    runtime.register_function(0x08B97FA0u, &recomp_unit_0228, "recomp_unit_0228");
}
} // namespace psprecomp
