#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
// PSPRECOMP_V811_COMPACT_DISPATCH: 64-slot occupancy masks + per-group base id.
static constexpr std::uint64_t kEntryMasks_recomp_unit_0229[61] = {
    0x0000000002040001ull, 0x0000000000010000ull, 0x0408109000000000ull, 0x0001000000000000ull,
    0x0000000000000000ull, 0x0000000000000000ull, 0x8000000000000000ull, 0x5002000A09410820ull,
    0x0000002010000100ull, 0x0010000000000001ull, 0x0408108000200020ull, 0x0000000004004000ull,
    0x0000800000000800ull, 0x0000000000000000ull, 0x0000000000000000ull, 0x0000084000000000ull,
    0x0000000400000000ull, 0x0000000000000000ull, 0x0000000000000000ull, 0x0000000000000000ull,
    0x0040000002000000ull, 0x0000000000000000ull, 0x0020841000000000ull, 0x0000000000000000ull,
    0x0000000000000000ull, 0x0000000000008210ull, 0x0000000000110000ull, 0x0000000100400000ull,
    0x0000000000000000ull, 0x0000000000100000ull, 0x0000000000000000ull, 0x0000000000000000ull,
    0x0000000000000000ull, 0x0000000000000000ull, 0x0000000000000000ull, 0x0000000008000000ull,
    0x0010000400020000ull, 0x0000000000000000ull, 0x0002000000000000ull, 0x0000000000000000ull,
    0x0000000000000000ull, 0x8000000000000000ull, 0x0000000000000000ull, 0x4000000000000000ull,
    0x4021000080000010ull, 0x0000010200002080ull, 0x0000000000001000ull, 0x0000000000000000ull,
    0x0000000000000000ull, 0x0400200000000080ull, 0x0000000000100080ull, 0x0000000000000000ull,
    0x0000000000000000ull, 0x0000000000000000ull, 0x00008000C0000000ull, 0x0000000000000000ull,
    0x0000000000020000ull, 0x0000000200020000ull, 0x0000000000000000ull, 0x0000000000000020ull,
    0x0000000000400000ull,
};
static constexpr std::uint16_t kEntryBases_recomp_unit_0229[61] = {
    1u, 4u, 5u, 10u, 11u, 11u, 11u, 12u, 23u, 26u, 28u, 34u, 36u, 38u, 38u, 38u,
    40u, 41u, 41u, 41u, 41u, 43u, 43u, 47u, 47u, 47u, 50u, 52u, 54u, 54u, 55u, 55u,
    55u, 55u, 55u, 55u, 56u, 59u, 59u, 60u, 60u, 60u, 61u, 61u, 62u, 67u, 71u, 72u,
    72u, 72u, 75u, 77u, 77u, 77u, 77u, 80u, 80u, 81u, 83u, 83u, 84u,
};
void recomp_unit_0229_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_redispatch_rounds = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08B98000u;
        entry_id = 0u;
        if (entry_delta < 15452u && (entry_delta & 3u) == 0u) {
            const std::uint32_t entry_slot = entry_delta >> 2u;
            const std::uint32_t entry_group = entry_slot >> 6u;
            const std::uint64_t entry_mask = kEntryMasks_recomp_unit_0229[entry_group];
            const std::uint64_t entry_bit = 1ull << (entry_slot & 63u);
            if ((entry_mask & entry_bit) != 0u) {
                entry_id = static_cast<std::uint16_t>(
                    kEntryBases_recomp_unit_0229[entry_group] +
                    std::popcount(entry_mask & (entry_bit - 1ull)));
            }
        }
    }
    switch (entry_id) {
    case 1u: goto L_08B98000;
    case 2u: goto L_08B98048;
    case 3u: goto L_08B98064;
    case 4u: goto L_08B98140;
    case 5u: goto L_08B98290;
    case 6u: goto L_08B9829C;
    case 7u: goto L_08B982B0;
    case 8u: goto L_08B982CC;
    case 9u: goto L_08B982E8;
    case 10u: goto L_08B983C0;
    case 11u: goto L_08B986FC;
    case 12u: goto L_08B98714;
    case 13u: goto L_08B9872C;
    case 14u: goto L_08B98740;
    case 15u: goto L_08B98758;
    case 16u: goto L_08B98760;
    case 17u: goto L_08B9876C;
    case 18u: goto L_08B98784;
    case 19u: goto L_08B9878C;
    case 20u: goto L_08B987C4;
    case 21u: goto L_08B987F0;
    case 22u: goto L_08B987F8;
    case 23u: goto L_08B98820;
    case 24u: goto L_08B98870;
    case 25u: goto L_08B98894;
    case 26u: goto L_08B98900;
    case 27u: goto L_08B989D0;
    case 28u: goto L_08B98A14;
    case 29u: goto L_08B98A54;
    case 30u: goto L_08B98A9C;
    case 31u: goto L_08B98AB0;
    case 32u: goto L_08B98ACC;
    case 33u: goto L_08B98AE8;
    case 34u: goto L_08B98B38;
    case 35u: goto L_08B98B68;
    case 36u: goto L_08B98C2C;
    case 37u: goto L_08B98CBC;
    case 38u: goto L_08B98F98;
    case 39u: goto L_08B98FAC;
    case 40u: goto L_08B99088;
    case 41u: goto L_08B99464;
    case 42u: goto L_08B994D8;
    case 43u: goto L_08B99690;
    case 44u: goto L_08B996A8;
    case 45u: goto L_08B996BC;
    case 46u: goto L_08B996D4;
    case 47u: goto L_08B99910;
    case 48u: goto L_08B99924;
    case 49u: goto L_08B9993C;
    case 50u: goto L_08B99A40;
    case 51u: goto L_08B99A50;
    case 52u: goto L_08B99B58;
    case 53u: goto L_08B99B80;
    case 54u: goto L_08B99D50;
    case 55u: goto L_08B9A36C;
    case 56u: goto L_08B9A444;
    case 57u: goto L_08B9A488;
    case 58u: goto L_08B9A4D0;
    case 59u: goto L_08B9A6C4;
    case 60u: goto L_08B9A9FC;
    case 61u: goto L_08B9ABF8;
    case 62u: goto L_08B9AC10;
    case 63u: goto L_08B9AC7C;
    case 64u: goto L_08B9ACC0;
    case 65u: goto L_08B9ACD4;
    case 66u: goto L_08B9ACF8;
    case 67u: goto L_08B9AD1C;
    case 68u: goto L_08B9AD34;
    case 69u: goto L_08B9AD84;
    case 70u: goto L_08B9ADA0;
    case 71u: goto L_08B9AE30;
    case 72u: goto L_08B9B11C;
    case 73u: goto L_08B9B1B4;
    case 74u: goto L_08B9B1E8;
    case 75u: goto L_08B9B21C;
    case 76u: goto L_08B9B250;
    case 77u: goto L_08B9B678;
    case 78u: goto L_08B9B67C;
    case 79u: goto L_08B9B6BC;
    case 80u: goto L_08B9B844;
    case 81u: goto L_08B9B944;
    case 82u: goto L_08B9B984;
    case 83u: goto L_08B9BB14;
    case 84u: goto L_08B9BC58;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08B98000:
    goto L_08B98048;
L_08B98048:
    goto L_08B98064;
L_08B98064:
    goto L_08B98140;
L_08B98140:
    goto L_08B98290;
L_08B98290:
    goto L_08B9829C;
L_08B9829C:
    goto L_08B982B0;
L_08B982B0:
    goto L_08B982CC;
L_08B982CC:
    goto L_08B982E8;
L_08B982E8:
    goto L_08B983C0;
L_08B983C0:
    goto L_08B986FC;
L_08B986FC:
    goto L_08B98714;
L_08B98714:
    goto L_08B9872C;
L_08B9872C:
    goto L_08B98740;
L_08B98740:
    goto L_08B98758;
L_08B98758:
    goto L_08B98760;
L_08B98760:
    goto L_08B9876C;
L_08B9876C:
    goto L_08B98784;
L_08B98784:
    goto L_08B9878C;
L_08B9878C:
    goto L_08B987C4;
L_08B987C4:
    goto L_08B987F0;
L_08B987F0:
    goto L_08B987F8;
L_08B987F8:
    goto L_08B98820;
L_08B98820:
    goto L_08B98870;
L_08B98870:
    goto L_08B98894;
L_08B98894:
    goto L_08B98900;
L_08B98900:
    goto L_08B989D0;
L_08B989D0:
    goto L_08B98A14;
L_08B98A14:
    goto L_08B98A54;
L_08B98A54:
    goto L_08B98A9C;
L_08B98A9C:
    goto L_08B98AB0;
L_08B98AB0:
    goto L_08B98ACC;
L_08B98ACC:
    goto L_08B98AE8;
L_08B98AE8:
    goto L_08B98B38;
L_08B98B38:
    goto L_08B98B68;
L_08B98B68:
    goto L_08B98C2C;
L_08B98C2C:
    goto L_08B98CBC;
L_08B98CBC:
    goto L_08B98F98;
L_08B98F98:
    goto L_08B98FAC;
L_08B98FAC:
    goto L_08B99088;
L_08B99088:
    goto L_08B99464;
L_08B99464:
    goto L_08B994D8;
L_08B994D8:
    goto L_08B99690;
L_08B99690:
    goto L_08B996A8;
L_08B996A8:
    goto L_08B996BC;
L_08B996BC:
    goto L_08B996D4;
L_08B996D4:
    goto L_08B99910;
L_08B99910:
    goto L_08B99924;
L_08B99924:
    goto L_08B9993C;
L_08B9993C:
    goto L_08B99A40;
L_08B99A40:
    goto L_08B99A50;
L_08B99A50:
    goto L_08B99B58;
L_08B99B58:
    goto L_08B99B80;
L_08B99B80:
    goto L_08B99D50;
L_08B99D50:
    goto L_08B9A36C;
L_08B9A36C:
    goto L_08B9A444;
L_08B9A444:
    goto L_08B9A488;
L_08B9A488:
    goto L_08B9A4D0;
L_08B9A4D0:
    goto L_08B9A6C4;
L_08B9A6C4:
    goto L_08B9A9FC;
L_08B9A9FC:
    goto L_08B9ABF8;
L_08B9ABF8:
    goto L_08B9AC10;
L_08B9AC10:
    goto L_08B9AC7C;
L_08B9AC7C:
    goto L_08B9ACC0;
L_08B9ACC0:
    goto L_08B9ACD4;
L_08B9ACD4:
    goto L_08B9ACF8;
L_08B9ACF8:
    goto L_08B9AD1C;
L_08B9AD1C:
    goto L_08B9AD34;
L_08B9AD34:
    goto L_08B9AD84;
L_08B9AD84:
    goto L_08B9ADA0;
L_08B9ADA0:
    goto L_08B9AE30;
L_08B9AE30:
    goto L_08B9B11C;
L_08B9B11C:
    goto L_08B9B1B4;
L_08B9B1B4:
    goto L_08B9B1E8;
L_08B9B1E8:
    goto L_08B9B21C;
L_08B9B21C:
    goto L_08B9B250;
L_08B9B250:
    goto L_08B9B678;
L_08B9B678:
    goto L_08B9B67C;
L_08B9B67C:
    goto L_08B9B6BC;
L_08B9B6BC:
    goto L_08B9B844;
L_08B9B844:
    goto L_08B9B944;
L_08B9B944:
    goto L_08B9B984;
L_08B9B984:
    goto L_08B9BB14;
L_08B9BB14:
    goto L_08B9BC58;
L_08B9BC58:
    ctx.pc = 0x08B9C000u; return;
}

void recomp_unit_0229(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0229_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_229(Runtime &runtime) {
    runtime.register_generated_unit(229u, 0x08B98000u, 16384u, &recomp_unit_0229, &recomp_unit_0229_entry);
    runtime.register_function(0x08B98000u, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x08B98048u, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x08B98064u, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x08B98140u, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x08B98290u, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x08B9829Cu, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x08B982B0u, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x08B982CCu, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x08B982E8u, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x08B983C0u, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x08B986FCu, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x08B98714u, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x08B9872Cu, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x08B98740u, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x08B98758u, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x08B98760u, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x08B9876Cu, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x08B98784u, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x08B9878Cu, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x08B987C4u, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x08B987F0u, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x08B987F8u, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x08B98820u, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x08B98870u, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x08B98894u, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x08B98900u, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x08B989D0u, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x08B98A14u, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x08B98A54u, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x08B98A9Cu, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x08B98AB0u, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x08B98ACCu, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x08B98AE8u, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x08B98B38u, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x08B98B68u, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x08B98C2Cu, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x08B98CBCu, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x08B98F98u, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x08B98FACu, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x08B99088u, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x08B99464u, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x08B994D8u, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x08B99690u, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x08B996A8u, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x08B996BCu, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x08B996D4u, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x08B99910u, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x08B99924u, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x08B9993Cu, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x08B99A40u, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x08B99A50u, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x08B99B58u, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x08B99B80u, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x08B99D50u, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x08B9A36Cu, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x08B9A444u, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x08B9A488u, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x08B9A4D0u, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x08B9A6C4u, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x08B9A9FCu, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x08B9ABF8u, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x08B9AC10u, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x08B9AC7Cu, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x08B9ACC0u, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x08B9ACD4u, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x08B9ACF8u, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x08B9AD1Cu, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x08B9AD34u, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x08B9AD84u, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x08B9ADA0u, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x08B9AE30u, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x08B9B11Cu, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x08B9B1B4u, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x08B9B1E8u, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x08B9B21Cu, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x08B9B250u, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x08B9B678u, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x08B9B67Cu, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x08B9B6BCu, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x08B9B844u, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x08B9B944u, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x08B9B984u, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x08B9BB14u, &recomp_unit_0229, "recomp_unit_0229");
    runtime.register_function(0x08B9BC58u, &recomp_unit_0229, "recomp_unit_0229");
}
} // namespace psprecomp
