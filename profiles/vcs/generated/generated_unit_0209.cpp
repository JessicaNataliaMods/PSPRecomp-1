#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include "vcs_resident_regions.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
// PSPRECOMP_V811_COMPACT_DISPATCH: 64-slot occupancy masks + per-group base id.
static constexpr std::uint64_t kEntryMasks_recomp_unit_0209[64] = {
    0x440200C400006021ull, 0x0000000000000012ull, 0x00A4300822000000ull, 0x40000C00000A5028ull,
    0x000000000000000Aull, 0x4100000000010880ull, 0x0000000000001002ull, 0x0000000000000000ull,
    0x800002A054100000ull, 0x0204622040500062ull, 0x12081205042A8141ull, 0x1548000000800100ull,
    0x00002A420A094841ull, 0x0540000140A010A4ull, 0x0A8151900015028Aull, 0x4004800050290000ull,
    0xA4200884AA222888ull, 0xA2025246314110B4ull, 0x110228880190B548ull, 0x8885554410410413ull,
    0x8A055110A2214442ull, 0x2449081400022A00ull, 0x2954A48800912120ull, 0x0500000500001000ull,
    0x0889011202120215ull, 0x0100080009108814ull, 0x0202904420010008ull, 0x0800080000000200ull,
    0x0002081041040041ull, 0x2210204401008080ull, 0x8A28840A28421122ull, 0x20204A0244514408ull,
    0x824220542A808902ull, 0x448A490040100804ull, 0x0008000288010102ull, 0x0000040002408000ull,
    0x0042108040094080ull, 0x0A01041021513002ull, 0x0000080042041012ull, 0x0290000000000000ull,
    0x5410440C02004AA4ull, 0x10440C888AA08111ull, 0x4444888AA0811154ull, 0x0080000000008418ull,
    0x1200109000848000ull, 0x2108854418844002ull, 0x0200802008000002ull, 0x0282084B0C220804ull,
    0x010000551020A081ull, 0x1402000000004A00ull, 0x0302005284AA3300ull, 0x0000152810020C08ull,
    0xAA18281414080002ull, 0x0005408010C08012ull, 0x0000628C0A040000ull, 0x400860400B028100ull,
    0x404002000812A0A0ull, 0x0000000000000229ull, 0x2003060424540850ull, 0x0000000012800000ull,
    0x00C0000432400080ull, 0x2800030000104A00ull, 0x0001400102001210ull, 0x0100018244284000ull,
};
static constexpr std::uint16_t kEntryBases_recomp_unit_0209[64] = {
    1u, 11u, 13u, 21u, 30u, 32u, 37u, 39u, 39u, 47u, 59u, 74u, 81u, 94u, 105u, 121u,
    129u, 146u, 166u, 183u, 201u, 219u, 231u, 248u, 253u, 267u, 276u, 285u, 288u, 296u, 305u, 322u,
    336u, 352u, 364u, 371u, 375u, 384u, 397u, 404u, 407u, 422u, 438u, 456u, 461u, 469u, 483u, 488u,
    502u, 513u, 519u, 535u, 545u, 559u, 569u, 578u, 589u, 599u, 603u, 617u, 620u, 628u, 636u, 643u,
};
void recomp_unit_0209_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
// PSPRECOMP_AOT_REGCACHE_BEGIN
// PSPRECOMP_AOT_REGCACHE_META gprs=4,5,6,29,7,31 fprs=12,13,14,15 gpr_occ=3694 fpr_occ=963 gpr_total=5161 fpr_total=1702
    std::uint32_t aot_gpr_4 = ctx.gpr[4];
    std::uint32_t aot_gpr_5 = ctx.gpr[5];
    std::uint32_t aot_gpr_6 = ctx.gpr[6];
    std::uint32_t aot_gpr_29 = ctx.gpr[29];
    std::uint32_t aot_gpr_7 = ctx.gpr[7];
    std::uint32_t aot_gpr_31 = ctx.gpr[31];
    float aot_fpr_12 = ctx.fpr[12];
    float aot_fpr_13 = ctx.fpr[13];
    float aot_fpr_14 = ctx.fpr[14];
    float aot_fpr_15 = ctx.fpr[15];
    bool aot_regcache_valid = true;
#define AOT_REGCACHE_SYNC_OUT() do { if (aot_regcache_valid) { ctx.gpr[4] = aot_gpr_4; ctx.gpr[5] = aot_gpr_5; ctx.gpr[6] = aot_gpr_6; ctx.gpr[29] = aot_gpr_29; ctx.gpr[7] = aot_gpr_7; ctx.gpr[31] = aot_gpr_31; ctx.fpr[12] = aot_fpr_12; ctx.fpr[13] = aot_fpr_13; ctx.fpr[14] = aot_fpr_14; ctx.fpr[15] = aot_fpr_15; } } while (false)
#define AOT_REGCACHE_SYNC_IN() do { if (aot_regcache_valid) { aot_gpr_4 = ctx.gpr[4]; aot_gpr_5 = ctx.gpr[5]; aot_gpr_6 = ctx.gpr[6]; aot_gpr_29 = ctx.gpr[29]; aot_gpr_7 = ctx.gpr[7]; aot_gpr_31 = ctx.gpr[31]; aot_fpr_12 = ctx.fpr[12]; aot_fpr_13 = ctx.fpr[13]; aot_fpr_14 = ctx.fpr[14]; aot_fpr_15 = ctx.fpr[15]; } } while (false)
// PSPRECOMP_AOT_REGCACHE_END
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_redispatch_rounds = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08B48000u;
        entry_id = 0u;
        if (entry_delta < 16356u && (entry_delta & 3u) == 0u) {
            const std::uint32_t entry_slot = entry_delta >> 2u;
            const std::uint32_t entry_group = entry_slot >> 6u;
            const std::uint64_t entry_mask = kEntryMasks_recomp_unit_0209[entry_group];
            const std::uint64_t entry_bit = 1ull << (entry_slot & 63u);
            if ((entry_mask & entry_bit) != 0u) {
                entry_id = static_cast<std::uint16_t>(
                    kEntryBases_recomp_unit_0209[entry_group] +
                    std::popcount(entry_mask & (entry_bit - 1ull)));
            }
        }
    }
    switch (entry_id) {
    case 1u: goto L_08B48000;
    case 2u: goto L_08B48014;
    case 3u: goto L_08B48034;
    case 4u: goto L_08B48038;
    case 5u: goto L_08B48088;
    case 6u: goto L_08B48098;
    case 7u: goto L_08B4809C;
    case 8u: goto L_08B480C4;
    case 9u: goto L_08B480E8;
    case 10u: goto L_08B480F8;
    case 11u: goto L_08B48104;
    case 12u: goto L_08B48110;
    case 13u: goto L_08B48264;
    case 14u: goto L_08B48274;
    case 15u: goto L_08B4828C;
    case 16u: goto L_08B482B0;
    case 17u: goto L_08B482B4;
    case 18u: goto L_08B482C8;
    case 19u: goto L_08B482D4;
    case 20u: goto L_08B482DC;
    case 21u: goto L_08B4830C;
    case 22u: goto L_08B48314;
    case 23u: goto L_08B48330;
    case 24u: goto L_08B48338;
    case 25u: goto L_08B48344;
    case 26u: goto L_08B4834C;
    case 27u: goto L_08B483A8;
    case 28u: goto L_08B483AC;
    case 29u: goto L_08B483F8;
    case 30u: goto L_08B48404;
    case 31u: goto L_08B4840C;
    case 32u: goto L_08B4851C;
    case 33u: goto L_08B4852C;
    case 34u: goto L_08B48540;
    case 35u: goto L_08B485E0;
    case 36u: goto L_08B485F8;
    case 37u: goto L_08B48604;
    case 38u: goto L_08B48630;
    case 39u: goto L_08B48850;
    case 40u: goto L_08B48868;
    case 41u: goto L_08B48870;
    case 42u: goto L_08B48878;
    case 43u: goto L_08B48894;
    case 44u: goto L_08B4889C;
    case 45u: goto L_08B488A4;
    case 46u: goto L_08B488FC;
    case 47u: goto L_08B48904;
    case 48u: goto L_08B48914;
    case 49u: goto L_08B48918;
    case 50u: goto L_08B48950;
    case 51u: goto L_08B48958;
    case 52u: goto L_08B48978;
    case 53u: goto L_08B48994;
    case 54u: goto L_08B489A4;
    case 55u: goto L_08B489B4;
    case 56u: goto L_08B489B8;
    case 57u: goto L_08B489C8;
    case 58u: goto L_08B489E4;
    case 59u: goto L_08B48A00;
    case 60u: goto L_08B48A18;
    case 61u: goto L_08B48A20;
    case 62u: goto L_08B48A3C;
    case 63u: goto L_08B48A44;
    case 64u: goto L_08B48A4C;
    case 65u: goto L_08B48A54;
    case 66u: goto L_08B48A68;
    case 67u: goto L_08B48A80;
    case 68u: goto L_08B48A88;
    case 69u: goto L_08B48AA4;
    case 70u: goto L_08B48AB0;
    case 71u: goto L_08B48ACC;
    case 72u: goto L_08B48AE4;
    case 73u: goto L_08B48AF0;
    case 74u: goto L_08B48B20;
    case 75u: goto L_08B48B5C;
    case 76u: goto L_08B48BCC;
    case 77u: goto L_08B48BD8;
    case 78u: goto L_08B48BE0;
    case 79u: goto L_08B48BE8;
    case 80u: goto L_08B48BF0;
    case 81u: goto L_08B48C00;
    case 82u: goto L_08B48C18;
    case 83u: goto L_08B48C2C;
    case 84u: goto L_08B48C38;
    case 85u: goto L_08B48C40;
    case 86u: goto L_08B48C4C;
    case 87u: goto L_08B48C64;
    case 88u: goto L_08B48C6C;
    case 89u: goto L_08B48C84;
    case 90u: goto L_08B48C98;
    case 91u: goto L_08B48CA4;
    case 92u: goto L_08B48CAC;
    case 93u: goto L_08B48CB4;
    case 94u: goto L_08B48D08;
    case 95u: goto L_08B48D14;
    case 96u: goto L_08B48D1C;
    case 97u: goto L_08B48D30;
    case 98u: goto L_08B48D54;
    case 99u: goto L_08B48D5C;
    case 100u: goto L_08B48D78;
    case 101u: goto L_08B48D80;
    case 102u: goto L_08B48DD8;
    case 103u: goto L_08B48DE0;
    case 104u: goto L_08B48DE8;
    case 105u: goto L_08B48E04;
    case 106u: goto L_08B48E0C;
    case 107u: goto L_08B48E1C;
    case 108u: goto L_08B48E24;
    case 109u: goto L_08B48E40;
    case 110u: goto L_08B48E48;
    case 111u: goto L_08B48E50;
    case 112u: goto L_08B48E90;
    case 113u: goto L_08B48E9C;
    case 114u: goto L_08B48EA0;
    case 115u: goto L_08B48EB0;
    case 116u: goto L_08B48EB8;
    case 117u: goto L_08B48EC0;
    case 118u: goto L_08B48EDC;
    case 119u: goto L_08B48EE4;
    case 120u: goto L_08B48EEC;
    case 121u: goto L_08B48F40;
    case 122u: goto L_08B48F4C;
    case 123u: goto L_08B48F54;
    case 124u: goto L_08B48F70;
    case 125u: goto L_08B48F78;
    case 126u: goto L_08B48FBC;
    case 127u: goto L_08B48FC8;
    case 128u: goto L_08B48FF8;
    case 129u: goto L_08B4900C;
    case 130u: goto L_08B4901C;
    case 131u: goto L_08B4902C;
    case 132u: goto L_08B49034;
    case 133u: goto L_08B49044;
    case 134u: goto L_08B49054;
    case 135u: goto L_08B49064;
    case 136u: goto L_08B4906C;
    case 137u: goto L_08B49074;
    case 138u: goto L_08B4907C;
    case 139u: goto L_08B49088;
    case 140u: goto L_08B4909C;
    case 141u: goto L_08B490AC;
    case 142u: goto L_08B490D4;
    case 143u: goto L_08B490E8;
    case 144u: goto L_08B490F4;
    case 145u: goto L_08B490FC;
    case 146u: goto L_08B49108;
    case 147u: goto L_08B49110;
    case 148u: goto L_08B49114;
    case 149u: goto L_08B4911C;
    case 150u: goto L_08B49130;
    case 151u: goto L_08B49140;
    case 152u: goto L_08B49158;
    case 153u: goto L_08B49160;
    case 154u: goto L_08B49170;
    case 155u: goto L_08B49174;
    case 156u: goto L_08B49184;
    case 157u: goto L_08B49188;
    case 158u: goto L_08B49198;
    case 159u: goto L_08B491A4;
    case 160u: goto L_08B491B0;
    case 161u: goto L_08B491B8;
    case 162u: goto L_08B491C4;
    case 163u: goto L_08B491E4;
    case 164u: goto L_08B491F4;
    case 165u: goto L_08B491FC;
    case 166u: goto L_08B4920C;
    case 167u: goto L_08B49218;
    case 168u: goto L_08B49220;
    case 169u: goto L_08B49228;
    case 170u: goto L_08B49230;
    case 171u: goto L_08B49234;
    case 172u: goto L_08B4923C;
    case 173u: goto L_08B49250;
    case 174u: goto L_08B4925C;
    case 175u: goto L_08B49260;
    case 176u: goto L_08B4928C;
    case 177u: goto L_08B4929C;
    case 178u: goto L_08B492AC;
    case 179u: goto L_08B492B4;
    case 180u: goto L_08B492C4;
    case 181u: goto L_08B492E0;
    case 182u: goto L_08B492F0;
    case 183u: goto L_08B49300;
    case 184u: goto L_08B49304;
    case 185u: goto L_08B49310;
    case 186u: goto L_08B49328;
    case 187u: goto L_08B49340;
    case 188u: goto L_08B49358;
    case 189u: goto L_08B49370;
    case 190u: goto L_08B49388;
    case 191u: goto L_08B49398;
    case 192u: goto L_08B493A0;
    case 193u: goto L_08B493A8;
    case 194u: goto L_08B493B0;
    case 195u: goto L_08B493B8;
    case 196u: goto L_08B493C0;
    case 197u: goto L_08B493C8;
    case 198u: goto L_08B493DC;
    case 199u: goto L_08B493EC;
    case 200u: goto L_08B493FC;
    case 201u: goto L_08B49404;
    case 202u: goto L_08B49418;
    case 203u: goto L_08B49428;
    case 204u: goto L_08B49438;
    case 205u: goto L_08B49440;
    case 206u: goto L_08B49454;
    case 207u: goto L_08B49464;
    case 208u: goto L_08B49474;
    case 209u: goto L_08B4947C;
    case 210u: goto L_08B49490;
    case 211u: goto L_08B494A0;
    case 212u: goto L_08B494B0;
    case 213u: goto L_08B494B8;
    case 214u: goto L_08B494C0;
    case 215u: goto L_08B494C8;
    case 216u: goto L_08B494E4;
    case 217u: goto L_08B494EC;
    case 218u: goto L_08B494FC;
    case 219u: goto L_08B49524;
    case 220u: goto L_08B4952C;
    case 221u: goto L_08B49534;
    case 222u: goto L_08B49544;
    case 223u: goto L_08B49588;
    case 224u: goto L_08B49590;
    case 225u: goto L_08B495AC;
    case 226u: goto L_08B495C0;
    case 227u: goto L_08B495CC;
    case 228u: goto L_08B495D8;
    case 229u: goto L_08B495E8;
    case 230u: goto L_08B495F4;
    case 231u: goto L_08B49614;
    case 232u: goto L_08B49620;
    case 233u: goto L_08B49634;
    case 234u: goto L_08B49640;
    case 235u: goto L_08B49650;
    case 236u: goto L_08B4965C;
    case 237u: goto L_08B4968C;
    case 238u: goto L_08B4969C;
    case 239u: goto L_08B496A8;
    case 240u: goto L_08B496B4;
    case 241u: goto L_08B496BC;
    case 242u: goto L_08B496C8;
    case 243u: goto L_08B496D0;
    case 244u: goto L_08B496D8;
    case 245u: goto L_08B496E0;
    case 246u: goto L_08B496EC;
    case 247u: goto L_08B496F4;
    case 248u: goto L_08B49730;
    case 249u: goto L_08B49780;
    case 250u: goto L_08B49788;
    case 251u: goto L_08B497E0;
    case 252u: goto L_08B497E8;
    case 253u: goto L_08B49800;
    case 254u: goto L_08B49808;
    case 255u: goto L_08B49810;
    case 256u: goto L_08B49824;
    case 257u: goto L_08B49844;
    case 258u: goto L_08B49850;
    case 259u: goto L_08B49864;
    case 260u: goto L_08B49884;
    case 261u: goto L_08B49890;
    case 262u: goto L_08B498A0;
    case 263u: goto L_08B498C0;
    case 264u: goto L_08B498CC;
    case 265u: goto L_08B498DC;
    case 266u: goto L_08B498EC;
    case 267u: goto L_08B49908;
    case 268u: goto L_08B49910;
    case 269u: goto L_08B4992C;
    case 270u: goto L_08B4993C;
    case 271u: goto L_08B49950;
    case 272u: goto L_08B49960;
    case 273u: goto L_08B4996C;
    case 274u: goto L_08B499AC;
    case 275u: goto L_08B499E0;
    case 276u: goto L_08B49A0C;
    case 277u: goto L_08B49A40;
    case 278u: goto L_08B49A74;
    case 279u: goto L_08B49A88;
    case 280u: goto L_08B49A98;
    case 281u: goto L_08B49AB0;
    case 282u: goto L_08B49ABC;
    case 283u: goto L_08B49AC4;
    case 284u: goto L_08B49AE4;
    case 285u: goto L_08B49B24;
    case 286u: goto L_08B49BAC;
    case 287u: goto L_08B49BEC;
    case 288u: goto L_08B49C00;
    case 289u: goto L_08B49C18;
    case 290u: goto L_08B49C48;
    case 291u: goto L_08B49C60;
    case 292u: goto L_08B49C78;
    case 293u: goto L_08B49C90;
    case 294u: goto L_08B49CAC;
    case 295u: goto L_08B49CC4;
    case 296u: goto L_08B49D1C;
    case 297u: goto L_08B49D3C;
    case 298u: goto L_08B49D60;
    case 299u: goto L_08B49D88;
    case 300u: goto L_08B49D98;
    case 301u: goto L_08B49DB4;
    case 302u: goto L_08B49DD0;
    case 303u: goto L_08B49DE4;
    case 304u: goto L_08B49DF4;
    case 305u: goto L_08B49E04;
    case 306u: goto L_08B49E14;
    case 307u: goto L_08B49E20;
    case 308u: goto L_08B49E30;
    case 309u: goto L_08B49E44;
    case 310u: goto L_08B49E58;
    case 311u: goto L_08B49E6C;
    case 312u: goto L_08B49E74;
    case 313u: goto L_08B49E84;
    case 314u: goto L_08B49E8C;
    case 315u: goto L_08B49EA8;
    case 316u: goto L_08B49EBC;
    case 317u: goto L_08B49ECC;
    case 318u: goto L_08B49ED4;
    case 319u: goto L_08B49EE4;
    case 320u: goto L_08B49EEC;
    case 321u: goto L_08B49EFC;
    case 322u: goto L_08B49F0C;
    case 323u: goto L_08B49F28;
    case 324u: goto L_08B49F38;
    case 325u: goto L_08B49F40;
    case 326u: goto L_08B49F50;
    case 327u: goto L_08B49F58;
    case 328u: goto L_08B49F68;
    case 329u: goto L_08B49F78;
    case 330u: goto L_08B49F84;
    case 331u: goto L_08B49FA4;
    case 332u: goto L_08B49FAC;
    case 333u: goto L_08B49FB8;
    case 334u: goto L_08B49FD4;
    case 335u: goto L_08B49FF4;
    case 336u: goto L_08B4A004;
    case 337u: goto L_08B4A020;
    case 338u: goto L_08B4A02C;
    case 339u: goto L_08B4A03C;
    case 340u: goto L_08B4A05C;
    case 341u: goto L_08B4A064;
    case 342u: goto L_08B4A06C;
    case 343u: goto L_08B4A074;
    case 344u: goto L_08B4A088;
    case 345u: goto L_08B4A090;
    case 346u: goto L_08B4A098;
    case 347u: goto L_08B4A0B4;
    case 348u: goto L_08B4A0C4;
    case 349u: goto L_08B4A0D8;
    case 350u: goto L_08B4A0E4;
    case 351u: goto L_08B4A0FC;
    case 352u: goto L_08B4A108;
    case 353u: goto L_08B4A12C;
    case 354u: goto L_08B4A150;
    case 355u: goto L_08B4A178;
    case 356u: goto L_08B4A1A0;
    case 357u: goto L_08B4A1AC;
    case 358u: goto L_08B4A1B8;
    case 359u: goto L_08B4A1C4;
    case 360u: goto L_08B4A1CC;
    case 361u: goto L_08B4A1DC;
    case 362u: goto L_08B4A1E8;
    case 363u: goto L_08B4A1F8;
    case 364u: goto L_08B4A204;
    case 365u: goto L_08B4A220;
    case 366u: goto L_08B4A240;
    case 367u: goto L_08B4A26C;
    case 368u: goto L_08B4A27C;
    case 369u: goto L_08B4A284;
    case 370u: goto L_08B4A2CC;
    case 371u: goto L_08B4A33C;
    case 372u: goto L_08B4A358;
    case 373u: goto L_08B4A364;
    case 374u: goto L_08B4A3A8;
    case 375u: goto L_08B4A41C;
    case 376u: goto L_08B4A438;
    case 377u: goto L_08B4A440;
    case 378u: goto L_08B4A44C;
    case 379u: goto L_08B4A478;
    case 380u: goto L_08B4A49C;
    case 381u: goto L_08B4A4B0;
    case 382u: goto L_08B4A4C4;
    case 383u: goto L_08B4A4D8;
    case 384u: goto L_08B4A504;
    case 385u: goto L_08B4A530;
    case 386u: goto L_08B4A534;
    case 387u: goto L_08B4A540;
    case 388u: goto L_08B4A550;
    case 389u: goto L_08B4A558;
    case 390u: goto L_08B4A560;
    case 391u: goto L_08B4A574;
    case 392u: goto L_08B4A590;
    case 393u: goto L_08B4A5A8;
    case 394u: goto L_08B4A5C0;
    case 395u: goto L_08B4A5E4;
    case 396u: goto L_08B4A5EC;
    case 397u: goto L_08B4A604;
    case 398u: goto L_08B4A610;
    case 399u: goto L_08B4A630;
    case 400u: goto L_08B4A648;
    case 401u: goto L_08B4A664;
    case 402u: goto L_08B4A678;
    case 403u: goto L_08B4A6AC;
    case 404u: goto L_08B4A7D0;
    case 405u: goto L_08B4A7DC;
    case 406u: goto L_08B4A7E4;
    case 407u: goto L_08B4A808;
    case 408u: goto L_08B4A814;
    case 409u: goto L_08B4A81C;
    case 410u: goto L_08B4A824;
    case 411u: goto L_08B4A82C;
    case 412u: goto L_08B4A838;
    case 413u: goto L_08B4A864;
    case 414u: goto L_08B4A888;
    case 415u: goto L_08B4A88C;
    case 416u: goto L_08B4A8A8;
    case 417u: goto L_08B4A8B8;
    case 418u: goto L_08B4A8D0;
    case 419u: goto L_08B4A8E8;
    case 420u: goto L_08B4A8F0;
    case 421u: goto L_08B4A8F8;
    case 422u: goto L_08B4A900;
    case 423u: goto L_08B4A910;
    case 424u: goto L_08B4A920;
    case 425u: goto L_08B4A93C;
    case 426u: goto L_08B4A954;
    case 427u: goto L_08B4A95C;
    case 428u: goto L_08B4A964;
    case 429u: goto L_08B4A96C;
    case 430u: goto L_08B4A97C;
    case 431u: goto L_08B4A98C;
    case 432u: goto L_08B4A99C;
    case 433u: goto L_08B4A9A8;
    case 434u: goto L_08B4A9AC;
    case 435u: goto L_08B4A9C8;
    case 436u: goto L_08B4A9D8;
    case 437u: goto L_08B4A9F0;
    case 438u: goto L_08B4AA08;
    case 439u: goto L_08B4AA10;
    case 440u: goto L_08B4AA18;
    case 441u: goto L_08B4AA20;
    case 442u: goto L_08B4AA30;
    case 443u: goto L_08B4AA40;
    case 444u: goto L_08B4AA5C;
    case 445u: goto L_08B4AA74;
    case 446u: goto L_08B4AA7C;
    case 447u: goto L_08B4AA84;
    case 448u: goto L_08B4AA8C;
    case 449u: goto L_08B4AA9C;
    case 450u: goto L_08B4AAAC;
    case 451u: goto L_08B4AABC;
    case 452u: goto L_08B4AAC8;
    case 453u: goto L_08B4AAD8;
    case 454u: goto L_08B4AAE8;
    case 455u: goto L_08B4AAF8;
    case 456u: goto L_08B4AB0C;
    case 457u: goto L_08B4AB10;
    case 458u: goto L_08B4AB28;
    case 459u: goto L_08B4AB3C;
    case 460u: goto L_08B4ABDC;
    case 461u: goto L_08B4AC3C;
    case 462u: goto L_08B4AC48;
    case 463u: goto L_08B4AC5C;
    case 464u: goto L_08B4AC90;
    case 465u: goto L_08B4AC9C;
    case 466u: goto L_08B4ACB0;
    case 467u: goto L_08B4ACE4;
    case 468u: goto L_08B4ACF0;
    case 469u: goto L_08B4AD04;
    case 470u: goto L_08B4AD38;
    case 471u: goto L_08B4AD48;
    case 472u: goto L_08B4AD5C;
    case 473u: goto L_08B4AD6C;
    case 474u: goto L_08B4AD70;
    case 475u: goto L_08B4AD88;
    case 476u: goto L_08B4AD98;
    case 477u: goto L_08B4ADA0;
    case 478u: goto L_08B4ADA8;
    case 479u: goto L_08B4ADBC;
    case 480u: goto L_08B4ADCC;
    case 481u: goto L_08B4ADE0;
    case 482u: goto L_08B4ADF4;
    case 483u: goto L_08B4AE04;
    case 484u: goto L_08B4AE6C;
    case 485u: goto L_08B4AE94;
    case 486u: goto L_08B4AEBC;
    case 487u: goto L_08B4AEE4;
    case 488u: goto L_08B4AF08;
    case 489u: goto L_08B4AF2C;
    case 490u: goto L_08B4AF44;
    case 491u: goto L_08B4AF54;
    case 492u: goto L_08B4AF68;
    case 493u: goto L_08B4AF6C;
    case 494u: goto L_08B4AF80;
    case 495u: goto L_08B4AF84;
    case 496u: goto L_08B4AF8C;
    case 497u: goto L_08B4AF98;
    case 498u: goto L_08B4AFAC;
    case 499u: goto L_08B4AFC4;
    case 500u: goto L_08B4AFDC;
    case 501u: goto L_08B4AFE4;
    case 502u: goto L_08B4B000;
    case 503u: goto L_08B4B01C;
    case 504u: goto L_08B4B034;
    case 505u: goto L_08B4B03C;
    case 506u: goto L_08B4B054;
    case 507u: goto L_08B4B070;
    case 508u: goto L_08B4B080;
    case 509u: goto L_08B4B088;
    case 510u: goto L_08B4B090;
    case 511u: goto L_08B4B098;
    case 512u: goto L_08B4B0E0;
    case 513u: goto L_08B4B124;
    case 514u: goto L_08B4B12C;
    case 515u: goto L_08B4B138;
    case 516u: goto L_08B4B1C4;
    case 517u: goto L_08B4B1E8;
    case 518u: goto L_08B4B1F0;
    case 519u: goto L_08B4B220;
    case 520u: goto L_08B4B224;
    case 521u: goto L_08B4B230;
    case 522u: goto L_08B4B234;
    case 523u: goto L_08B4B244;
    case 524u: goto L_08B4B24C;
    case 525u: goto L_08B4B254;
    case 526u: goto L_08B4B25C;
    case 527u: goto L_08B4B268;
    case 528u: goto L_08B4B27C;
    case 529u: goto L_08B4B284;
    case 530u: goto L_08B4B290;
    case 531u: goto L_08B4B298;
    case 532u: goto L_08B4B2C4;
    case 533u: goto L_08B4B2E0;
    case 534u: goto L_08B4B2E4;
    case 535u: goto L_08B4B30C;
    case 536u: goto L_08B4B328;
    case 537u: goto L_08B4B32C;
    case 538u: goto L_08B4B344;
    case 539u: goto L_08B4B370;
    case 540u: goto L_08B4B38C;
    case 541u: goto L_08B4B394;
    case 542u: goto L_08B4B3A0;
    case 543u: goto L_08B4B3A8;
    case 544u: goto L_08B4B3B0;
    case 545u: goto L_08B4B404;
    case 546u: goto L_08B4B44C;
    case 547u: goto L_08B4B468;
    case 548u: goto L_08B4B470;
    case 549u: goto L_08B4B488;
    case 550u: goto L_08B4B490;
    case 551u: goto L_08B4B4AC;
    case 552u: goto L_08B4B4B4;
    case 553u: goto L_08B4B4CC;
    case 554u: goto L_08B4B4D0;
    case 555u: goto L_08B4B4E4;
    case 556u: goto L_08B4B4EC;
    case 557u: goto L_08B4B4F4;
    case 558u: goto L_08B4B4FC;
    case 559u: goto L_08B4B504;
    case 560u: goto L_08B4B510;
    case 561u: goto L_08B4B53C;
    case 562u: goto L_08B4B558;
    case 563u: goto L_08B4B55C;
    case 564u: goto L_08B4B570;
    case 565u: goto L_08B4B59C;
    case 566u: goto L_08B4B5B8;
    case 567u: goto L_08B4B5C0;
    case 568u: goto L_08B4B5C8;
    case 569u: goto L_08B4B648;
    case 570u: goto L_08B4B664;
    case 571u: goto L_08B4B66C;
    case 572u: goto L_08B4B688;
    case 573u: goto L_08B4B68C;
    case 574u: goto L_08B4B69C;
    case 575u: goto L_08B4B6A4;
    case 576u: goto L_08B4B6B4;
    case 577u: goto L_08B4B6B8;
    case 578u: goto L_08B4B720;
    case 579u: goto L_08B4B73C;
    case 580u: goto L_08B4B744;
    case 581u: goto L_08B4B760;
    case 582u: goto L_08B4B764;
    case 583u: goto L_08B4B76C;
    case 584u: goto L_08B4B798;
    case 585u: goto L_08B4B7B4;
    case 586u: goto L_08B4B7B8;
    case 587u: goto L_08B4B7CC;
    case 588u: goto L_08B4B7F8;
    case 589u: goto L_08B4B814;
    case 590u: goto L_08B4B81C;
    case 591u: goto L_08B4B834;
    case 592u: goto L_08B4B83C;
    case 593u: goto L_08B4B844;
    case 594u: goto L_08B4B850;
    case 595u: goto L_08B4B86C;
    case 596u: goto L_08B4B8A4;
    case 597u: goto L_08B4B8D8;
    case 598u: goto L_08B4B8F8;
    case 599u: goto L_08B4B900;
    case 600u: goto L_08B4B90C;
    case 601u: goto L_08B4B914;
    case 602u: goto L_08B4B924;
    case 603u: goto L_08B4BA10;
    case 604u: goto L_08B4BA18;
    case 605u: goto L_08B4BA2C;
    case 606u: goto L_08B4BA48;
    case 607u: goto L_08B4BA50;
    case 608u: goto L_08B4BA58;
    case 609u: goto L_08B4BA68;
    case 610u: goto L_08B4BA74;
    case 611u: goto L_08B4BA88;
    case 612u: goto L_08B4BAA4;
    case 613u: goto L_08B4BAA8;
    case 614u: goto L_08B4BAC0;
    case 615u: goto L_08B4BAC4;
    case 616u: goto L_08B4BAF4;
    case 617u: goto L_08B4BB5C;
    case 618u: goto L_08B4BB64;
    case 619u: goto L_08B4BB70;
    case 620u: goto L_08B4BC1C;
    case 621u: goto L_08B4BC58;
    case 622u: goto L_08B4BC64;
    case 623u: goto L_08B4BC70;
    case 624u: goto L_08B4BC74;
    case 625u: goto L_08B4BC88;
    case 626u: goto L_08B4BCD8;
    case 627u: goto L_08B4BCDC;
    case 628u: goto L_08B4BD24;
    case 629u: goto L_08B4BD2C;
    case 630u: goto L_08B4BD38;
    case 631u: goto L_08B4BD50;
    case 632u: goto L_08B4BDA0;
    case 633u: goto L_08B4BDA4;
    case 634u: goto L_08B4BDEC;
    case 635u: goto L_08B4BDF4;
    case 636u: goto L_08B4BE10;
    case 637u: goto L_08B4BE24;
    case 638u: goto L_08B4BE30;
    case 639u: goto L_08B4BE64;
    case 640u: goto L_08B4BE80;
    case 641u: goto L_08B4BEB8;
    case 642u: goto L_08B4BEC0;
    case 643u: goto L_08B4BF38;
    case 644u: goto L_08B4BF4C;
    case 645u: goto L_08B4BF54;
    case 646u: goto L_08B4BF68;
    case 647u: goto L_08B4BF78;
    case 648u: goto L_08B4BF84;
    case 649u: goto L_08B4BF9C;
    case 650u: goto L_08B4BFA0;
    case 651u: goto L_08B4BFE0;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        AOT_REGCACHE_SYNC_OUT(); return;
    }
    }
L_08B48000:
    aot_gpr_4 = (16608u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (16672u << 16u);
    aot_gpr_31 = (0x08B48014u);
    ctx.fpr[22] = std::bit_cast<float>(aot_gpr_4);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20998, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[28], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B48014u) goto L_08B48014;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B48014:
    aot_fpr_12 = ctx.fpr[22] - ctx.fpr[20];
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = ctx.fpr[20] + aot_fpr_12;
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_gpr_4 << 24u);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 24u));
    aot_mem.aot_direct_store8(ctx.gpr[22] + static_cast<std::uint32_t>(535), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_08B48034;
L_08B48034:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[22] + static_cast<std::uint32_t>(86))))));
    goto L_08B48038;
L_08B48038:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    aot_gpr_6 = (aot_gpr_4 << 2u);
    aot_gpr_6 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(20)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(32));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(20)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(16));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (16672u << 16u);
    aot_fpr_12 = aot_fpr_12 - aot_fpr_13;
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_14)) ? 0x00800000u : 0u);
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[22] + static_cast<std::uint32_t>(535))))));
        goto L_08B4809C;
    }
    goto L_08B48088;
L_08B48088:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(44)));
    aot_gpr_5 = (0u | 5u);
    if (aot_gpr_4 != aot_gpr_5) {
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[22] + static_cast<std::uint32_t>(535))))));
        goto L_08B480C4;
    }
    goto L_08B48098;
L_08B48098:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[22] + static_cast<std::uint32_t>(535))))));
    goto L_08B4809C;
L_08B4809C:
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 2u));
    aot_gpr_5 = (aot_gpr_5 >> 30u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 2u));
    aot_gpr_4 = (aot_gpr_4 << 24u);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 24u));
    aot_mem.aot_direct_store8(ctx.gpr[22] + static_cast<std::uint32_t>(535), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[22] + static_cast<std::uint32_t>(535))))));
    goto L_08B480C4;
L_08B480C4:
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (0u | 1u);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_mem.aot_direct_store8(ctx.gpr[22] + static_cast<std::uint32_t>(533), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (0u | 0u);
    aot_mem.aot_direct_store8(ctx.gpr[22] + static_cast<std::uint32_t>(534), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (0u | 0u);
    aot_mem.aot_direct_store32(ctx.gpr[22] + static_cast<std::uint32_t>(520), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store8(ctx.gpr[22] + static_cast<std::uint32_t>(532), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_08B480E8;
L_08B480E8:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[22] + static_cast<std::uint32_t>(86))))));
    aot_gpr_5 = (0u | 244u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08B48104;
      }
      goto L_08B480F8;
    }
L_08B480F8:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[22] + static_cast<std::uint32_t>(618))))));
    aot_gpr_4 = (aot_gpr_4 | 32u);
    aot_mem.aot_direct_store8(ctx.gpr[22] + static_cast<std::uint32_t>(618), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_08B48104;
L_08B48104:
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(344), static_cast<std::uint16_t>(ctx.gpr[20]));
    aot_gpr_31 = (0x08B48110u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20934, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B48110u) goto L_08B48110;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B48110:
    aot_gpr_4 = (ctx.gpr[2] & 65535u);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_4); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[21]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr_4 = (ctx.hi);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(341), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(347), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[22] + static_cast<std::uint32_t>(86))))));
    aot_gpr_5 = (aot_gpr_4 << 2u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    aot_gpr_5 = (aot_gpr_6 + aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(20)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(32));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_6 + aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(20)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(16));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_fpr_12 = aot_fpr_12 - aot_fpr_13;
    aot_gpr_4 = (16128u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_4 = (16256u << 16u);
    aot_fpr_15 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_15;
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(36)));
    aot_gpr_6 = (aot_gpr_5 << 3u);
    aot_gpr_6 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    ctx.gpr[9] = (aot_gpr_4 + aot_gpr_5);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[9] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[9] + static_cast<std::uint32_t>(2))))));
    ctx.set_vfpu_scalar_bits_ct<1u>(ctx.gpr[8]);
    ctx.set_vfpu_scalar_bits_ct<33u>(ctx.gpr[9]);
    ctx.execute_vfpu_vi2f_ct<2u, 1u, 2u, 3u>();
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(532));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), ctx.vfpu_scalar_bits_ct<2u>());
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), ctx.vfpu_scalar_bits_ct<34u>());
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(40)));
    aot_gpr_6 = (aot_gpr_5 << 3u);
    aot_gpr_6 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    ctx.gpr[9] = (aot_gpr_4 + aot_gpr_5);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[9] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[9] + static_cast<std::uint32_t>(2))))));
    ctx.set_vfpu_scalar_bits_ct<1u>(ctx.gpr[8]);
    ctx.set_vfpu_scalar_bits_ct<33u>(ctx.gpr[9]);
    ctx.execute_vfpu_vi2f_ct<2u, 1u, 2u, 3u>();
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(540));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), ctx.vfpu_scalar_bits_ct<2u>());
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), ctx.vfpu_scalar_bits_ct<34u>());
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(532)));
    aot_fpr_15 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(540)));
    aot_fpr_13 = aot_fpr_13 - aot_fpr_15;
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(536)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(544)));
    ctx.fpr[16] = ctx.fpr[16] - ctx.fpr[17];
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(752), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(756), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(592), aot_gpr_4);
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(596), aot_gpr_4);
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(592)));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    aot_fpr_15 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(596)));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_15));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(460), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(464), aot_gpr_5);
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(460)));
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(464)));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    aot_fpr_13 = aot_fpr_13 + ctx.fpr[16];
    aot_fpr_13 = std::sqrt(aot_fpr_13);
    { const float fs = aot_fpr_13; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_14 < aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08B48274;
      }
      goto L_08B48264;
    }
L_08B48264:
    aot_gpr_4 = (16128u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_08B482B4;
      }
      goto L_08B48274;
    }
L_08B48274:
    aot_fpr_14 = aot_fpr_12 / aot_fpr_13;
    aot_fpr_15 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(32)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_15 <= aot_fpr_14)) ? 0x00800000u : 0u);
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(32)));
        goto L_08B4828C;
    }
    goto L_08B4828C;
L_08B4828C:
    aot_fpr_12 = aot_fpr_12 / aot_fpr_13;
    aot_gpr_4 = (16256u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(aot_fpr_14));
    aot_fpr_15 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_15 - aot_fpr_12;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_14 < aot_fpr_12)) ? 0x00800000u : 0u);
    if (((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(32)));
        goto L_08B482B0;
    }
    goto L_08B482B0;
L_08B482B0:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_08B482B4;
L_08B482B4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(36)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(40)));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B482D4;
      }
      goto L_08B482C8;
    }
L_08B482C8:
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(346), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_08B482DC;
      }
      goto L_08B482D4;
    }
L_08B482D4:
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(346), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_08B482DC;
L_08B482DC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(36)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_gpr_5 << 3u);
    aot_gpr_6 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(8))))));
    aot_gpr_5 = (0u | 1u);
    aot_gpr_4 = (aot_gpr_4 & 15u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08B48338;
      }
      goto L_08B4830C;
    }
L_08B4830C:
    { const bool branch_taken = ctx.gpr[22] == 0u;
      if (branch_taken) {
          goto L_08B48330;
      }
      goto L_08B48314;
    }
L_08B48314:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(92)));
    aot_gpr_5 = (0u | 3u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(24));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_7;
    aot_gpr_31 = (0x08B48330u);
    aot_gpr_4 = (ctx.gpr[22] + aot_gpr_6);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B48330u) goto L_08B48330;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B48330:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B496F4;
      }
      goto L_08B48338;
    }
L_08B48338:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(344))))));
    if (aot_gpr_4 != aot_gpr_4) {
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(338), static_cast<std::uint16_t>(aot_gpr_4));
        goto L_08B483AC;
    }
    goto L_08B48344;
L_08B48344:
    aot_gpr_31 = (0x08B4834Cu);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20934, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B4834Cu) goto L_08B4834C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B4834C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(36)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_7 = (aot_gpr_5 << 3u);
    aot_gpr_7 = (aot_gpr_5 + aot_gpr_7);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_7);
    aot_gpr_5 = (aot_gpr_6 + aot_gpr_5);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(8))))));
    ctx.gpr[8] = (ctx.gpr[2] & 65535u);
    aot_gpr_6 = (aot_gpr_6 & 15u);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[8]); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr_6); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(6))))));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_gpr_7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(344))))));
    aot_gpr_5 = (ctx.hi);
    aot_gpr_5 = (aot_gpr_5 << 16u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 16u));
    aot_gpr_6 = (aot_gpr_6 + aot_gpr_5);
    aot_gpr_6 = (aot_gpr_6 + aot_gpr_6);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_7;
      if (branch_taken) {
          goto L_08B48344;
      }
      goto L_08B483A8;
    }
L_08B483A8:
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(338), static_cast<std::uint16_t>(aot_gpr_4));
    goto L_08B483AC;
L_08B483AC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(36)));
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_gpr_6 << 3u);
    ctx.gpr[8] = (aot_gpr_6 + ctx.gpr[8]);
    ctx.gpr[8] = (aot_gpr_6 + ctx.gpr[8]);
    aot_gpr_7 = (aot_gpr_7 + ctx.gpr[8]);
    aot_gpr_7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_7 + static_cast<std::uint32_t>(6))))));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(30040)));
    aot_gpr_5 = (aot_gpr_7 + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 & 16383u);
    aot_gpr_4 = (aot_gpr_4 << 16u);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 16u));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(aot_gpr_6) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B48404;
      }
      goto L_08B483F8;
    }
L_08B483F8:
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(340), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_08B4840C;
      }
      goto L_08B48404;
    }
L_08B48404:
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(340), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_08B4840C;
L_08B4840C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(40)));
    aot_gpr_6 = (aot_gpr_5 << 3u);
    aot_gpr_6 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    ctx.gpr[10] = (aot_gpr_4 + aot_gpr_5);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[10] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[10] + static_cast<std::uint32_t>(2))))));
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[10] + static_cast<std::uint32_t>(4))))));
    ctx.set_vfpu_scalar_bits_ct<1u>(ctx.gpr[8]);
    ctx.set_vfpu_scalar_bits_ct<33u>(ctx.gpr[9]);
    ctx.set_vfpu_scalar_bits_ct<32u>(ctx.gpr[10]);
    { float vfpu_value[4]{};
      ctx.write_vfpu_vector_with_destination_prefix_ct<96u, 1u>(vfpu_value); }
    { const std::uint16_t vfpu_half = 22080u;
      const std::uint32_t vfpu_sign = static_cast<std::uint32_t>(vfpu_half & 0x8000u) << 16u;
      std::uint32_t vfpu_exponent = (vfpu_half >> 10u) & 0x1Fu;
      std::uint32_t vfpu_mantissa = vfpu_half & 0x03FFu;
      std::uint32_t vfpu_bits = 0u;
      if (vfpu_exponent == 0u) {
        if (vfpu_mantissa == 0u) vfpu_bits = vfpu_sign;
        else {
          std::uint32_t shift = 0u;
          while ((vfpu_mantissa & 0x0400u) == 0u) { vfpu_mantissa <<= 1u; ++shift; }
          vfpu_mantissa &= 0x03FFu;
          vfpu_bits = vfpu_sign | ((113u - shift) << 23u) | (vfpu_mantissa << 13u);
        }
      } else if (vfpu_exponent == 31u) {
        vfpu_bits = vfpu_sign | 0x7F800000u | (vfpu_mantissa << 13u);
      } else {
        vfpu_bits = vfpu_sign | ((vfpu_exponent + 112u) << 23u) | (vfpu_mantissa << 13u);
      }
      const float vfpu_value[1]{std::bit_cast<float>(vfpu_bits)};
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 1u>(vfpu_value); }
    ctx.execute_vfpu_vi2f_ct<2u, 1u, 2u, 3u>();
    ctx.execute_vfpu_vi2f_ct<66u, 32u, 1u, 0u>();
    ctx.execute_vfpu_vcmp_ct<66u, 96u, 1u, 2u>();
    ctx.execute_vfpu_vec3_ct<98u, 66u, 64u, 1u, 1u>();
    ctx.execute_vfpu_vcmov_ct<66u, 98u, 1u, 0u, false>();
    { float vfpu_value[4]{1.0f, 1.0f, 1.0f, 1.0f};
      ctx.write_vfpu_vector_with_destination_prefix_ct<98u, 1u>(vfpu_value); }
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(496));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(36)));
    aot_gpr_7 = (aot_gpr_6 << 3u);
    aot_gpr_7 = (aot_gpr_6 + aot_gpr_7);
    aot_gpr_6 = (aot_gpr_6 + aot_gpr_7);
    ctx.gpr[10] = (aot_gpr_5 + aot_gpr_6);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[10] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[10] + static_cast<std::uint32_t>(2))))));
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[10] + static_cast<std::uint32_t>(4))))));
    ctx.set_vfpu_scalar_bits_ct<1u>(ctx.gpr[8]);
    ctx.set_vfpu_scalar_bits_ct<33u>(ctx.gpr[9]);
    ctx.set_vfpu_scalar_bits_ct<32u>(ctx.gpr[10]);
    { float vfpu_value[4]{};
      ctx.write_vfpu_vector_with_destination_prefix_ct<96u, 1u>(vfpu_value); }
    { const std::uint16_t vfpu_half = 22080u;
      const std::uint32_t vfpu_sign = static_cast<std::uint32_t>(vfpu_half & 0x8000u) << 16u;
      std::uint32_t vfpu_exponent = (vfpu_half >> 10u) & 0x1Fu;
      std::uint32_t vfpu_mantissa = vfpu_half & 0x03FFu;
      std::uint32_t vfpu_bits = 0u;
      if (vfpu_exponent == 0u) {
        if (vfpu_mantissa == 0u) vfpu_bits = vfpu_sign;
        else {
          std::uint32_t shift = 0u;
          while ((vfpu_mantissa & 0x0400u) == 0u) { vfpu_mantissa <<= 1u; ++shift; }
          vfpu_mantissa &= 0x03FFu;
          vfpu_bits = vfpu_sign | ((113u - shift) << 23u) | (vfpu_mantissa << 13u);
        }
      } else if (vfpu_exponent == 31u) {
        vfpu_bits = vfpu_sign | 0x7F800000u | (vfpu_mantissa << 13u);
      } else {
        vfpu_bits = vfpu_sign | ((vfpu_exponent + 112u) << 23u) | (vfpu_mantissa << 13u);
      }
      const float vfpu_value[1]{std::bit_cast<float>(vfpu_bits)};
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 1u>(vfpu_value); }
    ctx.execute_vfpu_vi2f_ct<2u, 1u, 2u, 3u>();
    ctx.execute_vfpu_vi2f_ct<66u, 32u, 1u, 0u>();
    ctx.execute_vfpu_vcmp_ct<66u, 96u, 1u, 2u>();
    ctx.execute_vfpu_vec3_ct<98u, 66u, 64u, 1u, 1u>();
    ctx.execute_vfpu_vcmov_ct<66u, 98u, 1u, 0u, false>();
    { float vfpu_value[4]{1.0f, 1.0f, 1.0f, 1.0f};
      ctx.write_vfpu_vector_with_destination_prefix_ct<98u, 1u>(vfpu_value); }
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(512));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vec3_ct<0u, 0u, 1u, 3u, 1u>();
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(480));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(64)));
    { const float fs = aot_fpr_12; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(68)));
    { const float fs = aot_fpr_13; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    aot_fpr_12 = std::sqrt(aot_fpr_12);
    aot_fpr_14 = std::bit_cast<float>(0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_12) || std::isnan(aot_fpr_14)) && aot_fpr_12 == aot_fpr_14)) ? 0x00800000u : 0u);
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(64)));
        goto L_08B4852C;
    }
    goto L_08B4851C;
L_08B4851C:
    aot_gpr_4 = (16256u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_08B48540;
      }
      goto L_08B4852C;
    }
L_08B4852C:
    aot_fpr_13 = aot_fpr_13 / aot_fpr_12;
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(68)));
    aot_fpr_12 = aot_fpr_14 / aot_fpr_12;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_08B48540;
L_08B48540:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(80));
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; vfpu_value[0u] = 1.0f;
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 1u, 1u, 3u>();
    ctx.execute_vfpu_vcmp_ct<28u, 32u, 1u, 3u>();
    ctx.execute_vfpu_unary_ct<28u, 28u, 1u, 17u>();
    ctx.execute_vfpu_vscl_ct<1u, 1u, 28u, 3u>();
    ctx.execute_vfpu_vcmov_ct<1u, 0u, 3u, 0u, false>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(80)));
    aot_mem.aot_direct_store32(ctx.gpr[22] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(84)));
    aot_mem.aot_direct_store32(ctx.gpr[22] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(88)));
    aot_mem.aot_direct_store32(ctx.gpr[22] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(68)));
    aot_mem.aot_direct_store32(ctx.gpr[22] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(64)));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12) ^ 0x80000000u);
    aot_mem.aot_direct_store32(ctx.gpr[22] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(0u);
    aot_mem.aot_direct_store32(ctx.gpr[22] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(ctx.gpr[22] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(ctx.gpr[22] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (16256u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[22] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(aot_fpr_12));
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(48), aot_run_words);
      aot_fpr_12 = std::bit_cast<float>(aot_run_words[0]);
      aot_fpr_13 = std::bit_cast<float>(aot_run_words[1]);
      aot_fpr_14 = std::bit_cast<float>(aot_run_words[2]);
    }
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_12), std::bit_cast<std::uint32_t>(aot_fpr_13), std::bit_cast<std::uint32_t>(aot_fpr_14)};
      aot_mem.aot_direct_store32_block(ctx.gpr[22] + static_cast<std::uint32_t>(48), aot_run_words); }
    ctx.gpr[17] = (ctx.gpr[22] + static_cast<std::uint32_t>(384));
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(336));
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(342));
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_7 = (ctx.gpr[22] | 0u);
    aot_gpr_31 = (0x08B485E0u);
    ctx.gpr[8] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0118_entry, 118u, 147u, 0x089DCD44u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B485E0u) goto L_08B485E0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B485E0:
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(128));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.fpr[20] = std::bit_cast<float>(aot_gpr_6);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_6) >= 0;
    ctx.fpr[20] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[20])));
      if (branch_taken) {
          goto L_08B48604;
      }
      goto L_08B485F8;
    }
L_08B485F8:
    aot_gpr_6 = (20352u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_6);
    ctx.fpr[20] = ctx.fpr[20] + aot_fpr_12;
    goto L_08B48604;
L_08B48604:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(496)));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_fpr_12 = ctx.fpr[20] - aot_fpr_12;
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(500)));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_13)));
    aot_fpr_12 = aot_fpr_12 / aot_fpr_13;
    aot_gpr_31 = (0x08B48630u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0118_entry, 118u, 156u, 0x089DCE98u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B48630u) goto L_08B48630;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B48630:
    aot_gpr_4 = (16384u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(36)));
    aot_gpr_6 = (aot_gpr_5 << 3u);
    aot_gpr_6 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    ctx.gpr[10] = (aot_gpr_4 + aot_gpr_5);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[10] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[10] + static_cast<std::uint32_t>(2))))));
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[10] + static_cast<std::uint32_t>(4))))));
    ctx.set_vfpu_scalar_bits_ct<1u>(ctx.gpr[8]);
    ctx.set_vfpu_scalar_bits_ct<33u>(ctx.gpr[9]);
    ctx.set_vfpu_scalar_bits_ct<32u>(ctx.gpr[10]);
    { float vfpu_value[4]{};
      ctx.write_vfpu_vector_with_destination_prefix_ct<96u, 1u>(vfpu_value); }
    { const std::uint16_t vfpu_half = 22080u;
      const std::uint32_t vfpu_sign = static_cast<std::uint32_t>(vfpu_half & 0x8000u) << 16u;
      std::uint32_t vfpu_exponent = (vfpu_half >> 10u) & 0x1Fu;
      std::uint32_t vfpu_mantissa = vfpu_half & 0x03FFu;
      std::uint32_t vfpu_bits = 0u;
      if (vfpu_exponent == 0u) {
        if (vfpu_mantissa == 0u) vfpu_bits = vfpu_sign;
        else {
          std::uint32_t shift = 0u;
          while ((vfpu_mantissa & 0x0400u) == 0u) { vfpu_mantissa <<= 1u; ++shift; }
          vfpu_mantissa &= 0x03FFu;
          vfpu_bits = vfpu_sign | ((113u - shift) << 23u) | (vfpu_mantissa << 13u);
        }
      } else if (vfpu_exponent == 31u) {
        vfpu_bits = vfpu_sign | 0x7F800000u | (vfpu_mantissa << 13u);
      } else {
        vfpu_bits = vfpu_sign | ((vfpu_exponent + 112u) << 23u) | (vfpu_mantissa << 13u);
      }
      const float vfpu_value[1]{std::bit_cast<float>(vfpu_bits)};
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 1u>(vfpu_value); }
    ctx.execute_vfpu_vi2f_ct<2u, 1u, 2u, 3u>();
    ctx.execute_vfpu_vi2f_ct<66u, 32u, 1u, 0u>();
    ctx.execute_vfpu_vcmp_ct<66u, 96u, 1u, 2u>();
    ctx.execute_vfpu_vec3_ct<98u, 66u, 64u, 1u, 1u>();
    ctx.execute_vfpu_vcmov_ct<66u, 98u, 1u, 0u, false>();
    { float vfpu_value[4]{1.0f, 1.0f, 1.0f, 1.0f};
      ctx.write_vfpu_vector_with_destination_prefix_ct<98u, 1u>(vfpu_value); }
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(496));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(40)));
    aot_gpr_7 = (aot_gpr_6 << 3u);
    aot_gpr_7 = (aot_gpr_6 + aot_gpr_7);
    aot_gpr_6 = (aot_gpr_6 + aot_gpr_7);
    ctx.gpr[10] = (aot_gpr_5 + aot_gpr_6);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[10] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[10] + static_cast<std::uint32_t>(2))))));
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[10] + static_cast<std::uint32_t>(4))))));
    ctx.set_vfpu_scalar_bits_ct<1u>(ctx.gpr[8]);
    ctx.set_vfpu_scalar_bits_ct<33u>(ctx.gpr[9]);
    ctx.set_vfpu_scalar_bits_ct<32u>(ctx.gpr[10]);
    { float vfpu_value[4]{};
      ctx.write_vfpu_vector_with_destination_prefix_ct<96u, 1u>(vfpu_value); }
    { const std::uint16_t vfpu_half = 22080u;
      const std::uint32_t vfpu_sign = static_cast<std::uint32_t>(vfpu_half & 0x8000u) << 16u;
      std::uint32_t vfpu_exponent = (vfpu_half >> 10u) & 0x1Fu;
      std::uint32_t vfpu_mantissa = vfpu_half & 0x03FFu;
      std::uint32_t vfpu_bits = 0u;
      if (vfpu_exponent == 0u) {
        if (vfpu_mantissa == 0u) vfpu_bits = vfpu_sign;
        else {
          std::uint32_t shift = 0u;
          while ((vfpu_mantissa & 0x0400u) == 0u) { vfpu_mantissa <<= 1u; ++shift; }
          vfpu_mantissa &= 0x03FFu;
          vfpu_bits = vfpu_sign | ((113u - shift) << 23u) | (vfpu_mantissa << 13u);
        }
      } else if (vfpu_exponent == 31u) {
        vfpu_bits = vfpu_sign | 0x7F800000u | (vfpu_mantissa << 13u);
      } else {
        vfpu_bits = vfpu_sign | ((vfpu_exponent + 112u) << 23u) | (vfpu_mantissa << 13u);
      }
      const float vfpu_value[1]{std::bit_cast<float>(vfpu_bits)};
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 1u>(vfpu_value); }
    ctx.execute_vfpu_vi2f_ct<2u, 1u, 2u, 3u>();
    ctx.execute_vfpu_vi2f_ct<66u, 32u, 1u, 0u>();
    ctx.execute_vfpu_vcmp_ct<66u, 96u, 1u, 2u>();
    ctx.execute_vfpu_vec3_ct<98u, 66u, 64u, 1u, 1u>();
    ctx.execute_vfpu_vcmov_ct<66u, 98u, 1u, 0u, false>();
    { float vfpu_value[4]{1.0f, 1.0f, 1.0f, 1.0f};
      ctx.write_vfpu_vector_with_destination_prefix_ct<98u, 1u>(vfpu_value); }
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(480));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vec3_ct<0u, 0u, 1u, 3u, 1u>();
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(512));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_6 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const std::uint32_t vfpu_address = aot_gpr_6 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    ctx.execute_vfpu_unary_ct<28u, 28u, 1u, 22u>();
    aot_gpr_7 = (ctx.vfpu_scalar_bits_ct<28u>());
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_7);
    aot_fpr_12 = aot_fpr_12 / aot_fpr_13;
    aot_gpr_7 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.set_vfpu_scalar_bits_ct<28u>(aot_gpr_7);
    { const std::uint32_t vfpu_address = aot_gpr_6 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = aot_gpr_6 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vec3_ct<0u, 0u, 1u, 3u, 0u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(96));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_6 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(36)));
    ctx.gpr[8] = (aot_gpr_7 << 3u);
    ctx.gpr[8] = (aot_gpr_7 + ctx.gpr[8]);
    aot_gpr_7 = (aot_gpr_7 + ctx.gpr[8]);
    ctx.gpr[10] = (aot_gpr_6 + aot_gpr_7);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[10] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[10] + static_cast<std::uint32_t>(2))))));
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[10] + static_cast<std::uint32_t>(4))))));
    ctx.set_vfpu_scalar_bits_ct<1u>(ctx.gpr[8]);
    ctx.set_vfpu_scalar_bits_ct<33u>(ctx.gpr[9]);
    ctx.set_vfpu_scalar_bits_ct<32u>(ctx.gpr[10]);
    { float vfpu_value[4]{};
      ctx.write_vfpu_vector_with_destination_prefix_ct<96u, 1u>(vfpu_value); }
    { const std::uint16_t vfpu_half = 22080u;
      const std::uint32_t vfpu_sign = static_cast<std::uint32_t>(vfpu_half & 0x8000u) << 16u;
      std::uint32_t vfpu_exponent = (vfpu_half >> 10u) & 0x1Fu;
      std::uint32_t vfpu_mantissa = vfpu_half & 0x03FFu;
      std::uint32_t vfpu_bits = 0u;
      if (vfpu_exponent == 0u) {
        if (vfpu_mantissa == 0u) vfpu_bits = vfpu_sign;
        else {
          std::uint32_t shift = 0u;
          while ((vfpu_mantissa & 0x0400u) == 0u) { vfpu_mantissa <<= 1u; ++shift; }
          vfpu_mantissa &= 0x03FFu;
          vfpu_bits = vfpu_sign | ((113u - shift) << 23u) | (vfpu_mantissa << 13u);
        }
      } else if (vfpu_exponent == 31u) {
        vfpu_bits = vfpu_sign | 0x7F800000u | (vfpu_mantissa << 13u);
      } else {
        vfpu_bits = vfpu_sign | ((vfpu_exponent + 112u) << 23u) | (vfpu_mantissa << 13u);
      }
      const float vfpu_value[1]{std::bit_cast<float>(vfpu_bits)};
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 1u>(vfpu_value); }
    ctx.execute_vfpu_vi2f_ct<2u, 1u, 2u, 3u>();
    ctx.execute_vfpu_vi2f_ct<66u, 32u, 1u, 0u>();
    ctx.execute_vfpu_vcmp_ct<66u, 96u, 1u, 2u>();
    ctx.execute_vfpu_vec3_ct<98u, 66u, 64u, 1u, 1u>();
    ctx.execute_vfpu_vcmov_ct<66u, 98u, 1u, 0u, false>();
    { float vfpu_value[4]{1.0f, 1.0f, 1.0f, 1.0f};
      ctx.write_vfpu_vector_with_destination_prefix_ct<98u, 1u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(520)));
    aot_gpr_5 = (16256u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(32)));
    aot_fpr_13 = aot_fpr_13 - aot_fpr_14;
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(40)));
    aot_gpr_7 = (aot_gpr_6 << 3u);
    aot_gpr_7 = (aot_gpr_6 + aot_gpr_7);
    aot_gpr_6 = (aot_gpr_6 + aot_gpr_7);
    ctx.gpr[10] = (aot_gpr_5 + aot_gpr_6);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[10] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[10] + static_cast<std::uint32_t>(2))))));
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[10] + static_cast<std::uint32_t>(4))))));
    ctx.set_vfpu_scalar_bits_ct<1u>(ctx.gpr[8]);
    ctx.set_vfpu_scalar_bits_ct<33u>(ctx.gpr[9]);
    ctx.set_vfpu_scalar_bits_ct<32u>(ctx.gpr[10]);
    { float vfpu_value[4]{};
      ctx.write_vfpu_vector_with_destination_prefix_ct<96u, 1u>(vfpu_value); }
    { const std::uint16_t vfpu_half = 22080u;
      const std::uint32_t vfpu_sign = static_cast<std::uint32_t>(vfpu_half & 0x8000u) << 16u;
      std::uint32_t vfpu_exponent = (vfpu_half >> 10u) & 0x1Fu;
      std::uint32_t vfpu_mantissa = vfpu_half & 0x03FFu;
      std::uint32_t vfpu_bits = 0u;
      if (vfpu_exponent == 0u) {
        if (vfpu_mantissa == 0u) vfpu_bits = vfpu_sign;
        else {
          std::uint32_t shift = 0u;
          while ((vfpu_mantissa & 0x0400u) == 0u) { vfpu_mantissa <<= 1u; ++shift; }
          vfpu_mantissa &= 0x03FFu;
          vfpu_bits = vfpu_sign | ((113u - shift) << 23u) | (vfpu_mantissa << 13u);
        }
      } else if (vfpu_exponent == 31u) {
        vfpu_bits = vfpu_sign | 0x7F800000u | (vfpu_mantissa << 13u);
      } else {
        vfpu_bits = vfpu_sign | ((vfpu_exponent + 112u) << 23u) | (vfpu_mantissa << 13u);
      }
      const float vfpu_value[1]{std::bit_cast<float>(vfpu_bits)};
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 1u>(vfpu_value); }
    ctx.execute_vfpu_vi2f_ct<2u, 1u, 2u, 3u>();
    ctx.execute_vfpu_vi2f_ct<66u, 32u, 1u, 0u>();
    ctx.execute_vfpu_vcmp_ct<66u, 96u, 1u, 2u>();
    ctx.execute_vfpu_vec3_ct<98u, 66u, 64u, 1u, 1u>();
    ctx.execute_vfpu_vcmov_ct<66u, 98u, 1u, 0u, false>();
    { float vfpu_value[4]{1.0f, 1.0f, 1.0f, 1.0f};
      ctx.write_vfpu_vector_with_destination_prefix_ct<98u, 1u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(504)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(32)));
    { const float fs = aot_fpr_13; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (20078u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 27432u);
    ctx.fpr[20] = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[17] = (0u | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
      if (branch_taken) {
          goto L_08B488A4;
      }
      goto L_08B48850;
    }
L_08B48850:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(96), aot_run_words);
      aot_fpr_12 = std::bit_cast<float>(aot_run_words[0]);
      aot_fpr_13 = std::bit_cast<float>(aot_run_words[1]);
      aot_fpr_14 = std::bit_cast<float>(aot_run_words[2]);
    }
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(604));
    aot_gpr_31 = (0x08B48868u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0189_entry, 189u, 115u, 0x08AF8668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B48868u) goto L_08B48868;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B48868:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_08B4889C;
      }
      goto L_08B48870;
    }
L_08B48870:
    { const bool branch_taken = ctx.gpr[22] == 0u;
      if (branch_taken) {
          goto L_08B48894;
      }
      goto L_08B48878;
    }
L_08B48878:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(92)));
    aot_gpr_5 = (0u | 3u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(24));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_7;
    aot_gpr_31 = (0x08B48894u);
    aot_gpr_4 = (ctx.gpr[22] + aot_gpr_6);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B48894u) goto L_08B48894;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B48894:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B496F4;
      }
      goto L_08B4889C;
    }
L_08B4889C:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(604)));
      if (branch_taken) {
          goto L_08B489C8;
      }
      goto L_08B488A4;
    }
L_08B488A4:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(96));
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(608));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(104)));
    aot_gpr_5 = (16320u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (17530u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(192));
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(224));
    aot_gpr_7 = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 1u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), 0u);
    aot_gpr_31 = (0x08B488FCu);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0035_entry, 35u, 287u, 0x08891DD4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B488FCu) goto L_08B488FC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B488FC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08B48918;
      }
      goto L_08B48904;
    }
L_08B48904:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(200)));
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(560));
    aot_gpr_31 = (0x08B48914u);
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(192));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 157u, 0x08805288u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B48914u) goto L_08B48914;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B48914:
    ctx.gpr[17] = (0u | 1u);
    goto L_08B48918;
L_08B48918:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[2] = (50298u << 16u);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(96));
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[2]);
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(192));
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(224));
    aot_gpr_7 = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 1u);
    aot_gpr_31 = (0x08B48950u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0035_entry, 35u, 287u, 0x08891DD4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B48950u) goto L_08B48950;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B48950:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08B489B8;
      }
      goto L_08B48958;
    }
L_08B48958:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(200)));
    aot_fpr_13 = std::bit_cast<float>(0u);
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(104)));
    aot_fpr_12 = aot_fpr_12 - aot_fpr_14;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    if (((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12) ^ 0x80000000u);
        goto L_08B48978;
    }
    goto L_08B48978;
L_08B48978:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(104)));
    aot_fpr_14 = std::bit_cast<float>(0u);
    aot_fpr_13 = ctx.fpr[20] - aot_fpr_13;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 < aot_fpr_14)) ? 0x00800000u : 0u);
    if (((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_13) ^ 0x80000000u);
        goto L_08B48994;
    }
    goto L_08B48994;
L_08B48994:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08B489B8;
      }
      goto L_08B489A4;
    }
L_08B489A4:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(200)));
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(560));
    aot_gpr_31 = (0x08B489B4u);
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(192));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 157u, 0x08805288u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B489B4u) goto L_08B489B4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B489B4:
    ctx.gpr[17] = (0u | 1u);
    goto L_08B489B8;
L_08B489B8:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(608));
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(96));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    goto L_08B489C8;
L_08B489C8:
    aot_gpr_4 = (20078u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 27432u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(ctx.fpr[20]) || std::isnan(aot_fpr_12)) && ctx.fpr[20] == aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08B48A18;
      }
      goto L_08B489E4;
    }
L_08B489E4:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(104)));
    aot_fpr_13 = std::bit_cast<float>(0u);
    aot_fpr_12 = ctx.fpr[20] - aot_fpr_12;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    if (((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12) ^ 0x80000000u);
        goto L_08B48A00;
    }
    goto L_08B48A00;
L_08B48A00:
    aot_gpr_4 = (16608u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08B48A44;
      }
      goto L_08B48A18;
    }
L_08B48A18:
    { const bool branch_taken = ctx.gpr[22] == 0u;
      if (branch_taken) {
          goto L_08B48A3C;
      }
      goto L_08B48A20;
    }
L_08B48A20:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(92)));
    aot_gpr_5 = (0u | 3u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(24));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_7;
    aot_gpr_31 = (0x08B48A3Cu);
    aot_gpr_4 = (ctx.gpr[22] + aot_gpr_6);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B48A3Cu) goto L_08B48A3C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B48A3C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B496F4;
      }
      goto L_08B48A44;
    }
L_08B48A44:
    aot_gpr_31 = (0x08B48A4Cu);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[22] + static_cast<std::uint32_t>(86))))));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0186_entry, 186u, 168u, 0x08AECA18u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B48A4Cu) goto L_08B48A4C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B48A4C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08B48A68;
      }
      goto L_08B48A54;
    }
L_08B48A54:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[22] + static_cast<std::uint32_t>(614))))));
    aot_gpr_4 = (aot_gpr_4 | 128u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(ctx.gpr[22] + static_cast<std::uint32_t>(614), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_08B48A88;
      }
      goto L_08B48A68;
    }
L_08B48A68:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(92)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(384));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_6;
    aot_gpr_31 = (0x08B48A80u);
    aot_gpr_4 = (ctx.gpr[22] + aot_gpr_5);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B48A80u) goto L_08B48A80;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B48A80:
    aot_fpr_12 = ctx.fpr[20] + ctx.fpr[0];
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_08B48A88;
L_08B48A88:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(96), aot_run_words);
      aot_fpr_12 = std::bit_cast<float>(aot_run_words[0]);
      aot_fpr_13 = std::bit_cast<float>(aot_run_words[1]);
      aot_fpr_14 = std::bit_cast<float>(aot_run_words[2]);
    }
    aot_mem.aot_direct_store32(ctx.gpr[22] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(ctx.gpr[22] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(aot_fpr_13));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[22] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(aot_fpr_14));
      if (branch_taken) {
          goto L_08B48AB0;
      }
      goto L_08B48AA4;
    }
L_08B48AA4:
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(560));
    aot_gpr_31 = (0x08B48AB0u);
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 203u, 0x08AD0EC4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B48AB0u) goto L_08B48AB0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B48AB0:
    ctx.gpr[17] = (ctx.gpr[22] + static_cast<std::uint32_t>(384));
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(336));
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(342));
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_7 = (ctx.gpr[22] | 0u);
    aot_gpr_31 = (0x08B48ACCu);
    ctx.gpr[8] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0118_entry, 118u, 147u, 0x089DCD44u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B48ACCu) goto L_08B48ACC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B48ACC:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_6);
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(128));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_6) >= 0;
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
      if (branch_taken) {
          goto L_08B48AF0;
      }
      goto L_08B48AE4;
    }
L_08B48AE4:
    aot_gpr_6 = (20352u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_6);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    goto L_08B48AF0;
L_08B48AF0:
    aot_gpr_6 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(496)));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_13)));
    aot_fpr_12 = aot_fpr_12 - aot_fpr_13;
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(500)));
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_14)));
    aot_fpr_12 = aot_fpr_12 / aot_fpr_14;
    aot_gpr_31 = (0x08B48B20u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0118_entry, 118u, 156u, 0x089DCE98u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B48B20u) goto L_08B48B20;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B48B20:
    aot_gpr_4 = (17008u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_vfpu_scalar_bits_ct<28u>(aot_gpr_4);
    ctx.execute_vfpu_unary_ct<28u, 28u, 1u, 16u>();
    ctx.gpr[17] = (aot_gpr_29 + static_cast<std::uint32_t>(128));
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[20] = (aot_gpr_29 + static_cast<std::uint32_t>(512));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(176));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_31 = (0x08B48B5Cu);
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0152_entry, 152u, 538u, 0x08A666C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B48B5Cu) goto L_08B48B5C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B48B5C:
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_vfpu_scalar_bits_ct<28u>(aot_gpr_4);
    ctx.execute_vfpu_unary_ct<28u, 28u, 1u, 16u>();
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(496));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(320));
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vec3_ct<0u, 0u, 1u, 3u, 1u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(144));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(304));
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vec3_ct<0u, 0u, 1u, 3u, 1u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(160));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(44)));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 23 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 24 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B48BE0;
      }
      goto L_08B48BCC;
    }
L_08B48BCC:
    aot_gpr_5 = (0u | 13u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_08B48BF0;
      }
      goto L_08B48BD8;
    }
L_08B48BD8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B48C64;
      }
      goto L_08B48BE0;
    }
L_08B48BE0:
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 25 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B48C40;
      }
      goto L_08B48BE8;
    }
L_08B48BE8:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B48C64;
      }
      goto L_08B48BF0;
    }
L_08B48BF0:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[22] + static_cast<std::uint32_t>(533))))));
    aot_gpr_5 = (0u | 1u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08B48C18;
      }
      goto L_08B48C00;
    }
L_08B48C00:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(72)));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-497));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 | 32u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[22] + static_cast<std::uint32_t>(72), aot_gpr_4);
      if (branch_taken) {
          goto L_08B48C2C;
      }
      goto L_08B48C18;
    }
L_08B48C18:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(72)));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-497));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 | 48u);
    aot_mem.aot_direct_store32(ctx.gpr[22] + static_cast<std::uint32_t>(72), aot_gpr_4);
    goto L_08B48C2C;
L_08B48C2C:
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    aot_gpr_31 = (0x08B48C38u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0191_entry, 191u, 450u, 0x08B01B4Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B48C38u) goto L_08B48C38;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B48C38:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B48C98;
      }
      goto L_08B48C40;
    }
L_08B48C40:
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    aot_gpr_31 = (0x08B48C4Cu);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0191_entry, 191u, 450u, 0x08B01B4Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B48C4Cu) goto L_08B48C4C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B48C4C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(72)));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-497));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 | 48u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[22] + static_cast<std::uint32_t>(72), aot_gpr_4);
      if (branch_taken) {
          goto L_08B48C98;
      }
      goto L_08B48C64;
    }
L_08B48C64:
    { const bool branch_taken = ctx.gpr[19] == 0u;
      if (branch_taken) {
          goto L_08B48C84;
      }
      goto L_08B48C6C;
    }
L_08B48C6C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(72)));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-497));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 | 48u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[22] + static_cast<std::uint32_t>(72), aot_gpr_4);
      if (branch_taken) {
          goto L_08B48C98;
      }
      goto L_08B48C84;
    }
L_08B48C84:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(72)));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-497));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 | 32u);
    aot_mem.aot_direct_store32(ctx.gpr[22] + static_cast<std::uint32_t>(72), aot_gpr_4);
    goto L_08B48C98;
L_08B48C98:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(80)));
    aot_gpr_31 = (0x08B48CA4u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0080_entry, 80u, 190u, 0x08945304u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B48CA4u) goto L_08B48CA4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B48CA4:
    aot_gpr_31 = (0x08B48CACu);
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 50u, 0x08AD0530u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B48CACu) goto L_08B48CAC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B48CAC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08B48E50;
      }
      goto L_08B48CB4;
    }
L_08B48CB4:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(304));
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_4 = (ctx.gpr[22] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vec3_ct<0u, 0u, 1u, 3u, 1u>();
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(640));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 2u>();
    ctx.execute_vfpu_unary_ct<28u, 28u, 1u, 22u>();
    aot_gpr_4 = (ctx.vfpu_scalar_bits_ct<28u>());
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (2236u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(32304));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(1952)));
    aot_gpr_4 = (17184u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[22] + static_cast<std::uint32_t>(614))))));
    aot_gpr_4 = (aot_gpr_4 & 128u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    { const float fs = aot_fpr_13; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
      if (branch_taken) {
          goto L_08B48D14;
      }
      goto L_08B48D08;
    }
L_08B48D08:
    aot_gpr_4 = (16320u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
      if (branch_taken) {
          goto L_08B48D1C;
      }
      goto L_08B48D14;
    }
L_08B48D14:
    aot_gpr_4 = (16256u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    goto L_08B48D1C;
L_08B48D1C:
    { const float fs = aot_fpr_13; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (2236u << 16u);
      if (branch_taken) {
          goto L_08B48D54;
      }
      goto L_08B48D30;
    }
L_08B48D30:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(32304));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(1952)));
    aot_gpr_4 = (17096u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_13; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08B48D80;
      }
      goto L_08B48D54;
    }
L_08B48D54:
    { const bool branch_taken = ctx.gpr[22] == 0u;
      if (branch_taken) {
          goto L_08B48D78;
      }
      goto L_08B48D5C;
    }
L_08B48D5C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(92)));
    aot_gpr_5 = (0u | 3u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(24));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_7;
    aot_gpr_31 = (0x08B48D78u);
    aot_gpr_4 = (ctx.gpr[22] + aot_gpr_6);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B48D78u) goto L_08B48D78;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B48D78:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B496F4;
      }
      goto L_08B48D80;
    }
L_08B48D80:
    aot_gpr_4 = (2236u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(32304));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_5 = (ctx.gpr[22] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vec3_ct<0u, 0u, 1u, 3u, 1u>();
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(640));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 2u>();
    ctx.execute_vfpu_unary_ct<28u, 28u, 1u, 22u>();
    aot_gpr_5 = (ctx.vfpu_scalar_bits_ct<28u>());
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(1952)));
    aot_gpr_4 = (17061u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_13; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08B48DE0;
      }
      goto L_08B48DD8;
    }
L_08B48DD8:
    { const bool branch_taken = ctx.gpr[16] == 0u;
      if (branch_taken) {
          goto L_08B48E0C;
      }
      goto L_08B48DE0;
    }
L_08B48DE0:
    { const bool branch_taken = ctx.gpr[22] == 0u;
      if (branch_taken) {
          goto L_08B48E04;
      }
      goto L_08B48DE8;
    }
L_08B48DE8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(92)));
    aot_gpr_5 = (0u | 3u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(24));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_7;
    aot_gpr_31 = (0x08B48E04u);
    aot_gpr_4 = (ctx.gpr[22] + aot_gpr_6);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B48E04u) goto L_08B48E04;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B48E04:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B496F4;
      }
      goto L_08B48E0C;
    }
L_08B48E0C:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[22] + static_cast<std::uint32_t>(86))))));
    aot_gpr_5 = (0u | 248u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08B48E48;
      }
      goto L_08B48E1C;
    }
L_08B48E1C:
    { const bool branch_taken = ctx.gpr[22] == 0u;
      if (branch_taken) {
          goto L_08B48E40;
      }
      goto L_08B48E24;
    }
L_08B48E24:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(92)));
    aot_gpr_5 = (0u | 3u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(24));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_7;
    aot_gpr_31 = (0x08B48E40u);
    aot_gpr_4 = (ctx.gpr[22] + aot_gpr_6);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B48E40u) goto L_08B48E40;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B48E40:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B496F4;
      }
      goto L_08B48E48;
    }
L_08B48E48:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B48EE4;
      }
      goto L_08B48E50;
    }
L_08B48E50:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(304));
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_4 = (ctx.gpr[22] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vec3_ct<0u, 0u, 1u, 3u, 1u>();
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(656));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 2u>();
    ctx.execute_vfpu_unary_ct<28u, 28u, 1u, 22u>();
    aot_gpr_4 = (ctx.vfpu_scalar_bits_ct<28u>());
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[22] + static_cast<std::uint32_t>(614))))));
    aot_gpr_4 = (aot_gpr_4 & 128u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (17008u << 16u);
      if (branch_taken) {
          goto L_08B48E9C;
      }
      goto L_08B48E90;
    }
L_08B48E90:
    aot_gpr_4 = (17076u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
      if (branch_taken) {
          goto L_08B48EA0;
      }
      goto L_08B48E9C;
    }
L_08B48E9C:
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    goto L_08B48EA0;
L_08B48EA0:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08B48EE4;
      }
      goto L_08B48EB0;
    }
L_08B48EB0:
    { const bool branch_taken = ctx.gpr[16] != 0u;
      if (branch_taken) {
          goto L_08B48EE4;
      }
      goto L_08B48EB8;
    }
L_08B48EB8:
    { const bool branch_taken = ctx.gpr[22] == 0u;
      if (branch_taken) {
          goto L_08B48EDC;
      }
      goto L_08B48EC0;
    }
L_08B48EC0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(92)));
    aot_gpr_5 = (0u | 3u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(24));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_7;
    aot_gpr_31 = (0x08B48EDCu);
    aot_gpr_4 = (ctx.gpr[22] + aot_gpr_6);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B48EDCu) goto L_08B48EDC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B48EDC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B496F4;
      }
      goto L_08B48EE4;
    }
L_08B48EE4:
    if (ctx.gpr[18] == 0u) {
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[22] + static_cast<std::uint32_t>(86))))));
        goto L_08B48F78;
    }
    goto L_08B48EEC;
L_08B48EEC:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[22] + static_cast<std::uint32_t>(86))))));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (ctx.gpr[22] + static_cast<std::uint32_t>(48));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(20)));
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(386));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(12)));
    aot_gpr_5 = (16800u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), 0u);
    aot_gpr_5 = (0u | 1u);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    aot_gpr_7 = (0u | 2u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[11] = (0u | 0u);
    aot_gpr_31 = (0x08B48F40u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0037_entry, 37u, 365u, 0x0889A004u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B48F40u) goto L_08B48F40;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B48F40:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(386))))));
    if (aot_gpr_4 == 0u) {
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[22] + static_cast<std::uint32_t>(86))))));
        goto L_08B48F78;
    }
    goto L_08B48F4C;
L_08B48F4C:
    { const bool branch_taken = ctx.gpr[22] == 0u;
      if (branch_taken) {
          goto L_08B48F70;
      }
      goto L_08B48F54;
    }
L_08B48F54:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(92)));
    aot_gpr_5 = (0u | 3u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(24));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_7;
    aot_gpr_31 = (0x08B48F70u);
    aot_gpr_4 = (ctx.gpr[22] + aot_gpr_6);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B48F70u) goto L_08B48F70;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B48F70:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B496F4;
      }
      goto L_08B48F78;
    }
L_08B48F78:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (ctx.gpr[22] + static_cast<std::uint32_t>(48));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(20)));
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(386));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), 0u);
    aot_gpr_5 = (0u | 1u);
    aot_gpr_7 = (0u | 2u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[11] = (0u | 1u);
    aot_gpr_31 = (0x08B48FBCu);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0037_entry, 37u, 365u, 0x0889A004u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B48FBCu) goto L_08B48FBC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B48FBC:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(386))))));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08B494C0;
      }
      goto L_08B48FC8;
    }
L_08B48FC8:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(144)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(160)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(148)));
    aot_fpr_15 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(164)));
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    { const float fs = aot_fpr_14; const float ft = aot_fpr_15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(0u);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_14;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < ctx.fpr[16])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08B494C0;
      }
      goto L_08B48FF8;
    }
L_08B48FF8:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[22] + static_cast<std::uint32_t>(86))))));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(aot_gpr_6) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_gpr_5 = (0u | 0u);
      if (branch_taken) {
          goto L_08B4901C;
      }
      goto L_08B4900C;
    }
L_08B4900C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    goto L_08B4901C;
L_08B4901C:
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[22] + static_cast<std::uint32_t>(548));
    aot_gpr_31 = (0x08B4902Cu);
    aot_gpr_6 = (ctx.gpr[22] + static_cast<std::uint32_t>(552));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0167_entry, 167u, 480u, 0x08AA1FE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B4902Cu) goto L_08B4902C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B4902C:
    aot_gpr_31 = (0x08B49034u);
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0035_entry, 35u, 224u, 0x08891A2Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B49034u) goto L_08B49034;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B49034:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(44)));
    aot_gpr_5 = (0u | 13u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_08B49064;
      }
      goto L_08B49044;
    }
L_08B49044:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(44)));
    aot_gpr_5 = (0u | 24u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_08B49064;
      }
      goto L_08B49054;
    }
L_08B49054:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(44)));
    aot_gpr_5 = (0u | 23u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08B49074;
      }
      goto L_08B49064;
    }
L_08B49064:
    aot_gpr_31 = (0x08B4906Cu);
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0194_entry, 194u, 466u, 0x08B0DF10u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B4906Cu) goto L_08B4906C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B4906C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B491F4;
      }
      goto L_08B49074;
    }
L_08B49074:
    aot_gpr_31 = (0x08B4907Cu);
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0191_entry, 191u, 106u, 0x08B00708u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B4907Cu) goto L_08B4907C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B4907C:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08B491F4;
      }
      goto L_08B49088;
    }
L_08B49088:
    ctx.gpr[16] = (aot_mem.aot_direct_load8(ctx.gpr[22] + static_cast<std::uint32_t>(565)));
    ctx.gpr[18] = (0u | 0u);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08B490E8;
      }
      goto L_08B4909C;
    }
L_08B4909C:
    aot_gpr_4 = (16256u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    aot_gpr_31 = (0x08B490ACu);
    ctx.fpr[22] = std::bit_cast<float>(aot_gpr_4);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20998, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[28], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B490ACu) goto L_08B490AC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B490AC:
    aot_fpr_12 = ctx.fpr[22] - ctx.fpr[20];
    aot_gpr_5 = (15872u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_4 = (0u | 0u);
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = ctx.fpr[20] + aot_fpr_12;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    if (((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_gpr_4 = (0u | 1u);
        goto L_08B490D4;
    }
    goto L_08B490D4;
L_08B490D4:
    ctx.gpr[17] = (ctx.gpr[17] + aot_gpr_4);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08B4909C;
      }
      goto L_08B490E8;
    }
L_08B490E8:
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[22] + static_cast<std::uint32_t>(86))))));
    aot_gpr_31 = (0x08B490F4u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0186_entry, 186u, 181u, 0x08AECAA8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B490F4u) goto L_08B490F4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B490F4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08B49174;
      }
      goto L_08B490FC;
    }
L_08B490FC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
        goto L_08B49114;
    }
    goto L_08B49108;
L_08B49108:
    aot_gpr_31 = (0x08B49110u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B49110u) goto L_08B49110;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B49110:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    goto L_08B49114;
L_08B49114:
    aot_gpr_31 = (0x08B4911Cu);
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(5544));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0078_entry, 78u, 690u, 0x0893ED4Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B4911Cu) goto L_08B4911C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B4911C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    aot_gpr_5 = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_08B49140;
      }
      goto L_08B49130;
    }
L_08B49130:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    aot_gpr_5 = (ctx.gpr[16] << 2u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    goto L_08B49140;
L_08B49140:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(36)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(72));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_5;
    aot_gpr_31 = (0x08B49158u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B49158u) goto L_08B49158;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B49158:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[18];
      if (branch_taken) {
          goto L_08B49174;
      }
      goto L_08B49160;
    }
L_08B49160:
    aot_gpr_4 = (0u | 1u);
    aot_gpr_5 = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    if (aot_gpr_5 != 0u) {
    aot_gpr_4 = (ctx.gpr[17] | 0u);
        goto L_08B49170;
    }
    goto L_08B49170;
L_08B49170:
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    goto L_08B49174;
L_08B49174:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(852)));
    aot_gpr_5 = (0u | 9u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08B49188;
      }
      goto L_08B49184;
    }
L_08B49184:
    ctx.gpr[17] = (0u | 0u);
    goto L_08B49188;
L_08B49188:
    ctx.gpr[16] = (0u | 0u);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B491F4;
      }
      goto L_08B49198;
    }
L_08B49198:
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    aot_gpr_31 = (0x08B491A4u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0191_entry, 191u, 120u, 0x08B007DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B491A4u) goto L_08B491A4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B491A4:
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    aot_gpr_31 = (0x08B491B0u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08AFEF7C, 190u, 0x08AFEF7Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B491B0u) goto L_08B491B0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B491B0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08B491E4;
      }
      goto L_08B491B8;
    }
L_08B491B8:
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    aot_gpr_31 = (0x08B491C4u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08AFEF7C, 190u, 0x08AFEF7Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B491C4u) goto L_08B491C4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B491C4:
    aot_gpr_4 = (ctx.gpr[2] + static_cast<std::uint32_t>(464));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (4u << 16u);
    aot_gpr_5 = (aot_gpr_5 | aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8872)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8872), aot_gpr_4);
    goto L_08B491E4;
L_08B491E4:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08B49198;
      }
      goto L_08B491F4;
    }
L_08B491F4:
    aot_gpr_31 = (0x08B491FCu);
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B01E00, 191u, 504u, 0x08B01E00u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0191_entry, 191u, 504u, 0x08B01E00u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B491FCu) goto L_08B491FC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B491FC:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 3 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_5 = (0u | 4u);
      if (branch_taken) {
          goto L_08B49220;
      }
      goto L_08B4920C;
    }
L_08B4920C:
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08B49230;
      }
      goto L_08B49218;
    }
L_08B49218:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 20u);
      if (branch_taken) {
          goto L_08B49234;
      }
      goto L_08B49220;
    }
L_08B49220:
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08B49230;
      }
      goto L_08B49228;
    }
L_08B49228:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 40u);
      if (branch_taken) {
          goto L_08B49234;
      }
      goto L_08B49230;
    }
L_08B49230:
    ctx.gpr[16] = (0u | 3u);
    goto L_08B49234;
L_08B49234:
    aot_gpr_31 = (0x08B4923Cu);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20934, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B4923Cu) goto L_08B4923C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B4923C:
    aot_gpr_4 = (ctx.gpr[2] & 65535u);
    aot_gpr_4 = (aot_gpr_4 & 127u);
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(72)));
        goto L_08B49260;
    }
    goto L_08B49250;
L_08B49250:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(5480)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B4928C;
      }
      goto L_08B4925C;
    }
L_08B4925C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(72)));
    goto L_08B49260;
L_08B49260:
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-497));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 | 48u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[22] + static_cast<std::uint32_t>(535))))));
    aot_mem.aot_direct_store32(ctx.gpr[22] + static_cast<std::uint32_t>(72), aot_gpr_4);
    aot_gpr_4 = (0u | 2u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(10));
    aot_mem.aot_direct_store8(ctx.gpr[22] + static_cast<std::uint32_t>(532), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_gpr_5 << 24u);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 24u));
    aot_mem.aot_direct_store8(ctx.gpr[22] + static_cast<std::uint32_t>(535), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_08B4928C;
L_08B4928C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(44)));
    aot_gpr_5 = (0u | 13u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_08B492AC;
      }
      goto L_08B4929C;
    }
L_08B4929C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(44)));
    aot_gpr_5 = (0u | 24u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08B492B4;
      }
      goto L_08B492AC;
    }
L_08B492AC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(5496), aot_gpr_4);
    goto L_08B492B4;
L_08B492B4:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[22] + static_cast<std::uint32_t>(86))))));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1000));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08B492E0;
      }
      goto L_08B492C4;
    }
L_08B492C4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(72)));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-497));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 | 48u);
    aot_mem.aot_direct_store32(ctx.gpr[22] + static_cast<std::uint32_t>(72), aot_gpr_4);
    aot_gpr_4 = (0u | 2u);
    aot_mem.aot_direct_store8(ctx.gpr[22] + static_cast<std::uint32_t>(532), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_08B492E0;
L_08B492E0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(44)));
    aot_gpr_5 = (0u | 13u);
    if (aot_gpr_4 == aot_gpr_5) {
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[22] + static_cast<std::uint32_t>(86))))));
        goto L_08B49304;
    }
    goto L_08B492F0;
L_08B492F0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(44)));
    aot_gpr_5 = (0u | 24u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08B494EC;
      }
      goto L_08B49300;
    }
L_08B49300:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[22] + static_cast<std::uint32_t>(86))))));
    goto L_08B49304;
L_08B49304:
    aot_gpr_5 = (0u | 204u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08B494EC;
      }
      goto L_08B49310;
    }
L_08B49310:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(680));
    aot_gpr_5 = (0u | 184u);
    aot_gpr_6 = (0u | 184u);
    aot_gpr_7 = (0u | 184u);
    aot_gpr_31 = (0x08B49328u);
    ctx.gpr[8] = (0u | 255u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08A3550C, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[8], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B49328u) goto L_08B49328;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B49328:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(684));
    aot_gpr_5 = (0u | 28u);
    aot_gpr_6 = (0u | 41u);
    aot_gpr_7 = (0u | 72u);
    aot_gpr_31 = (0x08B49340u);
    ctx.gpr[8] = (0u | 255u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08A3550C, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[8], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B49340u) goto L_08B49340;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B49340:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(688));
    aot_gpr_5 = (0u | 28u);
    aot_gpr_6 = (0u | 55u);
    aot_gpr_7 = (0u | 111u);
    aot_gpr_31 = (0x08B49358u);
    ctx.gpr[8] = (0u | 255u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08A3550C, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[8], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B49358u) goto L_08B49358;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B49358:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(692));
    aot_gpr_5 = (0u | 138u);
    aot_gpr_6 = (0u | 58u);
    aot_gpr_7 = (0u | 66u);
    aot_gpr_31 = (0x08B49370u);
    ctx.gpr[8] = (0u | 255u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08A3550C, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[8], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B49370u) goto L_08B49370;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B49370:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(696));
    aot_gpr_5 = (0u | 36u);
    aot_gpr_6 = (0u | 47u);
    aot_gpr_7 = (0u | 43u);
    aot_gpr_31 = (0x08B49388u);
    ctx.gpr[8] = (0u | 255u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08A3550C, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[8], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B49388u) goto L_08B49388;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B49388:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5472)));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B493B0;
      }
      goto L_08B49398;
    }
L_08B49398:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) < 0;
      if (branch_taken) {
          goto L_08B494B8;
      }
      goto L_08B493A0;
    }
L_08B493A0:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) <= 0;
      if (branch_taken) {
          goto L_08B493C8;
      }
      goto L_08B493A8;
    }
L_08B493A8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B49404;
      }
      goto L_08B493B0;
    }
L_08B493B0:
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B49440;
      }
      goto L_08B493B8;
    }
L_08B493B8:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08B4947C;
      }
      goto L_08B493C0;
    }
L_08B493C0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B494B8;
      }
      goto L_08B493C8;
    }
L_08B493C8:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[22] + static_cast<std::uint32_t>(86))))));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(aot_gpr_6) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_gpr_5 = (0u | 0u);
      if (branch_taken) {
          goto L_08B493EC;
      }
      goto L_08B493DC;
    }
L_08B493DC:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    goto L_08B493EC;
L_08B493EC:
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(688));
    aot_gpr_31 = (0x08B493FCu);
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(680));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0167_entry, 167u, 434u, 0x08AA1BA4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B493FCu) goto L_08B493FC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B493FC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B494B8;
      }
      goto L_08B49404;
    }
L_08B49404:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[22] + static_cast<std::uint32_t>(86))))));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(aot_gpr_6) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_gpr_5 = (0u | 0u);
      if (branch_taken) {
          goto L_08B49428;
      }
      goto L_08B49418;
    }
L_08B49418:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    goto L_08B49428;
L_08B49428:
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(692));
    aot_gpr_31 = (0x08B49438u);
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(680));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0167_entry, 167u, 434u, 0x08AA1BA4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B49438u) goto L_08B49438;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B49438:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B494B8;
      }
      goto L_08B49440;
    }
L_08B49440:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[22] + static_cast<std::uint32_t>(86))))));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(aot_gpr_6) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_gpr_5 = (0u | 0u);
      if (branch_taken) {
          goto L_08B49464;
      }
      goto L_08B49454;
    }
L_08B49454:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    goto L_08B49464;
L_08B49464:
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(696));
    aot_gpr_31 = (0x08B49474u);
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(680));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0167_entry, 167u, 434u, 0x08AA1BA4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B49474u) goto L_08B49474;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B49474:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B494B8;
      }
      goto L_08B4947C;
    }
L_08B4947C:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[22] + static_cast<std::uint32_t>(86))))));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(aot_gpr_6) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_gpr_5 = (0u | 0u);
      if (branch_taken) {
          goto L_08B494A0;
      }
      goto L_08B49490;
    }
L_08B49490:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    goto L_08B494A0;
L_08B494A0:
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(684));
    aot_gpr_31 = (0x08B494B0u);
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(680));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0167_entry, 167u, 434u, 0x08AA1BA4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B494B0u) goto L_08B494B0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B494B0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B494B8;
      }
      goto L_08B494B8;
    }
L_08B494B8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B494EC;
      }
      goto L_08B494C0;
    }
L_08B494C0:
    { const bool branch_taken = ctx.gpr[22] == 0u;
      if (branch_taken) {
          goto L_08B494E4;
      }
      goto L_08B494C8;
    }
L_08B494C8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(92)));
    aot_gpr_5 = (0u | 3u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(24));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_7;
    aot_gpr_31 = (0x08B494E4u);
    aot_gpr_4 = (ctx.gpr[22] + aot_gpr_6);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B494E4u) goto L_08B494E4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B494E4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B496F4;
      }
      goto L_08B494EC;
    }
L_08B494EC:
    aot_gpr_4 = (16256u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    aot_gpr_31 = (0x08B494FCu);
    ctx.fpr[22] = std::bit_cast<float>(aot_gpr_4);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20998, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[28], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B494FCu) goto L_08B494FC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B494FC:
    aot_fpr_12 = ctx.fpr[22] - ctx.fpr[20];
    aot_gpr_4 = (16254u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 47186u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = ctx.fpr[20] + aot_fpr_12;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08B4969C;
      }
      goto L_08B49524;
    }
L_08B49524:
    aot_gpr_31 = (0x08B4952Cu);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[22] + static_cast<std::uint32_t>(86))))));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0186_entry, 186u, 181u, 0x08AECAA8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B4952Cu) goto L_08B4952C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B4952C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08B4969C;
      }
      goto L_08B49534;
    }
L_08B49534:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[22] + static_cast<std::uint32_t>(613))))));
    aot_gpr_4 = (aot_gpr_4 & 1u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08B4969C;
      }
      goto L_08B49544;
    }
L_08B49544:
    aot_gpr_4 = (ctx.gpr[22] + static_cast<std::uint32_t>(16));
    aot_gpr_5 = (ctx.gpr[22] + static_cast<std::uint32_t>(48));
    aot_gpr_6 = (16576u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_6);
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.set_vfpu_scalar_bits_ct<28u>(aot_gpr_6);
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(704));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vec3_ct<0u, 0u, 1u, 3u, 0u>();
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(720));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_31 = (0x08B49588u);
    aot_gpr_5 = (ctx.gpr[22] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0112_entry, 112u, 762u, 0x089C7468u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B49588u) goto L_08B49588;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B49588:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08B4969C;
      }
      goto L_08B49590;
    }
L_08B49590:
    aot_gpr_4 = (0u | 0u);
    aot_fpr_12 = std::bit_cast<float>(0u);
    aot_mem.aot_direct_store8(ctx.gpr[22] + static_cast<std::uint32_t>(535), static_cast<std::uint8_t>(aot_gpr_4));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    aot_gpr_31 = (0x08B495ACu);
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0152_entry, 152u, 537u, 0x08A6669Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B495ACu) goto L_08B495AC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B495AC:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[22] + static_cast<std::uint32_t>(565)));
    ctx.gpr[16] = (0u | 0u);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B49634;
      }
      goto L_08B495C0;
    }
L_08B495C0:
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    aot_gpr_31 = (0x08B495CCu);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08AFEF7C, 190u, 0x08AFEF7Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B495CCu) goto L_08B495CC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B495CC:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
      if (branch_taken) {
          goto L_08B49620;
      }
      goto L_08B495D8;
    }
L_08B495D8:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (0u | 16u);
    aot_gpr_31 = (0x08B495E8u);
    aot_gpr_6 = (ctx.gpr[22] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0178_entry, 178u, 482u, 0x08ACD698u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B495E8u) goto L_08B495E8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B495E8:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08B495F4u);
    aot_gpr_5 = (0u | 5u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08908E78, 65u, 261u, 0x08908E78u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0065_entry, 65u, 261u, 0x08908E78u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B495F4u) goto L_08B495F4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B495F4:
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1336), ctx.gpr[22]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(464)));
    aot_gpr_5 = (16384u << 16u);
    aot_gpr_4 = (aot_gpr_4 | aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(464), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B49620;
      }
      goto L_08B49614;
    }
L_08B49614:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1336)));
    aot_gpr_31 = (0x08B49620u);
    aot_gpr_5 = (ctx.gpr[17] + static_cast<std::uint32_t>(1336));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08A92F78, 163u, 419u, 0x08A92F78u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0163_entry, 163u, 419u, 0x08A92F78u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B49620u) goto L_08B49620;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B49620:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[22] + static_cast<std::uint32_t>(565)));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08B495C0;
      }
      goto L_08B49634;
    }
L_08B49634:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(900)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B4969C;
      }
      goto L_08B49640;
    }
L_08B49640:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(900)));
    aot_gpr_5 = (0u | 16u);
    aot_gpr_31 = (0x08B49650u);
    aot_gpr_6 = (ctx.gpr[22] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0178_entry, 178u, 482u, 0x08ACD698u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B49650u) goto L_08B49650;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B49650:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(900)));
    aot_gpr_31 = (0x08B4965Cu);
    aot_gpr_5 = (0u | 5u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08908E78, 65u, 261u, 0x08908E78u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0065_entry, 65u, 261u, 0x08908E78u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B4965Cu) goto L_08B4965C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B4965C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(900)));
    aot_gpr_5 = (16384u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(1336), ctx.gpr[22]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(900)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(464));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_6 | aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(900)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B4969C;
      }
      goto L_08B4968C;
    }
L_08B4968C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(900)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(1336)));
    aot_gpr_31 = (0x08B4969Cu);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1336));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08A92F78, 163u, 419u, 0x08A92F78u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0163_entry, 163u, 419u, 0x08A92F78u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B4969Cu) goto L_08B4969C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B4969C:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B496F4;
      }
      goto L_08B496A8;
    }
L_08B496A8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08B496D8;
      }
      goto L_08B496B4;
    }
L_08B496B4:
    aot_gpr_31 = (0x08B496BCu);
    aot_gpr_4 = (0u | 408u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B496BCu) goto L_08B496BC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B496BC:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B496F4;
      }
      goto L_08B496C8;
    }
L_08B496C8:
    aot_gpr_31 = (0x08B496D0u);
    aot_gpr_5 = (ctx.gpr[22] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 655u, 0x089F75BCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B496D0u) goto L_08B496D0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B496D0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B496F4;
      }
      goto L_08B496D8;
    }
L_08B496D8:
    aot_gpr_31 = (0x08B496E0u);
    aot_gpr_4 = (0u | 256u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B496E0u) goto L_08B496E0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B496E0:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B496F4;
      }
      goto L_08B496EC;
    }
L_08B496EC:
    aot_gpr_31 = (0x08B496F4u);
    aot_gpr_5 = (ctx.gpr[22] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0168_entry, 168u, 120u, 0x08AA4C80u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B496F4u) goto L_08B496F4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B496F4:
    { std::uint32_t aot_run_words[13]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(1088), aot_run_words);
      ctx.fpr[20] = std::bit_cast<float>(aot_run_words[0]);
      ctx.fpr[22] = std::bit_cast<float>(aot_run_words[1]);
      ctx.fpr[24] = std::bit_cast<float>(aot_run_words[2]);
      ctx.fpr[26] = std::bit_cast<float>(aot_run_words[3]);
      ctx.gpr[16] = aot_run_words[4];
      ctx.gpr[17] = aot_run_words[5];
      ctx.gpr[18] = aot_run_words[6];
      ctx.gpr[19] = aot_run_words[7];
      ctx.gpr[20] = aot_run_words[8];
      ctx.gpr[21] = aot_run_words[9];
      ctx.gpr[22] = aot_run_words[10];
      ctx.gpr[23] = aot_run_words[11];
      aot_gpr_31 = aot_run_words[12];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(1152));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT();
    // PSPRECOMP_V811_LOCAL_LINK: preserve the 256-transfer scheduler boundary, skip outer trampoline.
    if (local_redispatch_rounds < 7u && rt.continue_generated_local_dispatch(ctx)) {
        ++local_redispatch_rounds;
        AOT_REGCACHE_SYNC_IN();
        local_transfers = 0u;
        local_pc = ctx.pc;
        entry_id = 0u;
        goto LOCAL_DISPATCH;
    }
    return;
L_08B49730:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-96));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(532))))));
    aot_gpr_5 = (0u | 2u);
    { const std::uint32_t aot_run_words[4]{std::bit_cast<std::uint32_t>(ctx.fpr[20]), std::bit_cast<std::uint32_t>(ctx.fpr[22]), std::bit_cast<std::uint32_t>(ctx.fpr[24]), std::bit_cast<std::uint32_t>(ctx.fpr[26])};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_run_words); }
    { const std::uint32_t aot_run_words[9]{ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], ctx.gpr[23], ctx.gpr[30], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(52), aot_run_words); }
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_5 = (0u | 3u);
      if (branch_taken) {
          goto L_08B497E8;
      }
      goto L_08B49780;
    }
L_08B49780:
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_4 = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_08B497E8;
      }
      goto L_08B49788;
    }
L_08B49788:
    aot_gpr_5 = (16768u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    ctx.fpr[26] = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_5 = (17056u << 16u);
    ctx.fpr[20] = ctx.fpr[22] - ctx.fpr[26];
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_15 = ctx.fpr[20] / aot_fpr_12;
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_6 = (16880u << 16u);
    aot_gpr_4 = (16840u << 16u);
    aot_gpr_7 = (0u | 49u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_6);
    ctx.fpr[22] = ctx.fpr[22] + ctx.fpr[26];
    ctx.fpr[24] = aot_fpr_14 - ctx.fpr[26];
    ctx.fpr[26] = aot_fpr_14 + ctx.fpr[26];
    aot_fpr_15 = aot_fpr_15 + aot_fpr_13;
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_15 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_15));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_15));
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_7) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 != 0u;
    aot_gpr_5 = (aot_mem.aot_direct_load16(ctx.gpr[28] + static_cast<std::uint32_t>(-25492)));
      if (branch_taken) {
          goto L_08B49800;
      }
      goto L_08B497E0;
    }
L_08B497E0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_4) < 0 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B49808;
      }
      goto L_08B497E8;
    }
L_08B497E8:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(535))))));
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(524)));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    { const bool branch_taken = 0u == 0u;
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[0] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[0] = fs * ft; }
      if (branch_taken) {
          goto L_08B49AE4;
      }
      goto L_08B49800;
    }
L_08B49800:
    aot_gpr_4 = (0u | 49u);
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_4) < 0 ? 1u : 0u);
    goto L_08B49808;
L_08B49808:
    if (aot_gpr_6 != 0u) {
    aot_gpr_4 = (0u | 0u);
        goto L_08B49810;
    }
    goto L_08B49810;
L_08B49810:
    aot_gpr_6 = (0u | 0u);
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_6) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    if (aot_gpr_6 != 0u) {
    ctx.gpr[17] = (aot_gpr_4 | 0u);
        goto L_08B49824;
    }
    goto L_08B49824;
L_08B49824:
    aot_fpr_15 = ctx.fpr[24] / aot_fpr_12;
    aot_gpr_6 = (0u | 49u);
    aot_fpr_15 = aot_fpr_15 + aot_fpr_14;
    aot_fpr_15 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_15));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_15));
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_6) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    if (aot_gpr_6 != 0u) {
    aot_gpr_4 = (0u | 49u);
        goto L_08B49844;
    }
    goto L_08B49844;
L_08B49844:
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_4) < 0 ? 1u : 0u);
    if (aot_gpr_6 != 0u) {
    aot_gpr_4 = (0u | 0u);
        goto L_08B49850;
    }
    goto L_08B49850;
L_08B49850:
    aot_gpr_6 = (0u | 0u);
    ctx.gpr[22] = (0u | 0u);
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_6) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    if (aot_gpr_6 != 0u) {
    ctx.gpr[22] = (aot_gpr_4 | 0u);
        goto L_08B49864;
    }
    goto L_08B49864;
L_08B49864:
    aot_fpr_15 = ctx.fpr[22] / aot_fpr_12;
    aot_gpr_6 = (0u | 49u);
    aot_fpr_13 = aot_fpr_15 + aot_fpr_13;
    aot_fpr_13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_13));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_6) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    if (aot_gpr_6 != 0u) {
    aot_gpr_4 = (0u | 49u);
        goto L_08B49884;
    }
    goto L_08B49884;
L_08B49884:
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_4) < 0 ? 1u : 0u);
    if (aot_gpr_6 != 0u) {
    aot_gpr_4 = (0u | 0u);
        goto L_08B49890;
    }
    goto L_08B49890;
L_08B49890:
    ctx.gpr[18] = (0u | 49u);
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_4) < 49 ? 1u : 0u);
    if (aot_gpr_6 != 0u) {
    ctx.gpr[18] = (aot_gpr_4 | 0u);
        goto L_08B498A0;
    }
    goto L_08B498A0;
L_08B498A0:
    aot_fpr_12 = ctx.fpr[26] / aot_fpr_12;
    aot_gpr_6 = (0u | 49u);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_14;
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_6) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    if (aot_gpr_6 != 0u) {
    aot_gpr_4 = (0u | 49u);
        goto L_08B498C0;
    }
    goto L_08B498C0;
L_08B498C0:
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_4) < 0 ? 1u : 0u);
    if (aot_gpr_6 != 0u) {
    aot_gpr_4 = (0u | 0u);
        goto L_08B498CC;
    }
    goto L_08B498CC;
L_08B498CC:
    ctx.gpr[19] = (0u | 49u);
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_4) < 49 ? 1u : 0u);
    if (aot_gpr_6 != 0u) {
    ctx.gpr[19] = (aot_gpr_4 | 0u);
        goto L_08B498DC;
    }
    goto L_08B498DC;
L_08B498DC:
    aot_gpr_4 = (0u | 65535u);
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B49908;
      }
      goto L_08B498EC;
    }
L_08B498EC:
    aot_mem.aot_direct_store16(ctx.gpr[28] + static_cast<std::uint32_t>(-25492), static_cast<std::uint16_t>(aot_gpr_4));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(535))))));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(524)));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_13)));
    { const bool branch_taken = 0u == 0u;
    { const float fs = aot_fpr_13; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
      if (branch_taken) {
          goto L_08B4992C;
      }
      goto L_08B49908;
    }
L_08B49908:
    aot_gpr_31 = (0x08B49910u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0036_entry, 36u, 274u, 0x088954BCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B49910u) goto L_08B49910;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B49910:
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store16(ctx.gpr[28] + static_cast<std::uint32_t>(-25492), static_cast<std::uint16_t>(aot_gpr_4));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(535))))));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(524)));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_13)));
    { const float fs = aot_fpr_13; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    goto L_08B4992C;
L_08B4992C:
    ctx.gpr[20] = (ctx.gpr[22] | 0u);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_08B49A98;
      }
      goto L_08B4993C;
    }
L_08B4993C:
    aot_gpr_4 = (ctx.gpr[22] << 4u);
    ctx.gpr[22] = (ctx.gpr[22] + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[22]);
    ctx.gpr[30] = (aot_gpr_29 + static_cast<std::uint32_t>(24));
    ctx.gpr[22] = (aot_gpr_4 + ctx.gpr[22]);
    goto L_08B49950;
L_08B49950:
    ctx.gpr[21] = (ctx.gpr[17] | 0u);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (ctx.gpr[17] + ctx.gpr[22]);
      if (branch_taken) {
          goto L_08B49A88;
      }
      goto L_08B49960;
    }
L_08B49960:
    ctx.gpr[23] = (aot_gpr_4 << 6u);
    aot_gpr_4 = (aot_gpr_4 << 3u);
    ctx.gpr[23] = (ctx.gpr[23] - aot_gpr_4);
    goto L_08B4996C;
L_08B4996C:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), ctx.gpr[22]);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(535))))));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25496)));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(524)));
    aot_fpr_15 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    ctx.gpr[22] = (aot_gpr_5 + ctx.gpr[23]);
    aot_gpr_4 = (ctx.gpr[22] + static_cast<std::uint32_t>(28));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    aot_gpr_6 = (ctx.gpr[30] | 0u);
    { const float fs = aot_fpr_15; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_gpr_31 = (0x08B499ACu);
    aot_fpr_15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0207_entry, 207u, 610u, 0x08B42854u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B499ACu) goto L_08B499AC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B499AC:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(535))))));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_fpr_15 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(524)));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_gpr_4 = (ctx.gpr[22] + static_cast<std::uint32_t>(32));
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    aot_gpr_6 = (ctx.gpr[30] | 0u);
    { const float fs = aot_fpr_14; const float ft = aot_fpr_15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_gpr_31 = (0x08B499E0u);
    aot_fpr_15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0207_entry, 207u, 610u, 0x08B42854u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B499E0u) goto L_08B499E0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B499E0:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(535))))));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_gpr_4 = (ctx.gpr[22] + static_cast<std::uint32_t>(8));
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_6 = (ctx.gpr[30] | 0u);
    ctx.fpr[16] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_13)));
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    aot_fpr_15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_gpr_31 = (0x08B49A0Cu);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0207_entry, 207u, 610u, 0x08B42854u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B49A0Cu) goto L_08B49A0C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B49A0C:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(535))))));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(524)));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_15 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_gpr_4 = (ctx.gpr[22] + static_cast<std::uint32_t>(36));
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    aot_gpr_6 = (ctx.gpr[30] | 0u);
    { const float fs = aot_fpr_15; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_gpr_31 = (0x08B49A40u);
    aot_fpr_15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    goto L_08B49B24;
L_08B49A40:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(535))))));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(524)));
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_4 = (ctx.gpr[22] + static_cast<std::uint32_t>(40));
    ctx.fpr[17] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_13)));
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    aot_gpr_6 = (ctx.gpr[30] | 0u);
    aot_fpr_15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_gpr_31 = (0x08B49A74u);
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    goto L_08B49B24;
L_08B49A74:
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(56));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[22] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_08B4996C;
      }
      goto L_08B49A88;
    }
L_08B49A88:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(50));
      if (branch_taken) {
          goto L_08B49950;
      }
      goto L_08B49A98;
    }
L_08B49A98:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(614))))));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(532))))));
    aot_gpr_5 = (aot_gpr_5 | 32u);
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(614), static_cast<std::uint8_t>(aot_gpr_5));
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_08B49ABC;
      }
      goto L_08B49AB0;
    }
L_08B49AB0:
    aot_gpr_5 = (0u | 4u);
    if (aot_gpr_4 != aot_gpr_5) {
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(535))))));
        goto L_08B49AC4;
    }
    goto L_08B49ABC;
L_08B49ABC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B49AE4;
      }
      goto L_08B49AC4;
    }
L_08B49AC4:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(524)));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_13)));
    aot_gpr_4 = (16128u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_13; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    ctx.fpr[0] = ctx.fpr[0] + aot_fpr_12;
    { const float fs = ctx.fpr[0]; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[0] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    goto L_08B49AE4;
L_08B49AE4:
    { std::uint32_t aot_run_words[14]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_run_words);
      ctx.fpr[20] = std::bit_cast<float>(aot_run_words[0]);
      ctx.fpr[22] = std::bit_cast<float>(aot_run_words[1]);
      ctx.fpr[24] = std::bit_cast<float>(aot_run_words[2]);
      ctx.fpr[26] = std::bit_cast<float>(aot_run_words[3]);
      ctx.gpr[16] = aot_run_words[4];
      ctx.gpr[17] = aot_run_words[5];
      ctx.gpr[18] = aot_run_words[6];
      ctx.gpr[19] = aot_run_words[7];
      ctx.gpr[20] = aot_run_words[8];
      ctx.gpr[21] = aot_run_words[9];
      ctx.gpr[22] = aot_run_words[10];
      ctx.gpr[23] = aot_run_words[11];
      ctx.gpr[30] = aot_run_words[12];
      aot_gpr_31 = aot_run_words[13];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT();
    // PSPRECOMP_V811_LOCAL_LINK: preserve the 256-transfer scheduler boundary, skip outer trampoline.
    if (local_redispatch_rounds < 7u && rt.continue_generated_local_dispatch(ctx)) {
        ++local_redispatch_rounds;
        AOT_REGCACHE_SYNC_IN();
        local_transfers = 0u;
        local_pc = ctx.pc;
        entry_id = 0u;
        goto LOCAL_DISPATCH;
    }
    return;
L_08B49B24:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-208));
    aot_gpr_7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(86))))));
    ctx.gpr[8] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    aot_gpr_7 = (aot_gpr_7 << 2u);
    aot_gpr_7 = (ctx.gpr[8] + aot_gpr_7);
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_7 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(180), ctx.gpr[19]);
    ctx.gpr[19] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_7 + static_cast<std::uint32_t>(20)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(160), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(32));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(aot_fpr_14));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(176), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(188), ctx.gpr[21]);
    ctx.gpr[18] = (aot_gpr_5 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[21] = (aot_gpr_6 | 0u);
    { const std::uint32_t aot_run_words[4]{std::bit_cast<std::uint32_t>(ctx.fpr[20]), std::bit_cast<std::uint32_t>(ctx.fpr[22]), std::bit_cast<std::uint32_t>(ctx.fpr[24]), std::bit_cast<std::uint32_t>(ctx.fpr[26])};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(144), aot_run_words); }
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(ctx.fpr[30]), ctx.gpr[16], ctx.gpr[17]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(164), aot_run_words); }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(184), ctx.gpr[20]);
    { const std::uint32_t aot_run_words[4]{ctx.gpr[22], ctx.gpr[23], ctx.gpr[30], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(192), aot_run_words); }
    { const bool branch_taken = ctx.gpr[19] == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(aot_fpr_15));
      if (branch_taken) {
          goto L_08B4A284;
      }
      goto L_08B49BAC;
    }
L_08B49BAC:
    aot_gpr_4 = (ctx.gpr[18] + static_cast<std::uint32_t>(320));
    ctx.fpr[26] = std::bit_cast<float>(0u);
    aot_gpr_5 = (16448u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(112), aot_gpr_4);
    aot_fpr_12 = ctx.fpr[28] + aot_fpr_12;
    aot_gpr_4 = (15820u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    aot_fpr_15 = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[20] = (ctx.gpr[18] + static_cast<std::uint32_t>(48));
    aot_gpr_4 = (16672u << 16u);
    ctx.gpr[30] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
    ctx.fpr[30] = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[23] = (0u | 6u);
    ctx.gpr[22] = (0u | 1u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_08B49BEC;
L_08B49BEC:
    ctx.gpr[17] = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[17] + static_cast<std::uint32_t>(84)));
    aot_gpr_5 = (aot_mem.aot_direct_load16(ctx.gpr[28] + static_cast<std::uint32_t>(-25492)));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    ctx.gpr[19] = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08B4A27C;
      }
      goto L_08B49C00;
    }
L_08B49C00:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    aot_gpr_4 = (aot_gpr_4 & 512u);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B4A27C;
      }
      goto L_08B49C18;
    }
L_08B49C18:
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[28] + static_cast<std::uint32_t>(-25492)));
    aot_mem.aot_direct_store16(ctx.gpr[17] + static_cast<std::uint32_t>(84), static_cast<std::uint16_t>(aot_gpr_4));
    aot_gpr_4 = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(32)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(132)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08B4A27C;
      }
      goto L_08B49C48;
    }
L_08B49C48:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(32)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(124)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08B4A27C;
      }
      goto L_08B49C60;
    }
L_08B49C60:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(36)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(128)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08B4A27C;
      }
      goto L_08B49C78;
    }
L_08B49C78:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(36)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(120)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08B4A27C;
      }
      goto L_08B49C90;
    }
L_08B49C90:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(40)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    aot_fpr_12 = aot_fpr_12 - aot_fpr_13;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < ctx.fpr[26])) ? 0x00800000u : 0u);
    if (((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12) ^ 0x80000000u);
        goto L_08B49CAC;
    }
    goto L_08B49CAC;
L_08B49CAC:
    aot_gpr_5 = (16512u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08B4A27C;
      }
      goto L_08B49CC4;
    }
L_08B49CC4:
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vec3_ct<0u, 0u, 1u, 3u, 1u>();
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_29 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr_29 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    aot_gpr_4 = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[22] = std::bit_cast<float>(aot_gpr_4);
    { const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(112)));
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    aot_gpr_4 = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[20] = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[28] < ctx.fpr[22])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (16968u << 16u);
      if (branch_taken) {
          goto L_08B4A27C;
      }
      goto L_08B49D1C;
    }
L_08B49D1C:
    ctx.fpr[24] = ctx.fpr[22] - ctx.fpr[28];
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = ctx.fpr[20]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[24] < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08B4A27C;
      }
      goto L_08B49D3C;
    }
L_08B49D3C:
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr_29 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    aot_gpr_4 = (ctx.vfpu_scalar_bits_ct<28u>());
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 < ctx.fpr[26])) ? 0x00800000u : 0u);
    if (((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_13) ^ 0x80000000u);
        goto L_08B49D60;
    }
    goto L_08B49D60;
L_08B49D60:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[18] + static_cast<std::uint32_t>(86))))));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(20)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(852)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(32));
    { const bool branch_taken = aot_gpr_5 != ctx.gpr[23];
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08B49D98;
      }
      goto L_08B49D88;
    }
L_08B49D88:
    aot_gpr_4 = (16332u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    ctx.fpr[16] = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_14; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    goto L_08B49D98;
L_08B49D98:
    aot_gpr_4 = (16128u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(aot_gpr_4);
    ctx.fpr[16] = aot_fpr_14 + ctx.fpr[16];
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 <= ctx.fpr[16])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08B4A27C;
      }
      goto L_08B49DB4;
    }
L_08B49DB4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    aot_gpr_4 = (aot_gpr_4 & 14u);
    aot_gpr_4 = (aot_gpr_4 ^ 6u);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B4A1B8;
      }
      goto L_08B49DD0;
    }
L_08B49DD0:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    aot_gpr_5 = (0u | 31u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_08B4A1AC;
      }
      goto L_08B49DE4;
    }
L_08B49DE4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    aot_gpr_5 = (0u | 48u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_08B4A1AC;
      }
      goto L_08B49DF4;
    }
L_08B49DF4:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[24] < aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08B49F58;
      }
      goto L_08B49E04;
    }
L_08B49E04:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[18] + static_cast<std::uint32_t>(86))))));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-943));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08B49E8C;
      }
      goto L_08B49E14;
    }
L_08B49E14:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(140), ctx.gpr[16]);
    aot_gpr_31 = (0x08B49E20u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B61B60, 215u, 341u, 0x08B61B60u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], ctx.gpr[3], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_29, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 341u, 0x08B61B60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B49E20u) goto L_08B49E20;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B49E20:
    ctx.gpr[17] = (ctx.gpr[3] | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_gpr_31 = (0x08B49E30u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B61B60, 215u, 341u, 0x08B61B60u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], ctx.gpr[3], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_29, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 341u, 0x08B61B60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B49E30u) goto L_08B49E30;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B49E30:
    aot_gpr_7 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5564)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5560)));
    aot_gpr_5 = (ctx.gpr[3] | 0u);
    aot_gpr_31 = (0x08B49E44u);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B61FD0, 215u, 400u, 0x08B61FD0u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], ctx.gpr[3], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[8], ctx.gpr[9], ctx.gpr[10], ctx.gpr[16], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 400u, 0x08B61FD0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B49E44u) goto L_08B49E44;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B49E44:
    aot_gpr_7 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5572)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5568)));
    aot_gpr_5 = (ctx.gpr[3] | 0u);
    aot_gpr_31 = (0x08B49E58u);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B61FD0, 215u, 400u, 0x08B61FD0u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], ctx.gpr[3], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[8], ctx.gpr[9], ctx.gpr[10], ctx.gpr[16], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 400u, 0x08B61FD0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B49E58u) goto L_08B49E58;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B49E58:
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_7 = (ctx.gpr[3] | 0u);
    aot_gpr_31 = (0x08B49E6Cu);
    aot_gpr_6 = (ctx.gpr[2] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B6256C, 215u, 478u, 0x08B6256Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], ctx.gpr[3], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[8], ctx.gpr[9], ctx.gpr[10], ctx.gpr[16], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 478u, 0x08B6256Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B49E6Cu) goto L_08B49E6C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B49E6C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(140)));
      if (branch_taken) {
          goto L_08B4A1AC;
      }
      goto L_08B49E74;
    }
L_08B49E74:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08B49E84u);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0070_entry, 70u, 480u, 0x0891E8B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B49E84u) goto L_08B49E84;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B49E84:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B4A1AC;
      }
      goto L_08B49E8C;
    }
L_08B49E8C:
    aot_gpr_4 = (16025u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 39322u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[20] <= aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08B49EEC;
      }
      goto L_08B49EA8;
    }
L_08B49EA8:
    aot_fpr_12 = aot_fpr_14 + aot_fpr_15;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 <= aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08B49ED4;
      }
      goto L_08B49EBC;
    }
L_08B49EBC:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08B49ECCu);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0070_entry, 70u, 550u, 0x0891ECB8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B49ECCu) goto L_08B49ECC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B49ECC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B4A1AC;
      }
      goto L_08B49ED4;
    }
L_08B49ED4:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08B49EE4u);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0070_entry, 70u, 480u, 0x0891E8B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B49EE4u) goto L_08B49EE4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B49EE4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B4A1AC;
      }
      goto L_08B49EEC;
    }
L_08B49EEC:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[20] <= aot_fpr_15)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08B4A1AC;
      }
      goto L_08B49EFC;
    }
L_08B49EFC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    aot_gpr_5 = (0u | 17u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_08B4A1AC;
      }
      goto L_08B49F0C;
    }
L_08B49F0C:
    aot_gpr_4 = (48896u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_14 + aot_fpr_12;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 <= aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08B49F40;
      }
      goto L_08B49F28;
    }
L_08B49F28:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08B49F38u);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0070_entry, 70u, 550u, 0x0891ECB8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B49F38u) goto L_08B49F38;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B49F38:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B4A1AC;
      }
      goto L_08B49F40;
    }
L_08B49F40:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08B49F50u);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0070_entry, 70u, 480u, 0x0891E8B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B49F50u) goto L_08B49F50;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B49F50:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B4A1AC;
      }
      goto L_08B49F58;
    }
L_08B49F58:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(72)));
    aot_gpr_4 = (aot_gpr_4 & 496u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08B4A064;
      }
      goto L_08B49F68;
    }
L_08B49F68:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    aot_gpr_5 = (0u | 9u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_08B4A064;
      }
      goto L_08B49F78;
    }
L_08B49F78:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2276)));
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[22];
      if (branch_taken) {
          goto L_08B4A064;
      }
      goto L_08B49F84;
    }
L_08B49F84:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_fpr_15 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_fpr_12 = aot_fpr_14 - aot_fpr_12;
    aot_gpr_31 = (0x08B49FA4u);
    aot_fpr_13 = aot_fpr_13 - aot_fpr_15;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B49FA4u) goto L_08B49FA4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B49FA4:
    aot_gpr_31 = (0x08B49FACu);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0162_entry, 162u, 580u, 0x08A8F0B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B49FACu) goto L_08B49FAC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B49FAC:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2256)));
    aot_gpr_31 = (0x08B49FB8u);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0162_entry, 162u, 580u, 0x08A8F0B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B49FB8u) goto L_08B49FB8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B49FB8:
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2256), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2256)));
    aot_fpr_12 = ctx.fpr[20] - aot_fpr_12;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < ctx.fpr[26])) ? 0x00800000u : 0u);
    if (((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12) ^ 0x80000000u);
        goto L_08B49FD4;
    }
    goto L_08B49FD4;
L_08B49FD4:
    aot_gpr_4 = (16457u << 16u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_gpr_4 | 4059u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 <= aot_fpr_14)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08B4A004;
      }
      goto L_08B49FF4;
    }
L_08B49FF4:
    aot_gpr_4 = (16585u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 4059u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_13 = aot_fpr_13 - aot_fpr_12;
    goto L_08B4A004;
L_08B4A004:
    aot_gpr_4 = (16329u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 4059u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 < aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08B4A02C;
      }
      goto L_08B4A020;
    }
L_08B4A020:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(700)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B4A05C;
      }
      goto L_08B4A02C;
    }
L_08B4A02C:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08B4A03Cu);
    aot_gpr_6 = (0u | 2000u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 803u, 0x0890B27Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B4A03Cu) goto L_08B4A03C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B4A03C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    aot_gpr_5 = (49152u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(456), aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08B4A05Cu);
    aot_gpr_5 = (0u | 4u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890BE50, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0065_entry, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B4A05Cu) goto L_08B4A05C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B4A05C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B4A1AC;
      }
      goto L_08B4A064;
    }
L_08B4A064:
    aot_gpr_31 = (0x08B4A06Cu);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890D44C, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B4A06Cu) goto L_08B4A06C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B4A06C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08B4A1AC;
      }
      goto L_08B4A074;
    }
L_08B4A074:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(136)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[22] < aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08B4A1AC;
      }
      goto L_08B4A088;
    }
L_08B4A088:
    aot_gpr_31 = (0x08B4A090u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 620u, 0x08906DE4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B4A090u) goto L_08B4A090;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B4A090:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08B4A1AC;
      }
      goto L_08B4A098;
    }
L_08B4A098:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3156)));
    aot_gpr_4 = (16256u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08B4A1AC;
      }
      goto L_08B4A0B4;
    }
L_08B4A0B4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    aot_gpr_4 = (aot_gpr_4 & 16u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08B4A1AC;
      }
      goto L_08B4A0C4;
    }
L_08B4A0C4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1736)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_gpr_4 = (aot_gpr_4 < aot_gpr_5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B4A1AC;
      }
      goto L_08B4A0D8;
    }
L_08B4A0D8:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08B4A0E4u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0080_entry, 80u, 668u, 0x0894751Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B4A0E4u) goto L_08B4A0E4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B4A0E4:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_6 = (0u | 1u);
    aot_gpr_7 = (0u | 0u);
    aot_gpr_31 = (0x08B4A0FCu);
    ctx.gpr[8] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 442u, 0x08909A64u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B4A0FCu) goto L_08B4A0FC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B4A0FC:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08B4A108u);
    aot_gpr_5 = (0u | 1500u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 326u, 0x089092DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B4A108u) goto L_08B4A108;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B4A108:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1929))))));
    aot_gpr_5 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 - aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[17] + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1396));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B4A1A0;
      }
      goto L_08B4A12C;
    }
L_08B4A12C:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1929))))));
    aot_gpr_5 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 - aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[17] + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1396));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[23];
      if (branch_taken) {
          goto L_08B4A1A0;
      }
      goto L_08B4A150;
    }
L_08B4A150:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1929))))));
    aot_gpr_5 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 - aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[17] + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1396));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (0u | 19u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_08B4A1A0;
      }
      goto L_08B4A178;
    }
L_08B4A178:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1929))))));
    aot_gpr_5 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 - aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[17] + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1396));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (0u | 25u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08B4A1AC;
      }
      goto L_08B4A1A0;
    }
L_08B4A1A0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(464)));
    aot_gpr_4 = (aot_gpr_4 | 256u);
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(464), aot_gpr_4);
    goto L_08B4A1AC;
L_08B4A1AC:
    aot_gpr_4 = (15820u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    aot_fpr_15 = std::bit_cast<float>(aot_gpr_4);
    goto L_08B4A1B8;
L_08B4A1B8:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
      if (branch_taken) {
          goto L_08B4A1CC;
      }
      goto L_08B4A1C4;
    }
L_08B4A1C4:
    aot_gpr_4 = (16752u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    goto L_08B4A1CC;
L_08B4A1CC:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[24] < aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08B4A27C;
      }
      goto L_08B4A1DC;
    }
L_08B4A1DC:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[18] + static_cast<std::uint32_t>(532))))));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B4A204;
      }
      goto L_08B4A1E8;
    }
L_08B4A1E8:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[18] + static_cast<std::uint32_t>(532))))));
    aot_gpr_5 = (0u | 4u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_08B4A204;
      }
      goto L_08B4A1F8;
    }
L_08B4A1F8:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[18] + static_cast<std::uint32_t>(532))))));
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[22];
      if (branch_taken) {
          goto L_08B4A27C;
      }
      goto L_08B4A204;
    }
L_08B4A204:
    aot_gpr_4 = (16256u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = ctx.fpr[24] - aot_fpr_12;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[26] <= aot_fpr_12)) ? 0x00800000u : 0u);
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
        goto L_08B4A220;
    }
    goto L_08B4A220;
L_08B4A220:
    aot_fpr_12 = aot_fpr_12 / ctx.fpr[30];
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(116)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_14 < aot_fpr_12)) ? 0x00800000u : 0u);
    if (((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
        goto L_08B4A240;
    }
    goto L_08B4A240;
L_08B4A240:
    aot_mem.aot_direct_store32(ctx.gpr[21] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[18] + static_cast<std::uint32_t>(538))))));
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-3));
    aot_gpr_6 = (16384u << 16u);
    aot_gpr_4 = (aot_gpr_5 & aot_gpr_4);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_6);
    aot_gpr_4 = (aot_gpr_4 | 2u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[24] < aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_mem.aot_direct_store8(ctx.gpr[18] + static_cast<std::uint32_t>(538), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_08B4A27C;
      }
      goto L_08B4A26C;
    }
L_08B4A26C:
    aot_mem.aot_direct_store8(ctx.gpr[18] + static_cast<std::uint32_t>(534), static_cast<std::uint8_t>(ctx.gpr[22]));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(3000));
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(512), aot_gpr_4);
    goto L_08B4A27C;
L_08B4A27C:
    { const bool branch_taken = ctx.gpr[19] != 0u;
      if (branch_taken) {
          goto L_08B49BEC;
      }
      goto L_08B4A284;
    }
L_08B4A284:
    { std::uint32_t aot_run_words[16]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(144), aot_run_words);
      ctx.fpr[20] = std::bit_cast<float>(aot_run_words[0]);
      ctx.fpr[22] = std::bit_cast<float>(aot_run_words[1]);
      ctx.fpr[24] = std::bit_cast<float>(aot_run_words[2]);
      ctx.fpr[26] = std::bit_cast<float>(aot_run_words[3]);
      ctx.fpr[28] = std::bit_cast<float>(aot_run_words[4]);
      ctx.fpr[30] = std::bit_cast<float>(aot_run_words[5]);
      ctx.gpr[16] = aot_run_words[6];
      ctx.gpr[17] = aot_run_words[7];
      ctx.gpr[18] = aot_run_words[8];
      ctx.gpr[19] = aot_run_words[9];
      ctx.gpr[20] = aot_run_words[10];
      ctx.gpr[21] = aot_run_words[11];
      ctx.gpr[22] = aot_run_words[12];
      ctx.gpr[23] = aot_run_words[13];
      ctx.gpr[30] = aot_run_words[14];
      aot_gpr_31 = aot_run_words[15];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(208));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT();
    // PSPRECOMP_V811_LOCAL_LINK: preserve the 256-transfer scheduler boundary, skip outer trampoline.
    if (local_redispatch_rounds < 7u && rt.continue_generated_local_dispatch(ctx)) {
        ++local_redispatch_rounds;
        AOT_REGCACHE_SYNC_IN();
        local_transfers = 0u;
        local_pc = ctx.pc;
        entry_id = 0u;
        goto LOCAL_DISPATCH;
    }
    return;
L_08B4A2CC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-128));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(16)));
    { const float fs = aot_fpr_13; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_15 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_15 = fs * ft; }
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(20)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(aot_fpr_13));
    { const float fs = aot_fpr_14; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = aot_fpr_15 + aot_fpr_13;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(aot_fpr_14));
    { const std::uint32_t aot_run_words[10]{std::bit_cast<std::uint32_t>(ctx.fpr[22]), std::bit_cast<std::uint32_t>(ctx.fpr[24]), std::bit_cast<std::uint32_t>(ctx.fpr[26]), std::bit_cast<std::uint32_t>(ctx.fpr[28]), ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(80), aot_run_words); }
    aot_fpr_12 = std::sqrt(aot_fpr_12);
    ctx.fpr[22] = std::bit_cast<float>(0u);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    ctx.gpr[17] = (aot_gpr_5 | 0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_12) || std::isnan(ctx.fpr[22])) && aot_fpr_12 == ctx.fpr[22])) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    ctx.gpr[18] = (aot_gpr_6 | 0u);
      if (branch_taken) {
          goto L_08B4A358;
      }
      goto L_08B4A33C;
    }
L_08B4A33C:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(32)));
    aot_fpr_13 = aot_fpr_13 / aot_fpr_12;
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(36)));
    aot_fpr_12 = aot_fpr_14 / aot_fpr_12;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(aot_fpr_13));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_08B4A364;
      }
      goto L_08B4A358;
    }
L_08B4A358:
    aot_gpr_4 = (16256u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_08B4A364;
L_08B4A364:
    aot_gpr_4 = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    aot_gpr_5 = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_fpr_15 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    aot_fpr_12 = aot_fpr_12 - aot_fpr_13;
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(32)));
    aot_fpr_14 = aot_fpr_14 - aot_fpr_15;
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(36)));
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    { const float fs = aot_fpr_14; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_fpr_12 = aot_fpr_12 + aot_fpr_14;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < ctx.fpr[22])) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08B4A438;
      }
      goto L_08B4A3A8;
    }
L_08B4A3A8:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(320)));
    aot_gpr_4 = (17008u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = ctx.fpr[24]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(324)));
    { const float fs = aot_fpr_13; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(32)));
    { const float fs = aot_fpr_13; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(36)));
    { const float fs = aot_fpr_14; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_fpr_15 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_15), std::bit_cast<std::uint32_t>(ctx.fpr[16]), std::bit_cast<std::uint32_t>(ctx.fpr[22])};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    { const std::uint32_t vfpu_address = aot_gpr_29 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[19] = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_fpr_15 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(48)));
    { const float fs = aot_fpr_15; const float ft = aot_fpr_15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_15 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_15 = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(52)));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    aot_fpr_15 = aot_fpr_15 + ctx.fpr[16];
    aot_fpr_15 = std::sqrt(aot_fpr_15);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_15) || std::isnan(ctx.fpr[22])) && aot_fpr_15 == ctx.fpr[22])) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08B4A440;
      }
      goto L_08B4A41C;
    }
L_08B4A41C:
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(48)));
    ctx.fpr[16] = ctx.fpr[16] / aot_fpr_15;
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(52)));
    aot_fpr_15 = ctx.fpr[17] / aot_fpr_15;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(aot_fpr_15));
      if (branch_taken) {
          goto L_08B4A44C;
      }
      goto L_08B4A438;
    }
L_08B4A438:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B4A678;
      }
      goto L_08B4A440;
    }
L_08B4A440:
    aot_gpr_4 = (16256u << 16u);
    aot_fpr_15 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(aot_fpr_15));
    goto L_08B4A44C;
L_08B4A44C:
    ctx.fpr[26] = ctx.fpr[24] - aot_fpr_13;
    ctx.gpr[20] = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    ctx.fpr[28] = aot_fpr_12 - aot_fpr_14;
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_6 = (ctx.gpr[20] | 0u);
    aot_gpr_7 = (ctx.gpr[19] | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[8] = (0u | 0u);
    aot_gpr_31 = (0x08B4A478u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    goto L_08B4A6AC;
L_08B4A478:
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]) ^ 0x80000000u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]) ^ 0x80000000u);
    aot_gpr_6 = (ctx.gpr[19] | 0u);
    aot_gpr_7 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x08B4A49Cu);
    ctx.gpr[8] = (0u | 1u);
    goto L_08B4A6AC;
L_08B4A49C:
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[24] < aot_fpr_12)) ? 0x00800000u : 0u);
    if (((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
        goto L_08B4A4B0;
    }
    goto L_08B4A4B0;
L_08B4A4B0:
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 < ctx.fpr[22])) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (16320u << 16u);
      if (branch_taken) {
          goto L_08B4A534;
      }
      goto L_08B4A4C4;
    }
L_08B4A4C4:
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_14)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (15948u << 16u);
      if (branch_taken) {
          goto L_08B4A534;
      }
      goto L_08B4A4D8;
    }
L_08B4A4D8:
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_13 = aot_fpr_12 - aot_fpr_13;
    aot_gpr_4 = (16196u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 60495u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_13; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[22] <= aot_fpr_13)) ? 0x00800000u : 0u);
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
        goto L_08B4A504;
    }
    goto L_08B4A504;
L_08B4A504:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(538))))));
    { const float fs = aot_fpr_13; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-2));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 | 1u);
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(538), static_cast<std::uint8_t>(aot_gpr_4));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_14 < aot_fpr_12)) ? 0x00800000u : 0u);
    if (((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
        goto L_08B4A530;
    }
    goto L_08B4A530;
L_08B4A530:
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_08B4A534;
L_08B4A534:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08B4A558;
      }
      goto L_08B4A540;
    }
L_08B4A540:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 < ctx.fpr[22])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (16128u << 16u);
      if (branch_taken) {
          goto L_08B4A560;
      }
      goto L_08B4A550;
    }
L_08B4A550:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B4A678;
      }
      goto L_08B4A558;
    }
L_08B4A558:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B4A678;
      }
      goto L_08B4A560;
    }
L_08B4A560:
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 < aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08B4A678;
      }
      goto L_08B4A574;
    }
L_08B4A574:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    aot_gpr_4 = (aot_gpr_4 & 14u);
    aot_gpr_4 = (aot_gpr_4 ^ 4u);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B4A678;
      }
      goto L_08B4A590;
    }
L_08B4A590:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(508)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_gpr_4 = (aot_gpr_5 - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(15001) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08B4A678;
      }
      goto L_08B4A5A8;
    }
L_08B4A5A8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(508)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_gpr_4 = (aot_gpr_5 - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(15001) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08B4A678;
      }
      goto L_08B4A5C0;
    }
L_08B4A5C0:
    aot_gpr_5 = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_fpr_15 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    { const float fs = aot_fpr_14; const float ft = aot_fpr_15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_gpr_31 = (0x08B4A5E4u);
    ctx.fpr[22] = ctx.fpr[22] + aot_fpr_14;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B4A5E4u) goto L_08B4A5E4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B4A5E4:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[2];
      if (branch_taken) {
          goto L_08B4A678;
      }
      goto L_08B4A5EC;
    }
L_08B4A5EC:
    aot_gpr_4 = (48896u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[22] < aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08B4A678;
      }
      goto L_08B4A604;
    }
L_08B4A604:
    aot_gpr_4 = (ctx.gpr[17] < ctx.gpr[16] ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (15948u << 16u);
      if (branch_taken) {
          goto L_08B4A678;
      }
      goto L_08B4A610;
    }
L_08B4A610:
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[20]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 <= ctx.fpr[20])) ? 0x00800000u : 0u);
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
        goto L_08B4A630;
    }
    goto L_08B4A630;
L_08B4A630:
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    aot_gpr_5 = (0u | 32u);
    aot_gpr_4 = (aot_gpr_4 & 496u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08B4A664;
      }
      goto L_08B4A648;
    }
L_08B4A648:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-497));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 | 48u);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(72), aot_gpr_4);
    aot_gpr_31 = (0x08B4A664u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0207_entry, 207u, 365u, 0x08B41608u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B4A664u) goto L_08B4A664;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B4A664:
    aot_gpr_4 = (0u | 2u);
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(532), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1000));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(512), aot_gpr_4);
    goto L_08B4A678;
L_08B4A678:
    { std::uint32_t aot_run_words[11]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(76), aot_run_words);
      ctx.fpr[20] = std::bit_cast<float>(aot_run_words[0]);
      ctx.fpr[22] = std::bit_cast<float>(aot_run_words[1]);
      ctx.fpr[24] = std::bit_cast<float>(aot_run_words[2]);
      ctx.fpr[26] = std::bit_cast<float>(aot_run_words[3]);
      ctx.fpr[28] = std::bit_cast<float>(aot_run_words[4]);
      ctx.gpr[16] = aot_run_words[5];
      ctx.gpr[17] = aot_run_words[6];
      ctx.gpr[18] = aot_run_words[7];
      ctx.gpr[19] = aot_run_words[8];
      ctx.gpr[20] = aot_run_words[9];
      aot_gpr_31 = aot_run_words[10];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT();
    // PSPRECOMP_V811_LOCAL_LINK: preserve the 256-transfer scheduler boundary, skip outer trampoline.
    if (local_redispatch_rounds < 7u && rt.continue_generated_local_dispatch(ctx)) {
        ++local_redispatch_rounds;
        AOT_REGCACHE_SYNC_IN();
        local_transfers = 0u;
        local_pc = ctx.pc;
        entry_id = 0u;
        goto LOCAL_DISPATCH;
    }
    return;
L_08B4A6AC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(86))))));
    ctx.fpr[3] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[9] = (aot_gpr_4 + static_cast<std::uint32_t>(48));
    ctx.fpr[1] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_13));
    ctx.gpr[10] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(48));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    ctx.gpr[11] = (ctx.gpr[8] << 2u);
    aot_fpr_12 = aot_fpr_12 - aot_fpr_13;
    ctx.gpr[11] = (ctx.gpr[10] + ctx.gpr[11]);
    ctx.gpr[11] = (aot_mem.aot_direct_load32(ctx.gpr[11] + static_cast<std::uint32_t>(0)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[9] + static_cast<std::uint32_t>(4)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (ctx.gpr[8] << 2u);
    aot_fpr_13 = aot_fpr_14 - aot_fpr_13;
    ctx.gpr[9] = (aot_mem.aot_direct_load32(ctx.gpr[11] + static_cast<std::uint32_t>(20)));
    aot_gpr_5 = (ctx.gpr[10] + aot_gpr_5);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(32));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[9] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (ctx.gpr[8] << 2u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(20)));
    ctx.gpr[8] = (ctx.gpr[10] + ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_direct_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(32));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(86))))));
    aot_fpr_15 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[8] + static_cast<std::uint32_t>(20)));
    ctx.gpr[8] = (aot_gpr_4 << 2u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(16));
    ctx.gpr[8] = (ctx.gpr[10] + ctx.gpr[8]);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_gpr_4 << 2u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(20)));
    ctx.gpr[8] = (ctx.gpr[10] + ctx.gpr[8]);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(32));
    ctx.gpr[8] = (aot_mem.aot_direct_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[8] + static_cast<std::uint32_t>(20)));
    aot_gpr_4 = (ctx.gpr[10] + aot_gpr_4);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(32));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(20)));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]) ^ 0x80000000u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(16));
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    ctx.fpr[5] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(4)));
    ctx.fpr[6] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[5]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[7] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[7] = fs * ft; }
    aot_gpr_5 = (16256u << 16u);
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[6]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[8] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[8] = fs * ft; }
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[6]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[10] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[10] = fs * ft; }
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[5]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[9] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[9] = fs * ft; }
    aot_gpr_4 = (0u | 0u);
    ctx.fpr[0] = std::bit_cast<float>(aot_gpr_5);
    ctx.fpr[7] = ctx.fpr[7] - ctx.fpr[8];
    aot_gpr_5 = (16384u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[10] = ctx.fpr[10] + ctx.fpr[9];
    ctx.fpr[1] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[19]) ^ 0x80000000u);
    ctx.fpr[3] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    ctx.fpr[8] = std::bit_cast<float>(aot_gpr_5);
    ctx.fpr[4] = std::bit_cast<float>(0u);
    { const float fs = aot_fpr_15; const float ft = ctx.fpr[8]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[8] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[8] = fs * ft; }
    ctx.fpr[9] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_15) ^ 0x80000000u);
    ctx.fpr[11] = ctx.fpr[16] + aot_fpr_14;
    ctx.fpr[21] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]) ^ 0x80000000u);
    goto L_08B4A7D0;
L_08B4A7D0:
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B4A814;
      }
      goto L_08B4A7DC;
    }
L_08B4A7DC:
    if (static_cast<std::int32_t>(aot_gpr_4) < 0) {
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[5]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[27] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[27] = fs * ft; }
        goto L_08B4A88C;
    }
    goto L_08B4A7E4;
L_08B4A7E4:
    ctx.fpr[25] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_7 + static_cast<std::uint32_t>(0)));
    ctx.fpr[3] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_7 + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[25]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[1] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[23] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[23] = fs * ft; }
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[25]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[25] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[25] = fs * ft; }
    ctx.fpr[1] = aot_fpr_12 + ctx.fpr[1];
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[3] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[3] = fs * ft; }
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) > 0;
    ctx.fpr[23] = aot_fpr_13 + ctx.fpr[23];
      if (branch_taken) {
          goto L_08B4A82C;
      }
      goto L_08B4A808;
    }
L_08B4A808:
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[3];
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[3] = ctx.fpr[23] - ctx.fpr[25];
      if (branch_taken) {
          goto L_08B4A888;
      }
      goto L_08B4A814;
    }
L_08B4A814:
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B4A838;
      }
      goto L_08B4A81C;
    }
L_08B4A81C:
    if (aot_gpr_5 != 0u) {
    ctx.fpr[1] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_7 + static_cast<std::uint32_t>(0)));
        goto L_08B4A864;
    }
    goto L_08B4A824;
L_08B4A824:
    { const bool branch_taken = 0u == 0u;
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[5]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[27] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[27] = fs * ft; }
      if (branch_taken) {
          goto L_08B4A88C;
      }
      goto L_08B4A82C;
    }
L_08B4A82C:
    ctx.fpr[1] = ctx.fpr[1] - ctx.fpr[3];
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[3] = ctx.fpr[23] + ctx.fpr[25];
      if (branch_taken) {
          goto L_08B4A888;
      }
      goto L_08B4A838;
    }
L_08B4A838:
    ctx.fpr[1] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_7 + static_cast<std::uint32_t>(0)));
    ctx.fpr[3] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_7 + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[19]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[23] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[23] = fs * ft; }
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[25] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[25] = fs * ft; }
    { const float fs = ctx.fpr[19]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[27] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[27] = fs * ft; }
    ctx.fpr[1] = aot_fpr_12 - ctx.fpr[23];
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[3] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[3] = fs * ft; }
    ctx.fpr[27] = aot_fpr_13 - ctx.fpr[27];
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[3];
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[3] = ctx.fpr[27] - ctx.fpr[25];
      if (branch_taken) {
          goto L_08B4A888;
      }
      goto L_08B4A864;
    }
L_08B4A864:
    ctx.fpr[3] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_7 + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[19]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[23] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[23] = fs * ft; }
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[25] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[25] = fs * ft; }
    { const float fs = ctx.fpr[19]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[27] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[27] = fs * ft; }
    ctx.fpr[1] = aot_fpr_12 - ctx.fpr[23];
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[3] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[3] = fs * ft; }
    ctx.fpr[27] = aot_fpr_13 - ctx.fpr[27];
    ctx.fpr[1] = ctx.fpr[1] - ctx.fpr[3];
    ctx.fpr[3] = ctx.fpr[27] + ctx.fpr[25];
    goto L_08B4A888;
L_08B4A888:
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[5]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[27] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[27] = fs * ft; }
    goto L_08B4A88C;
L_08B4A88C:
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[6]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[25] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[25] = fs * ft; }
    ctx.fpr[23] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[4]));
    ctx.fpr[27] = ctx.fpr[27] - ctx.fpr[25];
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[27] <= aot_fpr_15)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    ctx.fpr[25] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08B4A900;
      }
      goto L_08B4A8A8;
    }
L_08B4A8A8:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[7] < ctx.fpr[4])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08B4A8F8;
      }
      goto L_08B4A8B8;
    }
L_08B4A8B8:
    ctx.fpr[23] = aot_fpr_15 - ctx.fpr[27];
    ctx.fpr[23] = ctx.fpr[23] / ctx.fpr[7];
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[23] < ctx.fpr[0])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08B4A8F0;
      }
      goto L_08B4A8D0;
    }
L_08B4A8D0:
    ctx.fpr[27] = ctx.fpr[8] / ctx.fpr[7];
    ctx.fpr[27] = ctx.fpr[23] - ctx.fpr[27];
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[27] < ctx.fpr[0])) ? 0x00800000u : 0u);
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[6]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[31] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[31] = fs * ft; }
        goto L_08B4A9AC;
    }
    goto L_08B4A8E8;
L_08B4A8E8:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[25] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[27]));
      if (branch_taken) {
          goto L_08B4A9A8;
      }
      goto L_08B4A8F0;
    }
L_08B4A8F0:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[23] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08B4A9A8;
      }
      goto L_08B4A8F8;
    }
L_08B4A8F8:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[23] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08B4A9A8;
      }
      goto L_08B4A900;
    }
L_08B4A900:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[27] < ctx.fpr[9])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08B4A96C;
      }
      goto L_08B4A910;
    }
L_08B4A910:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[7] <= ctx.fpr[4])) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08B4A964;
      }
      goto L_08B4A920;
    }
L_08B4A920:
    ctx.fpr[23] = ctx.fpr[27] + aot_fpr_15;
    ctx.fpr[23] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[23]) ^ 0x80000000u);
    ctx.fpr[23] = ctx.fpr[23] / ctx.fpr[7];
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[23] < ctx.fpr[0])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08B4A95C;
      }
      goto L_08B4A93C;
    }
L_08B4A93C:
    ctx.fpr[27] = ctx.fpr[8] / ctx.fpr[7];
    ctx.fpr[27] = ctx.fpr[23] + ctx.fpr[27];
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[27] < ctx.fpr[0])) ? 0x00800000u : 0u);
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[6]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[31] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[31] = fs * ft; }
        goto L_08B4A9AC;
    }
    goto L_08B4A954;
L_08B4A954:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[25] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[27]));
      if (branch_taken) {
          goto L_08B4A9A8;
      }
      goto L_08B4A95C;
    }
L_08B4A95C:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[23] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08B4A9A8;
      }
      goto L_08B4A964;
    }
L_08B4A964:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[23] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08B4A9A8;
      }
      goto L_08B4A96C;
    }
L_08B4A96C:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[7] <= ctx.fpr[4])) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08B4A98C;
      }
      goto L_08B4A97C;
    }
L_08B4A97C:
    ctx.fpr[25] = aot_fpr_15 - ctx.fpr[27];
    ctx.fpr[25] = ctx.fpr[25] / ctx.fpr[7];
    { const bool branch_taken = 0u == 0u;
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[6]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[31] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[31] = fs * ft; }
      if (branch_taken) {
          goto L_08B4A9AC;
      }
      goto L_08B4A98C;
    }
L_08B4A98C:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[7] < ctx.fpr[4])) ? 0x00800000u : 0u);
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[6]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[31] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[31] = fs * ft; }
        goto L_08B4A9AC;
    }
    goto L_08B4A99C;
L_08B4A99C:
    ctx.fpr[25] = ctx.fpr[27] + aot_fpr_15;
    ctx.fpr[25] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[25]) ^ 0x80000000u);
    ctx.fpr[25] = ctx.fpr[25] / ctx.fpr[7];
    goto L_08B4A9A8;
L_08B4A9A8:
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[6]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[31] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[31] = fs * ft; }
    goto L_08B4A9AC;
L_08B4A9AC:
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[5]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[27] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[27] = fs * ft; }
    ctx.fpr[29] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[31] = ctx.fpr[31] + ctx.fpr[27];
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[31] <= aot_fpr_14)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    ctx.fpr[27] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[4]));
      if (branch_taken) {
          goto L_08B4AA20;
      }
      goto L_08B4A9C8;
    }
L_08B4A9C8:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[10] < ctx.fpr[4])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08B4AA18;
      }
      goto L_08B4A9D8;
    }
L_08B4A9D8:
    ctx.fpr[27] = aot_fpr_14 - ctx.fpr[31];
    ctx.fpr[27] = ctx.fpr[27] / ctx.fpr[10];
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[27] < ctx.fpr[0])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08B4AA10;
      }
      goto L_08B4A9F0;
    }
L_08B4A9F0:
    ctx.fpr[31] = ctx.fpr[11] / ctx.fpr[10];
    ctx.fpr[31] = ctx.fpr[27] - ctx.fpr[31];
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[31] < ctx.fpr[0])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08B4AAC8;
      }
      goto L_08B4AA08;
    }
L_08B4AA08:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[29] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[31]));
      if (branch_taken) {
          goto L_08B4AAC8;
      }
      goto L_08B4AA10;
    }
L_08B4AA10:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[27] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08B4AAC8;
      }
      goto L_08B4AA18;
    }
L_08B4AA18:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[27] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08B4AAC8;
      }
      goto L_08B4AA20;
    }
L_08B4AA20:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[31] < ctx.fpr[21])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08B4AA8C;
      }
      goto L_08B4AA30;
    }
L_08B4AA30:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[10] <= ctx.fpr[4])) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08B4AA84;
      }
      goto L_08B4AA40;
    }
L_08B4AA40:
    ctx.fpr[27] = ctx.fpr[31] + ctx.fpr[16];
    ctx.fpr[27] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[27]) ^ 0x80000000u);
    ctx.fpr[27] = ctx.fpr[27] / ctx.fpr[10];
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[27] < ctx.fpr[0])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08B4AA7C;
      }
      goto L_08B4AA5C;
    }
L_08B4AA5C:
    ctx.fpr[31] = ctx.fpr[11] / ctx.fpr[10];
    ctx.fpr[31] = ctx.fpr[27] + ctx.fpr[31];
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[31] < ctx.fpr[0])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08B4AAC8;
      }
      goto L_08B4AA74;
    }
L_08B4AA74:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[29] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[31]));
      if (branch_taken) {
          goto L_08B4AAC8;
      }
      goto L_08B4AA7C;
    }
L_08B4AA7C:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[27] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08B4AAC8;
      }
      goto L_08B4AA84;
    }
L_08B4AA84:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[27] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08B4AAC8;
      }
      goto L_08B4AA8C;
    }
L_08B4AA8C:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[10] <= ctx.fpr[4])) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08B4AAAC;
      }
      goto L_08B4AA9C;
    }
L_08B4AA9C:
    ctx.fpr[29] = aot_fpr_14 - ctx.fpr[31];
    ctx.fpr[29] = ctx.fpr[29] / ctx.fpr[10];
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B4AAC8;
      }
      goto L_08B4AAAC;
    }
L_08B4AAAC:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[10] < ctx.fpr[4])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08B4AAC8;
      }
      goto L_08B4AABC;
    }
L_08B4AABC:
    ctx.fpr[29] = ctx.fpr[31] + ctx.fpr[16];
    ctx.fpr[29] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[29]) ^ 0x80000000u);
    ctx.fpr[29] = ctx.fpr[29] / ctx.fpr[10];
    goto L_08B4AAC8;
L_08B4AAC8:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[23] <= ctx.fpr[27])) ? 0x00800000u : 0u);
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    ctx.fpr[27] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[23]));
        goto L_08B4AAD8;
    }
    goto L_08B4AAD8;
L_08B4AAD8:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[25] <= ctx.fpr[27])) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08B4AB10;
      }
      goto L_08B4AAE8;
    }
L_08B4AAE8:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[29] <= ctx.fpr[27])) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08B4AB10;
      }
      goto L_08B4AAF8;
    }
L_08B4AAF8:
    ctx.fpr[23] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[27]));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[23] <= ctx.fpr[2])) ? 0x00800000u : 0u);
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    ctx.fpr[23] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[2]));
        goto L_08B4AB0C;
    }
    goto L_08B4AB0C;
L_08B4AB0C:
    ctx.fpr[2] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[23]));
    goto L_08B4AB10;
L_08B4AB10:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (aot_gpr_4 << 16u);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 16u));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_08B4A7D0;
      }
      goto L_08B4AB28;
    }
L_08B4AB28:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[3]));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT();
    // PSPRECOMP_V811_LOCAL_LINK: preserve the 256-transfer scheduler boundary, skip outer trampoline.
    if (local_redispatch_rounds < 7u && rt.continue_generated_local_dispatch(ctx)) {
        ++local_redispatch_rounds;
        AOT_REGCACHE_SYNC_IN();
        local_transfers = 0u;
        local_pc = ctx.pc;
        entry_id = 0u;
        goto LOCAL_DISPATCH;
    }
    return;
L_08B4AB3C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-144));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(320)));
    aot_fpr_15 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(324)));
    { const float fs = aot_fpr_14; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    { const float fs = aot_fpr_15; const float ft = aot_fpr_15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_15 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_15 = fs * ft; }
    aot_fpr_14 = aot_fpr_14 + aot_fpr_15;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    { const std::uint32_t aot_run_words[14]{std::bit_cast<std::uint32_t>(ctx.fpr[24]), std::bit_cast<std::uint32_t>(ctx.fpr[26]), std::bit_cast<std::uint32_t>(ctx.fpr[28]), std::bit_cast<std::uint32_t>(ctx.fpr[30]), ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], ctx.gpr[23], ctx.gpr[30], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(80), aot_run_words); }
    aot_fpr_14 = std::sqrt(aot_fpr_14);
    aot_gpr_6 = (16076u << 16u);
    aot_gpr_6 = (aot_gpr_6 | 52429u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_6);
    aot_fpr_12 = aot_fpr_14 / aot_fpr_12;
    aot_gpr_6 = (16256u << 16u);
    aot_fpr_15 = std::bit_cast<float>(aot_gpr_6);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_15;
    aot_gpr_6 = (16384u << 16u);
    ctx.fpr[30] = std::bit_cast<float>(aot_gpr_6);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    ctx.gpr[17] = (aot_gpr_5 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(aot_fpr_13));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[30] <= aot_fpr_12)) ? 0x00800000u : 0u);
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    ctx.fpr[30] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
        goto L_08B4ABDC;
    }
    goto L_08B4ABDC;
L_08B4ABDC:
    aot_gpr_4 = (16704u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_5 = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const float fs = ctx.fpr[30]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[26] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[26] = fs * ft; }
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (17056u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_15 = aot_fpr_13 - ctx.fpr[26];
    aot_fpr_14 = aot_fpr_15 / aot_fpr_14;
    aot_gpr_6 = (16880u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (0u | 49u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(aot_fpr_15));
    aot_gpr_4 = (0u | 0u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_6);
    ctx.fpr[30] = aot_fpr_13 + ctx.fpr[26];
    ctx.fpr[28] = ctx.fpr[16] - ctx.fpr[26];
    aot_fpr_12 = aot_fpr_14 + aot_fpr_12;
    ctx.fpr[26] = ctx.fpr[16] + ctx.fpr[26];
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    ctx.gpr[18] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    if (aot_gpr_6 != 0u) {
    ctx.gpr[18] = (aot_gpr_5 | 0u);
        goto L_08B4AC3C;
    }
    goto L_08B4AC3C;
L_08B4AC3C:
    aot_gpr_5 = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    if (aot_gpr_5 != 0u) {
    ctx.gpr[18] = (aot_gpr_4 | 0u);
        goto L_08B4AC48;
    }
    goto L_08B4AC48;
L_08B4AC48:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    ctx.gpr[18] = (0u | 0u);
    aot_gpr_5 = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    if (aot_gpr_5 != 0u) {
    ctx.gpr[18] = (aot_gpr_4 | 0u);
        goto L_08B4AC5C;
    }
    goto L_08B4AC5C;
L_08B4AC5C:
    aot_gpr_4 = (17056u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = ctx.fpr[28] / aot_fpr_12;
    aot_gpr_6 = (16840u << 16u);
    aot_gpr_5 = (0u | 49u);
    aot_gpr_4 = (0u | 0u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_6);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    ctx.gpr[19] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    if (aot_gpr_6 != 0u) {
    ctx.gpr[19] = (aot_gpr_5 | 0u);
        goto L_08B4AC90;
    }
    goto L_08B4AC90;
L_08B4AC90:
    aot_gpr_5 = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    if (aot_gpr_5 != 0u) {
    ctx.gpr[19] = (aot_gpr_4 | 0u);
        goto L_08B4AC9C;
    }
    goto L_08B4AC9C;
L_08B4AC9C:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    ctx.gpr[19] = (0u | 0u);
    aot_gpr_5 = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    if (aot_gpr_5 != 0u) {
    ctx.gpr[19] = (aot_gpr_4 | 0u);
        goto L_08B4ACB0;
    }
    goto L_08B4ACB0;
L_08B4ACB0:
    aot_gpr_4 = (17056u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = ctx.fpr[30] / aot_fpr_12;
    aot_gpr_6 = (16880u << 16u);
    aot_gpr_5 = (0u | 49u);
    aot_gpr_4 = (0u | 0u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_6);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    ctx.gpr[20] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    if (aot_gpr_6 != 0u) {
    ctx.gpr[20] = (aot_gpr_5 | 0u);
        goto L_08B4ACE4;
    }
    goto L_08B4ACE4;
L_08B4ACE4:
    aot_gpr_5 = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    if (aot_gpr_5 != 0u) {
    ctx.gpr[20] = (aot_gpr_4 | 0u);
        goto L_08B4ACF0;
    }
    goto L_08B4ACF0;
L_08B4ACF0:
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    ctx.gpr[20] = (0u | 49u);
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    if (aot_gpr_5 != 0u) {
    ctx.gpr[20] = (aot_gpr_4 | 0u);
        goto L_08B4AD04;
    }
    goto L_08B4AD04;
L_08B4AD04:
    aot_gpr_4 = (17056u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = ctx.fpr[26] / aot_fpr_12;
    aot_gpr_6 = (16840u << 16u);
    aot_gpr_5 = (0u | 49u);
    aot_gpr_4 = (0u | 0u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_6);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_7 = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_6) ? 1u : 0u);
    if (aot_gpr_7 != 0u) {
    aot_gpr_6 = (aot_gpr_5 | 0u);
        goto L_08B4AD38;
    }
    goto L_08B4AD38;
L_08B4AD38:
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    if (aot_gpr_6 != 0u) {
    aot_gpr_5 = (aot_gpr_4 | 0u);
        goto L_08B4AD48;
    }
    goto L_08B4AD48;
L_08B4AD48:
    aot_gpr_4 = (aot_gpr_5 | 0u);
    ctx.gpr[21] = (0u | 49u);
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    if (aot_gpr_5 != 0u) {
    ctx.gpr[21] = (aot_gpr_4 | 0u);
        goto L_08B4AD5C;
    }
    goto L_08B4AD5C;
L_08B4AD5C:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(ctx.fpr[22]) || std::isnan(ctx.fpr[22])) && ctx.fpr[22] == ctx.fpr[22])) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08B4AD70;
      }
      goto L_08B4AD6C;
    }
L_08B4AD6C:
    ctx.fpr[22] = std::bit_cast<float>(0u);
    goto L_08B4AD70;
L_08B4AD70:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[28] + static_cast<std::uint32_t>(-25492)));
    aot_gpr_5 = (0u | 65535u);
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
      if (branch_taken) {
          goto L_08B4AD98;
      }
      goto L_08B4AD88;
    }
L_08B4AD88:
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[28] + static_cast<std::uint32_t>(-25492)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store16(ctx.gpr[28] + static_cast<std::uint32_t>(-25492), static_cast<std::uint16_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_08B4ADA8;
      }
      goto L_08B4AD98;
    }
L_08B4AD98:
    aot_gpr_31 = (0x08B4ADA0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0036_entry, 36u, 274u, 0x088954BCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B4ADA0u) goto L_08B4ADA0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B4ADA0:
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store16(ctx.gpr[28] + static_cast<std::uint32_t>(-25492), static_cast<std::uint16_t>(aot_gpr_4));
    goto L_08B4ADA8;
L_08B4ADA8:
    aot_gpr_4 = (50716u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 16282u);
    ctx.fpr[20] = std::bit_cast<float>(aot_gpr_4);
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(28)));
    goto L_08B4ADBC;
L_08B4ADBC:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_12) || std::isnan(ctx.fpr[24])) && aot_fpr_12 == ctx.fpr[24])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08B4ADE0;
      }
      goto L_08B4ADCC;
    }
L_08B4ADCC:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(32)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_12) || std::isnan(ctx.fpr[20])) && aot_fpr_12 == ctx.fpr[20])) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08B4AF8C;
      }
      goto L_08B4ADE0;
    }
L_08B4ADE0:
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(28)));
    ctx.gpr[22] = (ctx.gpr[19] | 0u);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[22]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08B4AF54;
      }
      goto L_08B4ADF4;
    }
L_08B4ADF4:
    ctx.gpr[23] = (ctx.gpr[18] | 0u);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[23]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08B4AF44;
      }
      goto L_08B4AE04;
    }
L_08B4AE04:
    aot_gpr_4 = (ctx.gpr[22] << 4u);
    aot_gpr_5 = (ctx.gpr[22] + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(68), ctx.gpr[21]);
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_fpr_15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_gpr_4 = (ctx.gpr[23] + aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(64), ctx.gpr[22]);
    aot_gpr_5 = (aot_gpr_4 << 6u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25496)));
    aot_gpr_4 = (aot_gpr_4 << 3u);
    aot_gpr_4 = (aot_gpr_5 - aot_gpr_4);
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(52)));
    ctx.gpr[30] = (aot_gpr_6 + aot_gpr_4);
    ctx.gpr[22] = (aot_gpr_29 + static_cast<std::uint32_t>(28));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[21] = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    aot_gpr_4 = (ctx.gpr[30] + static_cast<std::uint32_t>(28));
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    aot_gpr_6 = (ctx.gpr[17] | 0u);
    aot_gpr_7 = (ctx.gpr[22] | 0u);
    aot_gpr_31 = (0x08B4AE6Cu);
    ctx.gpr[8] = (ctx.gpr[21] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0207_entry, 207u, 660u, 0x08B42DB8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B4AE6Cu) goto L_08B4AE6C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B4AE6C:
    aot_gpr_4 = (ctx.gpr[30] + static_cast<std::uint32_t>(32));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_gpr_6 = (ctx.gpr[17] | 0u);
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_fpr_15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_gpr_7 = (ctx.gpr[22] | 0u);
    aot_gpr_31 = (0x08B4AE94u);
    ctx.gpr[8] = (ctx.gpr[21] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0207_entry, 207u, 660u, 0x08B42DB8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B4AE94u) goto L_08B4AE94;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B4AE94:
    aot_gpr_4 = (ctx.gpr[30] + static_cast<std::uint32_t>(36));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_gpr_6 = (ctx.gpr[17] | 0u);
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_fpr_15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_gpr_7 = (ctx.gpr[22] | 0u);
    aot_gpr_31 = (0x08B4AEBCu);
    ctx.gpr[8] = (ctx.gpr[21] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0207_entry, 207u, 677u, 0x08B430D4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B4AEBCu) goto L_08B4AEBC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B4AEBC:
    aot_gpr_4 = (ctx.gpr[30] + static_cast<std::uint32_t>(40));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_gpr_6 = (ctx.gpr[17] | 0u);
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_fpr_15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_gpr_7 = (ctx.gpr[22] | 0u);
    aot_gpr_31 = (0x08B4AEE4u);
    ctx.gpr[8] = (ctx.gpr[21] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0207_entry, 207u, 677u, 0x08B430D4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B4AEE4u) goto L_08B4AEE4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B4AEE4:
    aot_gpr_4 = (ctx.gpr[30] + static_cast<std::uint32_t>(12));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_gpr_6 = (ctx.gpr[22] | 0u);
    aot_fpr_15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_gpr_31 = (0x08B4AF08u);
    aot_gpr_7 = (ctx.gpr[21] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0207_entry, 207u, 749u, 0x08B43868u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B4AF08u) goto L_08B4AF08;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B4AF08:
    aot_gpr_4 = (ctx.gpr[30] + static_cast<std::uint32_t>(16));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_gpr_6 = (ctx.gpr[22] | 0u);
    aot_fpr_15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_gpr_31 = (0x08B4AF2Cu);
    aot_gpr_7 = (ctx.gpr[21] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0207_entry, 207u, 749u, 0x08B43868u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B4AF2Cu) goto L_08B4AF2C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B4AF2C:
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(60)));
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
    ctx.gpr[22] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(64)));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[23]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[21] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(68)));
      if (branch_taken) {
          goto L_08B4AE04;
      }
      goto L_08B4AF44;
    }
L_08B4AF44:
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[22]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B4ADF4;
      }
      goto L_08B4AF54;
    }
L_08B4AF54:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(28)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_12) || std::isnan(aot_fpr_12)) && aot_fpr_12 == aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08B4AF6C;
      }
      goto L_08B4AF68;
    }
L_08B4AF68:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    goto L_08B4AF6C;
L_08B4AF6C:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(32)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_12) || std::isnan(aot_fpr_12)) && aot_fpr_12 == aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08B4AF84;
      }
      goto L_08B4AF80;
    }
L_08B4AF80:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    goto L_08B4AF84;
L_08B4AF84:
    { const bool branch_taken = 0u == 0u;
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_08B4ADBC;
      }
      goto L_08B4AF8C;
    }
L_08B4AF8C:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(56)));
    aot_gpr_31 = (0x08B4AF98u);
    aot_fpr_12 = aot_fpr_12 - ctx.fpr[22];
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0162_entry, 162u, 580u, 0x08A8F0B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B4AF98u) goto L_08B4AF98;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B4AF98:
    aot_gpr_4 = (16128u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = ctx.fpr[0]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_31 = (0x08B4AFACu);
    aot_fpr_12 = ctx.fpr[22] + aot_fpr_12;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0162_entry, 162u, 580u, 0x08A8F0B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B4AFACu) goto L_08B4AFAC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B4AFAC:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(28)));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(32)));
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_fpr_12 = aot_fpr_12 - ctx.fpr[22];
    aot_gpr_31 = (0x08B4AFC4u);
    ctx.fpr[20] = ctx.fpr[20] - ctx.fpr[22];
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0162_entry, 162u, 580u, 0x08A8F0B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B4AFC4u) goto L_08B4AFC4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B4AFC4:
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_fpr_12 = std::bit_cast<float>(0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[24] < aot_fpr_12)) ? 0x00800000u : 0u);
    if (((ctx.fcr31 & 0x00800000u) != 0u)) {
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]) ^ 0x80000000u);
        goto L_08B4AFDC;
    }
    goto L_08B4AFDC;
L_08B4AFDC:
    aot_gpr_31 = (0x08B4AFE4u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0162_entry, 162u, 580u, 0x08A8F0B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B4AFE4u) goto L_08B4AFE4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B4AFE4:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_fpr_13 = std::bit_cast<float>(0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    if (((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]) ^ 0x80000000u);
        goto L_08B4B000;
    }
    goto L_08B4B000;
L_08B4B000:
    aot_gpr_4 = (16329u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 4059u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[24] <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (16329u << 16u);
      if (branch_taken) {
          goto L_08B4B03C;
      }
      goto L_08B4B01C;
    }
L_08B4B01C:
    aot_gpr_4 = (aot_gpr_4 | 4059u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08B4B03C;
      }
      goto L_08B4B034;
    }
L_08B4B034:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
      if (branch_taken) {
          goto L_08B4B098;
      }
      goto L_08B4B03C;
    }
L_08B4B03C:
    aot_fpr_13 = ctx.fpr[24] - aot_fpr_12;
    aot_fpr_14 = std::bit_cast<float>(0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 < aot_fpr_14)) ? 0x00800000u : 0u);
    if (((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_13) ^ 0x80000000u);
        goto L_08B4B054;
    }
    goto L_08B4B054;
L_08B4B054:
    aot_gpr_4 = (15779u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 55050u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 < aot_fpr_14)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08B4B088;
      }
      goto L_08B4B070;
    }
L_08B4B070:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[24] < aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08B4B090;
      }
      goto L_08B4B080;
    }
L_08B4B080:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_08B4B098;
      }
      goto L_08B4B088;
    }
L_08B4B088:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08B4B098;
      }
      goto L_08B4B090;
    }
L_08B4B090:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08B4B098;
      }
      goto L_08B4B098;
    }
L_08B4B098:
    { std::uint32_t aot_run_words[16]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(72), aot_run_words);
      ctx.fpr[20] = std::bit_cast<float>(aot_run_words[0]);
      ctx.fpr[22] = std::bit_cast<float>(aot_run_words[1]);
      ctx.fpr[24] = std::bit_cast<float>(aot_run_words[2]);
      ctx.fpr[26] = std::bit_cast<float>(aot_run_words[3]);
      ctx.fpr[28] = std::bit_cast<float>(aot_run_words[4]);
      ctx.fpr[30] = std::bit_cast<float>(aot_run_words[5]);
      ctx.gpr[16] = aot_run_words[6];
      ctx.gpr[17] = aot_run_words[7];
      ctx.gpr[18] = aot_run_words[8];
      ctx.gpr[19] = aot_run_words[9];
      ctx.gpr[20] = aot_run_words[10];
      ctx.gpr[21] = aot_run_words[11];
      ctx.gpr[22] = aot_run_words[12];
      ctx.gpr[23] = aot_run_words[13];
      ctx.gpr[30] = aot_run_words[14];
      aot_gpr_31 = aot_run_words[15];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT();
    // PSPRECOMP_V811_LOCAL_LINK: preserve the 256-transfer scheduler boundary, skip outer trampoline.
    if (local_redispatch_rounds < 7u && rt.continue_generated_local_dispatch(ctx)) {
        ++local_redispatch_rounds;
        AOT_REGCACHE_SYNC_IN();
        local_transfers = 0u;
        local_pc = ctx.pc;
        entry_id = 0u;
        goto LOCAL_DISPATCH;
    }
    return;
L_08B4B0E0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-112));
    aot_gpr_7 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(560)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(64), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(68), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(80), ctx.gpr[20]);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    ctx.gpr[20] = (aot_gpr_5 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(72), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(76), ctx.gpr[19]);
    { const std::uint32_t aot_run_words[5]{ctx.gpr[21], ctx.gpr[22], ctx.gpr[23], ctx.gpr[30], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(84), aot_run_words); }
    { const bool branch_taken = aot_gpr_7 == 0u;
    ctx.gpr[18] = (aot_gpr_6 | 0u);
      if (branch_taken) {
          goto L_08B4B138;
      }
      goto L_08B4B124;
    }
L_08B4B124:
    aot_gpr_31 = (0x08B4B12Cu);
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(560)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0199_entry, 199u, 107u, 0x08B2090Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B4B12Cu) goto L_08B4B12C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B4B12C:
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(560)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store16(ctx.gpr[16] + static_cast<std::uint32_t>(560), static_cast<std::uint16_t>(aot_gpr_4));
    goto L_08B4B138;
L_08B4B138:
    aot_gpr_4 = (ctx.gpr[20] + ctx.gpr[20]);
    aot_gpr_5 = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (ctx.gpr[20] + aot_gpr_4);
    aot_gpr_7 = (aot_gpr_5 + aot_gpr_5);
    aot_gpr_6 = (ctx.gpr[16] + static_cast<std::uint32_t>(416));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_7);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(52), ctx.gpr[16]);
    aot_gpr_4 = (aot_gpr_6 + aot_gpr_4);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_5);
    aot_gpr_6 = (aot_gpr_6 + aot_gpr_5);
    ctx.gpr[22] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    ctx.gpr[30] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_6 + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_6 + static_cast<std::uint32_t>(2))))));
    aot_gpr_7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_6 + static_cast<std::uint32_t>(4))))));
    aot_mem.aot_direct_store16(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[30]));
    aot_mem.aot_direct_store16(ctx.gpr[18] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(aot_gpr_5));
    aot_mem.aot_direct_store16(ctx.gpr[18] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(aot_gpr_7));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    aot_gpr_7 = (ctx.gpr[30] << 3u);
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    ctx.gpr[20] = (ctx.gpr[30] + aot_gpr_7);
    ctx.gpr[20] = (ctx.gpr[30] + ctx.gpr[20]);
    aot_gpr_7 = (ctx.gpr[8] + ctx.gpr[20]);
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (aot_gpr_5 << 2u);
    ctx.gpr[23] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_7 + static_cast<std::uint32_t>(8))))));
    aot_gpr_5 = (ctx.gpr[8] + aot_gpr_4);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    aot_gpr_7 = (ctx.gpr[22] << 3u);
    ctx.gpr[19] = (ctx.gpr[22] + aot_gpr_7);
    ctx.gpr[23] = (ctx.gpr[23] & 15u);
    aot_gpr_5 = (aot_gpr_5 & 16383u);
    { const bool branch_taken = aot_gpr_5 != ctx.gpr[30];
    ctx.gpr[19] = (ctx.gpr[22] + ctx.gpr[19]);
      if (branch_taken) {
          goto L_08B4B1F0;
      }
      goto L_08B4B1C4;
    }
L_08B4B1C4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(2))))));
    aot_gpr_5 = (aot_gpr_4 & 7u);
    aot_gpr_7 = (aot_gpr_4 & 56u);
    aot_gpr_4 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr_7 != 0u;
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_5) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B4B224;
      }
      goto L_08B4B1E8;
    }
L_08B4B1E8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_08B4B224;
      }
      goto L_08B4B1F0;
    }
L_08B4B1F0:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(2))))));
    aot_gpr_5 = (aot_gpr_4 & 56u);
    aot_gpr_5 = (aot_gpr_5 >> 3u);
    aot_gpr_5 = (aot_gpr_5 << 16u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 16u));
    aot_gpr_7 = (aot_gpr_4 & 7u);
    aot_gpr_4 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr_7 != 0u;
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_5) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B4B224;
      }
      goto L_08B4B220;
    }
L_08B4B220:
    ctx.gpr[17] = (0u | 1u);
    goto L_08B4B224;
L_08B4B224:
    aot_gpr_7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_6 + static_cast<std::uint32_t>(5))))));
    { const bool branch_taken = aot_gpr_7 != 0u;
    ctx.gpr[21] = (0u | 0u);
      if (branch_taken) {
          goto L_08B4B234;
      }
      goto L_08B4B230;
    }
L_08B4B230:
    ctx.gpr[21] = (0u | 4u);
    goto L_08B4B234;
L_08B4B234:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(60), aot_gpr_6);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_6 + static_cast<std::uint32_t>(5))))));
    { const bool branch_taken = aot_gpr_6 != aot_gpr_4;
      if (branch_taken) {
          goto L_08B4B24C;
      }
      goto L_08B4B244;
    }
L_08B4B244:
    ctx.gpr[21] = (ctx.gpr[21] | 2u);
    ctx.gpr[21] = (ctx.gpr[21] & 255u);
    goto L_08B4B24C;
L_08B4B24C:
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_08B4B25C;
      }
      goto L_08B4B254;
    }
L_08B4B254:
    { const bool branch_taken = ctx.gpr[21] != 0u;
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[17]));
      if (branch_taken) {
          goto L_08B4B268;
      }
      goto L_08B4B25C;
    }
L_08B4B25C:
    ctx.gpr[21] = (ctx.gpr[21] | 1u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[17]));
    ctx.gpr[21] = (ctx.gpr[21] & 255u);
    goto L_08B4B268;
L_08B4B268:
    aot_gpr_5 = (0u | 1u);
    aot_gpr_6 = (0u | 0u);
    ctx.gpr[16] = (0u | 0u);
    aot_gpr_7 = (aot_gpr_5 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    goto L_08B4B27C;
L_08B4B27C:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B4B4E4;
      }
      goto L_08B4B284;
    }
L_08B4B284:
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[22] == ctx.gpr[8];
    aot_gpr_6 = (aot_gpr_6 & ctx.gpr[21]);
      if (branch_taken) {
          goto L_08B4B3A8;
      }
      goto L_08B4B290;
    }
L_08B4B290:
    { const bool branch_taken = aot_gpr_6 == 0u;
      if (branch_taken) {
          goto L_08B4B3A8;
      }
      goto L_08B4B298;
    }
L_08B4B298:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (ctx.gpr[8] << 3u);
    ctx.gpr[9] = (ctx.gpr[8] + ctx.gpr[9]);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[9]);
    aot_gpr_6 = (aot_gpr_6 + ctx.gpr[8]);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_6 + static_cast<std::uint32_t>(8))))));
    aot_gpr_6 = (aot_gpr_6 & 16u);
    if (aot_gpr_6 == 0u) {
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
        goto L_08B4B2E4;
    }
    goto L_08B4B2C4;
L_08B4B2C4:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_gpr_6 + ctx.gpr[19]);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_6 + static_cast<std::uint32_t>(8))))));
    aot_gpr_6 = (aot_gpr_6 & 16u);
    { const bool branch_taken = aot_gpr_6 == 0u;
      if (branch_taken) {
          goto L_08B4B3A8;
      }
      goto L_08B4B2E0;
    }
L_08B4B2E0:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    goto L_08B4B2E4;
L_08B4B2E4:
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (ctx.gpr[8] << 3u);
    ctx.gpr[9] = (ctx.gpr[8] + ctx.gpr[9]);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[9]);
    aot_gpr_6 = (aot_gpr_6 + ctx.gpr[8]);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_6 + static_cast<std::uint32_t>(8))))));
    aot_gpr_6 = (aot_gpr_6 & 32u);
    if (aot_gpr_6 == 0u) {
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(52)));
        goto L_08B4B32C;
    }
    goto L_08B4B30C;
L_08B4B30C:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_gpr_6 + ctx.gpr[19]);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_6 + static_cast<std::uint32_t>(8))))));
    aot_gpr_6 = (aot_gpr_6 & 32u);
    { const bool branch_taken = aot_gpr_6 == 0u;
      if (branch_taken) {
          goto L_08B4B3A8;
      }
      goto L_08B4B328;
    }
L_08B4B328:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(52)));
    goto L_08B4B32C;
L_08B4B32C:
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_6 + static_cast<std::uint32_t>(538))))));
    aot_gpr_6 = (aot_gpr_6 & 4u);
    aot_gpr_6 = (0u < aot_gpr_6 ? 1u : 0u);
    aot_gpr_6 = (aot_gpr_6 & 255u);
    { const bool branch_taken = aot_gpr_6 == 0u;
      if (branch_taken) {
          goto L_08B4B38C;
      }
      goto L_08B4B344;
    }
L_08B4B344:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (ctx.gpr[8] << 3u);
    ctx.gpr[9] = (ctx.gpr[8] + ctx.gpr[9]);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[9]);
    aot_gpr_6 = (aot_gpr_6 + ctx.gpr[8]);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_6 + static_cast<std::uint32_t>(8))))));
    aot_gpr_6 = (aot_gpr_6 & 64u);
    { const bool branch_taken = aot_gpr_6 == 0u;
      if (branch_taken) {
          goto L_08B4B38C;
      }
      goto L_08B4B370;
    }
L_08B4B370:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_gpr_6 + ctx.gpr[19]);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_6 + static_cast<std::uint32_t>(8))))));
    aot_gpr_6 = (aot_gpr_6 & 64u);
    { const bool branch_taken = aot_gpr_6 == 0u;
      if (branch_taken) {
          goto L_08B4B3A8;
      }
      goto L_08B4B38C;
    }
L_08B4B38C:
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_08B4B3A8;
      }
      goto L_08B4B394;
    }
L_08B4B394:
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = aot_gpr_6 == 0u;
      if (branch_taken) {
          goto L_08B4B4E4;
      }
      goto L_08B4B3A0;
    }
L_08B4B3A0:
    { const bool branch_taken = aot_gpr_7 == 0u;
      if (branch_taken) {
          goto L_08B4B4E4;
      }
      goto L_08B4B3A8;
    }
L_08B4B3A8:
    aot_gpr_31 = (0x08B4B3B0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20934, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B4B3B0u) goto L_08B4B3B0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B4B3B0:
    aot_gpr_4 = (ctx.gpr[2] & 65535u);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_4); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[23]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(30040)));
    aot_gpr_4 = (aot_gpr_5 + ctx.gpr[20]);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(6))))));
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(60)));
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    ctx.gpr[8] = (ctx.hi);
    ctx.gpr[17] = (ctx.gpr[8] << 16u);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 16u));
    aot_gpr_5 = (aot_gpr_5 + ctx.gpr[17]);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_6 + aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_5 & 16383u);
    aot_mem.aot_direct_store16(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_5));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_7 + static_cast<std::uint32_t>(0))))));
    aot_gpr_31 = (0x08B4B404u);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0207_entry, 207u, 763u, 0x08B439ECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B4B404u) goto L_08B4B404;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B4B404:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (aot_gpr_5 + ctx.gpr[20]);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(6))))));
    aot_gpr_5 = (aot_gpr_5 + ctx.gpr[17]);
    ctx.gpr[8] = (aot_gpr_5 + aot_gpr_5);
    ctx.gpr[8] = (aot_gpr_7 + ctx.gpr[8]);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[8] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (ctx.gpr[8] << 2u);
    ctx.gpr[8] = (ctx.gpr[9] + aot_gpr_4);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[8] + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (ctx.gpr[2] | 0u);
    aot_gpr_5 = (0u | 0u);
    ctx.gpr[8] = (ctx.gpr[8] & 16383u);
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[30];
    aot_gpr_7 = (0u | 0u);
      if (branch_taken) {
          goto L_08B4B490;
      }
      goto L_08B4B44C;
    }
L_08B4B44C:
    ctx.gpr[8] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    ctx.gpr[8] = (aot_mem.aot_direct_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (ctx.gpr[8] + aot_gpr_4);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[8] + static_cast<std::uint32_t>(2))))));
    ctx.gpr[8] = (ctx.gpr[8] & 56u);
    if (ctx.gpr[8] != 0u) {
    ctx.gpr[8] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
        goto L_08B4B470;
    }
    goto L_08B4B468;
L_08B4B468:
    aot_gpr_5 = (0u | 1u);
    ctx.gpr[8] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    goto L_08B4B470;
L_08B4B470:
    ctx.gpr[8] = (aot_mem.aot_direct_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (ctx.gpr[8] + aot_gpr_4);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(2))))));
    aot_gpr_4 = (aot_gpr_4 & 7u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08B4B4D0;
      }
      goto L_08B4B488;
    }
L_08B4B488:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_7 = (0u | 1u);
      if (branch_taken) {
          goto L_08B4B4D0;
      }
      goto L_08B4B490;
    }
L_08B4B490:
    ctx.gpr[8] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    ctx.gpr[8] = (aot_mem.aot_direct_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (ctx.gpr[8] + aot_gpr_4);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[8] + static_cast<std::uint32_t>(2))))));
    ctx.gpr[8] = (ctx.gpr[8] & 7u);
    if (ctx.gpr[8] != 0u) {
    ctx.gpr[8] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
        goto L_08B4B4B4;
    }
    goto L_08B4B4AC;
L_08B4B4AC:
    aot_gpr_5 = (0u | 1u);
    ctx.gpr[8] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    goto L_08B4B4B4;
L_08B4B4B4:
    ctx.gpr[8] = (aot_mem.aot_direct_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (ctx.gpr[8] + aot_gpr_4);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(2))))));
    aot_gpr_4 = (aot_gpr_4 & 56u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08B4B4D0;
      }
      goto L_08B4B4CC;
    }
L_08B4B4CC:
    aot_gpr_7 = (0u | 1u);
    goto L_08B4B4D0;
L_08B4B4D0:
    aot_gpr_4 = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (aot_gpr_4 << 16u);
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 16u));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[16]) < 15 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B4B27C;
      }
      goto L_08B4B4E4;
    }
L_08B4B4E4:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08B4B69C;
      }
      goto L_08B4B4EC;
    }
L_08B4B4EC:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[21] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(52)));
    goto L_08B4B4F4;
L_08B4B4F4:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[16]) < 15 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B4B5C0;
      }
      goto L_08B4B4FC;
    }
L_08B4B4FC:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B4B69C;
      }
      goto L_08B4B504;
    }
L_08B4B504:
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[22] == aot_gpr_6;
      if (branch_taken) {
          goto L_08B4B5C0;
      }
      goto L_08B4B510;
    }
L_08B4B510:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    aot_gpr_7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_gpr_7 << 3u);
    ctx.gpr[8] = (aot_gpr_7 + ctx.gpr[8]);
    aot_gpr_7 = (aot_gpr_7 + ctx.gpr[8]);
    aot_gpr_6 = (aot_gpr_6 + aot_gpr_7);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_6 + static_cast<std::uint32_t>(8))))));
    aot_gpr_6 = (aot_gpr_6 & 32u);
    if (aot_gpr_6 == 0u) {
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[21] + static_cast<std::uint32_t>(538))))));
        goto L_08B4B55C;
    }
    goto L_08B4B53C;
L_08B4B53C:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_gpr_6 + ctx.gpr[19]);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_6 + static_cast<std::uint32_t>(8))))));
    aot_gpr_6 = (aot_gpr_6 & 32u);
    { const bool branch_taken = aot_gpr_6 == 0u;
      if (branch_taken) {
          goto L_08B4B5C0;
      }
      goto L_08B4B558;
    }
L_08B4B558:
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[21] + static_cast<std::uint32_t>(538))))));
    goto L_08B4B55C;
L_08B4B55C:
    aot_gpr_6 = (aot_gpr_6 & 4u);
    aot_gpr_6 = (0u < aot_gpr_6 ? 1u : 0u);
    aot_gpr_6 = (aot_gpr_6 & 255u);
    { const bool branch_taken = aot_gpr_6 == 0u;
      if (branch_taken) {
          goto L_08B4B5B8;
      }
      goto L_08B4B570;
    }
L_08B4B570:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    aot_gpr_7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_gpr_7 << 3u);
    ctx.gpr[8] = (aot_gpr_7 + ctx.gpr[8]);
    aot_gpr_7 = (aot_gpr_7 + ctx.gpr[8]);
    aot_gpr_6 = (aot_gpr_6 + aot_gpr_7);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_6 + static_cast<std::uint32_t>(8))))));
    aot_gpr_6 = (aot_gpr_6 & 64u);
    { const bool branch_taken = aot_gpr_6 == 0u;
      if (branch_taken) {
          goto L_08B4B5B8;
      }
      goto L_08B4B59C;
    }
L_08B4B59C:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_gpr_6 + ctx.gpr[19]);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_6 + static_cast<std::uint32_t>(8))))));
    aot_gpr_6 = (aot_gpr_6 & 64u);
    { const bool branch_taken = aot_gpr_6 == 0u;
      if (branch_taken) {
          goto L_08B4B5C0;
      }
      goto L_08B4B5B8;
    }
L_08B4B5B8:
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08B4B69C;
      }
      goto L_08B4B5C0;
    }
L_08B4B5C0:
    aot_gpr_31 = (0x08B4B5C8u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20934, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B4B5C8u) goto L_08B4B5C8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B4B5C8:
    aot_gpr_4 = (ctx.gpr[2] & 65535u);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_4); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[23]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(30040)));
    aot_gpr_5 = (aot_gpr_5 + ctx.gpr[20]);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(6))))));
    aot_gpr_7 = (ctx.hi);
    ctx.gpr[17] = (aot_gpr_7 << 16u);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 16u));
    aot_gpr_6 = (aot_gpr_6 + ctx.gpr[17]);
    aot_gpr_6 = (aot_gpr_6 + aot_gpr_6);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 & 16383u);
    aot_mem.aot_direct_store16(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_gpr_6 = (aot_gpr_6 + ctx.gpr[20]);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_6 + static_cast<std::uint32_t>(6))))));
    aot_gpr_6 = (aot_gpr_6 + ctx.gpr[17]);
    aot_gpr_6 = (aot_gpr_6 + aot_gpr_6);
    aot_gpr_6 = (aot_gpr_7 + aot_gpr_6);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_6 + static_cast<std::uint32_t>(0))))));
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (aot_gpr_6 << 2u);
    aot_gpr_6 = (aot_gpr_7 + aot_gpr_4);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_6 + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (aot_gpr_6 & 16383u);
    { const bool branch_taken = aot_gpr_6 != ctx.gpr[30];
    aot_gpr_5 = (0u | 0u);
      if (branch_taken) {
          goto L_08B4B66C;
      }
      goto L_08B4B648;
    }
L_08B4B648:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (aot_gpr_6 + aot_gpr_4);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(2))))));
    aot_gpr_4 = (aot_gpr_4 & 56u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08B4B68C;
      }
      goto L_08B4B664;
    }
L_08B4B664:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (0u | 1u);
      if (branch_taken) {
          goto L_08B4B68C;
      }
      goto L_08B4B66C;
    }
L_08B4B66C:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (aot_gpr_6 + aot_gpr_4);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(2))))));
    aot_gpr_4 = (aot_gpr_4 & 7u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08B4B68C;
      }
      goto L_08B4B688;
    }
L_08B4B688:
    aot_gpr_5 = (0u | 1u);
    goto L_08B4B68C;
L_08B4B68C:
    aot_gpr_4 = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (aot_gpr_4 << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 16u));
      if (branch_taken) {
          goto L_08B4B4F4;
      }
      goto L_08B4B69C;
    }
L_08B4B69C:
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[21] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(52)));
      if (branch_taken) {
          goto L_08B4B844;
      }
      goto L_08B4B6A4;
    }
L_08B4B6A4:
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_6 = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[23]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 == 0u;
      if (branch_taken) {
          goto L_08B4B834;
      }
      goto L_08B4B6B4;
    }
L_08B4B6B4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    goto L_08B4B6B8;
L_08B4B6B8:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(30040)));
    aot_gpr_5 = (aot_gpr_5 + ctx.gpr[20]);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(6))))));
    aot_gpr_5 = (aot_gpr_5 + ctx.gpr[17]);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 & 16383u);
    aot_mem.aot_direct_store16(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_4));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[20]);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(6))))));
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[17]);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[8]);
    aot_gpr_7 = (aot_gpr_7 + ctx.gpr[8]);
    aot_gpr_7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_7 + static_cast<std::uint32_t>(0))))));
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (aot_gpr_7 << 2u);
    aot_gpr_7 = (ctx.gpr[8] + aot_gpr_5);
    aot_gpr_7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_7 + static_cast<std::uint32_t>(0))))));
    aot_gpr_7 = (aot_gpr_7 & 16383u);
    { const bool branch_taken = aot_gpr_7 != ctx.gpr[30];
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_08B4B744;
      }
      goto L_08B4B720;
    }
L_08B4B720:
    aot_gpr_7 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_7 + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (aot_gpr_7 + aot_gpr_5);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(2))))));
    aot_gpr_5 = (aot_gpr_5 & 56u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_08B4B764;
      }
      goto L_08B4B73C;
    }
L_08B4B73C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (0u | 1u);
      if (branch_taken) {
          goto L_08B4B764;
      }
      goto L_08B4B744;
    }
L_08B4B744:
    aot_gpr_7 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_7 + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (aot_gpr_7 + aot_gpr_5);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(2))))));
    aot_gpr_5 = (aot_gpr_5 & 7u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_08B4B764;
      }
      goto L_08B4B760;
    }
L_08B4B760:
    aot_gpr_4 = (0u | 1u);
    goto L_08B4B764;
L_08B4B764:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08B4B81C;
      }
      goto L_08B4B76C;
    }
L_08B4B76C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_7 = (aot_gpr_5 << 3u);
    aot_gpr_7 = (aot_gpr_5 + aot_gpr_7);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_7);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(8))))));
    aot_gpr_4 = (aot_gpr_4 & 32u);
    if (aot_gpr_4 == 0u) {
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[21] + static_cast<std::uint32_t>(538))))));
        goto L_08B4B7B8;
    }
    goto L_08B4B798;
L_08B4B798:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[19]);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(8))))));
    aot_gpr_4 = (aot_gpr_4 & 32u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B4B81C;
      }
      goto L_08B4B7B4;
    }
L_08B4B7B4:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[21] + static_cast<std::uint32_t>(538))))));
    goto L_08B4B7B8;
L_08B4B7B8:
    aot_gpr_4 = (aot_gpr_4 & 4u);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B4B814;
      }
      goto L_08B4B7CC;
    }
L_08B4B7CC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_7 = (aot_gpr_5 << 3u);
    aot_gpr_7 = (aot_gpr_5 + aot_gpr_7);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_7);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(8))))));
    aot_gpr_4 = (aot_gpr_4 & 64u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B4B814;
      }
      goto L_08B4B7F8;
    }
L_08B4B7F8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[19]);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(8))))));
    aot_gpr_4 = (aot_gpr_4 & 64u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B4B81C;
      }
      goto L_08B4B814;
    }
L_08B4B814:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08B4B834;
      }
      goto L_08B4B81C;
    }
L_08B4B81C:
    aot_gpr_4 = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (aot_gpr_4 << 16u);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 16u));
    aot_gpr_6 = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[23]) ? 1u : 0u);
    if (aot_gpr_6 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
        goto L_08B4B6B8;
    }
    goto L_08B4B834;
L_08B4B834:
    { const bool branch_taken = aot_gpr_6 != 0u;
      if (branch_taken) {
          goto L_08B4B844;
      }
      goto L_08B4B83C;
    }
L_08B4B83C:
    ctx.gpr[17] = (0u | 0u);
    aot_mem.aot_direct_store16(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[22]));
    goto L_08B4B844;
L_08B4B844:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[22] != aot_gpr_4;
    ctx.gpr[19] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(60)));
      if (branch_taken) {
          goto L_08B4B86C;
      }
      goto L_08B4B850;
    }
L_08B4B850:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(72)));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-497));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 | 48u);
    aot_mem.aot_direct_store32(ctx.gpr[21] + static_cast<std::uint32_t>(72), aot_gpr_4);
    aot_gpr_31 = (0x08B4B86Cu);
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0207_entry, 207u, 365u, 0x08B41608u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B4B86Cu) goto L_08B4B86C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B4B86C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (aot_gpr_5 + ctx.gpr[20]);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(6))))));
    aot_gpr_5 = (aot_gpr_5 + ctx.gpr[17]);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_direct_store16(ctx.gpr[18] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(aot_gpr_4));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[30]) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (0u | 1u);
      if (branch_taken) {
          goto L_08B4B8D8;
      }
      goto L_08B4B8A4;
    }
L_08B4B8A4:
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store8(ctx.gpr[18] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[18] + static_cast<std::uint32_t>(2))))));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (aot_gpr_5 << 2u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(2))))));
    aot_gpr_4 = (aot_gpr_4 & 56u);
    aot_gpr_4 = (aot_gpr_4 >> 3u);
    ctx.gpr[16] = (aot_gpr_4 << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 16u));
      if (branch_taken) {
          goto L_08B4B8F8;
      }
      goto L_08B4B8D8;
    }
L_08B4B8D8:
    aot_mem.aot_direct_store8(ctx.gpr[18] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[18] + static_cast<std::uint32_t>(2))))));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (aot_gpr_5 << 2u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(2))))));
    ctx.gpr[16] = (ctx.gpr[16] & 7u);
    goto L_08B4B8F8;
L_08B4B8F8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
      if (branch_taken) {
          goto L_08B4B90C;
      }
      goto L_08B4B900;
    }
L_08B4B900:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[19] + static_cast<std::uint32_t>(5))))));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(ctx.gpr[18] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_08B4BAA8;
      }
      goto L_08B4B90C;
    }
L_08B4B90C:
    aot_gpr_31 = (0x08B4B914u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20934, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B4B914u) goto L_08B4B914;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B4B914:
    aot_gpr_4 = (ctx.gpr[2] & 65535u);
    aot_gpr_4 = (aot_gpr_4 & 1536u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08B4BA74;
      }
      goto L_08B4B924;
    }
L_08B4B924:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[19] + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (aot_gpr_5 << 3u);
    aot_gpr_6 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    ctx.gpr[9] = (aot_gpr_4 + aot_gpr_5);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[9] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[9] + static_cast<std::uint32_t>(2))))));
    ctx.set_vfpu_scalar_bits_ct<1u>(ctx.gpr[8]);
    ctx.set_vfpu_scalar_bits_ct<33u>(ctx.gpr[9]);
    ctx.execute_vfpu_vi2f_ct<2u, 1u, 2u, 3u>();
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(12));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), ctx.vfpu_scalar_bits_ct<2u>());
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), ctx.vfpu_scalar_bits_ct<34u>());
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (aot_gpr_5 << 3u);
    aot_gpr_6 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    ctx.gpr[9] = (aot_gpr_4 + aot_gpr_5);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[9] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[9] + static_cast<std::uint32_t>(2))))));
    ctx.set_vfpu_scalar_bits_ct<1u>(ctx.gpr[8]);
    ctx.set_vfpu_scalar_bits_ct<33u>(ctx.gpr[9]);
    ctx.execute_vfpu_vi2f_ct<2u, 1u, 2u, 3u>();
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(20));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), ctx.vfpu_scalar_bits_ct<2u>());
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), ctx.vfpu_scalar_bits_ct<34u>());
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(12)));
    aot_fpr_12 = aot_fpr_12 - aot_fpr_13;
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(24)));
    aot_fpr_15 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    aot_fpr_14 = aot_fpr_14 - aot_fpr_15;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(aot_fpr_14));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), aot_gpr_4);
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_14));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_gpr_4);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(28)));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(32)));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_5);
    aot_fpr_15 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    { const float fs = aot_fpr_15; const float ft = aot_fpr_15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    { const float fs = aot_fpr_14; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_fpr_12 = aot_fpr_12 + aot_fpr_14;
    aot_gpr_4 = (17220u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08B4BA74;
      }
      goto L_08B4BA10;
    }
L_08B4BA10:
    aot_gpr_31 = (0x08B4BA18u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20934, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B4BA18u) goto L_08B4BA18;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B4BA18:
    aot_gpr_7 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5516)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5512)));
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    aot_gpr_31 = (0x08B4BA2Cu);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B60E5C, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, ctx.gpr[2], ctx.gpr[3], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, ctx.gpr[9], ctx.gpr[10], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B4BA2Cu) goto L_08B4BA2C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B4BA2C:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    aot_gpr_4 = (ctx.gpr[2] >> 31u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    aot_gpr_4 = (ctx.gpr[1] | aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 | 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_08B4BA50;
      }
      goto L_08B4BA48;
    }
L_08B4BA48:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (0u | 1u);
      if (branch_taken) {
          goto L_08B4BA50;
      }
      goto L_08B4BA50;
    }
L_08B4BA50:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B4BA68;
      }
      goto L_08B4BA58;
    }
L_08B4BA58:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[18] + static_cast<std::uint32_t>(5))))));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(ctx.gpr[18] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_08B4BA74;
      }
      goto L_08B4BA68;
    }
L_08B4BA68:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[18] + static_cast<std::uint32_t>(5))))));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store8(ctx.gpr[18] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_08B4BA74;
L_08B4BA74:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[18] + static_cast<std::uint32_t>(5))))));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-1));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    if (aot_gpr_4 != 0u) {
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[18] + static_cast<std::uint32_t>(5))))));
        goto L_08B4BA88;
    }
    goto L_08B4BA88;
L_08B4BA88:
    aot_mem.aot_direct_store8(ctx.gpr[18] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[16]));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[18] + static_cast<std::uint32_t>(5))))));
    aot_gpr_4 = (0u | 0u);
    ctx.gpr[16] = (0u | 0u);
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    if (aot_gpr_4 != 0u) {
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[18] + static_cast<std::uint32_t>(5))))));
        goto L_08B4BAA4;
    }
    goto L_08B4BAA4;
L_08B4BAA4:
    aot_mem.aot_direct_store8(ctx.gpr[18] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[16]));
    goto L_08B4BAA8;
L_08B4BAA8:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[21] + static_cast<std::uint32_t>(538))))));
    aot_gpr_4 = (aot_gpr_4 & 8u);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08B4BAC4;
      }
      goto L_08B4BAC0;
    }
L_08B4BAC0:
    aot_mem.aot_direct_store8(ctx.gpr[18] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(0u));
    goto L_08B4BAC4;
L_08B4BAC4:
    { std::uint32_t aot_run_words[10]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(64), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      ctx.gpr[20] = aot_run_words[4];
      ctx.gpr[21] = aot_run_words[5];
      ctx.gpr[22] = aot_run_words[6];
      ctx.gpr[23] = aot_run_words[7];
      ctx.gpr[30] = aot_run_words[8];
      aot_gpr_31 = aot_run_words[9];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT();
    // PSPRECOMP_V811_LOCAL_LINK: preserve the 256-transfer scheduler boundary, skip outer trampoline.
    if (local_redispatch_rounds < 7u && rt.continue_generated_local_dispatch(ctx)) {
        ++local_redispatch_rounds;
        AOT_REGCACHE_SYNC_IN();
        local_transfers = 0u;
        local_pc = ctx.pc;
        entry_id = 0u;
        goto LOCAL_DISPATCH;
    }
    return;
L_08B4BAF4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-272));
    aot_gpr_7 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(560)));
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(ctx.fpr[20]), std::bit_cast<std::uint32_t>(ctx.fpr[22]), std::bit_cast<std::uint32_t>(ctx.fpr[24])};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(212), aot_run_words); }
    { const std::uint32_t aot_run_words[5]{ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(228), aot_run_words); }
    ctx.fpr[24] = std::bit_cast<float>(0u);
    ctx.gpr[18] = (0u | 2u);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[19] = (0u + static_cast<std::uint32_t>(-1));
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_13));
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    ctx.gpr[20] = (aot_gpr_5 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(224), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    { const std::uint32_t aot_run_words[5]{ctx.gpr[21], ctx.gpr[22], ctx.gpr[23], ctx.gpr[30], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(248), aot_run_words); }
    { const bool branch_taken = aot_gpr_7 == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(196), aot_gpr_6);
      if (branch_taken) {
          goto L_08B4BB70;
      }
      goto L_08B4BB5C;
    }
L_08B4BB5C:
    aot_gpr_31 = (0x08B4BB64u);
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(560)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0199_entry, 199u, 107u, 0x08B2090Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B4BB64u) goto L_08B4BB64;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B4BB64:
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(560)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store16(ctx.gpr[16] + static_cast<std::uint32_t>(560), static_cast<std::uint16_t>(aot_gpr_4));
    goto L_08B4BB70;
L_08B4BB70:
    ctx.gpr[21] = (ctx.gpr[16] + static_cast<std::uint32_t>(416));
    aot_gpr_4 = (ctx.gpr[20] + ctx.gpr[20]);
    aot_gpr_4 = (ctx.gpr[20] + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[21] + aot_gpr_4);
    aot_gpr_5 = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr_6 = (aot_gpr_5 + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_5);
    ctx.gpr[21] = (ctx.gpr[21] + aot_gpr_5);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    ctx.gpr[22] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[21] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(192), aot_gpr_4);
    ctx.gpr[23] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(204), ctx.gpr[22]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (ctx.gpr[22] << 3u);
    ctx.gpr[20] = (ctx.gpr[22] + aot_gpr_5);
    ctx.gpr[20] = (ctx.gpr[22] + ctx.gpr[20]);
    ctx.gpr[10] = (aot_gpr_4 + ctx.gpr[20]);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[10] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[10] + static_cast<std::uint32_t>(2))))));
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[10] + static_cast<std::uint32_t>(4))))));
    ctx.set_vfpu_scalar_bits_ct<1u>(ctx.gpr[8]);
    ctx.set_vfpu_scalar_bits_ct<33u>(ctx.gpr[9]);
    ctx.set_vfpu_scalar_bits_ct<32u>(ctx.gpr[10]);
    { float vfpu_value[4]{};
      ctx.write_vfpu_vector_with_destination_prefix_ct<96u, 1u>(vfpu_value); }
    { const std::uint16_t vfpu_half = 22080u;
      const std::uint32_t vfpu_sign = static_cast<std::uint32_t>(vfpu_half & 0x8000u) << 16u;
      std::uint32_t vfpu_exponent = (vfpu_half >> 10u) & 0x1Fu;
      std::uint32_t vfpu_mantissa = vfpu_half & 0x03FFu;
      std::uint32_t vfpu_bits = 0u;
      if (vfpu_exponent == 0u) {
        if (vfpu_mantissa == 0u) vfpu_bits = vfpu_sign;
        else {
          std::uint32_t shift = 0u;
          while ((vfpu_mantissa & 0x0400u) == 0u) { vfpu_mantissa <<= 1u; ++shift; }
          vfpu_mantissa &= 0x03FFu;
          vfpu_bits = vfpu_sign | ((113u - shift) << 23u) | (vfpu_mantissa << 13u);
        }
      } else if (vfpu_exponent == 31u) {
        vfpu_bits = vfpu_sign | 0x7F800000u | (vfpu_mantissa << 13u);
      } else {
        vfpu_bits = vfpu_sign | ((vfpu_exponent + 112u) << 23u) | (vfpu_mantissa << 13u);
      }
      const float vfpu_value[1]{std::bit_cast<float>(vfpu_bits)};
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 1u>(vfpu_value); }
    ctx.execute_vfpu_vi2f_ct<2u, 1u, 2u, 3u>();
    ctx.execute_vfpu_vi2f_ct<66u, 32u, 1u, 0u>();
    ctx.execute_vfpu_vcmp_ct<66u, 96u, 1u, 2u>();
    ctx.execute_vfpu_vec3_ct<98u, 66u, 64u, 1u, 1u>();
    ctx.execute_vfpu_vcmov_ct<66u, 98u, 1u, 0u, false>();
    { float vfpu_value[4]{1.0f, 1.0f, 1.0f, 1.0f};
      ctx.write_vfpu_vector_with_destination_prefix_ct<98u, 1u>(vfpu_value); }
    ctx.gpr[30] = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(ctx.fpr[20]), std::bit_cast<std::uint32_t>(ctx.fpr[22]), std::bit_cast<std::uint32_t>(ctx.fpr[24])};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_run_words); }
    aot_gpr_4 = (17096u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_31 = (0x08B4BC1Cu);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0207_entry, 207u, 267u, 0x08B40DF8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B4BC1Cu) goto L_08B4BC1C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B4BC1C:
    aot_gpr_4 = (ctx.gpr[23] | 0u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_6 = (ctx.gpr[30] | 0u);
    aot_gpr_7 = (ctx.gpr[22] | 0u);
    ctx.gpr[8] = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    ctx.gpr[9] = (aot_gpr_29 + static_cast<std::uint32_t>(52));
    ctx.gpr[10] = (aot_gpr_29 + static_cast<std::uint32_t>(60));
    ctx.gpr[11] = (0u | 2u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[3] = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[19]);
    aot_gpr_31 = (0x08B4BC58u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0092_entry, 92u, 607u, 0x08976C80u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B4BC58u) goto L_08B4BC58;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B4BC58:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(60))))));
    if (aot_gpr_4 == ctx.gpr[17]) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
        goto L_08B4BC74;
    }
    goto L_08B4BC64;
L_08B4BC64:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(60))))));
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[18];
      if (branch_taken) {
          goto L_08B4BD2C;
      }
      goto L_08B4BC70;
    }
L_08B4BC70:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    goto L_08B4BC74;
L_08B4BC74:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(52)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[20]);
    { const bool branch_taken = aot_gpr_5 == aot_gpr_4;
      if (branch_taken) {
          goto L_08B4BD2C;
      }
      goto L_08B4BC88;
    }
L_08B4BC88:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(52)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_7 = (0u | 10u);
    aot_gpr_5 = (aot_gpr_5 - aot_gpr_6);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_5); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr_7); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(208), ctx.gpr[21]);
    aot_gpr_5 = (aot_gpr_6 + ctx.gpr[20]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(200), ctx.gpr[16]);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(6))))));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(30040)));
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 & 16383u);
    aot_gpr_4 = (aot_gpr_4 << 16u);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 16u));
    ctx.gpr[19] = (ctx.lo);
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[19];
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08B4BF9C;
      }
      goto L_08B4BCD8;
    }
L_08B4BCD8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    goto L_08B4BCDC;
L_08B4BCDC:
    aot_gpr_5 = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_gpr_5 << 16u);
    aot_gpr_5 = (aot_gpr_6 + ctx.gpr[20]);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(6))))));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(208), ctx.gpr[21]);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 16u));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(200), ctx.gpr[16]);
    aot_gpr_5 = (aot_gpr_5 + ctx.gpr[17]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(30040)));
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 & 16383u);
    aot_gpr_4 = (aot_gpr_4 << 16u);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 16u));
    if (aot_gpr_4 != ctx.gpr[19]) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
        goto L_08B4BCDC;
    }
    goto L_08B4BD24;
L_08B4BD24:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(196)));
      if (branch_taken) {
          goto L_08B4BFA0;
      }
      goto L_08B4BD2C;
    }
L_08B4BD2C:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(60))))));
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[18];
      if (branch_taken) {
          goto L_08B4BDF4;
      }
      goto L_08B4BD38;
    }
L_08B4BD38:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(56)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[20]);
    { const bool branch_taken = aot_gpr_5 == aot_gpr_4;
      if (branch_taken) {
          goto L_08B4BDF4;
      }
      goto L_08B4BD50;
    }
L_08B4BD50:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(56)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_7 = (0u | 10u);
    aot_gpr_5 = (aot_gpr_5 - aot_gpr_6);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_5); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr_7); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(208), ctx.gpr[21]);
    aot_gpr_5 = (aot_gpr_6 + ctx.gpr[20]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(200), ctx.gpr[16]);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(6))))));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(30040)));
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 & 16383u);
    aot_gpr_4 = (aot_gpr_4 << 16u);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 16u));
    ctx.gpr[19] = (ctx.lo);
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[19];
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08B4BF9C;
      }
      goto L_08B4BDA0;
    }
L_08B4BDA0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    goto L_08B4BDA4;
L_08B4BDA4:
    aot_gpr_5 = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_gpr_5 << 16u);
    aot_gpr_5 = (aot_gpr_6 + ctx.gpr[20]);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(6))))));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(208), ctx.gpr[21]);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 16u));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(200), ctx.gpr[16]);
    aot_gpr_5 = (aot_gpr_5 + ctx.gpr[17]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(30040)));
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 & 16383u);
    aot_gpr_4 = (aot_gpr_4 << 16u);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 16u));
    if (aot_gpr_4 != ctx.gpr[19]) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
        goto L_08B4BDA4;
    }
    goto L_08B4BDEC;
L_08B4BDEC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(196)));
      if (branch_taken) {
          goto L_08B4BFA0;
      }
      goto L_08B4BDF4;
    }
L_08B4BDF4:
    aot_gpr_4 = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(200), ctx.gpr[16]);
    aot_fpr_13 = ctx.fpr[20] - aot_fpr_13;
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_31 = (0x08B4BE10u);
    aot_fpr_12 = ctx.fpr[22] - aot_fpr_12;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B4BE10u) goto L_08B4BE10;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B4BE10:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[20] < ctx.fpr[24])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (16585u << 16u);
      if (branch_taken) {
          goto L_08B4BE30;
      }
      goto L_08B4BE24;
    }
L_08B4BE24:
    aot_gpr_4 = (aot_gpr_4 | 4059u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fpr[20] = ctx.fpr[20] + aot_fpr_12;
    goto L_08B4BE30;
L_08B4BE30:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(208), ctx.gpr[21]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (0u | 0u);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[20]);
    ctx.gpr[23] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(8))))));
    aot_gpr_4 = (16672u << 16u);
    ctx.gpr[23] = (ctx.gpr[23] & 15u);
    ctx.fpr[26] = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[23]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_08B4BF9C;
      }
      goto L_08B4BE64;
    }
L_08B4BE64:
    aot_gpr_4 = (16585u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 4059u);
    ctx.gpr[30] = (static_cast<std::int32_t>(ctx.gpr[23]) < 2 ? 1u : 0u);
    ctx.fpr[22] = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[22] = (aot_gpr_29 + static_cast<std::uint32_t>(76));
    ctx.gpr[21] = (aot_gpr_29 + static_cast<std::uint32_t>(68));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    goto L_08B4BE80;
L_08B4BE80:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(30040)));
    aot_gpr_5 = (aot_gpr_5 + ctx.gpr[20]);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(6))))));
    aot_gpr_5 = (aot_gpr_5 + ctx.gpr[18]);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(192)));
    aot_gpr_4 = (aot_gpr_4 & 16383u);
    ctx.gpr[16] = (aot_gpr_4 << 16u);
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 16u));
    { const bool branch_taken = ctx.gpr[16] != aot_gpr_5;
      if (branch_taken) {
          goto L_08B4BEC0;
      }
      goto L_08B4BEB8;
    }
L_08B4BEB8:
    { const bool branch_taken = ctx.gpr[30] == 0u;
      if (branch_taken) {
          goto L_08B4BF84;
      }
      goto L_08B4BEC0;
    }
L_08B4BEC0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (ctx.gpr[16] << 3u);
    aot_gpr_5 = (ctx.gpr[16] + aot_gpr_5);
    aot_gpr_5 = (ctx.gpr[16] + aot_gpr_5);
    ctx.gpr[9] = (aot_gpr_4 + aot_gpr_5);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[9] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[9] + static_cast<std::uint32_t>(2))))));
    ctx.set_vfpu_scalar_bits_ct<1u>(ctx.gpr[8]);
    ctx.set_vfpu_scalar_bits_ct<33u>(ctx.gpr[9]);
    ctx.execute_vfpu_vi2f_ct<2u, 1u, 2u, 3u>();
    aot_mem.aot_direct_store32(ctx.gpr[22] + static_cast<std::uint32_t>(0), ctx.vfpu_scalar_bits_ct<2u>());
    aot_mem.aot_direct_store32(ctx.gpr[22] + static_cast<std::uint32_t>(4), ctx.vfpu_scalar_bits_ct<34u>());
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (aot_gpr_4 + ctx.gpr[20]);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[9] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[9] + static_cast<std::uint32_t>(2))))));
    ctx.set_vfpu_scalar_bits_ct<1u>(ctx.gpr[8]);
    ctx.set_vfpu_scalar_bits_ct<33u>(ctx.gpr[9]);
    ctx.execute_vfpu_vi2f_ct<2u, 1u, 2u, 3u>();
    aot_mem.aot_direct_store32(ctx.gpr[21] + static_cast<std::uint32_t>(0), ctx.vfpu_scalar_bits_ct<2u>());
    aot_mem.aot_direct_store32(ctx.gpr[21] + static_cast<std::uint32_t>(4), ctx.vfpu_scalar_bits_ct<34u>());
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(76)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(68)));
    aot_fpr_13 = aot_fpr_13 - aot_fpr_12;
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(80)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(72)));
    aot_gpr_31 = (0x08B4BF38u);
    aot_fpr_12 = aot_fpr_12 - aot_fpr_14;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B4BF38u) goto L_08B4BF38;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B4BF38:
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < ctx.fpr[24])) ? 0x00800000u : 0u);
    if (((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_12 = aot_fpr_12 + ctx.fpr[22];
        goto L_08B4BF4C;
    }
    goto L_08B4BF4C;
L_08B4BF4C:
    aot_gpr_31 = (0x08B4BF54u);
    aot_fpr_12 = aot_fpr_12 - ctx.fpr[20];
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0162_entry, 162u, 580u, 0x08A8F0B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B4BF54u) goto L_08B4BF54;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B4BF54:
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < ctx.fpr[24])) ? 0x00800000u : 0u);
    if (((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12) ^ 0x80000000u);
        goto L_08B4BF68;
    }
    goto L_08B4BF68;
L_08B4BF68:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[26] < aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08B4BF84;
      }
      goto L_08B4BF78;
    }
L_08B4BF78:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[19] = (ctx.gpr[16] | 0u);
    goto L_08B4BF84;
L_08B4BF84:
    aot_gpr_4 = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (aot_gpr_4 << 16u);
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[18]) >> 16u));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[23]) ? 1u : 0u);
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
        goto L_08B4BE80;
    }
    goto L_08B4BF9C;
L_08B4BF9C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(196)));
    goto L_08B4BFA0;
L_08B4BFA0:
    aot_mem.aot_direct_store16(aot_gpr_5 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[19]));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_gpr_6 = (aot_gpr_6 + ctx.gpr[20]);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_6 + static_cast<std::uint32_t>(6))))));
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(204)));
    aot_gpr_6 = (aot_gpr_6 + ctx.gpr[17]);
    aot_gpr_6 = (aot_gpr_6 + aot_gpr_6);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_direct_store16(aot_gpr_5 + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(aot_gpr_4));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_7) < static_cast<std::int32_t>(aot_gpr_6) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[21] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(208)));
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0210_entry, 210u, 2u, 0x08B4C00Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08B4BFE0;
    }
L_08B4BFE0:
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store8(aot_gpr_5 + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(2))))));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_6 = (aot_gpr_6 << 2u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(2))))));
    ctx.pc = 0x08B4C000u; AOT_REGCACHE_SYNC_OUT(); return;
}

#undef AOT_REGCACHE_SYNC_IN
#undef AOT_REGCACHE_SYNC_OUT

void recomp_unit_0209(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0209_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_209(Runtime &runtime) {
    runtime.register_generated_unit(209u, 0x08B48000u, 16384u, &recomp_unit_0209, &recomp_unit_0209_entry);
    runtime.register_function(0x08B48000u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48014u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48034u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48038u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48088u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48098u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4809Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B480C4u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B480E8u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B480F8u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48104u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48110u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48264u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48274u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4828Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B482B0u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B482B4u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B482C8u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B482D4u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B482DCu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4830Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48314u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48330u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48338u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48344u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4834Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B483A8u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B483ACu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B483F8u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48404u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4840Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4851Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4852Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48540u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B485E0u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B485F8u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48604u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48630u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48850u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48868u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48870u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48878u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48894u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4889Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B488A4u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B488FCu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48904u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48914u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48918u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48950u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48958u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48978u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48994u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B489A4u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B489B4u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B489B8u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B489C8u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B489E4u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48A00u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48A18u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48A20u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48A3Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48A44u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48A4Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48A54u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48A68u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48A80u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48A88u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48AA4u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48AB0u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48ACCu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48AE4u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48AF0u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48B20u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48B5Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48BCCu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48BD8u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48BE0u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48BE8u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48BF0u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48C00u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48C18u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48C2Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48C38u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48C40u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48C4Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48C64u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48C6Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48C84u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48C98u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48CA4u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48CACu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48CB4u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48D08u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48D14u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48D1Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48D30u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48D54u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48D5Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48D78u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48D80u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48DD8u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48DE0u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48DE8u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48E04u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48E0Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48E1Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48E24u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48E40u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48E48u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48E50u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48E90u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48E9Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48EA0u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48EB0u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48EB8u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48EC0u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48EDCu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48EE4u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48EECu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48F40u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48F4Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48F54u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48F70u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48F78u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48FBCu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48FC8u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48FF8u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4900Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4901Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4902Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49034u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49044u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49054u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49064u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4906Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49074u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4907Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49088u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4909Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B490ACu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B490D4u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B490E8u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B490F4u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B490FCu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49108u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49110u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49114u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4911Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49130u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49140u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49158u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49160u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49170u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49174u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49184u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49188u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49198u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B491A4u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B491B0u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B491B8u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B491C4u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B491E4u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B491F4u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B491FCu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4920Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49218u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49220u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49228u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49230u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49234u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4923Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49250u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4925Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49260u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4928Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4929Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B492ACu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B492B4u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B492C4u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B492E0u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B492F0u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49300u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49304u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49310u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49328u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49340u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49358u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49370u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49388u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49398u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B493A0u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B493A8u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B493B0u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B493B8u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B493C0u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B493C8u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B493DCu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B493ECu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B493FCu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49404u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49418u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49428u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49438u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49440u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49454u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49464u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49474u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4947Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49490u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B494A0u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B494B0u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B494B8u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B494C0u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B494C8u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B494E4u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B494ECu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B494FCu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49524u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4952Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49534u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49544u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49588u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49590u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B495ACu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B495C0u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B495CCu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B495D8u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B495E8u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B495F4u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49614u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49620u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49634u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49640u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49650u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4965Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4968Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4969Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B496A8u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B496B4u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B496BCu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B496C8u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B496D0u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B496D8u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B496E0u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B496ECu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B496F4u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49730u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49780u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49788u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B497E0u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B497E8u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49800u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49808u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49810u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49824u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49844u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49850u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49864u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49884u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49890u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B498A0u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B498C0u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B498CCu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B498DCu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B498ECu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49908u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49910u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4992Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4993Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49950u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49960u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4996Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B499ACu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B499E0u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49A0Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49A40u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49A74u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49A88u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49A98u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49AB0u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49ABCu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49AC4u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49AE4u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49B24u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49BACu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49BECu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49C00u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49C18u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49C48u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49C60u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49C78u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49C90u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49CACu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49CC4u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49D1Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49D3Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49D60u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49D88u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49D98u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49DB4u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49DD0u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49DE4u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49DF4u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49E04u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49E14u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49E20u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49E30u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49E44u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49E58u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49E6Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49E74u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49E84u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49E8Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49EA8u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49EBCu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49ECCu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49ED4u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49EE4u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49EECu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49EFCu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49F0Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49F28u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49F38u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49F40u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49F50u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49F58u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49F68u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49F78u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49F84u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49FA4u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49FACu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49FB8u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49FD4u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49FF4u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A004u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A020u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A02Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A03Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A05Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A064u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A06Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A074u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A088u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A090u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A098u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A0B4u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A0C4u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A0D8u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A0E4u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A0FCu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A108u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A12Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A150u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A178u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A1A0u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A1ACu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A1B8u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A1C4u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A1CCu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A1DCu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A1E8u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A1F8u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A204u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A220u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A240u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A26Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A27Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A284u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A2CCu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A33Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A358u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A364u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A3A8u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A41Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A438u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A440u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A44Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A478u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A49Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A4B0u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A4C4u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A4D8u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A504u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A530u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A534u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A540u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A550u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A558u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A560u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A574u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A590u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A5A8u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A5C0u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A5E4u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A5ECu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A604u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A610u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A630u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A648u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A664u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A678u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A6ACu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A7D0u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A7DCu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A7E4u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A808u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A814u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A81Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A824u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A82Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A838u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A864u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A888u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A88Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A8A8u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A8B8u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A8D0u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A8E8u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A8F0u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A8F8u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A900u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A910u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A920u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A93Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A954u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A95Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A964u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A96Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A97Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A98Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A99Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A9A8u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A9ACu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A9C8u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A9D8u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A9F0u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4AA08u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4AA10u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4AA18u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4AA20u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4AA30u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4AA40u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4AA5Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4AA74u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4AA7Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4AA84u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4AA8Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4AA9Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4AAACu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4AABCu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4AAC8u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4AAD8u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4AAE8u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4AAF8u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4AB0Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4AB10u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4AB28u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4AB3Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4ABDCu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4AC3Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4AC48u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4AC5Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4AC90u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4AC9Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4ACB0u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4ACE4u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4ACF0u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4AD04u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4AD38u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4AD48u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4AD5Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4AD6Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4AD70u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4AD88u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4AD98u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4ADA0u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4ADA8u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4ADBCu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4ADCCu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4ADE0u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4ADF4u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4AE04u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4AE6Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4AE94u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4AEBCu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4AEE4u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4AF08u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4AF2Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4AF44u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4AF54u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4AF68u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4AF6Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4AF80u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4AF84u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4AF8Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4AF98u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4AFACu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4AFC4u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4AFDCu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4AFE4u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B000u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B01Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B034u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B03Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B054u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B070u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B080u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B088u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B090u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B098u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B0E0u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B124u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B12Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B138u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B1C4u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B1E8u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B1F0u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B220u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B224u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B230u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B234u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B244u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B24Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B254u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B25Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B268u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B27Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B284u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B290u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B298u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B2C4u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B2E0u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B2E4u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B30Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B328u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B32Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B344u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B370u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B38Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B394u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B3A0u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B3A8u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B3B0u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B404u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B44Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B468u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B470u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B488u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B490u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B4ACu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B4B4u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B4CCu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B4D0u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B4E4u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B4ECu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B4F4u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B4FCu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B504u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B510u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B53Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B558u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B55Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B570u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B59Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B5B8u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B5C0u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B5C8u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B648u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B664u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B66Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B688u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B68Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B69Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B6A4u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B6B4u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B6B8u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B720u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B73Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B744u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B760u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B764u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B76Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B798u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B7B4u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B7B8u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B7CCu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B7F8u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B814u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B81Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B834u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B83Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B844u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B850u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B86Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B8A4u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B8D8u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B8F8u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B900u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B90Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B914u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B924u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4BA10u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4BA18u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4BA2Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4BA48u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4BA50u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4BA58u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4BA68u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4BA74u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4BA88u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4BAA4u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4BAA8u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4BAC0u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4BAC4u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4BAF4u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4BB5Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4BB64u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4BB70u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4BC1Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4BC58u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4BC64u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4BC70u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4BC74u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4BC88u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4BCD8u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4BCDCu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4BD24u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4BD2Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4BD38u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4BD50u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4BDA0u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4BDA4u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4BDECu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4BDF4u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4BE10u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4BE24u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4BE30u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4BE64u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4BE80u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4BEB8u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4BEC0u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4BF38u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4BF4Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4BF54u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4BF68u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4BF78u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4BF84u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4BF9Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4BFA0u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4BFE0u, &recomp_unit_0209, "recomp_unit_0209");
}
} // namespace psprecomp
