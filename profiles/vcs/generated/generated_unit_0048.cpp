#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include "vcs_resident_regions.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
// PSPRECOMP_V811_COMPACT_DISPATCH: 64-slot occupancy masks + per-group base id.
static constexpr std::uint64_t kEntryMasks_recomp_unit_0048[64] = {
    0x102A912900008325ull, 0x1414008610220408ull, 0x2888080182200401ull, 0x4804001001008204ull,
    0x4008404402000A11ull, 0x10A0042022442101ull, 0x8842210800280280ull, 0x4004421015020050ull,
    0x88428010A0042022ull, 0x8842210A08222210ull, 0x8222210884282088ull, 0x42820888842210A0ull,
    0x140104A028221088ull, 0x540000808C101028ull, 0x4221090842108400ull, 0x442110850022A888ull,
    0x2244421108500224ull, 0x1228000225220500ull, 0x030240811014A224ull, 0x0A01922140000C00ull,
    0x0A10225112888528ull, 0x201000000000A005ull, 0x1012200228011200ull, 0x14A0104802900880ull,
    0xA80C090200410400ull, 0x5292111292110400ull, 0x0555500681010080ull, 0x511042A20A1000B1ull,
    0x2011884288821448ull, 0x2054022000808000ull, 0x1010140081840840ull, 0x0000000412920984ull,
    0x4444028901500002ull, 0x1122244488911222ull, 0x2525204048000489ull, 0x4AA1452525252525ull,
    0x4A25128904400860ull, 0x28952A552A551494ull, 0x4004AA8155548201ull, 0x4802A2001080D540ull,
    0x1514900008200000ull, 0x2222001224922D00ull, 0x008034000011098Aull, 0x06309041120A8840ull,
    0x1A00082208840088ull, 0x200A206010000020ull, 0x0400001102200100ull, 0x8005520800002204ull,
    0x8000040110D04410ull, 0x2400001080000106ull, 0xC002200880A20A01ull, 0x0A022920A10000D0ull,
    0x80808140102A542Cull, 0x0408284000805880ull, 0x55409A8B55545080ull, 0x0022103080840013ull,
    0x92AA440680010822ull, 0x020204108002AAAAull, 0x101A0002214240A9ull, 0x4011022A222A2100ull,
    0x100212080020D000ull, 0xA000000100000040ull, 0x8802020440100081ull, 0x8001068002110000ull,
};
static constexpr std::uint16_t kEntryBases_recomp_unit_0048[64] = {
    1u, 17u, 29u, 40u, 48u, 58u, 70u, 81u, 92u, 104u, 118u, 132u, 146u, 159u, 170u, 182u,
    197u, 211u, 223u, 237u, 248u, 265u, 271u, 281u, 293u, 304u, 320u, 334u, 350u, 365u, 373u, 383u,
    393u, 405u, 422u, 436u, 460u, 476u, 501u, 519u, 533u, 542u, 557u, 568u, 583u, 594u, 602u, 608u,
    618u, 628u, 635u, 647u, 660u, 675u, 685u, 708u, 719u, 735u, 749u, 763u, 777u, 786u, 790u, 799u,
};
void recomp_unit_0048_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
// PSPRECOMP_AOT_REGCACHE_BEGIN
// PSPRECOMP_AOT_REGCACHE_META gprs=4,5,6,16,31,29 fprs=12,13,20,14 gpr_occ=4421 fpr_occ=589 gpr_total=5908 fpr_total=677
    std::uint32_t aot_gpr_4 = ctx.gpr[4];
    std::uint32_t aot_gpr_5 = ctx.gpr[5];
    std::uint32_t aot_gpr_6 = ctx.gpr[6];
    std::uint32_t aot_gpr_16 = ctx.gpr[16];
    std::uint32_t aot_gpr_31 = ctx.gpr[31];
    std::uint32_t aot_gpr_29 = ctx.gpr[29];
    float aot_fpr_12 = ctx.fpr[12];
    float aot_fpr_13 = ctx.fpr[13];
    float aot_fpr_20 = ctx.fpr[20];
    float aot_fpr_14 = ctx.fpr[14];
    bool aot_regcache_valid = true;
#define AOT_REGCACHE_SYNC_OUT() do { if (aot_regcache_valid) { ctx.gpr[4] = aot_gpr_4; ctx.gpr[5] = aot_gpr_5; ctx.gpr[6] = aot_gpr_6; ctx.gpr[16] = aot_gpr_16; ctx.gpr[31] = aot_gpr_31; ctx.gpr[29] = aot_gpr_29; ctx.fpr[12] = aot_fpr_12; ctx.fpr[13] = aot_fpr_13; ctx.fpr[20] = aot_fpr_20; ctx.fpr[14] = aot_fpr_14; } } while (false)
#define AOT_REGCACHE_SYNC_IN() do { if (aot_regcache_valid) { aot_gpr_4 = ctx.gpr[4]; aot_gpr_5 = ctx.gpr[5]; aot_gpr_6 = ctx.gpr[6]; aot_gpr_16 = ctx.gpr[16]; aot_gpr_31 = ctx.gpr[31]; aot_gpr_29 = ctx.gpr[29]; aot_fpr_12 = ctx.fpr[12]; aot_fpr_13 = ctx.fpr[13]; aot_fpr_20 = ctx.fpr[20]; aot_fpr_14 = ctx.fpr[14]; } } while (false)
// PSPRECOMP_AOT_REGCACHE_END
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_redispatch_rounds = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x088C4000u;
        entry_id = 0u;
        if (entry_delta < 16384u && (entry_delta & 3u) == 0u) {
            const std::uint32_t entry_slot = entry_delta >> 2u;
            const std::uint32_t entry_group = entry_slot >> 6u;
            const std::uint64_t entry_mask = kEntryMasks_recomp_unit_0048[entry_group];
            const std::uint64_t entry_bit = 1ull << (entry_slot & 63u);
            if ((entry_mask & entry_bit) != 0u) {
                entry_id = static_cast<std::uint16_t>(
                    kEntryBases_recomp_unit_0048[entry_group] +
                    std::popcount(entry_mask & (entry_bit - 1ull)));
            }
        }
    }
    switch (entry_id) {
    case 1u: goto L_088C4000;
    case 2u: goto L_088C4008;
    case 3u: goto L_088C4014;
    case 4u: goto L_088C4020;
    case 5u: goto L_088C4024;
    case 6u: goto L_088C403C;
    case 7u: goto L_088C4080;
    case 8u: goto L_088C408C;
    case 9u: goto L_088C4094;
    case 10u: goto L_088C40A0;
    case 11u: goto L_088C40B0;
    case 12u: goto L_088C40BC;
    case 13u: goto L_088C40C4;
    case 14u: goto L_088C40CC;
    case 15u: goto L_088C40D4;
    case 16u: goto L_088C40F0;
    case 17u: goto L_088C410C;
    case 18u: goto L_088C4128;
    case 19u: goto L_088C4144;
    case 20u: goto L_088C4154;
    case 21u: goto L_088C4170;
    case 22u: goto L_088C4184;
    case 23u: goto L_088C4188;
    case 24u: goto L_088C419C;
    case 25u: goto L_088C41C8;
    case 26u: goto L_088C41D0;
    case 27u: goto L_088C41E8;
    case 28u: goto L_088C41F0;
    case 29u: goto L_088C4200;
    case 30u: goto L_088C4228;
    case 31u: goto L_088C4254;
    case 32u: goto L_088C4264;
    case 33u: goto L_088C427C;
    case 34u: goto L_088C4280;
    case 35u: goto L_088C42AC;
    case 36u: goto L_088C42CC;
    case 37u: goto L_088C42DC;
    case 38u: goto L_088C42EC;
    case 39u: goto L_088C42F4;
    case 40u: goto L_088C4308;
    case 41u: goto L_088C4324;
    case 42u: goto L_088C433C;
    case 43u: goto L_088C4360;
    case 44u: goto L_088C4390;
    case 45u: goto L_088C43C8;
    case 46u: goto L_088C43EC;
    case 47u: goto L_088C43F8;
    case 48u: goto L_088C4400;
    case 49u: goto L_088C4410;
    case 50u: goto L_088C4424;
    case 51u: goto L_088C442C;
    case 52u: goto L_088C4464;
    case 53u: goto L_088C4488;
    case 54u: goto L_088C4498;
    case 55u: goto L_088C44B8;
    case 56u: goto L_088C44CC;
    case 57u: goto L_088C44F8;
    case 58u: goto L_088C4500;
    case 59u: goto L_088C4520;
    case 60u: goto L_088C4534;
    case 61u: goto L_088C4548;
    case 62u: goto L_088C4558;
    case 63u: goto L_088C4564;
    case 64u: goto L_088C4574;
    case 65u: goto L_088C4594;
    case 66u: goto L_088C45A8;
    case 67u: goto L_088C45D4;
    case 68u: goto L_088C45DC;
    case 69u: goto L_088C45F0;
    case 70u: goto L_088C461C;
    case 71u: goto L_088C4624;
    case 72u: goto L_088C464C;
    case 73u: goto L_088C4654;
    case 74u: goto L_088C468C;
    case 75u: goto L_088C46A0;
    case 76u: goto L_088C46B4;
    case 77u: goto L_088C46C4;
    case 78u: goto L_088C46D8;
    case 79u: goto L_088C46EC;
    case 80u: goto L_088C46FC;
    case 81u: goto L_088C4710;
    case 82u: goto L_088C4718;
    case 83u: goto L_088C4744;
    case 84u: goto L_088C4760;
    case 85u: goto L_088C4768;
    case 86u: goto L_088C4770;
    case 87u: goto L_088C4790;
    case 88u: goto L_088C47A4;
    case 89u: goto L_088C47B8;
    case 90u: goto L_088C47C8;
    case 91u: goto L_088C47F8;
    case 92u: goto L_088C4804;
    case 93u: goto L_088C4814;
    case 94u: goto L_088C4834;
    case 95u: goto L_088C4848;
    case 96u: goto L_088C4874;
    case 97u: goto L_088C487C;
    case 98u: goto L_088C4890;
    case 99u: goto L_088C48BC;
    case 100u: goto L_088C48C4;
    case 101u: goto L_088C48D8;
    case 102u: goto L_088C48EC;
    case 103u: goto L_088C48FC;
    case 104u: goto L_088C4910;
    case 105u: goto L_088C4924;
    case 106u: goto L_088C4934;
    case 107u: goto L_088C4944;
    case 108u: goto L_088C4954;
    case 109u: goto L_088C496C;
    case 110u: goto L_088C4984;
    case 111u: goto L_088C498C;
    case 112u: goto L_088C49A0;
    case 113u: goto L_088C49B4;
    case 114u: goto L_088C49C4;
    case 115u: goto L_088C49D8;
    case 116u: goto L_088C49EC;
    case 117u: goto L_088C49FC;
    case 118u: goto L_088C4A0C;
    case 119u: goto L_088C4A1C;
    case 120u: goto L_088C4A34;
    case 121u: goto L_088C4A4C;
    case 122u: goto L_088C4A54;
    case 123u: goto L_088C4A68;
    case 124u: goto L_088C4A7C;
    case 125u: goto L_088C4A8C;
    case 126u: goto L_088C4AA0;
    case 127u: goto L_088C4AB4;
    case 128u: goto L_088C4AC4;
    case 129u: goto L_088C4AD4;
    case 130u: goto L_088C4AE4;
    case 131u: goto L_088C4AFC;
    case 132u: goto L_088C4B14;
    case 133u: goto L_088C4B1C;
    case 134u: goto L_088C4B30;
    case 135u: goto L_088C4B44;
    case 136u: goto L_088C4B54;
    case 137u: goto L_088C4B68;
    case 138u: goto L_088C4B7C;
    case 139u: goto L_088C4B8C;
    case 140u: goto L_088C4B9C;
    case 141u: goto L_088C4BAC;
    case 142u: goto L_088C4BC4;
    case 143u: goto L_088C4BDC;
    case 144u: goto L_088C4BE4;
    case 145u: goto L_088C4BF8;
    case 146u: goto L_088C4C0C;
    case 147u: goto L_088C4C1C;
    case 148u: goto L_088C4C30;
    case 149u: goto L_088C4C44;
    case 150u: goto L_088C4C54;
    case 151u: goto L_088C4C6C;
    case 152u: goto L_088C4C74;
    case 153u: goto L_088C4C94;
    case 154u: goto L_088C4C9C;
    case 155u: goto L_088C4CA8;
    case 156u: goto L_088C4CC0;
    case 157u: goto L_088C4CE8;
    case 158u: goto L_088C4CF0;
    case 159u: goto L_088C4D0C;
    case 160u: goto L_088C4D14;
    case 161u: goto L_088C4D30;
    case 162u: goto L_088C4D50;
    case 163u: goto L_088C4D68;
    case 164u: goto L_088C4D6C;
    case 165u: goto L_088C4D7C;
    case 166u: goto L_088C4D9C;
    case 167u: goto L_088C4DE8;
    case 168u: goto L_088C4DF0;
    case 169u: goto L_088C4DF8;
    case 170u: goto L_088C4E28;
    case 171u: goto L_088C4E3C;
    case 172u: goto L_088C4E50;
    case 173u: goto L_088C4E64;
    case 174u: goto L_088C4E78;
    case 175u: goto L_088C4E8C;
    case 176u: goto L_088C4EA0;
    case 177u: goto L_088C4EAC;
    case 178u: goto L_088C4EC0;
    case 179u: goto L_088C4ED4;
    case 180u: goto L_088C4EE4;
    case 181u: goto L_088C4EF8;
    case 182u: goto L_088C4F0C;
    case 183u: goto L_088C4F1C;
    case 184u: goto L_088C4F2C;
    case 185u: goto L_088C4F34;
    case 186u: goto L_088C4F3C;
    case 187u: goto L_088C4F44;
    case 188u: goto L_088C4F54;
    case 189u: goto L_088C4F80;
    case 190u: goto L_088C4F88;
    case 191u: goto L_088C4F9C;
    case 192u: goto L_088C4FB0;
    case 193u: goto L_088C4FC0;
    case 194u: goto L_088C4FD4;
    case 195u: goto L_088C4FE8;
    case 196u: goto L_088C4FF8;
    case 197u: goto L_088C5008;
    case 198u: goto L_088C5014;
    case 199u: goto L_088C5024;
    case 200u: goto L_088C5050;
    case 201u: goto L_088C5058;
    case 202u: goto L_088C506C;
    case 203u: goto L_088C5080;
    case 204u: goto L_088C5090;
    case 205u: goto L_088C50A4;
    case 206u: goto L_088C50B8;
    case 207u: goto L_088C50C8;
    case 208u: goto L_088C50D8;
    case 209u: goto L_088C50E4;
    case 210u: goto L_088C50F4;
    case 211u: goto L_088C5120;
    case 212u: goto L_088C5128;
    case 213u: goto L_088C5144;
    case 214u: goto L_088C5154;
    case 215u: goto L_088C5160;
    case 216u: goto L_088C5168;
    case 217u: goto L_088C5174;
    case 218u: goto L_088C5184;
    case 219u: goto L_088C51CC;
    case 220u: goto L_088C51D4;
    case 221u: goto L_088C51E4;
    case 222u: goto L_088C51F0;
    case 223u: goto L_088C5208;
    case 224u: goto L_088C5214;
    case 225u: goto L_088C5224;
    case 226u: goto L_088C5234;
    case 227u: goto L_088C523C;
    case 228u: goto L_088C5248;
    case 229u: goto L_088C5250;
    case 230u: goto L_088C5270;
    case 231u: goto L_088C5280;
    case 232u: goto L_088C529C;
    case 233u: goto L_088C52B8;
    case 234u: goto L_088C52C4;
    case 235u: goto L_088C52E0;
    case 236u: goto L_088C52E4;
    case 237u: goto L_088C5328;
    case 238u: goto L_088C532C;
    case 239u: goto L_088C5378;
    case 240u: goto L_088C5380;
    case 241u: goto L_088C5394;
    case 242u: goto L_088C53A4;
    case 243u: goto L_088C53B0;
    case 244u: goto L_088C53BC;
    case 245u: goto L_088C53C0;
    case 246u: goto L_088C53E4;
    case 247u: goto L_088C53EC;
    case 248u: goto L_088C540C;
    case 249u: goto L_088C5414;
    case 250u: goto L_088C5420;
    case 251u: goto L_088C5428;
    case 252u: goto L_088C543C;
    case 253u: goto L_088C544C;
    case 254u: goto L_088C545C;
    case 255u: goto L_088C5464;
    case 256u: goto L_088C5470;
    case 257u: goto L_088C5480;
    case 258u: goto L_088C5490;
    case 259u: goto L_088C5498;
    case 260u: goto L_088C54A4;
    case 261u: goto L_088C54B4;
    case 262u: goto L_088C54D0;
    case 263u: goto L_088C54E4;
    case 264u: goto L_088C54EC;
    case 265u: goto L_088C5500;
    case 266u: goto L_088C5508;
    case 267u: goto L_088C5534;
    case 268u: goto L_088C553C;
    case 269u: goto L_088C55D0;
    case 270u: goto L_088C55F4;
    case 271u: goto L_088C5624;
    case 272u: goto L_088C5630;
    case 273u: goto L_088C5640;
    case 274u: goto L_088C566C;
    case 275u: goto L_088C5674;
    case 276u: goto L_088C5684;
    case 277u: goto L_088C56B4;
    case 278u: goto L_088C56C4;
    case 279u: goto L_088C56D0;
    case 280u: goto L_088C56F0;
    case 281u: goto L_088C571C;
    case 282u: goto L_088C572C;
    case 283u: goto L_088C5750;
    case 284u: goto L_088C575C;
    case 285u: goto L_088C5764;
    case 286u: goto L_088C578C;
    case 287u: goto L_088C5798;
    case 288u: goto L_088C57B0;
    case 289u: goto L_088C57D4;
    case 290u: goto L_088C57DC;
    case 291u: goto L_088C57E8;
    case 292u: goto L_088C57F0;
    case 293u: goto L_088C5828;
    case 294u: goto L_088C5840;
    case 295u: goto L_088C5858;
    case 296u: goto L_088C5884;
    case 297u: goto L_088C58A0;
    case 298u: goto L_088C58AC;
    case 299u: goto L_088C58C8;
    case 300u: goto L_088C58CC;
    case 301u: goto L_088C58EC;
    case 302u: goto L_088C58F4;
    case 303u: goto L_088C58FC;
    case 304u: goto L_088C5928;
    case 305u: goto L_088C5940;
    case 306u: goto L_088C5950;
    case 307u: goto L_088C5964;
    case 308u: goto L_088C5970;
    case 309u: goto L_088C597C;
    case 310u: goto L_088C5984;
    case 311u: goto L_088C5990;
    case 312u: goto L_088C59A0;
    case 313u: goto L_088C59B0;
    case 314u: goto L_088C59C4;
    case 315u: goto L_088C59D0;
    case 316u: goto L_088C59DC;
    case 317u: goto L_088C59E4;
    case 318u: goto L_088C59F0;
    case 319u: goto L_088C59F8;
    case 320u: goto L_088C5A1C;
    case 321u: goto L_088C5A40;
    case 322u: goto L_088C5A60;
    case 323u: goto L_088C5A7C;
    case 324u: goto L_088C5A84;
    case 325u: goto L_088C5A88;
    case 326u: goto L_088C5AB0;
    case 327u: goto L_088C5AB8;
    case 328u: goto L_088C5AC0;
    case 329u: goto L_088C5AC8;
    case 330u: goto L_088C5AD0;
    case 331u: goto L_088C5AD8;
    case 332u: goto L_088C5AE0;
    case 333u: goto L_088C5AE8;
    case 334u: goto L_088C5B00;
    case 335u: goto L_088C5B10;
    case 336u: goto L_088C5B14;
    case 337u: goto L_088C5B1C;
    case 338u: goto L_088C5B50;
    case 339u: goto L_088C5B64;
    case 340u: goto L_088C5B6C;
    case 341u: goto L_088C5B84;
    case 342u: goto L_088C5B94;
    case 343u: goto L_088C5B9C;
    case 344u: goto L_088C5BA4;
    case 345u: goto L_088C5BB8;
    case 346u: goto L_088C5BD0;
    case 347u: goto L_088C5BE0;
    case 348u: goto L_088C5BF0;
    case 349u: goto L_088C5BF8;
    case 350u: goto L_088C5C0C;
    case 351u: goto L_088C5C18;
    case 352u: goto L_088C5C28;
    case 353u: goto L_088C5C30;
    case 354u: goto L_088C5C44;
    case 355u: goto L_088C5C5C;
    case 356u: goto L_088C5C6C;
    case 357u: goto L_088C5C7C;
    case 358u: goto L_088C5C84;
    case 359u: goto L_088C5C98;
    case 360u: goto L_088C5CAC;
    case 361u: goto L_088C5CBC;
    case 362u: goto L_088C5CC0;
    case 363u: goto L_088C5CD0;
    case 364u: goto L_088C5CF4;
    case 365u: goto L_088C5D3C;
    case 366u: goto L_088C5D5C;
    case 367u: goto L_088C5D94;
    case 368u: goto L_088C5DA4;
    case 369u: goto L_088C5DC8;
    case 370u: goto L_088C5DD0;
    case 371u: goto L_088C5DD8;
    case 372u: goto L_088C5DF4;
    case 373u: goto L_088C5E18;
    case 374u: goto L_088C5E2C;
    case 375u: goto L_088C5E48;
    case 376u: goto L_088C5E5C;
    case 377u: goto L_088C5E60;
    case 378u: goto L_088C5E7C;
    case 379u: goto L_088C5EA8;
    case 380u: goto L_088C5EB0;
    case 381u: goto L_088C5ED0;
    case 382u: goto L_088C5EF0;
    case 383u: goto L_088C5F08;
    case 384u: goto L_088C5F1C;
    case 385u: goto L_088C5F20;
    case 386u: goto L_088C5F2C;
    case 387u: goto L_088C5F44;
    case 388u: goto L_088C5F50;
    case 389u: goto L_088C5F5C;
    case 390u: goto L_088C5F64;
    case 391u: goto L_088C5F70;
    case 392u: goto L_088C5F88;
    case 393u: goto L_088C6004;
    case 394u: goto L_088C6050;
    case 395u: goto L_088C6058;
    case 396u: goto L_088C6060;
    case 397u: goto L_088C6080;
    case 398u: goto L_088C608C;
    case 399u: goto L_088C609C;
    case 400u: goto L_088C60A4;
    case 401u: goto L_088C60C8;
    case 402u: goto L_088C60D8;
    case 403u: goto L_088C60E8;
    case 404u: goto L_088C60F8;
    case 405u: goto L_088C6104;
    case 406u: goto L_088C6114;
    case 407u: goto L_088C6124;
    case 408u: goto L_088C6130;
    case 409u: goto L_088C6140;
    case 410u: goto L_088C6150;
    case 411u: goto L_088C615C;
    case 412u: goto L_088C616C;
    case 413u: goto L_088C617C;
    case 414u: goto L_088C6188;
    case 415u: goto L_088C6198;
    case 416u: goto L_088C61A8;
    case 417u: goto L_088C61B4;
    case 418u: goto L_088C61C4;
    case 419u: goto L_088C61D4;
    case 420u: goto L_088C61E0;
    case 421u: goto L_088C61F0;
    case 422u: goto L_088C6200;
    case 423u: goto L_088C620C;
    case 424u: goto L_088C621C;
    case 425u: goto L_088C6228;
    case 426u: goto L_088C626C;
    case 427u: goto L_088C6278;
    case 428u: goto L_088C6298;
    case 429u: goto L_088C62B4;
    case 430u: goto L_088C62C0;
    case 431u: goto L_088C62C8;
    case 432u: goto L_088C62D4;
    case 433u: goto L_088C62E0;
    case 434u: goto L_088C62E8;
    case 435u: goto L_088C62F4;
    case 436u: goto L_088C6300;
    case 437u: goto L_088C6308;
    case 438u: goto L_088C6314;
    case 439u: goto L_088C6320;
    case 440u: goto L_088C6328;
    case 441u: goto L_088C6334;
    case 442u: goto L_088C6340;
    case 443u: goto L_088C6348;
    case 444u: goto L_088C6354;
    case 445u: goto L_088C6360;
    case 446u: goto L_088C6368;
    case 447u: goto L_088C6374;
    case 448u: goto L_088C6380;
    case 449u: goto L_088C6388;
    case 450u: goto L_088C6394;
    case 451u: goto L_088C63A0;
    case 452u: goto L_088C63A8;
    case 453u: goto L_088C63B8;
    case 454u: goto L_088C63C0;
    case 455u: goto L_088C63D4;
    case 456u: goto L_088C63DC;
    case 457u: goto L_088C63E4;
    case 458u: goto L_088C63EC;
    case 459u: goto L_088C63F8;
    case 460u: goto L_088C6414;
    case 461u: goto L_088C6418;
    case 462u: goto L_088C642C;
    case 463u: goto L_088C6458;
    case 464u: goto L_088C6468;
    case 465u: goto L_088C6480;
    case 466u: goto L_088C648C;
    case 467u: goto L_088C649C;
    case 468u: goto L_088C64A4;
    case 469u: goto L_088C64B0;
    case 470u: goto L_088C64C0;
    case 471u: goto L_088C64C8;
    case 472u: goto L_088C64D4;
    case 473u: goto L_088C64E4;
    case 474u: goto L_088C64EC;
    case 475u: goto L_088C64F8;
    case 476u: goto L_088C6508;
    case 477u: goto L_088C6510;
    case 478u: goto L_088C651C;
    case 479u: goto L_088C6528;
    case 480u: goto L_088C6530;
    case 481u: goto L_088C6540;
    case 482u: goto L_088C6548;
    case 483u: goto L_088C6550;
    case 484u: goto L_088C6558;
    case 485u: goto L_088C6564;
    case 486u: goto L_088C656C;
    case 487u: goto L_088C6574;
    case 488u: goto L_088C6580;
    case 489u: goto L_088C6588;
    case 490u: goto L_088C6590;
    case 491u: goto L_088C6598;
    case 492u: goto L_088C65A4;
    case 493u: goto L_088C65AC;
    case 494u: goto L_088C65B4;
    case 495u: goto L_088C65C0;
    case 496u: goto L_088C65C8;
    case 497u: goto L_088C65D0;
    case 498u: goto L_088C65DC;
    case 499u: goto L_088C65EC;
    case 500u: goto L_088C65F4;
    case 501u: goto L_088C6600;
    case 502u: goto L_088C6624;
    case 503u: goto L_088C663C;
    case 504u: goto L_088C6648;
    case 505u: goto L_088C6650;
    case 506u: goto L_088C6658;
    case 507u: goto L_088C6660;
    case 508u: goto L_088C6668;
    case 509u: goto L_088C6670;
    case 510u: goto L_088C6678;
    case 511u: goto L_088C6680;
    case 512u: goto L_088C669C;
    case 513u: goto L_088C66A4;
    case 514u: goto L_088C66AC;
    case 515u: goto L_088C66B4;
    case 516u: goto L_088C66BC;
    case 517u: goto L_088C66C8;
    case 518u: goto L_088C66F8;
    case 519u: goto L_088C6718;
    case 520u: goto L_088C6720;
    case 521u: goto L_088C6728;
    case 522u: goto L_088C6730;
    case 523u: goto L_088C6738;
    case 524u: goto L_088C673C;
    case 525u: goto L_088C675C;
    case 526u: goto L_088C6770;
    case 527u: goto L_088C67A4;
    case 528u: goto L_088C67B4;
    case 529u: goto L_088C67BC;
    case 530u: goto L_088C67C4;
    case 531u: goto L_088C67EC;
    case 532u: goto L_088C67F8;
    case 533u: goto L_088C6854;
    case 534u: goto L_088C686C;
    case 535u: goto L_088C68B0;
    case 536u: goto L_088C68BC;
    case 537u: goto L_088C68C8;
    case 538u: goto L_088C68D0;
    case 539u: goto L_088C68E0;
    case 540u: goto L_088C68E8;
    case 541u: goto L_088C68F0;
    case 542u: goto L_088C6920;
    case 543u: goto L_088C6928;
    case 544u: goto L_088C692C;
    case 545u: goto L_088C6934;
    case 546u: goto L_088C6944;
    case 547u: goto L_088C6950;
    case 548u: goto L_088C695C;
    case 549u: goto L_088C6968;
    case 550u: goto L_088C6974;
    case 551u: goto L_088C6984;
    case 552u: goto L_088C6990;
    case 553u: goto L_088C69C4;
    case 554u: goto L_088C69D4;
    case 555u: goto L_088C69E4;
    case 556u: goto L_088C69F4;
    case 557u: goto L_088C6A04;
    case 558u: goto L_088C6A0C;
    case 559u: goto L_088C6A1C;
    case 560u: goto L_088C6A20;
    case 561u: goto L_088C6A2C;
    case 562u: goto L_088C6A40;
    case 563u: goto L_088C6A50;
    case 564u: goto L_088C6AA8;
    case 565u: goto L_088C6AB0;
    case 566u: goto L_088C6AB4;
    case 567u: goto L_088C6ADC;
    case 568u: goto L_088C6B18;
    case 569u: goto L_088C6B2C;
    case 570u: goto L_088C6B3C;
    case 571u: goto L_088C6B44;
    case 572u: goto L_088C6B4C;
    case 573u: goto L_088C6B64;
    case 574u: goto L_088C6B70;
    case 575u: goto L_088C6B80;
    case 576u: goto L_088C6B98;
    case 577u: goto L_088C6BB0;
    case 578u: goto L_088C6BBC;
    case 579u: goto L_088C6BD0;
    case 580u: goto L_088C6BD4;
    case 581u: goto L_088C6BE4;
    case 582u: goto L_088C6BE8;
    case 583u: goto L_088C6C0C;
    case 584u: goto L_088C6C1C;
    case 585u: goto L_088C6C48;
    case 586u: goto L_088C6C5C;
    case 587u: goto L_088C6C6C;
    case 588u: goto L_088C6C84;
    case 589u: goto L_088C6C94;
    case 590u: goto L_088C6CAC;
    case 591u: goto L_088C6CE4;
    case 592u: goto L_088C6CEC;
    case 593u: goto L_088C6CF0;
    case 594u: goto L_088C6D14;
    case 595u: goto L_088C6D70;
    case 596u: goto L_088C6D94;
    case 597u: goto L_088C6D98;
    case 598u: goto L_088C6DB4;
    case 599u: goto L_088C6DC4;
    case 600u: goto L_088C6DCC;
    case 601u: goto L_088C6DF4;
    case 602u: goto L_088C6E20;
    case 603u: goto L_088C6E54;
    case 604u: goto L_088C6E64;
    case 605u: goto L_088C6E80;
    case 606u: goto L_088C6E90;
    case 607u: goto L_088C6EE8;
    case 608u: goto L_088C6F08;
    case 609u: goto L_088C6F24;
    case 610u: goto L_088C6F34;
    case 611u: goto L_088C6F8C;
    case 612u: goto L_088C6FA4;
    case 613u: goto L_088C6FB0;
    case 614u: goto L_088C6FB8;
    case 615u: goto L_088C6FC0;
    case 616u: goto L_088C6FC8;
    case 617u: goto L_088C6FFC;
    case 618u: goto L_088C7010;
    case 619u: goto L_088C7028;
    case 620u: goto L_088C7038;
    case 621u: goto L_088C7050;
    case 622u: goto L_088C7058;
    case 623u: goto L_088C705C;
    case 624u: goto L_088C7070;
    case 625u: goto L_088C7080;
    case 626u: goto L_088C70A8;
    case 627u: goto L_088C70FC;
    case 628u: goto L_088C7104;
    case 629u: goto L_088C7108;
    case 630u: goto L_088C7120;
    case 631u: goto L_088C717C;
    case 632u: goto L_088C7190;
    case 633u: goto L_088C71E8;
    case 634u: goto L_088C71F4;
    case 635u: goto L_088C7200;
    case 636u: goto L_088C7224;
    case 637u: goto L_088C722C;
    case 638u: goto L_088C7244;
    case 639u: goto L_088C7254;
    case 640u: goto L_088C725C;
    case 641u: goto L_088C727C;
    case 642u: goto L_088C728C;
    case 643u: goto L_088C72B4;
    case 644u: goto L_088C72C4;
    case 645u: goto L_088C72F8;
    case 646u: goto L_088C72FC;
    case 647u: goto L_088C7310;
    case 648u: goto L_088C7318;
    case 649u: goto L_088C731C;
    case 650u: goto L_088C7360;
    case 651u: goto L_088C7374;
    case 652u: goto L_088C737C;
    case 653u: goto L_088C7394;
    case 654u: goto L_088C73A0;
    case 655u: goto L_088C73AC;
    case 656u: goto L_088C73B4;
    case 657u: goto L_088C73C4;
    case 658u: goto L_088C73E4;
    case 659u: goto L_088C73EC;
    case 660u: goto L_088C7408;
    case 661u: goto L_088C740C;
    case 662u: goto L_088C7414;
    case 663u: goto L_088C7428;
    case 664u: goto L_088C7430;
    case 665u: goto L_088C7438;
    case 666u: goto L_088C7444;
    case 667u: goto L_088C744C;
    case 668u: goto L_088C7454;
    case 669u: goto L_088C7470;
    case 670u: goto L_088C7498;
    case 671u: goto L_088C74A0;
    case 672u: goto L_088C74BC;
    case 673u: goto L_088C74DC;
    case 674u: goto L_088C74FC;
    case 675u: goto L_088C751C;
    case 676u: goto L_088C752C;
    case 677u: goto L_088C7530;
    case 678u: goto L_088C7538;
    case 679u: goto L_088C755C;
    case 680u: goto L_088C7598;
    case 681u: goto L_088C75AC;
    case 682u: goto L_088C75B4;
    case 683u: goto L_088C75CC;
    case 684u: goto L_088C75E8;
    case 685u: goto L_088C761C;
    case 686u: goto L_088C7630;
    case 687u: goto L_088C7638;
    case 688u: goto L_088C7648;
    case 689u: goto L_088C7650;
    case 690u: goto L_088C7658;
    case 691u: goto L_088C7660;
    case 692u: goto L_088C7668;
    case 693u: goto L_088C7670;
    case 694u: goto L_088C7678;
    case 695u: goto L_088C7680;
    case 696u: goto L_088C7684;
    case 697u: goto L_088C768C;
    case 698u: goto L_088C769C;
    case 699u: goto L_088C76A4;
    case 700u: goto L_088C76AC;
    case 701u: goto L_088C76B0;
    case 702u: goto L_088C76BC;
    case 703u: goto L_088C76D8;
    case 704u: goto L_088C76E0;
    case 705u: goto L_088C76E8;
    case 706u: goto L_088C76F0;
    case 707u: goto L_088C76F8;
    case 708u: goto L_088C7700;
    case 709u: goto L_088C7704;
    case 710u: goto L_088C7710;
    case 711u: goto L_088C7748;
    case 712u: goto L_088C775C;
    case 713u: goto L_088C777C;
    case 714u: goto L_088C7790;
    case 715u: goto L_088C7794;
    case 716u: goto L_088C77B0;
    case 717u: goto L_088C77C4;
    case 718u: goto L_088C77D4;
    case 719u: goto L_088C7804;
    case 720u: goto L_088C7814;
    case 721u: goto L_088C782C;
    case 722u: goto L_088C7840;
    case 723u: goto L_088C787C;
    case 724u: goto L_088C7884;
    case 725u: goto L_088C7888;
    case 726u: goto L_088C78A8;
    case 727u: goto L_088C78B8;
    case 728u: goto L_088C78C4;
    case 729u: goto L_088C78CC;
    case 730u: goto L_088C78D4;
    case 731u: goto L_088C78DC;
    case 732u: goto L_088C78E4;
    case 733u: goto L_088C78F0;
    case 734u: goto L_088C78FC;
    case 735u: goto L_088C7904;
    case 736u: goto L_088C790C;
    case 737u: goto L_088C7914;
    case 738u: goto L_088C791C;
    case 739u: goto L_088C7924;
    case 740u: goto L_088C792C;
    case 741u: goto L_088C7934;
    case 742u: goto L_088C793C;
    case 743u: goto L_088C7944;
    case 744u: goto L_088C797C;
    case 745u: goto L_088C7990;
    case 746u: goto L_088C79A8;
    case 747u: goto L_088C79C4;
    case 748u: goto L_088C79E4;
    case 749u: goto L_088C7A00;
    case 750u: goto L_088C7A0C;
    case 751u: goto L_088C7A14;
    case 752u: goto L_088C7A1C;
    case 753u: goto L_088C7A38;
    case 754u: goto L_088C7A44;
    case 755u: goto L_088C7A58;
    case 756u: goto L_088C7A60;
    case 757u: goto L_088C7A74;
    case 758u: goto L_088C7A84;
    case 759u: goto L_088C7AC4;
    case 760u: goto L_088C7ACC;
    case 761u: goto L_088C7AD0;
    case 762u: goto L_088C7AF0;
    case 763u: goto L_088C7B20;
    case 764u: goto L_088C7B34;
    case 765u: goto L_088C7B44;
    case 766u: goto L_088C7B4C;
    case 767u: goto L_088C7B54;
    case 768u: goto L_088C7B64;
    case 769u: goto L_088C7B74;
    case 770u: goto L_088C7B84;
    case 771u: goto L_088C7B8C;
    case 772u: goto L_088C7B94;
    case 773u: goto L_088C7BA4;
    case 774u: goto L_088C7BC0;
    case 775u: goto L_088C7BD0;
    case 776u: goto L_088C7BF8;
    case 777u: goto L_088C7C30;
    case 778u: goto L_088C7C38;
    case 779u: goto L_088C7C3C;
    case 780u: goto L_088C7C54;
    case 781u: goto L_088C7C8C;
    case 782u: goto L_088C7CA4;
    case 783u: goto L_088C7CB0;
    case 784u: goto L_088C7CC4;
    case 785u: goto L_088C7CF0;
    case 786u: goto L_088C7D18;
    case 787u: goto L_088C7D80;
    case 788u: goto L_088C7DF4;
    case 789u: goto L_088C7DFC;
    case 790u: goto L_088C7E00;
    case 791u: goto L_088C7E1C;
    case 792u: goto L_088C7E50;
    case 793u: goto L_088C7E78;
    case 794u: goto L_088C7E88;
    case 795u: goto L_088C7EA4;
    case 796u: goto L_088C7EC4;
    case 797u: goto L_088C7EEC;
    case 798u: goto L_088C7EFC;
    case 799u: goto L_088C7F40;
    case 800u: goto L_088C7F50;
    case 801u: goto L_088C7F64;
    case 802u: goto L_088C7F9C;
    case 803u: goto L_088C7FA4;
    case 804u: goto L_088C7FA8;
    case 805u: goto L_088C7FC0;
    case 806u: goto L_088C7FFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        AOT_REGCACHE_SYNC_OUT(); return;
    }
    }
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
L_088C4000:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088C4024;
      }
      goto L_088C4008;
    }
L_088C4008:
    aot_gpr_5 = (0u | 1u);
    if (aot_gpr_4 != aot_gpr_5) {
    ctx.gpr[2] = (0u | 1u);
        goto L_088C4024;
    }
    goto L_088C4014;
L_088C4014:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088C4024;
      }
      goto L_088C4020;
    }
L_088C4020:
    ctx.gpr[2] = (0u | 1u);
    goto L_088C4024;
L_088C4024:
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088C403C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-64));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(44), ctx.gpr[22]);
    ctx.gpr[22] = (aot_gpr_6 | 0u);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(40), ctx.gpr[21]);
    aot_gpr_16 = (aot_gpr_5 | 0u);
    ctx.gpr[20] = (ctx.gpr[8] | 0u);
    ctx.gpr[21] = (ctx.gpr[7] | 0u);
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(48), aot_gpr_31);
    aot_gpr_31 = (0x088C4080u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0047_entry, 47u, 349u, 0x088C2EA4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C4080u) goto L_088C4080;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C4080:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_088C41D0;
      }
      goto L_088C408C;
    }
L_088C408C:
    aot_gpr_31 = (0x088C4094u);
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0047_entry, 47u, 349u, 0x088C2EA4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C4094u) goto L_088C4094;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C4094:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
      if (branch_taken) {
          goto L_088C41D0;
      }
      goto L_088C40A0;
    }
L_088C40A0:
    aot_gpr_4 = (ctx.gpr[20] + static_cast<std::uint32_t>(-6));
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (ctx.gpr[20] + static_cast<std::uint32_t>(-6));
      if (branch_taken) {
          goto L_088C41C8;
      }
      goto L_088C40B0;
    }
L_088C40B0:
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_088C40F0;
      }
      goto L_088C40BC;
    }
L_088C40BC:
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_088C410C;
      }
      goto L_088C40C4;
    }
L_088C40C4:
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088C4128;
      }
      goto L_088C40CC;
    }
L_088C40CC:
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[1];
      if (branch_taken) {
          goto L_088C4144;
      }
      goto L_088C40D4;
    }
L_088C40D4:
    aot_gpr_4 = (0u | 3u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_088C4200;
      }
      goto L_088C40F0;
    }
L_088C40F0:
    aot_gpr_4 = (0u | 3u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    aot_fpr_12 = aot_fpr_12 - aot_fpr_13;
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_088C4200;
      }
      goto L_088C410C;
    }
L_088C410C:
    aot_gpr_4 = (0u | 3u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_088C4200;
      }
      goto L_088C4128;
    }
L_088C4128:
    aot_gpr_4 = (0u | 3u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    aot_fpr_12 = aot_fpr_12 / aot_fpr_13;
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_088C4200;
      }
      goto L_088C4144;
    }
L_088C4144:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(124)));
    aot_gpr_31 = (0x088C4154u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0163_entry, 163u, 640u, 0x08A93FC4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C4154u) goto L_088C4154;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C4154:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_16 = (aot_gpr_16 - aot_gpr_5);
    aot_gpr_5 = (0u | 6u);
    { const bool branch_taken = aot_gpr_6 == aot_gpr_5;
      if (branch_taken) {
          goto L_088C4188;
      }
      goto L_088C4170;
    }
L_088C4170:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_4);
    aot_gpr_5 = (2232u << 16u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088C4184u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-21672));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0120_entry, 120u, 743u, 0x089E77C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C4184u) goto L_088C4184;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C4184:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    goto L_088C4188;
L_088C4188:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_6 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x088C419Cu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0047_entry, 47u, 387u, 0x088C312Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C419Cu) goto L_088C419C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C419C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_16);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
      if (branch_taken) {
          goto L_088C4200;
      }
      goto L_088C41C8;
    }
L_088C41C8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088C4200;
      }
      goto L_088C41D0;
    }
L_088C41D0:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (ctx.gpr[22] | 0u);
    aot_gpr_6 = (ctx.gpr[21] | 0u);
    ctx.gpr[7] = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088C41E8u);
    ctx.gpr[8] = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0047_entry, 47u, 452u, 0x088C3708u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C41E8u) goto L_088C41E8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C41E8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_088C4200;
      }
      goto L_088C41F0;
    }
L_088C41F0:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (ctx.gpr[22] | 0u);
    aot_gpr_31 = (0x088C4200u);
    aot_gpr_6 = (ctx.gpr[21] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0120_entry, 120u, 718u, 0x089E7584u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C4200u) goto L_088C4200;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C4200:
    { std::uint32_t aot_run_words[8]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      ctx.gpr[20] = aot_run_words[4];
      ctx.gpr[21] = aot_run_words[5];
      ctx.gpr[22] = aot_run_words[6];
      aot_gpr_31 = aot_run_words[7];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088C4228:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    { const std::uint32_t aot_run_words[8]{ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], ctx.gpr[23], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words); }
    goto L_088C4254;
L_088C4254:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(48)));
    aot_gpr_4 = (aot_gpr_4 & 1u);
    if (aot_gpr_4 == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(20)));
        goto L_088C4280;
    }
    goto L_088C4264;
L_088C4264:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(20)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(16), aot_gpr_29);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x088C427Cu);
    aot_gpr_6 = (0u + static_cast<std::uint32_t>(-1));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0027_entry, 27u, 485u, 0x08871D88u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C427Cu) goto L_088C427C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C427C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(20)));
    goto L_088C4280;
L_088C4280:
    aot_gpr_5 = (0u | 2u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(16), aot_gpr_29);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(20)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(20)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(12)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_4);
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(-4)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    goto L_088C42AC;
L_088C42AC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(48)));
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_6);
    ctx.gpr[19] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_5 & 12u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088C4308;
      }
      goto L_088C42CC;
    }
L_088C42CC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(56)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(56), aot_gpr_4);
      if (branch_taken) {
          goto L_088C42EC;
      }
      goto L_088C42DC;
    }
L_088C42DC:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(48)));
    aot_gpr_4 = (aot_gpr_4 & 4u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088C4308;
      }
      goto L_088C42EC;
    }
L_088C42EC:
    aot_gpr_31 = (0x088C42F4u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0047_entry, 47u, 365u, 0x088C2FB4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C42F4u) goto L_088C42F4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C42F4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(20)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_gpr_4 & 16u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088C433C;
      }
      goto L_088C4308;
    }
L_088C4308:
    aot_gpr_4 = (ctx.gpr[19] >> 24u);
    ctx.gpr[23] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(12)));
    ctx.gpr[22] = (aot_gpr_4 << 3u);
    aot_gpr_4 = (ctx.gpr[19] & 63u);
    aot_gpr_5 = (aot_gpr_4 < static_cast<std::uint32_t>(35) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    ctx.gpr[22] = (ctx.gpr[23] + ctx.gpr[22]);
      if (branch_taken) {
          goto L_088C58F4;
      }
      goto L_088C4324;
    }
L_088C4324:
    aot_gpr_4 = (aot_gpr_4 << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_4);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-21496)));
    jump_target = ctx.gpr[1];
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088C433C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(20)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-4));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(12), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(20)));
    aot_gpr_5 = (0u | 24u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), aot_gpr_5);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088C58FC;
      }
      goto L_088C4360;
    }
L_088C4360:
    aot_gpr_4 = (ctx.gpr[19] >> 15u);
    aot_gpr_4 = (aot_gpr_4 & 511u);
    aot_gpr_4 = (aot_gpr_4 << 3u);
    aot_gpr_4 = (ctx.gpr[23] + aot_gpr_4);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(ctx.gpr[22] + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (ctx.gpr[22] + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
      if (branch_taken) {
          goto L_088C58F4;
      }
      goto L_088C4390;
    }
L_088C4390:
    aot_gpr_5 = (4u << 16u);
    aot_gpr_4 = (ctx.gpr[19] >> 6u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 << 3u);
    aot_gpr_4 = (ctx.gpr[18] + aot_gpr_4);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(ctx.gpr[22] + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (ctx.gpr[22] + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
      if (branch_taken) {
          goto L_088C58F4;
      }
      goto L_088C43C8;
    }
L_088C43C8:
    aot_gpr_4 = (0u | 1u);
    aot_gpr_5 = (ctx.gpr[19] >> 15u);
    aot_mem.aot_direct_store32(ctx.gpr[22] + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_4 = (aot_gpr_5 & 511u);
    aot_mem.aot_direct_store32(ctx.gpr[22] + static_cast<std::uint32_t>(4), aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[19] >> 6u);
    aot_gpr_4 = (aot_gpr_4 & 511u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088C43F8;
      }
      goto L_088C43EC;
    }
L_088C43EC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_4);
    goto L_088C43F8;
L_088C43F8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088C58F4;
      }
      goto L_088C4400;
    }
L_088C4400:
    aot_gpr_4 = (ctx.gpr[19] >> 15u);
    aot_gpr_4 = (aot_gpr_4 & 511u);
    ctx.gpr[19] = (aot_gpr_4 << 3u);
    ctx.gpr[19] = (ctx.gpr[23] + ctx.gpr[19]);
    goto L_088C4410;
L_088C4410:
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-8));
    aot_gpr_4 = (ctx.gpr[19] < ctx.gpr[22] ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088C4410;
      }
      goto L_088C4424;
    }
L_088C4424:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088C58F4;
      }
      goto L_088C442C;
    }
L_088C442C:
    aot_gpr_4 = (ctx.gpr[19] >> 15u);
    aot_gpr_4 = (aot_gpr_4 & 511u);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (ctx.gpr[17] + aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(24)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (ctx.gpr[22] + static_cast<std::uint32_t>(4));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(ctx.gpr[22] + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_4);
      if (branch_taken) {
          goto L_088C58F4;
      }
      goto L_088C4464;
    }
L_088C4464:
    aot_gpr_5 = (4u << 16u);
    aot_gpr_4 = (ctx.gpr[19] >> 6u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    ctx.gpr[20] = (aot_gpr_4 << 3u);
    ctx.gpr[20] = (ctx.gpr[18] + ctx.gpr[20]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    aot_gpr_31 = (0x088C4488u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0163_entry, 163u, 640u, 0x08A93FC4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C4488u) goto L_088C4488;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C4488:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_088C44B8;
      }
      goto L_088C4498;
    }
L_088C4498:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(ctx.gpr[22] + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (ctx.gpr[22] + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
      if (branch_taken) {
          goto L_088C44F8;
      }
      goto L_088C44B8;
    }
L_088C44B8:
    aot_gpr_5 = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_6 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x088C44CCu);
    ctx.gpr[7] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0047_entry, 47u, 397u, 0x088C32ECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C44CCu) goto L_088C44CC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C44CC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(12)));
    aot_gpr_5 = (ctx.gpr[19] >> 24u);
    aot_gpr_5 = (aot_gpr_5 << 3u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_gpr_5 = (ctx.gpr[2] + static_cast<std::uint32_t>(4));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    goto L_088C44F8;
L_088C44F8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088C58F4;
      }
      goto L_088C4500;
    }
L_088C4500:
    aot_gpr_4 = (ctx.gpr[19] >> 15u);
    aot_gpr_4 = (aot_gpr_4 & 511u);
    ctx.gpr[20] = (aot_gpr_4 << 3u);
    aot_gpr_4 = (ctx.gpr[19] >> 6u);
    aot_gpr_4 = (aot_gpr_4 & 511u);
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 250 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[20] = (ctx.gpr[23] + ctx.gpr[20]);
      if (branch_taken) {
          goto L_088C4534;
      }
      goto L_088C4520;
    }
L_088C4520:
    aot_gpr_4 = (ctx.gpr[19] >> 6u);
    aot_gpr_4 = (aot_gpr_4 & 511u);
    ctx.gpr[21] = (aot_gpr_4 << 3u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[23] + ctx.gpr[21]);
      if (branch_taken) {
          goto L_088C4548;
      }
      goto L_088C4534;
    }
L_088C4534:
    aot_gpr_4 = (ctx.gpr[19] >> 6u);
    aot_gpr_4 = (aot_gpr_4 & 511u);
    aot_gpr_4 = (aot_gpr_4 << 3u);
    ctx.gpr[21] = (ctx.gpr[18] + aot_gpr_4);
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-2000));
    goto L_088C4548;
L_088C4548:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (0u | 5u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_088C45DC;
      }
      goto L_088C4558;
    }
L_088C4558:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    aot_gpr_31 = (0x088C4564u);
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0164_entry, 164u, 6u, 0x08A9402Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C4564u) goto L_088C4564;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C4564:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_088C4594;
      }
      goto L_088C4574;
    }
L_088C4574:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(ctx.gpr[22] + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (ctx.gpr[22] + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
      if (branch_taken) {
          goto L_088C45D4;
      }
      goto L_088C4594;
    }
L_088C4594:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    aot_gpr_6 = (ctx.gpr[21] | 0u);
    aot_gpr_31 = (0x088C45A8u);
    ctx.gpr[7] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0047_entry, 47u, 397u, 0x088C32ECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C45A8u) goto L_088C45A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C45A8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(12)));
    aot_gpr_5 = (ctx.gpr[19] >> 24u);
    aot_gpr_5 = (aot_gpr_5 << 3u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_gpr_5 = (ctx.gpr[2] + static_cast<std::uint32_t>(4));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    goto L_088C45D4;
L_088C45D4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088C461C;
      }
      goto L_088C45DC;
    }
L_088C45DC:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    aot_gpr_6 = (ctx.gpr[21] | 0u);
    aot_gpr_31 = (0x088C45F0u);
    ctx.gpr[7] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0047_entry, 47u, 408u, 0x088C33B0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C45F0u) goto L_088C45F0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C45F0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(12)));
    aot_gpr_5 = (ctx.gpr[19] >> 24u);
    aot_gpr_5 = (aot_gpr_5 << 3u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_gpr_5 = (ctx.gpr[2] + static_cast<std::uint32_t>(4));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    goto L_088C461C;
L_088C461C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088C58F4;
      }
      goto L_088C4624;
    }
L_088C4624:
    aot_gpr_5 = (4u << 16u);
    aot_gpr_4 = (ctx.gpr[19] >> 6u);
    aot_gpr_6 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_6);
    aot_gpr_6 = (aot_gpr_4 << 3u);
    aot_gpr_5 = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    aot_gpr_6 = (ctx.gpr[18] + aot_gpr_6);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088C464Cu);
    ctx.gpr[7] = (ctx.gpr[22] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0047_entry, 47u, 427u, 0x088C3520u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C464Cu) goto L_088C464C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C464C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088C58F4;
      }
      goto L_088C4654;
    }
L_088C4654:
    aot_gpr_4 = (ctx.gpr[19] >> 15u);
    aot_gpr_4 = (aot_gpr_4 & 511u);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (ctx.gpr[17] + aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(24)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_gpr_6 = (ctx.gpr[22] + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
      if (branch_taken) {
          goto L_088C58F4;
      }
      goto L_088C468C;
    }
L_088C468C:
    aot_gpr_4 = (ctx.gpr[19] >> 15u);
    aot_gpr_4 = (aot_gpr_4 & 511u);
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 250 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (ctx.gpr[19] >> 15u);
      if (branch_taken) {
          goto L_088C46B4;
      }
      goto L_088C46A0;
    }
L_088C46A0:
    aot_gpr_4 = (ctx.gpr[19] >> 15u);
    aot_gpr_4 = (aot_gpr_4 & 511u);
    aot_gpr_4 = (aot_gpr_4 << 3u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (ctx.gpr[23] + aot_gpr_4);
      if (branch_taken) {
          goto L_088C46C4;
      }
      goto L_088C46B4;
    }
L_088C46B4:
    aot_gpr_4 = (aot_gpr_4 & 511u);
    aot_gpr_4 = (aot_gpr_4 << 3u);
    aot_gpr_4 = (ctx.gpr[18] + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-2000));
    goto L_088C46C4;
L_088C46C4:
    aot_gpr_5 = (ctx.gpr[19] >> 6u);
    aot_gpr_5 = (aot_gpr_5 & 511u);
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_5) < 250 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_5 = (ctx.gpr[19] >> 6u);
      if (branch_taken) {
          goto L_088C46EC;
      }
      goto L_088C46D8;
    }
L_088C46D8:
    aot_gpr_5 = (ctx.gpr[19] >> 6u);
    aot_gpr_5 = (aot_gpr_5 & 511u);
    ctx.gpr[19] = (aot_gpr_5 << 3u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[23] + ctx.gpr[19]);
      if (branch_taken) {
          goto L_088C46FC;
      }
      goto L_088C46EC;
    }
L_088C46EC:
    aot_gpr_5 = (aot_gpr_5 & 511u);
    aot_gpr_5 = (aot_gpr_5 << 3u);
    ctx.gpr[19] = (ctx.gpr[18] + aot_gpr_5);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-2000));
    goto L_088C46FC;
L_088C46FC:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (ctx.gpr[22] | 0u);
    aot_gpr_31 = (0x088C4710u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0047_entry, 47u, 427u, 0x088C3520u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C4710u) goto L_088C4710;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C4710:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088C58F4;
      }
      goto L_088C4718;
    }
L_088C4718:
    aot_gpr_4 = (ctx.gpr[19] >> 15u);
    aot_gpr_4 = (aot_gpr_4 & 511u);
    aot_gpr_5 = (aot_gpr_4 & 7u);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 3u));
    aot_gpr_5 = (aot_gpr_5 << (aot_gpr_4 & 31u));
    aot_gpr_4 = (0u | 5u);
    aot_gpr_6 = (ctx.gpr[19] >> 6u);
    aot_mem.aot_direct_store32(ctx.gpr[22] + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_6 = (aot_gpr_6 & 511u);
    aot_gpr_31 = (0x088C4744u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0163_entry, 163u, 588u, 0x08A93C14u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C4744u) goto L_088C4744;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C4744:
    aot_mem.aot_direct_store32(ctx.gpr[22] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(16)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(36)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(32)));
    aot_gpr_4 = (aot_gpr_5 < aot_gpr_4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088C4768;
      }
      goto L_088C4760;
    }
L_088C4760:
    aot_gpr_31 = (0x088C4768u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0132_entry, 132u, 534u, 0x08A16D40u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C4768u) goto L_088C4768;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C4768:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088C58F4;
      }
      goto L_088C4770;
    }
L_088C4770:
    aot_gpr_4 = (ctx.gpr[19] >> 15u);
    aot_gpr_4 = (aot_gpr_4 & 511u);
    ctx.gpr[20] = (aot_gpr_4 << 3u);
    aot_gpr_4 = (ctx.gpr[19] >> 6u);
    aot_gpr_4 = (aot_gpr_4 & 511u);
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 250 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[20] = (ctx.gpr[23] + ctx.gpr[20]);
      if (branch_taken) {
          goto L_088C47A4;
      }
      goto L_088C4790;
    }
L_088C4790:
    aot_gpr_4 = (ctx.gpr[19] >> 6u);
    aot_gpr_4 = (aot_gpr_4 & 511u);
    ctx.gpr[21] = (aot_gpr_4 << 3u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[23] + ctx.gpr[21]);
      if (branch_taken) {
          goto L_088C47B8;
      }
      goto L_088C47A4;
    }
L_088C47A4:
    aot_gpr_4 = (ctx.gpr[19] >> 6u);
    aot_gpr_4 = (aot_gpr_4 & 511u);
    aot_gpr_4 = (aot_gpr_4 << 3u);
    ctx.gpr[21] = (ctx.gpr[18] + aot_gpr_4);
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-2000));
    goto L_088C47B8;
L_088C47B8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (0u | 4u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_088C575C;
      }
      goto L_088C47C8;
    }
L_088C47C8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (ctx.gpr[22] + static_cast<std::uint32_t>(8));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[20] + static_cast<std::uint32_t>(4));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_5 + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_6 = (0u | 5u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_6;
      if (branch_taken) {
          goto L_088C487C;
      }
      goto L_088C47F8;
    }
L_088C47F8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    aot_gpr_31 = (0x088C4804u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0163_entry, 163u, 640u, 0x08A93FC4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C4804u) goto L_088C4804;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C4804:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_088C4834;
      }
      goto L_088C4814;
    }
L_088C4814:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(ctx.gpr[22] + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (ctx.gpr[22] + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
      if (branch_taken) {
          goto L_088C4874;
      }
      goto L_088C4834;
    }
L_088C4834:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    aot_gpr_6 = (ctx.gpr[21] | 0u);
    aot_gpr_31 = (0x088C4848u);
    ctx.gpr[7] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0047_entry, 47u, 397u, 0x088C32ECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C4848u) goto L_088C4848;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C4848:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(12)));
    aot_gpr_5 = (ctx.gpr[19] >> 24u);
    aot_gpr_5 = (aot_gpr_5 << 3u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_gpr_5 = (ctx.gpr[2] + static_cast<std::uint32_t>(4));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    goto L_088C4874;
L_088C4874:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088C48BC;
      }
      goto L_088C487C;
    }
L_088C487C:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    aot_gpr_6 = (ctx.gpr[21] | 0u);
    aot_gpr_31 = (0x088C4890u);
    ctx.gpr[7] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0047_entry, 47u, 408u, 0x088C33B0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C4890u) goto L_088C4890;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C4890:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(12)));
    aot_gpr_5 = (ctx.gpr[19] >> 24u);
    aot_gpr_5 = (aot_gpr_5 << 3u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_gpr_5 = (ctx.gpr[2] + static_cast<std::uint32_t>(4));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    goto L_088C48BC;
L_088C48BC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088C58F4;
      }
      goto L_088C48C4;
    }
L_088C48C4:
    aot_gpr_4 = (ctx.gpr[19] >> 15u);
    aot_gpr_4 = (aot_gpr_4 & 511u);
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 250 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (ctx.gpr[19] >> 15u);
      if (branch_taken) {
          goto L_088C48EC;
      }
      goto L_088C48D8;
    }
L_088C48D8:
    aot_gpr_4 = (ctx.gpr[19] >> 15u);
    aot_gpr_4 = (aot_gpr_4 & 511u);
    aot_gpr_4 = (aot_gpr_4 << 3u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (ctx.gpr[23] + aot_gpr_4);
      if (branch_taken) {
          goto L_088C48FC;
      }
      goto L_088C48EC;
    }
L_088C48EC:
    aot_gpr_4 = (aot_gpr_4 & 511u);
    aot_gpr_4 = (aot_gpr_4 << 3u);
    aot_gpr_4 = (ctx.gpr[18] + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-2000));
    goto L_088C48FC;
L_088C48FC:
    aot_gpr_5 = (ctx.gpr[19] >> 6u);
    aot_gpr_5 = (aot_gpr_5 & 511u);
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_5) < 250 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_5 = (ctx.gpr[19] >> 6u);
      if (branch_taken) {
          goto L_088C4924;
      }
      goto L_088C4910;
    }
L_088C4910:
    aot_gpr_5 = (ctx.gpr[19] >> 6u);
    aot_gpr_5 = (aot_gpr_5 & 511u);
    ctx.gpr[19] = (aot_gpr_5 << 3u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[23] + ctx.gpr[19]);
      if (branch_taken) {
          goto L_088C4934;
      }
      goto L_088C4924;
    }
L_088C4924:
    aot_gpr_5 = (aot_gpr_5 & 511u);
    aot_gpr_5 = (aot_gpr_5 << 3u);
    ctx.gpr[19] = (ctx.gpr[18] + aot_gpr_5);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-2000));
    goto L_088C4934;
L_088C4934:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (0u | 3u);
    { const bool branch_taken = aot_gpr_5 != aot_gpr_6;
      if (branch_taken) {
          goto L_088C496C;
      }
      goto L_088C4944;
    }
L_088C4944:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (0u | 3u);
    { const bool branch_taken = aot_gpr_5 != aot_gpr_6;
    aot_gpr_5 = (0u | 3u);
      if (branch_taken) {
          goto L_088C496C;
      }
      goto L_088C4954;
    }
L_088C4954:
    aot_mem.aot_direct_store32(ctx.gpr[22] + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[22] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_088C4984;
      }
      goto L_088C496C;
    }
L_088C496C:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (ctx.gpr[22] | 0u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x088C4984u);
    ctx.gpr[8] = (0u | 6u);
    goto L_088C403C;
L_088C4984:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088C58F4;
      }
      goto L_088C498C;
    }
L_088C498C:
    aot_gpr_4 = (ctx.gpr[19] >> 15u);
    aot_gpr_4 = (aot_gpr_4 & 511u);
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 250 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (ctx.gpr[19] >> 15u);
      if (branch_taken) {
          goto L_088C49B4;
      }
      goto L_088C49A0;
    }
L_088C49A0:
    aot_gpr_4 = (ctx.gpr[19] >> 15u);
    aot_gpr_4 = (aot_gpr_4 & 511u);
    aot_gpr_4 = (aot_gpr_4 << 3u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (ctx.gpr[23] + aot_gpr_4);
      if (branch_taken) {
          goto L_088C49C4;
      }
      goto L_088C49B4;
    }
L_088C49B4:
    aot_gpr_4 = (aot_gpr_4 & 511u);
    aot_gpr_4 = (aot_gpr_4 << 3u);
    aot_gpr_4 = (ctx.gpr[18] + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-2000));
    goto L_088C49C4;
L_088C49C4:
    aot_gpr_5 = (ctx.gpr[19] >> 6u);
    aot_gpr_5 = (aot_gpr_5 & 511u);
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_5) < 250 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_5 = (ctx.gpr[19] >> 6u);
      if (branch_taken) {
          goto L_088C49EC;
      }
      goto L_088C49D8;
    }
L_088C49D8:
    aot_gpr_5 = (ctx.gpr[19] >> 6u);
    aot_gpr_5 = (aot_gpr_5 & 511u);
    ctx.gpr[19] = (aot_gpr_5 << 3u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[23] + ctx.gpr[19]);
      if (branch_taken) {
          goto L_088C49FC;
      }
      goto L_088C49EC;
    }
L_088C49EC:
    aot_gpr_5 = (aot_gpr_5 & 511u);
    aot_gpr_5 = (aot_gpr_5 << 3u);
    ctx.gpr[19] = (ctx.gpr[18] + aot_gpr_5);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-2000));
    goto L_088C49FC;
L_088C49FC:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (0u | 3u);
    { const bool branch_taken = aot_gpr_5 != aot_gpr_6;
      if (branch_taken) {
          goto L_088C4A34;
      }
      goto L_088C4A0C;
    }
L_088C4A0C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (0u | 3u);
    { const bool branch_taken = aot_gpr_5 != aot_gpr_6;
    aot_gpr_5 = (0u | 3u);
      if (branch_taken) {
          goto L_088C4A34;
      }
      goto L_088C4A1C;
    }
L_088C4A1C:
    aot_mem.aot_direct_store32(ctx.gpr[22] + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    aot_fpr_12 = aot_fpr_12 - aot_fpr_13;
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[22] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_088C4A4C;
      }
      goto L_088C4A34;
    }
L_088C4A34:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (ctx.gpr[22] | 0u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x088C4A4Cu);
    ctx.gpr[8] = (0u | 7u);
    goto L_088C403C;
L_088C4A4C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088C58F4;
      }
      goto L_088C4A54;
    }
L_088C4A54:
    aot_gpr_4 = (ctx.gpr[19] >> 15u);
    aot_gpr_4 = (aot_gpr_4 & 511u);
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 250 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (ctx.gpr[19] >> 15u);
      if (branch_taken) {
          goto L_088C4A7C;
      }
      goto L_088C4A68;
    }
L_088C4A68:
    aot_gpr_4 = (ctx.gpr[19] >> 15u);
    aot_gpr_4 = (aot_gpr_4 & 511u);
    aot_gpr_4 = (aot_gpr_4 << 3u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (ctx.gpr[23] + aot_gpr_4);
      if (branch_taken) {
          goto L_088C4A8C;
      }
      goto L_088C4A7C;
    }
L_088C4A7C:
    aot_gpr_4 = (aot_gpr_4 & 511u);
    aot_gpr_4 = (aot_gpr_4 << 3u);
    aot_gpr_4 = (ctx.gpr[18] + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-2000));
    goto L_088C4A8C;
L_088C4A8C:
    aot_gpr_5 = (ctx.gpr[19] >> 6u);
    aot_gpr_5 = (aot_gpr_5 & 511u);
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_5) < 250 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_5 = (ctx.gpr[19] >> 6u);
      if (branch_taken) {
          goto L_088C4AB4;
      }
      goto L_088C4AA0;
    }
L_088C4AA0:
    aot_gpr_5 = (ctx.gpr[19] >> 6u);
    aot_gpr_5 = (aot_gpr_5 & 511u);
    ctx.gpr[19] = (aot_gpr_5 << 3u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[23] + ctx.gpr[19]);
      if (branch_taken) {
          goto L_088C4AC4;
      }
      goto L_088C4AB4;
    }
L_088C4AB4:
    aot_gpr_5 = (aot_gpr_5 & 511u);
    aot_gpr_5 = (aot_gpr_5 << 3u);
    ctx.gpr[19] = (ctx.gpr[18] + aot_gpr_5);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-2000));
    goto L_088C4AC4;
L_088C4AC4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (0u | 3u);
    { const bool branch_taken = aot_gpr_5 != aot_gpr_6;
      if (branch_taken) {
          goto L_088C4AFC;
      }
      goto L_088C4AD4;
    }
L_088C4AD4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (0u | 3u);
    { const bool branch_taken = aot_gpr_5 != aot_gpr_6;
    aot_gpr_5 = (0u | 3u);
      if (branch_taken) {
          goto L_088C4AFC;
      }
      goto L_088C4AE4;
    }
L_088C4AE4:
    aot_mem.aot_direct_store32(ctx.gpr[22] + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[22] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_088C4B14;
      }
      goto L_088C4AFC;
    }
L_088C4AFC:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (ctx.gpr[22] | 0u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x088C4B14u);
    ctx.gpr[8] = (0u | 8u);
    goto L_088C403C;
L_088C4B14:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088C58F4;
      }
      goto L_088C4B1C;
    }
L_088C4B1C:
    aot_gpr_4 = (ctx.gpr[19] >> 15u);
    aot_gpr_4 = (aot_gpr_4 & 511u);
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 250 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (ctx.gpr[19] >> 15u);
      if (branch_taken) {
          goto L_088C4B44;
      }
      goto L_088C4B30;
    }
L_088C4B30:
    aot_gpr_4 = (ctx.gpr[19] >> 15u);
    aot_gpr_4 = (aot_gpr_4 & 511u);
    aot_gpr_4 = (aot_gpr_4 << 3u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (ctx.gpr[23] + aot_gpr_4);
      if (branch_taken) {
          goto L_088C4B54;
      }
      goto L_088C4B44;
    }
L_088C4B44:
    aot_gpr_4 = (aot_gpr_4 & 511u);
    aot_gpr_4 = (aot_gpr_4 << 3u);
    aot_gpr_4 = (ctx.gpr[18] + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-2000));
    goto L_088C4B54;
L_088C4B54:
    aot_gpr_5 = (ctx.gpr[19] >> 6u);
    aot_gpr_5 = (aot_gpr_5 & 511u);
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_5) < 250 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_5 = (ctx.gpr[19] >> 6u);
      if (branch_taken) {
          goto L_088C4B7C;
      }
      goto L_088C4B68;
    }
L_088C4B68:
    aot_gpr_5 = (ctx.gpr[19] >> 6u);
    aot_gpr_5 = (aot_gpr_5 & 511u);
    ctx.gpr[19] = (aot_gpr_5 << 3u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[23] + ctx.gpr[19]);
      if (branch_taken) {
          goto L_088C4B8C;
      }
      goto L_088C4B7C;
    }
L_088C4B7C:
    aot_gpr_5 = (aot_gpr_5 & 511u);
    aot_gpr_5 = (aot_gpr_5 << 3u);
    ctx.gpr[19] = (ctx.gpr[18] + aot_gpr_5);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-2000));
    goto L_088C4B8C;
L_088C4B8C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (0u | 3u);
    { const bool branch_taken = aot_gpr_5 != aot_gpr_6;
      if (branch_taken) {
          goto L_088C4BC4;
      }
      goto L_088C4B9C;
    }
L_088C4B9C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (0u | 3u);
    { const bool branch_taken = aot_gpr_5 != aot_gpr_6;
    aot_gpr_5 = (0u | 3u);
      if (branch_taken) {
          goto L_088C4BC4;
      }
      goto L_088C4BAC;
    }
L_088C4BAC:
    aot_mem.aot_direct_store32(ctx.gpr[22] + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    aot_fpr_12 = aot_fpr_12 / aot_fpr_13;
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[22] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_088C4BDC;
      }
      goto L_088C4BC4;
    }
L_088C4BC4:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (ctx.gpr[22] | 0u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x088C4BDCu);
    ctx.gpr[8] = (0u | 9u);
    goto L_088C403C;
L_088C4BDC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088C58F4;
      }
      goto L_088C4BE4;
    }
L_088C4BE4:
    aot_gpr_4 = (ctx.gpr[19] >> 15u);
    aot_gpr_4 = (aot_gpr_4 & 511u);
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 250 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (ctx.gpr[19] >> 15u);
      if (branch_taken) {
          goto L_088C4C0C;
      }
      goto L_088C4BF8;
    }
L_088C4BF8:
    aot_gpr_4 = (ctx.gpr[19] >> 15u);
    aot_gpr_4 = (aot_gpr_4 & 511u);
    aot_gpr_4 = (aot_gpr_4 << 3u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (ctx.gpr[23] + aot_gpr_4);
      if (branch_taken) {
          goto L_088C4C1C;
      }
      goto L_088C4C0C;
    }
L_088C4C0C:
    aot_gpr_4 = (aot_gpr_4 & 511u);
    aot_gpr_4 = (aot_gpr_4 << 3u);
    aot_gpr_4 = (ctx.gpr[18] + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-2000));
    goto L_088C4C1C;
L_088C4C1C:
    aot_gpr_5 = (ctx.gpr[19] >> 6u);
    aot_gpr_5 = (aot_gpr_5 & 511u);
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_5) < 250 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_5 = (ctx.gpr[19] >> 6u);
      if (branch_taken) {
          goto L_088C4C44;
      }
      goto L_088C4C30;
    }
L_088C4C30:
    aot_gpr_5 = (ctx.gpr[19] >> 6u);
    aot_gpr_5 = (aot_gpr_5 & 511u);
    ctx.gpr[19] = (aot_gpr_5 << 3u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[23] + ctx.gpr[19]);
      if (branch_taken) {
          goto L_088C4C54;
      }
      goto L_088C4C44;
    }
L_088C4C44:
    aot_gpr_5 = (aot_gpr_5 & 511u);
    aot_gpr_5 = (aot_gpr_5 << 3u);
    ctx.gpr[19] = (ctx.gpr[18] + aot_gpr_5);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-2000));
    goto L_088C4C54;
L_088C4C54:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (ctx.gpr[22] | 0u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x088C4C6Cu);
    ctx.gpr[8] = (0u | 10u);
    goto L_088C403C;
L_088C4C6C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088C58F4;
      }
      goto L_088C4C74;
    }
L_088C4C74:
    aot_gpr_4 = (ctx.gpr[19] >> 15u);
    aot_gpr_4 = (aot_gpr_4 & 511u);
    aot_gpr_4 = (aot_gpr_4 << 3u);
    aot_gpr_4 = (ctx.gpr[23] + aot_gpr_4);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (0u | 3u);
    { const bool branch_taken = aot_gpr_5 == aot_gpr_6;
      if (branch_taken) {
          goto L_088C4CA8;
      }
      goto L_088C4C94;
    }
L_088C4C94:
    aot_gpr_31 = (0x088C4C9Cu);
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(4));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0047_entry, 47u, 349u, 0x088C2EA4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C4C9Cu) goto L_088C4C9C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C4C9C:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088C4CC0;
      }
      goto L_088C4CA8;
    }
L_088C4CA8:
    aot_gpr_5 = (0u | 3u);
    aot_mem.aot_direct_store32(ctx.gpr[22] + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12) ^ 0x80000000u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[22] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_088C4D0C;
      }
      goto L_088C4CC0;
    }
L_088C4CC0:
    aot_gpr_4 = (ctx.gpr[19] >> 15u);
    aot_gpr_4 = (aot_gpr_4 & 511u);
    aot_gpr_5 = (aot_gpr_4 << 3u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), 0u);
    aot_gpr_5 = (ctx.gpr[23] + aot_gpr_5);
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    ctx.gpr[7] = (ctx.gpr[22] | 0u);
    aot_gpr_31 = (0x088C4CE8u);
    ctx.gpr[8] = (0u | 11u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0047_entry, 47u, 452u, 0x088C3708u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C4CE8u) goto L_088C4CE8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C4CE8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_088C4D0C;
      }
      goto L_088C4CF0;
    }
L_088C4CF0:
    aot_gpr_4 = (ctx.gpr[19] >> 15u);
    aot_gpr_4 = (aot_gpr_4 & 511u);
    aot_gpr_5 = (aot_gpr_4 << 3u);
    aot_gpr_5 = (ctx.gpr[23] + aot_gpr_5);
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(4));
    aot_gpr_31 = (0x088C4D0Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0120_entry, 120u, 718u, 0x089E7584u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C4D0Cu) goto L_088C4D0C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C4D0C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088C58F4;
      }
      goto L_088C4D14;
    }
L_088C4D14:
    aot_gpr_4 = (ctx.gpr[19] >> 15u);
    aot_gpr_4 = (aot_gpr_4 & 511u);
    aot_gpr_5 = (aot_gpr_4 << 3u);
    aot_gpr_5 = (ctx.gpr[23] + aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_088C4D68;
      }
      goto L_088C4D30;
    }
L_088C4D30:
    aot_gpr_5 = (ctx.gpr[19] >> 15u);
    aot_gpr_5 = (aot_gpr_5 & 511u);
    aot_gpr_5 = (aot_gpr_5 << 3u);
    aot_gpr_5 = (ctx.gpr[23] + aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (0u | 1u);
    { const bool branch_taken = aot_gpr_5 != aot_gpr_6;
    aot_gpr_5 = (ctx.gpr[19] >> 15u);
      if (branch_taken) {
          goto L_088C4D6C;
      }
      goto L_088C4D50;
    }
L_088C4D50:
    aot_gpr_5 = (aot_gpr_5 & 511u);
    aot_gpr_5 = (aot_gpr_5 << 3u);
    aot_gpr_5 = (ctx.gpr[23] + aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_088C4D6C;
      }
      goto L_088C4D68;
    }
L_088C4D68:
    aot_gpr_4 = (0u | 1u);
    goto L_088C4D6C;
L_088C4D6C:
    aot_gpr_5 = (0u | 1u);
    aot_mem.aot_direct_store32(ctx.gpr[22] + static_cast<std::uint32_t>(0), aot_gpr_5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[22] + static_cast<std::uint32_t>(4), aot_gpr_4);
      if (branch_taken) {
          goto L_088C58F4;
      }
      goto L_088C4D7C;
    }
L_088C4D7C:
    aot_gpr_4 = (ctx.gpr[19] >> 15u);
    aot_gpr_6 = (ctx.gpr[19] >> 6u);
    ctx.gpr[20] = (aot_gpr_4 & 511u);
    aot_gpr_6 = (aot_gpr_6 & 511u);
    aot_gpr_5 = (aot_gpr_6 - ctx.gpr[20]);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    aot_gpr_31 = (0x088C4D9Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0047_entry, 47u, 537u, 0x088C3C94u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C4D9Cu) goto L_088C4D9C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C4D9C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(12)));
    aot_gpr_5 = (ctx.gpr[20] << 3u);
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_6 = (ctx.gpr[19] >> 24u);
    aot_gpr_6 = (aot_gpr_6 << 3u);
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(4));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(16)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(36)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(32)));
    aot_gpr_4 = (aot_gpr_5 < aot_gpr_4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088C4DF0;
      }
      goto L_088C4DE8;
    }
L_088C4DE8:
    aot_gpr_31 = (0x088C4DF0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0132_entry, 132u, 534u, 0x08A16D40u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C4DF0u) goto L_088C4DF0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C4DF0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088C58F4;
      }
      goto L_088C4DF8;
    }
L_088C4DF8:
    aot_gpr_5 = (4u << 16u);
    aot_gpr_4 = (ctx.gpr[19] >> 6u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_gpr_5 = (8u << 16u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-4));
    aot_gpr_4 = (aot_gpr_4 - aot_gpr_5);
    aot_gpr_4 = (aot_gpr_6 + aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_4);
      if (branch_taken) {
          goto L_088C58F4;
      }
      goto L_088C4E28;
    }
L_088C4E28:
    aot_gpr_4 = (ctx.gpr[19] >> 15u);
    aot_gpr_4 = (aot_gpr_4 & 511u);
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 250 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_088C4E50;
      }
      goto L_088C4E3C;
    }
L_088C4E3C:
    aot_gpr_4 = (ctx.gpr[19] >> 15u);
    aot_gpr_4 = (aot_gpr_4 & 511u);
    aot_gpr_4 = (aot_gpr_4 << 3u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (ctx.gpr[23] + aot_gpr_4);
      if (branch_taken) {
          goto L_088C4E64;
      }
      goto L_088C4E50;
    }
L_088C4E50:
    aot_gpr_4 = (ctx.gpr[19] >> 15u);
    aot_gpr_4 = (aot_gpr_4 & 511u);
    aot_gpr_4 = (aot_gpr_4 << 3u);
    aot_gpr_4 = (ctx.gpr[18] + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-2000));
    goto L_088C4E64;
L_088C4E64:
    aot_gpr_5 = (ctx.gpr[19] >> 6u);
    aot_gpr_5 = (aot_gpr_5 & 511u);
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_5) < 250 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088C4E8C;
      }
      goto L_088C4E78;
    }
L_088C4E78:
    aot_gpr_5 = (ctx.gpr[19] >> 6u);
    aot_gpr_5 = (aot_gpr_5 & 511u);
    aot_gpr_5 = (aot_gpr_5 << 3u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (ctx.gpr[23] + aot_gpr_5);
      if (branch_taken) {
          goto L_088C4EA0;
      }
      goto L_088C4E8C;
    }
L_088C4E8C:
    aot_gpr_5 = (ctx.gpr[19] >> 6u);
    aot_gpr_5 = (aot_gpr_5 & 511u);
    aot_gpr_5 = (aot_gpr_5 << 3u);
    aot_gpr_5 = (ctx.gpr[18] + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-2000));
    goto L_088C4EA0;
L_088C4EA0:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    aot_gpr_4 = (ctx.gpr[19] >> 24u);
      if (branch_taken) {
          goto L_088C4F3C;
      }
      goto L_088C4EAC;
    }
L_088C4EAC:
    aot_gpr_4 = (ctx.gpr[19] >> 15u);
    aot_gpr_4 = (aot_gpr_4 & 511u);
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 250 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (ctx.gpr[19] >> 15u);
      if (branch_taken) {
          goto L_088C4ED4;
      }
      goto L_088C4EC0;
    }
L_088C4EC0:
    aot_gpr_4 = (ctx.gpr[19] >> 15u);
    aot_gpr_4 = (aot_gpr_4 & 511u);
    aot_gpr_4 = (aot_gpr_4 << 3u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (ctx.gpr[23] + aot_gpr_4);
      if (branch_taken) {
          goto L_088C4EE4;
      }
      goto L_088C4ED4;
    }
L_088C4ED4:
    aot_gpr_4 = (aot_gpr_4 & 511u);
    aot_gpr_4 = (aot_gpr_4 << 3u);
    aot_gpr_4 = (ctx.gpr[18] + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-2000));
    goto L_088C4EE4;
L_088C4EE4:
    aot_gpr_5 = (ctx.gpr[19] >> 6u);
    aot_gpr_5 = (aot_gpr_5 & 511u);
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_5) < 250 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_5 = (ctx.gpr[19] >> 6u);
      if (branch_taken) {
          goto L_088C4F0C;
      }
      goto L_088C4EF8;
    }
L_088C4EF8:
    aot_gpr_5 = (ctx.gpr[19] >> 6u);
    aot_gpr_5 = (aot_gpr_5 & 511u);
    aot_gpr_5 = (aot_gpr_5 << 3u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[23] = (ctx.gpr[23] + aot_gpr_5);
      if (branch_taken) {
          goto L_088C4F1C;
      }
      goto L_088C4F0C;
    }
L_088C4F0C:
    aot_gpr_5 = (aot_gpr_5 & 511u);
    aot_gpr_5 = (aot_gpr_5 << 3u);
    ctx.gpr[23] = (ctx.gpr[18] + aot_gpr_5);
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(-2000));
    goto L_088C4F1C;
L_088C4F1C:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088C4F2Cu);
    aot_gpr_6 = (ctx.gpr[23] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0047_entry, 47u, 566u, 0x088C3EB8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C4F2Cu) goto L_088C4F2C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C4F2C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    aot_gpr_4 = (ctx.gpr[19] >> 24u);
      if (branch_taken) {
          goto L_088C4F3C;
      }
      goto L_088C4F34;
    }
L_088C4F34:
    ctx.gpr[20] = (0u | 1u);
    aot_gpr_4 = (ctx.gpr[19] >> 24u);
    goto L_088C4F3C;
L_088C4F3C:
    if (ctx.gpr[20] == aot_gpr_4) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
        goto L_088C4F54;
    }
    goto L_088C4F44;
L_088C4F44:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_4);
      if (branch_taken) {
          goto L_088C4F80;
      }
      goto L_088C4F54;
    }
L_088C4F54:
    aot_gpr_6 = (4u << 16u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-1));
    aot_gpr_5 = (aot_gpr_5 >> 6u);
    aot_gpr_5 = (aot_gpr_5 & aot_gpr_6);
    aot_gpr_6 = (8u << 16u);
    aot_gpr_5 = (aot_gpr_5 << 2u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-8));
    aot_gpr_5 = (aot_gpr_5 - aot_gpr_6);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_4);
    goto L_088C4F80;
L_088C4F80:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088C58F4;
      }
      goto L_088C4F88;
    }
L_088C4F88:
    aot_gpr_4 = (ctx.gpr[19] >> 15u);
    aot_gpr_4 = (aot_gpr_4 & 511u);
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 250 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (ctx.gpr[19] >> 15u);
      if (branch_taken) {
          goto L_088C4FB0;
      }
      goto L_088C4F9C;
    }
L_088C4F9C:
    aot_gpr_4 = (ctx.gpr[19] >> 15u);
    aot_gpr_4 = (aot_gpr_4 & 511u);
    aot_gpr_4 = (aot_gpr_4 << 3u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (ctx.gpr[23] + aot_gpr_4);
      if (branch_taken) {
          goto L_088C4FC0;
      }
      goto L_088C4FB0;
    }
L_088C4FB0:
    aot_gpr_4 = (aot_gpr_4 & 511u);
    aot_gpr_4 = (aot_gpr_4 << 3u);
    aot_gpr_4 = (ctx.gpr[18] + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-2000));
    goto L_088C4FC0;
L_088C4FC0:
    aot_gpr_5 = (ctx.gpr[19] >> 6u);
    aot_gpr_5 = (aot_gpr_5 & 511u);
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_5) < 250 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_5 = (ctx.gpr[19] >> 6u);
      if (branch_taken) {
          goto L_088C4FE8;
      }
      goto L_088C4FD4;
    }
L_088C4FD4:
    aot_gpr_5 = (ctx.gpr[19] >> 6u);
    aot_gpr_5 = (aot_gpr_5 & 511u);
    aot_gpr_5 = (aot_gpr_5 << 3u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[23] = (ctx.gpr[23] + aot_gpr_5);
      if (branch_taken) {
          goto L_088C4FF8;
      }
      goto L_088C4FE8;
    }
L_088C4FE8:
    aot_gpr_5 = (aot_gpr_5 & 511u);
    aot_gpr_5 = (aot_gpr_5 << 3u);
    ctx.gpr[23] = (ctx.gpr[18] + aot_gpr_5);
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(-2000));
    goto L_088C4FF8;
L_088C4FF8:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088C5008u);
    aot_gpr_6 = (ctx.gpr[23] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0047_entry, 47u, 504u, 0x088C3A8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C5008u) goto L_088C5008;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C5008:
    aot_gpr_4 = (ctx.gpr[19] >> 24u);
    if (ctx.gpr[2] == aot_gpr_4) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
        goto L_088C5024;
    }
    goto L_088C5014;
L_088C5014:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_4);
      if (branch_taken) {
          goto L_088C5050;
      }
      goto L_088C5024;
    }
L_088C5024:
    aot_gpr_6 = (4u << 16u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-1));
    aot_gpr_5 = (aot_gpr_5 >> 6u);
    aot_gpr_5 = (aot_gpr_5 & aot_gpr_6);
    aot_gpr_6 = (8u << 16u);
    aot_gpr_5 = (aot_gpr_5 << 2u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-8));
    aot_gpr_5 = (aot_gpr_5 - aot_gpr_6);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_4);
    goto L_088C5050;
L_088C5050:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088C58F4;
      }
      goto L_088C5058;
    }
L_088C5058:
    aot_gpr_4 = (ctx.gpr[19] >> 15u);
    aot_gpr_4 = (aot_gpr_4 & 511u);
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 250 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (ctx.gpr[19] >> 15u);
      if (branch_taken) {
          goto L_088C5080;
      }
      goto L_088C506C;
    }
L_088C506C:
    aot_gpr_4 = (ctx.gpr[19] >> 15u);
    aot_gpr_4 = (aot_gpr_4 & 511u);
    aot_gpr_4 = (aot_gpr_4 << 3u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (ctx.gpr[23] + aot_gpr_4);
      if (branch_taken) {
          goto L_088C5090;
      }
      goto L_088C5080;
    }
L_088C5080:
    aot_gpr_4 = (aot_gpr_4 & 511u);
    aot_gpr_4 = (aot_gpr_4 << 3u);
    aot_gpr_4 = (ctx.gpr[18] + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-2000));
    goto L_088C5090;
L_088C5090:
    aot_gpr_5 = (ctx.gpr[19] >> 6u);
    aot_gpr_5 = (aot_gpr_5 & 511u);
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_5) < 250 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_5 = (ctx.gpr[19] >> 6u);
      if (branch_taken) {
          goto L_088C50B8;
      }
      goto L_088C50A4;
    }
L_088C50A4:
    aot_gpr_5 = (ctx.gpr[19] >> 6u);
    aot_gpr_5 = (aot_gpr_5 & 511u);
    aot_gpr_5 = (aot_gpr_5 << 3u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[23] = (ctx.gpr[23] + aot_gpr_5);
      if (branch_taken) {
          goto L_088C50C8;
      }
      goto L_088C50B8;
    }
L_088C50B8:
    aot_gpr_5 = (aot_gpr_5 & 511u);
    aot_gpr_5 = (aot_gpr_5 << 3u);
    ctx.gpr[23] = (ctx.gpr[18] + aot_gpr_5);
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(-2000));
    goto L_088C50C8;
L_088C50C8:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088C50D8u);
    aot_gpr_6 = (ctx.gpr[23] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0047_entry, 47u, 519u, 0x088C3B78u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C50D8u) goto L_088C50D8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C50D8:
    aot_gpr_4 = (ctx.gpr[19] >> 24u);
    if (ctx.gpr[2] == aot_gpr_4) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
        goto L_088C50F4;
    }
    goto L_088C50E4;
L_088C50E4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_4);
      if (branch_taken) {
          goto L_088C5120;
      }
      goto L_088C50F4;
    }
L_088C50F4:
    aot_gpr_6 = (4u << 16u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-1));
    aot_gpr_5 = (aot_gpr_5 >> 6u);
    aot_gpr_5 = (aot_gpr_5 & aot_gpr_6);
    aot_gpr_6 = (8u << 16u);
    aot_gpr_5 = (aot_gpr_5 << 2u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-8));
    aot_gpr_5 = (aot_gpr_5 - aot_gpr_6);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_4);
    goto L_088C5120;
L_088C5120:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088C58F4;
      }
      goto L_088C5128;
    }
L_088C5128:
    aot_gpr_4 = (ctx.gpr[19] >> 15u);
    aot_gpr_4 = (aot_gpr_4 & 511u);
    aot_gpr_4 = (aot_gpr_4 << 3u);
    ctx.gpr[23] = (ctx.gpr[23] + aot_gpr_4);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_088C5160;
      }
      goto L_088C5144;
    }
L_088C5144:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (0u | 1u);
    { const bool branch_taken = aot_gpr_5 != aot_gpr_6;
    aot_gpr_5 = (ctx.gpr[19] >> 6u);
      if (branch_taken) {
          goto L_088C5168;
      }
      goto L_088C5154;
    }
L_088C5154:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[23] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_5 = (ctx.gpr[19] >> 6u);
      if (branch_taken) {
          goto L_088C5168;
      }
      goto L_088C5160;
    }
L_088C5160:
    aot_gpr_4 = (0u | 1u);
    aot_gpr_5 = (ctx.gpr[19] >> 6u);
    goto L_088C5168;
L_088C5168:
    aot_gpr_5 = (aot_gpr_5 & 511u);
    if (aot_gpr_4 != aot_gpr_5) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
        goto L_088C5184;
    }
    goto L_088C5174;
L_088C5174:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_4);
      if (branch_taken) {
          goto L_088C51CC;
      }
      goto L_088C5184;
    }
L_088C5184:
    aot_gpr_5 = (ctx.gpr[23] + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(ctx.gpr[22] + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (ctx.gpr[22] + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_6 = (4u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-1));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_5 >> 6u);
    aot_gpr_5 = (aot_gpr_5 & aot_gpr_6);
    aot_gpr_6 = (8u << 16u);
    aot_gpr_5 = (aot_gpr_5 << 2u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-8));
    aot_gpr_5 = (aot_gpr_5 - aot_gpr_6);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_4);
    goto L_088C51CC;
L_088C51CC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088C58F4;
      }
      goto L_088C51D4;
    }
L_088C51D4:
    aot_gpr_4 = (ctx.gpr[19] >> 15u);
    aot_gpr_4 = (aot_gpr_4 & 511u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088C51F0;
      }
      goto L_088C51E4;
    }
L_088C51E4:
    aot_gpr_4 = (aot_gpr_4 << 3u);
    aot_gpr_4 = (ctx.gpr[22] + aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(8), aot_gpr_4);
    goto L_088C51F0;
L_088C51F0:
    aot_gpr_4 = (ctx.gpr[19] >> 6u);
    ctx.gpr[20] = (aot_gpr_4 & 511u);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-1));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088C5208u);
    aot_gpr_5 = (ctx.gpr[22] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0027_entry, 27u, 522u, 0x08872148u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C5208u) goto L_088C5208;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C5208:
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[22] == 0u;
      if (branch_taken) {
          goto L_088C5270;
      }
      goto L_088C5214;
    }
L_088C5214:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_gpr_4 < ctx.gpr[22] ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088C5250;
      }
      goto L_088C5224;
    }
L_088C5224:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x088C5234u);
    aot_gpr_6 = (ctx.gpr[22] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0027_entry, 27u, 550u, 0x088723DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C5234u) goto L_088C5234;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C5234:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[20]) < 0;
      if (branch_taken) {
          goto L_088C5248;
      }
      goto L_088C523C;
    }
L_088C523C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(20)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(8), aot_gpr_4);
    goto L_088C5248;
L_088C5248:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088C58F4;
      }
      goto L_088C5250;
    }
L_088C5250:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(20)));
    aot_gpr_6 = (0u | 8u);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(-12), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(20)));
    ctx.gpr[2] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(-16), aot_gpr_6);
      if (branch_taken) {
          goto L_088C58FC;
      }
      goto L_088C5270;
    }
L_088C5270:
    aot_gpr_4 = (ctx.gpr[19] & 63u);
    aot_gpr_5 = (0u | 25u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_088C529C;
      }
      goto L_088C5280;
    }
L_088C5280:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(20)));
    aot_gpr_6 = (0u | 12u);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(-12), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(-16), aot_gpr_6);
      if (branch_taken) {
          goto L_088C5378;
      }
      goto L_088C529C;
    }
L_088C529C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(20)));
    aot_gpr_5 = (ctx.gpr[19] >> 24u);
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(-24)));
    ctx.gpr[19] = (aot_gpr_5 << 3u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[19] = (ctx.gpr[17] + ctx.gpr[19]);
      if (branch_taken) {
          goto L_088C52C4;
      }
      goto L_088C52B8;
    }
L_088C52B8:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088C52C4u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0171_entry, 171u, 68u, 0x08AB05DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C52C4u) goto L_088C52C4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C52C4:
    aot_gpr_4 = (0u | 0u);
    aot_gpr_5 = (aot_gpr_4 << 3u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (ctx.gpr[19] + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 < aot_gpr_6 ? 1u : 0u);
    if (aot_gpr_5 == 0u) {
    aot_gpr_4 = (aot_gpr_4 << 3u);
        goto L_088C532C;
    }
    goto L_088C52E0;
L_088C52E0:
    aot_gpr_5 = (aot_gpr_4 << 3u);
    goto L_088C52E4;
L_088C52E4:
    aot_gpr_6 = (ctx.gpr[19] + aot_gpr_5);
    aot_gpr_5 = (ctx.gpr[17] + aot_gpr_5);
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-8));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(4));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(4));
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_gpr_5 = (aot_gpr_4 << 3u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (ctx.gpr[19] + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 < aot_gpr_6 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_5 = (aot_gpr_4 << 3u);
      if (branch_taken) {
          goto L_088C52E4;
      }
      goto L_088C5328;
    }
L_088C5328:
    aot_gpr_4 = (aot_gpr_4 << 3u);
    goto L_088C532C;
L_088C532C:
    aot_gpr_4 = (ctx.gpr[17] + aot_gpr_4);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(20)));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(8), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(-20), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(20)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(-12), aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(20)));
    aot_gpr_6 = (0u | 8u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(-4)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(-4), aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(20)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(-16), aot_gpr_6);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(20)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-24));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(20), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(12), aot_gpr_4);
    goto L_088C5378;
L_088C5378:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088C4254;
      }
      goto L_088C5380;
    }
L_088C5380:
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(20)));
    ctx.gpr[19] = (ctx.gpr[19] >> 15u);
    ctx.gpr[19] = (ctx.gpr[19] & 511u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-24));
      if (branch_taken) {
          goto L_088C53A4;
      }
      goto L_088C5394;
    }
L_088C5394:
    aot_gpr_4 = (ctx.gpr[19] << 3u);
    aot_gpr_4 = (ctx.gpr[22] + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-8));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(8), aot_gpr_4);
    goto L_088C53A4;
L_088C53A4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(72)));
    if (aot_gpr_4 == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(20)));
        goto L_088C53C0;
    }
    goto L_088C53B0;
L_088C53B0:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088C53BCu);
    aot_gpr_5 = (ctx.gpr[23] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0171_entry, 171u, 68u, 0x08AB05DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C53BCu) goto L_088C53BC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C53BC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(20)));
    goto L_088C53C0;
L_088C53C0:
    aot_gpr_5 = (0u | 8u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(20)));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(12), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_gpr_4 & 4u);
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
        goto L_088C53EC;
    }
    goto L_088C53E4;
L_088C53E4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[22] | 0u);
      if (branch_taken) {
          goto L_088C58FC;
      }
      goto L_088C53EC;
    }
L_088C53EC:
    aot_gpr_6 = (ctx.gpr[22] | 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(-4)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (aot_gpr_5 >> 6u);
    aot_gpr_5 = (aot_gpr_5 & 511u);
    ctx.gpr[17] = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    aot_gpr_31 = (0x088C540Cu);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0027_entry, 27u, 550u, 0x088723DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C540Cu) goto L_088C540C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C540C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) < 0;
      if (branch_taken) {
          goto L_088C5420;
      }
      goto L_088C5414;
    }
L_088C5414:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(20)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(8), aot_gpr_4);
    goto L_088C5420;
L_088C5420:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_088C4280;
      }
      goto L_088C5428;
    }
L_088C5428:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.gpr[20] = (ctx.gpr[22] + static_cast<std::uint32_t>(8));
    aot_gpr_5 = (0u | 3u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    ctx.gpr[21] = (ctx.gpr[22] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_088C544C;
      }
      goto L_088C543C;
    }
L_088C543C:
    aot_gpr_5 = (2232u << 16u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088C544Cu);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-21628));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0120_entry, 120u, 743u, 0x089E77C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C544Cu) goto L_088C544C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C544C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (0u | 3u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_5 = (ctx.gpr[22] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_088C5480;
      }
      goto L_088C545C;
    }
L_088C545C:
    aot_gpr_31 = (0x088C5464u);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0047_entry, 47u, 349u, 0x088C2EA4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C5464u) goto L_088C5464;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C5464:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[20] != 0u;
      if (branch_taken) {
          goto L_088C5480;
      }
      goto L_088C5470;
    }
L_088C5470:
    aot_gpr_5 = (2232u << 16u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088C5480u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-21588));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0120_entry, 120u, 743u, 0x089E77C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C5480u) goto L_088C5480;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C5480:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (0u | 3u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_5 = (ctx.gpr[22] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_088C54B4;
      }
      goto L_088C5490;
    }
L_088C5490:
    aot_gpr_31 = (0x088C5498u);
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0047_entry, 47u, 349u, 0x088C2EA4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C5498u) goto L_088C5498;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C5498:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[21] != 0u;
      if (branch_taken) {
          goto L_088C54B4;
      }
      goto L_088C54A4;
    }
L_088C54A4:
    aot_gpr_5 = (2232u << 16u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088C54B4u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-21556));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0120_entry, 120u, 743u, 0x089E77C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C54B4u) goto L_088C54B4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C54B4:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    aot_fpr_13 = std::bit_cast<float>(0u);
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    aot_fpr_12 = aot_fpr_14 + aot_fpr_12;
      if (branch_taken) {
          goto L_088C54EC;
      }
      goto L_088C54D0;
    }
L_088C54D0:
    aot_gpr_4 = (0u | 0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    if (((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_gpr_4 = (0u | 1u);
        goto L_088C54E4;
    }
    goto L_088C54E4;
L_088C54E4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088C5500;
      }
      goto L_088C54EC;
    }
L_088C54EC:
    aot_gpr_4 = (0u | 0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_gpr_4 = (0u | 1u);
        goto L_088C5500;
    }
    goto L_088C5500;
L_088C5500:
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_5 = (4u << 16u);
      if (branch_taken) {
          goto L_088C5534;
      }
      goto L_088C5508;
    }
L_088C5508:
    aot_gpr_4 = (ctx.gpr[19] >> 6u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_gpr_5 = (8u << 16u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-4));
    aot_gpr_4 = (aot_gpr_4 - aot_gpr_5);
    aot_gpr_4 = (aot_gpr_6 + aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[22] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_088C5534;
L_088C5534:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088C58F4;
      }
      goto L_088C553C;
    }
L_088C553C:
    ctx.gpr[20] = (ctx.gpr[19] | 0u);
    aot_gpr_4 = (ctx.gpr[20] >> 6u);
    ctx.gpr[19] = (aot_gpr_4 & 511u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[21] = (ctx.gpr[19] << 3u);
    aot_gpr_5 = (ctx.gpr[22] + ctx.gpr[21]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(16));
    aot_gpr_6 = (ctx.gpr[22] + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_gpr_5 + static_cast<std::uint32_t>(4));
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (ctx.gpr[22] + static_cast<std::uint32_t>(8));
    aot_mem.aot_direct_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_gpr_5 + static_cast<std::uint32_t>(8));
    aot_mem.aot_direct_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    ctx.gpr[7] = (ctx.gpr[22] + static_cast<std::uint32_t>(16));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_gpr_5 + static_cast<std::uint32_t>(16));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_6 + static_cast<std::uint32_t>(4));
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[7] = (aot_gpr_5 + static_cast<std::uint32_t>(24));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088C55D0u);
    aot_gpr_6 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0027_entry, 27u, 560u, 0x088724C4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C55D0u) goto L_088C55D0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C55D0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(20)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(12)));
    aot_gpr_6 = (ctx.gpr[20] >> 24u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_6 = (aot_gpr_6 << 3u);
    ctx.gpr[22] = (aot_gpr_5 + aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(8), aot_gpr_4);
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(16));
    aot_gpr_4 = (ctx.gpr[22] + ctx.gpr[21]);
    goto L_088C55F4;
L_088C55F4:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-1));
    aot_gpr_5 = (ctx.gpr[19] << 3u);
    aot_gpr_6 = (aot_gpr_4 + aot_gpr_5);
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (ctx.gpr[22] + aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(4));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(4));
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) > 0;
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_6);
      if (branch_taken) {
          goto L_088C55F4;
      }
      goto L_088C5624;
    }
L_088C5624:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
        goto L_088C5640;
    }
    goto L_088C5630;
L_088C5630:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_4);
      if (branch_taken) {
          goto L_088C566C;
      }
      goto L_088C5640;
    }
L_088C5640:
    aot_gpr_6 = (4u << 16u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-1));
    aot_gpr_5 = (aot_gpr_5 >> 6u);
    aot_gpr_5 = (aot_gpr_5 & aot_gpr_6);
    aot_gpr_6 = (8u << 16u);
    aot_gpr_5 = (aot_gpr_5 << 2u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-8));
    aot_gpr_5 = (aot_gpr_5 - aot_gpr_6);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_4);
    goto L_088C566C;
L_088C566C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088C58F4;
      }
      goto L_088C5674;
    }
L_088C5674:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (0u | 5u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    aot_gpr_5 = (4u << 16u);
      if (branch_taken) {
          goto L_088C56F0;
      }
      goto L_088C5684;
    }
L_088C5684:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (ctx.gpr[22] + static_cast<std::uint32_t>(8));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[22] + static_cast<std::uint32_t>(4));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_5 + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[20] = (ctx.gpr[28] + static_cast<std::uint32_t>(-23872));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    ctx.gpr[21] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(68)));
    aot_gpr_31 = (0x088C56B4u);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58974, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C56B4u) goto L_088C56B4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C56B4:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x088C56C4u);
    aot_gpr_6 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0115_entry, 115u, 314u, 0x089D1D64u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C56C4u) goto L_088C56C4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C56C4:
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    aot_gpr_31 = (0x088C56D0u);
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0163_entry, 163u, 640u, 0x08A93FC4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C56D0u) goto L_088C56D0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C56D0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (ctx.gpr[2] + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(ctx.gpr[22] + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (ctx.gpr[22] + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_5 = (4u << 16u);
    goto L_088C56F0;
L_088C56F0:
    aot_gpr_4 = (ctx.gpr[19] >> 6u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_gpr_5 = (8u << 16u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-4));
    aot_gpr_4 = (aot_gpr_4 - aot_gpr_5);
    aot_gpr_4 = (aot_gpr_6 + aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_4);
      if (branch_taken) {
          goto L_088C58F4;
      }
      goto L_088C571C;
    }
L_088C571C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (0u | 5u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_088C575C;
      }
      goto L_088C572C;
    }
L_088C572C:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_5 = (4u << 16u);
    ctx.gpr[20] = (aot_gpr_4 >> 6u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    ctx.gpr[20] = (ctx.gpr[20] & aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 & 63u);
    aot_gpr_5 = (0u | 31u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    ctx.gpr[19] = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_088C5764;
      }
      goto L_088C5750;
    }
L_088C5750:
    ctx.gpr[21] = (ctx.gpr[20] & 31u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088C578C;
      }
      goto L_088C575C;
    }
L_088C575C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088C58FC;
      }
      goto L_088C5764;
    }
L_088C5764:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(20)));
    aot_gpr_4 = (aot_gpr_4 - ctx.gpr[22]);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 3u));
    aot_gpr_6 = (aot_gpr_6 >> 29u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    ctx.gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 3u));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(8), aot_gpr_4);
    goto L_088C578C;
L_088C578C:
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-32));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[21]) <= 0;
    ctx.gpr[20] = (ctx.gpr[20] & aot_gpr_4);
      if (branch_taken) {
          goto L_088C57D4;
      }
      goto L_088C5798;
    }
L_088C5798:
    aot_gpr_4 = (ctx.gpr[21] << 3u);
    ctx.gpr[23] = (ctx.gpr[22] + aot_gpr_4);
    aot_gpr_6 = (ctx.gpr[20] + ctx.gpr[21]);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088C57B0u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0164_entry, 164u, 28u, 0x08A94190u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C57B0u) goto L_088C57B0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C57B0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (ctx.gpr[23] + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (ctx.gpr[2] + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[21]) > 0;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
      if (branch_taken) {
          goto L_088C5798;
      }
      goto L_088C57D4;
    }
L_088C57D4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088C58F4;
      }
      goto L_088C57DC;
    }
L_088C57DC:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088C57E8u);
    aot_gpr_5 = (ctx.gpr[22] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0171_entry, 171u, 68u, 0x08AB05DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C57E8u) goto L_088C57E8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C57E8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088C58F4;
      }
      goto L_088C57F0;
    }
L_088C57F0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    aot_gpr_6 = (4u << 16u);
    aot_gpr_5 = (ctx.gpr[19] >> 6u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-1));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
    aot_gpr_5 = (aot_gpr_5 & aot_gpr_6);
    aot_gpr_5 = (aot_gpr_5 << 2u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    ctx.gpr[21] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    ctx.gpr[19] = (aot_mem.aot_direct_load8(ctx.gpr[21] + static_cast<std::uint32_t>(68)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088C5828u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0171_entry, 171u, 56u, 0x08AB04C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C5828u) goto L_088C5828;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C5828:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    aot_mem.aot_direct_store32(ctx.gpr[20] + static_cast<std::uint32_t>(12), ctx.gpr[21]);
    ctx.gpr[21] = (0u | 0u);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (0u | 6u);
      if (branch_taken) {
          goto L_088C58CC;
      }
      goto L_088C5840;
    }
L_088C5840:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (0u | 4u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 & 63u);
    if (aot_gpr_4 != aot_gpr_5) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
        goto L_088C5884;
    }
    goto L_088C5858;
L_088C5858:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (ctx.gpr[21] << 2u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (ctx.gpr[20] + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 >> 15u);
    aot_gpr_4 = (aot_gpr_4 & 511u);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (ctx.gpr[17] + aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(24), aot_gpr_4);
      if (branch_taken) {
          goto L_088C58AC;
      }
      goto L_088C5884;
    }
L_088C5884:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (aot_gpr_5 >> 15u);
    aot_gpr_5 = (aot_gpr_5 & 511u);
    aot_gpr_5 = (aot_gpr_5 << 3u);
    aot_gpr_31 = (0x088C58A0u);
    aot_gpr_5 = (ctx.gpr[23] + aot_gpr_5);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0171_entry, 171u, 59u, 0x08AB0548u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C58A0u) goto L_088C58A0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C58A0:
    aot_gpr_4 = (ctx.gpr[21] << 2u);
    aot_gpr_4 = (ctx.gpr[20] + aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    goto L_088C58AC;
L_088C58AC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088C5840;
      }
      goto L_088C58C8;
    }
L_088C58C8:
    aot_gpr_4 = (0u | 6u);
    goto L_088C58CC;
L_088C58CC:
    aot_mem.aot_direct_store32(ctx.gpr[22] + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[22] + static_cast<std::uint32_t>(4), ctx.gpr[20]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(16)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(36)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(32)));
    aot_gpr_4 = (aot_gpr_5 < aot_gpr_4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088C58F4;
      }
      goto L_088C58EC;
    }
L_088C58EC:
    aot_gpr_31 = (0x088C58F4u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0132_entry, 132u, 534u, 0x08A16D40u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C58F4u) goto L_088C58F4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C58F4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088C42AC;
      }
      goto L_088C58FC;
    }
L_088C58FC:
    { std::uint32_t aot_run_words[9]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      ctx.gpr[20] = aot_run_words[4];
      ctx.gpr[21] = aot_run_words[5];
      ctx.gpr[22] = aot_run_words[6];
      ctx.gpr[23] = aot_run_words[7];
      aot_gpr_31 = aot_run_words[8];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088C5928:
    aot_gpr_5 = (2234u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(22528));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), 0u);
    jump_target = aot_gpr_31;
    ctx.gpr[2] = (aot_gpr_4 | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088C5940:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088C5984;
      }
      goto L_088C5950;
    }
L_088C5950:
    aot_gpr_6 = (2235u << 16u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-27508));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_6);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(5904), 0u);
      if (branch_taken) {
          goto L_088C5970;
      }
      goto L_088C5964;
    }
L_088C5964:
    aot_gpr_6 = (2235u << 16u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-28772));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_6);
    goto L_088C5970;
L_088C5970:
    aot_gpr_5 = (aot_gpr_5 & 1u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_088C5984;
      }
      goto L_088C597C;
    }
L_088C597C:
    aot_gpr_31 = (0x088C5984u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE2C0, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C5984u) goto L_088C5984;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C5984:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088C5990:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088C59E4;
      }
      goto L_088C59A0;
    }
L_088C59A0:
    aot_gpr_6 = (2234u << 16u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(22528));
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_6);
      if (branch_taken) {
          goto L_088C59D0;
      }
      goto L_088C59B0;
    }
L_088C59B0:
    aot_gpr_6 = (2235u << 16u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-27508));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_6);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(5904), 0u);
      if (branch_taken) {
          goto L_088C59D0;
      }
      goto L_088C59C4;
    }
L_088C59C4:
    aot_gpr_6 = (2235u << 16u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-28772));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_6);
    goto L_088C59D0;
L_088C59D0:
    aot_gpr_5 = (aot_gpr_5 & 1u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_088C59E4;
      }
      goto L_088C59DC;
    }
L_088C59DC:
    aot_gpr_31 = (0x088C59E4u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE2C0, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C59E4u) goto L_088C59E4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C59E4:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088C59F0:
    jump_target = aot_gpr_31;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), aot_gpr_5);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088C59F8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (aot_gpr_5 << 3u);
    ctx.gpr[12] = (aot_gpr_4 + aot_gpr_5);
    ctx.gpr[12] = (ctx.gpr[12] + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[12] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (0u | 0u);
    ctx.gpr[11] = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[11] == 0u;
    ctx.gpr[10] = (0u | 0u);
      if (branch_taken) {
          goto L_088C5B10;
      }
      goto L_088C5A1C;
    }
L_088C5A1C:
    ctx.gpr[11] = (2234u << 16u);
    ctx.gpr[3] = (ctx.gpr[11] + static_cast<std::uint32_t>(14520));
    ctx.gpr[3] = (ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.gpr[11] = (ctx.gpr[3] + ctx.gpr[9]);
    ctx.gpr[12] = (aot_mem.aot_direct_load32(ctx.gpr[12] + static_cast<std::uint32_t>(4)));
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[11] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[11] = (ctx.gpr[9] + static_cast<std::uint32_t>(32));
    ctx.gpr[2] = (ctx.gpr[2] & 1u);
    ctx.gpr[14] = (aot_gpr_5 & 255u);
    goto L_088C5A40;
L_088C5A40:
    ctx.gpr[13] = (ctx.gpr[14] & 255u);
    ctx.gpr[13] = (ctx.gpr[13] << 4u);
    ctx.gpr[15] = (ctx.gpr[13] + ctx.gpr[13]);
    ctx.gpr[13] = (ctx.gpr[13] + ctx.gpr[15]);
    ctx.gpr[13] = (ctx.gpr[12] + ctx.gpr[13]);
    ctx.gpr[13] = (aot_mem.aot_direct_load8(ctx.gpr[13] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[13] != ctx.gpr[7];
    ctx.gpr[13] = (ctx.gpr[14] & 255u);
      if (branch_taken) {
          goto L_088C5B00;
      }
      goto L_088C5A60;
    }
L_088C5A60:
    ctx.gpr[13] = (ctx.gpr[13] << 4u);
    ctx.gpr[15] = (ctx.gpr[13] + ctx.gpr[13]);
    ctx.gpr[13] = (ctx.gpr[13] + ctx.gpr[15]);
    ctx.gpr[13] = (ctx.gpr[12] + ctx.gpr[13]);
    ctx.gpr[13] = (aot_mem.aot_direct_load8(ctx.gpr[13] + static_cast<std::uint32_t>(1)));
    { const bool branch_taken = ctx.gpr[13] == ctx.gpr[8];
    ctx.gpr[13] = (ctx.gpr[14] & 255u);
      if (branch_taken) {
          goto L_088C5A88;
      }
      goto L_088C5A7C;
    }
L_088C5A7C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[8]) >= 0;
      if (branch_taken) {
          goto L_088C5B00;
      }
      goto L_088C5A84;
    }
L_088C5A84:
    ctx.gpr[13] = (ctx.gpr[14] & 255u);
    goto L_088C5A88;
L_088C5A88:
    ctx.gpr[13] = (ctx.gpr[13] << 4u);
    ctx.gpr[15] = (ctx.gpr[13] + ctx.gpr[13]);
    ctx.gpr[13] = (ctx.gpr[13] + ctx.gpr[15]);
    ctx.gpr[13] = (ctx.gpr[12] + ctx.gpr[13]);
    ctx.gpr[13] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[13] + static_cast<std::uint32_t>(2))))));
    ctx.gpr[15] = (ctx.gpr[3] + ctx.gpr[13]);
    ctx.gpr[15] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[15] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[15] = (ctx.gpr[15] & 1u);
    { const bool branch_taken = ctx.gpr[15] == 0u;
      if (branch_taken) {
          goto L_088C5AB8;
      }
      goto L_088C5AB0;
    }
L_088C5AB0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[13] = (ctx.gpr[13] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_088C5AB8;
      }
      goto L_088C5AB8;
    }
L_088C5AB8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[15] = (ctx.gpr[9] | 0u);
      if (branch_taken) {
          goto L_088C5AC8;
      }
      goto L_088C5AC0;
    }
L_088C5AC0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[15] = (ctx.gpr[11] | 0u);
      if (branch_taken) {
          goto L_088C5AC8;
      }
      goto L_088C5AC8;
    }
L_088C5AC8:
    { const bool branch_taken = ctx.gpr[13] == ctx.gpr[15];
      if (branch_taken) {
          goto L_088C5AD8;
      }
      goto L_088C5AD0;
    }
L_088C5AD0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[9]) >= 0;
      if (branch_taken) {
          goto L_088C5B00;
      }
      goto L_088C5AD8;
    }
L_088C5AD8:
    { const bool branch_taken = aot_gpr_6 == ctx.gpr[10];
      if (branch_taken) {
          goto L_088C5AE8;
      }
      goto L_088C5AE0;
    }
L_088C5AE0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088C5B00;
      }
      goto L_088C5AE8;
    }
L_088C5AE8:
    aot_gpr_4 = (ctx.gpr[14] & 255u);
    aot_gpr_4 = (aot_gpr_4 << 4u);
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_4);
    ctx.gpr[2] = (aot_gpr_4 + aot_gpr_5);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[12] + ctx.gpr[2]);
      if (branch_taken) {
          goto L_088C5B14;
      }
      goto L_088C5B00;
    }
L_088C5B00:
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    ctx.gpr[13] = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[13] != 0u;
    ctx.gpr[14] = (aot_gpr_5 & 255u);
      if (branch_taken) {
          goto L_088C5A40;
      }
      goto L_088C5B10;
    }
L_088C5B10:
    ctx.gpr[2] = (0u | 0u);
    goto L_088C5B14;
L_088C5B14:
    jump_target = aot_gpr_31;
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088C5B1C:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28320));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(26320)));
    aot_gpr_5 = (0u | 6u);
    { const std::uint32_t dividend = aot_gpr_6; const std::uint32_t divisor = aot_gpr_5; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(26344)));
    aot_gpr_6 = (ctx.hi);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(3));
    { const std::uint32_t dividend = aot_gpr_5; const std::uint32_t divisor = aot_gpr_6; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr_5 = (ctx.hi);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_088C5B64;
      }
      goto L_088C5B50;
    }
L_088C5B50:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(26324)));
    aot_gpr_5 = (0u | 60u);
    { const std::uint32_t dividend = aot_gpr_4; const std::uint32_t divisor = aot_gpr_5; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr_4 = (ctx.hi);
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-23835), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_088C5B64;
L_088C5B64:
    jump_target = aot_gpr_31;
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088C5B6C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_31);
    aot_gpr_31 = (0x088C5B84u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58974, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C5B84u) goto L_088C5B84;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C5B84:
    aot_gpr_4 = (aot_gpr_29 | 0u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088C5B94u);
    aot_gpr_6 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 283u, 0x08B653C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C5B94u) goto L_088C5B94;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C5B94:
    aot_gpr_31 = (0x088C5B9Cu);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 542u, 0x08B59EE4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C5B9Cu) goto L_088C5B9C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C5B9C:
    aot_gpr_31 = (0x088C5BA4u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0162_entry, 162u, 75u, 0x08A8C7ACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C5BA4u) goto L_088C5BA4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C5BA4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16352)));
    aot_gpr_16 = (0u | 0u);
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_16) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088C5C0C;
      }
      goto L_088C5BB8;
    }
L_088C5BB8:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16356)));
    aot_gpr_6 = (aot_gpr_16 << 2u);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_5 != aot_gpr_4;
      if (branch_taken) {
          goto L_088C5BF8;
      }
      goto L_088C5BD0;
    }
L_088C5BD0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(5824));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(6027));
      if (branch_taken) {
          goto L_088C5BF0;
      }
      goto L_088C5BE0;
    }
L_088C5BE0:
    aot_gpr_4 = (2236u << 16u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_gpr_31 = (0x088C5BF0u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(25856));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE8F4, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C5BF0u) goto L_088C5BF0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C5BF0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_gpr_16 | 0u);
      if (branch_taken) {
          goto L_088C5CC0;
      }
      goto L_088C5BF8;
    }
L_088C5BF8:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16352)));
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(1));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_16) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_088C5BB8;
      }
      goto L_088C5C0C;
    }
L_088C5C0C:
    aot_gpr_16 = (ctx.gpr[28] + static_cast<std::uint32_t>(-23788));
    aot_gpr_31 = (0x088C5C18u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58974, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C5C18u) goto L_088C5C18;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C5C18:
    aot_gpr_4 = (aot_gpr_29 | 0u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088C5C28u);
    aot_gpr_6 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 319u, 0x08B655B8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C5C28u) goto L_088C5C28;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C5C28:
    aot_gpr_31 = (0x088C5C30u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0162_entry, 162u, 75u, 0x08A8C7ACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C5C30u) goto L_088C5C30;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C5C30:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16352)));
    aot_gpr_16 = (0u | 0u);
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_16) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088C5C98;
      }
      goto L_088C5C44;
    }
L_088C5C44:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16356)));
    aot_gpr_6 = (aot_gpr_16 << 2u);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_5 != aot_gpr_4;
      if (branch_taken) {
          goto L_088C5C84;
      }
      goto L_088C5C5C;
    }
L_088C5C5C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(5824));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(6027));
      if (branch_taken) {
          goto L_088C5C7C;
      }
      goto L_088C5C6C;
    }
L_088C5C6C:
    aot_gpr_4 = (2236u << 16u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_gpr_31 = (0x088C5C7Cu);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(25856));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE8F4, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C5C7Cu) goto L_088C5C7C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C5C7C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_gpr_16 | 0u);
      if (branch_taken) {
          goto L_088C5CC0;
      }
      goto L_088C5C84;
    }
L_088C5C84:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16352)));
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(1));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_16) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_088C5C44;
      }
      goto L_088C5C98;
    }
L_088C5C98:
    aot_gpr_16 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16352)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(5824));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(6028));
      if (branch_taken) {
          goto L_088C5CBC;
      }
      goto L_088C5CAC;
    }
L_088C5CAC:
    aot_gpr_4 = (2236u << 16u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_gpr_31 = (0x088C5CBCu);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(25856));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE8F4, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C5CBCu) goto L_088C5CBC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C5CBC:
    ctx.gpr[2] = (aot_gpr_16 | 0u);
    goto L_088C5CC0;
L_088C5CC0:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(12)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088C5CD0:
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_gpr_4);
    { const float vfpu_constant = std::bit_cast<float>(0x3F22F983u);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    ctx.execute_vfpu_vec3_ct<64u, 0u, 32u, 1u, 2u>();
    ctx.execute_vfpu_unary_ct<1u, 64u, 1u, 18u>();
    aot_gpr_4 = (ctx.vfpu_scalar_bits_ct<1u>());
    ctx.fpr[0] = std::bit_cast<float>(aot_gpr_4);
    jump_target = aot_gpr_31;
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088C5CF4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(1962)));
    aot_gpr_4 = (aot_gpr_16 + ctx.gpr[17]);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(1960)));
    aot_gpr_6 = (ctx.gpr[17] << 6u);
    ctx.gpr[8] = (static_cast<std::int32_t>(aot_gpr_4) < 20 ? 1u : 0u);
    ctx.gpr[7] = (0u - aot_gpr_6);
    aot_gpr_4 = (aot_gpr_6 << 4u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.gpr[19] = (aot_gpr_5 | 0u);
    aot_gpr_4 = (ctx.gpr[7] + aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_31);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_4);
      if (branch_taken) {
          goto L_088C5D5C;
      }
      goto L_088C5D3C;
    }
L_088C5D3C:
    aot_gpr_5 = (ctx.gpr[17] + aot_gpr_16);
    ctx.gpr[17] = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(1960)));
    aot_gpr_6 = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[17] << 4u);
    aot_mem.aot_direct_store8(aot_gpr_5 + static_cast<std::uint32_t>(1960), static_cast<std::uint8_t>(aot_gpr_6));
    aot_gpr_5 = (ctx.gpr[18] + ctx.gpr[18]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + aot_gpr_5);
      if (branch_taken) {
          goto L_088C5D94;
      }
      goto L_088C5D5C;
    }
L_088C5D5C:
    aot_gpr_5 = (ctx.gpr[17] << 4u);
    aot_gpr_6 = (ctx.gpr[17] << 2u);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_5 = (aot_gpr_16 + aot_gpr_5);
    ctx.gpr[17] = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(1939)));
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[19] + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (ctx.gpr[17] << 4u);
    aot_gpr_6 = (ctx.gpr[18] + ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[18] + aot_gpr_6);
    aot_gpr_6 = (aot_gpr_4 + ctx.gpr[18]);
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_6 + static_cast<std::uint32_t>(36)));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_6) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_088C5DD0;
      }
      goto L_088C5D94;
    }
L_088C5D94:
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[18]);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x088C5DA4u);
    aot_gpr_6 = (0u | 48u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C5DA4u) goto L_088C5DA4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C5DA4:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(1962)));
    ctx.gpr[19] = (0u | 0u);
    aot_gpr_5 = (aot_gpr_4 << 4u);
    aot_gpr_6 = (aot_gpr_4 << 2u);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_5 = (aot_gpr_16 + aot_gpr_5);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    aot_gpr_6 = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_088C5DD8;
      }
      goto L_088C5DC8;
    }
L_088C5DC8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088C5E5C;
      }
      goto L_088C5DD0;
    }
L_088C5DD0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088C5E60;
      }
      goto L_088C5DD8;
    }
L_088C5DD8:
    aot_gpr_4 = (aot_gpr_4 << 6u);
    ctx.gpr[7] = (0u - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 << 4u);
    aot_gpr_4 = (ctx.gpr[7] + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_4);
    ctx.gpr[7] = (aot_gpr_4 + ctx.gpr[18]);
    ctx.gpr[7] = (aot_mem.aot_direct_load8(ctx.gpr[7] + static_cast<std::uint32_t>(36)));
    goto L_088C5DF4;
L_088C5DF4:
    ctx.gpr[8] = (aot_mem.aot_direct_load8(aot_gpr_6 + static_cast<std::uint32_t>(1920)));
    ctx.gpr[8] = (ctx.gpr[8] << 4u);
    ctx.gpr[9] = (ctx.gpr[8] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[9]);
    ctx.gpr[8] = (aot_gpr_4 + ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_direct_load8(ctx.gpr[8] + static_cast<std::uint32_t>(36)));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
      if (branch_taken) {
          goto L_088C5E48;
      }
      goto L_088C5E18;
    }
L_088C5E18:
    aot_gpr_4 = (aot_gpr_6 + static_cast<std::uint32_t>(1921));
    ctx.gpr[7] = (0u | 19u);
    aot_gpr_5 = (aot_gpr_6 + static_cast<std::uint32_t>(1920));
    aot_gpr_31 = (0x088C5E2Cu);
    aot_gpr_6 = (ctx.gpr[7] - ctx.gpr[19]);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C5E2Cu) goto L_088C5E2C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C5E2C:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(1962)));
    aot_gpr_5 = (aot_gpr_4 << 4u);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_6 = (aot_gpr_16 + aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_6 = (aot_gpr_6 + ctx.gpr[19]);
      if (branch_taken) {
          goto L_088C5E5C;
      }
      goto L_088C5E48;
    }
L_088C5E48:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[19] = (ctx.gpr[19] & 255u);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    aot_gpr_6 = (aot_gpr_5 + ctx.gpr[19]);
      if (branch_taken) {
          goto L_088C5DF4;
      }
      goto L_088C5E5C;
    }
L_088C5E5C:
    aot_mem.aot_direct_store8(aot_gpr_6 + static_cast<std::uint32_t>(1920), static_cast<std::uint8_t>(ctx.gpr[17]));
    goto L_088C5E60;
L_088C5E60:
    { std::uint32_t aot_run_words[5]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      aot_gpr_31 = aot_run_words[4];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088C5E7C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(21256)));
    aot_gpr_4 = (0u | 0u);
    aot_gpr_6 = (aot_gpr_4 < aot_gpr_6 ? 1u : 0u);
    { const std::uint32_t aot_run_words[3]{ctx.gpr[17], ctx.gpr[18], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_run_words); }
    { const bool branch_taken = aot_gpr_6 == 0u;
    ctx.gpr[17] = (ctx.gpr[28] + static_cast<std::uint32_t>(7696));
      if (branch_taken) {
          goto L_088C5F1C;
      }
      goto L_088C5EA8;
    }
L_088C5EA8:
    aot_gpr_6 = (0u | 3000u);
    ctx.gpr[8] = (aot_gpr_16 | 0u);
    goto L_088C5EB0;
L_088C5EB0:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[8] + static_cast<std::uint32_t>(20256)));
    ctx.gpr[9] = (ctx.gpr[7] << 6u);
    ctx.gpr[7] = (ctx.gpr[7] << 3u);
    ctx.gpr[7] = (ctx.gpr[9] - ctx.gpr[7]);
    ctx.gpr[7] = (aot_gpr_16 + ctx.gpr[7]);
    ctx.gpr[9] = (aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(6256)));
    { const bool branch_taken = ctx.gpr[9] != 0u;
      if (branch_taken) {
          goto L_088C5F08;
      }
      goto L_088C5ED0;
    }
L_088C5ED0:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(6260)));
    ctx.gpr[9] = (aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(72)));
    ctx.gpr[9] = (ctx.gpr[9] & 14u);
    ctx.gpr[9] = (ctx.gpr[9] ^ 6u);
    ctx.gpr[9] = (ctx.gpr[9] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[9] = (ctx.gpr[9] & 255u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
      if (branch_taken) {
          goto L_088C5F08;
      }
      goto L_088C5EF0;
    }
L_088C5EF0:
    aot_mem.aot_direct_store32(ctx.gpr[7] + static_cast<std::uint32_t>(1960), aot_gpr_5);
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(26320)));
    { const std::uint32_t dividend = ctx.gpr[9]; const std::uint32_t divisor = aot_gpr_6; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[9] = (ctx.hi);
    ctx.gpr[9] = (aot_gpr_5 + ctx.gpr[9]);
    aot_mem.aot_direct_store32(ctx.gpr[7] + static_cast<std::uint32_t>(1964), ctx.gpr[9]);
    goto L_088C5F08;
L_088C5F08:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(21256)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (aot_gpr_4 < ctx.gpr[7] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088C5EB0;
      }
      goto L_088C5F1C;
    }
L_088C5F1C:
    ctx.gpr[18] = (0u | 0u);
    goto L_088C5F20;
L_088C5F20:
    aot_gpr_5 = (ctx.gpr[18] & 255u);
    aot_gpr_31 = (0x088C5F2Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0049_entry, 49u, 435u, 0x088CA378u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C5F2Cu) goto L_088C5F2C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C5F2C:
    aot_gpr_4 = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (aot_gpr_4 << 16u);
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[18]) >> 16u));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[18]) < 5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088C5F20;
      }
      goto L_088C5F44;
    }
L_088C5F44:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(1)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088C5F64;
      }
      goto L_088C5F50;
    }
L_088C5F50:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088C5F5Cu);
    aot_gpr_5 = (0u | 18u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0001_entry, 1u, 550u, 0x0880A680u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C5F5Cu) goto L_088C5F5C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C5F5C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088C5F70;
      }
      goto L_088C5F64;
    }
L_088C5F64:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088C5F70u);
    aot_gpr_5 = (0u | 21u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0001_entry, 1u, 550u, 0x0880A680u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C5F70u) goto L_088C5F70;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C5F70:
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088C5F88:
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(56), aot_gpr_5);
    aot_gpr_5 = (0u | 12000u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(68), aot_gpr_5);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[11] = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store8(aot_gpr_6 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[11]));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(52), aot_gpr_5);
    aot_mem.aot_direct_store8(ctx.gpr[9] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[10]));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(26332)));
    aot_gpr_6 = (0u | 26u);
    { const std::uint32_t dividend = aot_gpr_5; const std::uint32_t divisor = aot_gpr_6; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_fpr_12 = std::bit_cast<float>(0u);
    aot_gpr_5 = (0u | 2u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(64), aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (16880u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (17505u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_5 = (ctx.hi);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(100));
    aot_mem.aot_direct_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(80), ctx.gpr[10]);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(ctx.gpr[10]));
    jump_target = aot_gpr_31;
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(ctx.gpr[10]));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088C6004:
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(56), aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(68), ctx.gpr[10]);
    ctx.gpr[2] = (aot_gpr_6 | 0u);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    aot_fpr_12 = std::bit_cast<float>(0u);
    ctx.gpr[10] = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store8(ctx.gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[10]));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(52), aot_gpr_5);
    aot_gpr_5 = (0u | 1u);
    aot_mem.aot_direct_store8(ctx.gpr[9] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_5));
    ctx.gpr[9] = (0u | 2u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(64), ctx.gpr[9]);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[9] = (16880u << 16u);
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[9]);
    aot_gpr_6 = (ctx.gpr[11] & 255u);
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_088C6058;
      }
      goto L_088C6050;
    }
L_088C6050:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_6));
      if (branch_taken) {
          goto L_088C6060;
      }
      goto L_088C6058;
    }
L_088C6058:
    aot_gpr_6 = (0u | 100u);
    aot_mem.aot_direct_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_6));
    goto L_088C6060;
L_088C6060:
    aot_gpr_6 = (17505u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_6);
    aot_mem.aot_direct_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(80), aot_gpr_5);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(aot_gpr_5));
    jump_target = aot_gpr_31;
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(aot_gpr_5));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088C6080:
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_6 != 0u;
      if (branch_taken) {
          goto L_088C609C;
      }
      goto L_088C608C;
    }
L_088C608C:
    aot_fpr_12 = std::sqrt(aot_fpr_12);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store8(aot_gpr_5 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_088C609C;
L_088C609C:
    jump_target = aot_gpr_31;
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088C60A4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_6 = (2238u << 16u);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_5 = (0u | 2u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    aot_gpr_31 = (0x088C60C8u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(14864));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0108_entry, 108u, 508u, 0x089B6FC8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C60C8u) goto L_088C60C8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C60C8:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(23520), ctx.gpr[2]);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) < 0;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_088C60E8;
      }
      goto L_088C60D8;
    }
L_088C60D8:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088C60E8u);
    aot_gpr_6 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0108_entry, 108u, 568u, 0x089B7348u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C60E8u) goto L_088C60E8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C60E8:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (0u | 6u);
    aot_gpr_31 = (0x088C60F8u);
    aot_gpr_6 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0108_entry, 108u, 508u, 0x089B6FC8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C60F8u) goto L_088C60F8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C60F8:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) < 0;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(24260), ctx.gpr[2]);
      if (branch_taken) {
          goto L_088C6114;
      }
      goto L_088C6104;
    }
L_088C6104:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088C6114u);
    aot_gpr_6 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0108_entry, 108u, 568u, 0x089B7348u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C6114u) goto L_088C6114;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C6114:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (0u | 7u);
    aot_gpr_31 = (0x088C6124u);
    aot_gpr_6 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0108_entry, 108u, 508u, 0x089B6FC8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C6124u) goto L_088C6124;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C6124:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) < 0;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(24256), ctx.gpr[2]);
      if (branch_taken) {
          goto L_088C6140;
      }
      goto L_088C6130;
    }
L_088C6130:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088C6140u);
    aot_gpr_6 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0108_entry, 108u, 568u, 0x089B7348u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C6140u) goto L_088C6140;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C6140:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (0u | 8u);
    aot_gpr_31 = (0x088C6150u);
    aot_gpr_6 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0108_entry, 108u, 508u, 0x089B6FC8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C6150u) goto L_088C6150;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C6150:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) < 0;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(26144), ctx.gpr[2]);
      if (branch_taken) {
          goto L_088C616C;
      }
      goto L_088C615C;
    }
L_088C615C:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088C616Cu);
    aot_gpr_6 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0108_entry, 108u, 568u, 0x089B7348u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C616Cu) goto L_088C616C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C616C:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (0u | 11u);
    aot_gpr_31 = (0x088C617Cu);
    aot_gpr_6 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0108_entry, 108u, 508u, 0x089B6FC8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C617Cu) goto L_088C617C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C617C:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) < 0;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(23524), ctx.gpr[2]);
      if (branch_taken) {
          goto L_088C6198;
      }
      goto L_088C6188;
    }
L_088C6188:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088C6198u);
    aot_gpr_6 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0108_entry, 108u, 568u, 0x089B7348u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C6198u) goto L_088C6198;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C6198:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (0u | 14u);
    aot_gpr_31 = (0x088C61A8u);
    aot_gpr_6 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0108_entry, 108u, 508u, 0x089B6FC8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C61A8u) goto L_088C61A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C61A8:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) < 0;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(23528), ctx.gpr[2]);
      if (branch_taken) {
          goto L_088C61C4;
      }
      goto L_088C61B4;
    }
L_088C61B4:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088C61C4u);
    aot_gpr_6 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0108_entry, 108u, 568u, 0x089B7348u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C61C4u) goto L_088C61C4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C61C4:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (0u | 12u);
    aot_gpr_31 = (0x088C61D4u);
    aot_gpr_6 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0108_entry, 108u, 508u, 0x089B6FC8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C61D4u) goto L_088C61D4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C61D4:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) < 0;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(26148), ctx.gpr[2]);
      if (branch_taken) {
          goto L_088C61F0;
      }
      goto L_088C61E0;
    }
L_088C61E0:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088C61F0u);
    aot_gpr_6 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0108_entry, 108u, 568u, 0x089B7348u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C61F0u) goto L_088C61F0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C61F0:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (0u | 5u);
    aot_gpr_31 = (0x088C6200u);
    aot_gpr_6 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0108_entry, 108u, 508u, 0x089B6FC8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C6200u) goto L_088C6200;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C6200:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) < 0;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(26152), ctx.gpr[2]);
      if (branch_taken) {
          goto L_088C621C;
      }
      goto L_088C620C;
    }
L_088C620C:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088C621Cu);
    aot_gpr_6 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0108_entry, 108u, 568u, 0x089B7348u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C621Cu) goto L_088C621C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C621C:
    aot_gpr_4 = (0u | 0u);
    aot_gpr_6 = (0u | 127u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    goto L_088C6228;
L_088C6228:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16352)));
    ctx.gpr[8] = (aot_gpr_16 + aot_gpr_4);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(6028));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(26248), ctx.gpr[7]);
    aot_mem.aot_direct_store8(ctx.gpr[8] + static_cast<std::uint32_t>(26268), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(ctx.gpr[8] + static_cast<std::uint32_t>(26273), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(ctx.gpr[8] + static_cast<std::uint32_t>(26278), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(ctx.gpr[8] + static_cast<std::uint32_t>(26304), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(ctx.gpr[8] + static_cast<std::uint32_t>(26240), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(26284), 0u);
    aot_mem.aot_direct_store8(ctx.gpr[8] + static_cast<std::uint32_t>(26309), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(ctx.gpr[8] + static_cast<std::uint32_t>(26314), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(26319), static_cast<std::uint8_t>(aot_gpr_6));
    ctx.gpr[7] = (static_cast<std::int32_t>(aot_gpr_4) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088C6228;
      }
      goto L_088C626C;
    }
L_088C626C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_gpr_31 = (0x088C6278u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_088C5E7C;
L_088C6278:
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(21528), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(21529), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(21532), 0u);
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088C6298:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(26152)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) < 0;
      if (branch_taken) {
          goto L_088C62C8;
      }
      goto L_088C62B4;
    }
L_088C62B4:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_31 = (0x088C62C0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0108_entry, 108u, 522u, 0x089B7090u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C62C0u) goto L_088C62C0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C62C0:
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-5));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(26152), aot_gpr_4);
    goto L_088C62C8;
L_088C62C8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(26148)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) < 0;
      if (branch_taken) {
          goto L_088C62E8;
      }
      goto L_088C62D4;
    }
L_088C62D4:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_31 = (0x088C62E0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0108_entry, 108u, 522u, 0x089B7090u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C62E0u) goto L_088C62E0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C62E0:
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-5));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(26148), aot_gpr_4);
    goto L_088C62E8;
L_088C62E8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(23528)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) < 0;
      if (branch_taken) {
          goto L_088C6308;
      }
      goto L_088C62F4;
    }
L_088C62F4:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_31 = (0x088C6300u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0108_entry, 108u, 522u, 0x089B7090u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C6300u) goto L_088C6300;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C6300:
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-5));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(23528), aot_gpr_4);
    goto L_088C6308;
L_088C6308:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(23524)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) < 0;
      if (branch_taken) {
          goto L_088C6328;
      }
      goto L_088C6314;
    }
L_088C6314:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_31 = (0x088C6320u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0108_entry, 108u, 522u, 0x089B7090u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C6320u) goto L_088C6320;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C6320:
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-5));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(23524), aot_gpr_4);
    goto L_088C6328;
L_088C6328:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(23520)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) < 0;
      if (branch_taken) {
          goto L_088C6348;
      }
      goto L_088C6334;
    }
L_088C6334:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_31 = (0x088C6340u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0108_entry, 108u, 522u, 0x089B7090u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C6340u) goto L_088C6340;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C6340:
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-5));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(23520), aot_gpr_4);
    goto L_088C6348;
L_088C6348:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(24260)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) < 0;
      if (branch_taken) {
          goto L_088C6368;
      }
      goto L_088C6354;
    }
L_088C6354:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_31 = (0x088C6360u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0108_entry, 108u, 522u, 0x089B7090u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C6360u) goto L_088C6360;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C6360:
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-5));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(24260), aot_gpr_4);
    goto L_088C6368;
L_088C6368:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(24256)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) < 0;
      if (branch_taken) {
          goto L_088C6388;
      }
      goto L_088C6374;
    }
L_088C6374:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_31 = (0x088C6380u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0108_entry, 108u, 522u, 0x089B7090u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C6380u) goto L_088C6380;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C6380:
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-5));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(24256), aot_gpr_4);
    goto L_088C6388;
L_088C6388:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(26144)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) < 0;
      if (branch_taken) {
          goto L_088C63A8;
      }
      goto L_088C6394;
    }
L_088C6394:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_31 = (0x088C63A0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0108_entry, 108u, 522u, 0x089B7090u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C63A0u) goto L_088C63A0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C63A0:
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-5));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(26144), aot_gpr_4);
    goto L_088C63A8;
L_088C63A8:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088C63B8:
    jump_target = aot_gpr_31;
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088C63C0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    aot_gpr_31 = (0x088C63D4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C63D4u) goto L_088C63D4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C63D4:
    aot_gpr_31 = (0x088C63DCu);
    aot_gpr_16 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C63DCu) goto L_088C63DC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C63DC:
    { const bool branch_taken = aot_gpr_16 != 0u;
    aot_gpr_4 = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088C6418;
      }
      goto L_088C63E4;
    }
L_088C63E4:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088C6418;
      }
      goto L_088C63EC;
    }
L_088C63EC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(2120)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088C6418;
      }
      goto L_088C63F8;
    }
L_088C63F8:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(72)));
    aot_gpr_5 = (aot_gpr_5 & 14u);
    aot_gpr_5 = (aot_gpr_5 ^ 4u);
    aot_gpr_5 = (aot_gpr_5 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_088C6418;
      }
      goto L_088C6414;
    }
L_088C6414:
    aot_gpr_16 = (aot_gpr_4 | 0u);
    goto L_088C6418;
L_088C6418:
    ctx.gpr[2] = (aot_gpr_16 | 0u);
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088C642C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    ctx.gpr[7] = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[7] << 6u);
    aot_gpr_6 = (ctx.gpr[7] << 3u);
    aot_gpr_6 = (aot_gpr_5 - aot_gpr_6);
    aot_gpr_6 = (aot_gpr_4 + aot_gpr_6);
    ctx.gpr[8] = (aot_mem.aot_direct_load8(aot_gpr_6 + static_cast<std::uint32_t>(6265)));
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    aot_gpr_4 = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_088C65F4;
      }
      goto L_088C6458;
    }
L_088C6458:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(6256)));
    ctx.gpr[7] = (aot_gpr_6 < static_cast<std::uint32_t>(13) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(48), aot_gpr_4);
      if (branch_taken) {
          goto L_088C65F4;
      }
      goto L_088C6468;
    }
L_088C6468:
    aot_gpr_6 = (aot_gpr_6 << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_6);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-21128)));
    jump_target = ctx.gpr[1];
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088C6480:
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(26341)));
    { const bool branch_taken = aot_gpr_6 != 0u;
      if (branch_taken) {
          goto L_088C649C;
      }
      goto L_088C648C;
    }
L_088C648C:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_31 = (0x088C649Cu);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    goto L_088C6600;
L_088C649C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088C65F4;
      }
      goto L_088C64A4;
    }
L_088C64A4:
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(26341)));
    { const bool branch_taken = aot_gpr_6 != 0u;
      if (branch_taken) {
          goto L_088C64C0;
      }
      goto L_088C64B0;
    }
L_088C64B0:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_31 = (0x088C64C0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0053_entry, 53u, 127u, 0x088D85BCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C64C0u) goto L_088C64C0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C64C0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088C65F4;
      }
      goto L_088C64C8;
    }
L_088C64C8:
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(26341)));
    { const bool branch_taken = aot_gpr_6 != 0u;
      if (branch_taken) {
          goto L_088C64E4;
      }
      goto L_088C64D4;
    }
L_088C64D4:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_31 = (0x088C64E4u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0053_entry, 53u, 155u, 0x088D8878u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C64E4u) goto L_088C64E4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C64E4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088C65F4;
      }
      goto L_088C64EC;
    }
L_088C64EC:
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(26341)));
    { const bool branch_taken = aot_gpr_6 != 0u;
      if (branch_taken) {
          goto L_088C6508;
      }
      goto L_088C64F8;
    }
L_088C64F8:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_31 = (0x088C6508u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0049_entry, 49u, 326u, 0x088C99ACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C6508u) goto L_088C6508;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C6508:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088C65F4;
      }
      goto L_088C6510;
    }
L_088C6510:
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(26341)));
    { const bool branch_taken = aot_gpr_6 != 0u;
      if (branch_taken) {
          goto L_088C6540;
      }
      goto L_088C651C;
    }
L_088C651C:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-1044)));
    { const bool branch_taken = aot_gpr_6 == 0u;
    ctx.gpr[7] = (0u | 13u);
      if (branch_taken) {
          goto L_088C6530;
      }
      goto L_088C6528;
    }
L_088C6528:
    { const bool branch_taken = aot_gpr_6 != ctx.gpr[7];
      if (branch_taken) {
          goto L_088C6540;
      }
      goto L_088C6530;
    }
L_088C6530:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_31 = (0x088C6540u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0053_entry, 53u, 326u, 0x088DA180u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C6540u) goto L_088C6540;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C6540:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088C65F4;
      }
      goto L_088C6548;
    }
L_088C6548:
    aot_gpr_31 = (0x088C6550u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0053_entry, 53u, 421u, 0x088DAA78u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C6550u) goto L_088C6550;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C6550:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088C65F4;
      }
      goto L_088C6558;
    }
L_088C6558:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(26341)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088C656C;
      }
      goto L_088C6564;
    }
L_088C6564:
    aot_gpr_31 = (0x088C656Cu);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0053_entry, 53u, 507u, 0x088DB134u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C656Cu) goto L_088C656C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C656C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088C65F4;
      }
      goto L_088C6574;
    }
L_088C6574:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(26341)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088C6588;
      }
      goto L_088C6580;
    }
L_088C6580:
    aot_gpr_31 = (0x088C6588u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0049_entry, 49u, 342u, 0x088C9B5Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C6588u) goto L_088C6588;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C6588:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088C65F4;
      }
      goto L_088C6590;
    }
L_088C6590:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088C65F4;
      }
      goto L_088C6598;
    }
L_088C6598:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(26341)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088C65AC;
      }
      goto L_088C65A4;
    }
L_088C65A4:
    aot_gpr_31 = (0x088C65ACu);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0053_entry, 53u, 366u, 0x088DA5A0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C65ACu) goto L_088C65AC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C65AC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088C65F4;
      }
      goto L_088C65B4;
    }
L_088C65B4:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(26341)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088C65C8;
      }
      goto L_088C65C0;
    }
L_088C65C0:
    aot_gpr_31 = (0x088C65C8u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0049_entry, 49u, 335u, 0x088C9A4Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C65C8u) goto L_088C65C8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C65C8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088C65F4;
      }
      goto L_088C65D0;
    }
L_088C65D0:
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(26341)));
    { const bool branch_taken = aot_gpr_6 != 0u;
      if (branch_taken) {
          goto L_088C65EC;
      }
      goto L_088C65DC;
    }
L_088C65DC:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_31 = (0x088C65ECu);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0049_entry, 49u, 317u, 0x088C9818u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C65ECu) goto L_088C65EC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C65EC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088C65F4;
      }
      goto L_088C65F4;
    }
L_088C65F4:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088C6600:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_6 = (aot_gpr_5 << 6u);
    aot_gpr_5 = (aot_gpr_5 << 3u);
    aot_gpr_5 = (aot_gpr_6 - aot_gpr_5);
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(6260)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_088C66BC;
      }
      goto L_088C6624;
    }
L_088C6624:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(72)));
    aot_gpr_6 = (aot_gpr_6 & 14u);
    aot_gpr_6 = (aot_gpr_6 >> 1u);
    ctx.gpr[7] = (static_cast<std::int32_t>(aot_gpr_6) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[7] = (0u | 7u);
      if (branch_taken) {
          goto L_088C6660;
      }
      goto L_088C663C;
    }
L_088C663C:
    ctx.gpr[7] = (static_cast<std::int32_t>(aot_gpr_6) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_6) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_088C66BC;
      }
      goto L_088C6648;
    }
L_088C6648:
    { const bool branch_taken = aot_gpr_6 == 0u;
      if (branch_taken) {
          goto L_088C6670;
      }
      goto L_088C6650;
    }
L_088C6650:
    aot_gpr_31 = (0x088C6658u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0049_entry, 49u, 617u, 0x088CB124u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C6658u) goto L_088C6658;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C6658:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088C66BC;
      }
      goto L_088C6660;
    }
L_088C6660:
    { const bool branch_taken = aot_gpr_6 == ctx.gpr[7];
      if (branch_taken) {
          goto L_088C6680;
      }
      goto L_088C6668;
    }
L_088C6668:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088C66BC;
      }
      goto L_088C6670;
    }
L_088C6670:
    aot_gpr_31 = (0x088C6678u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0049_entry, 49u, 177u, 0x088C9078u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C6678u) goto L_088C6678;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C6678:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088C66BC;
      }
      goto L_088C6680;
    }
L_088C6680:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(76)));
    ctx.gpr[7] = (1u << 16u);
    aot_gpr_6 = (aot_gpr_6 & ctx.gpr[7]);
    aot_gpr_6 = (0u < aot_gpr_6 ? 1u : 0u);
    aot_gpr_6 = (aot_gpr_6 & 255u);
    { const bool branch_taken = aot_gpr_6 == 0u;
      if (branch_taken) {
          goto L_088C66AC;
      }
      goto L_088C669C;
    }
L_088C669C:
    aot_gpr_31 = (0x088C66A4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0156_entry, 156u, 395u, 0x08A75DA4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C66A4u) goto L_088C66A4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C66A4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088C66B4;
      }
      goto L_088C66AC;
    }
L_088C66AC:
    aot_gpr_31 = (0x088C66B4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0049_entry, 49u, 180u, 0x088C90E4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C66B4u) goto L_088C66B4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C66B4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088C66BC;
      }
      goto L_088C66BC;
    }
L_088C66BC:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088C66C8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(8)));
    aot_gpr_6 = (17394u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_31);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_16 = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_088C6854;
      }
      goto L_088C66F8;
    }
L_088C66F8:
    aot_gpr_4 = (15395u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7896)));
    aot_gpr_4 = (aot_gpr_4 | 55050u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_088C6854;
      }
      goto L_088C6718;
    }
L_088C6718:
    aot_gpr_31 = (0x088C6720u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0170_entry, 170u, 538u, 0x08AAE9C4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C6720u) goto L_088C6720;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C6720:
    if (ctx.gpr[2] == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(12)));
        goto L_088C673C;
    }
    goto L_088C6728;
L_088C6728:
    aot_gpr_31 = (0x088C6730u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0170_entry, 170u, 542u, 0x08AAE9E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C6730u) goto L_088C6730;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C6730:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_088C6854;
      }
      goto L_088C6738;
    }
L_088C6738:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(12)));
    goto L_088C673C;
L_088C673C:
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(696)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(696), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(12)));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(696)));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_5) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_088C67BC;
      }
      goto L_088C675C;
    }
L_088C675C:
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(696), static_cast<std::uint8_t>(0u));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (aot_gpr_16 + static_cast<std::uint32_t>(4));
    aot_gpr_31 = (0x088C6770u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    goto L_088C6080;
L_088C6770:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7896)));
    aot_gpr_4 = (16880u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_5 = (16816u << 16u);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_14 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(76)));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_14));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x088C67A4u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0109_entry, 109u, 21u, 0x089B8190u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C67A4u) goto L_088C67A4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C67A4:
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(ctx.gpr[2]));
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    if (static_cast<std::int32_t>(aot_gpr_4) > 0) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(12)));
        goto L_088C67C4;
    }
    goto L_088C67B4;
L_088C67B4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088C6854;
      }
      goto L_088C67BC;
    }
L_088C67BC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088C6854;
      }
      goto L_088C67C4;
    }
L_088C67C4:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(697));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_6));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(12)));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(697)));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_5) < 5 ? 1u : 0u);
    if (aot_gpr_5 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(26324)));
        goto L_088C67F8;
    }
    goto L_088C67EC;
L_088C67EC:
    aot_gpr_5 = (0u | 68u);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(697), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(26324)));
    goto L_088C67F8;
L_088C67F8:
    aot_gpr_5 = (0u | 4000u);
    { const std::uint32_t dividend = aot_gpr_4; const std::uint32_t divisor = aot_gpr_5; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr_4 = (aot_gpr_4 & 3u);
    aot_fpr_12 = std::bit_cast<float>(0u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(81));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), aot_gpr_4);
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (0u | 9u);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(64), aot_gpr_4);
    aot_gpr_4 = (0u | 1u);
    { const std::uint32_t aot_run_words[3]{aot_gpr_4, std::bit_cast<std::uint32_t>(aot_fpr_12), std::bit_cast<std::uint32_t>(aot_fpr_20)};
      aot_mem.aot_direct_store32_block(ctx.gpr[17] + static_cast<std::uint32_t>(80), aot_run_words); }
    aot_gpr_5 = (2237u << 16u);
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (aot_gpr_5 + static_cast<std::uint32_t>(-28320));
    aot_gpr_5 = (0u | 0u);
    aot_gpr_6 = (ctx.hi);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(28000));
    aot_gpr_31 = (0x088C6854u);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), aot_gpr_6);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0108_entry, 108u, 703u, 0x089B7B80u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C6854u) goto L_088C6854;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C6854:
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      aot_gpr_16 = aot_run_words[1];
      ctx.gpr[17] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088C686C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-64));
    aot_gpr_6 = (17561u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(8)));
    aot_gpr_6 = (aot_gpr_6 | 8192u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(aot_fpr_20));
    { const std::uint32_t aot_run_words[6]{ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(28), aot_run_words); }
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    ctx.gpr[17] = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_088C6AB4;
      }
      goto L_088C68B0;
    }
L_088C68B0:
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7696));
    aot_gpr_31 = (0x088C68BCu);
    aot_gpr_5 = (0u | 18u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0001_entry, 1u, 481u, 0x0880A288u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C68BCu) goto L_088C68BC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C68BC:
    aot_gpr_4 = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] != aot_gpr_4;
      if (branch_taken) {
          goto L_088C68E8;
      }
      goto L_088C68C8;
    }
L_088C68C8:
    aot_gpr_31 = (0x088C68D0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C68D0u) goto L_088C68D0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C68D0:
    ctx.gpr[20] = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    aot_gpr_4 = (16908u << 16u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[20];
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_4);
      if (branch_taken) {
          goto L_088C68F0;
      }
      goto L_088C68E0;
    }
L_088C68E0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_088C692C;
      }
      goto L_088C68E8;
    }
L_088C68E8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088C6AB4;
      }
      goto L_088C68F0;
    }
L_088C68F0:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_6 = (aot_gpr_4 << 8u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 << 5u);
    aot_gpr_5 = (2238u << 16u);
    aot_gpr_4 = (aot_gpr_6 + aot_gpr_4);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-6992));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088C6928;
      }
      goto L_088C6920;
    }
L_088C6920:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_088C692C;
      }
      goto L_088C6928;
    }
L_088C6928:
    ctx.gpr[18] = (0u | 0u);
    goto L_088C692C;
L_088C692C:
    if (ctx.gpr[18] == 0u) {
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(604)));
        goto L_088C6990;
    }
    goto L_088C6934;
L_088C6934:
    aot_gpr_4 = (2238u << 16u);
    ctx.gpr[21] = (aot_gpr_4 + static_cast<std::uint32_t>(-6640));
    aot_gpr_31 = (0x088C6944u);
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0098_entry, 98u, 430u, 0x0898D2D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C6944u) goto L_088C6944;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C6944:
    ctx.gpr[19] = (ctx.gpr[2] & 65535u);
    aot_gpr_31 = (0x088C6950u);
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0098_entry, 98u, 388u, 0x0898D140u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C6950u) goto L_088C6950;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C6950:
    ctx.gpr[20] = (ctx.gpr[2] & 65535u);
    aot_gpr_31 = (0x088C695Cu);
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0098_entry, 98u, 90u, 0x0898C3A8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C695Cu) goto L_088C695C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C695C:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) >= 0;
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_088C6974;
      }
      goto L_088C6968;
    }
L_088C6968:
    aot_gpr_4 = (0u - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 << 16u);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 16u));
    goto L_088C6974;
L_088C6974:
    aot_gpr_4 = (aot_gpr_4 << 1u);
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    if (aot_gpr_5 != 0u) {
    aot_gpr_4 = (ctx.gpr[19] | 0u);
        goto L_088C6984;
    }
    goto L_088C6984;
L_088C6984:
    aot_gpr_4 = (aot_gpr_4 & 65535u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
      if (branch_taken) {
          goto L_088C69C4;
      }
      goto L_088C6990;
    }
L_088C6990:
    aot_gpr_4 = (17279u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(608)));
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    { const float fs = aot_fpr_14; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.fpr[15] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[15]));
    aot_fpr_13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_13));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_gpr_4 = (aot_gpr_4 & 65535u);
    ctx.gpr[20] = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    ctx.gpr[20] = (ctx.gpr[20] & 65535u);
    aot_gpr_5 = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    goto L_088C69C4;
L_088C69C4:
    aot_gpr_6 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    if (aot_gpr_6 != 0u) {
    aot_gpr_5 = (aot_gpr_4 | 0u);
        goto L_088C69D4;
    }
    goto L_088C69D4;
L_088C69D4:
    aot_gpr_4 = (aot_gpr_5 << 2u);
    ctx.gpr[19] = (aot_gpr_5 + aot_gpr_4);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(22050));
      if (branch_taken) {
          goto L_088C6A20;
      }
      goto L_088C69E4;
    }
L_088C69E4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23780)));
    aot_gpr_5 = (aot_gpr_4 < ctx.gpr[19] ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_088C6A0C;
      }
      goto L_088C69F4;
    }
L_088C69F4:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(30));
    aot_gpr_5 = (ctx.gpr[19] < aot_gpr_4 ? 1u : 0u);
    if (aot_gpr_5 != 0u) {
    aot_gpr_4 = (ctx.gpr[19] | 0u);
        goto L_088C6A04;
    }
    goto L_088C6A04;
L_088C6A04:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_088C6A20;
      }
      goto L_088C6A0C;
    }
L_088C6A0C:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-30));
    aot_gpr_5 = (aot_gpr_4 < ctx.gpr[19] ? 1u : 0u);
    if (aot_gpr_5 != 0u) {
    aot_gpr_4 = (ctx.gpr[19] | 0u);
        goto L_088C6A1C;
    }
    goto L_088C6A1C;
L_088C6A1C:
    ctx.gpr[19] = (aot_gpr_4 | 0u);
    goto L_088C6A20;
L_088C6A20:
    aot_gpr_5 = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    aot_gpr_31 = (0x088C6A2Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_088C6080;
L_088C6A2C:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(76)));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088C6A40u);
    aot_gpr_5 = (0u | 70u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0109_entry, 109u, 21u, 0x089B8190u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C6A40u) goto L_088C6A40;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C6A40:
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(ctx.gpr[2]));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) <= 0;
    aot_gpr_4 = (0u | 2u);
      if (branch_taken) {
          goto L_088C6AA8;
      }
      goto L_088C6A50;
    }
L_088C6A50:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(52), aot_gpr_4);
    aot_gpr_4 = (0u | 5926u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(56), aot_gpr_4);
    aot_gpr_4 = (0u | 18u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (0u | 3u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(64), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(68), ctx.gpr[19]);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(80), 0u);
    aot_gpr_4 = (16448u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (0u | 4u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(116), aot_gpr_4);
    aot_gpr_4 = (2237u << 16u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(0u));
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x088C6AA8u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28320));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0108_entry, 108u, 703u, 0x089B7B80u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C6AA8u) goto L_088C6AA8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C6AA8:
    { const bool branch_taken = ctx.gpr[18] == 0u;
      if (branch_taken) {
          goto L_088C6AB4;
      }
      goto L_088C6AB0;
    }
L_088C6AB0:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-23780), ctx.gpr[19]);
    goto L_088C6AB4;
L_088C6AB4:
    { std::uint32_t aot_run_words[8]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      aot_gpr_16 = aot_run_words[1];
      ctx.gpr[17] = aot_run_words[2];
      ctx.gpr[18] = aot_run_words[3];
      ctx.gpr[19] = aot_run_words[4];
      ctx.gpr[20] = aot_run_words[5];
      ctx.gpr[21] = aot_run_words[6];
      aot_gpr_31 = aot_run_words[7];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088C6ADC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(8)));
    aot_gpr_6 = (17505u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[24] < aot_fpr_12)) ? 0x00800000u : 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    { const std::uint32_t aot_run_words[3]{ctx.gpr[17], ctx.gpr[18], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words); }
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    ctx.gpr[17] = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_088C6CEC;
      }
      goto L_088C6B18;
    }
L_088C6B18:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1000));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(86))))));
    { const bool branch_taken = aot_gpr_6 == aot_gpr_5;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_088C6B44;
      }
      goto L_088C6B2C;
    }
L_088C6B2C:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(613))))));
    aot_gpr_5 = (aot_gpr_5 & 16u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_088C6B4C;
      }
      goto L_088C6B3C;
    }
L_088C6B3C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088C6CE4;
      }
      goto L_088C6B44;
    }
L_088C6B44:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_088C6CF0;
      }
      goto L_088C6B4C;
    }
L_088C6B4C:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(604)));
    aot_fpr_20 = std::bit_cast<float>(0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_20)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_088C6B70;
      }
      goto L_088C6B64;
    }
L_088C6B64:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(644)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088C6CE4;
      }
      goto L_088C6B70;
    }
L_088C6B70:
    aot_gpr_5 = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_gpr_31 = (0x088C6B80u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_088C6080;
L_088C6B80:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    aot_gpr_5 = (16880u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(1885)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_5) <= 0;
      if (branch_taken) {
          goto L_088C6BB0;
      }
      goto L_088C6B98;
    }
L_088C6B98:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(88)));
    ctx.fpr[22] = ctx.fpr[22] / aot_fpr_12;
    { const bool branch_taken = 0u == 0u;
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(76)));
      if (branch_taken) {
          goto L_088C6BD4;
      }
      goto L_088C6BB0;
    }
L_088C6BB0:
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(1886)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_5) <= 0;
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(1888)));
      if (branch_taken) {
          goto L_088C6BD0;
      }
      goto L_088C6BBC;
    }
L_088C6BBC:
    aot_gpr_5 = (16076u << 16u);
    aot_gpr_5 = (aot_gpr_5 | 52429u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    { const float fs = ctx.fpr[22]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(1888), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    goto L_088C6BD0;
L_088C6BD0:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(76)));
    goto L_088C6BD4;
L_088C6BD4:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[22] < aot_fpr_20)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (16832u << 16u);
      if (branch_taken) {
          goto L_088C6BE8;
      }
      goto L_088C6BE4;
    }
L_088C6BE4:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]) ^ 0x80000000u);
    goto L_088C6BE8;
L_088C6BE8:
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = ctx.fpr[22]; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_fpr_14 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_14));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_14));
    aot_gpr_31 = (0x088C6C0Cu);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0109_entry, 109u, 21u, 0x089B8190u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C6C0Cu) goto L_088C6C0C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C6C0C:
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(ctx.gpr[2]));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) <= 0;
      if (branch_taken) {
          goto L_088C6CE4;
      }
      goto L_088C6C1C;
    }
L_088C6C1C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    aot_gpr_5 = (17851u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(604)));
    aot_gpr_4 = (aot_gpr_5 | 32768u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = ctx.fpr[22]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    aot_gpr_4 = (20224u << 16u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 < aot_fpr_20)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
      if (branch_taken) {
          goto L_088C6C5C;
      }
      goto L_088C6C48;
    }
L_088C6C48:
    aot_gpr_4 = (0u | 61u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(52), aot_gpr_4);
    aot_gpr_4 = (0u | 292u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(56), aot_gpr_4);
      if (branch_taken) {
          goto L_088C6C6C;
      }
      goto L_088C6C5C;
    }
L_088C6C5C:
    aot_gpr_4 = (0u | 62u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(52), aot_gpr_4);
    aot_gpr_4 = (0u | 293u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(56), aot_gpr_4);
    goto L_088C6C6C;
L_088C6C6C:
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[22] < aot_fpr_12)) ? 0x00800000u : 0u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (0u | 3u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(64), aot_gpr_4);
      if (branch_taken) {
          goto L_088C6C94;
      }
      goto L_088C6C84;
    }
L_088C6C84:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[22]));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(7000));
      if (branch_taken) {
          goto L_088C6CAC;
      }
      goto L_088C6C94;
    }
L_088C6C94:
    aot_fpr_12 = ctx.fpr[22] - aot_fpr_12;
    aot_gpr_4 = (32768u << 16u);
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(7000));
    goto L_088C6CAC;
L_088C6CAC:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(68), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(80), 0u);
    aot_gpr_4 = (16448u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (0u | 5u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(116), aot_gpr_4);
    aot_gpr_4 = (2237u << 16u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(0u));
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x088C6CE4u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28320));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0108_entry, 108u, 703u, 0x089B7B80u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C6CE4u) goto L_088C6CE4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C6CE4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_088C6CF0;
      }
      goto L_088C6CEC;
    }
L_088C6CEC:
    ctx.gpr[2] = (0u | 0u);
    goto L_088C6CF0;
L_088C6CF0:
    { std::uint32_t aot_run_words[7]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      ctx.fpr[22] = std::bit_cast<float>(aot_run_words[1]);
      ctx.fpr[24] = std::bit_cast<float>(aot_run_words[2]);
      aot_gpr_16 = aot_run_words[3];
      ctx.gpr[17] = aot_run_words[4];
      ctx.gpr[18] = aot_run_words[5];
      aot_gpr_31 = aot_run_words[6];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088C6D14:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_6 | 0u);
    aot_gpr_6 = (16916u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_16);
    { const std::uint32_t aot_run_words[5]{ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_run_words); }
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    ctx.gpr[18] = (aot_gpr_4 | 0u);
    ctx.gpr[22] = (ctx.gpr[11] | 0u);
    aot_gpr_16 = (ctx.gpr[7] | 0u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    ctx.gpr[21] = (ctx.gpr[8] & 255u);
    ctx.gpr[20] = (ctx.gpr[9] & 255u);
    ctx.gpr[19] = (ctx.gpr[10] & 255u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_gpr_31);
    aot_gpr_31 = (0x088C6D70u);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(76)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0109_entry, 109u, 21u, 0x089B8190u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C6D70u) goto L_088C6D70;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C6D70:
    aot_mem.aot_direct_store8(ctx.gpr[18] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(ctx.gpr[2]));
    aot_gpr_4 = (17579u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_gpr_4 | 8192u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_088C6D98;
      }
      goto L_088C6D94;
    }
L_088C6D94:
    aot_mem.aot_direct_store8(ctx.gpr[18] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(0u));
    goto L_088C6D98;
L_088C6D98:
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[20]);
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(56), aot_gpr_16);
    aot_mem.aot_direct_store8(ctx.gpr[18] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(ctx.gpr[21]));
    aot_mem.aot_direct_store8(ctx.gpr[18] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(64), 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(68), ctx.gpr[17]);
      if (branch_taken) {
          goto L_088C6DC4;
      }
      goto L_088C6DB4;
    }
L_088C6DB4:
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(80), 0u);
    aot_gpr_4 = (0u | 8u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(116), aot_gpr_4);
      if (branch_taken) {
          goto L_088C6DCC;
      }
      goto L_088C6DC4;
    }
L_088C6DC4:
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(80), aot_gpr_4);
    goto L_088C6DCC;
L_088C6DCC:
    aot_gpr_4 = (16576u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store8(ctx.gpr[18] + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (2237u << 16u);
    aot_mem.aot_direct_store8(ctx.gpr[18] + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(0u));
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x088C6DF4u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28320));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0108_entry, 108u, 703u, 0x089B7B80u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C6DF4u) goto L_088C6DF4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C6DF4:
    { std::uint32_t aot_run_words[9]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      aot_gpr_16 = aot_run_words[1];
      ctx.gpr[17] = aot_run_words[2];
      ctx.gpr[18] = aot_run_words[3];
      ctx.gpr[19] = aot_run_words[4];
      ctx.gpr[20] = aot_run_words[5];
      ctx.gpr[21] = aot_run_words[6];
      ctx.gpr[22] = aot_run_words[7];
      aot_gpr_31 = aot_run_words[8];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088C6E20:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_6 = (18204u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_fpr_20 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(8)));
    aot_gpr_6 = (aot_gpr_6 | 16384u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_20 < aot_fpr_12)) ? 0x00800000u : 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_31);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_16 = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_088C6F8C;
      }
      goto L_088C6E54;
    }
L_088C6E54:
    aot_gpr_5 = (aot_gpr_16 + static_cast<std::uint32_t>(4));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x088C6E64u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    goto L_088C6080;
L_088C6E64:
    aot_gpr_6 = (17224u << 16u);
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_6);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(76)));
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x088C6E80u);
    aot_gpr_5 = (0u | 80u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0109_entry, 109u, 21u, 0x089B8190u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C6E80u) goto L_088C6E80;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C6E80:
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(ctx.gpr[2]));
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) <= 0;
    aot_gpr_4 = (0u | 52u);
      if (branch_taken) {
          goto L_088C6EE8;
      }
      goto L_088C6E90;
    }
L_088C6E90:
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), aot_gpr_4);
    aot_gpr_4 = (0u | 108u);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), aot_gpr_4);
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (0u | 3u);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(64), aot_gpr_4);
    aot_gpr_4 = (0u | 12500u);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(80), 0u);
    aot_gpr_4 = (0u | 8u);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(116), aot_gpr_4);
    aot_gpr_4 = (16512u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (2237u << 16u);
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(0u));
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x088C6EE8u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28320));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0108_entry, 108u, 703u, 0x089B7B80u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C6EE8u) goto L_088C6EE8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C6EE8:
    aot_gpr_4 = (17917u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_gpr_4 | 8192u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_088C6F8C;
      }
      goto L_088C6F08;
    }
L_088C6F08:
    aot_gpr_6 = (17076u << 16u);
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_6);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(76)));
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x088C6F24u);
    aot_gpr_5 = (0u | 80u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0109_entry, 109u, 21u, 0x089B8190u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C6F24u) goto L_088C6F24;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C6F24:
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(ctx.gpr[2]));
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) <= 0;
    aot_gpr_4 = (0u | 2u);
      if (branch_taken) {
          goto L_088C6F8C;
      }
      goto L_088C6F34;
    }
L_088C6F34:
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), aot_gpr_4);
    aot_gpr_4 = (0u | 109u);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), aot_gpr_4);
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (0u | 3u);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(64), aot_gpr_4);
    aot_gpr_4 = (0u | 25000u);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(80), 0u);
    aot_gpr_4 = (0u | 4u);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(116), aot_gpr_4);
    aot_gpr_4 = (16512u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (2237u << 16u);
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(0u));
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x088C6F8Cu);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28320));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0108_entry, 108u, 703u, 0x089B7B80u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C6F8Cu) goto L_088C6F8C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C6F8C:
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      aot_gpr_16 = aot_run_words[1];
      ctx.gpr[17] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088C6FA4:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088C6FB8;
      }
      goto L_088C6FB0;
    }
L_088C6FB0:
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-23836), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_088C6FB8;
L_088C6FB8:
    jump_target = aot_gpr_31;
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088C6FC0:
    jump_target = aot_gpr_31;
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088C6FC8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_6 = (17692u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_fpr_20 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(8)));
    aot_gpr_6 = (aot_gpr_6 | 16384u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_20 < aot_fpr_12)) ? 0x00800000u : 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_31);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    ctx.gpr[17] = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_088C7104;
      }
      goto L_088C6FFC;
    }
L_088C6FFC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(613))))));
    aot_gpr_5 = (aot_gpr_5 & 16u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_088C70FC;
      }
      goto L_088C7010;
    }
L_088C7010:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(604)));
    aot_fpr_13 = std::bit_cast<float>(0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_088C70FC;
      }
      goto L_088C7028;
    }
L_088C7028:
    aot_gpr_5 = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x088C7038u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_088C6080;
L_088C7038:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    aot_gpr_5 = (16968u << 16u);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(617))))));
    aot_gpr_4 = (aot_gpr_4 & 4u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_5);
      if (branch_taken) {
          goto L_088C7058;
      }
      goto L_088C7050;
    }
L_088C7050:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (0u | 15u);
      if (branch_taken) {
          goto L_088C705C;
      }
      goto L_088C7058;
    }
L_088C7058:
    aot_gpr_4 = (0u | 60u);
    goto L_088C705C;
L_088C705C:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(76)));
    aot_gpr_31 = (0x088C7070u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0109_entry, 109u, 21u, 0x089B8190u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C7070u) goto L_088C7070;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C7070:
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(ctx.gpr[2]));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) <= 0;
    aot_gpr_4 = (0u | 12u);
      if (branch_taken) {
          goto L_088C70FC;
      }
      goto L_088C7080;
    }
L_088C7080:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(52), aot_gpr_4);
    aot_gpr_4 = (0u | 294u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(56), aot_gpr_4);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (0u | 2u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(64), aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7696));
    aot_gpr_31 = (0x088C70A8u);
    aot_gpr_5 = (0u | 294u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0880A400, 1u, 514u, 0x0880A400u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0001_entry, 1u, 514u, 0x0880A400u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C70A8u) goto L_088C70A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C70A8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(48)));
    aot_gpr_5 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_4 - aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 & 1023u);
    aot_gpr_4 = (ctx.gpr[2] + aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(68), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(80), 0u);
    aot_gpr_4 = (16448u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (0u | 3u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(116), aot_gpr_4);
    aot_gpr_4 = (2237u << 16u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(0u));
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x088C70FCu);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28320));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0108_entry, 108u, 703u, 0x089B7B80u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C70FCu) goto L_088C70FC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C70FC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088C7108;
      }
      goto L_088C7104;
    }
L_088C7104:
    ctx.gpr[2] = (0u | 0u);
    goto L_088C7108;
L_088C7108:
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      aot_gpr_16 = aot_run_words[1];
      ctx.gpr[17] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088C7120:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-80));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_fpr_20 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(8)));
    aot_gpr_6 = (17608u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_20 < aot_fpr_12)) ? 0x00800000u : 0u);
    { const std::uint32_t aot_run_words[4]{std::bit_cast<std::uint32_t>(ctx.fpr[22]), std::bit_cast<std::uint32_t>(ctx.fpr[24]), std::bit_cast<std::uint32_t>(ctx.fpr[26]), std::bit_cast<std::uint32_t>(ctx.fpr[28])};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_run_words); }
    { const std::uint32_t aot_run_words[9]{ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], ctx.gpr[23], ctx.gpr[30], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_run_words); }
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    ctx.gpr[17] = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_088C7318;
      }
      goto L_088C717C;
    }
L_088C717C:
    ctx.gpr[20] = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_5 = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    aot_gpr_31 = (0x088C7190u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_088C6080;
L_088C7190:
    aot_gpr_4 = (ctx.gpr[20] + static_cast<std::uint32_t>(944));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_4 = (15205u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 24642u);
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (16025u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 39322u);
    ctx.fpr[22] = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[21] = (2237u << 16u);
    aot_gpr_4 = (17096u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_4 = (16928u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[19] = (0u | 2u);
    aot_gpr_4 = (16256u << 16u);
    ctx.gpr[30] = (0u | 6u);
    ctx.fpr[28] = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[23] = (ctx.gpr[28] + static_cast<std::uint32_t>(7696));
    ctx.gpr[22] = (0u | 10u);
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-28320));
    goto L_088C71E8;
L_088C71E8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (0x088C71F4u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0194_entry, 194u, 382u, 0x08B0D940u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C71F4u) goto L_088C71F4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C71F4:
    aot_gpr_4 = (ctx.gpr[2] & 255u);
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[19];
      if (branch_taken) {
          goto L_088C72FC;
      }
      goto L_088C7200;
    }
L_088C7200:
    aot_gpr_4 = (ctx.gpr[17] << 4u);
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (ctx.gpr[20] + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(976));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(42)));
    aot_gpr_6 = (0u | 1u);
    { const bool branch_taken = aot_gpr_5 == aot_gpr_6;
      if (branch_taken) {
          goto L_088C722C;
      }
      goto L_088C7224;
    }
L_088C7224:
    { const bool branch_taken = aot_gpr_5 != ctx.gpr[19];
      if (branch_taken) {
          goto L_088C72FC;
      }
      goto L_088C722C;
    }
L_088C722C:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12) & 0x7FFFFFFFu);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_20)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_088C72FC;
      }
      goto L_088C7244;
    }
L_088C7244:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= ctx.fpr[22])) ? 0x00800000u : 0u);
    if (((ctx.fcr31 & 0x00800000u) != 0u)) {
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
        goto L_088C725C;
    }
    goto L_088C7254;
L_088C7254:
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    goto L_088C725C;
L_088C725C:
    aot_fpr_14 = aot_fpr_12 / ctx.fpr[22];
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(76)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_fpr_14 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_14));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_14));
    aot_gpr_31 = (0x088C727Cu);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0109_entry, 109u, 21u, 0x089B8190u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C727Cu) goto L_088C727C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C727C:
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(ctx.gpr[2]));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) <= 0;
      if (branch_taken) {
          goto L_088C72FC;
      }
      goto L_088C728C;
    }
L_088C728C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(26324)));
    { const std::uint32_t dividend = aot_gpr_4; const std::uint32_t divisor = ctx.gpr[30]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr_4 = (ctx.gpr[17] + static_cast<std::uint32_t>(6));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(52), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[23]);
    aot_gpr_4 = (ctx.gpr[23] | 0u);
    aot_gpr_5 = (ctx.hi);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(119));
    aot_gpr_31 = (0x088C72B4u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(56), aot_gpr_5);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0880A400, 1u, 514u, 0x0880A400u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0001_entry, 1u, 514u, 0x0880A400u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C72B4u) goto L_088C72B4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C72B4:
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088C72C4u);
    aot_gpr_5 = (0u | 1000u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089B7A84, 108u, 690u, 0x089B7A84u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0108_entry, 108u, 690u, 0x089B7A84u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C72C4u) goto L_088C72C4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C72C4:
    aot_gpr_4 = (ctx.gpr[23] + ctx.gpr[2]);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(68), aot_gpr_4);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(64), ctx.gpr[22]);
    { const std::uint32_t aot_run_words[3]{ctx.gpr[18], std::bit_cast<std::uint32_t>(ctx.fpr[28]), std::bit_cast<std::uint32_t>(ctx.fpr[26])};
      aot_mem.aot_direct_store32_block(aot_gpr_16 + static_cast<std::uint32_t>(80), aot_run_words); }
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(ctx.gpr[18]));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(ctx.gpr[18]));
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    aot_gpr_31 = (0x088C72F8u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0108_entry, 108u, 703u, 0x089B7B80u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C72F8u) goto L_088C72F8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C72F8:
    ctx.gpr[23] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    goto L_088C72FC;
L_088C72FC:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[17] & 255u);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[17]) < 6 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088C71E8;
      }
      goto L_088C7310;
    }
L_088C7310:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_088C731C;
      }
      goto L_088C7318;
    }
L_088C7318:
    ctx.gpr[2] = (0u | 0u);
    goto L_088C731C;
L_088C731C:
    { std::uint32_t aot_run_words[15]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      ctx.fpr[22] = std::bit_cast<float>(aot_run_words[1]);
      ctx.fpr[24] = std::bit_cast<float>(aot_run_words[2]);
      ctx.fpr[26] = std::bit_cast<float>(aot_run_words[3]);
      ctx.fpr[28] = std::bit_cast<float>(aot_run_words[4]);
      aot_gpr_16 = aot_run_words[5];
      ctx.gpr[17] = aot_run_words[6];
      ctx.gpr[18] = aot_run_words[7];
      ctx.gpr[19] = aot_run_words[8];
      ctx.gpr[20] = aot_run_words[9];
      ctx.gpr[21] = aot_run_words[10];
      ctx.gpr[22] = aot_run_words[11];
      ctx.gpr[23] = aot_run_words[12];
      ctx.gpr[30] = aot_run_words[13];
      aot_gpr_31 = aot_run_words[14];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088C7360:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(604)));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_13) & 0x7FFFFFFFu);
    aot_gpr_4 = (aot_gpr_6 | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) < 0;
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_4) < 10 ? 1u : 0u);
      if (branch_taken) {
          goto L_088C73AC;
      }
      goto L_088C7374;
    }
L_088C7374:
    { const bool branch_taken = aot_gpr_6 == 0u;
      if (branch_taken) {
          goto L_088C73AC;
      }
      goto L_088C737C;
    }
L_088C737C:
    aot_gpr_4 = (aot_gpr_4 << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_4);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-21072)));
    jump_target = ctx.gpr[1];
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088C7394:
    aot_gpr_4 = (aot_gpr_5 + static_cast<std::uint32_t>(1888));
    { const bool branch_taken = 0u == 0u;
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088C73B4;
      }
      goto L_088C73A0;
    }
L_088C73A0:
    aot_gpr_4 = (aot_gpr_5 + static_cast<std::uint32_t>(1496));
    { const bool branch_taken = 0u == 0u;
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088C73B4;
      }
      goto L_088C73AC;
    }
L_088C73AC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088C740C;
      }
      goto L_088C73B4;
    }
L_088C73B4:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 <= aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_5 = (15759u << 16u);
      if (branch_taken) {
          goto L_088C73EC;
      }
      goto L_088C73C4;
    }
L_088C73C4:
    aot_gpr_5 = (15800u << 16u);
    aot_gpr_5 = (aot_gpr_5 | 20972u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_14;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    if (((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
        goto L_088C73E4;
    }
    goto L_088C73E4;
L_088C73E4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_13));
      if (branch_taken) {
          goto L_088C740C;
      }
      goto L_088C73EC;
    }
L_088C73EC:
    aot_gpr_5 = (aot_gpr_5 | 23593u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_12 = aot_fpr_12 - aot_fpr_14;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
        goto L_088C7408;
    }
    goto L_088C7408;
L_088C7408:
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_13));
    goto L_088C740C;
L_088C740C:
    jump_target = aot_gpr_31;
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088C7414:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-64));
    aot_gpr_4 = (aot_gpr_6 | 0u);
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_4) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_fpr_14 = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_088C7438;
      }
      goto L_088C7428;
    }
L_088C7428:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) <= 0;
      if (branch_taken) {
          goto L_088C755C;
      }
      goto L_088C7430;
    }
L_088C7430:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088C7454;
      }
      goto L_088C7438;
    }
L_088C7438:
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_4) < 3 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 != 0u;
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_088C7538;
      }
      goto L_088C7444;
    }
L_088C7444:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088C74A0;
      }
      goto L_088C744C;
    }
L_088C744C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088C755C;
      }
      goto L_088C7454;
    }
L_088C7454:
    aot_gpr_4 = (16076u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (16076u << 16u);
      if (branch_taken) {
          goto L_088C7498;
      }
      goto L_088C7470;
    }
L_088C7470:
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (16153u << 16u);
    aot_fpr_12 = aot_fpr_12 - aot_fpr_13;
    aot_gpr_4 = (aot_gpr_4 | 39322u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_14 = aot_fpr_12 / aot_fpr_14;
    aot_gpr_4 = (16192u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_14; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    goto L_088C7498;
L_088C7498:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088C755C;
      }
      goto L_088C74A0;
    }
L_088C74A0:
    aot_gpr_4 = (16076u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= ctx.fpr[15])) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_088C74DC;
      }
      goto L_088C74BC;
    }
L_088C74BC:
    aot_gpr_4 = (16076u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (16153u << 16u);
    aot_fpr_12 = aot_fpr_12 - ctx.fpr[15];
    aot_gpr_4 = (aot_gpr_4 | 39322u);
    ctx.fpr[16] = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 / ctx.fpr[16];
    goto L_088C74DC;
L_088C74DC:
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_13) & 0x7FFFFFFFu);
    aot_gpr_4 = (15651u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 55050u);
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 <= ctx.fpr[15])) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_088C751C;
      }
      goto L_088C74FC;
    }
L_088C74FC:
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(80)));
    aot_fpr_14 = aot_fpr_13 / aot_fpr_14;
    aot_gpr_4 = (16256u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 < aot_fpr_14)) ? 0x00800000u : 0u);
    if (((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_13));
        goto L_088C751C;
    }
    goto L_088C751C;
L_088C751C:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_14)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_088C7530;
      }
      goto L_088C752C;
    }
L_088C752C:
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_088C7530;
L_088C7530:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088C755C;
      }
      goto L_088C7538;
    }
L_088C7538:
    aot_gpr_4 = (16256u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_13) & 0x7FFFFFFFu);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(80)));
    aot_fpr_14 = aot_fpr_14 / ctx.fpr[15];
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_14)) ? 0x00800000u : 0u);
    if (((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
        goto L_088C755C;
    }
    goto L_088C755C;
L_088C755C:
    aot_gpr_4 = (aot_gpr_5 + static_cast<std::uint32_t>(112));
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (16256u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(24)));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12) & 0x7FFFFFFFu);
    aot_gpr_4 = (16800u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 < aot_fpr_12)) ? 0x00800000u : 0u);
    if (((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_13));
        goto L_088C7598;
    }
    goto L_088C7598;
L_088C7598:
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_14 <= ctx.fpr[0])) ? 0x00800000u : 0u);
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_14));
        goto L_088C75AC;
    }
    goto L_088C75AC;
L_088C75AC:
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088C75B4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    ctx.gpr[8] = (16256u << 16u);
    aot_fpr_13 = std::bit_cast<float>(0u);
    aot_gpr_4 = (0u | 2u);
    { const bool branch_taken = aot_gpr_6 != aot_gpr_4;
    aot_fpr_14 = std::bit_cast<float>(ctx.gpr[8]);
      if (branch_taken) {
          goto L_088C75E8;
      }
      goto L_088C75CC;
    }
L_088C75CC:
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12) & 0x7FFFFFFFu);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(80)));
    aot_fpr_13 = aot_fpr_13 / ctx.fpr[15];
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_14 < aot_fpr_13)) ? 0x00800000u : 0u);
    if (((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_14));
        goto L_088C75E8;
    }
    goto L_088C75E8;
L_088C75E8:
    aot_gpr_4 = (aot_gpr_5 + static_cast<std::uint32_t>(112));
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(24)));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12) & 0x7FFFFFFFu);
    aot_gpr_4 = (16800u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_14 < aot_fpr_12)) ? 0x00800000u : 0u);
    if (((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_14));
        goto L_088C761C;
    }
    goto L_088C761C;
L_088C761C:
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 <= ctx.fpr[0])) ? 0x00800000u : 0u);
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_13));
        goto L_088C7630;
    }
    goto L_088C7630;
L_088C7630:
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088C7638:
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (0u | 71u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_5 = (0u | 67u);
      if (branch_taken) {
          goto L_088C7678;
      }
      goto L_088C7648;
    }
L_088C7648:
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_5 = (0u | 50u);
      if (branch_taken) {
          goto L_088C7678;
      }
      goto L_088C7650;
    }
L_088C7650:
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_5 = (0u | 46u);
      if (branch_taken) {
          goto L_088C7678;
      }
      goto L_088C7658;
    }
L_088C7658:
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_5 = (0u | 24u);
      if (branch_taken) {
          goto L_088C7678;
      }
      goto L_088C7660;
    }
L_088C7660:
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1136));
      if (branch_taken) {
          goto L_088C7678;
      }
      goto L_088C7668;
    }
L_088C7668:
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1169));
      if (branch_taken) {
          goto L_088C7678;
      }
      goto L_088C7670;
    }
L_088C7670:
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_088C7680;
      }
      goto L_088C7678;
    }
L_088C7678:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088C7684;
      }
      goto L_088C7680;
    }
L_088C7680:
    ctx.gpr[2] = (0u | 0u);
    goto L_088C7684;
L_088C7684:
    jump_target = aot_gpr_31;
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088C768C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x088C769Cu);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(12)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0191_entry, 191u, 238u, 0x08B00E18u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C769Cu) goto L_088C769C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C769C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_088C76AC;
      }
      goto L_088C76A4;
    }
L_088C76A4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088C76B0;
      }
      goto L_088C76AC;
    }
L_088C76AC:
    ctx.gpr[2] = (0u | 0u);
    goto L_088C76B0;
L_088C76B0:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088C76BC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(20)));
    aot_gpr_6 = (0u | 24u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    { const bool branch_taken = aot_gpr_5 == aot_gpr_6;
    aot_gpr_6 = (0u | 74u);
      if (branch_taken) {
          goto L_088C76F8;
      }
      goto L_088C76D8;
    }
L_088C76D8:
    { const bool branch_taken = aot_gpr_5 == aot_gpr_6;
      if (branch_taken) {
          goto L_088C76F8;
      }
      goto L_088C76E0;
    }
L_088C76E0:
    aot_gpr_31 = (0x088C76E8u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(12)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0191_entry, 191u, 238u, 0x08B00E18u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C76E8u) goto L_088C76E8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C76E8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_088C7700;
      }
      goto L_088C76F0;
    }
L_088C76F0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088C7704;
      }
      goto L_088C76F8;
    }
L_088C76F8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088C7704;
      }
      goto L_088C7700;
    }
L_088C7700:
    ctx.gpr[2] = (0u | 0u);
    goto L_088C7704;
L_088C7704:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088C7710:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_fpr_20 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(8)));
    aot_gpr_6 = (17505u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_20 < aot_fpr_12)) ? 0x00800000u : 0u);
    { const std::uint32_t aot_run_words[4]{ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_run_words); }
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    ctx.gpr[18] = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_088C7884;
      }
      goto L_088C7748;
    }
L_088C7748:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(613))))));
    aot_gpr_5 = (aot_gpr_5 & 16u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_088C787C;
      }
      goto L_088C775C;
    }
L_088C775C:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(1724)));
    aot_gpr_4 = (15564u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (48332u << 16u);
      if (branch_taken) {
          goto L_088C7794;
      }
      goto L_088C777C;
    }
L_088C777C:
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_14 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_088C77C4;
      }
      goto L_088C7790;
    }
L_088C7790:
    aot_gpr_4 = (48332u << 16u);
    goto L_088C7794;
L_088C7794:
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 <= aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_088C787C;
      }
      goto L_088C77B0;
    }
L_088C77B0:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 <= aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_088C787C;
      }
      goto L_088C77C4;
    }
L_088C77C4:
    aot_gpr_5 = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x088C77D4u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_088C6080;
L_088C77D4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(26320)));
    ctx.gpr[18] = (0u | 10u);
    { const std::uint32_t dividend = aot_gpr_4; const std::uint32_t divisor = ctx.gpr[18]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr_5 = (16880u << 16u);
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(76)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_5 = (ctx.hi);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(70));
    aot_gpr_31 = (0x088C7804u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0109_entry, 109u, 21u, 0x089B8190u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C7804u) goto L_088C7804;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C7804:
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(ctx.gpr[2]));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) <= 0;
      if (branch_taken) {
          goto L_088C787C;
      }
      goto L_088C7814;
    }
L_088C7814:
    aot_gpr_4 = (0u | 13u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(52), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(56), 0u);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7696));
    aot_gpr_31 = (0x088C782Cu);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0880A400, 1u, 514u, 0x0880A400u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0001_entry, 1u, 514u, 0x0880A400u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C782Cu) goto L_088C782C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C782C:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    aot_gpr_5 = (ctx.gpr[19] >> 4u);
    aot_gpr_31 = (0x088C7840u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089B7A84, 108u, 690u, 0x089B7A84u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0108_entry, 108u, 690u, 0x089B7A84u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C7840u) goto L_088C7840;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C7840:
    aot_gpr_4 = (ctx.gpr[19] + ctx.gpr[2]);
    aot_fpr_12 = std::bit_cast<float>(0u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(68), aot_gpr_4);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(64), ctx.gpr[18]);
    { const std::uint32_t aot_run_words[3]{ctx.gpr[17], std::bit_cast<std::uint32_t>(aot_fpr_12), std::bit_cast<std::uint32_t>(aot_fpr_20)};
      aot_mem.aot_direct_store32_block(aot_gpr_16 + static_cast<std::uint32_t>(80), aot_run_words); }
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_gpr_4 = (2237u << 16u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(0u));
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x088C787Cu);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28320));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0108_entry, 108u, 703u, 0x089B7B80u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C787Cu) goto L_088C787C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C787C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_088C7888;
      }
      goto L_088C7884;
    }
L_088C7884:
    ctx.gpr[2] = (0u | 0u);
    goto L_088C7888;
L_088C7888:
    { std::uint32_t aot_run_words[6]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      aot_gpr_16 = aot_run_words[1];
      ctx.gpr[17] = aot_run_words[2];
      ctx.gpr[18] = aot_run_words[3];
      ctx.gpr[19] = aot_run_words[4];
      aot_gpr_31 = aot_run_words[5];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088C78A8:
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 46 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 68 ? 1u : 0u);
      if (branch_taken) {
          goto L_088C78DC;
      }
      goto L_088C78B8;
    }
L_088C78B8:
    aot_gpr_5 = (0u | 24u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1136));
      if (branch_taken) {
          goto L_088C78D4;
      }
      goto L_088C78C4;
    }
L_088C78C4:
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1169));
      if (branch_taken) {
          goto L_088C78D4;
      }
      goto L_088C78CC;
    }
L_088C78CC:
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_088C78FC;
      }
      goto L_088C78D4;
    }
L_088C78D4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088C793C;
      }
      goto L_088C78DC;
    }
L_088C78DC:
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_5 = (0u | 71u);
      if (branch_taken) {
          goto L_088C7904;
      }
      goto L_088C78E4;
    }
L_088C78E4:
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 51 ? 1u : 0u);
    if (aot_gpr_5 != 0u) {
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-46));
        goto L_088C7914;
    }
    goto L_088C78F0;
L_088C78F0:
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 67 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088C78D4;
      }
      goto L_088C78FC;
    }
L_088C78FC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088C793C;
      }
      goto L_088C7904;
    }
L_088C7904:
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_088C78FC;
      }
      goto L_088C790C;
    }
L_088C790C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088C78D4;
      }
      goto L_088C7914;
    }
L_088C7914:
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088C78D4;
      }
      goto L_088C791C;
    }
L_088C791C:
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_088C78FC;
      }
      goto L_088C7924;
    }
L_088C7924:
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_088C78D4;
      }
      goto L_088C792C;
    }
L_088C792C:
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088C78FC;
      }
      goto L_088C7934;
    }
L_088C7934:
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[1];
      if (branch_taken) {
          goto L_088C78D4;
      }
      goto L_088C793C;
    }
L_088C793C:
    jump_target = aot_gpr_31;
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088C7944:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(8)));
    aot_gpr_6 = (17505u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_16);
    { const std::uint32_t aot_run_words[3]{ctx.gpr[18], ctx.gpr[19], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_run_words); }
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_16 = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_088C7ACC;
      }
      goto L_088C797C;
    }
L_088C797C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(12)));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1000));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(86))))));
    { const bool branch_taken = aot_gpr_6 == aot_gpr_5;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_088C7A14;
      }
      goto L_088C7990;
    }
L_088C7990:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(72)));
    aot_gpr_6 = (0u | 5u);
    aot_gpr_5 = (aot_gpr_5 & 496u);
    aot_gpr_5 = (aot_gpr_5 >> 4u);
    { const bool branch_taken = aot_gpr_5 == aot_gpr_6;
      if (branch_taken) {
          goto L_088C7A0C;
      }
      goto L_088C79A8;
    }
L_088C79A8:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(636)));
    aot_gpr_4 = (17347u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_088C7A0C;
      }
      goto L_088C79C4;
    }
L_088C79C4:
    aot_gpr_4 = (17274u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_5 = (16880u << 16u);
    aot_gpr_4 = (0u | 7u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_5);
      if (branch_taken) {
          goto L_088C7A1C;
      }
      goto L_088C79E4;
    }
L_088C79E4:
    aot_gpr_5 = (0u | 80u);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(64), aot_gpr_4);
    ctx.gpr[19] = (0u | 60u);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7696));
    aot_gpr_31 = (0x088C7A00u);
    aot_gpr_5 = (0u | 80u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0880A400, 1u, 514u, 0x0880A400u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0001_entry, 1u, 514u, 0x0880A400u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C7A00u) goto L_088C7A00;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C7A00:
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_088C7A38;
      }
      goto L_088C7A0C;
    }
L_088C7A0C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_088C7AD0;
      }
      goto L_088C7A14;
    }
L_088C7A14:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_088C7AD0;
      }
      goto L_088C7A1C;
    }
L_088C7A1C:
    aot_gpr_5 = (0u | 261u);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(64), aot_gpr_4);
    aot_gpr_4 = (0u | 27000u);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), aot_gpr_4);
    ctx.gpr[19] = (0u | 30u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(8)));
    goto L_088C7A38;
L_088C7A38:
    aot_gpr_5 = (aot_gpr_16 + static_cast<std::uint32_t>(4));
    aot_gpr_31 = (0x088C7A44u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    goto L_088C6080;
L_088C7A44:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(12)));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(617))))));
    aot_gpr_4 = (aot_gpr_4 & 4u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088C7A60;
      }
      goto L_088C7A58;
    }
L_088C7A58:
    ctx.gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[19]) >> 2u));
    ctx.gpr[19] = (ctx.gpr[19] & 255u);
    goto L_088C7A60;
L_088C7A60:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(76)));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088C7A74u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0109_entry, 109u, 21u, 0x089B8190u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C7A74u) goto L_088C7A74;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C7A74:
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(ctx.gpr[2]));
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) <= 0;
    aot_gpr_4 = (0u | 28u);
      if (branch_taken) {
          goto L_088C7AC4;
      }
      goto L_088C7A84;
    }
L_088C7A84:
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), aot_gpr_4);
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(80), 0u);
    aot_gpr_4 = (16384u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (0u | 3u);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(116), aot_gpr_4);
    aot_gpr_4 = (2237u << 16u);
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(0u));
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x088C7AC4u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28320));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0108_entry, 108u, 703u, 0x089B7B80u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C7AC4u) goto L_088C7AC4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C7AC4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_088C7AD0;
      }
      goto L_088C7ACC;
    }
L_088C7ACC:
    ctx.gpr[2] = (0u | 0u);
    goto L_088C7AD0;
L_088C7AD0:
    { std::uint32_t aot_run_words[6]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      aot_gpr_16 = aot_run_words[1];
      ctx.gpr[17] = aot_run_words[2];
      ctx.gpr[18] = aot_run_words[3];
      ctx.gpr[19] = aot_run_words[4];
      aot_gpr_31 = aot_run_words[5];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088C7AF0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_fpr_20 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(8)));
    aot_gpr_6 = (17608u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_20 < aot_fpr_12)) ? 0x00800000u : 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_31);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_088C7C38;
      }
      goto L_088C7B20;
    }
L_088C7B20:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(12)));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(613))))));
    aot_gpr_6 = (aot_gpr_6 & 16u);
    { const bool branch_taken = aot_gpr_6 == 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_088C7C30;
      }
      goto L_088C7B34;
    }
L_088C7B34:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (0u | 9u);
    { const bool branch_taken = aot_gpr_6 == ctx.gpr[7];
    ctx.gpr[7] = (0u | 6u);
      if (branch_taken) {
          goto L_088C7B74;
      }
      goto L_088C7B44;
    }
L_088C7B44:
    { const bool branch_taken = aot_gpr_6 == ctx.gpr[7];
      if (branch_taken) {
          goto L_088C7B64;
      }
      goto L_088C7B4C;
    }
L_088C7B4C:
    { const bool branch_taken = aot_gpr_6 != 0u;
      if (branch_taken) {
          goto L_088C7B84;
      }
      goto L_088C7B54;
    }
L_088C7B54:
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(1653))))));
    aot_gpr_5 = (0u | 4u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_6 = (aot_gpr_6 & 7u);
      if (branch_taken) {
          goto L_088C7B8C;
      }
      goto L_088C7B64;
    }
L_088C7B64:
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(1378))))));
    aot_gpr_5 = (0u | 4u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_6 = (aot_gpr_6 & 7u);
      if (branch_taken) {
          goto L_088C7B8C;
      }
      goto L_088C7B74;
    }
L_088C7B74:
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(1653))))));
    aot_gpr_5 = (0u | 4u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_6 = (aot_gpr_6 & 7u);
      if (branch_taken) {
          goto L_088C7B8C;
      }
      goto L_088C7B84;
    }
L_088C7B84:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_088C7C3C;
      }
      goto L_088C7B8C;
    }
L_088C7B8C:
    { const bool branch_taken = aot_gpr_6 != aot_gpr_5;
      if (branch_taken) {
          goto L_088C7C30;
      }
      goto L_088C7B94;
    }
L_088C7B94:
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x088C7BA4u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_088C6080;
L_088C7BA4:
    aot_gpr_6 = (16928u << 16u);
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_6);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(76)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x088C7BC0u);
    aot_gpr_5 = (0u | 60u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0109_entry, 109u, 21u, 0x089B8190u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C7BC0u) goto L_088C7BC0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C7BC0:
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(ctx.gpr[2]));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) <= 0;
      if (branch_taken) {
          goto L_088C7C30;
      }
      goto L_088C7BD0;
    }
L_088C7BD0:
    aot_gpr_4 = (0u | 35u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(52), aot_gpr_4);
    aot_gpr_4 = (0u | 164u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(56), aot_gpr_4);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(64), 0u);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7696));
    aot_gpr_31 = (0x088C7BF8u);
    aot_gpr_5 = (0u | 164u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0880A400, 1u, 514u, 0x0880A400u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0001_entry, 1u, 514u, 0x0880A400u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C7BF8u) goto L_088C7BF8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C7BF8:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(80), 0u);
    aot_gpr_4 = (16384u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (0u | 3u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(116), aot_gpr_4);
    aot_gpr_4 = (2237u << 16u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(0u));
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x088C7C30u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28320));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0108_entry, 108u, 703u, 0x089B7B80u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C7C30u) goto L_088C7C30;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C7C30:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_088C7C3C;
      }
      goto L_088C7C38;
    }
L_088C7C38:
    ctx.gpr[2] = (0u | 0u);
    goto L_088C7C3C;
L_088C7C3C:
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      aot_gpr_16 = aot_run_words[1];
      ctx.gpr[17] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088C7C54:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_gpr_6 = (17817u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(8)));
    aot_gpr_6 = (aot_gpr_6 | 8192u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_20)) ? 0x00800000u : 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_31);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_16 = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_088C7DFC;
      }
      goto L_088C7C8C;
    }
L_088C7C8C:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(24)));
    aot_fpr_14 = std::bit_cast<float>(0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 <= aot_fpr_14)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_088C7DF4;
      }
      goto L_088C7CA4;
    }
L_088C7CA4:
    aot_gpr_5 = (aot_gpr_16 + static_cast<std::uint32_t>(4));
    aot_gpr_31 = (0x088C7CB0u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    goto L_088C6080;
L_088C7CB0:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(8)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_20)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_088C7DF4;
      }
      goto L_088C7CC4;
    }
L_088C7CC4:
    aot_fpr_12 = aot_fpr_20 - aot_fpr_12;
    aot_fpr_20 = aot_fpr_12 / aot_fpr_20;
    aot_gpr_4 = (16880u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_20; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_13));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) <= 0;
    aot_gpr_4 = (0u | 33u);
      if (branch_taken) {
          goto L_088C7DF4;
      }
      goto L_088C7CF0;
    }
L_088C7CF0:
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), aot_gpr_4);
    aot_gpr_4 = (0u | 25u);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), aot_gpr_4);
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (0u | 5u);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(64), aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7696));
    aot_gpr_31 = (0x088C7D18u);
    aot_gpr_5 = (0u | 25u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0880A400, 1u, 514u, 0x0880A400u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0001_entry, 1u, 514u, 0x0880A400u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C7D18u) goto L_088C7D18;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C7D18:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    aot_gpr_5 = (0u | 987u);
    aot_gpr_6 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_4 - aot_gpr_6);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_4); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr_5); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr_4 = (16576u << 16u);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(80), 0u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (17036u << 16u);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_16 = (0u | 3u);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(116), aot_gpr_16);
    aot_gpr_4 = (2237u << 16u);
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(0u));
    ctx.gpr[18] = (aot_gpr_4 + static_cast<std::uint32_t>(-28320));
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_6 = (ctx.hi);
    aot_gpr_6 = (ctx.gpr[2] + aot_gpr_6);
    aot_gpr_31 = (0x088C7D80u);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), aot_gpr_6);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0108_entry, 108u, 703u, 0x089B7B80u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C7D80u) goto L_088C7D80;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C7D80:
    aot_gpr_4 = (16948u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_20; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_4 = (0u | 12000u);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), aot_gpr_4);
    aot_gpr_4 = (0u | 40u);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), aot_gpr_4);
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_4 = (0u | 24u);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), aot_gpr_4);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(64), aot_gpr_16);
    aot_gpr_4 = (16384u << 16u);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(80), 0u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (17136u << 16u);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (0u | 7u);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(116), aot_gpr_4);
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(0u));
    aot_gpr_31 = (0x088C7DF4u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0108_entry, 108u, 703u, 0x089B7B80u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C7DF4u) goto L_088C7DF4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C7DF4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088C7E00;
      }
      goto L_088C7DFC;
    }
L_088C7DFC:
    ctx.gpr[2] = (0u | 0u);
    goto L_088C7E00;
L_088C7E00:
    { std::uint32_t aot_run_words[5]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      aot_gpr_16 = aot_run_words[1];
      ctx.gpr[17] = aot_run_words[2];
      ctx.gpr[18] = aot_run_words[3];
      aot_gpr_31 = aot_run_words[4];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088C7E1C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_gpr_6 = (17692u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(8)));
    aot_gpr_6 = (aot_gpr_6 | 16384u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_gpr_31);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_088C7FA4;
      }
      goto L_088C7E50;
    }
L_088C7E50:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(12)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(24)));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_13) & 0x7FFFFFFFu);
    aot_gpr_6 = (14851u << 16u);
    aot_gpr_6 = (aot_gpr_6 | 4719u);
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_6);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 <= aot_fpr_20)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_088C7F9C;
      }
      goto L_088C7E78;
    }
L_088C7E78:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(1060))))));
    aot_gpr_5 = (aot_gpr_5 & 1u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_088C7F9C;
      }
      goto L_088C7E88;
    }
L_088C7E88:
    aot_gpr_5 = (16192u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_5 = (16968u << 16u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_14 < aot_fpr_13)) ? 0x00800000u : 0u);
    ctx.fpr[22] = std::bit_cast<float>(aot_gpr_5);
    if (((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_14));
        goto L_088C7EA4;
    }
    goto L_088C7EA4;
L_088C7EA4:
    aot_gpr_5 = (16191u << 16u);
    aot_fpr_20 = aot_fpr_13 - aot_fpr_20;
    aot_gpr_5 = (aot_gpr_5 | 57147u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_20 = aot_fpr_20 / aot_fpr_14;
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_gpr_31 = (0x088C7EC4u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_088C6080;
L_088C7EC4:
    aot_gpr_4 = (16880u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    { const float fs = aot_fpr_20; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_fpr_14 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_14));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(76)));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_14));
    aot_gpr_31 = (0x088C7EECu);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0109_entry, 109u, 21u, 0x089B8190u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C7EECu) goto L_088C7EEC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C7EEC:
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(ctx.gpr[2]));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) <= 0;
    aot_gpr_4 = (0u | 38u);
      if (branch_taken) {
          goto L_088C7F9C;
      }
      goto L_088C7EFC;
    }
L_088C7EFC:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(52), aot_gpr_4);
    aot_gpr_4 = (0u | 25u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(56), aot_gpr_4);
    aot_gpr_4 = (17853u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 4096u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    { const float fs = aot_fpr_20; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_20 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_20 = fs * ft; }
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (0u | 3u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(64), aot_gpr_4);
    aot_gpr_4 = (20224u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_20 < aot_fpr_12)) ? 0x00800000u : 0u);
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_12 = aot_fpr_20 - aot_fpr_12;
        goto L_088C7F50;
    }
    goto L_088C7F40;
L_088C7F40:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_20));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(16000));
      if (branch_taken) {
          goto L_088C7F64;
      }
      goto L_088C7F50;
    }
L_088C7F50:
    aot_gpr_4 = (32768u << 16u);
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(16000));
    goto L_088C7F64;
L_088C7F64:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(68), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(80), 0u);
    aot_gpr_4 = (16384u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (0u | 6u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(116), aot_gpr_4);
    aot_gpr_4 = (2237u << 16u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(0u));
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x088C7F9Cu);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28320));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0108_entry, 108u, 703u, 0x089B7B80u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C7F9Cu) goto L_088C7F9C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C7F9C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088C7FA8;
      }
      goto L_088C7FA4;
    }
L_088C7FA4:
    ctx.gpr[2] = (0u | 0u);
    goto L_088C7FA8;
L_088C7FA8:
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      ctx.fpr[22] = std::bit_cast<float>(aot_run_words[1]);
      aot_gpr_16 = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088C7FC0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_gpr_6 = (17692u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(8)));
    aot_gpr_6 = (aot_gpr_6 | 16384u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[22] < aot_fpr_12)) ? 0x00800000u : 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), aot_gpr_31);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0049_entry, 49u, 14u, 0x088C8174u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_088C7FFC;
    }
L_088C7FFC:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(24)));
    ctx.pc = 0x088C8000u; AOT_REGCACHE_SYNC_OUT(); return;
}

#undef AOT_REGCACHE_SYNC_IN
#undef AOT_REGCACHE_SYNC_OUT

void recomp_unit_0048(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0048_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_48(Runtime &runtime) {
    runtime.register_generated_unit(48u, 0x088C4000u, 16384u, &recomp_unit_0048, &recomp_unit_0048_entry);
    // PSPRECOMP_V812_COMPACT_REGISTRATION: same entry set, looped once in Runtime instead of source-expanded calls.
    runtime.register_generated_entry_mask(0x088C4000u, &recomp_unit_0048, "recomp_unit_0048",
                                          kEntryMasks_recomp_unit_0048, 64u);
}
} // namespace psprecomp
