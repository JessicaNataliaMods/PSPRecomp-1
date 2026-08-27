#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
// PSPRECOMP_V811_COMPACT_DISPATCH: 64-slot occupancy masks + per-group base id.
static constexpr std::uint64_t kEntryMasks_recomp_unit_0226[56] = {
    0x0200802008020081ull, 0x8020080200802008ull, 0x2842008020080204ull, 0x0080200802008830ull,
    0x2008020080200812ull, 0x0600803008020080ull, 0x8020080204812028ull, 0x0842208020082200ull,
    0x0080202C02009135ull, 0x2008020080200802ull, 0x0200802008020080ull, 0x8020080200802008ull,
    0x0000000020080200ull, 0x0000000000000004ull, 0x0000000000000000ull, 0x0000000000000000ull,
    0x0000000000000000ull, 0x0000000100000000ull, 0x0001000000000000ull, 0x0000000000000000ull,
    0x0010000000000000ull, 0x0000000000000000ull, 0x0000000000000000ull, 0x0000000000000000ull,
    0x0000000000000000ull, 0x0000008004000000ull, 0x0000000000000000ull, 0x0000000000000000ull,
    0x0000400000000000ull, 0x0000000000000000ull, 0x0000000000000004ull, 0x0000000000000000ull,
    0x0000000000000000ull, 0x0100000000000000ull, 0x0000000000000000ull, 0x0000000000000000ull,
    0x0000000000000000ull, 0x0800000000000000ull, 0x0000000000000000ull, 0x0000000000000000ull,
    0x0000000000000000ull, 0x0000000000001000ull, 0x0000000010000000ull, 0x0041000000000000ull,
    0x0000200001000010ull, 0x0000000000000000ull, 0x0000000010001000ull, 0x0000000000000000ull,
    0x0000000000000000ull, 0x2001000000000000ull, 0x0000000000000000ull, 0x0000000000000000ull,
    0x0000000000000000ull, 0x0000000000000000ull, 0x4000000000800000ull, 0x2000000000000000ull,
};
static constexpr std::uint16_t kEntryBases_recomp_unit_0226[56] = {
    1u, 8u, 15u, 24u, 32u, 40u, 48u, 58u, 67u, 80u, 87u, 93u, 100u, 103u, 104u, 104u,
    104u, 104u, 105u, 106u, 106u, 107u, 107u, 107u, 107u, 107u, 109u, 109u, 109u, 110u, 110u, 111u,
    111u, 111u, 112u, 112u, 112u, 112u, 113u, 113u, 113u, 113u, 114u, 115u, 117u, 120u, 120u, 122u,
    122u, 122u, 124u, 124u, 124u, 124u, 124u, 126u,
};
void recomp_unit_0226_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
// PSPRECOMP_AOT_REGCACHE_BEGIN
// PSPRECOMP_AOT_REGCACHE_META gprs=24,7,23,4,2,10 fprs= gpr_occ=50 fpr_occ=0 gpr_total=54 fpr_total=0
    std::uint32_t aot_gpr_24 = ctx.gpr[24];
    std::uint32_t aot_gpr_7 = ctx.gpr[7];
    std::uint32_t aot_gpr_23 = ctx.gpr[23];
    std::uint32_t aot_gpr_4 = ctx.gpr[4];
    std::uint32_t aot_gpr_2 = ctx.gpr[2];
    std::uint32_t aot_gpr_10 = ctx.gpr[10];
    bool aot_regcache_valid = true;
#define AOT_REGCACHE_SYNC_OUT() do { if (aot_regcache_valid) { ctx.gpr[24] = aot_gpr_24; ctx.gpr[7] = aot_gpr_7; ctx.gpr[23] = aot_gpr_23; ctx.gpr[4] = aot_gpr_4; ctx.gpr[2] = aot_gpr_2; ctx.gpr[10] = aot_gpr_10; } } while (false)
#define AOT_REGCACHE_SYNC_IN() do { if (aot_regcache_valid) { aot_gpr_24 = ctx.gpr[24]; aot_gpr_7 = ctx.gpr[7]; aot_gpr_23 = ctx.gpr[23]; aot_gpr_4 = ctx.gpr[4]; aot_gpr_2 = ctx.gpr[2]; aot_gpr_10 = ctx.gpr[10]; } } while (false)
// PSPRECOMP_AOT_REGCACHE_END
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_redispatch_rounds = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08B8C000u;
        entry_id = 0u;
        if (entry_delta < 14328u && (entry_delta & 3u) == 0u) {
            const std::uint32_t entry_slot = entry_delta >> 2u;
            const std::uint32_t entry_group = entry_slot >> 6u;
            const std::uint64_t entry_mask = kEntryMasks_recomp_unit_0226[entry_group];
            const std::uint64_t entry_bit = 1ull << (entry_slot & 63u);
            if ((entry_mask & entry_bit) != 0u) {
                entry_id = static_cast<std::uint16_t>(
                    kEntryBases_recomp_unit_0226[entry_group] +
                    std::popcount(entry_mask & (entry_bit - 1ull)));
            }
        }
    }
    switch (entry_id) {
    case 1u: goto L_08B8C000;
    case 2u: goto L_08B8C01C;
    case 3u: goto L_08B8C044;
    case 4u: goto L_08B8C06C;
    case 5u: goto L_08B8C094;
    case 6u: goto L_08B8C0BC;
    case 7u: goto L_08B8C0E4;
    case 8u: goto L_08B8C10C;
    case 9u: goto L_08B8C134;
    case 10u: goto L_08B8C15C;
    case 11u: goto L_08B8C184;
    case 12u: goto L_08B8C1AC;
    case 13u: goto L_08B8C1D4;
    case 14u: goto L_08B8C1FC;
    case 15u: goto L_08B8C208;
    case 16u: goto L_08B8C224;
    case 17u: goto L_08B8C24C;
    case 18u: goto L_08B8C274;
    case 19u: goto L_08B8C29C;
    case 20u: goto L_08B8C2C4;
    case 21u: goto L_08B8C2D8;
    case 22u: goto L_08B8C2EC;
    case 23u: goto L_08B8C2F4;
    case 24u: goto L_08B8C310;
    case 25u: goto L_08B8C314;
    case 26u: goto L_08B8C32C;
    case 27u: goto L_08B8C33C;
    case 28u: goto L_08B8C364;
    case 29u: goto L_08B8C38C;
    case 30u: goto L_08B8C3B4;
    case 31u: goto L_08B8C3DC;
    case 32u: goto L_08B8C404;
    case 33u: goto L_08B8C410;
    case 34u: goto L_08B8C42C;
    case 35u: goto L_08B8C454;
    case 36u: goto L_08B8C47C;
    case 37u: goto L_08B8C4A4;
    case 38u: goto L_08B8C4CC;
    case 39u: goto L_08B8C4F4;
    case 40u: goto L_08B8C51C;
    case 41u: goto L_08B8C544;
    case 42u: goto L_08B8C56C;
    case 43u: goto L_08B8C590;
    case 44u: goto L_08B8C594;
    case 45u: goto L_08B8C5BC;
    case 46u: goto L_08B8C5E4;
    case 47u: goto L_08B8C5E8;
    case 48u: goto L_08B8C60C;
    case 49u: goto L_08B8C614;
    case 50u: goto L_08B8C634;
    case 51u: goto L_08B8C640;
    case 52u: goto L_08B8C65C;
    case 53u: goto L_08B8C668;
    case 54u: goto L_08B8C684;
    case 55u: goto L_08B8C6AC;
    case 56u: goto L_08B8C6D4;
    case 57u: goto L_08B8C6FC;
    case 58u: goto L_08B8C724;
    case 59u: goto L_08B8C734;
    case 60u: goto L_08B8C74C;
    case 61u: goto L_08B8C774;
    case 62u: goto L_08B8C79C;
    case 63u: goto L_08B8C7B4;
    case 64u: goto L_08B8C7C4;
    case 65u: goto L_08B8C7D8;
    case 66u: goto L_08B8C7EC;
    case 67u: goto L_08B8C800;
    case 68u: goto L_08B8C808;
    case 69u: goto L_08B8C810;
    case 70u: goto L_08B8C814;
    case 71u: goto L_08B8C820;
    case 72u: goto L_08B8C830;
    case 73u: goto L_08B8C83C;
    case 74u: goto L_08B8C864;
    case 75u: goto L_08B8C888;
    case 76u: goto L_08B8C88C;
    case 77u: goto L_08B8C894;
    case 78u: goto L_08B8C8B4;
    case 79u: goto L_08B8C8DC;
    case 80u: goto L_08B8C904;
    case 81u: goto L_08B8C92C;
    case 82u: goto L_08B8C954;
    case 83u: goto L_08B8C97C;
    case 84u: goto L_08B8C9A4;
    case 85u: goto L_08B8C9CC;
    case 86u: goto L_08B8C9F4;
    case 87u: goto L_08B8CA1C;
    case 88u: goto L_08B8CA44;
    case 89u: goto L_08B8CA6C;
    case 90u: goto L_08B8CA94;
    case 91u: goto L_08B8CABC;
    case 92u: goto L_08B8CAE4;
    case 93u: goto L_08B8CB0C;
    case 94u: goto L_08B8CB34;
    case 95u: goto L_08B8CB5C;
    case 96u: goto L_08B8CB84;
    case 97u: goto L_08B8CBAC;
    case 98u: goto L_08B8CBD4;
    case 99u: goto L_08B8CBFC;
    case 100u: goto L_08B8CC24;
    case 101u: goto L_08B8CC4C;
    case 102u: goto L_08B8CC74;
    case 103u: goto L_08B8CD08;
    case 104u: goto L_08B8D180;
    case 105u: goto L_08B8D2C0;
    case 106u: goto L_08B8D4D0;
    case 107u: goto L_08B8D968;
    case 108u: goto L_08B8D99C;
    case 109u: goto L_08B8DCB8;
    case 110u: goto L_08B8DE08;
    case 111u: goto L_08B8E1E0;
    case 112u: goto L_08B8E5EC;
    case 113u: goto L_08B8E930;
    case 114u: goto L_08B8EA70;
    case 115u: goto L_08B8EBC0;
    case 116u: goto L_08B8EBD8;
    case 117u: goto L_08B8EC10;
    case 118u: goto L_08B8EC60;
    case 119u: goto L_08B8ECB4;
    case 120u: goto L_08B8EE30;
    case 121u: goto L_08B8EE70;
    case 122u: goto L_08B8F1C0;
    case 123u: goto L_08B8F1F4;
    case 124u: goto L_08B8F65C;
    case 125u: goto L_08B8F6F8;
    case 126u: goto L_08B8F7F4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        AOT_REGCACHE_SYNC_OUT(); return;
    }
    }
L_08B8C000:
    goto L_08B8C01C;
L_08B8C01C:
    goto L_08B8C044;
L_08B8C044:
    goto L_08B8C06C;
L_08B8C06C:
    goto L_08B8C094;
L_08B8C094:
    goto L_08B8C0BC;
L_08B8C0BC:
    goto L_08B8C0E4;
L_08B8C0E4:
    goto L_08B8C10C;
L_08B8C10C:
    goto L_08B8C134;
L_08B8C134:
    goto L_08B8C15C;
L_08B8C15C:
    goto L_08B8C184;
L_08B8C184:
    goto L_08B8C1AC;
L_08B8C1AC:
    goto L_08B8C1D4;
L_08B8C1D4:
    goto L_08B8C1FC;
L_08B8C1FC:
    goto L_08B8C208;
L_08B8C208:
    goto L_08B8C224;
L_08B8C224:
    goto L_08B8C24C;
L_08B8C24C:
    goto L_08B8C274;
L_08B8C274:
    goto L_08B8C29C;
L_08B8C29C:
    goto L_08B8C2C4;
L_08B8C2C4:
    goto L_08B8C2D8;
L_08B8C2D8:
    goto L_08B8C2EC;
L_08B8C2EC:
    goto L_08B8C2F4;
L_08B8C2F4:
    goto L_08B8C310;
L_08B8C310:
    goto L_08B8C314;
L_08B8C314:
    goto L_08B8C32C;
L_08B8C32C:
    goto L_08B8C33C;
L_08B8C33C:
    goto L_08B8C364;
L_08B8C364:
    goto L_08B8C38C;
L_08B8C38C:
    goto L_08B8C3B4;
L_08B8C3B4:
    goto L_08B8C3DC;
L_08B8C3DC:
    goto L_08B8C404;
L_08B8C404:
    goto L_08B8C410;
L_08B8C410:
    goto L_08B8C42C;
L_08B8C42C:
    goto L_08B8C454;
L_08B8C454:
    goto L_08B8C47C;
L_08B8C47C:
    goto L_08B8C4A4;
L_08B8C4A4:
    goto L_08B8C4CC;
L_08B8C4CC:
    goto L_08B8C4F4;
L_08B8C4F4:
    goto L_08B8C51C;
L_08B8C51C:
    goto L_08B8C544;
L_08B8C544:
    goto L_08B8C56C;
L_08B8C56C:
    goto L_08B8C590;
L_08B8C590:
    goto L_08B8C594;
L_08B8C594:
    goto L_08B8C5BC;
L_08B8C5BC:
    goto L_08B8C5E4;
L_08B8C5E4:
    goto L_08B8C5E8;
L_08B8C5E8:
    goto L_08B8C60C;
L_08B8C60C:
    goto L_08B8C614;
L_08B8C614:
    goto L_08B8C634;
L_08B8C634:
    goto L_08B8C640;
L_08B8C640:
    goto L_08B8C65C;
L_08B8C65C:
    goto L_08B8C668;
L_08B8C668:
    goto L_08B8C684;
L_08B8C684:
    goto L_08B8C6AC;
L_08B8C6AC:
    goto L_08B8C6D4;
L_08B8C6D4:
    goto L_08B8C6FC;
L_08B8C6FC:
    goto L_08B8C724;
L_08B8C724:
    goto L_08B8C734;
L_08B8C734:
    goto L_08B8C74C;
L_08B8C74C:
    goto L_08B8C774;
L_08B8C774:
    goto L_08B8C79C;
L_08B8C79C:
    goto L_08B8C7B4;
L_08B8C7B4:
    goto L_08B8C7C4;
L_08B8C7C4:
    goto L_08B8C7D8;
L_08B8C7D8:
    goto L_08B8C7EC;
L_08B8C7EC:
    goto L_08B8C800;
L_08B8C800:
    goto L_08B8C808;
L_08B8C808:
    goto L_08B8C810;
L_08B8C810:
    goto L_08B8C814;
L_08B8C814:
    goto L_08B8C820;
L_08B8C820:
    goto L_08B8C830;
L_08B8C830:
    goto L_08B8C83C;
L_08B8C83C:
    goto L_08B8C864;
L_08B8C864:
    goto L_08B8C888;
L_08B8C888:
    goto L_08B8C88C;
L_08B8C88C:
    goto L_08B8C894;
L_08B8C894:
    goto L_08B8C8B4;
L_08B8C8B4:
    goto L_08B8C8DC;
L_08B8C8DC:
    goto L_08B8C904;
L_08B8C904:
    goto L_08B8C92C;
L_08B8C92C:
    goto L_08B8C954;
L_08B8C954:
    goto L_08B8C97C;
L_08B8C97C:
    goto L_08B8C9A4;
L_08B8C9A4:
    goto L_08B8C9CC;
L_08B8C9CC:
    goto L_08B8C9F4;
L_08B8C9F4:
    goto L_08B8CA1C;
L_08B8CA1C:
    goto L_08B8CA44;
L_08B8CA44:
    goto L_08B8CA6C;
L_08B8CA6C:
    goto L_08B8CA94;
L_08B8CA94:
    goto L_08B8CABC;
L_08B8CABC:
    goto L_08B8CAE4;
L_08B8CAE4:
    goto L_08B8CB0C;
L_08B8CB0C:
    goto L_08B8CB34;
L_08B8CB34:
    goto L_08B8CB5C;
L_08B8CB5C:
    goto L_08B8CB84;
L_08B8CB84:
    goto L_08B8CBAC;
L_08B8CBAC:
    goto L_08B8CBD4;
L_08B8CBD4:
    goto L_08B8CBFC;
L_08B8CBFC:
    goto L_08B8CC24;
L_08B8CC24:
    goto L_08B8CC4C;
L_08B8CC4C:
    goto L_08B8CC74;
L_08B8CC74:
    goto L_08B8CD08;
L_08B8CD08:
    goto L_08B8D180;
L_08B8D180:
    goto L_08B8D2C0;
L_08B8D2C0:
    goto L_08B8D4D0;
L_08B8D4D0:
    goto L_08B8D968;
L_08B8D968:
    goto L_08B8D99C;
L_08B8D99C:
    goto L_08B8DCB8;
L_08B8DCB8:
    goto L_08B8DE08;
L_08B8DE08:
    goto L_08B8E1E0;
L_08B8E1E0:
    goto L_08B8E5EC;
L_08B8E5EC:
    goto L_08B8E930;
L_08B8E930:
    goto L_08B8EA70;
L_08B8EA70:
    goto L_08B8EBC0;
L_08B8EBC0:
    (void)(ctx.gpr[1] << 0u);
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B8EBC4u, 0x00010001u, "special? not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08B8EBD8:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B8EBDCu, 0x00080008u, "control flow in delay slot"); AOT_REGCACHE_SYNC_OUT(); return;
L_08B8EC10:
    (void)(ctx.gpr[1] << 0u);
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B8EC14u, 0x00010001u, "special? not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08B8EC60:
    (void)(aot_gpr_10 << 0u);
    if (aot_gpr_10 == 0u) (void)(0u);
    if (aot_gpr_10 == 0u) (void)(0u);
    if (aot_gpr_10 == 0u) (void)(0u);
    if (aot_gpr_10 == 0u) (void)(0u);
    if (aot_gpr_10 == 0u) (void)(0u);
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B8EC78u, 0x03E80168u, "special? not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08B8ECB4:
    ctx.gpr[16] = (0u << 2u);
    (void)(0u << 16u);
    ctx.gpr[16] = (0u << 2u);
    (void)(0u << 16u);
    aot_gpr_24 = (aot_gpr_7 + aot_gpr_23);
    (void)(0u << 16u);
    aot_gpr_24 = (aot_gpr_7 + aot_gpr_23);
    (void)(0u << 16u);
    aot_gpr_24 = (aot_gpr_7 + aot_gpr_23);
    (void)(0u << 16u);
    aot_gpr_24 = (aot_gpr_7 + aot_gpr_23);
    (void)(0u << 16u);
    aot_gpr_24 = (aot_gpr_7 + aot_gpr_23);
    (void)(0u << 16u);
    aot_gpr_24 = (aot_gpr_7 + aot_gpr_23);
    (void)(0u << 16u);
    aot_gpr_24 = (aot_gpr_7 + aot_gpr_23);
    (void)(0u << 16u);
    aot_gpr_24 = (aot_gpr_7 + aot_gpr_23);
    (void)(0u << 16u);
    aot_gpr_24 = (aot_gpr_7 + aot_gpr_23);
    (void)(0u << 16u);
    aot_gpr_24 = (aot_gpr_7 + aot_gpr_23);
    (void)(0u << 16u);
    { const std::uint32_t dividend = aot_gpr_4; const std::uint32_t divisor = aot_gpr_2; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    (void)(0u << 16u);
    { const std::uint32_t dividend = aot_gpr_4; const std::uint32_t divisor = aot_gpr_2; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    (void)(0u << 16u);
    { const std::uint32_t dividend = aot_gpr_4; const std::uint32_t divisor = aot_gpr_2; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    (void)(0u << 16u);
    { const std::uint32_t dividend = aot_gpr_4; const std::uint32_t divisor = aot_gpr_2; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    (void)(0u << 16u);
    { const std::uint32_t dividend = aot_gpr_4; const std::uint32_t divisor = aot_gpr_2; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    (void)(0u << 16u);
    { const std::uint32_t dividend = aot_gpr_4; const std::uint32_t divisor = aot_gpr_2; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    (void)(0u << 16u);
    { const std::uint32_t dividend = aot_gpr_4; const std::uint32_t divisor = aot_gpr_2; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    (void)(0u << 16u);
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B8ED4Cu, 0x0018C295u, "special? not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08B8EE30:
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08B8EE34u, 0x00000005u, "special? not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
    ctx.pc = 0x02EB0FE0u; (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
L_08B8EE70:
    goto L_08B8F1C0;
L_08B8F1C0:
    goto L_08B8F1F4;
L_08B8F1F4:
    goto L_08B8F65C;
L_08B8F65C:
    goto L_08B8F6F8;
L_08B8F6F8:
    goto L_08B8F7F4;
L_08B8F7F4:
    ctx.pc = 0x08B90000u; AOT_REGCACHE_SYNC_OUT(); return;
}

#undef AOT_REGCACHE_SYNC_IN
#undef AOT_REGCACHE_SYNC_OUT

void recomp_unit_0226(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0226_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_226(Runtime &runtime) {
    runtime.register_generated_unit(226u, 0x08B8C000u, 16384u, &recomp_unit_0226, &recomp_unit_0226_entry);
    // PSPRECOMP_V812_COMPACT_REGISTRATION: same entry set, looped once in Runtime instead of source-expanded calls.
    runtime.register_generated_entry_mask(0x08B8C000u, &recomp_unit_0226, "recomp_unit_0226",
                                          kEntryMasks_recomp_unit_0226, 56u);
}
} // namespace psprecomp
