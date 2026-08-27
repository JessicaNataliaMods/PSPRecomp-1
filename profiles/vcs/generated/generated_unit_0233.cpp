#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
// PSPRECOMP_V811_COMPACT_DISPATCH: 64-slot occupancy masks + per-group base id.
static constexpr std::uint64_t kEntryMasks_recomp_unit_0233[30] = {
    0x0000000040000001ull, 0x0000000440001000ull, 0x0000000000000001ull, 0x0000040000000000ull,
    0x0000000000000004ull, 0x1000000000000000ull, 0x0004000000000000ull, 0x0000000400000000ull,
    0x0000100000004000ull, 0x0000400000000000ull, 0x0004000000100400ull, 0x0004000000000000ull,
    0x0000000000000000ull, 0x0000000000000000ull, 0x0000000000000000ull, 0x2222222200000000ull,
    0x0000000002222222ull, 0x0080000000002200ull, 0x0088888000000000ull, 0x8888888000000000ull,
    0x0200000222220008ull, 0x0000000022222222ull, 0x0000000222222200ull, 0x0000000002220000ull,
    0x2000000000002220ull, 0x0000088000000000ull, 0x2222200000000008ull, 0x0002000000000002ull,
    0x0000002200000000ull, 0x0000000000020000ull,
};
static constexpr std::uint16_t kEntryBases_recomp_unit_0233[30] = {
    1u, 3u, 6u, 7u, 8u, 9u, 10u, 11u, 12u, 14u, 15u, 18u, 19u, 19u, 19u, 19u,
    27u, 34u, 37u, 42u, 49u, 56u, 64u, 71u, 74u, 78u, 80u, 86u, 88u, 90u,
};
void recomp_unit_0233_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_redispatch_rounds = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08BA8018u;
        entry_id = 0u;
        if (entry_delta < 7496u && (entry_delta & 3u) == 0u) {
            const std::uint32_t entry_slot = entry_delta >> 2u;
            const std::uint32_t entry_group = entry_slot >> 6u;
            const std::uint64_t entry_mask = kEntryMasks_recomp_unit_0233[entry_group];
            const std::uint64_t entry_bit = 1ull << (entry_slot & 63u);
            if ((entry_mask & entry_bit) != 0u) {
                entry_id = static_cast<std::uint16_t>(
                    kEntryBases_recomp_unit_0233[entry_group] +
                    std::popcount(entry_mask & (entry_bit - 1ull)));
            }
        }
    }
    switch (entry_id) {
    case 1u: goto L_08BA8018;
    case 2u: goto L_08BA8090;
    case 3u: goto L_08BA8148;
    case 4u: goto L_08BA8190;
    case 5u: goto L_08BA81A0;
    case 6u: goto L_08BA8218;
    case 7u: goto L_08BA83C0;
    case 8u: goto L_08BA8420;
    case 9u: goto L_08BA8608;
    case 10u: goto L_08BA86E0;
    case 11u: goto L_08BA87A0;
    case 12u: goto L_08BA8850;
    case 13u: goto L_08BA88C8;
    case 14u: goto L_08BA89D0;
    case 15u: goto L_08BA8A40;
    case 16u: goto L_08BA8A68;
    case 17u: goto L_08BA8AE0;
    case 18u: goto L_08BA8BE0;
    case 19u: goto L_08BA8F9C;
    case 20u: goto L_08BA8FAC;
    case 21u: goto L_08BA8FBC;
    case 22u: goto L_08BA8FCC;
    case 23u: goto L_08BA8FDC;
    case 24u: goto L_08BA8FEC;
    case 25u: goto L_08BA8FFC;
    case 26u: goto L_08BA900C;
    case 27u: goto L_08BA901C;
    case 28u: goto L_08BA902C;
    case 29u: goto L_08BA903C;
    case 30u: goto L_08BA904C;
    case 31u: goto L_08BA905C;
    case 32u: goto L_08BA906C;
    case 33u: goto L_08BA907C;
    case 34u: goto L_08BA913C;
    case 35u: goto L_08BA914C;
    case 36u: goto L_08BA91F4;
    case 37u: goto L_08BA92B4;
    case 38u: goto L_08BA92C4;
    case 39u: goto L_08BA92D4;
    case 40u: goto L_08BA92E4;
    case 41u: goto L_08BA92F4;
    case 42u: goto L_08BA93B4;
    case 43u: goto L_08BA93C4;
    case 44u: goto L_08BA93D4;
    case 45u: goto L_08BA93E4;
    case 46u: goto L_08BA93F4;
    case 47u: goto L_08BA9404;
    case 48u: goto L_08BA9414;
    case 49u: goto L_08BA9424;
    case 50u: goto L_08BA945C;
    case 51u: goto L_08BA946C;
    case 52u: goto L_08BA947C;
    case 53u: goto L_08BA948C;
    case 54u: goto L_08BA949C;
    case 55u: goto L_08BA94FC;
    case 56u: goto L_08BA951C;
    case 57u: goto L_08BA952C;
    case 58u: goto L_08BA953C;
    case 59u: goto L_08BA954C;
    case 60u: goto L_08BA955C;
    case 61u: goto L_08BA956C;
    case 62u: goto L_08BA957C;
    case 63u: goto L_08BA958C;
    case 64u: goto L_08BA963C;
    case 65u: goto L_08BA964C;
    case 66u: goto L_08BA965C;
    case 67u: goto L_08BA966C;
    case 68u: goto L_08BA967C;
    case 69u: goto L_08BA968C;
    case 70u: goto L_08BA969C;
    case 71u: goto L_08BA975C;
    case 72u: goto L_08BA976C;
    case 73u: goto L_08BA977C;
    case 74u: goto L_08BA982C;
    case 75u: goto L_08BA983C;
    case 76u: goto L_08BA984C;
    case 77u: goto L_08BA990C;
    case 78u: goto L_08BA99B4;
    case 79u: goto L_08BA99C4;
    case 80u: goto L_08BA9A24;
    case 81u: goto L_08BA9ACC;
    case 82u: goto L_08BA9ADC;
    case 83u: goto L_08BA9AEC;
    case 84u: goto L_08BA9AFC;
    case 85u: goto L_08BA9B0C;
    case 86u: goto L_08BA9B1C;
    case 87u: goto L_08BA9BDC;
    case 88u: goto L_08BA9C9C;
    case 89u: goto L_08BA9CAC;
    case 90u: goto L_08BA9D5C;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08BA8018:
    ctx.pc = 0x02B16570u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA8090:
    ctx.pc = 0x02B44E30u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA8148:
    ctx.pc = 0x02B65C60u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA8190:
    ctx.pc = 0x02DC2FC0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA81A0:
    ctx.pc = 0x02B8CD60u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA8218:
    ctx.pc = 0x029A3390u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA83C0:
    ctx.pc = 0x02DCA020u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA8420:
    ctx.pc = 0x029A3390u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA8608:
    ctx.pc = 0x029A3390u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA86E0:
    ctx.pc = 0x02C6F0E0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA87A0:
    ctx.pc = 0x02C798F0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA8850:
    ctx.pc = 0x02C7E200u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA88C8:
    ctx.pc = 0x029A3390u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA89D0:
    ctx.pc = 0x02C91AF0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA8A40:
    ctx.pc = 0x02CF9370u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA8A68:
    ctx.pc = 0x02CFB690u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA8AE0:
    ctx.pc = 0x02D3FB60u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA8BE0:
    ctx.pc = 0x020134F0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA8F9C:
    ctx.pc = 0x02010200u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA8FAC:
    ctx.pc = 0x020102E0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA8FBC:
    ctx.pc = 0x02D952B0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA8FCC:
    ctx.pc = 0x02010420u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA8FDC:
    ctx.pc = 0x02D95420u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA8FEC:
    ctx.pc = 0x02018AE0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA8FFC:
    ctx.pc = 0x02D96310u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA900C:
    ctx.pc = 0x02032FC0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA901C:
    ctx.pc = 0x02033100u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA902C:
    ctx.pc = 0x0206A890u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA903C:
    ctx.pc = 0x02D986D0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA904C:
    ctx.pc = 0x02D98930u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA905C:
    ctx.pc = 0x02D98BD0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA906C:
    ctx.pc = 0x02D98EB0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA907C:
    ctx.pc = 0x0206BD60u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA913C:
    ctx.pc = 0x02D99940u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA914C:
    ctx.pc = 0x0208DC70u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA91F4:
    ctx.pc = 0x02096F10u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA92B4:
    ctx.pc = 0x02D99A70u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA92C4:
    ctx.pc = 0x02D81FF0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA92D4:
    ctx.pc = 0x02131FF0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA92E4:
    ctx.pc = 0x02186220u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA92F4:
    ctx.pc = 0x021AED00u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA93B4:
    ctx.pc = 0x02D9BBF0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA93C4:
    ctx.pc = 0x021BE400u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA93D4:
    ctx.pc = 0x02D9C0A0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA93E4:
    ctx.pc = 0x021D4160u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA93F4:
    ctx.pc = 0x02D9CA30u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA9404:
    ctx.pc = 0x022142F0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA9414:
    ctx.pc = 0x02DA07C0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA9424:
    ctx.pc = 0x0221D950u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA945C:
    ctx.pc = 0x02279BD0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA946C:
    ctx.pc = 0x022DCAE0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA947C:
    ctx.pc = 0x02DA1020u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA948C:
    ctx.pc = 0x02316500u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA949C:
    ctx.pc = 0x02DA8D60u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA94FC:
    ctx.pc = 0x023E1990u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA951C:
    ctx.pc = 0x02D81FF0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA952C:
    ctx.pc = 0x023F41A0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA953C:
    ctx.pc = 0x024E82F0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA954C:
    ctx.pc = 0x02DAD570u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA955C:
    ctx.pc = 0x0255D0D0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA956C:
    ctx.pc = 0x02DAEFB0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA957C:
    ctx.pc = 0x02DB2CF0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA958C:
    ctx.pc = 0x02594DB0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA963C:
    ctx.pc = 0x02DB2E20u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA964C:
    ctx.pc = 0x025D4270u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA965C:
    ctx.pc = 0x02DB34D0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA966C:
    ctx.pc = 0x026E9470u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA967C:
    ctx.pc = 0x026E95B0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA968C:
    ctx.pc = 0x02718D80u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA969C:
    ctx.pc = 0x027387A0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA975C:
    ctx.pc = 0x02DB4DF0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA976C:
    ctx.pc = 0x02DB52E0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA977C:
    ctx.pc = 0x02749D20u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA982C:
    ctx.pc = 0x027AEB60u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA983C:
    ctx.pc = 0x02DB5E50u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA984C:
    ctx.pc = 0x027DC800u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA990C:
    ctx.pc = 0x02827E10u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA99B4:
    ctx.pc = 0x02DB6610u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA99C4:
    ctx.pc = 0x02DB6850u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA9A24:
    ctx.pc = 0x028FACD0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA9ACC:
    ctx.pc = 0x02DB6D00u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA9ADC:
    ctx.pc = 0x02949B80u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA9AEC:
    ctx.pc = 0x0295A2C0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA9AFC:
    ctx.pc = 0x02DB6FC0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA9B0C:
    ctx.pc = 0x02DC1670u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA9B1C:
    ctx.pc = 0x02A92630u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA9BDC:
    ctx.pc = 0x02C6F0E0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA9C9C:
    ctx.pc = 0x02DCB230u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA9CAC:
    ctx.pc = 0x02C798F0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08BA9D5C:
    ctx.pc = 0x02DCB820u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
}

void recomp_unit_0233(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0233_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_233(Runtime &runtime) {
    runtime.register_generated_unit(233u, 0x08BA8000u, 16384u, &recomp_unit_0233, &recomp_unit_0233_entry);
    runtime.register_function(0x08BA8018u, &recomp_unit_0233, "recomp_unit_0233");
    runtime.register_function(0x08BA8090u, &recomp_unit_0233, "recomp_unit_0233");
    runtime.register_function(0x08BA8148u, &recomp_unit_0233, "recomp_unit_0233");
    runtime.register_function(0x08BA8190u, &recomp_unit_0233, "recomp_unit_0233");
    runtime.register_function(0x08BA81A0u, &recomp_unit_0233, "recomp_unit_0233");
    runtime.register_function(0x08BA8218u, &recomp_unit_0233, "recomp_unit_0233");
    runtime.register_function(0x08BA83C0u, &recomp_unit_0233, "recomp_unit_0233");
    runtime.register_function(0x08BA8420u, &recomp_unit_0233, "recomp_unit_0233");
    runtime.register_function(0x08BA8608u, &recomp_unit_0233, "recomp_unit_0233");
    runtime.register_function(0x08BA86E0u, &recomp_unit_0233, "recomp_unit_0233");
    runtime.register_function(0x08BA87A0u, &recomp_unit_0233, "recomp_unit_0233");
    runtime.register_function(0x08BA8850u, &recomp_unit_0233, "recomp_unit_0233");
    runtime.register_function(0x08BA88C8u, &recomp_unit_0233, "recomp_unit_0233");
    runtime.register_function(0x08BA89D0u, &recomp_unit_0233, "recomp_unit_0233");
    runtime.register_function(0x08BA8A40u, &recomp_unit_0233, "recomp_unit_0233");
    runtime.register_function(0x08BA8A68u, &recomp_unit_0233, "recomp_unit_0233");
    runtime.register_function(0x08BA8AE0u, &recomp_unit_0233, "recomp_unit_0233");
    runtime.register_function(0x08BA8BE0u, &recomp_unit_0233, "recomp_unit_0233");
    runtime.register_function(0x08BA8F9Cu, &recomp_unit_0233, "recomp_unit_0233");
    runtime.register_function(0x08BA8FACu, &recomp_unit_0233, "recomp_unit_0233");
    runtime.register_function(0x08BA8FBCu, &recomp_unit_0233, "recomp_unit_0233");
    runtime.register_function(0x08BA8FCCu, &recomp_unit_0233, "recomp_unit_0233");
    runtime.register_function(0x08BA8FDCu, &recomp_unit_0233, "recomp_unit_0233");
    runtime.register_function(0x08BA8FECu, &recomp_unit_0233, "recomp_unit_0233");
    runtime.register_function(0x08BA8FFCu, &recomp_unit_0233, "recomp_unit_0233");
    runtime.register_function(0x08BA900Cu, &recomp_unit_0233, "recomp_unit_0233");
    runtime.register_function(0x08BA901Cu, &recomp_unit_0233, "recomp_unit_0233");
    runtime.register_function(0x08BA902Cu, &recomp_unit_0233, "recomp_unit_0233");
    runtime.register_function(0x08BA903Cu, &recomp_unit_0233, "recomp_unit_0233");
    runtime.register_function(0x08BA904Cu, &recomp_unit_0233, "recomp_unit_0233");
    runtime.register_function(0x08BA905Cu, &recomp_unit_0233, "recomp_unit_0233");
    runtime.register_function(0x08BA906Cu, &recomp_unit_0233, "recomp_unit_0233");
    runtime.register_function(0x08BA907Cu, &recomp_unit_0233, "recomp_unit_0233");
    runtime.register_function(0x08BA913Cu, &recomp_unit_0233, "recomp_unit_0233");
    runtime.register_function(0x08BA914Cu, &recomp_unit_0233, "recomp_unit_0233");
    runtime.register_function(0x08BA91F4u, &recomp_unit_0233, "recomp_unit_0233");
    runtime.register_function(0x08BA92B4u, &recomp_unit_0233, "recomp_unit_0233");
    runtime.register_function(0x08BA92C4u, &recomp_unit_0233, "recomp_unit_0233");
    runtime.register_function(0x08BA92D4u, &recomp_unit_0233, "recomp_unit_0233");
    runtime.register_function(0x08BA92E4u, &recomp_unit_0233, "recomp_unit_0233");
    runtime.register_function(0x08BA92F4u, &recomp_unit_0233, "recomp_unit_0233");
    runtime.register_function(0x08BA93B4u, &recomp_unit_0233, "recomp_unit_0233");
    runtime.register_function(0x08BA93C4u, &recomp_unit_0233, "recomp_unit_0233");
    runtime.register_function(0x08BA93D4u, &recomp_unit_0233, "recomp_unit_0233");
    runtime.register_function(0x08BA93E4u, &recomp_unit_0233, "recomp_unit_0233");
    runtime.register_function(0x08BA93F4u, &recomp_unit_0233, "recomp_unit_0233");
    runtime.register_function(0x08BA9404u, &recomp_unit_0233, "recomp_unit_0233");
    runtime.register_function(0x08BA9414u, &recomp_unit_0233, "recomp_unit_0233");
    runtime.register_function(0x08BA9424u, &recomp_unit_0233, "recomp_unit_0233");
    runtime.register_function(0x08BA945Cu, &recomp_unit_0233, "recomp_unit_0233");
    runtime.register_function(0x08BA946Cu, &recomp_unit_0233, "recomp_unit_0233");
    runtime.register_function(0x08BA947Cu, &recomp_unit_0233, "recomp_unit_0233");
    runtime.register_function(0x08BA948Cu, &recomp_unit_0233, "recomp_unit_0233");
    runtime.register_function(0x08BA949Cu, &recomp_unit_0233, "recomp_unit_0233");
    runtime.register_function(0x08BA94FCu, &recomp_unit_0233, "recomp_unit_0233");
    runtime.register_function(0x08BA951Cu, &recomp_unit_0233, "recomp_unit_0233");
    runtime.register_function(0x08BA952Cu, &recomp_unit_0233, "recomp_unit_0233");
    runtime.register_function(0x08BA953Cu, &recomp_unit_0233, "recomp_unit_0233");
    runtime.register_function(0x08BA954Cu, &recomp_unit_0233, "recomp_unit_0233");
    runtime.register_function(0x08BA955Cu, &recomp_unit_0233, "recomp_unit_0233");
    runtime.register_function(0x08BA956Cu, &recomp_unit_0233, "recomp_unit_0233");
    runtime.register_function(0x08BA957Cu, &recomp_unit_0233, "recomp_unit_0233");
    runtime.register_function(0x08BA958Cu, &recomp_unit_0233, "recomp_unit_0233");
    runtime.register_function(0x08BA963Cu, &recomp_unit_0233, "recomp_unit_0233");
    runtime.register_function(0x08BA964Cu, &recomp_unit_0233, "recomp_unit_0233");
    runtime.register_function(0x08BA965Cu, &recomp_unit_0233, "recomp_unit_0233");
    runtime.register_function(0x08BA966Cu, &recomp_unit_0233, "recomp_unit_0233");
    runtime.register_function(0x08BA967Cu, &recomp_unit_0233, "recomp_unit_0233");
    runtime.register_function(0x08BA968Cu, &recomp_unit_0233, "recomp_unit_0233");
    runtime.register_function(0x08BA969Cu, &recomp_unit_0233, "recomp_unit_0233");
    runtime.register_function(0x08BA975Cu, &recomp_unit_0233, "recomp_unit_0233");
    runtime.register_function(0x08BA976Cu, &recomp_unit_0233, "recomp_unit_0233");
    runtime.register_function(0x08BA977Cu, &recomp_unit_0233, "recomp_unit_0233");
    runtime.register_function(0x08BA982Cu, &recomp_unit_0233, "recomp_unit_0233");
    runtime.register_function(0x08BA983Cu, &recomp_unit_0233, "recomp_unit_0233");
    runtime.register_function(0x08BA984Cu, &recomp_unit_0233, "recomp_unit_0233");
    runtime.register_function(0x08BA990Cu, &recomp_unit_0233, "recomp_unit_0233");
    runtime.register_function(0x08BA99B4u, &recomp_unit_0233, "recomp_unit_0233");
    runtime.register_function(0x08BA99C4u, &recomp_unit_0233, "recomp_unit_0233");
    runtime.register_function(0x08BA9A24u, &recomp_unit_0233, "recomp_unit_0233");
    runtime.register_function(0x08BA9ACCu, &recomp_unit_0233, "recomp_unit_0233");
    runtime.register_function(0x08BA9ADCu, &recomp_unit_0233, "recomp_unit_0233");
    runtime.register_function(0x08BA9AECu, &recomp_unit_0233, "recomp_unit_0233");
    runtime.register_function(0x08BA9AFCu, &recomp_unit_0233, "recomp_unit_0233");
    runtime.register_function(0x08BA9B0Cu, &recomp_unit_0233, "recomp_unit_0233");
    runtime.register_function(0x08BA9B1Cu, &recomp_unit_0233, "recomp_unit_0233");
    runtime.register_function(0x08BA9BDCu, &recomp_unit_0233, "recomp_unit_0233");
    runtime.register_function(0x08BA9C9Cu, &recomp_unit_0233, "recomp_unit_0233");
    runtime.register_function(0x08BA9CACu, &recomp_unit_0233, "recomp_unit_0233");
    runtime.register_function(0x08BA9D5Cu, &recomp_unit_0233, "recomp_unit_0233");
}
} // namespace psprecomp
