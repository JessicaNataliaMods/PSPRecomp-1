#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include "vcs_resident_regions.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
// PSPRECOMP_V811_COMPACT_DISPATCH: 64-slot occupancy masks + per-group base id.
static constexpr std::uint64_t kEntryMasks_recomp_unit_0150[64] = {
    0x9102A5291202A801ull, 0x0AA448034C8A9492ull, 0x5140124840924A44ull, 0x4210828844520A81ull,
    0x4021210910240428ull, 0x2200124800030202ull, 0x2A8910A445110922ull, 0x0850A14132952115ull,
    0xAA4448108404012Cull, 0x90828A92A0514550ull, 0x1150014014A2A096ull, 0x8112090200149253ull,
    0x0008808448048882ull, 0x82092B0400124922ull, 0x9050102808511492ull, 0x0494408140A0A4AAull,
    0x0A48080044A48805ull, 0x414002D254480400ull, 0x20010A9111091220ull, 0x0485014804442CA8ull,
    0xC84240901225A549ull, 0x9412212549410410ull, 0x1254941041221254ull, 0x0314122125494122ull,
    0x04940C892204200Aull, 0xA8AA0A4D25409100ull, 0x2181504051420952ull, 0x4412881212549452ull,
    0x0C82400210288241ull, 0xA048088A00520042ull, 0x2158410448411502ull, 0x4100049008952805ull,
    0x08420A522A504210ull, 0x9124924209142000ull, 0x8D54A252A028A44Aull, 0x8094892000120642ull,
    0x4895224490492210ull, 0x4012924040AA5555ull, 0x4308222000810144ull, 0x48190A3552894A81ull,
    0x2081112AA4920000ull, 0x2109050280512210ull, 0xA449249084984000ull, 0xA3552894A80A2912ull,
    0x880B224800048190ull, 0x00450A44224564A0ull, 0x84A1021411192220ull, 0x0924090521142114ull,
    0x0208049100A12221ull, 0x4402441040115408ull, 0x002200B444024414ull, 0x261102AB10810110ull,
    0x1549844C228844C2ull, 0x0501012940AACB49ull, 0x448012A140480522ull, 0x0200840121804892ull,
    0xB404049401010104ull, 0x2551500400145508ull, 0xAA944554A2C41410ull, 0x80A02AA210091540ull,
    0x0110002840044000ull, 0x5209048108A00610ull, 0xA22608A8A8152842ull, 0x20222244028C1404ull,
};
static constexpr std::uint16_t kEntryBases_recomp_unit_0150[64] = {
    1u, 19u, 40u, 57u, 73u, 86u, 96u, 115u, 135u, 151u, 171u, 188u, 204u, 215u, 231u, 247u,
    264u, 278u, 292u, 306u, 322u, 342u, 359u, 377u, 395u, 410u, 430u, 447u, 466u, 479u, 492u, 508u,
    522u, 538u, 553u, 576u, 590u, 608u, 628u, 640u, 662u, 676u, 690u, 706u, 729u, 743u, 760u, 776u,
    792u, 805u, 818u, 831u, 847u, 867u, 887u, 902u, 914u, 927u, 943u, 965u, 981u, 988u, 1002u, 1022u,
};
void recomp_unit_0150_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
// PSPRECOMP_AOT_REGCACHE_BEGIN
// PSPRECOMP_AOT_REGCACHE_META gprs=4,31,5,23,29,2 fprs=12,13,20,0 gpr_occ=3712 fpr_occ=1386 gpr_total=4862 fpr_total=1859
    std::uint32_t aot_gpr_4 = ctx.gpr[4];
    std::uint32_t aot_gpr_31 = ctx.gpr[31];
    std::uint32_t aot_gpr_5 = ctx.gpr[5];
    std::uint32_t aot_gpr_23 = ctx.gpr[23];
    std::uint32_t aot_gpr_29 = ctx.gpr[29];
    std::uint32_t aot_gpr_2 = ctx.gpr[2];
    float aot_fpr_12 = ctx.fpr[12];
    float aot_fpr_13 = ctx.fpr[13];
    float aot_fpr_20 = ctx.fpr[20];
    float aot_fpr_0 = ctx.fpr[0];
    bool aot_regcache_valid = true;
#define AOT_REGCACHE_SYNC_OUT() do { if (aot_regcache_valid) { ctx.gpr[4] = aot_gpr_4; ctx.gpr[31] = aot_gpr_31; ctx.gpr[5] = aot_gpr_5; ctx.gpr[23] = aot_gpr_23; ctx.gpr[29] = aot_gpr_29; ctx.gpr[2] = aot_gpr_2; ctx.fpr[12] = aot_fpr_12; ctx.fpr[13] = aot_fpr_13; ctx.fpr[20] = aot_fpr_20; ctx.fpr[0] = aot_fpr_0; } } while (false)
#define AOT_REGCACHE_SYNC_IN() do { if (aot_regcache_valid) { aot_gpr_4 = ctx.gpr[4]; aot_gpr_31 = ctx.gpr[31]; aot_gpr_5 = ctx.gpr[5]; aot_gpr_23 = ctx.gpr[23]; aot_gpr_29 = ctx.gpr[29]; aot_gpr_2 = ctx.gpr[2]; aot_fpr_12 = ctx.fpr[12]; aot_fpr_13 = ctx.fpr[13]; aot_fpr_20 = ctx.fpr[20]; aot_fpr_0 = ctx.fpr[0]; } } while (false)
// PSPRECOMP_AOT_REGCACHE_END
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_redispatch_rounds = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08A5C004u;
        entry_id = 0u;
        if (entry_delta < 16376u && (entry_delta & 3u) == 0u) {
            const std::uint32_t entry_slot = entry_delta >> 2u;
            const std::uint32_t entry_group = entry_slot >> 6u;
            const std::uint64_t entry_mask = kEntryMasks_recomp_unit_0150[entry_group];
            const std::uint64_t entry_bit = 1ull << (entry_slot & 63u);
            if ((entry_mask & entry_bit) != 0u) {
                entry_id = static_cast<std::uint16_t>(
                    kEntryBases_recomp_unit_0150[entry_group] +
                    std::popcount(entry_mask & (entry_bit - 1ull)));
            }
        }
    }
    switch (entry_id) {
    case 1u: goto L_08A5C004;
    case 2u: goto L_08A5C030;
    case 3u: goto L_08A5C038;
    case 4u: goto L_08A5C040;
    case 5u: goto L_08A5C048;
    case 6u: goto L_08A5C068;
    case 7u: goto L_08A5C074;
    case 8u: goto L_08A5C084;
    case 9u: goto L_08A5C090;
    case 10u: goto L_08A5C098;
    case 11u: goto L_08A5C0A4;
    case 12u: goto L_08A5C0AC;
    case 13u: goto L_08A5C0B8;
    case 14u: goto L_08A5C0C0;
    case 15u: goto L_08A5C0C8;
    case 16u: goto L_08A5C0E4;
    case 17u: goto L_08A5C0F4;
    case 18u: goto L_08A5C100;
    case 19u: goto L_08A5C108;
    case 20u: goto L_08A5C114;
    case 21u: goto L_08A5C120;
    case 22u: goto L_08A5C12C;
    case 23u: goto L_08A5C134;
    case 24u: goto L_08A5C140;
    case 25u: goto L_08A5C148;
    case 26u: goto L_08A5C150;
    case 27u: goto L_08A5C160;
    case 28u: goto L_08A5C16C;
    case 29u: goto L_08A5C170;
    case 30u: goto L_08A5C17C;
    case 31u: goto L_08A5C184;
    case 32u: goto L_08A5C188;
    case 33u: goto L_08A5C1B0;
    case 34u: goto L_08A5C1BC;
    case 35u: goto L_08A5C1CC;
    case 36u: goto L_08A5C1D8;
    case 37u: goto L_08A5C1E0;
    case 38u: goto L_08A5C1E8;
    case 39u: goto L_08A5C1F0;
    case 40u: goto L_08A5C20C;
    case 41u: goto L_08A5C21C;
    case 42u: goto L_08A5C228;
    case 43u: goto L_08A5C230;
    case 44u: goto L_08A5C23C;
    case 45u: goto L_08A5C248;
    case 46u: goto L_08A5C254;
    case 47u: goto L_08A5C260;
    case 48u: goto L_08A5C27C;
    case 49u: goto L_08A5C290;
    case 50u: goto L_08A5C29C;
    case 51u: goto L_08A5C2A8;
    case 52u: goto L_08A5C2B4;
    case 53u: goto L_08A5C2DC;
    case 54u: goto L_08A5C2E4;
    case 55u: goto L_08A5C2F4;
    case 56u: goto L_08A5C2FC;
    case 57u: goto L_08A5C304;
    case 58u: goto L_08A5C320;
    case 59u: goto L_08A5C328;
    case 60u: goto L_08A5C330;
    case 61u: goto L_08A5C348;
    case 62u: goto L_08A5C354;
    case 63u: goto L_08A5C35C;
    case 64u: goto L_08A5C36C;
    case 65u: goto L_08A5C37C;
    case 66u: goto L_08A5C390;
    case 67u: goto L_08A5C3A0;
    case 68u: goto L_08A5C3A8;
    case 69u: goto L_08A5C3C0;
    case 70u: goto L_08A5C3D4;
    case 71u: goto L_08A5C3E8;
    case 72u: goto L_08A5C3FC;
    case 73u: goto L_08A5C410;
    case 74u: goto L_08A5C418;
    case 75u: goto L_08A5C42C;
    case 76u: goto L_08A5C44C;
    case 77u: goto L_08A5C458;
    case 78u: goto L_08A5C474;
    case 79u: goto L_08A5C484;
    case 80u: goto L_08A5C490;
    case 81u: goto L_08A5C4A4;
    case 82u: goto L_08A5C4B8;
    case 83u: goto L_08A5C4C4;
    case 84u: goto L_08A5C4D8;
    case 85u: goto L_08A5C4FC;
    case 86u: goto L_08A5C508;
    case 87u: goto L_08A5C528;
    case 88u: goto L_08A5C544;
    case 89u: goto L_08A5C548;
    case 90u: goto L_08A5C590;
    case 91u: goto L_08A5C59C;
    case 92u: goto L_08A5C5A8;
    case 93u: goto L_08A5C5B4;
    case 94u: goto L_08A5C5E8;
    case 95u: goto L_08A5C5F8;
    case 96u: goto L_08A5C608;
    case 97u: goto L_08A5C618;
    case 98u: goto L_08A5C624;
    case 99u: goto L_08A5C630;
    case 100u: goto L_08A5C644;
    case 101u: goto L_08A5C654;
    case 102u: goto L_08A5C664;
    case 103u: goto L_08A5C66C;
    case 104u: goto L_08A5C67C;
    case 105u: goto L_08A5C68C;
    case 106u: goto L_08A5C698;
    case 107u: goto L_08A5C6A0;
    case 108u: goto L_08A5C6B4;
    case 109u: goto L_08A5C6C4;
    case 110u: goto L_08A5C6D0;
    case 111u: goto L_08A5C6E0;
    case 112u: goto L_08A5C6E8;
    case 113u: goto L_08A5C6F0;
    case 114u: goto L_08A5C6F8;
    case 115u: goto L_08A5C704;
    case 116u: goto L_08A5C70C;
    case 117u: goto L_08A5C714;
    case 118u: goto L_08A5C724;
    case 119u: goto L_08A5C738;
    case 120u: goto L_08A5C744;
    case 121u: goto L_08A5C74C;
    case 122u: goto L_08A5C754;
    case 123u: goto L_08A5C760;
    case 124u: goto L_08A5C768;
    case 125u: goto L_08A5C774;
    case 126u: goto L_08A5C778;
    case 127u: goto L_08A5C784;
    case 128u: goto L_08A5C79C;
    case 129u: goto L_08A5C7A4;
    case 130u: goto L_08A5C7B8;
    case 131u: goto L_08A5C7C0;
    case 132u: goto L_08A5C7D4;
    case 133u: goto L_08A5C7DC;
    case 134u: goto L_08A5C7F0;
    case 135u: goto L_08A5C80C;
    case 136u: goto L_08A5C810;
    case 137u: goto L_08A5C818;
    case 138u: goto L_08A5C824;
    case 139u: goto L_08A5C84C;
    case 140u: goto L_08A5C86C;
    case 141u: goto L_08A5C880;
    case 142u: goto L_08A5C894;
    case 143u: goto L_08A5C8B0;
    case 144u: goto L_08A5C8BC;
    case 145u: goto L_08A5C8CC;
    case 146u: goto L_08A5C8DC;
    case 147u: goto L_08A5C8E8;
    case 148u: goto L_08A5C8F0;
    case 149u: goto L_08A5C8F8;
    case 150u: goto L_08A5C900;
    case 151u: goto L_08A5C914;
    case 152u: goto L_08A5C91C;
    case 153u: goto L_08A5C924;
    case 154u: goto L_08A5C92C;
    case 155u: goto L_08A5C93C;
    case 156u: goto L_08A5C944;
    case 157u: goto L_08A5C954;
    case 158u: goto L_08A5C95C;
    case 159u: goto L_08A5C978;
    case 160u: goto L_08A5C980;
    case 161u: goto L_08A5C988;
    case 162u: goto L_08A5C994;
    case 163u: goto L_08A5C9A0;
    case 164u: goto L_08A5C9A8;
    case 165u: goto L_08A5C9B0;
    case 166u: goto L_08A5C9C0;
    case 167u: goto L_08A5C9C8;
    case 168u: goto L_08A5C9E0;
    case 169u: goto L_08A5C9F4;
    case 170u: goto L_08A5CA00;
    case 171u: goto L_08A5CA08;
    case 172u: goto L_08A5CA0C;
    case 173u: goto L_08A5CA14;
    case 174u: goto L_08A5CA20;
    case 175u: goto L_08A5CA38;
    case 176u: goto L_08A5CA40;
    case 177u: goto L_08A5CA48;
    case 178u: goto L_08A5CA58;
    case 179u: goto L_08A5CA60;
    case 180u: goto L_08A5CA6C;
    case 181u: goto L_08A5CA74;
    case 182u: goto L_08A5CA9C;
    case 183u: goto L_08A5CAA4;
    case 184u: goto L_08A5CAD4;
    case 185u: goto L_08A5CADC;
    case 186u: goto L_08A5CAE4;
    case 187u: goto L_08A5CAF4;
    case 188u: goto L_08A5CB04;
    case 189u: goto L_08A5CB08;
    case 190u: goto L_08A5CB14;
    case 191u: goto L_08A5CB1C;
    case 192u: goto L_08A5CB28;
    case 193u: goto L_08A5CB34;
    case 194u: goto L_08A5CB40;
    case 195u: goto L_08A5CB4C;
    case 196u: goto L_08A5CB54;
    case 197u: goto L_08A5CB88;
    case 198u: goto L_08A5CBA4;
    case 199u: goto L_08A5CBB0;
    case 200u: goto L_08A5CBC8;
    case 201u: goto L_08A5CBD4;
    case 202u: goto L_08A5CBE4;
    case 203u: goto L_08A5CC00;
    case 204u: goto L_08A5CC08;
    case 205u: goto L_08A5CC20;
    case 206u: goto L_08A5CC30;
    case 207u: goto L_08A5CC40;
    case 208u: goto L_08A5CC4C;
    case 209u: goto L_08A5CC70;
    case 210u: goto L_08A5CC7C;
    case 211u: goto L_08A5CC8C;
    case 212u: goto L_08A5CCA0;
    case 213u: goto L_08A5CCC0;
    case 214u: goto L_08A5CCD0;
    case 215u: goto L_08A5CD08;
    case 216u: goto L_08A5CD18;
    case 217u: goto L_08A5CD24;
    case 218u: goto L_08A5CD30;
    case 219u: goto L_08A5CD3C;
    case 220u: goto L_08A5CD48;
    case 221u: goto L_08A5CD54;
    case 222u: goto L_08A5CD8C;
    case 223u: goto L_08A5CDA4;
    case 224u: goto L_08A5CDA8;
    case 225u: goto L_08A5CDB0;
    case 226u: goto L_08A5CDB8;
    case 227u: goto L_08A5CDC4;
    case 228u: goto L_08A5CDD0;
    case 229u: goto L_08A5CDE8;
    case 230u: goto L_08A5CE00;
    case 231u: goto L_08A5CE08;
    case 232u: goto L_08A5CE14;
    case 233u: goto L_08A5CE20;
    case 234u: goto L_08A5CE2C;
    case 235u: goto L_08A5CE34;
    case 236u: goto L_08A5CE44;
    case 237u: goto L_08A5CE54;
    case 238u: goto L_08A5CE5C;
    case 239u: goto L_08A5CE70;
    case 240u: goto L_08A5CE90;
    case 241u: goto L_08A5CE98;
    case 242u: goto L_08A5CEB4;
    case 243u: goto L_08A5CED4;
    case 244u: goto L_08A5CEDC;
    case 245u: goto L_08A5CEF4;
    case 246u: goto L_08A5CF00;
    case 247u: goto L_08A5CF08;
    case 248u: goto L_08A5CF10;
    case 249u: goto L_08A5CF18;
    case 250u: goto L_08A5CF20;
    case 251u: goto L_08A5CF2C;
    case 252u: goto L_08A5CF38;
    case 253u: goto L_08A5CF40;
    case 254u: goto L_08A5CF58;
    case 255u: goto L_08A5CF60;
    case 256u: goto L_08A5CF7C;
    case 257u: goto L_08A5CF84;
    case 258u: goto L_08A5CFA0;
    case 259u: goto L_08A5CFBC;
    case 260u: goto L_08A5CFCC;
    case 261u: goto L_08A5CFD4;
    case 262u: goto L_08A5CFE0;
    case 263u: goto L_08A5CFEC;
    case 264u: goto L_08A5D004;
    case 265u: goto L_08A5D00C;
    case 266u: goto L_08A5D030;
    case 267u: goto L_08A5D040;
    case 268u: goto L_08A5D04C;
    case 269u: goto L_08A5D058;
    case 270u: goto L_08A5D060;
    case 271u: goto L_08A5D06C;
    case 272u: goto L_08A5D07C;
    case 273u: goto L_08A5D0B0;
    case 274u: goto L_08A5D0D0;
    case 275u: goto L_08A5D0DC;
    case 276u: goto L_08A5D0E8;
    case 277u: goto L_08A5D0F0;
    case 278u: goto L_08A5D12C;
    case 279u: goto L_08A5D150;
    case 280u: goto L_08A5D15C;
    case 281u: goto L_08A5D16C;
    case 282u: goto L_08A5D174;
    case 283u: goto L_08A5D17C;
    case 284u: goto L_08A5D188;
    case 285u: goto L_08A5D194;
    case 286u: goto L_08A5D19C;
    case 287u: goto L_08A5D1A0;
    case 288u: goto L_08A5D1A8;
    case 289u: goto L_08A5D1DC;
    case 290u: goto L_08A5D1E4;
    case 291u: goto L_08A5D1FC;
    case 292u: goto L_08A5D218;
    case 293u: goto L_08A5D228;
    case 294u: goto L_08A5D234;
    case 295u: goto L_08A5D244;
    case 296u: goto L_08A5D250;
    case 297u: goto L_08A5D264;
    case 298u: goto L_08A5D274;
    case 299u: goto L_08A5D284;
    case 300u: goto L_08A5D294;
    case 301u: goto L_08A5D2A0;
    case 302u: goto L_08A5D2A8;
    case 303u: goto L_08A5D2B0;
    case 304u: goto L_08A5D2C4;
    case 305u: goto L_08A5D2F8;
    case 306u: goto L_08A5D310;
    case 307u: goto L_08A5D318;
    case 308u: goto L_08A5D320;
    case 309u: goto L_08A5D32C;
    case 310u: goto L_08A5D330;
    case 311u: goto L_08A5D338;
    case 312u: goto L_08A5D34C;
    case 313u: goto L_08A5D35C;
    case 314u: goto L_08A5D36C;
    case 315u: goto L_08A5D390;
    case 316u: goto L_08A5D39C;
    case 317u: goto L_08A5D3A4;
    case 318u: goto L_08A5D3C4;
    case 319u: goto L_08A5D3CC;
    case 320u: goto L_08A5D3E0;
    case 321u: goto L_08A5D3EC;
    case 322u: goto L_08A5D404;
    case 323u: goto L_08A5D410;
    case 324u: goto L_08A5D41C;
    case 325u: goto L_08A5D424;
    case 326u: goto L_08A5D42C;
    case 327u: goto L_08A5D438;
    case 328u: goto L_08A5D440;
    case 329u: goto L_08A5D444;
    case 330u: goto L_08A5D44C;
    case 331u: goto L_08A5D458;
    case 332u: goto L_08A5D468;
    case 333u: goto L_08A5D474;
    case 334u: goto L_08A5D494;
    case 335u: goto L_08A5D4A0;
    case 336u: goto L_08A5D4BC;
    case 337u: goto L_08A5D4C8;
    case 338u: goto L_08A5D4DC;
    case 339u: goto L_08A5D4F0;
    case 340u: goto L_08A5D4FC;
    case 341u: goto L_08A5D500;
    case 342u: goto L_08A5D514;
    case 343u: goto L_08A5D52C;
    case 344u: goto L_08A5D544;
    case 345u: goto L_08A5D55C;
    case 346u: goto L_08A5D564;
    case 347u: goto L_08A5D570;
    case 348u: goto L_08A5D57C;
    case 349u: goto L_08A5D584;
    case 350u: goto L_08A5D58C;
    case 351u: goto L_08A5D598;
    case 352u: goto L_08A5D5A4;
    case 353u: goto L_08A5D5B8;
    case 354u: goto L_08A5D5C8;
    case 355u: goto L_08A5D5D4;
    case 356u: goto L_08A5D5EC;
    case 357u: goto L_08A5D5F4;
    case 358u: goto L_08A5D600;
    case 359u: goto L_08A5D60C;
    case 360u: goto L_08A5D614;
    case 361u: goto L_08A5D61C;
    case 362u: goto L_08A5D628;
    case 363u: goto L_08A5D634;
    case 364u: goto L_08A5D648;
    case 365u: goto L_08A5D658;
    case 366u: goto L_08A5D664;
    case 367u: goto L_08A5D67C;
    case 368u: goto L_08A5D694;
    case 369u: goto L_08A5D6AC;
    case 370u: goto L_08A5D6B4;
    case 371u: goto L_08A5D6C0;
    case 372u: goto L_08A5D6CC;
    case 373u: goto L_08A5D6D4;
    case 374u: goto L_08A5D6DC;
    case 375u: goto L_08A5D6E8;
    case 376u: goto L_08A5D6F4;
    case 377u: goto L_08A5D708;
    case 378u: goto L_08A5D718;
    case 379u: goto L_08A5D724;
    case 380u: goto L_08A5D73C;
    case 381u: goto L_08A5D744;
    case 382u: goto L_08A5D750;
    case 383u: goto L_08A5D75C;
    case 384u: goto L_08A5D764;
    case 385u: goto L_08A5D76C;
    case 386u: goto L_08A5D778;
    case 387u: goto L_08A5D784;
    case 388u: goto L_08A5D798;
    case 389u: goto L_08A5D7A8;
    case 390u: goto L_08A5D7B4;
    case 391u: goto L_08A5D7CC;
    case 392u: goto L_08A5D7D4;
    case 393u: goto L_08A5D7E4;
    case 394u: goto L_08A5D7E8;
    case 395u: goto L_08A5D808;
    case 396u: goto L_08A5D810;
    case 397u: goto L_08A5D838;
    case 398u: goto L_08A5D84C;
    case 399u: goto L_08A5D868;
    case 400u: goto L_08A5D878;
    case 401u: goto L_08A5D884;
    case 402u: goto L_08A5D890;
    case 403u: goto L_08A5D8A0;
    case 404u: goto L_08A5D8AC;
    case 405u: goto L_08A5D8B0;
    case 406u: goto L_08A5D8CC;
    case 407u: goto L_08A5D8D4;
    case 408u: goto L_08A5D8E0;
    case 409u: goto L_08A5D8EC;
    case 410u: goto L_08A5D924;
    case 411u: goto L_08A5D934;
    case 412u: goto L_08A5D940;
    case 413u: goto L_08A5D95C;
    case 414u: goto L_08A5D964;
    case 415u: goto L_08A5D96C;
    case 416u: goto L_08A5D978;
    case 417u: goto L_08A5D984;
    case 418u: goto L_08A5D98C;
    case 419u: goto L_08A5D990;
    case 420u: goto L_08A5D99C;
    case 421u: goto L_08A5D9A8;
    case 422u: goto L_08A5D9B0;
    case 423u: goto L_08A5D9C8;
    case 424u: goto L_08A5D9D0;
    case 425u: goto L_08A5D9D8;
    case 426u: goto L_08A5D9E0;
    case 427u: goto L_08A5D9F0;
    case 428u: goto L_08A5D9F8;
    case 429u: goto L_08A5DA00;
    case 430u: goto L_08A5DA08;
    case 431u: goto L_08A5DA14;
    case 432u: goto L_08A5DA1C;
    case 433u: goto L_08A5DA24;
    case 434u: goto L_08A5DA30;
    case 435u: goto L_08A5DA48;
    case 436u: goto L_08A5DA5C;
    case 437u: goto L_08A5DA64;
    case 438u: goto L_08A5DA74;
    case 439u: goto L_08A5DA7C;
    case 440u: goto L_08A5DA9C;
    case 441u: goto L_08A5DAB4;
    case 442u: goto L_08A5DABC;
    case 443u: goto L_08A5DAC4;
    case 444u: goto L_08A5DAE0;
    case 445u: goto L_08A5DAE4;
    case 446u: goto L_08A5DAF8;
    case 447u: goto L_08A5DB08;
    case 448u: goto L_08A5DB14;
    case 449u: goto L_08A5DB1C;
    case 450u: goto L_08A5DB2C;
    case 451u: goto L_08A5DB34;
    case 452u: goto L_08A5DB40;
    case 453u: goto L_08A5DB4C;
    case 454u: goto L_08A5DB54;
    case 455u: goto L_08A5DB5C;
    case 456u: goto L_08A5DB68;
    case 457u: goto L_08A5DB74;
    case 458u: goto L_08A5DB88;
    case 459u: goto L_08A5DB94;
    case 460u: goto L_08A5DBB0;
    case 461u: goto L_08A5DBC0;
    case 462u: goto L_08A5DBC8;
    case 463u: goto L_08A5DBD4;
    case 464u: goto L_08A5DBEC;
    case 465u: goto L_08A5DBFC;
    case 466u: goto L_08A5DC04;
    case 467u: goto L_08A5DC1C;
    case 468u: goto L_08A5DC28;
    case 469u: goto L_08A5DC40;
    case 470u: goto L_08A5DC50;
    case 471u: goto L_08A5DC58;
    case 472u: goto L_08A5DC74;
    case 473u: goto L_08A5DC88;
    case 474u: goto L_08A5DCBC;
    case 475u: goto L_08A5DCC8;
    case 476u: goto L_08A5DCE0;
    case 477u: goto L_08A5DCEC;
    case 478u: goto L_08A5DCF0;
    case 479u: goto L_08A5DD08;
    case 480u: goto L_08A5DD1C;
    case 481u: goto L_08A5DD48;
    case 482u: goto L_08A5DD54;
    case 483u: goto L_08A5DD5C;
    case 484u: goto L_08A5DD88;
    case 485u: goto L_08A5DD90;
    case 486u: goto L_08A5DDA0;
    case 487u: goto L_08A5DDB0;
    case 488u: goto L_08A5DDD0;
    case 489u: goto L_08A5DDDC;
    case 490u: goto L_08A5DDF8;
    case 491u: goto L_08A5DE00;
    case 492u: goto L_08A5DE08;
    case 493u: goto L_08A5DE24;
    case 494u: goto L_08A5DE2C;
    case 495u: goto L_08A5DE34;
    case 496u: goto L_08A5DE44;
    case 497u: goto L_08A5DE5C;
    case 498u: goto L_08A5DE70;
    case 499u: goto L_08A5DE7C;
    case 500u: goto L_08A5DE8C;
    case 501u: goto L_08A5DEA4;
    case 502u: goto L_08A5DEBC;
    case 503u: goto L_08A5DED0;
    case 504u: goto L_08A5DED4;
    case 505u: goto L_08A5DEDC;
    case 506u: goto L_08A5DEE4;
    case 507u: goto L_08A5DEF8;
    case 508u: goto L_08A5DF04;
    case 509u: goto L_08A5DF0C;
    case 510u: goto L_08A5DF30;
    case 511u: goto L_08A5DF38;
    case 512u: goto L_08A5DF44;
    case 513u: goto L_08A5DF4C;
    case 514u: goto L_08A5DF54;
    case 515u: goto L_08A5DF60;
    case 516u: goto L_08A5DF70;
    case 517u: goto L_08A5DF94;
    case 518u: goto L_08A5DFA0;
    case 519u: goto L_08A5DFAC;
    case 520u: goto L_08A5DFE4;
    case 521u: goto L_08A5DFFC;
    case 522u: goto L_08A5E014;
    case 523u: goto L_08A5E028;
    case 524u: goto L_08A5E03C;
    case 525u: goto L_08A5E054;
    case 526u: goto L_08A5E05C;
    case 527u: goto L_08A5E068;
    case 528u: goto L_08A5E070;
    case 529u: goto L_08A5E078;
    case 530u: goto L_08A5E088;
    case 531u: goto L_08A5E094;
    case 532u: goto L_08A5E09C;
    case 533u: goto L_08A5E0A8;
    case 534u: goto L_08A5E0B0;
    case 535u: goto L_08A5E0C8;
    case 536u: goto L_08A5E0DC;
    case 537u: goto L_08A5E0F0;
    case 538u: goto L_08A5E138;
    case 539u: goto L_08A5E14C;
    case 540u: goto L_08A5E154;
    case 541u: goto L_08A5E164;
    case 542u: goto L_08A5E170;
    case 543u: goto L_08A5E188;
    case 544u: goto L_08A5E19C;
    case 545u: goto L_08A5E1A8;
    case 546u: goto L_08A5E1B4;
    case 547u: goto L_08A5E1C0;
    case 548u: goto L_08A5E1CC;
    case 549u: goto L_08A5E1D8;
    case 550u: goto L_08A5E1E4;
    case 551u: goto L_08A5E1F4;
    case 552u: goto L_08A5E200;
    case 553u: goto L_08A5E208;
    case 554u: goto L_08A5E210;
    case 555u: goto L_08A5E21C;
    case 556u: goto L_08A5E22C;
    case 557u: goto L_08A5E238;
    case 558u: goto L_08A5E240;
    case 559u: goto L_08A5E250;
    case 560u: goto L_08A5E258;
    case 561u: goto L_08A5E278;
    case 562u: goto L_08A5E280;
    case 563u: goto L_08A5E288;
    case 564u: goto L_08A5E294;
    case 565u: goto L_08A5E29C;
    case 566u: goto L_08A5E2A8;
    case 567u: goto L_08A5E2B8;
    case 568u: goto L_08A5E2C0;
    case 569u: goto L_08A5E2CC;
    case 570u: goto L_08A5E2D4;
    case 571u: goto L_08A5E2DC;
    case 572u: goto L_08A5E2E4;
    case 573u: goto L_08A5E2EC;
    case 574u: goto L_08A5E2F0;
    case 575u: goto L_08A5E300;
    case 576u: goto L_08A5E308;
    case 577u: goto L_08A5E31C;
    case 578u: goto L_08A5E328;
    case 579u: goto L_08A5E32C;
    case 580u: goto L_08A5E348;
    case 581u: goto L_08A5E354;
    case 582u: goto L_08A5E398;
    case 583u: goto L_08A5E3A4;
    case 584u: goto L_08A5E3B0;
    case 585u: goto L_08A5E3C0;
    case 586u: goto L_08A5E3CC;
    case 587u: goto L_08A5E3D4;
    case 588u: goto L_08A5E3E0;
    case 589u: goto L_08A5E400;
    case 590u: goto L_08A5E414;
    case 591u: goto L_08A5E428;
    case 592u: goto L_08A5E438;
    case 593u: goto L_08A5E444;
    case 594u: goto L_08A5E450;
    case 595u: goto L_08A5E45C;
    case 596u: goto L_08A5E474;
    case 597u: goto L_08A5E480;
    case 598u: goto L_08A5E48C;
    case 599u: goto L_08A5E49C;
    case 600u: goto L_08A5E4A8;
    case 601u: goto L_08A5E4B8;
    case 602u: goto L_08A5E4C4;
    case 603u: goto L_08A5E4CC;
    case 604u: goto L_08A5E4D4;
    case 605u: goto L_08A5E4E0;
    case 606u: goto L_08A5E4F0;
    case 607u: goto L_08A5E4FC;
    case 608u: goto L_08A5E504;
    case 609u: goto L_08A5E50C;
    case 610u: goto L_08A5E514;
    case 611u: goto L_08A5E51C;
    case 612u: goto L_08A5E524;
    case 613u: goto L_08A5E52C;
    case 614u: goto L_08A5E534;
    case 615u: goto L_08A5E53C;
    case 616u: goto L_08A5E548;
    case 617u: goto L_08A5E550;
    case 618u: goto L_08A5E558;
    case 619u: goto L_08A5E560;
    case 620u: goto L_08A5E57C;
    case 621u: goto L_08A5E59C;
    case 622u: goto L_08A5E5A8;
    case 623u: goto L_08A5E5B4;
    case 624u: goto L_08A5E5C0;
    case 625u: goto L_08A5E5C8;
    case 626u: goto L_08A5E5D4;
    case 627u: goto L_08A5E5FC;
    case 628u: goto L_08A5E60C;
    case 629u: goto L_08A5E61C;
    case 630u: goto L_08A5E624;
    case 631u: goto L_08A5E644;
    case 632u: goto L_08A5E660;
    case 633u: goto L_08A5E698;
    case 634u: goto L_08A5E6A8;
    case 635u: goto L_08A5E6B8;
    case 636u: goto L_08A5E6D0;
    case 637u: goto L_08A5E6E4;
    case 638u: goto L_08A5E6E8;
    case 639u: goto L_08A5E6FC;
    case 640u: goto L_08A5E704;
    case 641u: goto L_08A5E720;
    case 642u: goto L_08A5E728;
    case 643u: goto L_08A5E730;
    case 644u: goto L_08A5E73C;
    case 645u: goto L_08A5E744;
    case 646u: goto L_08A5E750;
    case 647u: goto L_08A5E760;
    case 648u: goto L_08A5E768;
    case 649u: goto L_08A5E774;
    case 650u: goto L_08A5E77C;
    case 651u: goto L_08A5E784;
    case 652u: goto L_08A5E78C;
    case 653u: goto L_08A5E794;
    case 654u: goto L_08A5E798;
    case 655u: goto L_08A5E7A8;
    case 656u: goto L_08A5E7B0;
    case 657u: goto L_08A5E7C4;
    case 658u: goto L_08A5E7D0;
    case 659u: goto L_08A5E7D4;
    case 660u: goto L_08A5E7F0;
    case 661u: goto L_08A5E7FC;
    case 662u: goto L_08A5E848;
    case 663u: goto L_08A5E854;
    case 664u: goto L_08A5E860;
    case 665u: goto L_08A5E86C;
    case 666u: goto L_08A5E878;
    case 667u: goto L_08A5E880;
    case 668u: goto L_08A5E888;
    case 669u: goto L_08A5E890;
    case 670u: goto L_08A5E898;
    case 671u: goto L_08A5E8A4;
    case 672u: goto L_08A5E8B4;
    case 673u: goto L_08A5E8C4;
    case 674u: goto L_08A5E8E0;
    case 675u: goto L_08A5E8F8;
    case 676u: goto L_08A5E914;
    case 677u: goto L_08A5E928;
    case 678u: goto L_08A5E938;
    case 679u: goto L_08A5E944;
    case 680u: goto L_08A5E954;
    case 681u: goto L_08A5E95C;
    case 682u: goto L_08A5E980;
    case 683u: goto L_08A5E988;
    case 684u: goto L_08A5E9A4;
    case 685u: goto L_08A5E9AC;
    case 686u: goto L_08A5E9C4;
    case 687u: goto L_08A5E9D0;
    case 688u: goto L_08A5E9E4;
    case 689u: goto L_08A5E9F8;
    case 690u: goto L_08A5EA3C;
    case 691u: goto L_08A5EA50;
    case 692u: goto L_08A5EA54;
    case 693u: goto L_08A5EA60;
    case 694u: goto L_08A5EA6C;
    case 695u: goto L_08A5EA80;
    case 696u: goto L_08A5EA94;
    case 697u: goto L_08A5EAA0;
    case 698u: goto L_08A5EAAC;
    case 699u: goto L_08A5EAB8;
    case 700u: goto L_08A5EAC4;
    case 701u: goto L_08A5EAD0;
    case 702u: goto L_08A5EADC;
    case 703u: goto L_08A5EAEC;
    case 704u: goto L_08A5EAF8;
    case 705u: goto L_08A5EB00;
    case 706u: goto L_08A5EB08;
    case 707u: goto L_08A5EB14;
    case 708u: goto L_08A5EB24;
    case 709u: goto L_08A5EB30;
    case 710u: goto L_08A5EB38;
    case 711u: goto L_08A5EB48;
    case 712u: goto L_08A5EB50;
    case 713u: goto L_08A5EB70;
    case 714u: goto L_08A5EB78;
    case 715u: goto L_08A5EB80;
    case 716u: goto L_08A5EB8C;
    case 717u: goto L_08A5EB94;
    case 718u: goto L_08A5EBA0;
    case 719u: goto L_08A5EBB0;
    case 720u: goto L_08A5EBB8;
    case 721u: goto L_08A5EBC4;
    case 722u: goto L_08A5EBCC;
    case 723u: goto L_08A5EBD4;
    case 724u: goto L_08A5EBDC;
    case 725u: goto L_08A5EBE4;
    case 726u: goto L_08A5EBE8;
    case 727u: goto L_08A5EBF8;
    case 728u: goto L_08A5EC00;
    case 729u: goto L_08A5EC14;
    case 730u: goto L_08A5EC20;
    case 731u: goto L_08A5EC24;
    case 732u: goto L_08A5EC40;
    case 733u: goto L_08A5EC4C;
    case 734u: goto L_08A5EC90;
    case 735u: goto L_08A5EC9C;
    case 736u: goto L_08A5ECA8;
    case 737u: goto L_08A5ECB8;
    case 738u: goto L_08A5ECC4;
    case 739u: goto L_08A5ECC8;
    case 740u: goto L_08A5ECD0;
    case 741u: goto L_08A5ECF0;
    case 742u: goto L_08A5ED00;
    case 743u: goto L_08A5ED18;
    case 744u: goto L_08A5ED20;
    case 745u: goto L_08A5ED2C;
    case 746u: goto L_08A5ED38;
    case 747u: goto L_08A5ED3C;
    case 748u: goto L_08A5ED44;
    case 749u: goto L_08A5ED4C;
    case 750u: goto L_08A5ED5C;
    case 751u: goto L_08A5ED68;
    case 752u: goto L_08A5ED78;
    case 753u: goto L_08A5ED8C;
    case 754u: goto L_08A5ED9C;
    case 755u: goto L_08A5EDA8;
    case 756u: goto L_08A5EDB0;
    case 757u: goto L_08A5EDC4;
    case 758u: goto L_08A5EDCC;
    case 759u: goto L_08A5EDDC;
    case 760u: goto L_08A5EE18;
    case 761u: goto L_08A5EE28;
    case 762u: goto L_08A5EE38;
    case 763u: goto L_08A5EE44;
    case 764u: goto L_08A5EE50;
    case 765u: goto L_08A5EE54;
    case 766u: goto L_08A5EE64;
    case 767u: goto L_08A5EE74;
    case 768u: goto L_08A5EE8C;
    case 769u: goto L_08A5EE94;
    case 770u: goto L_08A5EEA8;
    case 771u: goto L_08A5EEC4;
    case 772u: goto L_08A5EED8;
    case 773u: goto L_08A5EEE0;
    case 774u: goto L_08A5EEEC;
    case 775u: goto L_08A5EF00;
    case 776u: goto L_08A5EF0C;
    case 777u: goto L_08A5EF14;
    case 778u: goto L_08A5EF24;
    case 779u: goto L_08A5EF38;
    case 780u: goto L_08A5EF4C;
    case 781u: goto L_08A5EF54;
    case 782u: goto L_08A5EF64;
    case 783u: goto L_08A5EF78;
    case 784u: goto L_08A5EF84;
    case 785u: goto L_08A5EF8C;
    case 786u: goto L_08A5EFA4;
    case 787u: goto L_08A5EFB0;
    case 788u: goto L_08A5EFCC;
    case 789u: goto L_08A5EFD8;
    case 790u: goto L_08A5EFE4;
    case 791u: goto L_08A5EFF0;
    case 792u: goto L_08A5F004;
    case 793u: goto L_08A5F018;
    case 794u: goto L_08A5F028;
    case 795u: goto L_08A5F038;
    case 796u: goto L_08A5F044;
    case 797u: goto L_08A5F058;
    case 798u: goto L_08A5F060;
    case 799u: goto L_08A5F084;
    case 800u: goto L_08A5F094;
    case 801u: goto L_08A5F0A0;
    case 802u: goto L_08A5F0AC;
    case 803u: goto L_08A5F0D0;
    case 804u: goto L_08A5F0E8;
    case 805u: goto L_08A5F110;
    case 806u: goto L_08A5F12C;
    case 807u: goto L_08A5F134;
    case 808u: goto L_08A5F13C;
    case 809u: goto L_08A5F144;
    case 810u: goto L_08A5F154;
    case 811u: goto L_08A5F17C;
    case 812u: goto L_08A5F194;
    case 813u: goto L_08A5F1AC;
    case 814u: goto L_08A5F1BC;
    case 815u: goto L_08A5F1C8;
    case 816u: goto L_08A5F1EC;
    case 817u: goto L_08A5F1FC;
    case 818u: goto L_08A5F20C;
    case 819u: goto L_08A5F214;
    case 820u: goto L_08A5F22C;
    case 821u: goto L_08A5F23C;
    case 822u: goto L_08A5F248;
    case 823u: goto L_08A5F26C;
    case 824u: goto L_08A5F27C;
    case 825u: goto L_08A5F28C;
    case 826u: goto L_08A5F294;
    case 827u: goto L_08A5F298;
    case 828u: goto L_08A5F2A0;
    case 829u: goto L_08A5F2C8;
    case 830u: goto L_08A5F2D8;
    case 831u: goto L_08A5F314;
    case 832u: goto L_08A5F324;
    case 833u: goto L_08A5F344;
    case 834u: goto L_08A5F360;
    case 835u: goto L_08A5F374;
    case 836u: goto L_08A5F384;
    case 837u: goto L_08A5F388;
    case 838u: goto L_08A5F390;
    case 839u: goto L_08A5F398;
    case 840u: goto L_08A5F3A0;
    case 841u: goto L_08A5F3A8;
    case 842u: goto L_08A5F3C4;
    case 843u: goto L_08A5F3D4;
    case 844u: goto L_08A5F3E8;
    case 845u: goto L_08A5F3EC;
    case 846u: goto L_08A5F3F8;
    case 847u: goto L_08A5F408;
    case 848u: goto L_08A5F41C;
    case 849u: goto L_08A5F420;
    case 850u: goto L_08A5F42C;
    case 851u: goto L_08A5F43C;
    case 852u: goto L_08A5F450;
    case 853u: goto L_08A5F460;
    case 854u: goto L_08A5F468;
    case 855u: goto L_08A5F478;
    case 856u: goto L_08A5F48C;
    case 857u: goto L_08A5F490;
    case 858u: goto L_08A5F49C;
    case 859u: goto L_08A5F4AC;
    case 860u: goto L_08A5F4C0;
    case 861u: goto L_08A5F4C4;
    case 862u: goto L_08A5F4D0;
    case 863u: goto L_08A5F4DC;
    case 864u: goto L_08A5F4E4;
    case 865u: goto L_08A5F4EC;
    case 866u: goto L_08A5F4F4;
    case 867u: goto L_08A5F504;
    case 868u: goto L_08A5F510;
    case 869u: goto L_08A5F51C;
    case 870u: goto L_08A5F524;
    case 871u: goto L_08A5F528;
    case 872u: goto L_08A5F530;
    case 873u: goto L_08A5F53C;
    case 874u: goto L_08A5F540;
    case 875u: goto L_08A5F548;
    case 876u: goto L_08A5F550;
    case 877u: goto L_08A5F558;
    case 878u: goto L_08A5F560;
    case 879u: goto L_08A5F57C;
    case 880u: goto L_08A5F584;
    case 881u: goto L_08A5F590;
    case 882u: goto L_08A5F598;
    case 883u: goto L_08A5F5A4;
    case 884u: goto L_08A5F5C4;
    case 885u: goto L_08A5F5E4;
    case 886u: goto L_08A5F5EC;
    case 887u: goto L_08A5F608;
    case 888u: goto L_08A5F618;
    case 889u: goto L_08A5F624;
    case 890u: goto L_08A5F62C;
    case 891u: goto L_08A5F650;
    case 892u: goto L_08A5F65C;
    case 893u: goto L_08A5F67C;
    case 894u: goto L_08A5F684;
    case 895u: goto L_08A5F698;
    case 896u: goto L_08A5F6A0;
    case 897u: goto L_08A5F6A8;
    case 898u: goto L_08A5F6B4;
    case 899u: goto L_08A5F6E0;
    case 900u: goto L_08A5F6EC;
    case 901u: goto L_08A5F6FC;
    case 902u: goto L_08A5F708;
    case 903u: goto L_08A5F714;
    case 904u: goto L_08A5F720;
    case 905u: goto L_08A5F730;
    case 906u: goto L_08A5F73C;
    case 907u: goto L_08A5F760;
    case 908u: goto L_08A5F764;
    case 909u: goto L_08A5F778;
    case 910u: goto L_08A5F784;
    case 911u: goto L_08A5F7AC;
    case 912u: goto L_08A5F7C0;
    case 913u: goto L_08A5F7E8;
    case 914u: goto L_08A5F80C;
    case 915u: goto L_08A5F824;
    case 916u: goto L_08A5F844;
    case 917u: goto L_08A5F864;
    case 918u: goto L_08A5F88C;
    case 919u: goto L_08A5F894;
    case 920u: goto L_08A5F8A0;
    case 921u: goto L_08A5F8AC;
    case 922u: goto L_08A5F8CC;
    case 923u: goto L_08A5F8EC;
    case 924u: goto L_08A5F8F4;
    case 925u: goto L_08A5F8F8;
    case 926u: goto L_08A5F900;
    case 927u: goto L_08A5F910;
    case 928u: goto L_08A5F924;
    case 929u: goto L_08A5F92C;
    case 930u: goto L_08A5F934;
    case 931u: goto L_08A5F93C;
    case 932u: goto L_08A5F94C;
    case 933u: goto L_08A5F954;
    case 934u: goto L_08A5F98C;
    case 935u: goto L_08A5F9B4;
    case 936u: goto L_08A5F9BC;
    case 937u: goto L_08A5F9C4;
    case 938u: goto L_08A5F9D4;
    case 939u: goto L_08A5F9DC;
    case 940u: goto L_08A5F9E4;
    case 941u: goto L_08A5F9EC;
    case 942u: goto L_08A5F9F8;
    case 943u: goto L_08A5FA14;
    case 944u: goto L_08A5FA2C;
    case 945u: goto L_08A5FA34;
    case 946u: goto L_08A5FA4C;
    case 947u: goto L_08A5FA5C;
    case 948u: goto L_08A5FA60;
    case 949u: goto L_08A5FA68;
    case 950u: goto L_08A5FA78;
    case 951u: goto L_08A5FA80;
    case 952u: goto L_08A5FA8C;
    case 953u: goto L_08A5FA94;
    case 954u: goto L_08A5FA9C;
    case 955u: goto L_08A5FAA4;
    case 956u: goto L_08A5FAAC;
    case 957u: goto L_08A5FABC;
    case 958u: goto L_08A5FACC;
    case 959u: goto L_08A5FAD4;
    case 960u: goto L_08A5FAE0;
    case 961u: goto L_08A5FAE8;
    case 962u: goto L_08A5FAF0;
    case 963u: goto L_08A5FAF8;
    case 964u: goto L_08A5FB00;
    case 965u: goto L_08A5FB1C;
    case 966u: goto L_08A5FB24;
    case 967u: goto L_08A5FB2C;
    case 968u: goto L_08A5FB34;
    case 969u: goto L_08A5FB44;
    case 970u: goto L_08A5FB50;
    case 971u: goto L_08A5FB74;
    case 972u: goto L_08A5FB88;
    case 973u: goto L_08A5FB98;
    case 974u: goto L_08A5FBA0;
    case 975u: goto L_08A5FBA8;
    case 976u: goto L_08A5FBB0;
    case 977u: goto L_08A5FBB8;
    case 978u: goto L_08A5FBD8;
    case 979u: goto L_08A5FBE0;
    case 980u: goto L_08A5FC00;
    case 981u: goto L_08A5FC3C;
    case 982u: goto L_08A5FC4C;
    case 983u: goto L_08A5FC7C;
    case 984u: goto L_08A5FC90;
    case 985u: goto L_08A5FC98;
    case 986u: goto L_08A5FCD4;
    case 987u: goto L_08A5FCE4;
    case 988u: goto L_08A5FD14;
    case 989u: goto L_08A5FD28;
    case 990u: goto L_08A5FD2C;
    case 991u: goto L_08A5FD58;
    case 992u: goto L_08A5FD60;
    case 993u: goto L_08A5FD70;
    case 994u: goto L_08A5FD84;
    case 995u: goto L_08A5FDA0;
    case 996u: goto L_08A5FDAC;
    case 997u: goto L_08A5FDC4;
    case 998u: goto L_08A5FDD0;
    case 999u: goto L_08A5FDE8;
    case 1000u: goto L_08A5FDF4;
    case 1001u: goto L_08A5FDFC;
    case 1002u: goto L_08A5FE08;
    case 1003u: goto L_08A5FE1C;
    case 1004u: goto L_08A5FE30;
    case 1005u: goto L_08A5FE38;
    case 1006u: goto L_08A5FE44;
    case 1007u: goto L_08A5FE4C;
    case 1008u: goto L_08A5FE54;
    case 1009u: goto L_08A5FE70;
    case 1010u: goto L_08A5FE78;
    case 1011u: goto L_08A5FE80;
    case 1012u: goto L_08A5FE90;
    case 1013u: goto L_08A5FE98;
    case 1014u: goto L_08A5FEA0;
    case 1015u: goto L_08A5FEB0;
    case 1016u: goto L_08A5FEC8;
    case 1017u: goto L_08A5FECC;
    case 1018u: goto L_08A5FED8;
    case 1019u: goto L_08A5FEE8;
    case 1020u: goto L_08A5FEF8;
    case 1021u: goto L_08A5FF00;
    case 1022u: goto L_08A5FF0C;
    case 1023u: goto L_08A5FF2C;
    case 1024u: goto L_08A5FF34;
    case 1025u: goto L_08A5FF4C;
    case 1026u: goto L_08A5FF50;
    case 1027u: goto L_08A5FF60;
    case 1028u: goto L_08A5FF68;
    case 1029u: goto L_08A5FF8C;
    case 1030u: goto L_08A5FF9C;
    case 1031u: goto L_08A5FFA8;
    case 1032u: goto L_08A5FFB8;
    case 1033u: goto L_08A5FFC8;
    case 1034u: goto L_08A5FFD8;
    case 1035u: goto L_08A5FFF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        AOT_REGCACHE_SYNC_OUT(); return;
    }
    }
// PSPRECOMP_V813_SHARED_JR_DISPATCH: one dynamic-JR reject/redispatch path per unit.
LOCAL_JR_DISPATCH:
    {
        const std::uint32_t local_delta_v813 = jump_target - 0x08A5C004u;
        if (local_delta_v813 >= 16376u || (local_delta_v813 & 3u) != 0u) {
            ctx.pc = jump_target;
            AOT_REGCACHE_SYNC_OUT();
            // PSPRECOMP_V814_CONTINUATION_RETURN
            Runtime::AotTailContinuation aot_cont_v814{};
            if (rt.take_aot_tail_continuation(jump_target, aot_cont_v814)) {
#if defined(__clang__) && defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
                [[clang::musttail]] return aot_cont_v814.function(
                    rt, ctx, aot_cont_v814.entry_id, aot_mem);
#else
                aot_cont_v814.function(rt, ctx, aot_cont_v814.entry_id, aot_mem); return;
#endif
            }
            return;
        }
    }
    local_pc = jump_target;
    entry_id = 0u;
    goto LOCAL_DISPATCH;

// PSPRECOMP_V812_SHARED_SCHED_BLOCK: one scheduler-exact slow boundary per unit.
LOCAL_SCHED_BOUNDARY:
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT();
    if (local_redispatch_rounds < 7u && rt.continue_generated_local_dispatch(ctx)) {
        ++local_redispatch_rounds;
        AOT_REGCACHE_SYNC_IN();
        local_transfers = 0u;
        local_pc = ctx.pc;
        entry_id = 0u;
        goto LOCAL_DISPATCH;
    }
    return;
L_08A5C004:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_23 + static_cast<std::uint32_t>(616))))));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-17));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_23 + static_cast<std::uint32_t>(617))))));
    aot_mem.aot_direct_store8(aot_gpr_23 + static_cast<std::uint32_t>(616), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (ctx.gpr[6] & ctx.gpr[21]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_23 + static_cast<std::uint32_t>(1280))))));
    aot_mem.aot_direct_store8(aot_gpr_23 + static_cast<std::uint32_t>(617), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (ctx.gpr[6] & aot_gpr_5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_23 + static_cast<std::uint32_t>(1280), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0151_entry, 151u, 65u, 0x08A604A8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08A5C030;
    }
L_08A5C030:
    aot_gpr_31 = (0x08A5C038u);
    aot_gpr_4 = (aot_gpr_23 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0194.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 3u, 0x08A5C038u, 0x08B0EBDCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0194_entry(rt, ctx, 658u, aot_mem);
#else
        recomp_unit_0194_entry(rt, ctx, 658u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0194_entry, 194u, 658u, 0x08B0EBDCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5C038u) goto L_08A5C038;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5C038:
    aot_gpr_31 = (0x08A5C040u);
    aot_gpr_4 = (aot_gpr_23 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0208.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 4u, 0x08A5C040u, 0x08B461ACu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0208_entry(rt, ctx, 442u, aot_mem);
#else
        recomp_unit_0208_entry(rt, ctx, 442u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0208_entry, 208u, 442u, 0x08B461ACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5C040u) goto L_08A5C040;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5C040:
    aot_gpr_31 = (0x08A5C048u);
    aot_gpr_4 = (aot_gpr_23 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 5u, 0x08A5C048u, 0x08A58A8Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 163u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 163u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 163u, 0x08A58A8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5C048u) goto L_08A5C048;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5C048:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_23 + static_cast<std::uint32_t>(1280))))));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-17));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_23 + static_cast<std::uint32_t>(615))))));
    aot_mem.aot_direct_store8(aot_gpr_23 + static_cast<std::uint32_t>(1280), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_gpr_5 & 16u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[19] = (0u | 1u);
      if (branch_taken) {
          goto L_08A5C098;
      }
      goto L_08A5C068;
    }
L_08A5C068:
    aot_gpr_4 = (aot_gpr_23 | 0u);
    aot_gpr_31 = (0x08A5C074u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 7u, 0x08A5C074u, 0x08A587CCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 113u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 113u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 113u, 0x08A587CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5C074u) goto L_08A5C074;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5C074:
    aot_gpr_5 = (16256u << 16u);
    aot_gpr_4 = (aot_gpr_23 | 0u);
    aot_gpr_31 = (0x08A5C084u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 8u, 0x08A5C084u, 0x08A587DCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 115u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 115u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 115u, 0x08A587DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5C084u) goto L_08A5C084;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5C084:
    aot_gpr_4 = (aot_gpr_23 | 0u);
    aot_gpr_31 = (0x08A5C090u);
    aot_gpr_5 = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0191.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 9u, 0x08A5C090u, 0x08B00044u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0191_entry(rt, ctx, 5u, aot_mem);
#else
        recomp_unit_0191_entry(rt, ctx, 5u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0191_entry, 191u, 5u, 0x08B00044u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5C090u) goto L_08A5C090;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5C090:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08A5C0A4;
      }
      goto L_08A5C098;
    }
L_08A5C098:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_23 + static_cast<std::uint32_t>(1280))))));
    aot_gpr_4 = (aot_gpr_4 & ctx.gpr[17]);
    aot_mem.aot_direct_store8(aot_gpr_23 + static_cast<std::uint32_t>(1280), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_08A5C0A4;
L_08A5C0A4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08A5C2E4;
      }
      goto L_08A5C0AC;
    }
L_08A5C0AC:
    aot_gpr_4 = (aot_gpr_23 | 0u);
    aot_gpr_31 = (0x08A5C0B8u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 13u, 0x08A5C0B8u, 0x08A587DCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 115u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 115u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 115u, 0x08A587DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5C0B8u) goto L_08A5C0B8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5C0B8:
    aot_gpr_31 = (0x08A5C0C0u);
    aot_gpr_4 = (aot_gpr_23 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 14u, 0x08A5C0C0u, 0x08A585E0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 79u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 79u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 79u, 0x08A585E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5C0C0u) goto L_08A5C0C0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5C0C0:
    aot_gpr_31 = (0x08A5C0C8u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 15u, 0x08A5C0C8u, 0x08A58150u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 14u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 14u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 14u, 0x08A58150u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5C0C8u) goto L_08A5C0C8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5C0C8:
    aot_gpr_4 = (15395u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 55050u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_0 < aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08A5C0F4;
      }
      goto L_08A5C0E4;
    }
L_08A5C0E4:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_23 + static_cast<std::uint32_t>(1280))))));
    aot_gpr_4 = (aot_gpr_4 & 2u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08A5C108;
      }
      goto L_08A5C0F4;
    }
L_08A5C0F4:
    aot_gpr_4 = (aot_gpr_23 | 0u);
    aot_gpr_31 = (0x08A5C100u);
    aot_gpr_5 = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0191.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 18u, 0x08A5C100u, 0x08B00044u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0191_entry(rt, ctx, 5u, aot_mem);
#else
        recomp_unit_0191_entry(rt, ctx, 5u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0191_entry, 191u, 5u, 0x08B00044u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5C100u) goto L_08A5C100;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5C100:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08A5C114;
      }
      goto L_08A5C108;
    }
L_08A5C108:
    aot_gpr_4 = (aot_gpr_23 | 0u);
    aot_gpr_31 = (0x08A5C114u);
    aot_gpr_5 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0191.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 20u, 0x08A5C114u, 0x08B00044u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0191_entry(rt, ctx, 5u, aot_mem);
#else
        recomp_unit_0191_entry(rt, ctx, 5u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0191_entry, 191u, 5u, 0x08B00044u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5C114u) goto L_08A5C114;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5C114:
    aot_gpr_4 = (aot_gpr_23 | 0u);
    aot_gpr_31 = (0x08A5C120u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 21u, 0x08A5C120u, 0x08A587CCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 113u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 113u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 113u, 0x08A587CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5C120u) goto L_08A5C120;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5C120:
    aot_mem.aot_direct_store32(aot_gpr_23 + static_cast<std::uint32_t>(700), 0u);
    aot_gpr_31 = (0x08A5C12Cu);
    aot_gpr_4 = (aot_gpr_23 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 22u, 0x08A5C12Cu, 0x08A587E4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 116u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 116u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 116u, 0x08A587E4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5C12Cu) goto L_08A5C12C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5C12C:
    if (aot_gpr_2 != 0u) {
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_23 + static_cast<std::uint32_t>(1280))))));
        goto L_08A5C170;
    }
    goto L_08A5C134;
L_08A5C134:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_23 + static_cast<std::uint32_t>(565)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) <= 0;
    aot_gpr_4 = (aot_gpr_23 | 0u);
      if (branch_taken) {
          goto L_08A5C150;
      }
      goto L_08A5C140;
    }
L_08A5C140:
    aot_gpr_31 = (0x08A5C148u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08AFEF7C, 190u, 0x08AFEF7Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5C148u) goto L_08A5C148;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A5C148:
    if (aot_gpr_2 != 0u) {
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_23 + static_cast<std::uint32_t>(1280))))));
        goto L_08A5C170;
    }
    goto L_08A5C150;
L_08A5C150:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_23 + static_cast<std::uint32_t>(615))))));
    aot_gpr_4 = (aot_gpr_4 & 16u);
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_23 + static_cast<std::uint32_t>(1280))))));
        goto L_08A5C170;
    }
    goto L_08A5C160;
L_08A5C160:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_23 + static_cast<std::uint32_t>(620))))));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) < 0;
      if (branch_taken) {
          goto L_08A5C184;
      }
      goto L_08A5C16C;
    }
L_08A5C16C:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_23 + static_cast<std::uint32_t>(1280))))));
    goto L_08A5C170;
L_08A5C170:
    aot_gpr_4 = (aot_gpr_4 & 2u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08A5C184;
      }
      goto L_08A5C17C;
    }
L_08A5C17C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 1u);
      if (branch_taken) {
          goto L_08A5C188;
      }
      goto L_08A5C184;
    }
L_08A5C184:
    ctx.gpr[19] = (0u | 0u);
    goto L_08A5C188;
L_08A5C188:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_23 + static_cast<std::uint32_t>(1280))))));
    aot_mem.aot_direct_store32(aot_gpr_23 + static_cast<std::uint32_t>(1528), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-17));
    aot_mem.aot_direct_store32(aot_gpr_23 + static_cast<std::uint32_t>(1532), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_23 + static_cast<std::uint32_t>(615))))));
    aot_mem.aot_direct_store8(aot_gpr_23 + static_cast<std::uint32_t>(1280), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_gpr_5 & 16u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08A5C1D8;
      }
      goto L_08A5C1B0;
    }
L_08A5C1B0:
    aot_gpr_4 = (aot_gpr_23 | 0u);
    aot_gpr_31 = (0x08A5C1BCu);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 34u, 0x08A5C1BCu, 0x08A587CCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 113u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 113u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 113u, 0x08A587CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5C1BCu) goto L_08A5C1BC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5C1BC:
    aot_gpr_5 = (16256u << 16u);
    aot_gpr_4 = (aot_gpr_23 | 0u);
    aot_gpr_31 = (0x08A5C1CCu);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 35u, 0x08A5C1CCu, 0x08A587DCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 115u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 115u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 115u, 0x08A587DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5C1CCu) goto L_08A5C1CC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5C1CC:
    aot_gpr_4 = (aot_gpr_23 | 0u);
    aot_gpr_31 = (0x08A5C1D8u);
    aot_gpr_5 = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0191.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 36u, 0x08A5C1D8u, 0x08B00044u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0191_entry(rt, ctx, 5u, aot_mem);
#else
        recomp_unit_0191_entry(rt, ctx, 5u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0191_entry, 191u, 5u, 0x08B00044u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5C1D8u) goto L_08A5C1D8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5C1D8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08A5C2E4;
      }
      goto L_08A5C1E0;
    }
L_08A5C1E0:
    aot_gpr_31 = (0x08A5C1E8u);
    aot_gpr_4 = (aot_gpr_23 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 38u, 0x08A5C1E8u, 0x08A585E0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 79u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 79u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 79u, 0x08A585E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5C1E8u) goto L_08A5C1E8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5C1E8:
    aot_gpr_31 = (0x08A5C1F0u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 39u, 0x08A5C1F0u, 0x08A58150u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 14u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 14u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 14u, 0x08A58150u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5C1F0u) goto L_08A5C1F0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5C1F0:
    aot_gpr_4 = (15395u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 55050u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_0 < aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08A5C230;
      }
      goto L_08A5C20C;
    }
L_08A5C20C:
    aot_gpr_5 = (16256u << 16u);
    aot_gpr_4 = (aot_gpr_23 | 0u);
    aot_gpr_31 = (0x08A5C21Cu);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 41u, 0x08A5C21Cu, 0x08A587DCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 115u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 115u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 115u, 0x08A587DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5C21Cu) goto L_08A5C21C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5C21C:
    aot_gpr_4 = (aot_gpr_23 | 0u);
    aot_gpr_31 = (0x08A5C228u);
    aot_gpr_5 = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0191.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 42u, 0x08A5C228u, 0x08B00044u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0191_entry(rt, ctx, 5u, aot_mem);
#else
        recomp_unit_0191_entry(rt, ctx, 5u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0191_entry, 191u, 5u, 0x08B00044u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5C228u) goto L_08A5C228;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5C228:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08A5C248;
      }
      goto L_08A5C230;
    }
L_08A5C230:
    aot_gpr_4 = (aot_gpr_23 | 0u);
    aot_gpr_31 = (0x08A5C23Cu);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 44u, 0x08A5C23Cu, 0x08A587DCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 115u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 115u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 115u, 0x08A587DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5C23Cu) goto L_08A5C23C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5C23C:
    aot_gpr_4 = (aot_gpr_23 | 0u);
    aot_gpr_31 = (0x08A5C248u);
    aot_gpr_5 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0191.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 45u, 0x08A5C248u, 0x08B00044u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0191_entry(rt, ctx, 5u, aot_mem);
#else
        recomp_unit_0191_entry(rt, ctx, 5u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0191_entry, 191u, 5u, 0x08B00044u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5C248u) goto L_08A5C248;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5C248:
    aot_gpr_4 = (aot_gpr_23 | 0u);
    aot_gpr_31 = (0x08A5C254u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 46u, 0x08A5C254u, 0x08A587C4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 112u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 112u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 112u, 0x08A587C4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5C254u) goto L_08A5C254;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5C254:
    aot_gpr_4 = (aot_gpr_23 | 0u);
    aot_gpr_31 = (0x08A5C260u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 47u, 0x08A5C260u, 0x08A587CCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 113u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 113u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 113u, 0x08A587CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5C260u) goto L_08A5C260;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5C260:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_23 + static_cast<std::uint32_t>(1280))))));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-17));
    aot_mem.aot_direct_store32(aot_gpr_23 + static_cast<std::uint32_t>(700), 0u);
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    ctx.gpr[19] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_23 + static_cast<std::uint32_t>(1280), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_08A5C2E4;
      }
      goto L_08A5C27C;
    }
L_08A5C27C:
    aot_gpr_5 = (15692u << 16u);
    aot_gpr_5 = (aot_gpr_5 | 52429u);
    aot_gpr_4 = (aot_gpr_23 | 0u);
    aot_gpr_31 = (0x08A5C290u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 49u, 0x08A5C290u, 0x08A587DCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 115u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 115u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 115u, 0x08A587DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5C290u) goto L_08A5C290;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5C290:
    aot_gpr_4 = (aot_gpr_23 | 0u);
    aot_gpr_31 = (0x08A5C29Cu);
    aot_gpr_5 = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0191.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 50u, 0x08A5C29Cu, 0x08B00044u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0191_entry(rt, ctx, 5u, aot_mem);
#else
        recomp_unit_0191_entry(rt, ctx, 5u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0191_entry, 191u, 5u, 0x08B00044u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5C29Cu) goto L_08A5C29C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5C29C:
    aot_gpr_4 = (aot_gpr_23 | 0u);
    aot_gpr_31 = (0x08A5C2A8u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 51u, 0x08A5C2A8u, 0x08A587C4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 112u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 112u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 112u, 0x08A587C4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5C2A8u) goto L_08A5C2A8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5C2A8:
    aot_gpr_4 = (aot_gpr_23 | 0u);
    aot_gpr_31 = (0x08A5C2B4u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 52u, 0x08A5C2B4u, 0x08A587CCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 113u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 113u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 113u, 0x08A587CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5C2B4u) goto L_08A5C2B4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5C2B4:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_23 + static_cast<std::uint32_t>(1280))))));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-17));
    aot_mem.aot_direct_store32(aot_gpr_23 + static_cast<std::uint32_t>(700), 0u);
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_mem.aot_direct_store8(aot_gpr_23 + static_cast<std::uint32_t>(1280), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store32(aot_gpr_23 + static_cast<std::uint32_t>(1528), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(1380)));
    ctx.gpr[19] = (0u | 0u);
    aot_gpr_31 = (0x08A5C2DCu);
    aot_mem.aot_direct_store32(aot_gpr_23 + static_cast<std::uint32_t>(1532), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0143.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 53u, 0x08A5C2DCu, 0x08A42004u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0143_entry(rt, ctx, 367u, aot_mem);
#else
        recomp_unit_0143_entry(rt, ctx, 367u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0143_entry, 143u, 367u, 0x08A42004u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5C2DCu) goto L_08A5C2DC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5C2DC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_23 + static_cast<std::uint32_t>(1380), 0u);
      if (branch_taken) {
          goto L_08A5C2E4;
      }
      goto L_08A5C2E4;
    }
L_08A5C2E4:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_23 + static_cast<std::uint32_t>(1280))))));
    aot_gpr_4 = (aot_gpr_4 & 2u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08A5C354;
      }
      goto L_08A5C2F4;
    }
L_08A5C2F4:
    aot_gpr_31 = (0x08A5C2FCu);
    aot_gpr_4 = (aot_gpr_23 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 56u, 0x08A5C2FCu, 0x08A58294u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 32u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 32u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 32u, 0x08A58294u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5C2FCu) goto L_08A5C2FC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5C2FC:
    aot_gpr_31 = (0x08A5C304u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(8)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 57u, 0x08A5C304u, 0x08A580BCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 8u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 8u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 8u, 0x08A580BCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5C304u) goto L_08A5C304;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5C304:
    aot_gpr_4 = (16051u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 13107u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_0 <= aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08A5C348;
      }
      goto L_08A5C320;
    }
L_08A5C320:
    aot_gpr_31 = (0x08A5C328u);
    aot_gpr_4 = (aot_gpr_23 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 59u, 0x08A5C328u, 0x08A5829Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 33u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 33u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 33u, 0x08A5829Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5C328u) goto L_08A5C328;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5C328:
    aot_gpr_31 = (0x08A5C330u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(8)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 60u, 0x08A5C330u, 0x08A580BCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 8u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 8u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 8u, 0x08A580BCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5C330u) goto L_08A5C330;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5C330:
    aot_gpr_4 = (16128u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_0 <= aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08A5C354;
      }
      goto L_08A5C348;
    }
L_08A5C348:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_23 + static_cast<std::uint32_t>(1280))))));
    aot_gpr_4 = (aot_gpr_4 & ctx.gpr[21]);
    aot_mem.aot_direct_store8(aot_gpr_23 + static_cast<std::uint32_t>(1280), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_08A5C354;
L_08A5C354:
    { const bool branch_taken = ctx.gpr[19] != 0u;
      if (branch_taken) {
          goto L_08A5C37C;
      }
      goto L_08A5C35C;
    }
L_08A5C35C:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_23 + static_cast<std::uint32_t>(1280))))));
    aot_gpr_4 = (aot_gpr_4 & 1u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08A5C37C;
      }
      goto L_08A5C36C;
    }
L_08A5C36C:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_23 + static_cast<std::uint32_t>(1280))))));
    aot_gpr_4 = (aot_gpr_4 & 2u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08A5C70C;
      }
      goto L_08A5C37C;
    }
L_08A5C37C:
    ctx.gpr[16] = (aot_gpr_29 + static_cast<std::uint32_t>(224));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5880)));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(10000));
    aot_gpr_31 = (0x08A5C390u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 66u, 0x08A5C390u, 0x08A580FCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 11u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 11u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 11u, 0x08A580FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5C390u) goto L_08A5C390;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5C390:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(240));
    aot_gpr_5 = (aot_gpr_23 + static_cast<std::uint32_t>(112));
    aot_gpr_31 = (0x08A5C3A0u);
    ctx.gpr[6] = (aot_gpr_23 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0148.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 67u, 0x08A5C3A0u, 0x08A57EBCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0148_entry(rt, ctx, 898u, aot_mem);
#else
        recomp_unit_0148_entry(rt, ctx, 898u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0148_entry, 148u, 898u, 0x08A57EBCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5C3A0u) goto L_08A5C3A0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5C3A0:
    aot_gpr_31 = (0x08A5C3A8u);
    aot_gpr_4 = (aot_gpr_23 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 68u, 0x08A5C3A8u, 0x08A583ECu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 56u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 56u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 56u, 0x08A583ECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5C3A8u) goto L_08A5C3A8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5C3A8:
    aot_gpr_4 = (16256u << 16u);
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[17] = (aot_gpr_23 + static_cast<std::uint32_t>(192));
    aot_gpr_4 = (49024u << 16u);
    { const bool branch_taken = aot_gpr_2 != 0u;
    ctx.fpr[24] = std::bit_cast<float>(aot_gpr_4);
      if (branch_taken) {
          goto L_08A5C544;
      }
      goto L_08A5C3C0;
    }
L_08A5C3C0:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(1248)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_12) || std::isnan(ctx.fpr[28])) && aot_fpr_12 == ctx.fpr[28])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08A5C490;
      }
      goto L_08A5C3D4;
    }
L_08A5C3D4:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(1252)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_12) || std::isnan(ctx.fpr[28])) && aot_fpr_12 == ctx.fpr[28])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08A5C490;
      }
      goto L_08A5C3E8;
    }
L_08A5C3E8:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(1256)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_12) || std::isnan(ctx.fpr[28])) && aot_fpr_12 == ctx.fpr[28])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5876)));
      if (branch_taken) {
          goto L_08A5C410;
      }
      goto L_08A5C3FC;
    }
L_08A5C3FC:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(1260)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_12) || std::isnan(ctx.fpr[28])) && aot_fpr_12 == ctx.fpr[28])) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08A5C484;
      }
      goto L_08A5C410;
    }
L_08A5C410:
    aot_gpr_31 = (0x08A5C418u);
    aot_gpr_4 = (aot_gpr_23 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 74u, 0x08A5C418u, 0x08A5829Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 33u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 33u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 33u, 0x08A5829Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5C418u) goto L_08A5C418;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5C418:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(8)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= ctx.fpr[28])) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08A5C484;
      }
      goto L_08A5C42C;
    }
L_08A5C42C:
    aot_gpr_4 = (15759u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 23593u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(1072)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(272), std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(40)));
    aot_gpr_31 = (0x08A5C44Cu);
    aot_gpr_4 = (aot_gpr_23 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 76u, 0x08A5C44Cu, 0x08A5829Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 33u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 33u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 33u, 0x08A5829Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5C44Cu) goto L_08A5C44C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5C44C:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(8)));
    aot_gpr_31 = (0x08A5C458u);
    aot_fpr_12 = ctx.fpr[30] - aot_fpr_12;
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 77u, 0x08A5C458u, 0x08A580BCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 8u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 8u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 8u, 0x08A580BCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5C458u) goto L_08A5C458;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5C458:
    aot_gpr_4 = (16000u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(276));
    { const float fs = aot_fpr_0; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(272));
    aot_gpr_31 = (0x08A5C474u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(276), std::bit_cast<std::uint32_t>(aot_fpr_12));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0148.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 78u, 0x08A5C474u, 0x08A57FBCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0148_entry(rt, ctx, 907u, aot_mem);
#else
        recomp_unit_0148_entry(rt, ctx, 907u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0148_entry, 148u, 907u, 0x08A57FBCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5C474u) goto L_08A5C474;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5C474:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(224)));
    aot_fpr_12 = aot_fpr_12 - aot_fpr_0;
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(224), std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_08A5C544;
      }
      goto L_08A5C484;
    }
L_08A5C484:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5872)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(224), std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_08A5C544;
      }
      goto L_08A5C490;
    }
L_08A5C490:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(1256)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_12) || std::isnan(ctx.fpr[28])) && aot_fpr_12 == ctx.fpr[28])) ? 0x00800000u : 0u);
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(2109), static_cast<std::uint8_t>(ctx.gpr[22]));
        goto L_08A5C548;
    }
    goto L_08A5C4A4;
L_08A5C4A4:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(1260)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_12) || std::isnan(ctx.fpr[28])) && aot_fpr_12 == ctx.fpr[28])) ? 0x00800000u : 0u);
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(2109), static_cast<std::uint8_t>(ctx.gpr[22]));
        goto L_08A5C548;
    }
    goto L_08A5C4B8;
L_08A5C4B8:
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5876)));
    aot_gpr_31 = (0x08A5C4C4u);
    aot_gpr_4 = (aot_gpr_23 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 83u, 0x08A5C4C4u, 0x08A5829Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 33u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 33u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 33u, 0x08A5829Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5C4C4u) goto L_08A5C4C4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5C4C4:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(8)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < ctx.fpr[28])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (15820u << 16u);
      if (branch_taken) {
          goto L_08A5C544;
      }
      goto L_08A5C4D8;
    }
L_08A5C4D8:
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(224)));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(280), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2112), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(1072)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(44)));
    aot_gpr_31 = (0x08A5C4FCu);
    aot_gpr_4 = (aot_gpr_23 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 85u, 0x08A5C4FCu, 0x08A5829Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 33u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 33u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 33u, 0x08A5829Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5C4FCu) goto L_08A5C4FC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5C4FC:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(8)));
    aot_gpr_31 = (0x08A5C508u);
    aot_fpr_12 = ctx.fpr[30] - aot_fpr_12;
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 86u, 0x08A5C508u, 0x08A580BCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 8u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 8u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 8u, 0x08A580BCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5C508u) goto L_08A5C508;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5C508:
    aot_gpr_4 = (16025u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 39322u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(284));
    { const float fs = aot_fpr_0; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(280));
    aot_gpr_31 = (0x08A5C528u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(284), std::bit_cast<std::uint32_t>(aot_fpr_12));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0148.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 87u, 0x08A5C528u, 0x08A57FBCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0148_entry(rt, ctx, 907u, aot_mem);
#else
        recomp_unit_0148_entry(rt, ctx, 907u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0148_entry, 148u, 907u, 0x08A57FBCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5C528u) goto L_08A5C528;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5C528:
    aot_gpr_4 = (16230u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 26214u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(2112)));
    aot_fpr_12 = aot_fpr_0 + aot_fpr_12;
    { const float fs = aot_fpr_13; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(224), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_08A5C544;
L_08A5C544:
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(2109), static_cast<std::uint8_t>(ctx.gpr[22]));
    goto L_08A5C548;
L_08A5C548:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(240)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(244)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5868)));
    { const float fs = ctx.fpr[22]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    { const float fs = ctx.fpr[15]; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    { const float fs = ctx.fpr[15]; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_12 = aot_fpr_12 + aot_fpr_20;
    aot_fpr_12 = aot_fpr_20 / aot_fpr_12;
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(224)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(228)));
    aot_fpr_13 = aot_fpr_13 + aot_fpr_20;
    aot_fpr_13 = aot_fpr_20 / aot_fpr_13;
    { const float fs = ctx.fpr[16]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(224), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    { const float fs = ctx.fpr[17]; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_gpr_31 = (0x08A5C590u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(228), std::bit_cast<std::uint32_t>(aot_fpr_13));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 90u, 0x08A5C590u, 0x08A583C0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 52u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 52u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 52u, 0x08A583C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5C590u) goto L_08A5C590;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5C590:
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_gpr_31 = (0x08A5C59Cu);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_0));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 91u, 0x08A5C59Cu, 0x08A58090u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 7u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 7u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 7u, 0x08A58090u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5C59Cu) goto L_08A5C59C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5C59C:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(224), std::bit_cast<std::uint32_t>(aot_fpr_0));
    aot_gpr_31 = (0x08A5C5A8u);
    aot_fpr_20 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(228)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 92u, 0x08A5C5A8u, 0x08A583C0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 52u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 52u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 52u, 0x08A583C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5C5A8u) goto L_08A5C5A8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5C5A8:
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x08A5C5B4u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_0));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 93u, 0x08A5C5B4u, 0x08A58090u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 7u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 7u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 7u, 0x08A58090u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5C5B4u) goto L_08A5C5B4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5C5B4:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(240)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(224)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(244)));
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(228), std::bit_cast<std::uint32_t>(aot_fpr_0));
    { const float fs = ctx.fpr[14]; const float ft = aot_fpr_0; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.gpr[18] = (aot_gpr_29 + static_cast<std::uint32_t>(176));
    ctx.gpr[20] = (aot_gpr_29 + static_cast<std::uint32_t>(192));
    ctx.gpr[30] = (aot_gpr_29 + static_cast<std::uint32_t>(208));
    aot_fpr_20 = aot_fpr_13 - aot_fpr_12;
    aot_gpr_4 = (aot_gpr_23 | 0u);
    aot_gpr_31 = (0x08A5C5E8u);
    ctx.fpr[22] = ctx.fpr[15] - ctx.fpr[14];
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 94u, 0x08A5C5E8u, 0x08A582A4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 34u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 34u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 34u, 0x08A582A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5C5E8u) goto L_08A5C5E8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5C5E8:
    aot_gpr_4 = (ctx.gpr[30] | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_gpr_31 = (0x08A5C5F8u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0148.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 95u, 0x08A5C5F8u, 0x08A57F64u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0148_entry(rt, ctx, 904u, aot_mem);
#else
        recomp_unit_0148_entry(rt, ctx, 904u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0148_entry, 148u, 904u, 0x08A57F64u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5C5F8u) goto L_08A5C5F8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5C5F8:
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_gpr_31 = (0x08A5C608u);
    aot_gpr_5 = (ctx.gpr[30] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0148.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 96u, 0x08A5C608u, 0x08A57F80u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0148_entry(rt, ctx, 905u, aot_mem);
#else
        recomp_unit_0148_entry(rt, ctx, 905u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0148_entry, 148u, 905u, 0x08A57F80u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5C608u) goto L_08A5C608;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5C608:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(212)));
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08A5C618u);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0148.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 97u, 0x08A5C618u, 0x08A57F80u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0148_entry(rt, ctx, 905u, aot_mem);
#else
        recomp_unit_0148_entry(rt, ctx, 905u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0148_entry, 148u, 905u, 0x08A57F80u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5C618u) goto L_08A5C618;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5C618:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08A5C624u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 98u, 0x08A5C624u, 0x08A58168u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 15u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 15u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 15u, 0x08A58168u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5C624u) goto L_08A5C624;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5C624:
    ctx.gpr[18] = (aot_gpr_29 + static_cast<std::uint32_t>(256));
    aot_gpr_31 = (0x08A5C630u);
    aot_gpr_4 = (aot_gpr_23 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 99u, 0x08A5C630u, 0x08A58294u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 32u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 32u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 32u, 0x08A58294u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5C630u) goto L_08A5C630;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5C630:
    ctx.gpr[22] = (aot_gpr_2 | 0u);
    aot_gpr_4 = (ctx.gpr[30] | 0u);
    aot_gpr_5 = (aot_gpr_23 | 0u);
    aot_gpr_31 = (0x08A5C644u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0148.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 100u, 0x08A5C644u, 0x08A57E9Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0148_entry(rt, ctx, 897u, aot_mem);
#else
        recomp_unit_0148_entry(rt, ctx, 897u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0148_entry, 148u, 897u, 0x08A57E9Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5C644u) goto L_08A5C644;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5C644:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (ctx.gpr[22] | 0u);
    aot_gpr_31 = (0x08A5C654u);
    ctx.gpr[6] = (ctx.gpr[30] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0148.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 101u, 0x08A5C654u, 0x08A57F34u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0148_entry(rt, ctx, 902u, aot_mem);
#else
        recomp_unit_0148_entry(rt, ctx, 902u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0148_entry, 148u, 902u, 0x08A57F34u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5C654u) goto L_08A5C654;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5C654:
    aot_gpr_4 = (aot_gpr_23 | 0u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08A5C664u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 102u, 0x08A5C664u, 0x08A58628u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 84u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 84u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 84u, 0x08A58628u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5C664u) goto L_08A5C664;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5C664:
    aot_gpr_31 = (0x08A5C66Cu);
    aot_gpr_4 = (aot_gpr_23 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 103u, 0x08A5C66Cu, 0x08A582A4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 34u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 34u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 34u, 0x08A582A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5C66Cu) goto L_08A5C66C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5C66C:
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x08A5C67Cu);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0148.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 104u, 0x08A5C67Cu, 0x08A57F80u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0148_entry(rt, ctx, 905u, aot_mem);
#else
        recomp_unit_0148_entry(rt, ctx, 905u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0148_entry, 148u, 905u, 0x08A57F80u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5C67Cu) goto L_08A5C67C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5C67C:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(212)));
    aot_gpr_4 = (ctx.gpr[30] | 0u);
    aot_gpr_31 = (0x08A5C68Cu);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0148.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 105u, 0x08A5C68Cu, 0x08A57F80u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0148_entry(rt, ctx, 905u, aot_mem);
#else
        recomp_unit_0148_entry(rt, ctx, 905u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0148_entry, 148u, 905u, 0x08A57F80u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5C68Cu) goto L_08A5C68C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5C68C:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08A5C698u);
    aot_gpr_5 = (ctx.gpr[30] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 106u, 0x08A5C698u, 0x08A58168u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 15u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 15u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 15u, 0x08A58168u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5C698u) goto L_08A5C698;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5C698:
    aot_gpr_31 = (0x08A5C6A0u);
    aot_gpr_4 = (aot_gpr_23 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 107u, 0x08A5C6A0u, 0x08A5829Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 33u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 33u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 33u, 0x08A5829Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5C6A0u) goto L_08A5C6A0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5C6A0:
    ctx.gpr[22] = (aot_gpr_2 | 0u);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_5 = (aot_gpr_23 | 0u);
    aot_gpr_31 = (0x08A5C6B4u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0148.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 108u, 0x08A5C6B4u, 0x08A57E9Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0148_entry(rt, ctx, 897u, aot_mem);
#else
        recomp_unit_0148_entry(rt, ctx, 897u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0148_entry, 148u, 897u, 0x08A57E9Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5C6B4u) goto L_08A5C6B4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5C6B4:
    aot_gpr_4 = (ctx.gpr[30] | 0u);
    aot_gpr_5 = (ctx.gpr[22] | 0u);
    aot_gpr_31 = (0x08A5C6C4u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0148.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 109u, 0x08A5C6C4u, 0x08A57F34u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0148_entry(rt, ctx, 902u, aot_mem);
#else
        recomp_unit_0148_entry(rt, ctx, 902u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0148_entry, 148u, 902u, 0x08A57F34u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5C6C4u) goto L_08A5C6C4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5C6C4:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08A5C6D0u);
    aot_gpr_5 = (ctx.gpr[30] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 110u, 0x08A5C6D0u, 0x08A58168u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 15u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 15u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 15u, 0x08A58168u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5C6D0u) goto L_08A5C6D0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5C6D0:
    aot_gpr_4 = (aot_gpr_23 | 0u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08A5C6E0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 111u, 0x08A5C6E0u, 0x08A58628u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 84u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 84u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 84u, 0x08A58628u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5C6E0u) goto L_08A5C6E0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5C6E0:
    aot_gpr_31 = (0x08A5C6E8u);
    aot_gpr_4 = (aot_gpr_23 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 112u, 0x08A5C6E8u, 0x08A583ECu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 56u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 56u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 56u, 0x08A583ECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5C6E8u) goto L_08A5C6E8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5C6E8:
    { const bool branch_taken = aot_gpr_2 == 0u;
    ctx.gpr[22] = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(2109)));
      if (branch_taken) {
          goto L_08A5C704;
      }
      goto L_08A5C6F0;
    }
L_08A5C6F0:
    aot_gpr_31 = (0x08A5C6F8u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(352)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 114u, 0x08A5C6F8u, 0x08A58748u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 99u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 99u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 99u, 0x08A58748u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5C6F8u) goto L_08A5C6F8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5C6F8:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08A5C704u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 115u, 0x08A5C704u, 0x08A58168u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 15u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 15u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 15u, 0x08A58168u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5C704u) goto L_08A5C704;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5C704:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08A5C738;
      }
      goto L_08A5C70C;
    }
L_08A5C70C:
    aot_gpr_31 = (0x08A5C714u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(352)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 117u, 0x08A5C714u, 0x08A58748u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 99u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 99u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 99u, 0x08A58748u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5C714u) goto L_08A5C714;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5C714:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(352)));
    aot_gpr_31 = (0x08A5C724u);
    aot_mem.aot_direct_store32(aot_gpr_23 + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(aot_fpr_12));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 118u, 0x08A5C724u, 0x08A58748u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 99u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 99u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 99u, 0x08A58748u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5C724u) goto L_08A5C724;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5C724:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(1072)));
    aot_mem.aot_direct_store32(aot_gpr_23 + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(36)));
    aot_mem.aot_direct_store32(aot_gpr_23 + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_08A5C738;
L_08A5C738:
    ctx.gpr[20] = (0u | 0u);
    aot_gpr_31 = (0x08A5C744u);
    aot_gpr_4 = (aot_gpr_23 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 120u, 0x08A5C744u, 0x08A58468u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 63u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 63u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 63u, 0x08A58468u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5C744u) goto L_08A5C744;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5C744:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_08A5CA0C;
      }
      goto L_08A5C74C;
    }
L_08A5C74C:
    aot_gpr_31 = (0x08A5C754u);
    aot_gpr_4 = (aot_gpr_23 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 122u, 0x08A5C754u, 0x08A583ECu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 56u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 56u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 56u, 0x08A583ECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5C754u) goto L_08A5C754;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5C754:
    aot_gpr_4 = (0u | 4u);
    if (aot_gpr_2 == aot_gpr_4) {
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_23 + static_cast<std::uint32_t>(1280))))));
        goto L_08A5C778;
    }
    goto L_08A5C760;
L_08A5C760:
    aot_gpr_31 = (0x08A5C768u);
    aot_gpr_4 = (aot_gpr_23 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 124u, 0x08A5C768u, 0x08A583ECu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 56u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 56u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 56u, 0x08A583ECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5C768u) goto L_08A5C768;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5C768:
    aot_gpr_4 = (0u | 5u);
    { const bool branch_taken = aot_gpr_2 != aot_gpr_4;
      if (branch_taken) {
          goto L_08A5CA0C;
      }
      goto L_08A5C774;
    }
L_08A5C774:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_23 + static_cast<std::uint32_t>(1280))))));
    goto L_08A5C778;
L_08A5C778:
    aot_gpr_4 = (aot_gpr_4 & 1u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08A5CA0C;
      }
      goto L_08A5C784;
    }
L_08A5C784:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_23 + static_cast<std::uint32_t>(616))))));
    ctx.gpr[16] = (0u | 0u);
    aot_gpr_4 = (aot_gpr_4 & 16u);
    ctx.gpr[18] = (aot_gpr_23 + static_cast<std::uint32_t>(112));
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[17] = (aot_gpr_23 + static_cast<std::uint32_t>(176));
      if (branch_taken) {
          goto L_08A5C810;
      }
      goto L_08A5C79C;
    }
L_08A5C79C:
    aot_gpr_31 = (0x08A5C7A4u);
    aot_gpr_4 = (aot_gpr_23 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 129u, 0x08A5C7A4u, 0x08A585E0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 79u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 79u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 79u, 0x08A585E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5C7A4u) goto L_08A5C7A4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5C7A4:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(0)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_12) || std::isnan(ctx.fpr[28])) && aot_fpr_12 == ctx.fpr[28])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08A5C810;
      }
      goto L_08A5C7B8;
    }
L_08A5C7B8:
    aot_gpr_31 = (0x08A5C7C0u);
    aot_gpr_4 = (aot_gpr_23 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 131u, 0x08A5C7C0u, 0x08A585E0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 79u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 79u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 79u, 0x08A585E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5C7C0u) goto L_08A5C7C0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5C7C0:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(4)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_12) || std::isnan(ctx.fpr[28])) && aot_fpr_12 == ctx.fpr[28])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08A5C810;
      }
      goto L_08A5C7D4;
    }
L_08A5C7D4:
    aot_gpr_31 = (0x08A5C7DCu);
    aot_gpr_4 = (aot_gpr_23 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 133u, 0x08A5C7DCu, 0x08A585E0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 79u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 79u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 79u, 0x08A585E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5C7DCu) goto L_08A5C7DC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5C7DC:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(8)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_12) || std::isnan(ctx.fpr[28])) && aot_fpr_12 == ctx.fpr[28])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08A5C810;
      }
      goto L_08A5C7F0;
    }
L_08A5C7F0:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(1244)));
    aot_gpr_4 = (16256u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_12) || std::isnan(aot_fpr_13)) && aot_fpr_12 == aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08A5C810;
      }
      goto L_08A5C80C;
    }
L_08A5C80C:
    ctx.gpr[16] = (0u | 1u);
    goto L_08A5C810;
L_08A5C810:
    aot_gpr_31 = (0x08A5C818u);
    aot_gpr_4 = (aot_gpr_23 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 137u, 0x08A5C818u, 0x08A583ECu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 56u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 56u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 56u, 0x08A583ECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5C818u) goto L_08A5C818;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5C818:
    aot_gpr_4 = (0u | 5u);
    { const bool branch_taken = aot_gpr_2 != aot_gpr_4;
    aot_gpr_4 = (15172u << 16u);
      if (branch_taken) {
          goto L_08A5C84C;
      }
      goto L_08A5C824;
    }
L_08A5C824:
    aot_gpr_4 = (15300u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 39846u);
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (15044u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 39846u);
    ctx.fpr[22] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (15477u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 49807u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[24] = std::bit_cast<float>(aot_gpr_4);
      if (branch_taken) {
          goto L_08A5C86C;
      }
      goto L_08A5C84C;
    }
L_08A5C84C:
    aot_gpr_4 = (aot_gpr_4 | 39846u);
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (14955u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 60923u);
    ctx.fpr[22] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (15267u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 55050u);
    ctx.fpr[24] = std::bit_cast<float>(aot_gpr_4);
    goto L_08A5C86C;
L_08A5C86C:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2116), ctx.gpr[21]);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(2109), static_cast<std::uint8_t>(ctx.gpr[22]));
    ctx.gpr[30] = (aot_gpr_23 + static_cast<std::uint32_t>(160));
    aot_gpr_31 = (0x08A5C880u);
    aot_gpr_4 = (aot_gpr_23 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 141u, 0x08A5C880u, 0x08A585E0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 79u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 79u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 79u, 0x08A585E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5C880u) goto L_08A5C880;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5C880:
    ctx.gpr[22] = (aot_gpr_29 + static_cast<std::uint32_t>(304));
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    aot_gpr_5 = (aot_gpr_23 + static_cast<std::uint32_t>(160));
    aot_gpr_31 = (0x08A5C894u);
    ctx.gpr[6] = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0148.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 142u, 0x08A5C894u, 0x08A57F34u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0148_entry(rt, ctx, 902u, aot_mem);
#else
        recomp_unit_0148_entry(rt, ctx, 902u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0148_entry, 148u, 902u, 0x08A57F34u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5C894u) goto L_08A5C894;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5C894:
    ctx.gpr[6] = (16384u << 16u);
    ctx.gpr[21] = (aot_gpr_29 + static_cast<std::uint32_t>(288));
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[6]);
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_gpr_31 = (0x08A5C8B0u);
    aot_gpr_5 = (ctx.gpr[22] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0148.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 143u, 0x08A5C8B0u, 0x08A57F9Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0148_entry(rt, ctx, 906u, aot_mem);
#else
        recomp_unit_0148_entry(rt, ctx, 906u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0148_entry, 148u, 906u, 0x08A57F9Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5C8B0u) goto L_08A5C8B0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5C8B0:
    aot_gpr_4 = (ctx.gpr[30] | 0u);
    aot_gpr_31 = (0x08A5C8BCu);
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 144u, 0x08A5C8BCu, 0x08A58168u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 15u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 15u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 15u, 0x08A58168u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5C8BCu) goto L_08A5C8BC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5C8BC:
    aot_gpr_5 = (aot_gpr_23 + static_cast<std::uint32_t>(176));
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    aot_gpr_31 = (0x08A5C8CCu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0148.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 145u, 0x08A5C8CCu, 0x08A57F34u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0148_entry(rt, ctx, 902u, aot_mem);
#else
        recomp_unit_0148_entry(rt, ctx, 902u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0148_entry, 148u, 902u, 0x08A57F34u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5C8CCu) goto L_08A5C8CC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5C8CC:
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_gpr_31 = (0x08A5C8DCu);
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0148.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 146u, 0x08A5C8DCu, 0x08A57F9Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0148_entry(rt, ctx, 906u, aot_mem);
#else
        recomp_unit_0148_entry(rt, ctx, 906u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0148_entry, 148u, 906u, 0x08A57F9Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5C8DCu) goto L_08A5C8DC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5C8DC:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08A5C8E8u);
    aot_gpr_5 = (ctx.gpr[22] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 147u, 0x08A5C8E8u, 0x08A58168u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 15u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 15u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 15u, 0x08A58168u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5C8E8u) goto L_08A5C8E8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5C8E8:
    aot_gpr_31 = (0x08A5C8F0u);
    aot_gpr_4 = (ctx.gpr[30] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 148u, 0x08A5C8F0u, 0x08A58150u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 14u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 14u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 14u, 0x08A58150u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5C8F0u) goto L_08A5C8F0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5C8F0:
    aot_gpr_31 = (0x08A5C8F8u);
    ctx.fpr[30] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_0));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 149u, 0x08A5C8F8u, 0x08A583C0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 52u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 52u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 52u, 0x08A583C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5C8F8u) goto L_08A5C8F8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5C8F8:
    aot_gpr_31 = (0x08A5C900u);
    { const float fs = aot_fpr_20; const float ft = aot_fpr_0; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 150u, 0x08A5C900u, 0x08A5807Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 5u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 5u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 5u, 0x08A5807Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5C900u) goto L_08A5C900;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5C900:
    ctx.gpr[22] = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(2109)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[30] <= aot_fpr_0)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    ctx.gpr[21] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(2116)));
      if (branch_taken) {
          goto L_08A5C954;
      }
      goto L_08A5C914;
    }
L_08A5C914:
    aot_gpr_31 = (0x08A5C91Cu);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 152u, 0x08A5C91Cu, 0x08A58150u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 14u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 14u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 14u, 0x08A58150u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5C91Cu) goto L_08A5C91C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5C91C:
    aot_gpr_31 = (0x08A5C924u);
    aot_fpr_20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_0));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 153u, 0x08A5C924u, 0x08A583C0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 52u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 52u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 52u, 0x08A583C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5C924u) goto L_08A5C924;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5C924:
    aot_gpr_31 = (0x08A5C92Cu);
    { const float fs = ctx.fpr[22]; const float ft = aot_fpr_0; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 154u, 0x08A5C92Cu, 0x08A5807Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 5u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 5u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 5u, 0x08A5807Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5C92Cu) goto L_08A5C92C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5C92C:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_20 <= aot_fpr_0)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08A5C954;
      }
      goto L_08A5C93C;
    }
L_08A5C93C:
    aot_gpr_31 = (0x08A5C944u);
    aot_gpr_4 = (aot_gpr_23 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 156u, 0x08A5C944u, 0x08A586D8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 87u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 87u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 87u, 0x08A586D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5C944u) goto L_08A5C944;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5C944:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_0 < ctx.fpr[24])) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08A5C95C;
      }
      goto L_08A5C954;
    }
L_08A5C954:
    { const bool branch_taken = ctx.gpr[16] == 0u;
      if (branch_taken) {
          goto L_08A5CA08;
      }
      goto L_08A5C95C;
    }
L_08A5C95C:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_23 + static_cast<std::uint32_t>(309)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store8(aot_gpr_23 + static_cast<std::uint32_t>(309), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_23 + static_cast<std::uint32_t>(309)));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 11 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08A5C980;
      }
      goto L_08A5C978;
    }
L_08A5C978:
    { const bool branch_taken = ctx.gpr[16] == 0u;
      if (branch_taken) {
          goto L_08A5CA0C;
      }
      goto L_08A5C980;
    }
L_08A5C980:
    aot_gpr_31 = (0x08A5C988u);
    aot_gpr_4 = (aot_gpr_23 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 161u, 0x08A5C988u, 0x08A582FCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 40u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 40u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 40u, 0x08A582FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5C988u) goto L_08A5C988;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5C988:
    aot_fpr_20 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (0x08A5C994u);
    aot_gpr_4 = (aot_gpr_23 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 162u, 0x08A5C994u, 0x08A582FCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 40u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 40u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 40u, 0x08A582FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5C994u) goto L_08A5C994;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5C994:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(4)));
    aot_gpr_31 = (0x08A5C9A0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0207.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 163u, 0x08A5C9A0u, 0x08B42144u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0207_entry(rt, ctx, 487u, aot_mem);
#else
        recomp_unit_0207_entry(rt, ctx, 487u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0207_entry, 207u, 487u, 0x08B42144u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5C9A0u) goto L_08A5C9A0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5C9A0:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_08A5CA0C;
      }
      goto L_08A5C9A8;
    }
L_08A5C9A8:
    { const bool branch_taken = ctx.gpr[16] == 0u;
      if (branch_taken) {
          goto L_08A5C9C0;
      }
      goto L_08A5C9B0;
    }
L_08A5C9B0:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_23 + static_cast<std::uint32_t>(309)));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 11 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08A5C9C8;
      }
      goto L_08A5C9C0;
    }
L_08A5C9C0:
    aot_gpr_4 = (0u | 10u);
    aot_mem.aot_direct_store8(aot_gpr_23 + static_cast<std::uint32_t>(309), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_08A5C9C8;
L_08A5C9C8:
    ctx.gpr[20] = (0u | 1u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_gpr_4 = (aot_gpr_23 | 0u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_gpr_31 = (0x08A5C9E0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0152.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 168u, 0x08A5C9E0u, 0x08A6669Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0152_entry(rt, ctx, 537u, aot_mem);
#else
        recomp_unit_0152_entry(rt, ctx, 537u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0152_entry, 152u, 537u, 0x08A6669Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5C9E0u) goto L_08A5C9E0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5C9E0:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(320));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_gpr_31 = (0x08A5C9F4u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 169u, 0x08A5C9F4u, 0x08A580C8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 9u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 9u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 9u, 0x08A580C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5C9F4u) goto L_08A5C9F4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5C9F4:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08A5CA00u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 170u, 0x08A5CA00u, 0x08A58168u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 15u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 15u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 15u, 0x08A58168u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5CA00u) goto L_08A5CA00;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5CA00:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08A5CA0C;
      }
      goto L_08A5CA08;
    }
L_08A5CA08:
    aot_mem.aot_direct_store8(aot_gpr_23 + static_cast<std::uint32_t>(309), static_cast<std::uint8_t>(0u));
    goto L_08A5CA0C;
L_08A5CA0C:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[17] = (aot_gpr_23 | 0u);
    goto L_08A5CA14;
L_08A5CA14:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1404)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08A5CA48;
      }
      goto L_08A5CA20;
    }
L_08A5CA20:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_23 + static_cast<std::uint32_t>(617))))));
    aot_gpr_4 = (aot_gpr_4 | 32u);
    aot_mem.aot_direct_store8(aot_gpr_23 + static_cast<std::uint32_t>(617), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7893)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08A5CA48;
      }
      goto L_08A5CA38;
    }
L_08A5CA38:
    aot_gpr_31 = (0x08A5CA40u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1404)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 176u, 0x08A5CA40u, 0x08A584A0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 65u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 65u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 65u, 0x08A584A0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5CA40u) goto L_08A5CA40;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5CA40:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_08A5CA60;
      }
      goto L_08A5CA48;
    }
L_08A5CA48:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[16]) < 4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A5CA14;
      }
      goto L_08A5CA58;
    }
L_08A5CA58:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08A5CA74;
      }
      goto L_08A5CA60;
    }
L_08A5CA60:
    aot_gpr_4 = (aot_gpr_23 | 0u);
    aot_gpr_31 = (0x08A5CA6Cu);
    aot_gpr_5 = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 180u, 0x08A5CA6Cu, 0x08A584B0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 66u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 66u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 66u, 0x08A584B0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5CA6Cu) goto L_08A5CA6C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5CA6C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0151_entry, 151u, 65u, 0x08A604A8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08A5CA74;
    }
L_08A5CA74:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_23 + static_cast<std::uint32_t>(617))))));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2060), aot_gpr_5);
    aot_gpr_5 = (15948u << 16u);
    aot_gpr_5 = (aot_gpr_5 | 52429u);
    aot_gpr_4 = (aot_gpr_4 & 32u);
    ctx.fpr[30] = std::bit_cast<float>(aot_gpr_5);
    ctx.gpr[16] = (0u + static_cast<std::uint32_t>(-17));
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[30] = (0u | 2u);
      if (branch_taken) {
          goto L_08A5CAA4;
      }
      goto L_08A5CA9C;
    }
L_08A5CA9C:
    ctx.gpr[20] = (0u | 0u);
    aot_mem.aot_direct_store8(aot_gpr_23 + static_cast<std::uint32_t>(309), static_cast<std::uint8_t>(0u));
    goto L_08A5CAA4;
L_08A5CAA4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(92)));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[6] = (0u | 0u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(416));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    ctx.gpr[10] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (aot_gpr_23 + aot_gpr_5);
    aot_gpr_5 = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    jump_target = ctx.gpr[10];
    aot_gpr_31 = (0x08A5CAD4u);
    ctx.gpr[9] = (0u | 42u);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5CAD4u) goto L_08A5CAD4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A5CAD4:
    aot_gpr_31 = (0x08A5CADCu);
    aot_gpr_4 = (aot_gpr_23 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 185u, 0x08A5CADCu, 0x08A583D8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 55u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 55u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 55u, 0x08A583D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5CADCu) goto L_08A5CADC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5CADC:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08A5CAF4;
      }
      goto L_08A5CAE4;
    }
L_08A5CAE4:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_23 + static_cast<std::uint32_t>(304))))));
    aot_gpr_4 = (aot_gpr_4 | 2u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_23 + static_cast<std::uint32_t>(304), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_08A5CB14;
      }
      goto L_08A5CAF4;
    }
L_08A5CAF4:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_23 + static_cast<std::uint32_t>(304))))));
    aot_gpr_4 = (aot_gpr_4 & 2u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08A5CB08;
      }
      goto L_08A5CB04;
    }
L_08A5CB04:
    ctx.gpr[20] = (0u | 0u);
    goto L_08A5CB08;
L_08A5CB08:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_23 + static_cast<std::uint32_t>(304))))));
    aot_gpr_4 = (aot_gpr_4 & ctx.gpr[21]);
    aot_mem.aot_direct_store8(aot_gpr_23 + static_cast<std::uint32_t>(304), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_08A5CB14;
L_08A5CB14:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(2108), static_cast<std::uint8_t>(ctx.gpr[20]));
      if (branch_taken) {
          goto L_08A5CCD0;
      }
      goto L_08A5CB1C;
    }
L_08A5CB1C:
    aot_gpr_4 = (aot_gpr_23 | 0u);
    aot_gpr_31 = (0x08A5CB28u);
    aot_gpr_5 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 192u, 0x08A5CB28u, 0x08A58420u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 61u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 61u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 61u, 0x08A58420u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5CB28u) goto L_08A5CB28;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5CB28:
    aot_gpr_4 = (aot_gpr_23 | 0u);
    aot_gpr_31 = (0x08A5CB34u);
    aot_gpr_5 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 193u, 0x08A5CB34u, 0x08A58478u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 64u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 64u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 64u, 0x08A58478u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5CB34u) goto L_08A5CB34;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5CB34:
    aot_gpr_4 = (aot_gpr_23 | 0u);
    aot_gpr_31 = (0x08A5CB40u);
    aot_gpr_5 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 194u, 0x08A5CB40u, 0x08A584B0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 66u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 66u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 66u, 0x08A584B0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5CB40u) goto L_08A5CB40;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5CB40:
    aot_gpr_4 = (aot_gpr_23 | 0u);
    aot_gpr_31 = (0x08A5CB4Cu);
    aot_gpr_5 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 195u, 0x08A5CB4Cu, 0x08A584D8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 67u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 67u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 67u, 0x08A584D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5CB4Cu) goto L_08A5CB4C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5CB4C:
    aot_gpr_31 = (0x08A5CB54u);
    aot_gpr_4 = (aot_gpr_23 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 196u, 0x08A5CB54u, 0x08A585E8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 80u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 80u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 80u, 0x08A585E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5CB54u) goto L_08A5CB54;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5CB54:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(72)));
    aot_gpr_5 = (65520u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_23 + static_cast<std::uint32_t>(616))))));
    aot_mem.aot_direct_store32(aot_gpr_23 + static_cast<std::uint32_t>(72), aot_gpr_4);
    aot_gpr_4 = (aot_gpr_5 & ctx.gpr[16]);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_23 + static_cast<std::uint32_t>(617))))));
    aot_mem.aot_direct_store8(aot_gpr_23 + static_cast<std::uint32_t>(616), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_gpr_5 & ctx.gpr[21]);
    aot_mem.aot_direct_store8(aot_gpr_23 + static_cast<std::uint32_t>(617), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_31 = (0x08A5CB88u);
    aot_gpr_4 = (aot_gpr_23 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 197u, 0x08A5CB88u, 0x08A585F0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 81u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 81u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 81u, 0x08A585F0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5CB88u) goto L_08A5CB88;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5CB88:
    ctx.gpr[16] = (aot_gpr_29 + static_cast<std::uint32_t>(336));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[17] = (aot_gpr_23 + static_cast<std::uint32_t>(144));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08A5CBA4u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 198u, 0x08A5CBA4u, 0x08A580C8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 9u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 9u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 9u, 0x08A580C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5CBA4u) goto L_08A5CBA4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5CBA4:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08A5CBB0u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 199u, 0x08A5CBB0u, 0x08A58168u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 15u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 15u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 15u, 0x08A58168u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5CBB0u) goto L_08A5CBB0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5CBB0:
    ctx.gpr[17] = (aot_gpr_23 + static_cast<std::uint32_t>(128));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_gpr_31 = (0x08A5CBC8u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 200u, 0x08A5CBC8u, 0x08A580C8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 9u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 9u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 9u, 0x08A580C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5CBC8u) goto L_08A5CBC8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5CBC8:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08A5CBD4u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 201u, 0x08A5CBD4u, 0x08A58168u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 15u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 15u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 15u, 0x08A58168u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5CBD4u) goto L_08A5CBD4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5CBD4:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_23 + static_cast<std::uint32_t>(1280))))));
    aot_gpr_4 = (aot_gpr_4 & 2u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (16050u << 16u);
      if (branch_taken) {
          goto L_08A5CC20;
      }
      goto L_08A5CBE4;
    }
L_08A5CBE4:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(1512)));
    aot_gpr_4 = (aot_gpr_4 | 47299u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08A5CC20;
      }
      goto L_08A5CC00;
    }
L_08A5CC00:
    aot_gpr_31 = (0x08A5CC08u);
    aot_fpr_20 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(1512)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 204u, 0x08A5CC08u, 0x08A583C0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 52u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 52u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 52u, 0x08A583C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5CC08u) goto L_08A5CC08;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5CC08:
    aot_gpr_4 = (15502u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 64053u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_0; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = aot_fpr_20 + aot_fpr_12;
    aot_mem.aot_direct_store32(aot_gpr_23 + static_cast<std::uint32_t>(1512), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_08A5CC20;
L_08A5CC20:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_23 + static_cast<std::uint32_t>(1280))))));
    aot_gpr_4 = (aot_gpr_4 & 2u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08A5CCC0;
      }
      goto L_08A5CC30;
    }
L_08A5CC30:
    aot_gpr_4 = (16248u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 20972u);
    aot_gpr_31 = (0x08A5CC40u);
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_4);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 207u, 0x08A5CC40u, 0x08A583C0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 52u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 52u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 52u, 0x08A583C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5CC40u) goto L_08A5CC40;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5CC40:
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x08A5CC4Cu);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_0));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 208u, 0x08A5CC4Cu, 0x08A58090u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 7u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 7u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 7u, 0x08A58090u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5CC4Cu) goto L_08A5CC4C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5CC4C:
    aot_gpr_4 = (49024u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_0));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (16256u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(352), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(360), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_gpr_31 = (0x08A5CC70u);
    aot_gpr_4 = (aot_gpr_23 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 209u, 0x08A5CC70u, 0x08A58294u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 32u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 32u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 32u, 0x08A58294u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5CC70u) goto L_08A5CC70;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5CC70:
    aot_gpr_5 = (aot_gpr_2 + static_cast<std::uint32_t>(8));
    aot_gpr_31 = (0x08A5CC7Cu);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(360));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0148.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 210u, 0x08A5CC7Cu, 0x08A57FBCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0148_entry(rt, ctx, 907u, aot_mem);
#else
        recomp_unit_0148_entry(rt, ctx, 907u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0148_entry, 148u, 907u, 0x08A57FBCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5CC7Cu) goto L_08A5CC7C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5CC7C:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(356), std::bit_cast<std::uint32_t>(aot_fpr_0));
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(356));
    aot_gpr_31 = (0x08A5CC8Cu);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(352));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0148.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 211u, 0x08A5CC8Cu, 0x08A57FE4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0148_entry(rt, ctx, 910u, aot_mem);
#else
        recomp_unit_0148_entry(rt, ctx, 910u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0148_entry, 148u, 910u, 0x08A57FE4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5CC8Cu) goto L_08A5CC8C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5CC8C:
    aot_fpr_20 = ctx.fpr[24] - ctx.fpr[22];
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(1520)));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_0));
    aot_gpr_31 = (0x08A5CCA0u);
    { const float fs = ctx.fpr[22]; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 212u, 0x08A5CCA0u, 0x08A58054u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 4u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 4u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 4u, 0x08A58054u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5CCA0u) goto L_08A5CCA0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5CCA0:
    aot_gpr_4 = (16006u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 2706u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_0 + aot_fpr_12;
    { const float fs = aot_fpr_20; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = ctx.fpr[22] - aot_fpr_12;
    aot_mem.aot_direct_store32(aot_gpr_23 + static_cast<std::uint32_t>(1520), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_23 + static_cast<std::uint32_t>(1516), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_08A5CCC0;
L_08A5CCC0:
    aot_gpr_4 = (16128u << 16u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(2092), static_cast<std::uint8_t>(ctx.gpr[19]));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[24] = std::bit_cast<float>(aot_gpr_4);
      if (branch_taken) {
          goto L_08A5F560;
      }
      goto L_08A5CCD0;
    }
L_08A5CCD0:
    aot_gpr_4 = (16128u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[6] = (16051u << 16u);
    { const float fs = ctx.fpr[26]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    ctx.gpr[6] = (ctx.gpr[6] | 13107u);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_23 + static_cast<std::uint32_t>(616))))));
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[6]);
    aot_gpr_5 = (aot_gpr_23 + static_cast<std::uint32_t>(1040));
    ctx.gpr[6] = (16512u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2096), std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[6]);
    aot_gpr_4 = (aot_gpr_4 & 16u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2052), aot_gpr_5);
      if (branch_taken) {
          goto L_08A5CE2C;
      }
      goto L_08A5CD08;
    }
L_08A5CD08:
    ctx.gpr[17] = (aot_gpr_29 + static_cast<std::uint32_t>(704));
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08A5CD18u);
    aot_gpr_5 = (aot_gpr_23 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0022.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 216u, 0x08A5CD18u, 0x0885F828u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0022_entry(rt, ctx, 912u, aot_mem);
#else
        recomp_unit_0022_entry(rt, ctx, 912u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0022_entry, 22u, 912u, 0x0885F828u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5CD18u) goto L_08A5CD18;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5CD18:
    aot_gpr_4 = (aot_gpr_23 | 0u);
    aot_gpr_31 = (0x08A5CD24u);
    aot_gpr_5 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 217u, 0x08A5CD24u, 0x08A58444u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 62u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 62u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 62u, 0x08A58444u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5CD24u) goto L_08A5CD24;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5CD24:
    aot_gpr_4 = (aot_gpr_23 | 0u);
    aot_gpr_31 = (0x08A5CD30u);
    aot_gpr_5 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 218u, 0x08A5CD30u, 0x08A58420u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 61u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 61u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 61u, 0x08A58420u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5CD30u) goto L_08A5CD30;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5CD30:
    aot_gpr_4 = (aot_gpr_23 | 0u);
    aot_gpr_31 = (0x08A5CD3Cu);
    aot_gpr_5 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 219u, 0x08A5CD3Cu, 0x08A58478u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 64u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 64u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 64u, 0x08A58478u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5CD3Cu) goto L_08A5CD3C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5CD3C:
    aot_gpr_4 = (aot_gpr_23 | 0u);
    aot_gpr_31 = (0x08A5CD48u);
    aot_gpr_5 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 220u, 0x08A5CD48u, 0x08A584B0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 66u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 66u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 66u, 0x08A584B0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5CD48u) goto L_08A5CD48;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5CD48:
    aot_gpr_4 = (aot_gpr_23 | 0u);
    aot_gpr_31 = (0x08A5CD54u);
    aot_gpr_5 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 221u, 0x08A5CD54u, 0x08A584D8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 67u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 67u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 67u, 0x08A584D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5CD54u) goto L_08A5CD54;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5CD54:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(236)));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-16385));
    aot_mem.aot_direct_store32(aot_gpr_23 + static_cast<std::uint32_t>(264), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_23 + static_cast<std::uint32_t>(236), aot_gpr_4);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-4097));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(92)));
    aot_mem.aot_direct_store32(aot_gpr_23 + static_cast<std::uint32_t>(236), aot_gpr_4);
    aot_gpr_4 = (aot_gpr_5 + static_cast<std::uint32_t>(192));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    aot_gpr_31 = (0x08A5CD8Cu);
    aot_gpr_4 = (aot_gpr_23 + aot_gpr_5);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5CD8Cu) goto L_08A5CD8C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A5CD8C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(92)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(200));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    aot_gpr_31 = (0x08A5CDA4u);
    aot_gpr_4 = (aot_gpr_23 + aot_gpr_5);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5CDA4u) goto L_08A5CDA4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A5CDA4:
    ctx.gpr[16] = (0u | 0u);
    goto L_08A5CDA8;
L_08A5CDA8:
    aot_gpr_31 = (0x08A5CDB0u);
    aot_gpr_4 = (aot_gpr_23 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0152.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 225u, 0x08A5CDB0u, 0x08A67B3Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0152_entry(rt, ctx, 727u, aot_mem);
#else
        recomp_unit_0152_entry(rt, ctx, 727u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0152_entry, 152u, 727u, 0x08A67B3Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5CDB0u) goto L_08A5CDB0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5CDB0:
    { const bool branch_taken = aot_gpr_2 == 0u;
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[16]) < 5 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A5CE08;
      }
      goto L_08A5CDB8;
    }
L_08A5CDB8:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[16] = (ctx.gpr[16] & 65535u);
      if (branch_taken) {
          goto L_08A5CE08;
      }
      goto L_08A5CDC4;
    }
L_08A5CDC4:
    aot_gpr_4 = (aot_gpr_23 | 0u);
    aot_gpr_31 = (0x08A5CDD0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0023.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 228u, 0x08A5CDD0u, 0x08860358u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0023_entry(rt, ctx, 7u, aot_mem);
#else
        recomp_unit_0023_entry(rt, ctx, 7u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 7u, 0x08860358u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5CDD0u) goto L_08A5CDD0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5CDD0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(92)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(192));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    aot_gpr_31 = (0x08A5CDE8u);
    aot_gpr_4 = (aot_gpr_23 + aot_gpr_5);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5CDE8u) goto L_08A5CDE8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A5CDE8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(92)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(200));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    aot_gpr_31 = (0x08A5CE00u);
    aot_gpr_4 = (aot_gpr_23 + aot_gpr_5);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5CE00u) goto L_08A5CE00;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A5CE00:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08A5CDA8;
      }
      goto L_08A5CE08;
    }
L_08A5CE08:
    aot_gpr_4 = (aot_gpr_23 | 0u);
    aot_gpr_31 = (0x08A5CE14u);
    aot_gpr_5 = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 232u, 0x08A5CE14u, 0x08A58478u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 64u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 64u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 64u, 0x08A58478u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5CE14u) goto L_08A5CE14;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5CE14:
    aot_gpr_4 = (aot_gpr_23 | 0u);
    aot_gpr_31 = (0x08A5CE20u);
    aot_gpr_5 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 233u, 0x08A5CE20u, 0x08A58444u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 62u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 62u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 62u, 0x08A58444u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5CE20u) goto L_08A5CE20;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5CE20:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08A5CE2Cu);
    aot_gpr_5 = (0u | 2u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 234u, 0x08A5CE2Cu, 0x08A5822Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 24u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 24u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 24u, 0x08A5822Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5CE2Cu) goto L_08A5CE2C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5CE2C:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(2092), static_cast<std::uint8_t>(ctx.gpr[19]));
      if (branch_taken) {
          goto L_08A5CEF4;
      }
      goto L_08A5CE34;
    }
L_08A5CE34:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_23 + static_cast<std::uint32_t>(1280))))));
    aot_gpr_4 = (aot_gpr_4 & 1u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08A5CEF4;
      }
      goto L_08A5CE44;
    }
L_08A5CE44:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_23 + static_cast<std::uint32_t>(1280))))));
    aot_gpr_4 = (aot_gpr_4 & 2u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08A5CEF4;
      }
      goto L_08A5CE54;
    }
L_08A5CE54:
    aot_gpr_31 = (0x08A5CE5Cu);
    aot_gpr_4 = (aot_gpr_23 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 238u, 0x08A5CE5Cu, 0x08A58294u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 32u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 32u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 32u, 0x08A58294u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5CE5Cu) goto L_08A5CE5C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5CE5C:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(8)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < ctx.fpr[28])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08A5CEB4;
      }
      goto L_08A5CE70;
    }
L_08A5CE70:
    aot_gpr_4 = (48863u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(600)));
    aot_gpr_4 = (aot_gpr_4 | 26355u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08A5CEF4;
      }
      goto L_08A5CE90;
    }
L_08A5CE90:
    aot_gpr_31 = (0x08A5CE98u);
    aot_fpr_20 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(600)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 241u, 0x08A5CE98u, 0x08A583C0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 52u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 52u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 52u, 0x08A583C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5CE98u) goto L_08A5CE98;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5CE98:
    aot_gpr_4 = (15374u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 64053u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_0; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = aot_fpr_20 - aot_fpr_12;
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_23 + static_cast<std::uint32_t>(600), std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_08A5CEF4;
      }
      goto L_08A5CEB4;
    }
L_08A5CEB4:
    aot_gpr_4 = (16095u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(600)));
    aot_gpr_4 = (aot_gpr_4 | 26355u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08A5CEF4;
      }
      goto L_08A5CED4;
    }
L_08A5CED4:
    aot_gpr_31 = (0x08A5CEDCu);
    aot_fpr_20 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(600)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 244u, 0x08A5CEDCu, 0x08A583C0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 52u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 52u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 52u, 0x08A583C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5CEDCu) goto L_08A5CEDC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5CEDC:
    aot_gpr_4 = (15374u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 64053u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_0; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = aot_fpr_20 + aot_fpr_12;
    aot_mem.aot_direct_store32(aot_gpr_23 + static_cast<std::uint32_t>(600), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_08A5CEF4;
L_08A5CEF4:
    aot_fpr_20 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(220)));
    aot_gpr_31 = (0x08A5CF00u);
    aot_gpr_4 = (aot_gpr_23 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 246u, 0x08A5CF00u, 0x08A583ECu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 56u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 56u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 56u, 0x08A583ECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5CF00u) goto L_08A5CF00;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5CF00:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_08A5D058;
      }
      goto L_08A5CF08;
    }
L_08A5CF08:
    aot_gpr_31 = (0x08A5CF10u);
    aot_gpr_4 = (aot_gpr_23 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 248u, 0x08A5CF10u, 0x08A587E4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 116u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 116u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 116u, 0x08A587E4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5CF10u) goto L_08A5CF10;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5CF10:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08A5D058;
      }
      goto L_08A5CF18;
    }
L_08A5CF18:
    aot_gpr_31 = (0x08A5CF20u);
    aot_gpr_4 = (aot_gpr_23 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 250u, 0x08A5CF20u, 0x08A587E4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 116u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 116u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 116u, 0x08A587E4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5CF20u) goto L_08A5CF20;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5CF20:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(80)));
    aot_gpr_31 = (0x08A5CF2Cu);
    aot_gpr_5 = (0u | 192u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0886D4BC, 26u, 206u, 0x0886D4BCu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0026_entry, 26u, 206u, 0x0886D4BCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5CF2Cu) goto L_08A5CF2C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A5CF2C:
    ctx.gpr[16] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
      if (branch_taken) {
          goto L_08A5D058;
      }
      goto L_08A5CF38;
    }
L_08A5CF38:
    aot_gpr_31 = (0x08A5CF40u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 253u, 0x08A5CF40u, 0x08A583C8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 53u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 53u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 53u, 0x08A583C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5CF40u) goto L_08A5CF40;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5CF40:
    aot_gpr_4 = (16128u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_0 <= ctx.fpr[26])) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08A5D058;
      }
      goto L_08A5CF58;
    }
L_08A5CF58:
    aot_gpr_31 = (0x08A5CF60u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 255u, 0x08A5CF60u, 0x08A583D0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 54u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 54u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 54u, 0x08A583D0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5CF60u) goto L_08A5CF60;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5CF60:
    aot_gpr_4 = (15733u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 49807u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_0 <= aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08A5D058;
      }
      goto L_08A5CF7C;
    }
L_08A5CF7C:
    aot_gpr_31 = (0x08A5CF84u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 257u, 0x08A5CF84u, 0x08A583D0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 54u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 54u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 54u, 0x08A583D0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5CF84u) goto L_08A5CF84;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5CF84:
    aot_gpr_4 = (15887u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 23593u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_0 < aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (16153u << 16u);
      if (branch_taken) {
          goto L_08A5D058;
      }
      goto L_08A5CFA0;
    }
L_08A5CFA0:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(220)));
    aot_gpr_4 = (aot_gpr_4 | 39322u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_4 = (aot_gpr_23 | 0u);
    aot_gpr_31 = (0x08A5CFBCu);
    aot_mem.aot_direct_store32(aot_gpr_23 + static_cast<std::uint32_t>(220), std::bit_cast<std::uint32_t>(aot_fpr_12));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 259u, 0x08A5CFBCu, 0x08A587D4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 114u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 114u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 114u, 0x08A587D4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5CFBCu) goto L_08A5CFBC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5CFBC:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_0 <= ctx.fpr[26])) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08A5D058;
      }
      goto L_08A5CFCC;
    }
L_08A5CFCC:
    aot_gpr_31 = (0x08A5CFD4u);
    aot_gpr_4 = (aot_gpr_23 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 261u, 0x08A5CFD4u, 0x08A585E0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 79u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 79u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 79u, 0x08A585E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5CFD4u) goto L_08A5CFD4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5CFD4:
    ctx.gpr[16] = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x08A5CFE0u);
    aot_gpr_4 = (aot_gpr_23 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 262u, 0x08A5CFE0u, 0x08A5829Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 33u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 33u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 33u, 0x08A5829Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5CFE0u) goto L_08A5CFE0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5CFE0:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08A5CFECu);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0148.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 263u, 0x08A5CFECu, 0x08A57F04u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0148_entry(rt, ctx, 900u, aot_mem);
#else
        recomp_unit_0148_entry(rt, ctx, 900u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0148_entry, 148u, 900u, 0x08A57F04u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5CFECu) goto L_08A5CFEC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5CFEC:
    aot_gpr_4 = (16000u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_0 <= aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08A5D058;
      }
      goto L_08A5D004;
    }
L_08A5D004:
    aot_gpr_31 = (0x08A5D00Cu);
    ctx.gpr[16] = (aot_gpr_29 + static_cast<std::uint32_t>(784));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 265u, 0x08A5D00Cu, 0x08A583C0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 52u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 52u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 52u, 0x08A583C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5D00Cu) goto L_08A5D00C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5D00C:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(208)));
    aot_gpr_4 = (15363u << 16u);
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[30]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_4 = (aot_gpr_4 | 4719u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (aot_gpr_23 | 0u);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_31 = (0x08A5D030u);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_0; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[26] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[26] = fs * ft; }
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 266u, 0x08A5D030u, 0x08A5829Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 33u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 33u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 33u, 0x08A5829Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5D030u) goto L_08A5D030;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5D030:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x08A5D040u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0148.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 267u, 0x08A5D040u, 0x08A57F64u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0148_entry(rt, ctx, 904u, aot_mem);
#else
        recomp_unit_0148_entry(rt, ctx, 904u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0148_entry, 148u, 904u, 0x08A57F64u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5D040u) goto L_08A5D040;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5D040:
    aot_gpr_4 = (aot_gpr_23 | 0u);
    aot_gpr_31 = (0x08A5D04Cu);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 268u, 0x08A5D04Cu, 0x08A58604u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 82u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 82u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 82u, 0x08A58604u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5D04Cu) goto L_08A5D04C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5D04C:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_23 + static_cast<std::uint32_t>(1280))))));
    aot_gpr_4 = (aot_gpr_4 | 4u);
    aot_mem.aot_direct_store8(aot_gpr_23 + static_cast<std::uint32_t>(1280), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_08A5D058;
L_08A5D058:
    aot_gpr_31 = (0x08A5D060u);
    aot_gpr_4 = (aot_gpr_23 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0152.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 270u, 0x08A5D060u, 0x08A666DCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0152_entry(rt, ctx, 540u, aot_mem);
#else
        recomp_unit_0152_entry(rt, ctx, 540u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0152_entry, 152u, 540u, 0x08A666DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5D060u) goto L_08A5D060;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5D060:
    aot_mem.aot_direct_store32(aot_gpr_23 + static_cast<std::uint32_t>(220), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x08A5D06Cu);
    aot_gpr_4 = (aot_gpr_23 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 271u, 0x08A5D06Cu, 0x08A5B278u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 671u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 671u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 671u, 0x08A5B278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5D06Cu) goto L_08A5D06C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5D06C:
    ctx.gpr[6] = (16256u << 16u);
    aot_gpr_4 = (0u | 0u);
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[6]);
    aot_gpr_5 = (aot_gpr_23 | 0u);
    goto L_08A5D07C;
L_08A5D07C:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(1316)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(1332)));
    aot_fpr_13 = aot_fpr_13 / ctx.fpr[14];
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(1216)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(aot_gpr_4) < 4 ? 1u : 0u);
    aot_fpr_13 = aot_fpr_12 - aot_fpr_13;
    ctx.fpr[15] = ctx.fpr[15] - aot_fpr_13;
    aot_fpr_13 = aot_fpr_12 - aot_fpr_13;
    aot_fpr_13 = ctx.fpr[15] / aot_fpr_13;
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(1216), std::bit_cast<std::uint32_t>(aot_fpr_13));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A5D07C;
      }
      goto L_08A5D0B0;
    }
L_08A5D0B0:
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(2109), static_cast<std::uint8_t>(ctx.gpr[22]));
    { const std::uint32_t aot_run_words[4]{std::bit_cast<std::uint32_t>(ctx.fpr[28]), std::bit_cast<std::uint32_t>(ctx.fpr[28]), std::bit_cast<std::uint32_t>(ctx.fpr[28]), std::bit_cast<std::uint32_t>(ctx.fpr[28])};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(592), aot_run_words); }
    ctx.gpr[19] = (0u | 0u);
    aot_gpr_31 = (0x08A5D0D0u);
    aot_gpr_4 = (aot_gpr_23 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 274u, 0x08A5D0D0u, 0x08A585E0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 79u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 79u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 79u, 0x08A585E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5D0D0u) goto L_08A5D0D0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5D0D0:
    ctx.gpr[16] = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x08A5D0DCu);
    aot_gpr_4 = (aot_gpr_23 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 275u, 0x08A5D0DCu, 0x08A5829Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 33u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 33u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 33u, 0x08A5829Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5D0DCu) goto L_08A5D0DC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5D0DC:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08A5D0E8u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0148.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 276u, 0x08A5D0E8u, 0x08A57F04u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0148_entry(rt, ctx, 900u, aot_mem);
#else
        recomp_unit_0148_entry(rt, ctx, 900u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0148_entry, 148u, 900u, 0x08A57F04u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5D0E8u) goto L_08A5D0E8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5D0E8:
    aot_gpr_31 = (0x08A5D0F0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_0));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 277u, 0x08A5D0F0u, 0x08A580BCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 8u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 8u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 8u, 0x08A580BCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5D0F0u) goto L_08A5D0F0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5D0F0:
    aot_gpr_4 = (16928u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_0; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_4 = (16025u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 39322u);
    ctx.gpr[16] = (0u | 0u);
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[18] = (aot_gpr_29 + static_cast<std::uint32_t>(800));
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    ctx.gpr[21] = (aot_gpr_29 + static_cast<std::uint32_t>(816));
    ctx.gpr[20] = (aot_gpr_29 + static_cast<std::uint32_t>(832));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[22] = (aot_gpr_5 & 65535u);
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(98));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 1u));
    goto L_08A5D12C;
L_08A5D12C:
    aot_gpr_4 = (aot_gpr_4 >> 31u);
    aot_gpr_4 = (ctx.gpr[16] + aot_gpr_4);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 1u));
    aot_gpr_4 = (aot_gpr_4 & 65535u);
    aot_gpr_4 = (aot_gpr_23 + aot_gpr_4);
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(1076)));
    ctx.gpr[17] = (ctx.gpr[16] << 2u);
    { const bool branch_taken = aot_gpr_5 != ctx.gpr[30];
    ctx.gpr[17] = (aot_gpr_23 + ctx.gpr[17]);
      if (branch_taken) {
          goto L_08A5D15C;
      }
      goto L_08A5D150;
    }
L_08A5D150:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5888)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1216), std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_08A5D1E4;
      }
      goto L_08A5D15C;
    }
L_08A5D15C:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(1076)));
    aot_gpr_5 = (0u | 1u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08A5D1E4;
      }
      goto L_08A5D16C;
    }
L_08A5D16C:
    { const bool branch_taken = ctx.gpr[16] == 0u;
      if (branch_taken) {
          goto L_08A5D17C;
      }
      goto L_08A5D174;
    }
L_08A5D174:
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[30];
      if (branch_taken) {
          goto L_08A5D1A0;
      }
      goto L_08A5D17C;
    }
L_08A5D17C:
    aot_gpr_4 = (0u | 0u);
    aot_gpr_31 = (0x08A5D188u);
    aot_gpr_5 = (ctx.gpr[22] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 284u, 0x08A5D188u, 0x08A58568u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 76u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 76u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 76u, 0x08A58568u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5D188u) goto L_08A5D188;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5D188:
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_2) < 100 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08A5D19C;
      }
      goto L_08A5D194;
    }
L_08A5D194:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 1u);
      if (branch_taken) {
          goto L_08A5D1A0;
      }
      goto L_08A5D19C;
    }
L_08A5D19C:
    ctx.gpr[19] = (0u | 0u);
    goto L_08A5D1A0;
L_08A5D1A0:
    { const bool branch_taken = ctx.gpr[19] == 0u;
      if (branch_taken) {
          goto L_08A5D1E4;
      }
      goto L_08A5D1A8;
    }
L_08A5D1A8:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1332)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1316)));
    aot_fpr_12 = aot_fpr_12 - aot_fpr_13;
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1216)));
    { const float fs = aot_fpr_12; const float ft = aot_fpr_20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = aot_fpr_12 / aot_fpr_13;
    aot_fpr_12 = ctx.fpr[14] + aot_fpr_12;
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1216), std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5888)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= ctx.fpr[15])) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08A5D1E4;
      }
      goto L_08A5D1DC;
    }
L_08A5D1DC:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5888)));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1216), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_08A5D1E4;
L_08A5D1E4:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1216)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5888)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08A5D2B0;
      }
      goto L_08A5D1FC;
    }
L_08A5D1FC:
    aot_gpr_4 = (ctx.gpr[16] << 4u);
    ctx.gpr[17] = (aot_gpr_29 + aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[16] << 5u);
    aot_gpr_4 = (aot_gpr_23 + aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2120), ctx.gpr[22]);
    aot_gpr_31 = (0x08A5D218u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1088));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 292u, 0x08A5D218u, 0x08A58504u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 69u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 69u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 69u, 0x08A58504u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5D218u) goto L_08A5D218;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5D218:
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2116), ctx.gpr[21]);
    aot_gpr_31 = (0x08A5D228u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 293u, 0x08A5D228u, 0x08A580DCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 10u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 10u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 10u, 0x08A580DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5D228u) goto L_08A5D228;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5D228:
    ctx.gpr[21] = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x08A5D234u);
    aot_gpr_4 = (aot_gpr_23 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 294u, 0x08A5D234u, 0x08A582FCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 40u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 40u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 40u, 0x08A582FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5D234u) goto L_08A5D234;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5D234:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    aot_gpr_31 = (0x08A5D244u);
    ctx.gpr[6] = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0148.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 295u, 0x08A5D244u, 0x08A57F4Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0148_entry(rt, ctx, 903u, aot_mem);
#else
        recomp_unit_0148_entry(rt, ctx, 903u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0148_entry, 148u, 903u, 0x08A57F4Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5D244u) goto L_08A5D244;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5D244:
    aot_gpr_4 = (ctx.gpr[17] + static_cast<std::uint32_t>(528));
    aot_gpr_31 = (0x08A5D250u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 296u, 0x08A5D250u, 0x08A58168u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 15u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 15u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 15u, 0x08A58168u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5D250u) goto L_08A5D250;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5D250:
    ctx.gpr[21] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(2056)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(400));
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    aot_gpr_31 = (0x08A5D264u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 297u, 0x08A5D264u, 0x08A58334u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 45u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 45u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 45u, 0x08A58334u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5D264u) goto L_08A5D264;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5D264:
    ctx.gpr[22] = (aot_gpr_2 + static_cast<std::uint32_t>(16));
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    aot_gpr_31 = (0x08A5D274u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 298u, 0x08A5D274u, 0x08A58334u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 45u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 45u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 45u, 0x08A58334u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5D274u) goto L_08A5D274;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5D274:
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_5 = (ctx.gpr[22] | 0u);
    aot_gpr_31 = (0x08A5D284u);
    ctx.gpr[6] = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0148.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 299u, 0x08A5D284u, 0x08A57F4Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0148_entry(rt, ctx, 903u, aot_mem);
#else
        recomp_unit_0148_entry(rt, ctx, 903u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0148_entry, 148u, 903u, 0x08A57F4Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5D284u) goto L_08A5D284;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5D284:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (aot_gpr_23 | 0u);
    aot_gpr_31 = (0x08A5D294u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0148.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 300u, 0x08A5D294u, 0x08A57E9Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0148_entry(rt, ctx, 897u, aot_mem);
#else
        recomp_unit_0148_entry(rt, ctx, 897u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0148_entry, 148u, 897u, 0x08A57E9Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5D294u) goto L_08A5D294;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5D294:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08A5D2A0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 301u, 0x08A5D2A0u, 0x08A58168u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 15u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 15u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 15u, 0x08A58168u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5D2A0u) goto L_08A5D2A0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5D2A0:
    aot_gpr_31 = (0x08A5D2A8u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 302u, 0x08A5D2A8u, 0x08A5810Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 12u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 12u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 12u, 0x08A5810Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5D2A8u) goto L_08A5D2A8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5D2A8:
    ctx.gpr[21] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(2116)));
    ctx.gpr[22] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(2120)));
    goto L_08A5D2B0;
L_08A5D2B0:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[16] & 65535u);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[16]) < 4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 1u));
      if (branch_taken) {
          goto L_08A5D12C;
      }
      goto L_08A5D2C4;
    }
L_08A5D2C4:
    aot_mem.aot_direct_store32(aot_gpr_23 + static_cast<std::uint32_t>(1272), 0u);
    aot_mem.aot_direct_store32(aot_gpr_23 + static_cast<std::uint32_t>(1268), 0u);
    aot_mem.aot_direct_store8(aot_gpr_23 + static_cast<std::uint32_t>(1279), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (16256u << 16u);
    aot_mem.aot_direct_store8(aot_gpr_23 + static_cast<std::uint32_t>(1278), static_cast<std::uint8_t>(0u));
    ctx.fpr[26] = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[22] = (aot_gpr_29 + static_cast<std::uint32_t>(848));
    ctx.gpr[19] = (aot_gpr_23 | 0u);
    ctx.gpr[18] = (aot_gpr_23 + static_cast<std::uint32_t>(1088));
    ctx.gpr[21] = (aot_gpr_29 + static_cast<std::uint32_t>(400));
    ctx.gpr[17] = (aot_gpr_29 + static_cast<std::uint32_t>(528));
    ctx.gpr[20] = (aot_gpr_29 + static_cast<std::uint32_t>(592));
    goto L_08A5D2F8;
L_08A5D2F8:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1216)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5888)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08A5D44C;
      }
      goto L_08A5D310;
    }
L_08A5D310:
    aot_gpr_31 = (0x08A5D318u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(352)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 307u, 0x08A5D318u, 0x08A58740u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 98u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 98u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 98u, 0x08A58740u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5D318u) goto L_08A5D318;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5D318:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[30];
    aot_fpr_20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_0));
      if (branch_taken) {
          goto L_08A5D32C;
      }
      goto L_08A5D320;
    }
L_08A5D320:
    aot_gpr_4 = (0u | 3u);
    { const bool branch_taken = ctx.gpr[16] != aot_gpr_4;
      if (branch_taken) {
          goto L_08A5D330;
      }
      goto L_08A5D32C;
    }
L_08A5D32C:
    aot_fpr_20 = ctx.fpr[26] - aot_fpr_20;
    goto L_08A5D330;
L_08A5D330:
    aot_gpr_31 = (0x08A5D338u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 311u, 0x08A5D338u, 0x08A5850Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 70u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 70u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 70u, 0x08A5850Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5D338u) goto L_08A5D338;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5D338:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(8)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= ctx.fpr[22])) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08A5D39C;
      }
      goto L_08A5D34C;
    }
L_08A5D34C:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2124), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2112), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_gpr_31 = (0x08A5D35Cu);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(352)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 313u, 0x08A5D35Cu, 0x08A58730u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 96u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 96u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 96u, 0x08A58730u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5D35Cu) goto L_08A5D35C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5D35C:
    ctx.fpr[30] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_0));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1216)));
    aot_gpr_31 = (0x08A5D36Cu);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 314u, 0x08A5D36Cu, 0x08A5850Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 70u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 70u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 70u, 0x08A5850Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5D36Cu) goto L_08A5D36C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5D36C:
    aot_gpr_4 = (aot_gpr_23 | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    ctx.gpr[7] = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x08A5D390u);
    ctx.gpr[8] = (ctx.gpr[20] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0153.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 315u, 0x08A5D390u, 0x08A68118u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0153_entry(rt, ctx, 9u, aot_mem);
#else
        recomp_unit_0153_entry(rt, ctx, 9u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0153_entry, 153u, 9u, 0x08A68118u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5D390u) goto L_08A5D390;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5D390:
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(2112)));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(2124)));
      if (branch_taken) {
          goto L_08A5D3C4;
      }
      goto L_08A5D39C;
    }
L_08A5D39C:
    aot_gpr_31 = (0x08A5D3A4u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(352)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 317u, 0x08A5D3A4u, 0x08A58730u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 96u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 96u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 96u, 0x08A58730u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5D3A4u) goto L_08A5D3A4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5D3A4:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1216)));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_0));
    aot_gpr_4 = (aot_gpr_23 | 0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08A5D3C4u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0153.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 318u, 0x08A5D3C4u, 0x08A68000u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0153_entry(rt, ctx, 1u, aot_mem);
#else
        recomp_unit_0153_entry(rt, ctx, 1u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0153_entry, 153u, 1u, 0x08A68000u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5D3C4u) goto L_08A5D3C4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5D3C4:
    aot_gpr_31 = (0x08A5D3CCu);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 319u, 0x08A5D3CCu, 0x08A58524u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 73u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 73u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 73u, 0x08A58524u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5D3CCu) goto L_08A5D3CC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5D3CC:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 2 ? 1u : 0u);
    ctx.gpr[7] = (0u | 1u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    ctx.gpr[8] = (0u | 1u);
      if (branch_taken) {
          goto L_08A5D444;
      }
      goto L_08A5D3E0;
    }
L_08A5D3E0:
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 34 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-2));
      if (branch_taken) {
          goto L_08A5D444;
      }
      goto L_08A5D3EC;
    }
L_08A5D3EC:
    aot_gpr_4 = (aot_gpr_4 << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_4);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(8296)));
    jump_target = ctx.gpr[1];
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A5D404:
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[16]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08A5D41C;
      }
      goto L_08A5D410;
    }
L_08A5D410:
    aot_mem.aot_direct_store32(aot_gpr_23 + static_cast<std::uint32_t>(1268), ctx.gpr[30]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_23 + static_cast<std::uint32_t>(1278), static_cast<std::uint8_t>(ctx.gpr[8]));
      if (branch_taken) {
          goto L_08A5D424;
      }
      goto L_08A5D41C;
    }
L_08A5D41C:
    aot_mem.aot_direct_store32(aot_gpr_23 + static_cast<std::uint32_t>(1272), ctx.gpr[30]);
    aot_mem.aot_direct_store8(aot_gpr_23 + static_cast<std::uint32_t>(1279), static_cast<std::uint8_t>(ctx.gpr[8]));
    goto L_08A5D424;
L_08A5D424:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08A5D444;
      }
      goto L_08A5D42C;
    }
L_08A5D42C:
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[16]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08A5D440;
      }
      goto L_08A5D438;
    }
L_08A5D438:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_23 + static_cast<std::uint32_t>(1268), ctx.gpr[7]);
      if (branch_taken) {
          goto L_08A5D444;
      }
      goto L_08A5D440;
    }
L_08A5D440:
    aot_mem.aot_direct_store32(aot_gpr_23 + static_cast<std::uint32_t>(1272), ctx.gpr[7]);
    goto L_08A5D444;
L_08A5D444:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08A5D474;
      }
      goto L_08A5D44C;
    }
L_08A5D44C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(2056)));
    aot_gpr_31 = (0x08A5D458u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 331u, 0x08A5D458u, 0x08A58334u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 45u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 45u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 45u, 0x08A58334u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5D458u) goto L_08A5D458;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5D458:
    ctx.gpr[6] = (aot_gpr_2 + static_cast<std::uint32_t>(16));
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    aot_gpr_31 = (0x08A5D468u);
    aot_gpr_5 = (aot_gpr_23 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0148.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 332u, 0x08A5D468u, 0x08A57E9Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0148_entry(rt, ctx, 897u, aot_mem);
#else
        recomp_unit_0148_entry(rt, ctx, 897u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0148_entry, 148u, 897u, 0x08A57E9Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5D468u) goto L_08A5D468;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5D468:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08A5D474u);
    aot_gpr_5 = (ctx.gpr[22] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 333u, 0x08A5D474u, 0x08A58168u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 15u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 15u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 15u, 0x08A58168u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5D474u) goto L_08A5D474;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5D474:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(32));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(16));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[16]) < 4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A5D2F8;
      }
      goto L_08A5D494;
    }
L_08A5D494:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[21] = (aot_gpr_29 + static_cast<std::uint32_t>(864));
    ctx.gpr[20] = (aot_gpr_29 + static_cast<std::uint32_t>(880));
    goto L_08A5D4A0;
L_08A5D4A0:
    ctx.gpr[18] = (ctx.gpr[19] << 4u);
    ctx.gpr[6] = (aot_gpr_29 + ctx.gpr[18]);
    ctx.gpr[17] = (ctx.gpr[6] + static_cast<std::uint32_t>(464));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(528));
    aot_gpr_4 = (aot_gpr_23 | 0u);
    aot_gpr_31 = (0x08A5D4BCu);
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 336u, 0x08A5D4BCu, 0x08A58658u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 86u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 86u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 86u, 0x08A58658u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5D4BCu) goto L_08A5D4BC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5D4BC:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08A5D4C8u);
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 337u, 0x08A5D4C8u, 0x08A58168u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 15u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 15u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 15u, 0x08A58168u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5D4C8u) goto L_08A5D4C8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5D4C8:
    ctx.gpr[16] = (ctx.gpr[19] << 2u);
    ctx.gpr[16] = (aot_gpr_23 + ctx.gpr[16]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1404)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08A5D500;
      }
      goto L_08A5D4DC;
    }
L_08A5D4DC:
    ctx.gpr[6] = (aot_gpr_23 + ctx.gpr[18]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1404)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1424));
    aot_gpr_31 = (0x08A5D4F0u);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 339u, 0x08A5D4F0u, 0x08A58658u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 86u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 86u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 86u, 0x08A58658u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5D4F0u) goto L_08A5D4F0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5D4F0:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08A5D4FCu);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0163.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 340u, 0x08A5D4FCu, 0x08A931D0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0163_entry(rt, ctx, 464u, aot_mem);
#else
        recomp_unit_0163_entry(rt, ctx, 464u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0163_entry, 163u, 464u, 0x08A931D0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5D4FCu) goto L_08A5D4FC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5D4FC:
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1404), 0u);
    goto L_08A5D500;
L_08A5D500:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[19] = (ctx.gpr[19] & 65535u);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[19]) < 4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08A5D4A0;
      }
      goto L_08A5D514;
    }
L_08A5D514:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(1216)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5888)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08A5D544;
      }
      goto L_08A5D52C;
    }
L_08A5D52C:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(1220)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5888)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08A5D664;
      }
      goto L_08A5D544;
    }
L_08A5D544:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(1216)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5888)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    ctx.gpr[16] = (aot_gpr_29 + static_cast<std::uint32_t>(608));
      if (branch_taken) {
          goto L_08A5D584;
      }
      goto L_08A5D55C;
    }
L_08A5D55C:
    aot_gpr_31 = (0x08A5D564u);
    aot_gpr_4 = (aot_gpr_23 + static_cast<std::uint32_t>(1088));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 346u, 0x08A5D564u, 0x08A5850Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 70u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 70u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 70u, 0x08A5850Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5D564u) goto L_08A5D564;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5D564:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(896));
    aot_gpr_31 = (0x08A5D570u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 347u, 0x08A5D570u, 0x08A580DCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 10u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 10u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 10u, 0x08A580DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5D570u) goto L_08A5D570;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5D570:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08A5D57Cu);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 348u, 0x08A5D57Cu, 0x08A58168u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 15u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 15u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 15u, 0x08A58168u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5D57Cu) goto L_08A5D57C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5D57C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08A5D5A4;
      }
      goto L_08A5D584;
    }
L_08A5D584:
    aot_gpr_31 = (0x08A5D58Cu);
    aot_gpr_4 = (aot_gpr_23 + static_cast<std::uint32_t>(1120));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 350u, 0x08A5D58Cu, 0x08A5850Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 70u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 70u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 70u, 0x08A5850Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5D58Cu) goto L_08A5D58C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5D58C:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(912));
    aot_gpr_31 = (0x08A5D598u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 351u, 0x08A5D598u, 0x08A580DCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 10u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 10u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 10u, 0x08A580DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5D598u) goto L_08A5D598;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5D598:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08A5D5A4u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 352u, 0x08A5D5A4u, 0x08A58168u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 15u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 15u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 15u, 0x08A58168u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5D5A4u) goto L_08A5D5A4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5D5A4:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(616)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= ctx.fpr[22])) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08A5D5D4;
      }
      goto L_08A5D5B8;
    }
L_08A5D5B8:
    ctx.gpr[17] = (aot_gpr_29 + static_cast<std::uint32_t>(928));
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08A5D5C8u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0148.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 354u, 0x08A5D5C8u, 0x08A57F20u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0148_entry(rt, ctx, 901u, aot_mem);
#else
        recomp_unit_0148_entry(rt, ctx, 901u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0148_entry, 148u, 901u, 0x08A57F20u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5D5C8u) goto L_08A5D5C8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5D5C8:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(400));
    aot_gpr_31 = (0x08A5D5D4u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 355u, 0x08A5D5D4u, 0x08A58168u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 15u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 15u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 15u, 0x08A58168u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5D5D4u) goto L_08A5D5D4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5D5D4:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(1220)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5888)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08A5D614;
      }
      goto L_08A5D5EC;
    }
L_08A5D5EC:
    aot_gpr_31 = (0x08A5D5F4u);
    aot_gpr_4 = (aot_gpr_23 + static_cast<std::uint32_t>(1120));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 357u, 0x08A5D5F4u, 0x08A5850Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 70u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 70u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 70u, 0x08A5850Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5D5F4u) goto L_08A5D5F4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5D5F4:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(944));
    aot_gpr_31 = (0x08A5D600u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 358u, 0x08A5D600u, 0x08A580DCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 10u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 10u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 10u, 0x08A580DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5D600u) goto L_08A5D600;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5D600:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08A5D60Cu);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 359u, 0x08A5D60Cu, 0x08A58168u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 15u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 15u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 15u, 0x08A58168u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5D60Cu) goto L_08A5D60C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5D60C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08A5D634;
      }
      goto L_08A5D614;
    }
L_08A5D614:
    aot_gpr_31 = (0x08A5D61Cu);
    aot_gpr_4 = (aot_gpr_23 + static_cast<std::uint32_t>(1088));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 361u, 0x08A5D61Cu, 0x08A5850Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 70u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 70u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 70u, 0x08A5850Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5D61Cu) goto L_08A5D61C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5D61C:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(960));
    aot_gpr_31 = (0x08A5D628u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 362u, 0x08A5D628u, 0x08A580DCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 10u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 10u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 10u, 0x08A580DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5D628u) goto L_08A5D628;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5D628:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08A5D634u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 363u, 0x08A5D634u, 0x08A58168u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 15u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 15u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 15u, 0x08A58168u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5D634u) goto L_08A5D634;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5D634:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(616)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= ctx.fpr[22])) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08A5D664;
      }
      goto L_08A5D648;
    }
L_08A5D648:
    ctx.gpr[17] = (aot_gpr_29 + static_cast<std::uint32_t>(976));
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08A5D658u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0148.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 365u, 0x08A5D658u, 0x08A57F20u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0148_entry(rt, ctx, 901u, aot_mem);
#else
        recomp_unit_0148_entry(rt, ctx, 901u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0148_entry, 148u, 901u, 0x08A57F20u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5D658u) goto L_08A5D658;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5D658:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(416));
    aot_gpr_31 = (0x08A5D664u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 366u, 0x08A5D664u, 0x08A58168u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 15u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 15u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 15u, 0x08A58168u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5D664u) goto L_08A5D664;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5D664:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(1224)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5888)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08A5D694;
      }
      goto L_08A5D67C;
    }
L_08A5D67C:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(1228)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5888)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08A5D7B4;
      }
      goto L_08A5D694;
    }
L_08A5D694:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(1224)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5888)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    ctx.gpr[16] = (aot_gpr_29 + static_cast<std::uint32_t>(608));
      if (branch_taken) {
          goto L_08A5D6D4;
      }
      goto L_08A5D6AC;
    }
L_08A5D6AC:
    aot_gpr_31 = (0x08A5D6B4u);
    aot_gpr_4 = (aot_gpr_23 + static_cast<std::uint32_t>(1152));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 370u, 0x08A5D6B4u, 0x08A5850Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 70u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 70u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 70u, 0x08A5850Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5D6B4u) goto L_08A5D6B4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5D6B4:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(992));
    aot_gpr_31 = (0x08A5D6C0u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 371u, 0x08A5D6C0u, 0x08A580DCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 10u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 10u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 10u, 0x08A580DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5D6C0u) goto L_08A5D6C0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5D6C0:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08A5D6CCu);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 372u, 0x08A5D6CCu, 0x08A58168u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 15u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 15u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 15u, 0x08A58168u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5D6CCu) goto L_08A5D6CC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5D6CC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08A5D6F4;
      }
      goto L_08A5D6D4;
    }
L_08A5D6D4:
    aot_gpr_31 = (0x08A5D6DCu);
    aot_gpr_4 = (aot_gpr_23 + static_cast<std::uint32_t>(1184));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 374u, 0x08A5D6DCu, 0x08A5850Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 70u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 70u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 70u, 0x08A5850Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5D6DCu) goto L_08A5D6DC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5D6DC:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(1008));
    aot_gpr_31 = (0x08A5D6E8u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 375u, 0x08A5D6E8u, 0x08A580DCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 10u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 10u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 10u, 0x08A580DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5D6E8u) goto L_08A5D6E8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5D6E8:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08A5D6F4u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 376u, 0x08A5D6F4u, 0x08A58168u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 15u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 15u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 15u, 0x08A58168u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5D6F4u) goto L_08A5D6F4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5D6F4:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(616)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= ctx.fpr[22])) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08A5D724;
      }
      goto L_08A5D708;
    }
L_08A5D708:
    ctx.gpr[17] = (aot_gpr_29 + static_cast<std::uint32_t>(1024));
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08A5D718u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0148.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 378u, 0x08A5D718u, 0x08A57F20u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0148_entry(rt, ctx, 901u, aot_mem);
#else
        recomp_unit_0148_entry(rt, ctx, 901u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0148_entry, 148u, 901u, 0x08A57F20u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5D718u) goto L_08A5D718;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5D718:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(432));
    aot_gpr_31 = (0x08A5D724u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 379u, 0x08A5D724u, 0x08A58168u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 15u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 15u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 15u, 0x08A58168u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5D724u) goto L_08A5D724;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5D724:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(1228)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5888)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08A5D764;
      }
      goto L_08A5D73C;
    }
L_08A5D73C:
    aot_gpr_31 = (0x08A5D744u);
    aot_gpr_4 = (aot_gpr_23 + static_cast<std::uint32_t>(1184));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 381u, 0x08A5D744u, 0x08A5850Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 70u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 70u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 70u, 0x08A5850Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5D744u) goto L_08A5D744;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5D744:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(1040));
    aot_gpr_31 = (0x08A5D750u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 382u, 0x08A5D750u, 0x08A580DCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 10u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 10u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 10u, 0x08A580DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5D750u) goto L_08A5D750;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5D750:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08A5D75Cu);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 383u, 0x08A5D75Cu, 0x08A58168u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 15u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 15u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 15u, 0x08A58168u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5D75Cu) goto L_08A5D75C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5D75C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08A5D784;
      }
      goto L_08A5D764;
    }
L_08A5D764:
    aot_gpr_31 = (0x08A5D76Cu);
    aot_gpr_4 = (aot_gpr_23 + static_cast<std::uint32_t>(1152));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 385u, 0x08A5D76Cu, 0x08A5850Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 70u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 70u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 70u, 0x08A5850Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5D76Cu) goto L_08A5D76C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5D76C:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(1056));
    aot_gpr_31 = (0x08A5D778u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 386u, 0x08A5D778u, 0x08A580DCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 10u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 10u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 10u, 0x08A580DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5D778u) goto L_08A5D778;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5D778:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08A5D784u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 387u, 0x08A5D784u, 0x08A58168u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 15u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 15u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 15u, 0x08A58168u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5D784u) goto L_08A5D784;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5D784:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(616)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= ctx.fpr[22])) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08A5D7B4;
      }
      goto L_08A5D798;
    }
L_08A5D798:
    ctx.gpr[17] = (aot_gpr_29 + static_cast<std::uint32_t>(1072));
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08A5D7A8u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0148.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 389u, 0x08A5D7A8u, 0x08A57F20u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0148_entry(rt, ctx, 901u, aot_mem);
#else
        recomp_unit_0148_entry(rt, ctx, 901u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0148_entry, 148u, 901u, 0x08A57F20u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5D7A8u) goto L_08A5D7A8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5D7A8:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(448));
    aot_gpr_31 = (0x08A5D7B4u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 390u, 0x08A5D7B4u, 0x08A58168u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 15u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 15u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 15u, 0x08A58168u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5D7B4u) goto L_08A5D7B4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5D7B4:
    aot_gpr_4 = (15395u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 55050u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(364), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_31 = (0x08A5D7CCu);
    aot_gpr_4 = (aot_gpr_23 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 391u, 0x08A5D7CCu, 0x08A585E0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 79u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 79u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 79u, 0x08A585E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5D7CCu) goto L_08A5D7CC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5D7CC:
    aot_gpr_31 = (0x08A5D7D4u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 392u, 0x08A5D7D4u, 0x08A58134u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 13u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 13u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 13u, 0x08A58134u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5D7D4u) goto L_08A5D7D4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5D7D4:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(368), std::bit_cast<std::uint32_t>(aot_fpr_0));
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(368));
    aot_gpr_31 = (0x08A5D7E4u);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(364));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0148.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 393u, 0x08A5D7E4u, 0x08A57FE4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0148_entry(rt, ctx, 910u, aot_mem);
#else
        recomp_unit_0148_entry(rt, ctx, 910u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0148_entry, 148u, 910u, 0x08A57FE4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5D7E4u) goto L_08A5D7E4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5D7E4:
    ctx.gpr[17] = (0u | 0u);
    goto L_08A5D7E8;
L_08A5D7E8:
    ctx.gpr[16] = (ctx.gpr[17] << 2u);
    aot_gpr_4 = (aot_gpr_23 + ctx.gpr[16]);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(1216)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5888)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08A5D838;
      }
      goto L_08A5D808;
    }
L_08A5D808:
    aot_gpr_31 = (0x08A5D810u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(352)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 396u, 0x08A5D810u, 0x08A58738u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 97u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 97u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 97u, 0x08A58738u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5D810u) goto L_08A5D810;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5D810:
    aot_gpr_4 = (aot_gpr_29 + ctx.gpr[16]);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_0));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(592)));
    aot_gpr_4 = (ctx.gpr[17] << 4u);
    ctx.gpr[7] = (aot_gpr_29 + aot_gpr_4);
    aot_gpr_5 = (ctx.gpr[7] + static_cast<std::uint32_t>(400));
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(528));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(464));
    aot_gpr_31 = (0x08A5D838u);
    aot_gpr_4 = (aot_gpr_23 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0153.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 397u, 0x08A5D838u, 0x08A6828Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0153_entry(rt, ctx, 21u, aot_mem);
#else
        recomp_unit_0153_entry(rt, ctx, 21u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0153_entry, 153u, 21u, 0x08A6828Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5D838u) goto L_08A5D838;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5D838:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[17] & 65535u);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[17]) < 4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08A5D7E8;
      }
      goto L_08A5D84C;
    }
L_08A5D84C:
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[22] = (aot_gpr_29 + static_cast<std::uint32_t>(1088));
    ctx.gpr[21] = (aot_gpr_29 + static_cast<std::uint32_t>(1104));
    ctx.gpr[17] = (aot_gpr_29 + static_cast<std::uint32_t>(464));
    ctx.gpr[19] = (aot_gpr_29 + static_cast<std::uint32_t>(528));
    ctx.gpr[16] = (aot_gpr_23 | 0u);
    ctx.gpr[18] = (aot_gpr_23 + static_cast<std::uint32_t>(1424));
    goto L_08A5D868;
L_08A5D868:
    aot_gpr_4 = (aot_gpr_23 | 0u);
    aot_gpr_5 = (ctx.gpr[22] | 0u);
    aot_gpr_31 = (0x08A5D878u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 400u, 0x08A5D878u, 0x08A58658u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 86u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 86u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 86u, 0x08A58658u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5D878u) goto L_08A5D878;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5D878:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08A5D884u);
    aot_gpr_5 = (ctx.gpr[22] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 401u, 0x08A5D884u, 0x08A58168u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 15u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 15u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 15u, 0x08A58168u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5D884u) goto L_08A5D884;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5D884:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1404)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08A5D8B0;
      }
      goto L_08A5D890;
    }
L_08A5D890:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1404)));
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    aot_gpr_31 = (0x08A5D8A0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 403u, 0x08A5D8A0u, 0x08A58658u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 86u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 86u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 86u, 0x08A58658u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5D8A0u) goto L_08A5D8A0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5D8A0:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08A5D8ACu);
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0163.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 404u, 0x08A5D8ACu, 0x08A931D0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0163_entry(rt, ctx, 464u, aot_mem);
#else
        recomp_unit_0163_entry(rt, ctx, 464u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0163_entry, 163u, 464u, 0x08A931D0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5D8ACu) goto L_08A5D8AC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5D8AC:
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1404), 0u);
    goto L_08A5D8B0;
L_08A5D8B0:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[20]) < 4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08A5D868;
      }
      goto L_08A5D8CC;
    }
L_08A5D8CC:
    aot_gpr_31 = (0x08A5D8D4u);
    aot_gpr_4 = (aot_gpr_23 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 407u, 0x08A5D8D4u, 0x08A585E0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 79u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 79u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 79u, 0x08A585E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5D8D4u) goto L_08A5D8D4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5D8D4:
    ctx.gpr[16] = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x08A5D8E0u);
    aot_gpr_4 = (aot_gpr_23 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 408u, 0x08A5D8E0u, 0x08A5829Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 33u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 33u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 33u, 0x08A5829Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5D8E0u) goto L_08A5D8E0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5D8E0:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08A5D8ECu);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0148.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 409u, 0x08A5D8ECu, 0x08A57F04u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0148_entry(rt, ctx, 900u, aot_mem);
#else
        recomp_unit_0148_entry(rt, ctx, 900u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0148_entry, 148u, 900u, 0x08A57F04u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5D8ECu) goto L_08A5D8EC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5D8EC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(352)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(624), std::bit_cast<std::uint32_t>(aot_fpr_0));
    ctx.gpr[8] = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(1778)));
    ctx.gpr[11] = (aot_mem.aot_direct_load8(aot_gpr_23 + static_cast<std::uint32_t>(1494)));
    ctx.gpr[8] = (0u < ctx.gpr[8] ? 1u : 0u);
    aot_gpr_2 = (ctx.gpr[8] & 255u);
    aot_gpr_5 = (aot_gpr_23 + static_cast<std::uint32_t>(604));
    ctx.gpr[6] = (aot_gpr_23 + static_cast<std::uint32_t>(644));
    ctx.gpr[7] = (aot_gpr_23 + static_cast<std::uint32_t>(648));
    ctx.gpr[8] = (aot_gpr_29 + static_cast<std::uint32_t>(624));
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    aot_gpr_31 = (0x08A5D924u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_2);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0053.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 410u, 0x08A5D924u, 0x088DBC28u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0053_entry(rt, ctx, 665u, aot_mem);
#else
        recomp_unit_0053_entry(rt, ctx, 665u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0053_entry, 53u, 665u, 0x088DBC28u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5D924u) goto L_08A5D924;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5D924:
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(216)));
    ctx.fpr[22] = aot_fpr_0 / ctx.fpr[22];
    aot_gpr_31 = (0x08A5D934u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 411u, 0x08A5D934u, 0x08A583C0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 52u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 52u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 52u, 0x08A583C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5D934u) goto L_08A5D934;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5D934:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(352)));
    aot_gpr_31 = (0x08A5D940u);
    aot_fpr_20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_0));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 412u, 0x08A5D940u, 0x08A58710u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 92u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 92u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 92u, 0x08A58710u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5D940u) goto L_08A5D940;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5D940:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(608)));
    { const float fs = aot_fpr_12; const float ft = aot_fpr_0; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    ctx.gpr[16] = (0u | 0u);
    aot_gpr_4 = (aot_gpr_23 | 0u);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_31 = (0x08A5D95Cu);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2104), std::bit_cast<std::uint32_t>(aot_fpr_12));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 413u, 0x08A5D95Cu, 0x08A583ECu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 56u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 56u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 56u, 0x08A583ECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5D95Cu) goto L_08A5D95C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5D95C:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08A5D990;
      }
      goto L_08A5D964;
    }
L_08A5D964:
    aot_gpr_31 = (0x08A5D96Cu);
    aot_gpr_4 = (aot_gpr_23 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 415u, 0x08A5D96Cu, 0x08A583ECu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 56u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 56u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 56u, 0x08A583ECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5D96Cu) goto L_08A5D96C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5D96C:
    aot_gpr_4 = (0u | 12u);
    { const bool branch_taken = aot_gpr_2 == aot_gpr_4;
      if (branch_taken) {
          goto L_08A5D990;
      }
      goto L_08A5D978;
    }
L_08A5D978:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(352)));
    aot_gpr_31 = (0x08A5D984u);
    aot_gpr_5 = (0u | 8u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 417u, 0x08A5D984u, 0x08A586F0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 90u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 90u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 90u, 0x08A586F0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5D984u) goto L_08A5D984;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5D984:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08A5D990;
      }
      goto L_08A5D98C;
    }
L_08A5D98C:
    ctx.gpr[16] = (0u | 1u);
    goto L_08A5D990;
L_08A5D990:
    ctx.gpr[16] = (ctx.gpr[16] & 255u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    aot_gpr_4 = (16256u << 16u);
      if (branch_taken) {
          goto L_08A5D9A8;
      }
      goto L_08A5D99C;
    }
L_08A5D99C:
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2084), std::bit_cast<std::uint32_t>(aot_fpr_20));
      if (branch_taken) {
          goto L_08A5D9C8;
      }
      goto L_08A5D9A8;
    }
L_08A5D9A8:
    aot_gpr_31 = (0x08A5D9B0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(352)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 422u, 0x08A5D9B0u, 0x08A58718u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 93u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 93u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 93u, 0x08A58718u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5D9B0u) goto L_08A5D9B0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5D9B0:
    aot_gpr_4 = (16384u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_0; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_4 = (16256u << 16u);
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2084), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_08A5D9C8;
L_08A5D9C8:
    { const bool branch_taken = ctx.gpr[16] == 0u;
      if (branch_taken) {
          goto L_08A5D9D8;
      }
      goto L_08A5D9D0;
    }
L_08A5D9D0:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[28] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
      if (branch_taken) {
          goto L_08A5D9F0;
      }
      goto L_08A5D9D8;
    }
L_08A5D9D8:
    aot_gpr_31 = (0x08A5D9E0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(352)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 426u, 0x08A5D9E0u, 0x08A58718u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 93u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 93u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 93u, 0x08A58718u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5D9E0u) goto L_08A5D9E0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5D9E0:
    ctx.fpr[28] = aot_fpr_20 - aot_fpr_0;
    aot_gpr_4 = (16384u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = ctx.fpr[28]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[28] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[28] = fs * ft; }
    goto L_08A5D9F0;
L_08A5D9F0:
    { const bool branch_taken = ctx.gpr[16] == 0u;
      if (branch_taken) {
          goto L_08A5DA00;
      }
      goto L_08A5D9F8;
    }
L_08A5D9F8:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[30] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
      if (branch_taken) {
          goto L_08A5DA14;
      }
      goto L_08A5DA00;
    }
L_08A5DA00:
    aot_gpr_31 = (0x08A5DA08u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(352)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 430u, 0x08A5DA08u, 0x08A58728u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 95u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 95u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 95u, 0x08A58728u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5DA08u) goto L_08A5DA08;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5DA08:
    aot_gpr_4 = (16384u << 16u);
    ctx.fpr[30] = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_0; const float ft = ctx.fpr[30]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[30] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[30] = fs * ft; }
    goto L_08A5DA14;
L_08A5DA14:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    aot_gpr_4 = (16384u << 16u);
      if (branch_taken) {
          goto L_08A5DA24;
      }
      goto L_08A5DA1C;
    }
L_08A5DA1C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2088), std::bit_cast<std::uint32_t>(aot_fpr_20));
      if (branch_taken) {
          goto L_08A5DA30;
      }
      goto L_08A5DA24;
    }
L_08A5DA24:
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 - ctx.fpr[30];
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2088), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_08A5DA30;
L_08A5DA30:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_23 + static_cast<std::uint32_t>(1494)));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_direct_store8(aot_gpr_23 + static_cast<std::uint32_t>(1493), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_23 + static_cast<std::uint32_t>(1495), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_31 = (0x08A5DA48u);
    aot_mem.aot_direct_store8(aot_gpr_23 + static_cast<std::uint32_t>(1494), static_cast<std::uint8_t>(0u));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 435u, 0x08A5DA48u, 0x08A580BCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 8u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 8u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 8u, 0x08A580BCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5DA48u) goto L_08A5DA48;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5DA48:
    aot_fpr_12 = std::bit_cast<float>(0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_0 <= aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08A5DA74;
      }
      goto L_08A5DA5C;
    }
L_08A5DA5C:
    aot_gpr_31 = (0x08A5DA64u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 437u, 0x08A5DA64u, 0x08A580BCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 8u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 8u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 8u, 0x08A580BCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5DA64u) goto L_08A5DA64;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5DA64:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(640)));
    aot_fpr_12 = aot_fpr_12 + aot_fpr_0;
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_23 + static_cast<std::uint32_t>(640), std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_08A5DA7C;
      }
      goto L_08A5DA74;
    }
L_08A5DA74:
    aot_fpr_12 = std::bit_cast<float>(0u);
    aot_mem.aot_direct_store32(aot_gpr_23 + static_cast<std::uint32_t>(640), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_08A5DA7C;
L_08A5DA7C:
    ctx.gpr[17] = (0u | 0u);
    aot_fpr_20 = std::bit_cast<float>(0u);
    ctx.gpr[22] = (aot_gpr_29 + static_cast<std::uint32_t>(1120));
    ctx.gpr[21] = (aot_gpr_29 + static_cast<std::uint32_t>(1124));
    ctx.gpr[20] = (aot_gpr_29 + static_cast<std::uint32_t>(1136));
    ctx.gpr[19] = (aot_gpr_29 + static_cast<std::uint32_t>(1152));
    ctx.gpr[16] = (aot_gpr_23 | 0u);
    ctx.gpr[18] = (aot_gpr_23 + static_cast<std::uint32_t>(1088));
    goto L_08A5DA9C;
L_08A5DA9C:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1216)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5888)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08A5DABC;
      }
      goto L_08A5DAB4;
    }
L_08A5DAB4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1248), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
      if (branch_taken) {
          goto L_08A5DAE4;
      }
      goto L_08A5DABC;
    }
L_08A5DABC:
    aot_gpr_31 = (0x08A5DAC4u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 443u, 0x08A5DAC4u, 0x08A583C0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 52u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 52u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 52u, 0x08A583C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5DAC4u) goto L_08A5DAC4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5DAC4:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1248)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1124), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_fpr_12 = aot_fpr_12 - aot_fpr_0;
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    aot_gpr_31 = (0x08A5DAE0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1120), std::bit_cast<std::uint32_t>(aot_fpr_12));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0148.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 444u, 0x08A5DAE0u, 0x08A57FE4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0148_entry(rt, ctx, 910u, aot_mem);
#else
        recomp_unit_0148_entry(rt, ctx, 910u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0148_entry, 148u, 910u, 0x08A57FE4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5DAE0u) goto L_08A5DAE0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5DAE0:
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1248), std::bit_cast<std::uint32_t>(aot_fpr_0));
    goto L_08A5DAE4;
L_08A5DAE4:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1248)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_20)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08A5DB74;
      }
      goto L_08A5DAF8;
    }
L_08A5DAF8:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_23 + static_cast<std::uint32_t>(1493)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[30];
    aot_mem.aot_direct_store8(aot_gpr_23 + static_cast<std::uint32_t>(1493), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_08A5DB14;
      }
      goto L_08A5DB08;
    }
L_08A5DB08:
    aot_gpr_4 = (0u | 3u);
    { const bool branch_taken = ctx.gpr[17] != aot_gpr_4;
      if (branch_taken) {
          goto L_08A5DB1C;
      }
      goto L_08A5DB14;
    }
L_08A5DB14:
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store8(aot_gpr_23 + static_cast<std::uint32_t>(1494), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_08A5DB1C;
L_08A5DB1C:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_23 + static_cast<std::uint32_t>(1493)));
    aot_gpr_5 = (0u | 1u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08A5DB54;
      }
      goto L_08A5DB2C;
    }
L_08A5DB2C:
    aot_gpr_31 = (0x08A5DB34u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 451u, 0x08A5DB34u, 0x08A5850Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 70u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 70u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 70u, 0x08A5850Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5DB34u) goto L_08A5DB34;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5DB34:
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x08A5DB40u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 452u, 0x08A5DB40u, 0x08A580DCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 10u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 10u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 10u, 0x08A580DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5DB40u) goto L_08A5DB40;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5DB40:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(2052)));
    aot_gpr_31 = (0x08A5DB4Cu);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 453u, 0x08A5DB4Cu, 0x08A58168u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 15u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 15u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 15u, 0x08A58168u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5DB4Cu) goto L_08A5DB4C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5DB4C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08A5DB74;
      }
      goto L_08A5DB54;
    }
L_08A5DB54:
    aot_gpr_31 = (0x08A5DB5Cu);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 455u, 0x08A5DB5Cu, 0x08A5850Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 70u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 70u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 70u, 0x08A5850Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5DB5Cu) goto L_08A5DB5C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5DB5C:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x08A5DB68u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 456u, 0x08A5DB68u, 0x08A580DCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 10u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 10u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 10u, 0x08A580DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5DB68u) goto L_08A5DB68;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5DB68:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(2052)));
    aot_gpr_31 = (0x08A5DB74u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08A931B8, 163u, 0x08A931B8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5DB74u) goto L_08A5DB74;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A5DB74:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[17]) < 4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08A5DA9C;
      }
      goto L_08A5DB88;
    }
L_08A5DB88:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_23 + static_cast<std::uint32_t>(1493)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) <= 0;
      if (branch_taken) {
          goto L_08A5DC04;
      }
      goto L_08A5DB94;
    }
L_08A5DB94:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_23 + static_cast<std::uint32_t>(1493)));
    ctx.gpr[17] = (aot_gpr_29 + static_cast<std::uint32_t>(1168));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_5 = (aot_gpr_23 + static_cast<std::uint32_t>(1040));
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_gpr_31 = (0x08A5DBB0u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0148.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 460u, 0x08A5DBB0u, 0x08A57F9Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0148_entry(rt, ctx, 906u, aot_mem);
#else
        recomp_unit_0148_entry(rt, ctx, 906u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0148_entry, 148u, 906u, 0x08A57F9Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5DBB0u) goto L_08A5DBB0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5DBB0:
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(2052)));
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08A5DBC0u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 461u, 0x08A5DBC0u, 0x08A58168u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 15u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 15u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 15u, 0x08A58168u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5DBC0u) goto L_08A5DBC0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5DBC0:
    aot_gpr_31 = (0x08A5DBC8u);
    aot_gpr_4 = (aot_gpr_23 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 462u, 0x08A5DBC8u, 0x08A582A4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 34u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 34u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 34u, 0x08A582A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5DBC8u) goto L_08A5DBC8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5DBC8:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08A5DBD4u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0148.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 463u, 0x08A5DBD4u, 0x08A57F04u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0148_entry(rt, ctx, 900u, aot_mem);
#else
        recomp_unit_0148_entry(rt, ctx, 900u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0148_entry, 148u, 900u, 0x08A57F04u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5DBD4u) goto L_08A5DBD4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5DBD4:
    aot_gpr_4 = (48896u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_0 < aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08A5DBFC;
      }
      goto L_08A5DBEC;
    }
L_08A5DBEC:
    aot_gpr_5 = (49024u << 16u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08A5DBFCu);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 465u, 0x08A5DBFCu, 0x08A58178u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 16u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 16u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 16u, 0x08A58178u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5DBFCu) goto L_08A5DBFC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5DBFC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08A5DC28;
      }
      goto L_08A5DC04;
    }
L_08A5DC04:
    aot_fpr_12 = std::bit_cast<float>(0u);
    aot_gpr_5 = (16256u << 16u);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(1184));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_31 = (0x08A5DC1Cu);
    ctx.fpr[14] = std::bit_cast<float>(aot_gpr_5);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 467u, 0x08A5DC1Cu, 0x08A580C8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 9u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 9u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 9u, 0x08A580C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5DC1Cu) goto L_08A5DC1C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5DC1C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(2052)));
    aot_gpr_31 = (0x08A5DC28u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 468u, 0x08A5DC28u, 0x08A58168u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 15u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 15u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 15u, 0x08A58168u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5DC28u) goto L_08A5DC28;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5DC28:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(1216)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(1220)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (0u | 32u);
      if (branch_taken) {
          goto L_08A5DC50;
      }
      goto L_08A5DC40;
    }
L_08A5DC40:
    aot_gpr_4 = (0u | 0u);
    ctx.gpr[17] = (aot_gpr_23 | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2080), aot_gpr_4);
      if (branch_taken) {
          goto L_08A5DC58;
      }
      goto L_08A5DC50;
    }
L_08A5DC50:
    ctx.gpr[17] = (aot_gpr_23 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2080), aot_gpr_4);
    goto L_08A5DC58;
L_08A5DC58:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2072), ctx.gpr[17]);
    aot_fpr_12 = std::bit_cast<float>(0u);
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(2056)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(640), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08A5DC74u);
    aot_gpr_5 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 472u, 0x08A5DC74u, 0x08A58334u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 45u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 45u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 45u, 0x08A58334u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5DC74u) goto L_08A5DC74;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5DC74:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(644), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_31 = (0x08A5DC88u);
    aot_gpr_5 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 473u, 0x08A5DC88u, 0x08A58334u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 45u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 45u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 45u, 0x08A58334u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5DC88u) goto L_08A5DC88;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5DC88:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1216)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(1316)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(8)));
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_20 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(2096)));
    ctx.gpr[18] = (aot_gpr_29 + static_cast<std::uint32_t>(384));
    ctx.gpr[6] = (aot_gpr_29 + static_cast<std::uint32_t>(640));
    aot_fpr_12 = ctx.fpr[14] - aot_fpr_12;
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (aot_gpr_23 | 0u);
    aot_fpr_12 = aot_fpr_12 - aot_fpr_20;
    aot_gpr_31 = (0x08A5DCBCu);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(648), std::bit_cast<std::uint32_t>(aot_fpr_12));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0148.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 474u, 0x08A5DCBCu, 0x08A57E9Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0148_entry(rt, ctx, 897u, aot_mem);
#else
        recomp_unit_0148_entry(rt, ctx, 897u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0148_entry, 148u, 897u, 0x08A57E9Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5DCBCu) goto L_08A5DCBC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5DCBC:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(640));
    aot_gpr_31 = (0x08A5DCC8u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 475u, 0x08A5DCC8u, 0x08A58168u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 15u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 15u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 15u, 0x08A58168u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5DCC8u) goto L_08A5DCC8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5DCC8:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(1224)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(1228)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    ctx.gpr[17] = (aot_gpr_23 + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08A5DCEC;
      }
      goto L_08A5DCE0;
    }
L_08A5DCE0:
    ctx.gpr[17] = (aot_gpr_23 + static_cast<std::uint32_t>(8));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 64u);
      if (branch_taken) {
          goto L_08A5DCF0;
      }
      goto L_08A5DCEC;
    }
L_08A5DCEC:
    ctx.gpr[19] = (0u | 96u);
    goto L_08A5DCF0;
L_08A5DCF0:
    aot_fpr_12 = std::bit_cast<float>(0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2068), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(656), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08A5DD08u);
    aot_gpr_5 = (0u | 3u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 479u, 0x08A5DD08u, 0x08A58334u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 45u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 45u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 45u, 0x08A58334u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5DD08u) goto L_08A5DD08;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5DD08:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(660), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_31 = (0x08A5DD1Cu);
    aot_gpr_5 = (0u | 2u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 480u, 0x08A5DD1Cu, 0x08A58334u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 45u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 45u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 45u, 0x08A58334u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5DD1Cu) goto L_08A5DD1C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5DD1C:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1216)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(1324)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(8)));
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    ctx.gpr[6] = (aot_gpr_29 + static_cast<std::uint32_t>(656));
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (aot_gpr_23 | 0u);
    aot_fpr_12 = ctx.fpr[14] - aot_fpr_12;
    aot_fpr_12 = aot_fpr_12 - aot_fpr_20;
    aot_gpr_31 = (0x08A5DD48u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(664), std::bit_cast<std::uint32_t>(aot_fpr_12));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0148.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 481u, 0x08A5DD48u, 0x08A57E9Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0148_entry(rt, ctx, 897u, aot_mem);
#else
        recomp_unit_0148_entry(rt, ctx, 897u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0148_entry, 148u, 897u, 0x08A57E9Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5DD48u) goto L_08A5DD48;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5DD48:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(656));
    aot_gpr_31 = (0x08A5DD54u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 482u, 0x08A5DD54u, 0x08A58168u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 15u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 15u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 15u, 0x08A58168u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5DD54u) goto L_08A5DD54;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5DD54:
    aot_gpr_31 = (0x08A5DD5Cu);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(352)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 483u, 0x08A5DD5Cu, 0x08A586E0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 88u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 88u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 88u, 0x08A586E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5DD5Cu) goto L_08A5DD5C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5DD5C:
    aot_gpr_4 = (15235u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(1352)));
    aot_gpr_4 = (aot_gpr_4 | 4718u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_4 = (16000u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (aot_gpr_23 | 0u);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_0; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_31 = (0x08A5DD88u);
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[26] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[26] = fs * ft; }
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 484u, 0x08A5DD88u, 0x08A583ECu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 56u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 56u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 56u, 0x08A583ECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5DD88u) goto L_08A5DD88;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5DD88:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08A5DDF8;
      }
      goto L_08A5DD90;
    }
L_08A5DD90:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_23 + static_cast<std::uint32_t>(1280))))));
    aot_gpr_4 = (aot_gpr_4 & 2u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08A5DDF8;
      }
      goto L_08A5DDA0;
    }
L_08A5DDA0:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_23 + static_cast<std::uint32_t>(1280))))));
    aot_gpr_4 = (aot_gpr_4 & 1u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08A5DDF8;
      }
      goto L_08A5DDB0;
    }
L_08A5DDB0:
    aot_gpr_4 = (16050u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(1512)));
    aot_gpr_4 = (aot_gpr_4 | 47299u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2076), ctx.gpr[19]);
      if (branch_taken) {
          goto L_08A5E094;
      }
      goto L_08A5DDD0;
    }
L_08A5DDD0:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2076), ctx.gpr[19]);
    aot_gpr_31 = (0x08A5DDDCu);
    aot_fpr_20 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(1512)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 489u, 0x08A5DDDCu, 0x08A583C0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 52u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 52u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 52u, 0x08A583C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5DDDCu) goto L_08A5DDDC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5DDDC:
    aot_gpr_4 = (15574u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 30544u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_0; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = aot_fpr_20 + aot_fpr_12;
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_23 + static_cast<std::uint32_t>(1512), std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_08A5E094;
      }
      goto L_08A5DDF8;
    }
L_08A5DDF8:
    aot_gpr_31 = (0x08A5DE00u);
    aot_gpr_4 = (aot_gpr_23 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 491u, 0x08A5DE00u, 0x08A585E0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 79u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 79u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 79u, 0x08A585E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5DE00u) goto L_08A5DE00;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5DE00:
    aot_gpr_31 = (0x08A5DE08u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(0)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 492u, 0x08A5DE08u, 0x08A580BCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 8u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 8u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 8u, 0x08A580BCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5DE08u) goto L_08A5DE08;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5DE08:
    aot_gpr_4 = (15395u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 55050u);
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_0 < aot_fpr_20)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08A5DE8C;
      }
      goto L_08A5DE24;
    }
L_08A5DE24:
    aot_gpr_31 = (0x08A5DE2Cu);
    aot_gpr_4 = (aot_gpr_23 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 494u, 0x08A5DE2Cu, 0x08A585E0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 79u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 79u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 79u, 0x08A585E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5DE2Cu) goto L_08A5DE2C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5DE2C:
    aot_gpr_31 = (0x08A5DE34u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(4)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 495u, 0x08A5DE34u, 0x08A580BCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 8u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 8u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 8u, 0x08A580BCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5DE34u) goto L_08A5DE34;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5DE34:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_0 < aot_fpr_20)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08A5DE8C;
      }
      goto L_08A5DE44;
    }
L_08A5DE44:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(600)));
    aot_fpr_13 = std::bit_cast<float>(0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_12) || std::isnan(aot_fpr_13)) && aot_fpr_12 == aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08A5DE8C;
      }
      goto L_08A5DE5C;
    }
L_08A5DE5C:
    aot_gpr_4 = (16245u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 49807u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2076), ctx.gpr[19]);
    aot_gpr_31 = (0x08A5DE70u);
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_4);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 498u, 0x08A5DE70u, 0x08A583C0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 52u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 52u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 52u, 0x08A583C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5DE70u) goto L_08A5DE70;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5DE70:
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x08A5DE7Cu);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_0));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 499u, 0x08A5DE7Cu, 0x08A58090u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 7u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 7u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 7u, 0x08A58090u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5DE7Cu) goto L_08A5DE7C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5DE7C:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(1512)));
    { const float fs = aot_fpr_12; const float ft = aot_fpr_0; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_23 + static_cast<std::uint32_t>(1512), std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_08A5E094;
      }
      goto L_08A5DE8C;
    }
L_08A5DE8C:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2076), ctx.gpr[19]);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(624)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_20)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08A5E05C;
      }
      goto L_08A5DEA4;
    }
L_08A5DEA4:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(1248)));
    aot_fpr_20 = std::bit_cast<float>(0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_20)) ? 0x00800000u : 0u);
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2076), ctx.gpr[19]);
        goto L_08A5DED4;
    }
    goto L_08A5DEBC;
L_08A5DEBC:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(1252)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_20)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2076), ctx.gpr[19]);
      if (branch_taken) {
          goto L_08A5E05C;
      }
      goto L_08A5DED0;
    }
L_08A5DED0:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2076), ctx.gpr[19]);
    goto L_08A5DED4;
L_08A5DED4:
    aot_gpr_31 = (0x08A5DEDCu);
    aot_gpr_4 = (aot_gpr_23 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 505u, 0x08A5DEDCu, 0x08A583ECu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 56u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 56u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 56u, 0x08A583ECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5DEDCu) goto L_08A5DEDC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5DEDC:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_08A5E05C;
      }
      goto L_08A5DEE4;
    }
L_08A5DEE4:
    ctx.gpr[16] = (aot_gpr_29 + static_cast<std::uint32_t>(1216));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2076), ctx.gpr[19]);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08A5DEF8u);
    aot_gpr_5 = (0u | 29u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 507u, 0x08A5DEF8u, 0x08A58514u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 71u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 71u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 71u, 0x08A58514u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5DEF8u) goto L_08A5DEF8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5DEF8:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08A5DF04u);
    aot_gpr_5 = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 508u, 0x08A5DF04u, 0x08A5851Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 72u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 72u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 72u, 0x08A5851Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5DF04u) goto L_08A5DF04;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5DF04:
    aot_gpr_31 = (0x08A5DF0Cu);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0163.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 509u, 0x08A5DF0Cu, 0x08A91E18u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0163_entry(rt, ctx, 231u, aot_mem);
#else
        recomp_unit_0163_entry(rt, ctx, 231u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0163_entry, 163u, 231u, 0x08A91E18u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5DF0Cu) goto L_08A5DF0C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5DF0C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(1072)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(28)));
    ctx.gpr[16] = (aot_gpr_23 + ctx.gpr[19]);
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1088));
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_20 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_20 = fs * ft; }
    aot_gpr_31 = (0x08A5DF30u);
    { const float fs = aot_fpr_20; const float ft = aot_fpr_0; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_20 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_20 = fs * ft; }
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 510u, 0x08A5DF30u, 0x08A58524u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 73u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 73u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 73u, 0x08A58524u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5DF30u) goto L_08A5DF30;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5DF30:
    aot_gpr_31 = (0x08A5DF38u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0163.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 511u, 0x08A5DF38u, 0x08A91E70u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0163_entry(rt, ctx, 234u, aot_mem);
#else
        recomp_unit_0163_entry(rt, ctx, 234u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0163_entry, 163u, 234u, 0x08A91E70u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5DF38u) goto L_08A5DF38;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5DF38:
    aot_gpr_4 = (0u | 3u);
    { const bool branch_taken = aot_gpr_2 == aot_gpr_4;
    ctx.gpr[17] = (aot_gpr_29 + static_cast<std::uint32_t>(1208));
      if (branch_taken) {
          goto L_08A5DF60;
      }
      goto L_08A5DF44;
    }
L_08A5DF44:
    aot_gpr_31 = (0x08A5DF4Cu);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 513u, 0x08A5DF4Cu, 0x08A58524u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 73u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 73u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 73u, 0x08A58524u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5DF4Cu) goto L_08A5DF4C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5DF4C:
    aot_gpr_31 = (0x08A5DF54u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0163.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 514u, 0x08A5DF54u, 0x08A91E70u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0163_entry(rt, ctx, 234u, aot_mem);
#else
        recomp_unit_0163_entry(rt, ctx, 234u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0163_entry, 163u, 234u, 0x08A91E70u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5DF54u) goto L_08A5DF54;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5DF54:
    aot_gpr_4 = (0u | 4u);
    if (aot_gpr_2 != aot_gpr_4) {
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(624)));
        goto L_08A5DF70;
    }
    goto L_08A5DF60;
L_08A5DF60:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(1072)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(32)));
    { const float fs = aot_fpr_20; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_20 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_20 = fs * ft; }
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(624)));
    goto L_08A5DF70;
L_08A5DF70:
    { const float fs = aot_fpr_12; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = aot_fpr_20 / aot_fpr_12;
    ctx.gpr[6] = (16256u << 16u);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(1204));
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_fpr_13 = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1204), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_gpr_31 = (0x08A5DF94u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1208), std::bit_cast<std::uint32_t>(aot_fpr_12));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0148.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 517u, 0x08A5DF94u, 0x08A57FBCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0148_entry(rt, ctx, 907u, aot_mem);
#else
        recomp_unit_0148_entry(rt, ctx, 907u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0148_entry, 148u, 907u, 0x08A57FBCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5DF94u) goto L_08A5DF94;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5DF94:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1200), std::bit_cast<std::uint32_t>(aot_fpr_0));
    aot_gpr_31 = (0x08A5DFA0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_0));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 518u, 0x08A5DFA0u, 0x08A58054u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 4u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 4u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 4u, 0x08A58054u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5DFA0u) goto L_08A5DFA0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5DFA0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(352)));
    aot_gpr_31 = (0x08A5DFACu);
    aot_fpr_20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_0));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 519u, 0x08A5DFACu, 0x08A58720u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 94u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 94u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 94u, 0x08A58720u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5DFACu) goto L_08A5DFAC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5DFAC:
    aot_gpr_4 = (16457u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 4059u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (17204u << 16u);
    { const float fs = aot_fpr_0; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 / aot_fpr_13;
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(600)));
    aot_fpr_12 = aot_fpr_20 / aot_fpr_12;
    ctx.fpr[15] = std::bit_cast<float>(0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[14] < ctx.fpr[15])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1200), std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_08A5DFFC;
      }
      goto L_08A5DFE4;
    }
L_08A5DFE4:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(1516)));
    aot_fpr_13 = std::bit_cast<float>(0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08A5E028;
      }
      goto L_08A5DFFC;
    }
L_08A5DFFC:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(600)));
    aot_fpr_20 = std::bit_cast<float>(0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_20)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08A5E03C;
      }
      goto L_08A5E014;
    }
L_08A5E014:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(1516)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_20)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08A5E03C;
      }
      goto L_08A5E028;
    }
L_08A5E028:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1200)));
    aot_gpr_4 = (16384u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1200), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_08A5E03C;
L_08A5E03C:
    aot_gpr_4 = (16256u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(1200));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1208), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_31 = (0x08A5E054u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0148.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 525u, 0x08A5E054u, 0x08A57FBCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0148_entry(rt, ctx, 907u, aot_mem);
#else
        recomp_unit_0148_entry(rt, ctx, 907u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0148_entry, 148u, 907u, 0x08A57FBCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5E054u) goto L_08A5E054;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5E054:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1200), std::bit_cast<std::uint32_t>(aot_fpr_0));
      if (branch_taken) {
          goto L_08A5E068;
      }
      goto L_08A5E05C;
    }
L_08A5E05C:
    aot_gpr_4 = (16256u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1200), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_08A5E068;
L_08A5E068:
    aot_gpr_31 = (0x08A5E070u);
    aot_gpr_4 = (aot_gpr_23 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 528u, 0x08A5E070u, 0x08A583ECu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 56u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 56u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 56u, 0x08A583ECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5E070u) goto L_08A5E070;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5E070:
    if (aot_gpr_2 == 0u) {
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(600)));
        goto L_08A5E088;
    }
    goto L_08A5E078;
L_08A5E078:
    aot_gpr_4 = (16256u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1200), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(600)));
    goto L_08A5E088;
L_08A5E088:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1200)));
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_mem.aot_direct_store32(aot_gpr_23 + static_cast<std::uint32_t>(1512), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_08A5E094;
L_08A5E094:
    aot_gpr_31 = (0x08A5E09Cu);
    aot_gpr_4 = (aot_gpr_23 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 532u, 0x08A5E09Cu, 0x08A585E0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 79u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 79u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 79u, 0x08A585E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5E09Cu) goto L_08A5E09C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5E09C:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(688));
    aot_gpr_31 = (0x08A5E0A8u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 533u, 0x08A5E0A8u, 0x08A580FCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 11u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 11u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 11u, 0x08A580FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5E0A8u) goto L_08A5E0A8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5E0A8:
    aot_gpr_31 = (0x08A5E0B0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(352)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 534u, 0x08A5E0B0u, 0x08A586E8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 89u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 89u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 89u, 0x08A586E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5E0B0u) goto L_08A5E0B0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5E0B0:
    aot_gpr_4 = (8192u << 16u);
    aot_fpr_20 = std::bit_cast<float>(0u);
    aot_gpr_4 = (aot_gpr_2 & aot_gpr_4);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2064), aot_gpr_4);
      if (branch_taken) {
          goto L_08A5E400;
      }
      goto L_08A5E0C8;
    }
L_08A5E0C8:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(1248)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_20)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08A5E0F0;
      }
      goto L_08A5E0DC;
    }
L_08A5E0DC:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(1252)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_20)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (16243u << 16u);
      if (branch_taken) {
          goto L_08A5E3E0;
      }
      goto L_08A5E0F0;
    }
L_08A5E0F0:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2100), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(2080)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(1256)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(2084)));
    ctx.gpr[16] = (aot_gpr_23 + aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_20)) ? 0x00800000u : 0u);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(2104)));
    aot_gpr_4 = (aot_gpr_23 + static_cast<std::uint32_t>(1292));
    ctx.gpr[21] = (0u | 0u);
    { const float fs = ctx.fpr[24]; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    ctx.gpr[18] = (aot_gpr_29 + static_cast<std::uint32_t>(1296));
    ctx.gpr[17] = (aot_gpr_29 + static_cast<std::uint32_t>(1264));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1088));
    ctx.gpr[19] = (aot_gpr_29 + static_cast<std::uint32_t>(1312));
    ctx.gpr[20] = (aot_gpr_29 + static_cast<std::uint32_t>(672));
    ctx.gpr[22] = (ctx.gpr[28] + static_cast<std::uint32_t>(7156));
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2048), aot_gpr_4);
      if (branch_taken) {
          goto L_08A5E154;
      }
      goto L_08A5E138;
    }
L_08A5E138:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(1260)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_20)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2100), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
      if (branch_taken) {
          goto L_08A5E154;
      }
      goto L_08A5E14C;
    }
L_08A5E14C:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2100), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[21] = (ctx.gpr[30] | 0u);
    goto L_08A5E154;
L_08A5E154:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2120), ctx.gpr[20]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2124), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_gpr_31 = (0x08A5E164u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(1512)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 541u, 0x08A5E164u, 0x08A5800Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 2u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 2u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 2u, 0x08A5800Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5E164u) goto L_08A5E164;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5E164:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(1512)));
    aot_gpr_31 = (0x08A5E170u);
    aot_fpr_20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_0));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 542u, 0x08A5E170u, 0x08A58030u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 3u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 3u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 3u, 0x08A58030u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5E170u) goto L_08A5E170;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5E170:
    ctx.fpr[24] = std::bit_cast<float>(0u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20) ^ 0x80000000u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_0));
    aot_gpr_31 = (0x08A5E188u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 543u, 0x08A5E188u, 0x08A580C8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 9u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 9u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 9u, 0x08A580C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5E188u) goto L_08A5E188;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5E188:
    ctx.gpr[20] = (aot_gpr_29 + static_cast<std::uint32_t>(1248));
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_5 = (aot_gpr_23 | 0u);
    aot_gpr_31 = (0x08A5E19Cu);
    ctx.gpr[6] = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0148.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 544u, 0x08A5E19Cu, 0x08A57E9Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0148_entry(rt, ctx, 897u, aot_mem);
#else
        recomp_unit_0148_entry(rt, ctx, 897u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0148_entry, 148u, 897u, 0x08A57E9Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5E19Cu) goto L_08A5E19C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5E19C:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08A5E1A8u);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 545u, 0x08A5E1A8u, 0x08A58168u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 15u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 15u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 15u, 0x08A58168u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5E1A8u) goto L_08A5E1A8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5E1A8:
    ctx.gpr[20] = (aot_gpr_29 + static_cast<std::uint32_t>(1280));
    aot_gpr_31 = (0x08A5E1B4u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 546u, 0x08A5E1B4u, 0x08A5850Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 70u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 70u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 70u, 0x08A5850Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5E1B4u) goto L_08A5E1B4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5E1B4:
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x08A5E1C0u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 547u, 0x08A5E1C0u, 0x08A580DCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 10u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 10u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 10u, 0x08A580DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5E1C0u) goto L_08A5E1C0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5E1C0:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08A5E1CCu);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0148.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 548u, 0x08A5E1CCu, 0x08A57F04u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0148_entry(rt, ctx, 900u, aot_mem);
#else
        recomp_unit_0148_entry(rt, ctx, 900u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0148_entry, 148u, 900u, 0x08A57F04u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5E1CCu) goto L_08A5E1CC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5E1CC:
    aot_fpr_20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_0));
    aot_gpr_31 = (0x08A5E1D8u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 549u, 0x08A5E1D8u, 0x08A5850Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 70u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 70u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 70u, 0x08A5850Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5E1D8u) goto L_08A5E1D8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5E1D8:
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x08A5E1E4u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 550u, 0x08A5E1E4u, 0x08A580DCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 10u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 10u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 10u, 0x08A580DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5E1E4u) goto L_08A5E1E4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5E1E4:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x08A5E1F4u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0148.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 551u, 0x08A5E1F4u, 0x08A57F64u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0148_entry(rt, ctx, 904u, aot_mem);
#else
        recomp_unit_0148_entry(rt, ctx, 904u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0148_entry, 148u, 904u, 0x08A57F64u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5E1F4u) goto L_08A5E1F4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5E1F4:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08A5E200u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0163.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 552u, 0x08A5E200u, 0x08A931D0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0163_entry(rt, ctx, 464u, aot_mem);
#else
        recomp_unit_0163_entry(rt, ctx, 464u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0163_entry, 163u, 464u, 0x08A931D0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5E200u) goto L_08A5E200;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5E200:
    aot_gpr_31 = (0x08A5E208u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 553u, 0x08A5E208u, 0x08A5810Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 12u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 12u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 12u, 0x08A5810Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5E208u) goto L_08A5E208;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5E208:
    aot_gpr_31 = (0x08A5E210u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 554u, 0x08A5E210u, 0x08A5850Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 70u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 70u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 70u, 0x08A5850Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5E210u) goto L_08A5E210;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5E210:
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x08A5E21Cu);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 555u, 0x08A5E21Cu, 0x08A580DCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 10u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 10u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 10u, 0x08A580DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5E21Cu) goto L_08A5E21C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5E21C:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08A5E22Cu);
    ctx.gpr[6] = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0148.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 556u, 0x08A5E22Cu, 0x08A57E84u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0148_entry(rt, ctx, 896u, aot_mem);
#else
        recomp_unit_0148_entry(rt, ctx, 896u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0148_entry, 148u, 896u, 0x08A57E84u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5E22Cu) goto L_08A5E22C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5E22C:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x08A5E238u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 557u, 0x08A5E238u, 0x08A58168u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 15u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 15u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 15u, 0x08A58168u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5E238u) goto L_08A5E238;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5E238:
    aot_gpr_31 = (0x08A5E240u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 558u, 0x08A5E240u, 0x08A5810Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 12u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 12u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 12u, 0x08A5810Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5E240u) goto L_08A5E240;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5E240:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7152), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08A5E250u);
    aot_gpr_5 = (0u | 29u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 559u, 0x08A5E250u, 0x08A58514u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 71u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 71u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 71u, 0x08A58514u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5E250u) goto L_08A5E250;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5E250:
    aot_gpr_31 = (0x08A5E258u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0163.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 560u, 0x08A5E258u, 0x08A91E18u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0163_entry(rt, ctx, 231u, aot_mem);
#else
        recomp_unit_0163_entry(rt, ctx, 231u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0163_entry, 163u, 231u, 0x08A91E18u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5E258u) goto L_08A5E258;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5E258:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(1392)));
    { const float fs = ctx.fpr[26]; const float ft = aot_fpr_0; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_20 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_20 = fs * ft; }
    aot_gpr_4 = (16256u << 16u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= ctx.fpr[24])) ? 0x00800000u : 0u);
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(2124)));
    ctx.fpr[22] = std::bit_cast<float>(aot_gpr_4);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    ctx.gpr[20] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(2120)));
      if (branch_taken) {
          goto L_08A5E2CC;
      }
      goto L_08A5E278;
    }
L_08A5E278:
    aot_gpr_31 = (0x08A5E280u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 562u, 0x08A5E280u, 0x08A58524u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 73u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 73u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 73u, 0x08A58524u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5E280u) goto L_08A5E280;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5E280:
    aot_gpr_31 = (0x08A5E288u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0163.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 563u, 0x08A5E288u, 0x08A91E70u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0163_entry(rt, ctx, 234u, aot_mem);
#else
        recomp_unit_0163_entry(rt, ctx, 234u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0163_entry, 163u, 234u, 0x08A91E70u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5E288u) goto L_08A5E288;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5E288:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) <= 0;
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A5E2CC;
      }
      goto L_08A5E294;
    }
L_08A5E294:
    if (aot_gpr_5 == 0u) {
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 4 ? 1u : 0u);
        goto L_08A5E2B8;
    }
    goto L_08A5E29C;
L_08A5E29C:
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08A5E2C0;
      }
      goto L_08A5E2A8;
    }
L_08A5E2A8:
    aot_gpr_4 = (16179u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 13107u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[22] = std::bit_cast<float>(aot_gpr_4);
      if (branch_taken) {
          goto L_08A5E2CC;
      }
      goto L_08A5E2B8;
    }
L_08A5E2B8:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08A5E2CC;
      }
      goto L_08A5E2C0;
    }
L_08A5E2C0:
    aot_gpr_4 = (16230u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 26214u);
    ctx.fpr[22] = std::bit_cast<float>(aot_gpr_4);
    goto L_08A5E2CC;
L_08A5E2CC:
    aot_gpr_31 = (0x08A5E2D4u);
    aot_gpr_4 = (aot_gpr_23 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 570u, 0x08A5E2D4u, 0x08A583FCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 57u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 57u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 57u, 0x08A583FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5E2D4u) goto L_08A5E2D4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5E2D4:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08A5E2F0;
      }
      goto L_08A5E2DC;
    }
L_08A5E2DC:
    aot_gpr_31 = (0x08A5E2E4u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 572u, 0x08A5E2E4u, 0x08A58524u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 73u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 73u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 73u, 0x08A58524u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5E2E4u) goto L_08A5E2E4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5E2E4:
    aot_gpr_31 = (0x08A5E2ECu);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0163.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 573u, 0x08A5E2ECu, 0x08A91ED4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0163_entry(rt, ctx, 244u, aot_mem);
#else
        recomp_unit_0163_entry(rt, ctx, 244u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0163_entry, 163u, 244u, 0x08A91ED4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5E2ECu) goto L_08A5E2EC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5E2EC:
    { const float fs = aot_fpr_20; const float ft = aot_fpr_0; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_20 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_20 = fs * ft; }
    goto L_08A5E2F0;
L_08A5E2F0:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_23 + static_cast<std::uint32_t>(1076)));
    aot_gpr_5 = (0u | 1u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08A5E32C;
      }
      goto L_08A5E300;
    }
L_08A5E300:
    aot_gpr_31 = (0x08A5E308u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B61B60, 215u, 341u, 0x08B61B60u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, ctx.gpr[3], aot_gpr_4, aot_gpr_5, ctx.gpr[6], ctx.gpr[7], aot_gpr_29, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 341u, 0x08B61B60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5E308u) goto L_08A5E308;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A5E308:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5780)));
    ctx.gpr[6] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5784)));
    aot_gpr_5 = (ctx.gpr[3] | 0u);
    aot_gpr_31 = (0x08A5E31Cu);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B61FD0, 215u, 400u, 0x08B61FD0u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, ctx.gpr[3], aot_gpr_4, aot_gpr_5, ctx.gpr[6], ctx.gpr[7], ctx.gpr[8], ctx.gpr[9], ctx.gpr[10], ctx.gpr[16], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 400u, 0x08B61FD0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5E31Cu) goto L_08A5E31C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A5E31C:
    aot_gpr_5 = (ctx.gpr[3] | 0u);
    aot_gpr_31 = (0x08A5E328u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B627F0, 215u, 515u, 0x08B627F0u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, ctx.gpr[3], aot_gpr_4, aot_gpr_5, ctx.gpr[6], ctx.gpr[7], ctx.gpr[8], ctx.gpr[9], ctx.gpr[10], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 515u, 0x08B627F0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5E328u) goto L_08A5E328;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A5E328:
    aot_fpr_20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_0));
    goto L_08A5E32C;
L_08A5E32C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(1500)));
    ctx.gpr[16] = (aot_gpr_29 + static_cast<std::uint32_t>(640));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7156), aot_gpr_4);
    aot_gpr_4 = (aot_gpr_23 | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08A5E348u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 580u, 0x08A5E348u, 0x08A58658u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 86u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 86u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 86u, 0x08A58658u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5E348u) goto L_08A5E348;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5E348:
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x08A5E354u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 581u, 0x08A5E354u, 0x08A58168u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 15u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 15u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 15u, 0x08A58168u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5E354u) goto L_08A5E354;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5E354:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7152)));
    { const float fs = ctx.fpr[30]; const float ft = aot_fpr_20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    aot_gpr_2 = (aot_mem.aot_direct_load8(aot_gpr_23 + static_cast<std::uint32_t>(1076)));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[11] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(2048)));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[22]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[21]);
    aot_gpr_4 = (aot_gpr_23 | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    ctx.gpr[9] = (0u | 2u);
    ctx.gpr[10] = (0u | 0u);
    aot_gpr_31 = (0x08A5E398u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_2);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0193.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 582u, 0x08A5E398u, 0x08B0B04Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0193_entry(rt, ctx, 583u, aot_mem);
#else
        recomp_unit_0193_entry(rt, ctx, 583u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0193_entry, 193u, 583u, 0x08B0B04Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5E398u) goto L_08A5E398;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5E398:
    aot_gpr_4 = (aot_gpr_23 | 0u);
    aot_gpr_31 = (0x08A5E3A4u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0191.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 583u, 0x08A5E3A4u, 0x08B02384u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0191_entry(rt, ctx, 597u, aot_mem);
#else
        recomp_unit_0191_entry(rt, ctx, 597u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0191_entry, 191u, 597u, 0x08B02384u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5E3A4u) goto L_08A5E3A4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5E3A4:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(2109)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08A5E3D4;
      }
      goto L_08A5E3B0;
    }
L_08A5E3B0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7156)));
    aot_gpr_5 = (0u | 1u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(2100)));
      if (branch_taken) {
          goto L_08A5E3CC;
      }
      goto L_08A5E3C0;
    }
L_08A5E3C0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7156)));
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[30];
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2100), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
      if (branch_taken) {
          goto L_08A5E3D4;
      }
      goto L_08A5E3CC;
    }
L_08A5E3CC:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2100), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7156), 0u);
    goto L_08A5E3D4;
L_08A5E3D4:
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(2100)));
    { const bool branch_taken = 0u == 0u;
    aot_fpr_20 = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_08A5E400;
      }
      goto L_08A5E3E0;
    }
L_08A5E3E0:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(1292)));
    aot_gpr_4 = (aot_gpr_4 | 13107u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(1284)));
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    ctx.fpr[14] = ctx.fpr[14] + aot_fpr_12;
    aot_mem.aot_direct_store32(aot_gpr_23 + static_cast<std::uint32_t>(1292), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_23 + static_cast<std::uint32_t>(1284), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    goto L_08A5E400;
L_08A5E400:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(1256)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_20)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2100), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
      if (branch_taken) {
          goto L_08A5E428;
      }
      goto L_08A5E414;
    }
L_08A5E414:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(1260)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_20)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2100), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
      if (branch_taken) {
          goto L_08A5E888;
      }
      goto L_08A5E428;
    }
L_08A5E428:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[18] = (aot_gpr_29 + static_cast<std::uint32_t>(1360));
    aot_gpr_31 = (0x08A5E438u);
    aot_gpr_4 = (aot_gpr_23 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 592u, 0x08A5E438u, 0x08A5829Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 33u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 33u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 33u, 0x08A5829Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5E438u) goto L_08A5E438;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5E438:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08A5E444u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 593u, 0x08A5E444u, 0x08A580FCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 11u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 11u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 11u, 0x08A580FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5E444u) goto L_08A5E444;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5E444:
    ctx.gpr[19] = (aot_gpr_29 + static_cast<std::uint32_t>(1376));
    aot_gpr_31 = (0x08A5E450u);
    aot_gpr_4 = (aot_gpr_23 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 594u, 0x08A5E450u, 0x08A58294u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 32u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 32u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 32u, 0x08A58294u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5E450u) goto L_08A5E450;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5E450:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x08A5E45Cu);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 595u, 0x08A5E45Cu, 0x08A580FCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 11u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 11u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 11u, 0x08A580FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5E45Cu) goto L_08A5E45C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5E45C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(2076)));
    ctx.gpr[20] = (aot_gpr_29 + static_cast<std::uint32_t>(1328));
    ctx.gpr[16] = (aot_gpr_23 + aot_gpr_4);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1088));
    aot_gpr_31 = (0x08A5E474u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 596u, 0x08A5E474u, 0x08A5850Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 70u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 70u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 70u, 0x08A5850Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5E474u) goto L_08A5E474;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5E474:
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x08A5E480u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 597u, 0x08A5E480u, 0x08A580DCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 10u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 10u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 10u, 0x08A580DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5E480u) goto L_08A5E480;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5E480:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08A5E48Cu);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0148.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 598u, 0x08A5E48Cu, 0x08A57F04u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0148_entry(rt, ctx, 900u, aot_mem);
#else
        recomp_unit_0148_entry(rt, ctx, 900u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0148_entry, 148u, 900u, 0x08A57F04u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5E48Cu) goto L_08A5E48C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5E48C:
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_0));
    ctx.gpr[17] = (aot_gpr_29 + static_cast<std::uint32_t>(1344));
    aot_gpr_31 = (0x08A5E49Cu);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 599u, 0x08A5E49Cu, 0x08A5850Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 70u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 70u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 70u, 0x08A5850Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5E49Cu) goto L_08A5E49C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5E49C:
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x08A5E4A8u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 600u, 0x08A5E4A8u, 0x08A580DCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 10u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 10u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 10u, 0x08A580DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5E4A8u) goto L_08A5E4A8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5E4A8:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_gpr_31 = (0x08A5E4B8u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0148.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 601u, 0x08A5E4B8u, 0x08A57F64u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0148_entry(rt, ctx, 904u, aot_mem);
#else
        recomp_unit_0148_entry(rt, ctx, 904u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0148_entry, 148u, 904u, 0x08A57F64u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5E4B8u) goto L_08A5E4B8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5E4B8:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08A5E4C4u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0163.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 602u, 0x08A5E4C4u, 0x08A931D0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0163_entry(rt, ctx, 464u, aot_mem);
#else
        recomp_unit_0163_entry(rt, ctx, 464u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0163_entry, 163u, 464u, 0x08A931D0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5E4C4u) goto L_08A5E4C4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5E4C4:
    aot_gpr_31 = (0x08A5E4CCu);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 603u, 0x08A5E4CCu, 0x08A5810Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 12u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 12u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 12u, 0x08A5810Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5E4CCu) goto L_08A5E4CC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5E4CC:
    aot_gpr_31 = (0x08A5E4D4u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 604u, 0x08A5E4D4u, 0x08A5850Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 70u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 70u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 70u, 0x08A5850Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5E4D4u) goto L_08A5E4D4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5E4D4:
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x08A5E4E0u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 605u, 0x08A5E4E0u, 0x08A580DCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 10u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 10u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 10u, 0x08A580DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5E4E0u) goto L_08A5E4E0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5E4E0:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08A5E4F0u);
    ctx.gpr[6] = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0148.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 606u, 0x08A5E4F0u, 0x08A57E84u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0148_entry(rt, ctx, 896u, aot_mem);
#else
        recomp_unit_0148_entry(rt, ctx, 896u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0148_entry, 148u, 896u, 0x08A57E84u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5E4F0u) goto L_08A5E4F0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5E4F0:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x08A5E4FCu);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 607u, 0x08A5E4FCu, 0x08A58168u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 15u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 15u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 15u, 0x08A58168u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5E4FCu) goto L_08A5E4FC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5E4FC:
    aot_gpr_31 = (0x08A5E504u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 608u, 0x08A5E504u, 0x08A5810Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 12u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 12u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 12u, 0x08A5810Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5E504u) goto L_08A5E504;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5E504:
    aot_gpr_31 = (0x08A5E50Cu);
    aot_gpr_4 = (aot_gpr_23 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 609u, 0x08A5E50Cu, 0x08A587B4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 111u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 111u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 111u, 0x08A587B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5E50Cu) goto L_08A5E50C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5E50C:
    { const bool branch_taken = aot_gpr_2 == 0u;
    ctx.gpr[20] = (aot_gpr_29 + static_cast<std::uint32_t>(672));
      if (branch_taken) {
          goto L_08A5E548;
      }
      goto L_08A5E514;
    }
L_08A5E514:
    aot_gpr_31 = (0x08A5E51Cu);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5E51Cu) goto L_08A5E51C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A5E51C:
    aot_gpr_31 = (0x08A5E524u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 612u, 0x08A5E524u, 0x08A58344u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 46u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 46u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 46u, 0x08A58344u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5E524u) goto L_08A5E524;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5E524:
    { const bool branch_taken = aot_gpr_2 == ctx.gpr[30];
      if (branch_taken) {
          goto L_08A5E57C;
      }
      goto L_08A5E52C;
    }
L_08A5E52C:
    aot_gpr_31 = (0x08A5E534u);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5E534u) goto L_08A5E534;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A5E534:
    aot_gpr_31 = (0x08A5E53Cu);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 615u, 0x08A5E53Cu, 0x08A58344u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 46u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 46u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 46u, 0x08A58344u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5E53Cu) goto L_08A5E53C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5E53C:
    aot_gpr_4 = (0u | 3u);
    { const bool branch_taken = aot_gpr_2 == aot_gpr_4;
      if (branch_taken) {
          goto L_08A5E57C;
      }
      goto L_08A5E548;
    }
L_08A5E548:
    aot_gpr_31 = (0x08A5E550u);
    aot_gpr_4 = (aot_gpr_23 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 617u, 0x08A5E550u, 0x08A587B4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 111u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 111u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 111u, 0x08A587B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5E550u) goto L_08A5E550;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5E550:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08A5E59C;
      }
      goto L_08A5E558;
    }
L_08A5E558:
    aot_gpr_31 = (0x08A5E560u);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(624));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0148.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 619u, 0x08A5E560u, 0x08A57E5Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0148_entry(rt, ctx, 893u, aot_mem);
#else
        recomp_unit_0148_entry(rt, ctx, 893u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0148_entry, 148u, 893u, 0x08A57E5Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5E560u) goto L_08A5E560;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5E560:
    aot_gpr_4 = (15395u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 55050u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_0 <= aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08A5E59C;
      }
      goto L_08A5E57C;
    }
L_08A5E57C:
    aot_gpr_4 = (18076u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 16384u);
    ctx.fpr[24] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (16256u << 16u);
    { const float fs = ctx.fpr[28]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_23 + static_cast<std::uint32_t>(1388), std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_08A5E6B8;
      }
      goto L_08A5E59C;
    }
L_08A5E59C:
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_23 + static_cast<std::uint32_t>(1384)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08A5E624;
      }
      goto L_08A5E5A8;
    }
L_08A5E5A8:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x08A5E5B4u);
    aot_gpr_4 = (aot_gpr_23 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 623u, 0x08A5E5B4u, 0x08A584FCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 68u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 68u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 68u, 0x08A584FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5E5B4u) goto L_08A5E5B4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5E5B4:
    aot_gpr_4 = (0u | 179u);
    { const bool branch_taken = aot_gpr_2 == aot_gpr_4;
    { const float fs = ctx.fpr[28]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
      if (branch_taken) {
          goto L_08A5E6B8;
      }
      goto L_08A5E5C0;
    }
L_08A5E5C0:
    aot_gpr_31 = (0x08A5E5C8u);
    aot_gpr_4 = (aot_gpr_23 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 625u, 0x08A5E5C8u, 0x08A584FCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 68u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 68u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 68u, 0x08A584FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5E5C8u) goto L_08A5E5C8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5E5C8:
    aot_gpr_4 = (0u | 178u);
    { const bool branch_taken = aot_gpr_2 == aot_gpr_4;
      if (branch_taken) {
          goto L_08A5E6B8;
      }
      goto L_08A5E5D4;
    }
L_08A5E5D4:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(600)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(212)));
    aot_gpr_4 = (47940u << 16u);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_4 = (aot_gpr_4 | 39846u);
    ctx.fpr[14] = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[21] = (aot_gpr_29 + static_cast<std::uint32_t>(1392));
    aot_gpr_4 = (aot_gpr_23 | 0u);
    aot_gpr_31 = (0x08A5E5FCu);
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_20 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_20 = fs * ft; }
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 627u, 0x08A5E5FCu, 0x08A58294u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 32u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 32u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 32u, 0x08A58294u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5E5FCu) goto L_08A5E5FC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5E5FC:
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x08A5E60Cu);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0148.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 628u, 0x08A5E60Cu, 0x08A57F64u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0148_entry(rt, ctx, 904u, aot_mem);
#else
        recomp_unit_0148_entry(rt, ctx, 904u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0148_entry, 148u, 904u, 0x08A57F64u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5E60Cu) goto L_08A5E60C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5E60C:
    aot_gpr_4 = (aot_gpr_23 | 0u);
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(560));
    aot_gpr_31 = (0x08A5E61Cu);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 629u, 0x08A5E61Cu, 0x08A58628u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 84u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 84u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 84u, 0x08A58628u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5E61Cu) goto L_08A5E61C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5E61C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08A5E6B8;
      }
      goto L_08A5E624;
    }
L_08A5E624:
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(2104)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(1388)));
    aot_gpr_4 = (16256u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 < aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    { const float fs = ctx.fpr[28]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
      if (branch_taken) {
          goto L_08A5E6B8;
      }
      goto L_08A5E644;
    }
L_08A5E644:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(604)));
    aot_gpr_4 = (16192u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 <= ctx.fpr[14])) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08A5E6B8;
      }
      goto L_08A5E660;
    }
L_08A5E660:
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(1388)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(600)));
    aot_fpr_12 = aot_fpr_12 - ctx.fpr[22];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(212)));
    aot_gpr_4 = (47940u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 39846u);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    ctx.gpr[21] = (aot_gpr_29 + static_cast<std::uint32_t>(1408));
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_4);
    { const float fs = ctx.fpr[26]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    aot_gpr_4 = (aot_gpr_23 | 0u);
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_31 = (0x08A5E698u);
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_20 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_20 = fs * ft; }
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 633u, 0x08A5E698u, 0x08A58294u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 32u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 32u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 32u, 0x08A58294u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5E698u) goto L_08A5E698;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5E698:
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x08A5E6A8u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0148.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 634u, 0x08A5E6A8u, 0x08A57F64u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0148_entry(rt, ctx, 904u, aot_mem);
#else
        recomp_unit_0148_entry(rt, ctx, 904u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0148_entry, 148u, 904u, 0x08A57F64u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5E6A8u) goto L_08A5E6A8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5E6A8:
    aot_gpr_4 = (aot_gpr_23 | 0u);
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(560));
    aot_gpr_31 = (0x08A5E6B8u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 635u, 0x08A5E6B8u, 0x08A58628u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 84u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 84u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 84u, 0x08A58628u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5E6B8u) goto L_08A5E6B8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5E6B8:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7152)));
    ctx.fpr[28] = std::bit_cast<float>(0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= ctx.fpr[28])) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08A5E6E8;
      }
      goto L_08A5E6D0;
    }
L_08A5E6D0:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(2104)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= ctx.fpr[28])) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08A5E6E8;
      }
      goto L_08A5E6E4;
    }
L_08A5E6E4:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2104), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    goto L_08A5E6E8;
L_08A5E6E8:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(2100)));
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7152), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_31 = (0x08A5E6FCu);
    aot_gpr_5 = (0u | 29u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 639u, 0x08A5E6FCu, 0x08A58514u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 71u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 71u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 71u, 0x08A58514u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5E6FCu) goto L_08A5E6FC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5E6FC:
    aot_gpr_31 = (0x08A5E704u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0163.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 640u, 0x08A5E704u, 0x08A91E18u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0163_entry(rt, ctx, 231u, aot_mem);
#else
        recomp_unit_0163_entry(rt, ctx, 231u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0163_entry, 163u, 231u, 0x08A91E18u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5E704u) goto L_08A5E704;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5E704:
    { const float fs = ctx.fpr[22]; const float ft = aot_fpr_0; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_20 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_20 = fs * ft; }
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(1392)));
    aot_gpr_4 = (16256u << 16u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= ctx.fpr[28])) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    ctx.fpr[22] = std::bit_cast<float>(aot_gpr_4);
      if (branch_taken) {
          goto L_08A5E774;
      }
      goto L_08A5E720;
    }
L_08A5E720:
    aot_gpr_31 = (0x08A5E728u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 642u, 0x08A5E728u, 0x08A58524u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 73u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 73u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 73u, 0x08A58524u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5E728u) goto L_08A5E728;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5E728:
    aot_gpr_31 = (0x08A5E730u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0163.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 643u, 0x08A5E730u, 0x08A91E70u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0163_entry(rt, ctx, 234u, aot_mem);
#else
        recomp_unit_0163_entry(rt, ctx, 234u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0163_entry, 163u, 234u, 0x08A91E70u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5E730u) goto L_08A5E730;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5E730:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) <= 0;
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A5E774;
      }
      goto L_08A5E73C;
    }
L_08A5E73C:
    if (aot_gpr_5 == 0u) {
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 4 ? 1u : 0u);
        goto L_08A5E760;
    }
    goto L_08A5E744;
L_08A5E744:
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08A5E768;
      }
      goto L_08A5E750;
    }
L_08A5E750:
    aot_gpr_4 = (16179u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 13107u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[22] = std::bit_cast<float>(aot_gpr_4);
      if (branch_taken) {
          goto L_08A5E774;
      }
      goto L_08A5E760;
    }
L_08A5E760:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08A5E774;
      }
      goto L_08A5E768;
    }
L_08A5E768:
    aot_gpr_4 = (16230u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 26214u);
    ctx.fpr[22] = std::bit_cast<float>(aot_gpr_4);
    goto L_08A5E774;
L_08A5E774:
    aot_gpr_31 = (0x08A5E77Cu);
    aot_gpr_4 = (aot_gpr_23 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 650u, 0x08A5E77Cu, 0x08A583FCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 57u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 57u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 57u, 0x08A583FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5E77Cu) goto L_08A5E77C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5E77C:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08A5E798;
      }
      goto L_08A5E784;
    }
L_08A5E784:
    aot_gpr_31 = (0x08A5E78Cu);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 652u, 0x08A5E78Cu, 0x08A58524u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 73u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 73u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 73u, 0x08A58524u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5E78Cu) goto L_08A5E78C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5E78C:
    aot_gpr_31 = (0x08A5E794u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0163.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 653u, 0x08A5E794u, 0x08A91ED4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0163_entry(rt, ctx, 244u, aot_mem);
#else
        recomp_unit_0163_entry(rt, ctx, 244u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0163_entry, 163u, 244u, 0x08A91ED4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5E794u) goto L_08A5E794;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5E794:
    { const float fs = aot_fpr_20; const float ft = aot_fpr_0; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_20 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_20 = fs * ft; }
    goto L_08A5E798;
L_08A5E798:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_23 + static_cast<std::uint32_t>(1077)));
    ctx.gpr[16] = (0u | 1u);
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[16];
      if (branch_taken) {
          goto L_08A5E7D4;
      }
      goto L_08A5E7A8;
    }
L_08A5E7A8:
    aot_gpr_31 = (0x08A5E7B0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B61B60, 215u, 341u, 0x08B61B60u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, ctx.gpr[3], aot_gpr_4, aot_gpr_5, ctx.gpr[6], ctx.gpr[7], aot_gpr_29, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 341u, 0x08B61B60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5E7B0u) goto L_08A5E7B0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A5E7B0:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5780)));
    ctx.gpr[6] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5784)));
    aot_gpr_5 = (ctx.gpr[3] | 0u);
    aot_gpr_31 = (0x08A5E7C4u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B61FD0, 215u, 400u, 0x08B61FD0u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, ctx.gpr[3], aot_gpr_4, aot_gpr_5, ctx.gpr[6], ctx.gpr[7], ctx.gpr[8], ctx.gpr[9], ctx.gpr[10], ctx.gpr[16], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 400u, 0x08B61FD0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5E7C4u) goto L_08A5E7C4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A5E7C4:
    aot_gpr_5 = (ctx.gpr[3] | 0u);
    aot_gpr_31 = (0x08A5E7D0u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B627F0, 215u, 515u, 0x08B627F0u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, ctx.gpr[3], aot_gpr_4, aot_gpr_5, ctx.gpr[6], ctx.gpr[7], ctx.gpr[8], ctx.gpr[9], ctx.gpr[10], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 515u, 0x08B627F0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5E7D0u) goto L_08A5E7D0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A5E7D0:
    aot_fpr_20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_0));
    goto L_08A5E7D4;
L_08A5E7D4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(1504)));
    ctx.gpr[21] = (aot_gpr_29 + static_cast<std::uint32_t>(656));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7160), aot_gpr_5);
    aot_gpr_4 = (aot_gpr_23 | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08A5E7F0u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 660u, 0x08A5E7F0u, 0x08A58658u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 86u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 86u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 86u, 0x08A58658u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5E7F0u) goto L_08A5E7F0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5E7F0:
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x08A5E7FCu);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 661u, 0x08A5E7FCu, 0x08A58168u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 15u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 15u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 15u, 0x08A58168u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5E7FCu) goto L_08A5E7FC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5E7FC:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(2088)));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7152)));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_gpr_2 = (aot_mem.aot_direct_load8(aot_gpr_23 + static_cast<std::uint32_t>(1077)));
    { const float fs = ctx.fpr[14]; const float ft = aot_fpr_20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[3] = (ctx.gpr[28] + static_cast<std::uint32_t>(7160));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.gpr[11] = (aot_gpr_23 + static_cast<std::uint32_t>(1296));
    aot_gpr_4 = (aot_gpr_23 | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    ctx.gpr[8] = (ctx.gpr[21] | 0u);
    ctx.gpr[9] = (0u | 2u);
    ctx.gpr[10] = (0u | 1u);
    aot_gpr_31 = (0x08A5E848u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_2);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0193.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 662u, 0x08A5E848u, 0x08B0B04Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0193_entry(rt, ctx, 583u, aot_mem);
#else
        recomp_unit_0193_entry(rt, ctx, 583u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0193_entry, 193u, 583u, 0x08B0B04Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5E848u) goto L_08A5E848;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5E848:
    aot_gpr_4 = (aot_gpr_23 | 0u);
    aot_gpr_31 = (0x08A5E854u);
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0191.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 663u, 0x08A5E854u, 0x08B02384u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0191_entry(rt, ctx, 597u, aot_mem);
#else
        recomp_unit_0191_entry(rt, ctx, 597u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0191_entry, 191u, 597u, 0x08B02384u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5E854u) goto L_08A5E854;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5E854:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(2109)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08A5E880;
      }
      goto L_08A5E860;
    }
L_08A5E860:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7160)));
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[16];
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(2100)));
      if (branch_taken) {
          goto L_08A5E878;
      }
      goto L_08A5E86C;
    }
L_08A5E86C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7160)));
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[30];
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2100), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
      if (branch_taken) {
          goto L_08A5E880;
      }
      goto L_08A5E878;
    }
L_08A5E878:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2100), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7160), 0u);
    goto L_08A5E880;
L_08A5E880:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08A5E938;
      }
      goto L_08A5E888;
    }
L_08A5E888:
    aot_gpr_31 = (0x08A5E890u);
    aot_gpr_4 = (aot_gpr_23 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 669u, 0x08A5E890u, 0x08A587B4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 111u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 111u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 111u, 0x08A587B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5E890u) goto L_08A5E890;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5E890:
    { const bool branch_taken = aot_gpr_2 == 0u;
    ctx.fpr[28] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_08A5E8A4;
      }
      goto L_08A5E898;
    }
L_08A5E898:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2100), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_23 + static_cast<std::uint32_t>(1296), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
      if (branch_taken) {
          goto L_08A5E928;
      }
      goto L_08A5E8A4;
    }
L_08A5E8A4:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(ctx.fpr[22]) || std::isnan(ctx.fpr[28])) && ctx.fpr[22] == ctx.fpr[28])) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2100), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
      if (branch_taken) {
          goto L_08A5E928;
      }
      goto L_08A5E8B4;
    }
L_08A5E8B4:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[22] <= ctx.fpr[28])) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2100), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
      if (branch_taken) {
          goto L_08A5E8F8;
      }
      goto L_08A5E8C4;
    }
L_08A5E8C4:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(1296)));
    aot_gpr_4 = (16384u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (15948u << 16u);
      if (branch_taken) {
          goto L_08A5E928;
      }
      goto L_08A5E8E0;
    }
L_08A5E8E0:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(1296)));
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 - aot_fpr_13;
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_23 + static_cast<std::uint32_t>(1296), std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_08A5E928;
      }
      goto L_08A5E8F8;
    }
L_08A5E8F8:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(1296)));
    aot_gpr_4 = (49152u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (15820u << 16u);
      if (branch_taken) {
          goto L_08A5E928;
      }
      goto L_08A5E914;
    }
L_08A5E914:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(1296)));
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    aot_mem.aot_direct_store32(aot_gpr_23 + static_cast<std::uint32_t>(1296), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_08A5E928;
L_08A5E928:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(1288)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(1296)));
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    aot_mem.aot_direct_store32(aot_gpr_23 + static_cast<std::uint32_t>(1288), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_08A5E938;
L_08A5E938:
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_23 + static_cast<std::uint32_t>(1384)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08A5E988;
      }
      goto L_08A5E944;
    }
L_08A5E944:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(1504)));
    aot_gpr_5 = (0u | 1u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08A5E988;
      }
      goto L_08A5E954;
    }
L_08A5E954:
    aot_gpr_31 = (0x08A5E95Cu);
    aot_fpr_20 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(1388)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 681u, 0x08A5E95Cu, 0x08A583C0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 52u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 52u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 52u, 0x08A583C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5E95Cu) goto L_08A5E95C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5E95C:
    aot_gpr_4 = (15107u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 4719u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_0; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = aot_fpr_20 - aot_fpr_12;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < ctx.fpr[28])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_mem.aot_direct_store32(aot_gpr_23 + static_cast<std::uint32_t>(1388), std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_08A5E9C4;
      }
      goto L_08A5E980;
    }
L_08A5E980:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_23 + static_cast<std::uint32_t>(1388), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
      if (branch_taken) {
          goto L_08A5E9C4;
      }
      goto L_08A5E988;
    }
L_08A5E988:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(1388)));
    aot_gpr_4 = (16256u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08A5E9C4;
      }
      goto L_08A5E9A4;
    }
L_08A5E9A4:
    aot_gpr_31 = (0x08A5E9ACu);
    aot_fpr_20 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(1388)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 685u, 0x08A5E9ACu, 0x08A583C0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 52u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 52u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 52u, 0x08A583C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5E9ACu) goto L_08A5E9AC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5E9AC:
    aot_gpr_4 = (15267u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 55050u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_0; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = aot_fpr_20 + aot_fpr_12;
    aot_mem.aot_direct_store32(aot_gpr_23 + static_cast<std::uint32_t>(1388), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_08A5E9C4;
L_08A5E9C4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(2064)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08A5ECF0;
      }
      goto L_08A5E9D0;
    }
L_08A5E9D0:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(1248)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= ctx.fpr[28])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08A5E9F8;
      }
      goto L_08A5E9E4;
    }
L_08A5E9E4:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(1252)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= ctx.fpr[28])) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (16243u << 16u);
      if (branch_taken) {
          goto L_08A5ECD0;
      }
      goto L_08A5E9F8;
    }
L_08A5E9F8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(2080)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(1256)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(2084)));
    ctx.gpr[16] = (aot_gpr_23 + aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= ctx.fpr[28])) ? 0x00800000u : 0u);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(2104)));
    aot_gpr_4 = (aot_gpr_23 + static_cast<std::uint32_t>(1292));
    ctx.gpr[20] = (0u | 0u);
    { const float fs = ctx.fpr[24]; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1088));
    ctx.gpr[21] = (aot_gpr_29 + static_cast<std::uint32_t>(672));
    ctx.gpr[22] = (ctx.gpr[28] + static_cast<std::uint32_t>(7156));
    ctx.gpr[18] = (aot_gpr_29 + static_cast<std::uint32_t>(1472));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2048), aot_gpr_4);
    ctx.gpr[17] = (aot_gpr_29 + static_cast<std::uint32_t>(1440));
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    ctx.gpr[19] = (aot_gpr_29 + static_cast<std::uint32_t>(1488));
      if (branch_taken) {
          goto L_08A5EA54;
      }
      goto L_08A5EA3C;
    }
L_08A5EA3C:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(1260)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= ctx.fpr[28])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08A5EA54;
      }
      goto L_08A5EA50;
    }
L_08A5EA50:
    ctx.gpr[20] = (ctx.gpr[30] | 0u);
    goto L_08A5EA54;
L_08A5EA54:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2128), ctx.gpr[20]);
    aot_gpr_31 = (0x08A5EA60u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(1512)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 693u, 0x08A5EA60u, 0x08A5800Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 2u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 2u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 2u, 0x08A5800Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5EA60u) goto L_08A5EA60;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5EA60:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(1512)));
    aot_gpr_31 = (0x08A5EA6Cu);
    aot_fpr_20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_0));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 694u, 0x08A5EA6Cu, 0x08A58030u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 3u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 3u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 3u, 0x08A58030u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5EA6Cu) goto L_08A5EA6C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5EA6C:
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20) ^ 0x80000000u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_0));
    aot_gpr_31 = (0x08A5EA80u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 695u, 0x08A5EA80u, 0x08A580C8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 9u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 9u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 9u, 0x08A580C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5EA80u) goto L_08A5EA80;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5EA80:
    ctx.gpr[20] = (aot_gpr_29 + static_cast<std::uint32_t>(1424));
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_5 = (aot_gpr_23 | 0u);
    aot_gpr_31 = (0x08A5EA94u);
    ctx.gpr[6] = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0148.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 696u, 0x08A5EA94u, 0x08A57E9Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0148_entry(rt, ctx, 897u, aot_mem);
#else
        recomp_unit_0148_entry(rt, ctx, 897u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0148_entry, 148u, 897u, 0x08A57E9Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5EA94u) goto L_08A5EA94;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5EA94:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08A5EAA0u);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 697u, 0x08A5EAA0u, 0x08A58168u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 15u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 15u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 15u, 0x08A58168u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5EAA0u) goto L_08A5EAA0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5EAA0:
    ctx.gpr[20] = (aot_gpr_29 + static_cast<std::uint32_t>(1456));
    aot_gpr_31 = (0x08A5EAACu);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 698u, 0x08A5EAACu, 0x08A5850Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 70u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 70u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 70u, 0x08A5850Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5EAACu) goto L_08A5EAAC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5EAAC:
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x08A5EAB8u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 699u, 0x08A5EAB8u, 0x08A580DCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 10u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 10u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 10u, 0x08A580DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5EAB8u) goto L_08A5EAB8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5EAB8:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08A5EAC4u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0148.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 700u, 0x08A5EAC4u, 0x08A57F04u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0148_entry(rt, ctx, 900u, aot_mem);
#else
        recomp_unit_0148_entry(rt, ctx, 900u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0148_entry, 148u, 900u, 0x08A57F04u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5EAC4u) goto L_08A5EAC4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5EAC4:
    aot_fpr_20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_0));
    aot_gpr_31 = (0x08A5EAD0u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 701u, 0x08A5EAD0u, 0x08A5850Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 70u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 70u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 70u, 0x08A5850Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5EAD0u) goto L_08A5EAD0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5EAD0:
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x08A5EADCu);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 702u, 0x08A5EADCu, 0x08A580DCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 10u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 10u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 10u, 0x08A580DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5EADCu) goto L_08A5EADC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5EADC:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x08A5EAECu);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0148.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 703u, 0x08A5EAECu, 0x08A57F64u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0148_entry(rt, ctx, 904u, aot_mem);
#else
        recomp_unit_0148_entry(rt, ctx, 904u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0148_entry, 148u, 904u, 0x08A57F64u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5EAECu) goto L_08A5EAEC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5EAEC:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08A5EAF8u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0163.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 704u, 0x08A5EAF8u, 0x08A931D0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0163_entry(rt, ctx, 464u, aot_mem);
#else
        recomp_unit_0163_entry(rt, ctx, 464u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0163_entry, 163u, 464u, 0x08A931D0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5EAF8u) goto L_08A5EAF8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5EAF8:
    aot_gpr_31 = (0x08A5EB00u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 705u, 0x08A5EB00u, 0x08A5810Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 12u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 12u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 12u, 0x08A5810Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5EB00u) goto L_08A5EB00;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5EB00:
    aot_gpr_31 = (0x08A5EB08u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 706u, 0x08A5EB08u, 0x08A5850Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 70u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 70u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 70u, 0x08A5850Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5EB08u) goto L_08A5EB08;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5EB08:
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x08A5EB14u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 707u, 0x08A5EB14u, 0x08A580DCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 10u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 10u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 10u, 0x08A580DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5EB14u) goto L_08A5EB14;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5EB14:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08A5EB24u);
    ctx.gpr[6] = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0148.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 708u, 0x08A5EB24u, 0x08A57E84u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0148_entry(rt, ctx, 896u, aot_mem);
#else
        recomp_unit_0148_entry(rt, ctx, 896u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0148_entry, 148u, 896u, 0x08A57E84u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5EB24u) goto L_08A5EB24;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5EB24:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x08A5EB30u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 709u, 0x08A5EB30u, 0x08A58168u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 15u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 15u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 15u, 0x08A58168u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5EB30u) goto L_08A5EB30;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5EB30:
    aot_gpr_31 = (0x08A5EB38u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 710u, 0x08A5EB38u, 0x08A5810Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 12u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 12u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 12u, 0x08A5810Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5EB38u) goto L_08A5EB38;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5EB38:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7152), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08A5EB48u);
    aot_gpr_5 = (0u | 29u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 711u, 0x08A5EB48u, 0x08A58514u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 71u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 71u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 71u, 0x08A58514u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5EB48u) goto L_08A5EB48;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5EB48:
    aot_gpr_31 = (0x08A5EB50u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0163.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 712u, 0x08A5EB50u, 0x08A91E18u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0163_entry(rt, ctx, 231u, aot_mem);
#else
        recomp_unit_0163_entry(rt, ctx, 231u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0163_entry, 163u, 231u, 0x08A91E18u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5EB50u) goto L_08A5EB50;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5EB50:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(1392)));
    { const float fs = ctx.fpr[26]; const float ft = aot_fpr_0; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_20 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_20 = fs * ft; }
    aot_gpr_4 = (16256u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= ctx.fpr[28])) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    ctx.gpr[20] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(2128)));
      if (branch_taken) {
          goto L_08A5EBC4;
      }
      goto L_08A5EB70;
    }
L_08A5EB70:
    aot_gpr_31 = (0x08A5EB78u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 714u, 0x08A5EB78u, 0x08A58524u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 73u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 73u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 73u, 0x08A58524u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5EB78u) goto L_08A5EB78;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5EB78:
    aot_gpr_31 = (0x08A5EB80u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0163.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 715u, 0x08A5EB80u, 0x08A91E70u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0163_entry(rt, ctx, 234u, aot_mem);
#else
        recomp_unit_0163_entry(rt, ctx, 234u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0163_entry, 163u, 234u, 0x08A91E70u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5EB80u) goto L_08A5EB80;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5EB80:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) <= 0;
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A5EBC4;
      }
      goto L_08A5EB8C;
    }
L_08A5EB8C:
    if (aot_gpr_5 == 0u) {
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 4 ? 1u : 0u);
        goto L_08A5EBB0;
    }
    goto L_08A5EB94;
L_08A5EB94:
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08A5EBB8;
      }
      goto L_08A5EBA0;
    }
L_08A5EBA0:
    aot_gpr_4 = (16179u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 13107u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[22] = std::bit_cast<float>(aot_gpr_4);
      if (branch_taken) {
          goto L_08A5EBC4;
      }
      goto L_08A5EBB0;
    }
L_08A5EBB0:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08A5EBC4;
      }
      goto L_08A5EBB8;
    }
L_08A5EBB8:
    aot_gpr_4 = (16230u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 26214u);
    ctx.fpr[22] = std::bit_cast<float>(aot_gpr_4);
    goto L_08A5EBC4;
L_08A5EBC4:
    aot_gpr_31 = (0x08A5EBCCu);
    aot_gpr_4 = (aot_gpr_23 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 722u, 0x08A5EBCCu, 0x08A583FCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 57u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 57u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 57u, 0x08A583FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5EBCCu) goto L_08A5EBCC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5EBCC:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08A5EBE8;
      }
      goto L_08A5EBD4;
    }
L_08A5EBD4:
    aot_gpr_31 = (0x08A5EBDCu);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 724u, 0x08A5EBDCu, 0x08A58524u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 73u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 73u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 73u, 0x08A58524u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5EBDCu) goto L_08A5EBDC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5EBDC:
    aot_gpr_31 = (0x08A5EBE4u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0163.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 725u, 0x08A5EBE4u, 0x08A91ED4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0163_entry(rt, ctx, 244u, aot_mem);
#else
        recomp_unit_0163_entry(rt, ctx, 244u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0163_entry, 163u, 244u, 0x08A91ED4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5EBE4u) goto L_08A5EBE4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5EBE4:
    { const float fs = aot_fpr_20; const float ft = aot_fpr_0; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_20 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_20 = fs * ft; }
    goto L_08A5EBE8;
L_08A5EBE8:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_23 + static_cast<std::uint32_t>(1076)));
    aot_gpr_5 = (0u | 1u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08A5EC24;
      }
      goto L_08A5EBF8;
    }
L_08A5EBF8:
    aot_gpr_31 = (0x08A5EC00u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B61B60, 215u, 341u, 0x08B61B60u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, ctx.gpr[3], aot_gpr_4, aot_gpr_5, ctx.gpr[6], ctx.gpr[7], aot_gpr_29, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 341u, 0x08B61B60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5EC00u) goto L_08A5EC00;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A5EC00:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5780)));
    ctx.gpr[6] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5784)));
    aot_gpr_5 = (ctx.gpr[3] | 0u);
    aot_gpr_31 = (0x08A5EC14u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B61FD0, 215u, 400u, 0x08B61FD0u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, ctx.gpr[3], aot_gpr_4, aot_gpr_5, ctx.gpr[6], ctx.gpr[7], ctx.gpr[8], ctx.gpr[9], ctx.gpr[10], ctx.gpr[16], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 400u, 0x08B61FD0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5EC14u) goto L_08A5EC14;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A5EC14:
    aot_gpr_5 = (ctx.gpr[3] | 0u);
    aot_gpr_31 = (0x08A5EC20u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B627F0, 215u, 515u, 0x08B627F0u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, ctx.gpr[3], aot_gpr_4, aot_gpr_5, ctx.gpr[6], ctx.gpr[7], ctx.gpr[8], ctx.gpr[9], ctx.gpr[10], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 515u, 0x08B627F0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5EC20u) goto L_08A5EC20;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A5EC20:
    aot_fpr_20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_0));
    goto L_08A5EC24;
L_08A5EC24:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(1500)));
    ctx.gpr[16] = (aot_gpr_29 + static_cast<std::uint32_t>(640));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7156), aot_gpr_4);
    aot_gpr_4 = (aot_gpr_23 | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08A5EC40u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 732u, 0x08A5EC40u, 0x08A58658u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 86u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 86u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 86u, 0x08A58658u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5EC40u) goto L_08A5EC40;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5EC40:
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    aot_gpr_31 = (0x08A5EC4Cu);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 733u, 0x08A5EC4Cu, 0x08A58168u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 15u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 15u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 15u, 0x08A58168u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5EC4Cu) goto L_08A5EC4C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5EC4C:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7152)));
    { const float fs = ctx.fpr[30]; const float ft = aot_fpr_20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    aot_gpr_2 = (aot_mem.aot_direct_load8(aot_gpr_23 + static_cast<std::uint32_t>(1076)));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[11] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(2048)));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[22]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[20]);
    aot_gpr_4 = (aot_gpr_23 | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[21] | 0u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    ctx.gpr[9] = (0u | 2u);
    ctx.gpr[10] = (0u | 0u);
    aot_gpr_31 = (0x08A5EC90u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_2);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0193.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 734u, 0x08A5EC90u, 0x08B0B04Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0193_entry(rt, ctx, 583u, aot_mem);
#else
        recomp_unit_0193_entry(rt, ctx, 583u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0193_entry, 193u, 583u, 0x08B0B04Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5EC90u) goto L_08A5EC90;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5EC90:
    aot_gpr_4 = (aot_gpr_23 | 0u);
    aot_gpr_31 = (0x08A5EC9Cu);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0191.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 735u, 0x08A5EC9Cu, 0x08B02384u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0191_entry(rt, ctx, 597u, aot_mem);
#else
        recomp_unit_0191_entry(rt, ctx, 597u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0191_entry, 191u, 597u, 0x08B02384u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5EC9Cu) goto L_08A5EC9C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5EC9C:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(2109)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08A5ECC8;
      }
      goto L_08A5ECA8;
    }
L_08A5ECA8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7156)));
    aot_gpr_5 = (0u | 1u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_08A5ECC4;
      }
      goto L_08A5ECB8;
    }
L_08A5ECB8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7156)));
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[30];
      if (branch_taken) {
          goto L_08A5ECC8;
      }
      goto L_08A5ECC4;
    }
L_08A5ECC4:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7156), 0u);
    goto L_08A5ECC8;
L_08A5ECC8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08A5ECF0;
      }
      goto L_08A5ECD0;
    }
L_08A5ECD0:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(1292)));
    aot_gpr_4 = (aot_gpr_4 | 13107u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(1284)));
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    ctx.fpr[14] = ctx.fpr[14] + aot_fpr_12;
    aot_mem.aot_direct_store32(aot_gpr_23 + static_cast<std::uint32_t>(1292), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_23 + static_cast<std::uint32_t>(1284), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    goto L_08A5ECF0;
L_08A5ECF0:
    ctx.gpr[16] = (0u | 0u);
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_gpr_31 = (0x08A5ED00u);
    aot_gpr_4 = (aot_gpr_23 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 742u, 0x08A5ED00u, 0x08A587E4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 116u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 116u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 116u, 0x08A587E4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5ED00u) goto L_08A5ED00;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5ED00:
    aot_gpr_4 = (15948u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    aot_gpr_5 = (16256u << 16u);
    ctx.fpr[30] = std::bit_cast<float>(aot_gpr_4);
    { const bool branch_taken = aot_gpr_2 == 0u;
    ctx.fpr[26] = std::bit_cast<float>(aot_gpr_5);
      if (branch_taken) {
          goto L_08A5ED3C;
      }
      goto L_08A5ED18;
    }
L_08A5ED18:
    aot_gpr_31 = (0x08A5ED20u);
    aot_gpr_4 = (aot_gpr_23 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 744u, 0x08A5ED20u, 0x08A587E4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 116u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 116u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 116u, 0x08A587E4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5ED20u) goto L_08A5ED20;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5ED20:
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(80)));
    aot_gpr_31 = (0x08A5ED2Cu);
    aot_gpr_4 = (aot_gpr_23 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 745u, 0x08A5ED2Cu, 0x08A59578u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 307u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 307u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 307u, 0x08A59578u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5ED2Cu) goto L_08A5ED2C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5ED2C:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08A5ED38u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0886D4BC, 26u, 206u, 0x0886D4BCu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0026_entry, 26u, 206u, 0x0886D4BCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5ED38u) goto L_08A5ED38;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A5ED38:
    ctx.gpr[16] = (aot_gpr_2 | 0u);
    goto L_08A5ED3C;
L_08A5ED3C:
    { const bool branch_taken = ctx.gpr[16] == 0u;
      if (branch_taken) {
          goto L_08A5ED5C;
      }
      goto L_08A5ED44;
    }
L_08A5ED44:
    aot_gpr_31 = (0x08A5ED4Cu);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 749u, 0x08A5ED4Cu, 0x08A583C8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 53u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 53u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 53u, 0x08A583C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5ED4Cu) goto L_08A5ED4C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5ED4C:
    aot_gpr_4 = (15922u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 47299u);
    ctx.fpr[24] = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_0; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    goto L_08A5ED5C;
L_08A5ED5C:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(2092)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08A5ED78;
      }
      goto L_08A5ED68;
    }
L_08A5ED68:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_23 + static_cast<std::uint32_t>(1280))))));
    aot_gpr_4 = (aot_gpr_4 & 1u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08A5F018;
      }
      goto L_08A5ED78;
    }
L_08A5ED78:
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(2052)));
    ctx.gpr[16] = (aot_gpr_23 + static_cast<std::uint32_t>(1056));
    ctx.gpr[18] = (aot_gpr_29 + static_cast<std::uint32_t>(1504));
    aot_gpr_31 = (0x08A5ED8Cu);
    aot_gpr_4 = (aot_gpr_23 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 753u, 0x08A5ED8Cu, 0x08A5829Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 33u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 33u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 33u, 0x08A5829Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5ED8Cu) goto L_08A5ED8C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5ED8C:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x08A5ED9Cu);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0148.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 754u, 0x08A5ED9Cu, 0x08A57E84u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0148_entry(rt, ctx, 896u, aot_mem);
#else
        recomp_unit_0148_entry(rt, ctx, 896u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0148_entry, 148u, 896u, 0x08A57E84u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5ED9Cu) goto L_08A5ED9C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5ED9C:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08A5EDA8u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 755u, 0x08A5EDA8u, 0x08A58168u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 15u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 15u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 15u, 0x08A58168u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5EDA8u) goto L_08A5EDA8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5EDA8:
    aot_gpr_31 = (0x08A5EDB0u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 756u, 0x08A5EDB0u, 0x08A5810Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 12u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 12u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 12u, 0x08A5810Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5EDB0u) goto L_08A5EDB0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5EDB0:
    aot_gpr_5 = (15363u << 16u);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_23 + static_cast<std::uint32_t>(1493)));
    aot_gpr_5 = (aot_gpr_5 | 4719u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.fpr[22] = std::bit_cast<float>(aot_gpr_5);
      if (branch_taken) {
          goto L_08A5EE18;
      }
      goto L_08A5EDC4;
    }
L_08A5EDC4:
    aot_gpr_31 = (0x08A5EDCCu);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2124), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 758u, 0x08A5EDCCu, 0x08A583C0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 52u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 52u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 52u, 0x08A583C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5EDCCu) goto L_08A5EDCC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5EDCC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(352)));
    aot_fpr_20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_0));
    aot_gpr_31 = (0x08A5EDDCu);
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(600)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 759u, 0x08A5EDDCu, 0x08A58720u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 94u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 94u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 94u, 0x08A58720u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5EDDCu) goto L_08A5EDDC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5EDDC:
    aot_gpr_4 = (16457u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 4059u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (17204u << 16u);
    { const float fs = aot_fpr_0; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 / aot_fpr_13;
    aot_gpr_4 = (48896u << 16u);
    aot_fpr_12 = ctx.fpr[30] / aot_fpr_12;
    ctx.fpr[14] = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(2124)));
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    { const float fs = aot_fpr_12; const float ft = aot_fpr_20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_20 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_20 = fs * ft; }
      if (branch_taken) {
          goto L_08A5EE54;
      }
      goto L_08A5EE18;
    }
L_08A5EE18:
    ctx.gpr[17] = (aot_gpr_29 + static_cast<std::uint32_t>(688));
    ctx.gpr[18] = (aot_gpr_29 + static_cast<std::uint32_t>(1536));
    aot_gpr_31 = (0x08A5EE28u);
    aot_gpr_4 = (aot_gpr_23 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 761u, 0x08A5EE28u, 0x08A585E0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 79u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 79u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 79u, 0x08A585E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5EE28u) goto L_08A5EE28;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5EE28:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x08A5EE38u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0148.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 762u, 0x08A5EE38u, 0x08A57F4Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0148_entry(rt, ctx, 903u, aot_mem);
#else
        recomp_unit_0148_entry(rt, ctx, 903u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0148_entry, 148u, 903u, 0x08A57F4Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5EE38u) goto L_08A5EE38;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5EE38:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08A5EE44u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 763u, 0x08A5EE44u, 0x08A58168u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 15u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 15u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 15u, 0x08A58168u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5EE44u) goto L_08A5EE44;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5EE44:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08A5EE50u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0148.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 764u, 0x08A5EE50u, 0x08A57F04u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0148_entry(rt, ctx, 900u, aot_mem);
#else
        recomp_unit_0148_entry(rt, ctx, 900u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0148_entry, 148u, 900u, 0x08A57F04u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5EE50u) goto L_08A5EE50;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5EE50:
    aot_fpr_20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_0));
    goto L_08A5EE54;
L_08A5EE54:
    aot_gpr_4 = (16128u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_31 = (0x08A5EE64u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1520), std::bit_cast<std::uint32_t>(aot_fpr_12));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 766u, 0x08A5EE64u, 0x08A583C0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 52u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 52u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 52u, 0x08A583C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5EE64u) goto L_08A5EE64;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5EE64:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1524), std::bit_cast<std::uint32_t>(aot_fpr_0));
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(1524));
    aot_gpr_31 = (0x08A5EE74u);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(1520));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0148.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 767u, 0x08A5EE74u, 0x08A57FE4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0148_entry(rt, ctx, 910u, aot_mem);
#else
        recomp_unit_0148_entry(rt, ctx, 910u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0148_entry, 148u, 910u, 0x08A57FE4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5EE74u) goto L_08A5EE74;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5EE74:
    { const float fs = aot_fpr_0; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_23 + static_cast<std::uint32_t>(1076)));
    aot_fpr_20 = aot_fpr_20 / aot_fpr_12;
    aot_gpr_5 = (0u | 1u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08A5EF8C;
      }
      goto L_08A5EE8C;
    }
L_08A5EE8C:
    aot_gpr_31 = (0x08A5EE94u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B61B60, 215u, 341u, 0x08B61B60u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, ctx.gpr[3], aot_gpr_4, aot_gpr_5, ctx.gpr[6], ctx.gpr[7], aot_gpr_29, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 341u, 0x08B61B60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5EE94u) goto L_08A5EE94;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A5EE94:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(1072)));
    ctx.gpr[17] = (ctx.gpr[3] | 0u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
    aot_gpr_31 = (0x08A5EEA8u);
    ctx.gpr[16] = (aot_gpr_2 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B61B60, 215u, 341u, 0x08B61B60u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, ctx.gpr[3], aot_gpr_4, aot_gpr_5, ctx.gpr[6], ctx.gpr[7], aot_gpr_29, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 341u, 0x08B61B60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5EEA8u) goto L_08A5EEA8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A5EEA8:
    ctx.gpr[19] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5780)));
    ctx.gpr[18] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5784)));
    aot_gpr_5 = (ctx.gpr[3] | 0u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x08A5EEC4u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B61FD0, 215u, 400u, 0x08B61FD0u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, ctx.gpr[3], aot_gpr_4, aot_gpr_5, ctx.gpr[6], ctx.gpr[7], ctx.gpr[8], ctx.gpr[9], ctx.gpr[10], ctx.gpr[16], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 400u, 0x08B61FD0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5EEC4u) goto L_08A5EEC4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A5EEC4:
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08A5EED8u);
    ctx.gpr[6] = (aot_gpr_2 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B6256C, 215u, 478u, 0x08B6256Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, ctx.gpr[3], aot_gpr_4, aot_gpr_5, ctx.gpr[6], ctx.gpr[7], ctx.gpr[8], ctx.gpr[9], ctx.gpr[10], ctx.gpr[16], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 478u, 0x08B6256Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5EED8u) goto L_08A5EED8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A5EED8:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_2) <= 0;
      if (branch_taken) {
          goto L_08A5EF14;
      }
      goto L_08A5EEE0;
    }
L_08A5EEE0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(1072)));
    aot_gpr_31 = (0x08A5EEECu);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B61B60, 215u, 341u, 0x08B61B60u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, ctx.gpr[3], aot_gpr_4, aot_gpr_5, ctx.gpr[6], ctx.gpr[7], aot_gpr_29, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 341u, 0x08B61B60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5EEECu) goto L_08A5EEEC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A5EEEC:
    aot_gpr_5 = (ctx.gpr[3] | 0u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x08A5EF00u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B61FD0, 215u, 400u, 0x08B61FD0u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, ctx.gpr[3], aot_gpr_4, aot_gpr_5, ctx.gpr[6], ctx.gpr[7], ctx.gpr[8], ctx.gpr[9], ctx.gpr[10], ctx.gpr[16], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 400u, 0x08B61FD0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5EF00u) goto L_08A5EF00;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A5EF00:
    aot_gpr_5 = (ctx.gpr[3] | 0u);
    aot_gpr_31 = (0x08A5EF0Cu);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B627F0, 215u, 515u, 0x08B627F0u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, ctx.gpr[3], aot_gpr_4, aot_gpr_5, ctx.gpr[6], ctx.gpr[7], ctx.gpr[8], ctx.gpr[9], ctx.gpr[10], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 515u, 0x08B627F0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5EF0Cu) goto L_08A5EF0C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A5EF0C:
    { const bool branch_taken = 0u == 0u;
    aot_fpr_20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_0));
      if (branch_taken) {
          goto L_08A5EFD8;
      }
      goto L_08A5EF14;
    }
L_08A5EF14:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(1072)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
    aot_gpr_31 = (0x08A5EF24u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12) ^ 0x80000000u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B61B60, 215u, 341u, 0x08B61B60u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, ctx.gpr[3], aot_gpr_4, aot_gpr_5, ctx.gpr[6], ctx.gpr[7], aot_gpr_29, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 341u, 0x08B61B60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5EF24u) goto L_08A5EF24;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A5EF24:
    aot_gpr_5 = (ctx.gpr[3] | 0u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x08A5EF38u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B61FD0, 215u, 400u, 0x08B61FD0u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, ctx.gpr[3], aot_gpr_4, aot_gpr_5, ctx.gpr[6], ctx.gpr[7], ctx.gpr[8], ctx.gpr[9], ctx.gpr[10], ctx.gpr[16], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 400u, 0x08B61FD0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5EF38u) goto L_08A5EF38;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A5EF38:
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08A5EF4Cu);
    ctx.gpr[6] = (aot_gpr_2 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B6256C, 215u, 478u, 0x08B6256Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, ctx.gpr[3], aot_gpr_4, aot_gpr_5, ctx.gpr[6], ctx.gpr[7], ctx.gpr[8], ctx.gpr[9], ctx.gpr[10], ctx.gpr[16], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 478u, 0x08B6256Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5EF4Cu) goto L_08A5EF4C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A5EF4C:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_2) >= 0;
      if (branch_taken) {
          goto L_08A5EFD8;
      }
      goto L_08A5EF54;
    }
L_08A5EF54:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(1072)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
    aot_gpr_31 = (0x08A5EF64u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12) ^ 0x80000000u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B61B60, 215u, 341u, 0x08B61B60u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, ctx.gpr[3], aot_gpr_4, aot_gpr_5, ctx.gpr[6], ctx.gpr[7], aot_gpr_29, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 341u, 0x08B61B60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5EF64u) goto L_08A5EF64;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A5EF64:
    aot_gpr_5 = (ctx.gpr[3] | 0u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x08A5EF78u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B61FD0, 215u, 400u, 0x08B61FD0u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, ctx.gpr[3], aot_gpr_4, aot_gpr_5, ctx.gpr[6], ctx.gpr[7], ctx.gpr[8], ctx.gpr[9], ctx.gpr[10], ctx.gpr[16], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 400u, 0x08B61FD0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5EF78u) goto L_08A5EF78;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A5EF78:
    aot_gpr_5 = (ctx.gpr[3] | 0u);
    aot_gpr_31 = (0x08A5EF84u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B627F0, 215u, 515u, 0x08B627F0u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, ctx.gpr[3], aot_gpr_4, aot_gpr_5, ctx.gpr[6], ctx.gpr[7], ctx.gpr[8], ctx.gpr[9], ctx.gpr[10], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 515u, 0x08B627F0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5EF84u) goto L_08A5EF84;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A5EF84:
    { const bool branch_taken = 0u == 0u;
    aot_fpr_20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_0));
      if (branch_taken) {
          goto L_08A5EFD8;
      }
      goto L_08A5EF8C;
    }
L_08A5EF8C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(1072)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_20 <= aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08A5EFB0;
      }
      goto L_08A5EFA4;
    }
L_08A5EFA4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(1072)));
    { const bool branch_taken = 0u == 0u;
    aot_fpr_20 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_08A5EFD8;
      }
      goto L_08A5EFB0;
    }
L_08A5EFB0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(1072)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12) ^ 0x80000000u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_20 < aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08A5EFD8;
      }
      goto L_08A5EFCC;
    }
L_08A5EFCC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(1072)));
    aot_fpr_20 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
    aot_fpr_20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20) ^ 0x80000000u);
    goto L_08A5EFD8;
L_08A5EFD8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(1072)));
    aot_gpr_31 = (0x08A5EFE4u);
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(24)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 790u, 0x08A5EFE4u, 0x08A583C0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 52u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 52u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 52u, 0x08A583C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5EFE4u) goto L_08A5EFE4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5EFE4:
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_gpr_31 = (0x08A5EFF0u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_0));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 791u, 0x08A5EFF0u, 0x08A58090u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 7u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 7u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 7u, 0x08A58090u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5EFF0u) goto L_08A5EFF0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5EFF0:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(1520)));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    ctx.fpr[22] = ctx.fpr[26] - aot_fpr_0;
    aot_gpr_31 = (0x08A5F004u);
    { const float fs = aot_fpr_0; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_20 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_20 = fs * ft; }
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 792u, 0x08A5F004u, 0x08A58054u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 4u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 4u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 4u, 0x08A58054u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5F004u) goto L_08A5F004;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5F004:
    aot_fpr_12 = aot_fpr_0 - ctx.fpr[24];
    { const float fs = ctx.fpr[22]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = aot_fpr_20 + aot_fpr_12;
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_23 + static_cast<std::uint32_t>(1520), std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_08A5F0AC;
      }
      goto L_08A5F018;
    }
L_08A5F018:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_23 + static_cast<std::uint32_t>(1280))))));
    aot_gpr_4 = (aot_gpr_4 & 2u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08A5F084;
      }
      goto L_08A5F028;
    }
L_08A5F028:
    aot_gpr_4 = (16248u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 20972u);
    aot_gpr_31 = (0x08A5F038u);
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_4);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 795u, 0x08A5F038u, 0x08A583C0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 52u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 52u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 52u, 0x08A583C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5F038u) goto L_08A5F038;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5F038:
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x08A5F044u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_0));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 796u, 0x08A5F044u, 0x08A58090u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 7u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 7u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 7u, 0x08A58090u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5F044u) goto L_08A5F044;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5F044:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(1520)));
    ctx.fpr[22] = ctx.fpr[26] - aot_fpr_0;
    aot_gpr_4 = (aot_gpr_23 | 0u);
    aot_gpr_31 = (0x08A5F058u);
    { const float fs = aot_fpr_0; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_20 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_20 = fs * ft; }
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 797u, 0x08A5F058u, 0x08A58294u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 32u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 32u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 32u, 0x08A58294u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5F058u) goto L_08A5F058;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5F058:
    aot_gpr_31 = (0x08A5F060u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(8)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 798u, 0x08A5F060u, 0x08A58054u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 4u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 4u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 4u, 0x08A58054u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5F060u) goto L_08A5F060;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5F060:
    aot_gpr_4 = (16006u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 2706u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_13 = aot_fpr_0 + aot_fpr_13;
    aot_fpr_12 = aot_fpr_13 + ctx.fpr[24];
    { const float fs = ctx.fpr[22]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = aot_fpr_20 - aot_fpr_12;
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_23 + static_cast<std::uint32_t>(1520), std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_08A5F0AC;
      }
      goto L_08A5F084;
    }
L_08A5F084:
    aot_gpr_4 = (16243u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 13107u);
    aot_gpr_31 = (0x08A5F094u);
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_4);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 800u, 0x08A5F094u, 0x08A583C0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 52u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 52u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 52u, 0x08A583C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5F094u) goto L_08A5F094;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5F094:
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x08A5F0A0u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_0));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 801u, 0x08A5F0A0u, 0x08A58090u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 7u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 7u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 7u, 0x08A58090u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5F0A0u) goto L_08A5F0A0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5F0A0:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(1520)));
    { const float fs = aot_fpr_0; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_mem.aot_direct_store32(aot_gpr_23 + static_cast<std::uint32_t>(1520), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_08A5F0AC;
L_08A5F0AC:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(1520)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(1216)));
    aot_mem.aot_direct_store32(aot_gpr_23 + static_cast<std::uint32_t>(1516), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5888)));
    aot_gpr_4 = (16128u << 16u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 < aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    ctx.fpr[24] = std::bit_cast<float>(aot_gpr_4);
      if (branch_taken) {
          goto L_08A5F0E8;
      }
      goto L_08A5F0D0;
    }
L_08A5F0D0:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(1220)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5888)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08A5F294;
      }
      goto L_08A5F0E8;
    }
L_08A5F0E8:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(608)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(604)));
    aot_gpr_4 = (16230u << 16u);
    aot_fpr_12 = aot_fpr_12 - aot_fpr_13;
    aot_gpr_4 = (aot_gpr_4 | 26214u);
    ctx.fpr[14] = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= ctx.fpr[14])) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (15523u << 16u);
      if (branch_taken) {
          goto L_08A5F294;
      }
      goto L_08A5F110;
    }
L_08A5F110:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(624)));
    aot_gpr_4 = (aot_gpr_4 | 55050u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08A5F294;
      }
      goto L_08A5F12C;
    }
L_08A5F12C:
    aot_gpr_31 = (0x08A5F134u);
    aot_gpr_4 = (aot_gpr_23 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 807u, 0x08A5F134u, 0x08A587B4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 111u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 111u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 111u, 0x08A587B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5F134u) goto L_08A5F134;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5F134:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_08A5F294;
      }
      goto L_08A5F13C;
    }
L_08A5F13C:
    aot_gpr_31 = (0x08A5F144u);
    aot_fpr_20 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(1392)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 809u, 0x08A5F144u, 0x08A583C0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 52u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 52u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 52u, 0x08A583C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5F144u) goto L_08A5F144;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5F144:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_0));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_gpr_31 = (0x08A5F154u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 810u, 0x08A5F154u, 0x08A5852Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 74u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 74u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 74u, 0x08A5852Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5F154u) goto L_08A5F154;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5F154:
    { const float fs = aot_fpr_0; const float ft = ctx.fpr[30]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(1224)));
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = aot_fpr_20 + aot_fpr_12;
    aot_mem.aot_direct_store32(aot_gpr_23 + static_cast<std::uint32_t>(1392), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5888)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 < aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    ctx.gpr[16] = (aot_gpr_29 + static_cast<std::uint32_t>(560));
      if (branch_taken) {
          goto L_08A5F194;
      }
      goto L_08A5F17C;
    }
L_08A5F17C:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(1228)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5888)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08A5F214;
      }
      goto L_08A5F194;
    }
L_08A5F194:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1568), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[17] = (aot_gpr_29 + static_cast<std::uint32_t>(1552));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1576), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(1576));
    aot_gpr_31 = (0x08A5F1ACu);
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(624));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0148.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 813u, 0x08A5F1ACu, 0x08A57FE4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0148_entry(rt, ctx, 910u, aot_mem);
#else
        recomp_unit_0148_entry(rt, ctx, 910u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0148_entry, 148u, 910u, 0x08A57FE4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5F1ACu) goto L_08A5F1AC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5F1AC:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1572), std::bit_cast<std::uint32_t>(aot_fpr_0));
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(1572));
    aot_gpr_31 = (0x08A5F1BCu);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(1568));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0148.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 814u, 0x08A5F1BCu, 0x08A57FBCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0148_entry(rt, ctx, 907u, aot_mem);
#else
        recomp_unit_0148_entry(rt, ctx, 907u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0148_entry, 148u, 907u, 0x08A57FBCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5F1BCu) goto L_08A5F1BC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5F1BC:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(1392)));
    aot_gpr_31 = (0x08A5F1C8u);
    aot_fpr_20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_0));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 815u, 0x08A5F1C8u, 0x08A5800Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 2u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 2u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 2u, 0x08A5800Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5F1C8u) goto L_08A5F1C8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5F1C8:
    { const float fs = aot_fpr_20; const float ft = aot_fpr_0; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(212)));
    aot_gpr_4 = (15605u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 49807u);
    ctx.fpr[14] = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_4 = (aot_gpr_23 | 0u);
    aot_gpr_31 = (0x08A5F1ECu);
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_20 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_20 = fs * ft; }
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 816u, 0x08A5F1ECu, 0x08A58294u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 32u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 32u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 32u, 0x08A58294u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5F1ECu) goto L_08A5F1EC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5F1EC:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x08A5F1FCu);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0148.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 817u, 0x08A5F1FCu, 0x08A57F64u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0148_entry(rt, ctx, 904u, aot_mem);
#else
        recomp_unit_0148_entry(rt, ctx, 904u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0148_entry, 148u, 904u, 0x08A57F64u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5F1FCu) goto L_08A5F1FC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5F1FC:
    aot_gpr_4 = (aot_gpr_23 | 0u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08A5F20Cu);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 818u, 0x08A5F20Cu, 0x08A58628u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 84u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 84u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 84u, 0x08A58628u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5F20Cu) goto L_08A5F20C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5F20C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08A5F298;
      }
      goto L_08A5F214;
    }
L_08A5F214:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1600), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[17] = (aot_gpr_29 + static_cast<std::uint32_t>(1584));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1608), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(1608));
    aot_gpr_31 = (0x08A5F22Cu);
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(624));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0148.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 820u, 0x08A5F22Cu, 0x08A57FE4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0148_entry(rt, ctx, 910u, aot_mem);
#else
        recomp_unit_0148_entry(rt, ctx, 910u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0148_entry, 148u, 910u, 0x08A57FE4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5F22Cu) goto L_08A5F22C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5F22C:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1604), std::bit_cast<std::uint32_t>(aot_fpr_0));
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(1604));
    aot_gpr_31 = (0x08A5F23Cu);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(1600));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0148.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 821u, 0x08A5F23Cu, 0x08A57FBCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0148_entry(rt, ctx, 907u, aot_mem);
#else
        recomp_unit_0148_entry(rt, ctx, 907u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0148_entry, 148u, 907u, 0x08A57FBCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5F23Cu) goto L_08A5F23C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5F23C:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(1392)));
    aot_gpr_31 = (0x08A5F248u);
    aot_fpr_20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_0));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 822u, 0x08A5F248u, 0x08A5800Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 2u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 2u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 2u, 0x08A5800Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5F248u) goto L_08A5F248;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5F248:
    { const float fs = aot_fpr_20; const float ft = aot_fpr_0; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(212)));
    aot_gpr_4 = (15333u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 24642u);
    ctx.fpr[14] = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_4 = (aot_gpr_23 | 0u);
    aot_gpr_31 = (0x08A5F26Cu);
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_20 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_20 = fs * ft; }
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 823u, 0x08A5F26Cu, 0x08A58294u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 32u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 32u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 32u, 0x08A58294u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5F26Cu) goto L_08A5F26C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5F26C:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x08A5F27Cu);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0148.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 824u, 0x08A5F27Cu, 0x08A57F64u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0148_entry(rt, ctx, 904u, aot_mem);
#else
        recomp_unit_0148_entry(rt, ctx, 904u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0148_entry, 148u, 904u, 0x08A57F64u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5F27Cu) goto L_08A5F27C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5F27C:
    aot_gpr_4 = (aot_gpr_23 | 0u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08A5F28Cu);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 825u, 0x08A5F28Cu, 0x08A58628u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 84u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 84u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 84u, 0x08A58628u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5F28Cu) goto L_08A5F28C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5F28C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08A5F298;
      }
      goto L_08A5F294;
    }
L_08A5F294:
    aot_mem.aot_direct_store32(aot_gpr_23 + static_cast<std::uint32_t>(1392), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    goto L_08A5F298;
L_08A5F298:
    aot_gpr_31 = (0x08A5F2A0u);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_23 + static_cast<std::uint32_t>(86))))));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 828u, 0x08A5F2A0u, 0x08A58304u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 41u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 41u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 41u, 0x08A58304u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5F2A0u) goto L_08A5F2A0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5F2A0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(2056)));
    ctx.gpr[6] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(2080)));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(60)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(2072)));
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(1216)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 <= ctx.fpr[28])) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08A5F2D8;
      }
      goto L_08A5F2C8;
    }
L_08A5F2C8:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(1216)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(1316)));
    { const float fs = aot_fpr_13; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_12 = aot_fpr_12 - aot_fpr_13;
    goto L_08A5F2D8;
L_08A5F2D8:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(1300)));
    aot_gpr_5 = (16192u << 16u);
    aot_fpr_12 = aot_fpr_12 - ctx.fpr[14];
    ctx.gpr[6] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(2076)));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(2068)));
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(1216)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[15] <= ctx.fpr[28])) ? 0x00800000u : 0u);
    aot_fpr_12 = ctx.fpr[14] + aot_fpr_12;
    aot_mem.aot_direct_store32(aot_gpr_23 + static_cast<std::uint32_t>(1300), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(60)));
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[6]);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08A5F324;
      }
      goto L_08A5F314;
    }
L_08A5F314:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(1216)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(1316)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    aot_fpr_12 = aot_fpr_12 - ctx.fpr[14];
    goto L_08A5F324;
L_08A5F324:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(1304)));
    aot_fpr_12 = aot_fpr_12 - ctx.fpr[14];
    aot_gpr_4 = (0u | 0u);
    aot_gpr_5 = (ctx.gpr[28] | 0u);
    ctx.gpr[6] = (aot_gpr_23 | 0u);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = ctx.fpr[14] + aot_fpr_12;
    aot_mem.aot_direct_store32(aot_gpr_23 + static_cast<std::uint32_t>(1304), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_08A5F344;
L_08A5F344:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(7156)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(ctx.gpr[6] + static_cast<std::uint32_t>(1500), ctx.gpr[7]);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (static_cast<std::int32_t>(aot_gpr_4) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A5F344;
      }
      goto L_08A5F360;
    }
L_08A5F360:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(604)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < ctx.fpr[28])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08A5F388;
      }
      goto L_08A5F374;
    }
L_08A5F374:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(1504)));
    aot_gpr_5 = (0u | 1u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08A5F388;
      }
      goto L_08A5F384;
    }
L_08A5F384:
    aot_mem.aot_direct_store32(aot_gpr_23 + static_cast<std::uint32_t>(1504), 0u);
    goto L_08A5F388;
L_08A5F388:
    aot_gpr_31 = (0x08A5F390u);
    aot_gpr_4 = (aot_gpr_23 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 838u, 0x08A5F390u, 0x08A583ECu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 56u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 56u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 56u, 0x08A583ECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5F390u) goto L_08A5F390;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5F390:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_08A5F548;
      }
      goto L_08A5F398;
    }
L_08A5F398:
    aot_gpr_31 = (0x08A5F3A0u);
    aot_gpr_4 = (aot_gpr_23 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0191.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 840u, 0x08A5F3A0u, 0x08B00E18u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0191_entry(rt, ctx, 238u, aot_mem);
#else
        recomp_unit_0191_entry(rt, ctx, 238u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0191_entry, 191u, 238u, 0x08B00E18u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5F3A0u) goto L_08A5F3A0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5F3A0:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08A5F4E4;
      }
      goto L_08A5F3A8;
    }
L_08A5F3A8:
    aot_gpr_4 = (2238u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-6640));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(166)));
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(158)));
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_08A5F468;
      }
      goto L_08A5F3C4;
    }
L_08A5F3C4:
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(166)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(7));
    if (static_cast<std::int32_t>(aot_gpr_5) >= 0) {
    aot_gpr_5 = (aot_gpr_5 & 7u);
        goto L_08A5F3E8;
    }
    goto L_08A5F3D4;
L_08A5F3D4:
    aot_gpr_5 = (0u - aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 & 7u);
    aot_gpr_5 = (0u - aot_gpr_5);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_4);
      if (branch_taken) {
          goto L_08A5F3EC;
      }
      goto L_08A5F3E8;
    }
L_08A5F3E8:
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_4);
    goto L_08A5F3EC;
L_08A5F3EC:
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(158)));
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08A5F460;
      }
      goto L_08A5F3F8;
    }
L_08A5F3F8:
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(166)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    if (static_cast<std::int32_t>(aot_gpr_5) >= 0) {
    aot_gpr_5 = (aot_gpr_5 & 7u);
        goto L_08A5F41C;
    }
    goto L_08A5F408;
L_08A5F408:
    aot_gpr_5 = (0u - aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 & 7u);
    aot_gpr_5 = (0u - aot_gpr_5);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_4);
      if (branch_taken) {
          goto L_08A5F420;
      }
      goto L_08A5F41C;
    }
L_08A5F41C:
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_4);
    goto L_08A5F420;
L_08A5F420:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(158)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08A5F460;
      }
      goto L_08A5F42C;
    }
L_08A5F42C:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_23 + static_cast<std::uint32_t>(618))))));
    aot_gpr_4 = (aot_gpr_4 & 32u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_mem.aot_direct_store32(aot_gpr_23 + static_cast<std::uint32_t>(700), 0u);
      if (branch_taken) {
          goto L_08A5F450;
      }
      goto L_08A5F43C;
    }
L_08A5F43C:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_23 + static_cast<std::uint32_t>(618))))));
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-33));
    aot_gpr_4 = (aot_gpr_5 & aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_23 + static_cast<std::uint32_t>(618), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_08A5F560;
      }
      goto L_08A5F450;
    }
L_08A5F450:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_23 + static_cast<std::uint32_t>(618))))));
    aot_gpr_4 = (aot_gpr_4 | 32u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_23 + static_cast<std::uint32_t>(618), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_08A5F560;
      }
      goto L_08A5F460;
    }
L_08A5F460:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_23 + static_cast<std::uint32_t>(700), 0u);
      if (branch_taken) {
          goto L_08A5F560;
      }
      goto L_08A5F468;
    }
L_08A5F468:
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(166)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(7));
    if (static_cast<std::int32_t>(aot_gpr_5) >= 0) {
    aot_gpr_5 = (aot_gpr_5 & 7u);
        goto L_08A5F48C;
    }
    goto L_08A5F478;
L_08A5F478:
    aot_gpr_5 = (0u - aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 & 7u);
    aot_gpr_5 = (0u - aot_gpr_5);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_4);
      if (branch_taken) {
          goto L_08A5F490;
      }
      goto L_08A5F48C;
    }
L_08A5F48C:
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_4);
    goto L_08A5F490;
L_08A5F490:
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(158)));
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08A5F4DC;
      }
      goto L_08A5F49C;
    }
L_08A5F49C:
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(166)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    if (static_cast<std::int32_t>(aot_gpr_5) >= 0) {
    aot_gpr_5 = (aot_gpr_5 & 7u);
        goto L_08A5F4C0;
    }
    goto L_08A5F4AC;
L_08A5F4AC:
    aot_gpr_5 = (0u - aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 & 7u);
    aot_gpr_5 = (0u - aot_gpr_5);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_4);
      if (branch_taken) {
          goto L_08A5F4C4;
      }
      goto L_08A5F4C0;
    }
L_08A5F4C0:
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_4);
    goto L_08A5F4C4;
L_08A5F4C4:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(158)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08A5F4DC;
      }
      goto L_08A5F4D0;
    }
L_08A5F4D0:
    aot_gpr_4 = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_23 + static_cast<std::uint32_t>(700), aot_gpr_4);
      if (branch_taken) {
          goto L_08A5F560;
      }
      goto L_08A5F4DC;
    }
L_08A5F4DC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_23 + static_cast<std::uint32_t>(700), 0u);
      if (branch_taken) {
          goto L_08A5F560;
      }
      goto L_08A5F4E4;
    }
L_08A5F4E4:
    aot_gpr_31 = (0x08A5F4ECu);
    aot_gpr_4 = (aot_gpr_23 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 865u, 0x08A5F4ECu, 0x08A587F4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 118u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 118u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 118u, 0x08A587F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5F4ECu) goto L_08A5F4EC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5F4EC:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_08A5F560;
      }
      goto L_08A5F4F4;
    }
L_08A5F4F4:
    ctx.gpr[16] = (2238u << 16u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-6640));
    aot_gpr_31 = (0x08A5F504u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0098.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 867u, 0x08A5F504u, 0x0898CE74u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0098_entry(rt, ctx, 319u, aot_mem);
#else
        recomp_unit_0098_entry(rt, ctx, 319u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0098_entry, 98u, 319u, 0x0898CE74u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5F504u) goto L_08A5F504;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5F504:
    ctx.gpr[17] = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x08A5F510u);
    aot_gpr_4 = (aot_gpr_23 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 868u, 0x08A5F510u, 0x08A587ECu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 117u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 117u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 117u, 0x08A587ECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5F510u) goto L_08A5F510;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5F510:
    aot_gpr_4 = (0u | 8u);
    { const bool branch_taken = aot_gpr_2 != aot_gpr_4;
      if (branch_taken) {
          goto L_08A5F528;
      }
      goto L_08A5F51C;
    }
L_08A5F51C:
    aot_gpr_31 = (0x08A5F524u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0098.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 870u, 0x08A5F524u, 0x0898CF00u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0098_entry(rt, ctx, 333u, aot_mem);
#else
        recomp_unit_0098_entry(rt, ctx, 333u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0098_entry, 98u, 333u, 0x0898CF00u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5F524u) goto L_08A5F524;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5F524:
    ctx.gpr[17] = (aot_gpr_2 | 0u);
    goto L_08A5F528;
L_08A5F528:
    { const bool branch_taken = ctx.gpr[17] == 0u;
      if (branch_taken) {
          goto L_08A5F53C;
      }
      goto L_08A5F530;
    }
L_08A5F530:
    aot_gpr_4 = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_23 + static_cast<std::uint32_t>(700), aot_gpr_4);
      if (branch_taken) {
          goto L_08A5F540;
      }
      goto L_08A5F53C;
    }
L_08A5F53C:
    aot_mem.aot_direct_store32(aot_gpr_23 + static_cast<std::uint32_t>(700), 0u);
    goto L_08A5F540;
L_08A5F540:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08A5F560;
      }
      goto L_08A5F548;
    }
L_08A5F548:
    aot_gpr_31 = (0x08A5F550u);
    aot_gpr_4 = (aot_gpr_23 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 876u, 0x08A5F550u, 0x08A587F4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 118u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 118u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 118u, 0x08A587F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5F550u) goto L_08A5F550;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5F550:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_08A5F560;
      }
      goto L_08A5F558;
    }
L_08A5F558:
    aot_gpr_31 = (0x08A5F560u);
    aot_gpr_4 = (aot_gpr_23 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 878u, 0x08A5F560u, 0x08A58A70u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 160u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 160u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 160u, 0x08A58A70u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5F560u) goto L_08A5F560;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5F560:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(636)));
    aot_gpr_4 = (17274u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08A5F8F4;
      }
      goto L_08A5F57C;
    }
L_08A5F57C:
    aot_gpr_31 = (0x08A5F584u);
    aot_gpr_4 = (aot_gpr_23 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 880u, 0x08A5F584u, 0x08A583ECu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 56u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 56u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 56u, 0x08A583ECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5F584u) goto L_08A5F584;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5F584:
    aot_gpr_4 = (0u | 5u);
    { const bool branch_taken = aot_gpr_2 == aot_gpr_4;
      if (branch_taken) {
          goto L_08A5F8F4;
      }
      goto L_08A5F590;
    }
L_08A5F590:
    aot_gpr_31 = (0x08A5F598u);
    aot_gpr_4 = (aot_gpr_23 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 882u, 0x08A5F598u, 0x08A587ECu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 117u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 117u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 117u, 0x08A587ECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5F598u) goto L_08A5F598;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5F598:
    aot_gpr_4 = (0u | 8u);
    { const bool branch_taken = aot_gpr_2 != aot_gpr_4;
      if (branch_taken) {
          goto L_08A5F5EC;
      }
      goto L_08A5F5A4;
    }
L_08A5F5A4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(92)));
    ctx.gpr[6] = (0u | 1u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(344));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (aot_gpr_23 + aot_gpr_5);
    jump_target = ctx.gpr[7];
    aot_gpr_31 = (0x08A5F5C4u);
    aot_gpr_5 = (0u | 13u);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5F5C4u) goto L_08A5F5C4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A5F5C4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(92)));
    aot_gpr_5 = (0u | 15u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(344));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (aot_gpr_23 + ctx.gpr[6]);
    jump_target = ctx.gpr[7];
    aot_gpr_31 = (0x08A5F5E4u);
    ctx.gpr[6] = (0u | 1u);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5F5E4u) goto L_08A5F5E4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A5F5E4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08A5F8F8;
      }
      goto L_08A5F5EC;
    }
L_08A5F5EC:
    aot_gpr_4 = (15820u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    ctx.fpr[22] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (16230u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 26214u);
    aot_gpr_31 = (0x08A5F608u);
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_4);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0087.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 887u, 0x08A5F608u, 0x089602C8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0087_entry(rt, ctx, 28u, aot_mem);
#else
        recomp_unit_0087_entry(rt, ctx, 28u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5F608u) goto L_08A5F608;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5F608:
    ctx.gpr[16] = (aot_gpr_29 + static_cast<std::uint32_t>(1632));
    { const float fs = aot_fpr_20; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    { const bool branch_taken = aot_gpr_23 != aot_gpr_2;
    ctx.gpr[17] = (aot_gpr_29 + static_cast<std::uint32_t>(1648));
      if (branch_taken) {
          goto L_08A5F684;
      }
      goto L_08A5F618;
    }
L_08A5F618:
    aot_gpr_4 = (2236u << 16u);
    aot_gpr_31 = (0x08A5F624u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(32304));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0134.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 889u, 0x08A5F624u, 0x08A1C6C0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0134_entry(rt, ctx, 63u, aot_mem);
#else
        recomp_unit_0134_entry(rt, ctx, 63u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0134_entry, 134u, 63u, 0x08A1C6C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5F624u) goto L_08A5F624;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5F624:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08A5F684;
      }
      goto L_08A5F62C;
    }
L_08A5F62C:
    aot_gpr_5 = (16281u << 16u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_gpr_5 = (aot_gpr_5 | 39322u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(1664));
    aot_gpr_5 = (48844u << 16u);
    aot_gpr_5 = (aot_gpr_5 | 52429u);
    aot_gpr_31 = (0x08A5F650u);
    ctx.fpr[14] = std::bit_cast<float>(aot_gpr_5);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 891u, 0x08A5F650u, 0x08A580C8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 9u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 9u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 9u, 0x08A580C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5F650u) goto L_08A5F650;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5F650:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08A5F65Cu);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 892u, 0x08A5F65Cu, 0x08A58168u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 15u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 15u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 15u, 0x08A58168u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5F65Cu) goto L_08A5F65C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5F65C:
    aot_gpr_4 = (15436u << 16u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1648), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1652), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_gpr_31 = (0x08A5F67Cu);
    { const float fs = aot_fpr_20; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 893u, 0x08A5F67Cu, 0x08A5852Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 74u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 74u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 74u, 0x08A5852Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5F67Cu) goto L_08A5F67C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5F67C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1656), std::bit_cast<std::uint32_t>(aot_fpr_0));
      if (branch_taken) {
          goto L_08A5F764;
      }
      goto L_08A5F684;
    }
L_08A5F684:
    aot_gpr_4 = (16025u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 39322u);
    ctx.fpr[26] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_31 = (0x08A5F698u);
    aot_gpr_4 = (aot_gpr_23 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 895u, 0x08A5F698u, 0x08A584FCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 68u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 68u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 68u, 0x08A584FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5F698u) goto L_08A5F698;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5F698:
    aot_gpr_31 = (0x08A5F6A0u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 896u, 0x08A5F6A0u, 0x08A58304u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 41u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 41u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 41u, 0x08A58304u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5F6A0u) goto L_08A5F6A0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5F6A0:
    aot_gpr_31 = (0x08A5F6A8u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 897u, 0x08A5F6A8u, 0x08A5878Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 106u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 106u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 106u, 0x08A5878Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5F6A8u) goto L_08A5F6A8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5F6A8:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08A5F6B4u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 898u, 0x08A5F6B4u, 0x08A58168u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 15u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 15u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 15u, 0x08A58168u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5F6B4u) goto L_08A5F6B4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5F6B4:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1640)));
    aot_gpr_4 = (15544u << 16u);
    aot_fpr_12 = aot_fpr_12 - ctx.fpr[26];
    aot_gpr_4 = (aot_gpr_4 | 20972u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[18] = (aot_gpr_29 + static_cast<std::uint32_t>(1680));
    { const float fs = aot_fpr_20; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[26] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[26] = fs * ft; }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1640), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_gpr_31 = (0x08A5F6E0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 899u, 0x08A5F6E0u, 0x08A5852Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 74u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 74u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 74u, 0x08A5852Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5F6E0u) goto L_08A5F6E0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5F6E0:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_0));
    aot_gpr_31 = (0x08A5F6ECu);
    aot_gpr_4 = (aot_gpr_23 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 900u, 0x08A5F6ECu, 0x08A58294u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 32u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 32u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 32u, 0x08A58294u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5F6ECu) goto L_08A5F6EC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5F6EC:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_gpr_31 = (0x08A5F6FCu);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0148.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 901u, 0x08A5F6FCu, 0x08A57F64u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0148_entry(rt, ctx, 904u, aot_mem);
#else
        recomp_unit_0148_entry(rt, ctx, 904u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0148_entry, 148u, 904u, 0x08A57F64u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5F6FCu) goto L_08A5F6FC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5F6FC:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08A5F708u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 902u, 0x08A5F708u, 0x08A58168u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 15u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 15u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 15u, 0x08A58168u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5F708u) goto L_08A5F708;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5F708:
    { const float fs = aot_fpr_20; const float ft = ctx.fpr[30]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_gpr_31 = (0x08A5F714u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 903u, 0x08A5F714u, 0x08A5852Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 74u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 74u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 74u, 0x08A5852Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5F714u) goto L_08A5F714;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5F714:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_0));
    aot_gpr_31 = (0x08A5F720u);
    aot_gpr_4 = (aot_gpr_23 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 904u, 0x08A5F720u, 0x08A5829Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 33u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 33u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 33u, 0x08A5829Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5F720u) goto L_08A5F720;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5F720:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_gpr_31 = (0x08A5F730u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0148.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 905u, 0x08A5F730u, 0x08A57F64u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0148_entry(rt, ctx, 904u, aot_mem);
#else
        recomp_unit_0148_entry(rt, ctx, 904u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0148_entry, 148u, 904u, 0x08A57F64u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5F730u) goto L_08A5F730;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5F730:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08A5F73Cu);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0163.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 906u, 0x08A5F73Cu, 0x08A931D0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0163_entry(rt, ctx, 464u, aot_mem);
#else
        recomp_unit_0163_entry(rt, ctx, 464u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0163_entry, 163u, 464u, 0x08A931D0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5F73Cu) goto L_08A5F73C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5F73C:
    aot_gpr_4 = (15139u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 55050u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (15523u << 16u);
    { const float fs = aot_fpr_20; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_4 = (aot_gpr_4 | 55050u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_31 = (0x08A5F760u);
    { const float fs = aot_fpr_20; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 907u, 0x08A5F760u, 0x08A5852Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 74u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 74u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 74u, 0x08A5852Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5F760u) goto L_08A5F760;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5F760:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1656), std::bit_cast<std::uint32_t>(aot_fpr_0));
    goto L_08A5F764;
L_08A5F764:
    ctx.gpr[18] = (aot_gpr_29 + static_cast<std::uint32_t>(1616));
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (aot_gpr_23 | 0u);
    aot_gpr_31 = (0x08A5F778u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0148.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 909u, 0x08A5F778u, 0x08A57EDCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0148_entry(rt, ctx, 899u, aot_mem);
#else
        recomp_unit_0148_entry(rt, ctx, 899u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0148_entry, 148u, 899u, 0x08A57EDCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5F778u) goto L_08A5F778;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5F778:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08A5F784u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 910u, 0x08A5F784u, 0x08A58168u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 15u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 15u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 15u, 0x08A58168u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5F784u) goto L_08A5F784;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5F784:
    aot_gpr_4 = (0u | 27u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    aot_gpr_31 = (0x08A5F7ACu);
    ctx.gpr[11] = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0062.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 911u, 0x08A5F7ACu, 0x088FF060u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0062_entry(rt, ctx, 716u, aot_mem);
#else
        recomp_unit_0062_entry(rt, ctx, 716u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0062_entry, 62u, 716u, 0x088FF060u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5F7ACu) goto L_08A5F7AC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5F7AC:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_gpr_31 = (0x08A5F7C0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 912u, 0x08A5F7C0u, 0x08A580C8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 9u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 9u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 9u, 0x08A580C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5F7C0u) goto L_08A5F7C0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5F7C0:
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_gpr_4 = (0u | 56u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (aot_gpr_2 | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    aot_gpr_31 = (0x08A5F7E8u);
    ctx.gpr[11] = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0062.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 913u, 0x08A5F7E8u, 0x088FF060u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0062_entry(rt, ctx, 716u, aot_mem);
#else
        recomp_unit_0062_entry(rt, ctx, 716u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0062_entry, 62u, 716u, 0x088FF060u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5F7E8u) goto L_08A5F7E8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5F7E8:
    aot_gpr_4 = (48928u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (16160u << 16u);
    { const float fs = aot_fpr_20; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_20; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_gpr_31 = (0x08A5F80Cu);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 914u, 0x08A5F80Cu, 0x08A5852Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 74u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 74u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 74u, 0x08A5852Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5F80Cu) goto L_08A5F80C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5F80C:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1632)));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[14] = ctx.fpr[14] + aot_fpr_0;
    aot_gpr_31 = (0x08A5F824u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1632), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 915u, 0x08A5F824u, 0x08A5852Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 74u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 74u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 74u, 0x08A5852Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5F824u) goto L_08A5F824;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5F824:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1636)));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_gpr_4 = (16416u << 16u);
    ctx.fpr[14] = aot_fpr_13 + aot_fpr_0;
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1636), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_gpr_31 = (0x08A5F844u);
    { const float fs = aot_fpr_20; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 916u, 0x08A5F844u, 0x08A5852Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 74u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 74u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 74u, 0x08A5852Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5F844u) goto L_08A5F844;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5F844:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1640)));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.fpr[15] = ctx.fpr[14] + aot_fpr_0;
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_gpr_31 = (0x08A5F864u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1640), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 917u, 0x08A5F864u, 0x08A580C8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 9u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 9u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 9u, 0x08A580C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5F864u) goto L_08A5F864;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5F864:
    aot_gpr_4 = (0u | 57u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (aot_gpr_2 | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    aot_gpr_31 = (0x08A5F88Cu);
    ctx.gpr[11] = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0062.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 918u, 0x08A5F88Cu, 0x088FF060u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0062_entry(rt, ctx, 716u, aot_mem);
#else
        recomp_unit_0062_entry(rt, ctx, 716u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0062_entry, 62u, 716u, 0x088FF060u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5F88Cu) goto L_08A5F88C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5F88C:
    aot_gpr_31 = (0x08A5F894u);
    aot_fpr_20 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(1400)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 919u, 0x08A5F894u, 0x08A58354u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 48u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 48u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 48u, 0x08A58354u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5F894u) goto L_08A5F894;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5F894:
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_2);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_2) >= 0;
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
      if (branch_taken) {
          goto L_08A5F8AC;
      }
      goto L_08A5F8A0;
    }
L_08A5F8A0:
    aot_gpr_4 = (20352u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    goto L_08A5F8AC;
L_08A5F8AC:
    aot_fpr_12 = aot_fpr_20 + aot_fpr_12;
    aot_gpr_4 = (17820u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 16384u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    aot_mem.aot_direct_store32(aot_gpr_23 + static_cast<std::uint32_t>(1400), std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_08A5F8EC;
      }
      goto L_08A5F8CC;
    }
L_08A5F8CC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(92)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(1488)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(328));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (aot_gpr_23 + ctx.gpr[6]);
    jump_target = ctx.gpr[7];
    aot_gpr_31 = (0x08A5F8ECu);
    ctx.gpr[6] = (0u | 0u);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5F8ECu) goto L_08A5F8EC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A5F8EC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08A5F8F8;
      }
      goto L_08A5F8F4;
    }
L_08A5F8F4:
    aot_mem.aot_direct_store32(aot_gpr_23 + static_cast<std::uint32_t>(1400), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    goto L_08A5F8F8;
L_08A5F8F8:
    aot_gpr_31 = (0x08A5F900u);
    aot_gpr_4 = (aot_gpr_23 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0190.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 926u, 0x08A5F900u, 0x08AFFEFCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0190_entry(rt, ctx, 947u, aot_mem);
#else
        recomp_unit_0190_entry(rt, ctx, 947u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 947u, 0x08AFFEFCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5F900u) goto L_08A5F900;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5F900:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_23 + static_cast<std::uint32_t>(618))))));
    aot_gpr_4 = (aot_gpr_4 & 32u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08A5F93C;
      }
      goto L_08A5F910;
    }
L_08A5F910:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7764)));
    aot_gpr_5 = (0u | 5u);
    aot_gpr_4 = (aot_gpr_4 & 7u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08A5F93C;
      }
      goto L_08A5F924;
    }
L_08A5F924:
    aot_gpr_31 = (0x08A5F92Cu);
    aot_gpr_4 = (aot_gpr_23 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0191.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 929u, 0x08A5F92Cu, 0x08B00E18u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0191_entry(rt, ctx, 238u, aot_mem);
#else
        recomp_unit_0191_entry(rt, ctx, 238u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0191_entry, 191u, 238u, 0x08B00E18u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5F92Cu) goto L_08A5F92C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5F92C:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08A5F93C;
      }
      goto L_08A5F934;
    }
L_08A5F934:
    aot_gpr_31 = (0x08A5F93Cu);
    aot_gpr_4 = (aot_gpr_23 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0195.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 931u, 0x08A5F93Cu, 0x08B1096Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0195_entry(rt, ctx, 149u, aot_mem);
#else
        recomp_unit_0195_entry(rt, ctx, 149u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0195_entry, 195u, 149u, 0x08B1096Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5F93Cu) goto L_08A5F93C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5F93C:
    ctx.fpr[24] = std::bit_cast<float>(0u);
    aot_gpr_4 = (aot_gpr_23 | 0u);
    aot_gpr_31 = (0x08A5F94Cu);
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 932u, 0x08A5F94Cu, 0x08A585E0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 79u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 79u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 79u, 0x08A585E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5F94Cu) goto L_08A5F94C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5F94C:
    aot_gpr_31 = (0x08A5F954u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 933u, 0x08A5F954u, 0x08A58150u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 14u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 14u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 14u, 0x08A58150u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5F954u) goto L_08A5F954;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5F954:
    aot_gpr_4 = (15651u << 16u);
    ctx.fpr[28] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_0));
    aot_gpr_4 = (aot_gpr_4 | 55051u);
    ctx.fpr[26] = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[18] = (0u | 0u);
    aot_gpr_4 = (15692u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    ctx.gpr[22] = (0u | 19u);
    ctx.fpr[30] = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[21] = (0u | 25u);
    ctx.gpr[20] = (0u | 18u);
    ctx.gpr[19] = (0u | 33u);
    ctx.gpr[17] = (aot_gpr_23 | 0u);
    ctx.gpr[16] = (aot_gpr_23 + static_cast<std::uint32_t>(1088));
    goto L_08A5F98C;
L_08A5F98C:
    aot_fpr_20 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1232)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1216)));
    aot_gpr_4 = (16025u << 16u);
    aot_fpr_20 = aot_fpr_20 - aot_fpr_12;
    aot_gpr_4 = (aot_gpr_4 | 39322u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_20 <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08A5FA60;
      }
      goto L_08A5F9B4;
    }
L_08A5F9B4:
    { const bool branch_taken = ctx.gpr[18] == 0u;
      if (branch_taken) {
          goto L_08A5F9C4;
      }
      goto L_08A5F9BC;
    }
L_08A5F9BC:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[30];
      if (branch_taken) {
          goto L_08A5FA60;
      }
      goto L_08A5F9C4;
    }
L_08A5F9C4:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[28] <= ctx.fpr[26])) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08A5FA60;
      }
      goto L_08A5F9D4;
    }
L_08A5F9D4:
    aot_gpr_31 = (0x08A5F9DCu);
    aot_gpr_4 = (aot_gpr_23 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 939u, 0x08A5F9DCu, 0x08A583ECu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 56u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 56u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 56u, 0x08A583ECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5F9DCu) goto L_08A5F9DC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5F9DC:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08A5F9F8;
      }
      goto L_08A5F9E4;
    }
L_08A5F9E4:
    aot_gpr_31 = (0x08A5F9ECu);
    aot_gpr_4 = (aot_gpr_23 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 941u, 0x08A5F9ECu, 0x08A583ECu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 56u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 56u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 56u, 0x08A583ECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5F9ECu) goto L_08A5F9EC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5F9EC:
    aot_gpr_4 = (0u | 3u);
    { const bool branch_taken = aot_gpr_2 != aot_gpr_4;
      if (branch_taken) {
          goto L_08A5FA60;
      }
      goto L_08A5F9F8;
    }
L_08A5F9F8:
    aot_gpr_4 = (aot_gpr_23 + ctx.gpr[18]);
    aot_gpr_5 = (16128u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(1076)));
    aot_gpr_5 = (0u | 1u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    { const float fs = aot_fpr_20; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
      if (branch_taken) {
          goto L_08A5FA34;
      }
      goto L_08A5FA14;
    }
L_08A5FA14:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(2060)));
    ctx.gpr[7] = (16256u << 16u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(96)));
    aot_fpr_13 = std::bit_cast<float>(ctx.gpr[7]);
    aot_gpr_31 = (0x08A5FA2Cu);
    ctx.gpr[6] = (0u | 14u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0128.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 944u, 0x08A5FA2Cu, 0x08A05F80u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0128_entry(rt, ctx, 503u, aot_mem);
#else
        recomp_unit_0128_entry(rt, ctx, 503u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 503u, 0x08A05F80u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5FA2Cu) goto L_08A5FA2C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5FA2C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08A5FA4C;
      }
      goto L_08A5FA34;
    }
L_08A5FA34:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(2060)));
    ctx.gpr[7] = (16256u << 16u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(96)));
    aot_fpr_13 = std::bit_cast<float>(ctx.gpr[7]);
    aot_gpr_31 = (0x08A5FA4Cu);
    ctx.gpr[6] = (0u | 13u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0128.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 946u, 0x08A5FA4Cu, 0x08A05F80u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0128_entry(rt, ctx, 503u, aot_mem);
#else
        recomp_unit_0128_entry(rt, ctx, 503u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 503u, 0x08A05F80u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5FA4Cu) goto L_08A5FA4C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5FA4C:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[24] < aot_fpr_20)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08A5FA60;
      }
      goto L_08A5FA5C;
    }
L_08A5FA5C:
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    goto L_08A5FA60;
L_08A5FA60:
    aot_gpr_31 = (0x08A5FA68u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0087.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 949u, 0x08A5FA68u, 0x089602C8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0087_entry(rt, ctx, 28u, aot_mem);
#else
        recomp_unit_0087_entry(rt, ctx, 28u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5FA68u) goto L_08A5FA68;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5FA68:
    aot_gpr_4 = (15948u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    { const bool branch_taken = aot_gpr_23 != aot_gpr_2;
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_4);
      if (branch_taken) {
          goto L_08A5FB50;
      }
      goto L_08A5FA78;
    }
L_08A5FA78:
    aot_gpr_31 = (0x08A5FA80u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 951u, 0x08A5FA80u, 0x08A58524u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 73u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 73u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 73u, 0x08A58524u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5FA80u) goto L_08A5FA80;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5FA80:
    aot_gpr_4 = (0u | 3u);
    { const bool branch_taken = aot_gpr_2 == aot_gpr_4;
      if (branch_taken) {
          goto L_08A5FAAC;
      }
      goto L_08A5FA8C;
    }
L_08A5FA8C:
    aot_gpr_31 = (0x08A5FA94u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 953u, 0x08A5FA94u, 0x08A58524u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 73u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 73u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 73u, 0x08A58524u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5FA94u) goto L_08A5FA94;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5FA94:
    { const bool branch_taken = aot_gpr_2 == ctx.gpr[22];
      if (branch_taken) {
          goto L_08A5FAAC;
      }
      goto L_08A5FA9C;
    }
L_08A5FA9C:
    aot_gpr_31 = (0x08A5FAA4u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 955u, 0x08A5FAA4u, 0x08A58524u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 73u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 73u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 73u, 0x08A58524u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5FAA4u) goto L_08A5FAA4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5FAA4:
    { const bool branch_taken = aot_gpr_2 != ctx.gpr[21];
      if (branch_taken) {
          goto L_08A5FACC;
      }
      goto L_08A5FAAC;
    }
L_08A5FAAC:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[22] < aot_fpr_20)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08A5FB50;
      }
      goto L_08A5FABC;
    }
L_08A5FABC:
    aot_gpr_4 = (16025u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 39322u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[22] = std::bit_cast<float>(aot_gpr_4);
      if (branch_taken) {
          goto L_08A5FB50;
      }
      goto L_08A5FACC;
    }
L_08A5FACC:
    aot_gpr_31 = (0x08A5FAD4u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 959u, 0x08A5FAD4u, 0x08A58524u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 73u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 73u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 73u, 0x08A58524u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5FAD4u) goto L_08A5FAD4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5FAD4:
    aot_gpr_4 = (0u | 4u);
    { const bool branch_taken = aot_gpr_2 == aot_gpr_4;
      if (branch_taken) {
          goto L_08A5FB00;
      }
      goto L_08A5FAE0;
    }
L_08A5FAE0:
    aot_gpr_31 = (0x08A5FAE8u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 961u, 0x08A5FAE8u, 0x08A58524u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 73u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 73u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 73u, 0x08A58524u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5FAE8u) goto L_08A5FAE8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5FAE8:
    { const bool branch_taken = aot_gpr_2 == ctx.gpr[20];
      if (branch_taken) {
          goto L_08A5FB00;
      }
      goto L_08A5FAF0;
    }
L_08A5FAF0:
    aot_gpr_31 = (0x08A5FAF8u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 963u, 0x08A5FAF8u, 0x08A58524u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 73u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 73u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 73u, 0x08A58524u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5FAF8u) goto L_08A5FAF8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5FAF8:
    { const bool branch_taken = aot_gpr_2 != ctx.gpr[19];
      if (branch_taken) {
          goto L_08A5FB24;
      }
      goto L_08A5FB00;
    }
L_08A5FB00:
    aot_gpr_4 = (15820u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[22] < aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08A5FB50;
      }
      goto L_08A5FB1C;
    }
L_08A5FB1C:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
      if (branch_taken) {
          goto L_08A5FB50;
      }
      goto L_08A5FB24;
    }
L_08A5FB24:
    aot_gpr_31 = (0x08A5FB2Cu);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 967u, 0x08A5FB2Cu, 0x08A58524u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 73u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 73u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 73u, 0x08A58524u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5FB2Cu) goto L_08A5FB2C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5FB2C:
    { const bool branch_taken = aot_gpr_2 != ctx.gpr[30];
      if (branch_taken) {
          goto L_08A5FB50;
      }
      goto L_08A5FB34;
    }
L_08A5FB34:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[22] < ctx.fpr[30])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08A5FB50;
      }
      goto L_08A5FB44;
    }
L_08A5FB44:
    aot_gpr_4 = (15820u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    ctx.fpr[22] = std::bit_cast<float>(aot_gpr_4);
    goto L_08A5FB50;
L_08A5FB50:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1216)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1232), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5888)));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1216), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[18]) < 4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A5F98C;
      }
      goto L_08A5FB74;
    }
L_08A5FB74:
    aot_fpr_20 = std::bit_cast<float>(0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[24] <= aot_fpr_20)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08A5FB98;
      }
      goto L_08A5FB88;
    }
L_08A5FB88:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[22] <= aot_fpr_20)) ? 0x00800000u : 0u);
    if (((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_23 + static_cast<std::uint32_t>(616))))));
        goto L_08A5FD2C;
    }
    goto L_08A5FB98;
L_08A5FB98:
    aot_gpr_31 = (0x08A5FBA0u);
    aot_gpr_4 = (aot_gpr_23 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 974u, 0x08A5FBA0u, 0x08A583ECu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 56u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 56u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 56u, 0x08A583ECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5FBA0u) goto L_08A5FBA0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5FBA0:
    if (aot_gpr_2 != 0u) {
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_23 + static_cast<std::uint32_t>(616))))));
        goto L_08A5FD2C;
    }
    goto L_08A5FBA8;
L_08A5FBA8:
    aot_gpr_31 = (0x08A5FBB0u);
    aot_gpr_4 = (aot_gpr_23 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 976u, 0x08A5FBB0u, 0x08A585E0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 79u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 79u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 79u, 0x08A585E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5FBB0u) goto L_08A5FBB0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5FBB0:
    aot_gpr_31 = (0x08A5FBB8u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 977u, 0x08A5FBB8u, 0x08A58150u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 14u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 14u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 14u, 0x08A58150u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5FBB8u) goto L_08A5FBB8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5FBB8:
    aot_gpr_4 = (15395u << 16u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_0));
    aot_gpr_4 = (aot_gpr_4 | 55051u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    if (((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_23 + static_cast<std::uint32_t>(616))))));
        goto L_08A5FD2C;
    }
    goto L_08A5FBD8;
L_08A5FBD8:
    aot_gpr_31 = (0x08A5FBE0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 979u, 0x08A5FBE0u, 0x08A58084u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 6u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 6u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 6u, 0x08A58084u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5FBE0u) goto L_08A5FBE0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5FBE0:
    aot_gpr_4 = (17224u << 16u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_0));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (17658u << 16u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[24] <= aot_fpr_20)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    ctx.fpr[14] = std::bit_cast<float>(aot_gpr_4);
      if (branch_taken) {
          goto L_08A5FC98;
      }
      goto L_08A5FC00;
    }
L_08A5FC00:
    { const float fs = ctx.fpr[24]; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(208)));
    { const float fs = aot_fpr_13; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    ctx.gpr[6] = (17274u << 16u);
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = aot_fpr_12 / ctx.fpr[15];
    ctx.gpr[7] = (17096u << 16u);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(1696));
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(1700));
    aot_fpr_13 = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1696), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_fpr_13 = std::bit_cast<float>(ctx.gpr[7]);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    aot_gpr_31 = (0x08A5FC3Cu);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1700), std::bit_cast<std::uint32_t>(aot_fpr_12));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0148.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 981u, 0x08A5FC3Cu, 0x08A57FBCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0148_entry(rt, ctx, 907u, aot_mem);
#else
        recomp_unit_0148_entry(rt, ctx, 907u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0148_entry, 148u, 907u, 0x08A57FBCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5FC3Cu) goto L_08A5FC3C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5FC3C:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_0));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_31 = (0x08A5FC4Cu);
    ctx.gpr[16] = (aot_gpr_4 & 255u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 982u, 0x08A5FC4Cu, 0x08A583C0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 52u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 52u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 52u, 0x08A583C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5FC4Cu) goto L_08A5FC4C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5FC4C:
    aot_gpr_4 = (18076u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[16]);
    aot_gpr_4 = (aot_gpr_4 | 16384u);
    aot_fpr_13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_0; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = aot_fpr_12 / aot_fpr_13;
    aot_gpr_4 = (0u | 0u);
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_31 = (0x08A5FC7Cu);
    ctx.gpr[17] = (aot_gpr_5 & 65535u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5FC7Cu) goto L_08A5FC7C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A5FC7C:
    aot_gpr_5 = (ctx.gpr[17] << 16u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 16u));
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x08A5FC90u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0097.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 984u, 0x08A5FC90u, 0x0898BB3Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0097_entry(rt, ctx, 954u, aot_mem);
#else
        recomp_unit_0097_entry(rt, ctx, 954u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0097_entry, 97u, 954u, 0x0898BB3Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5FC90u) goto L_08A5FC90;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5FC90:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_23 + static_cast<std::uint32_t>(616))))));
      if (branch_taken) {
          goto L_08A5FD2C;
      }
      goto L_08A5FC98;
    }
L_08A5FC98:
    { const float fs = ctx.fpr[22]; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(208)));
    { const float fs = aot_fpr_13; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    ctx.gpr[6] = (17174u << 16u);
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = aot_fpr_12 / ctx.fpr[15];
    ctx.gpr[7] = (16928u << 16u);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(1704));
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(1708));
    aot_fpr_13 = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1704), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_fpr_13 = std::bit_cast<float>(ctx.gpr[7]);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    aot_gpr_31 = (0x08A5FCD4u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1708), std::bit_cast<std::uint32_t>(aot_fpr_12));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0148.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 986u, 0x08A5FCD4u, 0x08A57FBCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0148_entry(rt, ctx, 907u, aot_mem);
#else
        recomp_unit_0148_entry(rt, ctx, 907u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0148_entry, 148u, 907u, 0x08A57FBCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5FCD4u) goto L_08A5FCD4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5FCD4:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_0));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_31 = (0x08A5FCE4u);
    ctx.gpr[16] = (aot_gpr_4 & 255u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 987u, 0x08A5FCE4u, 0x08A583C0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 52u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 52u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 52u, 0x08A583C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5FCE4u) goto L_08A5FCE4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5FCE4:
    aot_gpr_4 = (17820u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[16]);
    aot_gpr_4 = (aot_gpr_4 | 16384u);
    aot_fpr_13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_0; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = aot_fpr_12 / aot_fpr_13;
    aot_gpr_4 = (0u | 0u);
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_31 = (0x08A5FD14u);
    ctx.gpr[17] = (aot_gpr_5 & 65535u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5FD14u) goto L_08A5FD14;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A5FD14:
    aot_gpr_5 = (ctx.gpr[17] << 16u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 16u));
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x08A5FD28u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0097.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 989u, 0x08A5FD28u, 0x0898BB3Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0097_entry(rt, ctx, 954u, aot_mem);
#else
        recomp_unit_0097_entry(rt, ctx, 954u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0097_entry, 97u, 954u, 0x0898BB3Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5FD28u) goto L_08A5FD28;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5FD28:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_23 + static_cast<std::uint32_t>(616))))));
    goto L_08A5FD2C;
L_08A5FD2C:
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-17));
    aot_gpr_4 = (aot_gpr_5 & aot_gpr_4);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_23 + static_cast<std::uint32_t>(617))))));
    ctx.gpr[18] = (0u + static_cast<std::uint32_t>(-3));
    aot_mem.aot_direct_store8(aot_gpr_23 + static_cast<std::uint32_t>(616), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_gpr_5 & ctx.gpr[18]);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_23 + static_cast<std::uint32_t>(614))))));
    aot_mem.aot_direct_store8(aot_gpr_23 + static_cast<std::uint32_t>(617), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_gpr_5 & 32u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08A5FD60;
      }
      goto L_08A5FD58;
    }
L_08A5FD58:
    aot_gpr_31 = (0x08A5FD60u);
    aot_gpr_4 = (aot_gpr_23 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0208.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 992u, 0x08A5FD60u, 0x08B4652Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0208_entry(rt, ctx, 484u, aot_mem);
#else
        recomp_unit_0208_entry(rt, ctx, 484u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0208_entry, 208u, 484u, 0x08B4652Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5FD60u) goto L_08A5FD60;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5FD60:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(236)));
    aot_gpr_4 = (aot_gpr_4 & 4u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08A5FDFC;
      }
      goto L_08A5FD70;
    }
L_08A5FD70:
    aot_gpr_4 = (aot_gpr_23 | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x08A5FD84u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0152.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 994u, 0x08A5FD84u, 0x08A6669Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0152_entry(rt, ctx, 537u, aot_mem);
#else
        recomp_unit_0152_entry(rt, ctx, 537u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0152_entry, 152u, 537u, 0x08A6669Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5FD84u) goto L_08A5FD84;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5FD84:
    ctx.gpr[16] = (aot_gpr_29 + static_cast<std::uint32_t>(1712));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    ctx.gpr[17] = (aot_gpr_23 + static_cast<std::uint32_t>(112));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08A5FDA0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 995u, 0x08A5FDA0u, 0x08A580C8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 9u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 9u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 9u, 0x08A580C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5FDA0u) goto L_08A5FDA0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5FDA0:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08A5FDACu);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 996u, 0x08A5FDACu, 0x08A58168u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 15u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 15u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 15u, 0x08A58168u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5FDACu) goto L_08A5FDAC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5FDAC:
    ctx.gpr[17] = (aot_gpr_23 + static_cast<std::uint32_t>(128));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x08A5FDC4u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 997u, 0x08A5FDC4u, 0x08A580C8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 9u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 9u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 9u, 0x08A580C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5FDC4u) goto L_08A5FDC4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5FDC4:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08A5FDD0u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 998u, 0x08A5FDD0u, 0x08A58168u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 15u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 15u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 15u, 0x08A58168u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5FDD0u) goto L_08A5FDD0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5FDD0:
    ctx.gpr[17] = (aot_gpr_23 + static_cast<std::uint32_t>(144));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x08A5FDE8u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 999u, 0x08A5FDE8u, 0x08A580C8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 9u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 9u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 9u, 0x08A580C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5FDE8u) goto L_08A5FDE8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5FDE8:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08A5FDF4u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 1000u, 0x08A5FDF4u, 0x08A58168u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 15u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 15u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 15u, 0x08A58168u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5FDF4u) goto L_08A5FDF4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5FDF4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08A5FECC;
      }
      goto L_08A5FDFC;
    }
L_08A5FDFC:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(2108)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08A5FECC;
      }
      goto L_08A5FE08;
    }
L_08A5FE08:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(2100)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_12) || std::isnan(aot_fpr_20)) && aot_fpr_12 == aot_fpr_20)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08A5FE30;
      }
      goto L_08A5FE1C;
    }
L_08A5FE1C:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(2104)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_12) || std::isnan(aot_fpr_20)) && aot_fpr_12 == aot_fpr_20)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08A5FE44;
      }
      goto L_08A5FE30;
    }
L_08A5FE30:
    aot_gpr_31 = (0x08A5FE38u);
    aot_gpr_4 = (aot_gpr_23 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 1005u, 0x08A5FE38u, 0x08A583ECu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 56u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 56u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 56u, 0x08A583ECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5FE38u) goto L_08A5FE38;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5FE38:
    aot_gpr_4 = (0u | 5u);
    { const bool branch_taken = aot_gpr_2 != aot_gpr_4;
      if (branch_taken) {
          goto L_08A5FECC;
      }
      goto L_08A5FE44;
    }
L_08A5FE44:
    aot_gpr_31 = (0x08A5FE4Cu);
    aot_gpr_4 = (aot_gpr_23 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 1007u, 0x08A5FE4Cu, 0x08A585E0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 79u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 79u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 79u, 0x08A585E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5FE4Cu) goto L_08A5FE4C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5FE4C:
    aot_gpr_31 = (0x08A5FE54u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(0)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 1008u, 0x08A5FE54u, 0x08A580BCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 8u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 8u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 8u, 0x08A580BCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5FE54u) goto L_08A5FE54;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5FE54:
    aot_gpr_4 = (15267u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 55050u);
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_0 < aot_fpr_20)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08A5FECC;
      }
      goto L_08A5FE70;
    }
L_08A5FE70:
    aot_gpr_31 = (0x08A5FE78u);
    aot_gpr_4 = (aot_gpr_23 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 1010u, 0x08A5FE78u, 0x08A585E0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 79u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 79u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 79u, 0x08A585E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5FE78u) goto L_08A5FE78;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5FE78:
    aot_gpr_31 = (0x08A5FE80u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(4)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 1011u, 0x08A5FE80u, 0x08A580BCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 8u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 8u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 8u, 0x08A580BCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5FE80u) goto L_08A5FE80;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5FE80:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_0 < aot_fpr_20)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08A5FECC;
      }
      goto L_08A5FE90;
    }
L_08A5FE90:
    aot_gpr_31 = (0x08A5FE98u);
    aot_gpr_4 = (aot_gpr_23 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 1013u, 0x08A5FE98u, 0x08A585E0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 79u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 79u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 79u, 0x08A585E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5FE98u) goto L_08A5FE98;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5FE98:
    aot_gpr_31 = (0x08A5FEA0u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(8)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 1014u, 0x08A5FEA0u, 0x08A580BCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 8u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 8u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 8u, 0x08A580BCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5FEA0u) goto L_08A5FEA0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5FEA0:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_0 < aot_fpr_20)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08A5FECC;
      }
      goto L_08A5FEB0;
    }
L_08A5FEB0:
    aot_fpr_20 = std::bit_cast<float>(0u);
    aot_gpr_4 = (aot_gpr_23 | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x08A5FEC8u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0152.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 1016u, 0x08A5FEC8u, 0x08A6669Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0152_entry(rt, ctx, 537u, aot_mem);
#else
        recomp_unit_0152_entry(rt, ctx, 537u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0152_entry, 152u, 537u, 0x08A6669Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5FEC8u) goto L_08A5FEC8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5FEC8:
    aot_mem.aot_direct_store32(aot_gpr_23 + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(aot_fpr_20));
    goto L_08A5FECC;
L_08A5FECC:
    ctx.gpr[17] = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(2092)));
    { const bool branch_taken = ctx.gpr[17] != 0u;
      if (branch_taken) {
          goto L_08A5FEF8;
      }
      goto L_08A5FED8;
    }
L_08A5FED8:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_23 + static_cast<std::uint32_t>(1280))))));
    aot_gpr_4 = (aot_gpr_4 & 1u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08A5FEF8;
      }
      goto L_08A5FEE8;
    }
L_08A5FEE8:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_23 + static_cast<std::uint32_t>(1280))))));
    aot_gpr_4 = (aot_gpr_4 & 2u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0151_entry, 151u, 65u, 0x08A604A8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08A5FEF8;
    }
L_08A5FEF8:
    aot_gpr_31 = (0x08A5FF00u);
    aot_gpr_4 = (aot_gpr_23 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 1021u, 0x08A5FF00u, 0x08A58294u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 32u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 32u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 32u, 0x08A58294u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5FF00u) goto L_08A5FF00;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5FF00:
    aot_gpr_5 = (aot_gpr_23 + static_cast<std::uint32_t>(1040));
    aot_gpr_31 = (0x08A5FF0Cu);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0148.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 1022u, 0x08A5FF0Cu, 0x08A57F04u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0148_entry(rt, ctx, 900u, aot_mem);
#else
        recomp_unit_0148_entry(rt, ctx, 900u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0148_entry, 148u, 900u, 0x08A57F04u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5FF0Cu) goto L_08A5FF0C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5FF0C:
    aot_gpr_5 = (16256u << 16u);
    aot_fpr_20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_0));
    ctx.fpr[24] = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_4 = (aot_gpr_23 + static_cast<std::uint32_t>(192));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_20 <= ctx.fpr[24])) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    ctx.gpr[16] = (aot_gpr_29 + static_cast<std::uint32_t>(1728));
      if (branch_taken) {
          goto L_08A5FF34;
      }
      goto L_08A5FF2C;
    }
L_08A5FF2C:
    { const bool branch_taken = 0u == 0u;
    aot_fpr_20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
      if (branch_taken) {
          goto L_08A5FF50;
      }
      goto L_08A5FF34;
    }
L_08A5FF34:
    aot_gpr_5 = (49024u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_20 < aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08A5FF50;
      }
      goto L_08A5FF4C;
    }
L_08A5FF4C:
    aot_fpr_20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_08A5FF50;
L_08A5FF50:
    ctx.gpr[6] = (aot_gpr_4 | 0u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08A5FF60u);
    aot_gpr_5 = (aot_gpr_23 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0148.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 1027u, 0x08A5FF60u, 0x08A57E9Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0148_entry(rt, ctx, 897u, aot_mem);
#else
        recomp_unit_0148_entry(rt, ctx, 897u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0148_entry, 148u, 897u, 0x08A57E9Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5FF60u) goto L_08A5FF60;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5FF60:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_gpr_4 = (48665u << 16u);
      if (branch_taken) {
          goto L_08A5FFD8;
      }
      goto L_08A5FF68;
    }
L_08A5FF68:
    aot_gpr_4 = (48588u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(212)));
    { const float fs = aot_fpr_20; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    ctx.gpr[17] = (aot_gpr_29 + static_cast<std::uint32_t>(1744));
    aot_gpr_4 = (aot_gpr_23 | 0u);
    aot_gpr_31 = (0x08A5FF8Cu);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 1029u, 0x08A5FF8Cu, 0x08A582A4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 34u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 34u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 34u, 0x08A582A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5FF8Cu) goto L_08A5FF8C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5FF8C:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x08A5FF9Cu);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0148.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 1030u, 0x08A5FF9Cu, 0x08A57F64u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0148_entry(rt, ctx, 904u, aot_mem);
#else
        recomp_unit_0148_entry(rt, ctx, 904u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0148_entry, 148u, 904u, 0x08A57F64u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5FF9Cu) goto L_08A5FF9C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5FF9C:
    ctx.gpr[19] = (aot_gpr_29 + static_cast<std::uint32_t>(1760));
    aot_gpr_31 = (0x08A5FFA8u);
    aot_gpr_4 = (aot_gpr_23 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 1031u, 0x08A5FFA8u, 0x08A58294u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 32u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 32u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 32u, 0x08A58294u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5FFA8u) goto L_08A5FFA8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5FFA8:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08A5FFB8u);
    ctx.gpr[6] = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0148.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 1032u, 0x08A5FFB8u, 0x08A57F34u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0148_entry(rt, ctx, 902u, aot_mem);
#else
        recomp_unit_0148_entry(rt, ctx, 902u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0148_entry, 148u, 902u, 0x08A57F34u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5FFB8u) goto L_08A5FFB8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5FFB8:
    aot_gpr_4 = (aot_gpr_23 | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08A5FFC8u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 1033u, 0x08A5FFC8u, 0x08A58628u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 84u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 84u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 84u, 0x08A58628u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5FFC8u) goto L_08A5FFC8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5FFC8:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_23 + static_cast<std::uint32_t>(1280))))));
    aot_gpr_4 = (aot_gpr_4 & ctx.gpr[18]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_23 + static_cast<std::uint32_t>(1280), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0151_entry, 151u, 5u, 0x08A60034u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08A5FFD8;
    }
L_08A5FFD8:
    aot_gpr_4 = (aot_gpr_4 | 39322u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(212)));
    { const float fs = aot_fpr_20; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    ctx.gpr[17] = (aot_gpr_29 + static_cast<std::uint32_t>(1776));
    aot_gpr_4 = (aot_gpr_23 | 0u);
    aot_gpr_31 = (0x08A5FFF8u);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0150->0149.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0150_entry, 1035u, 0x08A5FFF8u, 0x08A582A4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0149_entry(rt, ctx, 34u, aot_mem);
#else
        recomp_unit_0149_entry(rt, ctx, 34u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 34u, 0x08A582A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5FFF8u) goto L_08A5FFF8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08A5FFF8:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    ctx.pc = 0x08A60000u; AOT_REGCACHE_SYNC_OUT(); return;
}

#undef AOT_REGCACHE_SYNC_IN
#undef AOT_REGCACHE_SYNC_OUT

void recomp_unit_0150(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0150_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_150(Runtime &runtime) {
    runtime.register_generated_unit(150u, 0x08A5C000u, 16384u, &recomp_unit_0150, &recomp_unit_0150_entry);
    // PSPRECOMP_V812_COMPACT_REGISTRATION: same entry set, looped once in Runtime instead of source-expanded calls.
    runtime.register_generated_entry_mask(0x08A5C004u, &recomp_unit_0150, "recomp_unit_0150",
                                          kEntryMasks_recomp_unit_0150, 64u);
}
} // namespace psprecomp
