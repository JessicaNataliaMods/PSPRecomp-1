#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include "vcs_resident_regions.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
// PSPRECOMP_V811_COMPACT_DISPATCH: 64-slot occupancy masks + per-group base id.
static constexpr std::uint64_t kEntryMasks_recomp_unit_0046[64] = {
    0x15B0118200830001ull, 0x8002091000140400ull, 0x0000000002010200ull, 0x0008854100418000ull,
    0x8020AC0000000000ull, 0x0000000000104010ull, 0x0000A8200840102Bull, 0x0000000000000000ull,
    0x0080202020402100ull, 0x0560000000000000ull, 0x0000000104010802ull, 0x00A8200840105600ull,
    0x0000000000000000ull, 0x00A0082008030000ull, 0x0000000000000002ull, 0x1000002084804000ull,
    0x0000000002040000ull, 0x2008158000000000ull, 0x0080000000041004ull, 0x0000000000000004ull,
    0x0410040300000000ull, 0x4021490000010050ull, 0x0000008000000800ull, 0x0000000000000000ull,
    0x1405004100403000ull, 0x0000200000201480ull, 0x0000000000000408ull, 0x8200840102B00000ull,
    0x0000000400000000ull, 0x8000000000000000ull, 0x0000802802080201ull, 0x0000004002010A24ull,
    0x0000000000000020ull, 0x40100C0000000000ull, 0x0000000201014010ull, 0x0000101220100000ull,
    0x084B000000000000ull, 0x4088802401080420ull, 0x0000000000000000ull, 0x002004201080212Cull,
    0x24442082A4000044ull, 0xB1A048B413482450ull, 0x502001000000800Aull, 0x8004003450140280ull,
    0x5500501002001000ull, 0x0000800CA00A5005ull, 0x5014028050200100ull, 0x0200100080040034ull,
    0xA00A500555005010ull, 0x4AA42A214000800Cull, 0x0002425400008000ull, 0x0008004000000000ull,
    0x1004100080208004ull, 0x0680402010010080ull, 0x0101008114008000ull, 0x0010004028818200ull,
    0x9008800100028041ull, 0x0000000020100000ull, 0x0034100418000000ull, 0x000000000000A004ull,
    0x6202004000000001ull, 0x0089010811000021ull, 0x8800000010010010ull, 0x4000800000002002ull,
};
static constexpr std::uint16_t kEntryBases_recomp_unit_0046[64] = {
    1u, 15u, 23u, 26u, 35u, 41u, 44u, 55u, 55u, 62u, 66u, 71u, 82u, 82u, 89u, 90u,
    96u, 98u, 104u, 108u, 109u, 114u, 123u, 125u, 125u, 134u, 139u, 141u, 150u, 151u, 152u, 159u,
    166u, 167u, 171u, 176u, 181u, 186u, 196u, 196u, 206u, 218u, 239u, 246u, 257u, 266u, 277u, 287u,
    294u, 309u, 324u, 331u, 333u, 340u, 348u, 355u, 363u, 372u, 374u, 381u, 384u, 390u, 399u, 404u,
};
void recomp_unit_0046_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
// PSPRECOMP_AOT_REGCACHE_BEGIN
// PSPRECOMP_AOT_REGCACHE_META gprs=29,5,4,7,6,8 fprs=12,13,14 gpr_occ=5669 fpr_occ=15 gpr_total=7528 fpr_total=15
    std::uint32_t aot_gpr_29 = ctx.gpr[29];
    std::uint32_t aot_gpr_5 = ctx.gpr[5];
    std::uint32_t aot_gpr_4 = ctx.gpr[4];
    std::uint32_t aot_gpr_7 = ctx.gpr[7];
    std::uint32_t aot_gpr_6 = ctx.gpr[6];
    std::uint32_t aot_gpr_8 = ctx.gpr[8];
    float aot_fpr_12 = ctx.fpr[12];
    float aot_fpr_13 = ctx.fpr[13];
    float aot_fpr_14 = ctx.fpr[14];
    bool aot_regcache_valid = true;
#define AOT_REGCACHE_SYNC_OUT() do { if (aot_regcache_valid) { ctx.gpr[29] = aot_gpr_29; ctx.gpr[5] = aot_gpr_5; ctx.gpr[4] = aot_gpr_4; ctx.gpr[7] = aot_gpr_7; ctx.gpr[6] = aot_gpr_6; ctx.gpr[8] = aot_gpr_8; ctx.fpr[12] = aot_fpr_12; ctx.fpr[13] = aot_fpr_13; ctx.fpr[14] = aot_fpr_14; } } while (false)
#define AOT_REGCACHE_SYNC_IN() do { if (aot_regcache_valid) { aot_gpr_29 = ctx.gpr[29]; aot_gpr_5 = ctx.gpr[5]; aot_gpr_4 = ctx.gpr[4]; aot_gpr_7 = ctx.gpr[7]; aot_gpr_6 = ctx.gpr[6]; aot_gpr_8 = ctx.gpr[8]; aot_fpr_12 = ctx.fpr[12]; aot_fpr_13 = ctx.fpr[13]; aot_fpr_14 = ctx.fpr[14]; } } while (false)
// PSPRECOMP_AOT_REGCACHE_END
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_redispatch_rounds = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x088BC000u;
        entry_id = 0u;
        if (entry_delta < 16380u && (entry_delta & 3u) == 0u) {
            const std::uint32_t entry_slot = entry_delta >> 2u;
            const std::uint32_t entry_group = entry_slot >> 6u;
            const std::uint64_t entry_mask = kEntryMasks_recomp_unit_0046[entry_group];
            const std::uint64_t entry_bit = 1ull << (entry_slot & 63u);
            if ((entry_mask & entry_bit) != 0u) {
                entry_id = static_cast<std::uint16_t>(
                    kEntryBases_recomp_unit_0046[entry_group] +
                    std::popcount(entry_mask & (entry_bit - 1ull)));
            }
        }
    }
    switch (entry_id) {
    case 1u: goto L_088BC000;
    case 2u: goto L_088BC040;
    case 3u: goto L_088BC044;
    case 4u: goto L_088BC05C;
    case 5u: goto L_088BC084;
    case 6u: goto L_088BC09C;
    case 7u: goto L_088BC0A0;
    case 8u: goto L_088BC0B0;
    case 9u: goto L_088BC0D0;
    case 10u: goto L_088BC0D4;
    case 11u: goto L_088BC0DC;
    case 12u: goto L_088BC0E0;
    case 13u: goto L_088BC0E8;
    case 14u: goto L_088BC0F0;
    case 15u: goto L_088BC128;
    case 16u: goto L_088BC148;
    case 17u: goto L_088BC150;
    case 18u: goto L_088BC190;
    case 19u: goto L_088BC1A0;
    case 20u: goto L_088BC1AC;
    case 21u: goto L_088BC1C4;
    case 22u: goto L_088BC1FC;
    case 23u: goto L_088BC224;
    case 24u: goto L_088BC240;
    case 25u: goto L_088BC264;
    case 26u: goto L_088BC33C;
    case 27u: goto L_088BC340;
    case 28u: goto L_088BC358;
    case 29u: goto L_088BC380;
    case 30u: goto L_088BC398;
    case 31u: goto L_088BC3A0;
    case 32u: goto L_088BC3A8;
    case 33u: goto L_088BC3BC;
    case 34u: goto L_088BC3CC;
    case 35u: goto L_088BC4A8;
    case 36u: goto L_088BC4AC;
    case 37u: goto L_088BC4B4;
    case 38u: goto L_088BC4BC;
    case 39u: goto L_088BC4D4;
    case 40u: goto L_088BC4FC;
    case 41u: goto L_088BC510;
    case 42u: goto L_088BC538;
    case 43u: goto L_088BC550;
    case 44u: goto L_088BC600;
    case 45u: goto L_088BC604;
    case 46u: goto L_088BC60C;
    case 47u: goto L_088BC614;
    case 48u: goto L_088BC630;
    case 49u: goto L_088BC658;
    case 50u: goto L_088BC66C;
    case 51u: goto L_088BC694;
    case 52u: goto L_088BC6AC;
    case 53u: goto L_088BC6B4;
    case 54u: goto L_088BC6BC;
    case 55u: goto L_088BC820;
    case 56u: goto L_088BC834;
    case 57u: goto L_088BC858;
    case 58u: goto L_088BC874;
    case 59u: goto L_088BC894;
    case 60u: goto L_088BC8B4;
    case 61u: goto L_088BC8DC;
    case 62u: goto L_088BC9D4;
    case 63u: goto L_088BC9D8;
    case 64u: goto L_088BC9E0;
    case 65u: goto L_088BC9E8;
    case 66u: goto L_088BCA04;
    case 67u: goto L_088BCA2C;
    case 68u: goto L_088BCA40;
    case 69u: goto L_088BCA68;
    case 70u: goto L_088BCA80;
    case 71u: goto L_088BCB24;
    case 72u: goto L_088BCB28;
    case 73u: goto L_088BCB30;
    case 74u: goto L_088BCB38;
    case 75u: goto L_088BCB50;
    case 76u: goto L_088BCB78;
    case 77u: goto L_088BCB8C;
    case 78u: goto L_088BCBB4;
    case 79u: goto L_088BCBCC;
    case 80u: goto L_088BCBD4;
    case 81u: goto L_088BCBDC;
    case 82u: goto L_088BCD40;
    case 83u: goto L_088BCD44;
    case 84u: goto L_088BCD6C;
    case 85u: goto L_088BCD94;
    case 86u: goto L_088BCDAC;
    case 87u: goto L_088BCDD4;
    case 88u: goto L_088BCDDC;
    case 89u: goto L_088BCE04;
    case 90u: goto L_088BCF38;
    case 91u: goto L_088BCF5C;
    case 92u: goto L_088BCF68;
    case 93u: goto L_088BCF7C;
    case 94u: goto L_088BCF94;
    case 95u: goto L_088BCFF0;
    case 96u: goto L_088BD048;
    case 97u: goto L_088BD064;
    case 98u: goto L_088BD19C;
    case 99u: goto L_088BD1A0;
    case 100u: goto L_088BD1A8;
    case 101u: goto L_088BD1B0;
    case 102u: goto L_088BD1CC;
    case 103u: goto L_088BD1F4;
    case 104u: goto L_088BD208;
    case 105u: goto L_088BD230;
    case 106u: goto L_088BD248;
    case 107u: goto L_088BD2DC;
    case 108u: goto L_088BD308;
    case 109u: goto L_088BD480;
    case 110u: goto L_088BD484;
    case 111u: goto L_088BD4A8;
    case 112u: goto L_088BD4D0;
    case 113u: goto L_088BD4E8;
    case 114u: goto L_088BD510;
    case 115u: goto L_088BD518;
    case 116u: goto L_088BD540;
    case 117u: goto L_088BD5A0;
    case 118u: goto L_088BD5AC;
    case 119u: goto L_088BD5B8;
    case 120u: goto L_088BD5C0;
    case 121u: goto L_088BD5D4;
    case 122u: goto L_088BD5F8;
    case 123u: goto L_088BD62C;
    case 124u: goto L_088BD69C;
    case 125u: goto L_088BD830;
    case 126u: goto L_088BD834;
    case 127u: goto L_088BD858;
    case 128u: goto L_088BD880;
    case 129u: goto L_088BD898;
    case 130u: goto L_088BD8C0;
    case 131u: goto L_088BD8C8;
    case 132u: goto L_088BD8E8;
    case 133u: goto L_088BD8F0;
    case 134u: goto L_088BD91C;
    case 135u: goto L_088BD928;
    case 136u: goto L_088BD930;
    case 137u: goto L_088BD954;
    case 138u: goto L_088BD9B4;
    case 139u: goto L_088BDA0C;
    case 140u: goto L_088BDA28;
    case 141u: goto L_088BDB50;
    case 142u: goto L_088BDB54;
    case 143u: goto L_088BDB5C;
    case 144u: goto L_088BDB64;
    case 145u: goto L_088BDB80;
    case 146u: goto L_088BDBA8;
    case 147u: goto L_088BDBBC;
    case 148u: goto L_088BDBE4;
    case 149u: goto L_088BDBFC;
    case 150u: goto L_088BDC88;
    case 151u: goto L_088BDDFC;
    case 152u: goto L_088BDE00;
    case 153u: goto L_088BDE24;
    case 154u: goto L_088BDE4C;
    case 155u: goto L_088BDE64;
    case 156u: goto L_088BDE8C;
    case 157u: goto L_088BDE94;
    case 158u: goto L_088BDEBC;
    case 159u: goto L_088BDF08;
    case 160u: goto L_088BDF14;
    case 161u: goto L_088BDF24;
    case 162u: goto L_088BDF2C;
    case 163u: goto L_088BDF40;
    case 164u: goto L_088BDF64;
    case 165u: goto L_088BDF98;
    case 166u: goto L_088BE014;
    case 167u: goto L_088BE1A8;
    case 168u: goto L_088BE1AC;
    case 169u: goto L_088BE1D0;
    case 170u: goto L_088BE1F8;
    case 171u: goto L_088BE210;
    case 172u: goto L_088BE238;
    case 173u: goto L_088BE240;
    case 174u: goto L_088BE260;
    case 175u: goto L_088BE284;
    case 176u: goto L_088BE350;
    case 177u: goto L_088BE374;
    case 178u: goto L_088BE384;
    case 179u: goto L_088BE390;
    case 180u: goto L_088BE3B0;
    case 181u: goto L_088BE4C0;
    case 182u: goto L_088BE4C4;
    case 183u: goto L_088BE4CC;
    case 184u: goto L_088BE4D8;
    case 185u: goto L_088BE4EC;
    case 186u: goto L_088BE514;
    case 187u: goto L_088BE528;
    case 188u: goto L_088BE54C;
    case 189u: goto L_088BE560;
    case 190u: goto L_088BE588;
    case 191u: goto L_088BE594;
    case 192u: goto L_088BE5BC;
    case 193u: goto L_088BE5CC;
    case 194u: goto L_088BE5DC;
    case 195u: goto L_088BE5F8;
    case 196u: goto L_088BE708;
    case 197u: goto L_088BE70C;
    case 198u: goto L_088BE714;
    case 199u: goto L_088BE720;
    case 200u: goto L_088BE734;
    case 201u: goto L_088BE75C;
    case 202u: goto L_088BE770;
    case 203u: goto L_088BE794;
    case 204u: goto L_088BE7A8;
    case 205u: goto L_088BE7D4;
    case 206u: goto L_088BE808;
    case 207u: goto L_088BE818;
    case 208u: goto L_088BE868;
    case 209u: goto L_088BE874;
    case 210u: goto L_088BE87C;
    case 211u: goto L_088BE884;
    case 212u: goto L_088BE89C;
    case 213u: goto L_088BE8B4;
    case 214u: goto L_088BE8C8;
    case 215u: goto L_088BE8D8;
    case 216u: goto L_088BE8E8;
    case 217u: goto L_088BE8F4;
    case 218u: goto L_088BE910;
    case 219u: goto L_088BE918;
    case 220u: goto L_088BE928;
    case 221u: goto L_088BE934;
    case 222u: goto L_088BE94C;
    case 223u: goto L_088BE958;
    case 224u: goto L_088BE960;
    case 225u: goto L_088BE964;
    case 226u: goto L_088BE970;
    case 227u: goto L_088BE988;
    case 228u: goto L_088BE990;
    case 229u: goto L_088BE994;
    case 230u: goto L_088BE99C;
    case 231u: goto L_088BE9AC;
    case 232u: goto L_088BE9B8;
    case 233u: goto L_088BE9D4;
    case 234u: goto L_088BE9DC;
    case 235u: goto L_088BE9E0;
    case 236u: goto L_088BE9F0;
    case 237u: goto L_088BE9F4;
    case 238u: goto L_088BE9FC;
    case 239u: goto L_088BEA04;
    case 240u: goto L_088BEA0C;
    case 241u: goto L_088BEA3C;
    case 242u: goto L_088BEAA0;
    case 243u: goto L_088BEAD4;
    case 244u: goto L_088BEAF0;
    case 245u: goto L_088BEAF8;
    case 246u: goto L_088BEB1C;
    case 247u: goto L_088BEB24;
    case 248u: goto L_088BEB48;
    case 249u: goto L_088BEB50;
    case 250u: goto L_088BEB70;
    case 251u: goto L_088BEB78;
    case 252u: goto L_088BEB88;
    case 253u: goto L_088BEB90;
    case 254u: goto L_088BEB94;
    case 255u: goto L_088BEBC8;
    case 256u: goto L_088BEBFC;
    case 257u: goto L_088BEC30;
    case 258u: goto L_088BEC64;
    case 259u: goto L_088BEC90;
    case 260u: goto L_088BECB0;
    case 261u: goto L_088BECB8;
    case 262u: goto L_088BECE0;
    case 263u: goto L_088BECE8;
    case 264u: goto L_088BECF0;
    case 265u: goto L_088BECF8;
    case 266u: goto L_088BED00;
    case 267u: goto L_088BED08;
    case 268u: goto L_088BED30;
    case 269u: goto L_088BED38;
    case 270u: goto L_088BED44;
    case 271u: goto L_088BED4C;
    case 272u: goto L_088BED74;
    case 273u: goto L_088BED7C;
    case 274u: goto L_088BED88;
    case 275u: goto L_088BED8C;
    case 276u: goto L_088BEDBC;
    case 277u: goto L_088BEE20;
    case 278u: goto L_088BEE54;
    case 279u: goto L_088BEE70;
    case 280u: goto L_088BEE78;
    case 281u: goto L_088BEE9C;
    case 282u: goto L_088BEEA4;
    case 283u: goto L_088BEEC8;
    case 284u: goto L_088BEED0;
    case 285u: goto L_088BEEF0;
    case 286u: goto L_088BEEF8;
    case 287u: goto L_088BEF08;
    case 288u: goto L_088BEF10;
    case 289u: goto L_088BEF14;
    case 290u: goto L_088BEF48;
    case 291u: goto L_088BEF7C;
    case 292u: goto L_088BEFB0;
    case 293u: goto L_088BEFE4;
    case 294u: goto L_088BF010;
    case 295u: goto L_088BF030;
    case 296u: goto L_088BF038;
    case 297u: goto L_088BF060;
    case 298u: goto L_088BF068;
    case 299u: goto L_088BF070;
    case 300u: goto L_088BF078;
    case 301u: goto L_088BF080;
    case 302u: goto L_088BF088;
    case 303u: goto L_088BF0B0;
    case 304u: goto L_088BF0B8;
    case 305u: goto L_088BF0C4;
    case 306u: goto L_088BF0CC;
    case 307u: goto L_088BF0F4;
    case 308u: goto L_088BF0FC;
    case 309u: goto L_088BF108;
    case 310u: goto L_088BF10C;
    case 311u: goto L_088BF13C;
    case 312u: goto L_088BF178;
    case 313u: goto L_088BF180;
    case 314u: goto L_088BF194;
    case 315u: goto L_088BF1A4;
    case 316u: goto L_088BF1AC;
    case 317u: goto L_088BF1B4;
    case 318u: goto L_088BF1C8;
    case 319u: goto L_088BF1D4;
    case 320u: goto L_088BF1DC;
    case 321u: goto L_088BF1E4;
    case 322u: goto L_088BF1EC;
    case 323u: goto L_088BF1F8;
    case 324u: goto L_088BF23C;
    case 325u: goto L_088BF288;
    case 326u: goto L_088BF290;
    case 327u: goto L_088BF298;
    case 328u: goto L_088BF2A4;
    case 329u: goto L_088BF2B8;
    case 330u: goto L_088BF2C4;
    case 331u: goto L_088BF398;
    case 332u: goto L_088BF3CC;
    case 333u: goto L_088BF408;
    case 334u: goto L_088BF43C;
    case 335u: goto L_088BF454;
    case 336u: goto L_088BF47C;
    case 337u: goto L_088BF4B0;
    case 338u: goto L_088BF4C8;
    case 339u: goto L_088BF4F0;
    case 340u: goto L_088BF51C;
    case 341u: goto L_088BF540;
    case 342u: goto L_088BF570;
    case 343u: goto L_088BF594;
    case 344u: goto L_088BF5B8;
    case 345u: goto L_088BF5DC;
    case 346u: goto L_088BF5E4;
    case 347u: goto L_088BF5E8;
    case 348u: goto L_088BF63C;
    case 349u: goto L_088BF668;
    case 350u: goto L_088BF670;
    case 351u: goto L_088BF680;
    case 352u: goto L_088BF69C;
    case 353u: goto L_088BF6C0;
    case 354u: goto L_088BF6E0;
    case 355u: goto L_088BF724;
    case 356u: goto L_088BF73C;
    case 357u: goto L_088BF740;
    case 358u: goto L_088BF75C;
    case 359u: goto L_088BF76C;
    case 360u: goto L_088BF774;
    case 361u: goto L_088BF798;
    case 362u: goto L_088BF7D0;
    case 363u: goto L_088BF800;
    case 364u: goto L_088BF818;
    case 365u: goto L_088BF83C;
    case 366u: goto L_088BF844;
    case 367u: goto L_088BF880;
    case 368u: goto L_088BF8BC;
    case 369u: goto L_088BF8CC;
    case 370u: goto L_088BF8F0;
    case 371u: goto L_088BF8FC;
    case 372u: goto L_088BF950;
    case 373u: goto L_088BF974;
    case 374u: goto L_088BFA6C;
    case 375u: goto L_088BFA70;
    case 376u: goto L_088BFA88;
    case 377u: goto L_088BFAB0;
    case 378u: goto L_088BFAC8;
    case 379u: goto L_088BFAD0;
    case 380u: goto L_088BFAD4;
    case 381u: goto L_088BFB08;
    case 382u: goto L_088BFB34;
    case 383u: goto L_088BFB3C;
    case 384u: goto L_088BFC00;
    case 385u: goto L_088BFC98;
    case 386u: goto L_088BFCC4;
    case 387u: goto L_088BFCE4;
    case 388u: goto L_088BFCF4;
    case 389u: goto L_088BFCF8;
    case 390u: goto L_088BFD00;
    case 391u: goto L_088BFD14;
    case 392u: goto L_088BFD60;
    case 393u: goto L_088BFD70;
    case 394u: goto L_088BFD8C;
    case 395u: goto L_088BFDA0;
    case 396u: goto L_088BFDC0;
    case 397u: goto L_088BFDCC;
    case 398u: goto L_088BFDDC;
    case 399u: goto L_088BFE10;
    case 400u: goto L_088BFE40;
    case 401u: goto L_088BFE70;
    case 402u: goto L_088BFEEC;
    case 403u: goto L_088BFEFC;
    case 404u: goto L_088BFF04;
    case 405u: goto L_088BFF34;
    case 406u: goto L_088BFFBC;
    case 407u: goto L_088BFFF8;
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
L_088BC000:
    ctx.gpr[3] = (aot_mem.aot_direct_load32(ctx.gpr[10] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(96), ctx.gpr[3]);
    ctx.gpr[3] = (aot_mem.aot_direct_load32(ctx.gpr[10] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(100), ctx.gpr[3]);
    ctx.gpr[3] = (aot_mem.aot_direct_load32(ctx.gpr[10] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(104), ctx.gpr[3]);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(108), static_cast<std::uint8_t>(0u));
    ctx.gpr[3] = (ctx.gpr[11] | 0u);
    ctx.gpr[13] = (aot_mem.aot_direct_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.gpr[12] = (ctx.gpr[2] | 0u);
    ctx.gpr[14] = (aot_mem.aot_direct_load32(ctx.gpr[12] + static_cast<std::uint32_t>(0)));
    ctx.gpr[13] = (ctx.gpr[13] ^ ctx.gpr[14]);
    ctx.gpr[13] = (0u < ctx.gpr[13] ? 1u : 0u);
    ctx.gpr[13] = (ctx.gpr[13] & 255u);
    if (ctx.gpr[13] == 0u) {
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(124), aot_gpr_4);
        goto L_088BC0A0;
    }
    goto L_088BC040;
L_088BC040:
    ctx.gpr[13] = (ctx.gpr[11] | 0u);
    goto L_088BC044;
L_088BC044:
    ctx.gpr[14] = (aot_mem.aot_direct_load32(ctx.gpr[13] + static_cast<std::uint32_t>(0)));
    ctx.gpr[14] = (ctx.gpr[14] + static_cast<std::uint32_t>(2));
    aot_mem.aot_direct_store32(ctx.gpr[13] + static_cast<std::uint32_t>(0), ctx.gpr[14]);
    ctx.gpr[15] = (aot_mem.aot_direct_load32(ctx.gpr[13] + static_cast<std::uint32_t>(8)));
    if (ctx.gpr[14] != ctx.gpr[15]) {
    ctx.gpr[13] = (aot_mem.aot_direct_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
        goto L_088BC084;
    }
    goto L_088BC05C;
L_088BC05C:
    ctx.gpr[14] = (aot_mem.aot_direct_load32(ctx.gpr[13] + static_cast<std::uint32_t>(12)));
    ctx.gpr[14] = (ctx.gpr[14] + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(ctx.gpr[13] + static_cast<std::uint32_t>(12), ctx.gpr[14]);
    ctx.gpr[14] = (aot_mem.aot_direct_load32(ctx.gpr[14] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(ctx.gpr[13] + static_cast<std::uint32_t>(4), ctx.gpr[14]);
    ctx.gpr[14] = (ctx.gpr[14] + static_cast<std::uint32_t>(128));
    aot_mem.aot_direct_store32(ctx.gpr[13] + static_cast<std::uint32_t>(8), ctx.gpr[14]);
    ctx.gpr[14] = (aot_mem.aot_direct_load32(ctx.gpr[13] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(ctx.gpr[13] + static_cast<std::uint32_t>(0), ctx.gpr[14]);
    ctx.gpr[13] = (aot_mem.aot_direct_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    goto L_088BC084;
L_088BC084:
    ctx.gpr[14] = (aot_mem.aot_direct_load32(ctx.gpr[12] + static_cast<std::uint32_t>(0)));
    ctx.gpr[13] = (ctx.gpr[13] ^ ctx.gpr[14]);
    ctx.gpr[13] = (0u < ctx.gpr[13] ? 1u : 0u);
    ctx.gpr[13] = (ctx.gpr[13] & 255u);
    { const bool branch_taken = ctx.gpr[13] != 0u;
    ctx.gpr[13] = (ctx.gpr[11] | 0u);
      if (branch_taken) {
          goto L_088BC044;
      }
      goto L_088BC09C;
    }
L_088BC09C:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(124), aot_gpr_4);
    goto L_088BC0A0;
L_088BC0A0:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(120), aot_gpr_5);
    aot_gpr_4 = (aot_gpr_6 | 0u);
    ctx.gpr[31] = (0x088BC0B0u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0217_entry, 217u, 121u, 0x08B6876Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088BC0B0u) goto L_088BC0B0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088BC0B0:
    ctx.gpr[2] = (aot_gpr_29 + static_cast<std::uint32_t>(92));
    ctx.gpr[11] = (aot_gpr_29 + static_cast<std::uint32_t>(76));
    ctx.gpr[10] = (aot_gpr_29 + static_cast<std::uint32_t>(60));
    ctx.gpr[9] = (aot_gpr_29 + static_cast<std::uint32_t>(44));
    aot_gpr_8 = (aot_gpr_29 + static_cast<std::uint32_t>(28));
    aot_gpr_7 = (aot_gpr_29 + static_cast<std::uint32_t>(12));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(120)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(124)));
    goto L_088BC0D0;
L_088BC0D0:
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(56));
    goto L_088BC0D4;
L_088BC0D4:
    { const bool branch_taken = aot_gpr_5 != aot_gpr_4;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0045_entry, 45u, 785u, 0x088BBF48u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_088BC0DC;
    }
L_088BC0DC:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_088BC0E0;
L_088BC0E0:
    { const bool branch_taken = aot_gpr_6 == 0u;
      if (branch_taken) {
          goto L_088BC0F0;
      }
      goto L_088BC0E8;
    }
L_088BC0E8:
    ctx.gpr[31] = (0x088BC0F0u);
    aot_gpr_4 = (aot_gpr_6 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE398, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, ctx.gpr[31]); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088BC0F0u) goto L_088BC0F0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088BC0F0:
    aot_gpr_4 = (ctx.gpr[17] << 6u);
    aot_gpr_5 = (ctx.gpr[17] << 3u);
    aot_gpr_4 = (aot_gpr_4 - aot_gpr_5);
    aot_gpr_4 = (ctx.gpr[18] + aot_gpr_4);
    { const std::uint32_t aot_run_words[3]{ctx.gpr[18], ctx.gpr[19], aot_gpr_4};
      aot_mem.aot_direct_store32_block(ctx.gpr[16] + static_cast<std::uint32_t>(0), aot_run_words); }
    { std::uint32_t aot_run_words[5]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(180), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      ctx.gpr[31] = aot_run_words[4];
    }
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(208));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088BC128:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-176));
    { const std::uint32_t aot_run_words[3]{ctx.gpr[16], ctx.gpr[17], ctx.gpr[31]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(164), aot_run_words); }
    ctx.gpr[17] = (aot_gpr_5 | 0u);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    ctx.gpr[31] = (0x088BC148u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0045_entry, 45u, 620u, 0x088BAF70u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088BC148u) goto L_088BC148;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088BC148:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_088BC3A8;
      }
      goto L_088BC150;
    }
L_088BC150:
    { const std::uint32_t aot_run_words[14]{0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    ctx.gpr[31] = (0x088BC190u);
    aot_gpr_4 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0045_entry, 45u, 737u, 0x088BB930u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088BC190u) goto L_088BC190;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088BC190:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr_5 == aot_gpr_6;
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088BC224;
      }
      goto L_088BC1A0;
    }
L_088BC1A0:
    aot_gpr_6 = (aot_gpr_5 | 0u);
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(56));
      if (branch_taken) {
          goto L_088BC1FC;
      }
      goto L_088BC1AC;
    }
L_088BC1AC:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(160), aot_gpr_6);
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store8(aot_gpr_6 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_4));
    ctx.gpr[31] = (0x088BC1C4u);
    aot_gpr_4 = (aot_gpr_6 + static_cast<std::uint32_t>(4));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0045_entry, 45u, 739u, 0x088BB990u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088BC1C4u) goto L_088BC1C4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088BC1C4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(160)));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(44));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(44))))));
    aot_mem.aot_direct_store16(aot_gpr_5 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_6));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(46));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(46))))));
    aot_mem.aot_direct_store16(aot_gpr_5 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_6));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(48)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(48), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(52)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(52), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(56));
    goto L_088BC1FC;
L_088BC1FC:
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), aot_gpr_5);
    { std::uint32_t aot_run_words[7]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_run_words);
      aot_gpr_5 = aot_run_words[0];
      aot_gpr_6 = aot_run_words[1];
      aot_gpr_7 = aot_run_words[2];
      aot_gpr_8 = aot_run_words[3];
      ctx.gpr[9] = aot_run_words[4];
      ctx.gpr[10] = aot_run_words[5];
      ctx.gpr[11] = aot_run_words[6];
    }
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_088BC264;
      }
      goto L_088BC224;
    }
L_088BC224:
    aot_gpr_4 = (ctx.gpr[16] + static_cast<std::uint32_t>(12));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(0u));
    aot_gpr_7 = (aot_gpr_29 + static_cast<std::uint32_t>(56));
    aot_gpr_6 = (aot_gpr_29 | 0u);
    aot_gpr_8 = (0u | 1u);
    ctx.gpr[31] = (0x088BC240u);
    ctx.gpr[9] = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0045_entry, 45u, 750u, 0x088BBBF8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088BC240u) goto L_088BC240;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088BC240:
    { std::uint32_t aot_run_words[8]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_run_words);
      aot_gpr_5 = aot_run_words[0];
      aot_gpr_6 = aot_run_words[1];
      aot_gpr_7 = aot_run_words[2];
      aot_gpr_8 = aot_run_words[3];
      ctx.gpr[9] = aot_run_words[4];
      ctx.gpr[10] = aot_run_words[5];
      ctx.gpr[11] = aot_run_words[6];
      ctx.gpr[2] = aot_run_words[7];
    }
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(4));
    goto L_088BC264;
L_088BC264:
    { const std::uint32_t aot_run_words[4]{aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(60), aot_run_words); }
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(60));
    { const std::uint32_t aot_run_words[4]{ctx.gpr[9], ctx.gpr[10], ctx.gpr[11], ctx.gpr[2]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(76), aot_run_words); }
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(76));
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(92), aot_gpr_7);
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(96), aot_gpr_7);
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(100), aot_gpr_7);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(104), aot_gpr_5);
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(92));
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(108), aot_gpr_7);
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(112), aot_gpr_7);
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(116), aot_gpr_7);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(120), aot_gpr_6);
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(108));
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(124), aot_gpr_7);
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(128), aot_gpr_7);
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(132), aot_gpr_7);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(136), aot_gpr_5);
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(124));
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(140), aot_gpr_7);
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(144), aot_gpr_7);
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(148), aot_gpr_7);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(152), aot_gpr_6);
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(140));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(156), static_cast<std::uint8_t>(0u));
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_8 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    aot_gpr_7 = (aot_gpr_7 ^ aot_gpr_8);
    aot_gpr_7 = (0u < aot_gpr_7 ? 1u : 0u);
    aot_gpr_7 = (aot_gpr_7 & 255u);
    { const bool branch_taken = aot_gpr_7 == 0u;
      if (branch_taken) {
          goto L_088BC398;
      }
      goto L_088BC33C;
    }
L_088BC33C:
    aot_gpr_7 = (aot_gpr_5 | 0u);
    goto L_088BC340;
L_088BC340:
    aot_gpr_8 = (aot_mem.aot_direct_load32(aot_gpr_7 + static_cast<std::uint32_t>(0)));
    aot_gpr_8 = (aot_gpr_8 + static_cast<std::uint32_t>(2));
    aot_mem.aot_direct_store32(aot_gpr_7 + static_cast<std::uint32_t>(0), aot_gpr_8);
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_7 + static_cast<std::uint32_t>(8)));
    if (aot_gpr_8 != ctx.gpr[9]) {
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
        goto L_088BC380;
    }
    goto L_088BC358;
L_088BC358:
    aot_gpr_8 = (aot_mem.aot_direct_load32(aot_gpr_7 + static_cast<std::uint32_t>(12)));
    aot_gpr_8 = (aot_gpr_8 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_7 + static_cast<std::uint32_t>(12), aot_gpr_8);
    aot_gpr_8 = (aot_mem.aot_direct_load32(aot_gpr_8 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_7 + static_cast<std::uint32_t>(4), aot_gpr_8);
    aot_gpr_8 = (aot_gpr_8 + static_cast<std::uint32_t>(128));
    aot_mem.aot_direct_store32(aot_gpr_7 + static_cast<std::uint32_t>(8), aot_gpr_8);
    aot_gpr_8 = (aot_mem.aot_direct_load32(aot_gpr_7 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_7 + static_cast<std::uint32_t>(0), aot_gpr_8);
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    goto L_088BC380;
L_088BC380:
    aot_gpr_8 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    aot_gpr_7 = (aot_gpr_7 ^ aot_gpr_8);
    aot_gpr_7 = (0u < aot_gpr_7 ? 1u : 0u);
    aot_gpr_7 = (aot_gpr_7 & 255u);
    { const bool branch_taken = aot_gpr_7 != 0u;
    aot_gpr_7 = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_088BC340;
      }
      goto L_088BC398;
    }
L_088BC398:
    ctx.gpr[31] = (0x088BC3A0u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0217_entry, 217u, 121u, 0x08B6876Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088BC3A0u) goto L_088BC3A0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088BC3A0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(-56), static_cast<std::uint8_t>(ctx.gpr[17]));
    goto L_088BC3A8;
L_088BC3A8:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(164), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[31] = aot_run_words[2];
    }
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(176));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088BC3BC:
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (aot_gpr_4 ^ aot_gpr_5);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088BC3CC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-240));
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[11] = aot_run_words[0];
      ctx.gpr[2] = aot_run_words[1];
      ctx.gpr[3] = aot_run_words[2];
    }
    { const std::uint32_t aot_run_words[3]{ctx.gpr[11], ctx.gpr[2], ctx.gpr[3]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words); }
    ctx.gpr[11] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), ctx.gpr[11]);
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_6 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_gpr_5 = aot_run_words[0];
      ctx.gpr[12] = aot_run_words[1];
      ctx.gpr[13] = aot_run_words[2];
    }
    { const std::uint32_t aot_run_words[3]{aot_gpr_5, ctx.gpr[12], ctx.gpr[13]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(48), aot_run_words); }
    ctx.gpr[14] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(60), ctx.gpr[14]);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    aot_gpr_5 = (aot_gpr_8 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(240), ctx.gpr[10]);
    aot_gpr_7 = (aot_mem.aot_direct_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(76), aot_gpr_7);
    aot_gpr_7 = (aot_mem.aot_direct_load32(ctx.gpr[9] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(80), aot_gpr_7);
    aot_gpr_7 = (aot_mem.aot_direct_load32(ctx.gpr[9] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(84), aot_gpr_7);
    aot_gpr_7 = (aot_mem.aot_direct_load32(ctx.gpr[9] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(88), aot_gpr_7);
    aot_gpr_7 = (aot_gpr_29 + static_cast<std::uint32_t>(76));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(0u));
    aot_gpr_8 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    { const std::uint32_t aot_run_words[4]{aot_gpr_8, ctx.gpr[2], ctx.gpr[3], ctx.gpr[11]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(164), aot_run_words); }
    aot_gpr_8 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(48)));
    { const std::uint32_t aot_run_words[4]{aot_gpr_8, ctx.gpr[12], ctx.gpr[13], ctx.gpr[14]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(180), aot_run_words); }
    aot_gpr_8 = (aot_mem.aot_direct_load32(aot_gpr_7 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(96), aot_gpr_8);
    aot_gpr_8 = (aot_mem.aot_direct_load32(aot_gpr_7 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(100), aot_gpr_8);
    aot_gpr_8 = (aot_mem.aot_direct_load32(aot_gpr_7 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(104), aot_gpr_8);
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_7 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(108), aot_gpr_7);
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(164)));
    aot_gpr_8 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(180)));
    aot_gpr_7 = (aot_gpr_7 ^ aot_gpr_8);
    aot_gpr_7 = (0u < aot_gpr_7 ? 1u : 0u);
    aot_gpr_7 = (aot_gpr_7 & 255u);
    { const bool branch_taken = aot_gpr_7 == 0u;
      if (branch_taken) {
          goto L_088BC550;
      }
      goto L_088BC4A8;
    }
L_088BC4A8:
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(96)));
    goto L_088BC4AC;
L_088BC4AC:
    { const bool branch_taken = aot_gpr_7 == 0u;
    aot_gpr_8 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(164)));
      if (branch_taken) {
          goto L_088BC4BC;
      }
      goto L_088BC4B4;
    }
L_088BC4B4:
    aot_gpr_8 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_8 + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_direct_store16(aot_gpr_7 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_8));
    goto L_088BC4BC;
L_088BC4BC:
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(164)));
    aot_gpr_7 = (aot_gpr_7 + static_cast<std::uint32_t>(2));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(164), aot_gpr_7);
    aot_gpr_8 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(172)));
    if (aot_gpr_7 != aot_gpr_8) {
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(96)));
        goto L_088BC4FC;
    }
    goto L_088BC4D4;
L_088BC4D4:
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(176)));
    aot_gpr_7 = (aot_gpr_7 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(176), aot_gpr_7);
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_7 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(168), aot_gpr_7);
    aot_gpr_7 = (aot_gpr_7 + static_cast<std::uint32_t>(128));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(172), aot_gpr_7);
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(168)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(164), aot_gpr_7);
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(96)));
    goto L_088BC4FC;
L_088BC4FC:
    aot_gpr_7 = (aot_gpr_7 + static_cast<std::uint32_t>(2));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(96), aot_gpr_7);
    aot_gpr_8 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(104)));
    if (aot_gpr_7 != aot_gpr_8) {
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(164)));
        goto L_088BC538;
    }
    goto L_088BC510;
L_088BC510:
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(108)));
    aot_gpr_7 = (aot_gpr_7 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(108), aot_gpr_7);
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_7 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(100), aot_gpr_7);
    aot_gpr_7 = (aot_gpr_7 + static_cast<std::uint32_t>(128));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(104), aot_gpr_7);
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(100)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(96), aot_gpr_7);
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(164)));
    goto L_088BC538;
L_088BC538:
    aot_gpr_8 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(180)));
    aot_gpr_7 = (aot_gpr_7 ^ aot_gpr_8);
    aot_gpr_7 = (0u < aot_gpr_7 ? 1u : 0u);
    aot_gpr_7 = (aot_gpr_7 & 255u);
    if (aot_gpr_7 != 0u) {
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(96)));
        goto L_088BC4AC;
    }
    goto L_088BC550;
L_088BC550:
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(112), aot_gpr_7);
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(116), aot_gpr_7);
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(120), aot_gpr_7);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(124), aot_gpr_6);
    aot_gpr_7 = (aot_gpr_29 + static_cast<std::uint32_t>(112));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(128), aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(132), aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(136), aot_gpr_6);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(140), aot_gpr_5);
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(128));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(96)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(144), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(100)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(148), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(104)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(152), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(108)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(156), aot_gpr_5);
    aot_gpr_8 = (aot_gpr_29 + static_cast<std::uint32_t>(144));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(160), static_cast<std::uint8_t>(0u));
    aot_gpr_5 = (aot_gpr_7 | 0u);
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_8 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_7);
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_8 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_7);
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_8 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), aot_gpr_7);
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_8 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(12), aot_gpr_7);
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_8 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    aot_gpr_7 = (aot_gpr_7 ^ aot_gpr_8);
    aot_gpr_7 = (0u < aot_gpr_7 ? 1u : 0u);
    aot_gpr_7 = (aot_gpr_7 & 255u);
    { const bool branch_taken = aot_gpr_7 == 0u;
      if (branch_taken) {
          goto L_088BC6AC;
      }
      goto L_088BC600;
    }
L_088BC600:
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    goto L_088BC604;
L_088BC604:
    { const bool branch_taken = aot_gpr_7 == 0u;
    aot_gpr_8 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088BC614;
      }
      goto L_088BC60C;
    }
L_088BC60C:
    aot_gpr_8 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_8 + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_direct_store16(aot_gpr_7 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_8));
    goto L_088BC614;
L_088BC614:
    aot_gpr_7 = (aot_gpr_5 | 0u);
    aot_gpr_8 = (aot_mem.aot_direct_load32(aot_gpr_7 + static_cast<std::uint32_t>(0)));
    aot_gpr_8 = (aot_gpr_8 + static_cast<std::uint32_t>(2));
    aot_mem.aot_direct_store32(aot_gpr_7 + static_cast<std::uint32_t>(0), aot_gpr_8);
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_7 + static_cast<std::uint32_t>(8)));
    if (aot_gpr_8 != ctx.gpr[9]) {
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
        goto L_088BC658;
    }
    goto L_088BC630;
L_088BC630:
    aot_gpr_8 = (aot_mem.aot_direct_load32(aot_gpr_7 + static_cast<std::uint32_t>(12)));
    aot_gpr_8 = (aot_gpr_8 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_7 + static_cast<std::uint32_t>(12), aot_gpr_8);
    aot_gpr_8 = (aot_mem.aot_direct_load32(aot_gpr_8 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_7 + static_cast<std::uint32_t>(4), aot_gpr_8);
    aot_gpr_8 = (aot_gpr_8 + static_cast<std::uint32_t>(128));
    aot_mem.aot_direct_store32(aot_gpr_7 + static_cast<std::uint32_t>(8), aot_gpr_8);
    aot_gpr_8 = (aot_mem.aot_direct_load32(aot_gpr_7 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_7 + static_cast<std::uint32_t>(0), aot_gpr_8);
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    goto L_088BC658;
L_088BC658:
    aot_gpr_7 = (aot_gpr_7 + static_cast<std::uint32_t>(2));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_7);
    aot_gpr_8 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    if (aot_gpr_7 != aot_gpr_8) {
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
        goto L_088BC694;
    }
    goto L_088BC66C;
L_088BC66C:
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(12)));
    aot_gpr_7 = (aot_gpr_7 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(12), aot_gpr_7);
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_7 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_7);
    aot_gpr_7 = (aot_gpr_7 + static_cast<std::uint32_t>(128));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), aot_gpr_7);
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_7);
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    goto L_088BC694;
L_088BC694:
    aot_gpr_8 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    aot_gpr_7 = (aot_gpr_7 ^ aot_gpr_8);
    aot_gpr_7 = (0u < aot_gpr_7 ? 1u : 0u);
    aot_gpr_7 = (aot_gpr_7 & 255u);
    if (aot_gpr_7 != 0u) {
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
        goto L_088BC604;
    }
    goto L_088BC6AC;
L_088BC6AC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088BC6B4;
      }
      goto L_088BC6B4;
    }
L_088BC6B4:
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(240));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088BC6BC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-128));
    aot_gpr_8 = (aot_gpr_6 | 0u);
    aot_gpr_6 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_8 | 0u);
    aot_gpr_8 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_8);
    aot_gpr_8 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_8);
    aot_gpr_8 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_gpr_8);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_gpr_6);
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(12));
    aot_gpr_8 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), aot_gpr_8);
    aot_gpr_8 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_gpr_8);
    aot_gpr_8 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(36), aot_gpr_8);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(40), aot_gpr_5);
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(28));
    aot_gpr_8 = (aot_mem.aot_direct_load32(aot_gpr_7 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(44), aot_gpr_8);
    aot_gpr_8 = (aot_mem.aot_direct_load32(aot_gpr_7 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(48), aot_gpr_8);
    aot_gpr_8 = (aot_mem.aot_direct_load32(aot_gpr_7 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(52), aot_gpr_8);
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_7 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(56), aot_gpr_7);
    aot_gpr_8 = (aot_gpr_29 + static_cast<std::uint32_t>(44));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    aot_gpr_7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(61))))));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(aot_gpr_7));
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(64), aot_gpr_7);
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(68), aot_gpr_7);
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(72), aot_gpr_7);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(76), aot_gpr_6);
    ctx.gpr[9] = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(80), aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(84), aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(88), aot_gpr_6);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(92), aot_gpr_5);
    aot_gpr_7 = (aot_gpr_29 + static_cast<std::uint32_t>(80));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_8 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(96), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_8 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(100), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_8 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(104), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_8 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(108), aot_gpr_5);
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(96));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(112), static_cast<std::uint8_t>(0u));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[9] + static_cast<std::uint32_t>(12)));
    aot_gpr_8 = (aot_mem.aot_direct_load32(aot_gpr_7 + static_cast<std::uint32_t>(12)));
    aot_gpr_5 = (aot_gpr_8 - aot_gpr_5);
    aot_gpr_8 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 2u));
    aot_gpr_8 = (aot_gpr_8 >> 30u);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_8);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 2u));
    aot_gpr_5 = (aot_gpr_5 << 6u);
    aot_gpr_8 = (aot_mem.aot_direct_load32(aot_gpr_7 + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (aot_mem.aot_direct_load32(aot_gpr_7 + static_cast<std::uint32_t>(4)));
    aot_gpr_8 = (aot_gpr_8 - ctx.gpr[10]);
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_8) >> 1u));
    ctx.gpr[10] = (ctx.gpr[10] >> 31u);
    aot_gpr_8 = (aot_gpr_8 + ctx.gpr[10]);
    aot_gpr_8 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_8) >> 1u));
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_8);
    aot_gpr_8 = (aot_mem.aot_direct_load32(ctx.gpr[9] + static_cast<std::uint32_t>(8)));
    ctx.gpr[9] = (aot_mem.aot_direct_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    aot_gpr_8 = (aot_gpr_8 - ctx.gpr[9]);
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_8) >> 1u));
    ctx.gpr[9] = (ctx.gpr[9] >> 31u);
    aot_gpr_8 = (aot_gpr_8 + ctx.gpr[9]);
    aot_gpr_8 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_8) >> 1u));
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_8);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-64));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_5) <= 0;
      if (branch_taken) {
          goto L_088BC8B4;
      }
      goto L_088BC820;
    }
L_088BC820:
    ctx.gpr[9] = (aot_gpr_6 | 0u);
    aot_gpr_8 = (aot_mem.aot_direct_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (aot_mem.aot_direct_load32(ctx.gpr[9] + static_cast<std::uint32_t>(4)));
    if (aot_gpr_8 != ctx.gpr[10]) {
    aot_gpr_8 = (aot_mem.aot_direct_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
        goto L_088BC858;
    }
    goto L_088BC834;
L_088BC834:
    aot_gpr_8 = (aot_mem.aot_direct_load32(ctx.gpr[9] + static_cast<std::uint32_t>(12)));
    aot_gpr_8 = (aot_gpr_8 + static_cast<std::uint32_t>(-4));
    aot_mem.aot_direct_store32(ctx.gpr[9] + static_cast<std::uint32_t>(12), aot_gpr_8);
    aot_gpr_8 = (aot_mem.aot_direct_load32(aot_gpr_8 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(ctx.gpr[9] + static_cast<std::uint32_t>(4), aot_gpr_8);
    aot_gpr_8 = (aot_gpr_8 + static_cast<std::uint32_t>(128));
    aot_mem.aot_direct_store32(ctx.gpr[9] + static_cast<std::uint32_t>(8), aot_gpr_8);
    aot_mem.aot_direct_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), aot_gpr_8);
    aot_gpr_8 = (aot_mem.aot_direct_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    goto L_088BC858;
L_088BC858:
    aot_gpr_8 = (aot_gpr_8 + static_cast<std::uint32_t>(-2));
    aot_mem.aot_direct_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), aot_gpr_8);
    aot_gpr_8 = (aot_gpr_7 | 0u);
    ctx.gpr[10] = (aot_mem.aot_direct_load32(aot_gpr_8 + static_cast<std::uint32_t>(0)));
    ctx.gpr[11] = (aot_mem.aot_direct_load32(aot_gpr_8 + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[10] != ctx.gpr[11];
    ctx.gpr[9] = (aot_mem.aot_direct_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088BC894;
      }
      goto L_088BC874;
    }
L_088BC874:
    ctx.gpr[10] = (aot_mem.aot_direct_load32(aot_gpr_8 + static_cast<std::uint32_t>(12)));
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(-4));
    aot_mem.aot_direct_store32(aot_gpr_8 + static_cast<std::uint32_t>(12), ctx.gpr[10]);
    ctx.gpr[10] = (aot_mem.aot_direct_load32(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_8 + static_cast<std::uint32_t>(4), ctx.gpr[10]);
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(128));
    aot_mem.aot_direct_store32(aot_gpr_8 + static_cast<std::uint32_t>(8), ctx.gpr[10]);
    aot_mem.aot_direct_store32(aot_gpr_8 + static_cast<std::uint32_t>(0), ctx.gpr[10]);
    goto L_088BC894;
L_088BC894:
    ctx.gpr[10] = (aot_mem.aot_direct_load32(aot_gpr_8 + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(-2));
    aot_mem.aot_direct_store32(aot_gpr_8 + static_cast<std::uint32_t>(0), ctx.gpr[10]);
    aot_gpr_8 = (aot_mem.aot_direct_load32(aot_gpr_8 + static_cast<std::uint32_t>(0)));
    aot_gpr_8 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_8 + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_5) > 0;
    aot_mem.aot_direct_store16(ctx.gpr[9] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_8));
      if (branch_taken) {
          goto L_088BC820;
      }
      goto L_088BC8B4;
    }
L_088BC8B4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(12), aot_gpr_5);
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088BC8DC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-240));
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_7 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[11] = aot_run_words[0];
      ctx.gpr[2] = aot_run_words[1];
      ctx.gpr[3] = aot_run_words[2];
    }
    { const std::uint32_t aot_run_words[3]{ctx.gpr[11], ctx.gpr[2], ctx.gpr[3]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_run_words); }
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_7 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(36), aot_gpr_7);
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_8 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_gpr_7 = aot_run_words[0];
      ctx.gpr[11] = aot_run_words[1];
      ctx.gpr[2] = aot_run_words[2];
    }
    { const std::uint32_t aot_run_words[3]{aot_gpr_7, ctx.gpr[11], ctx.gpr[2]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(56), aot_run_words); }
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_8 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(68), aot_gpr_7);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(240), ctx.gpr[10]);
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(76), aot_gpr_7);
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(80), aot_gpr_7);
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(84), aot_gpr_7);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(88), aot_gpr_5);
    aot_gpr_7 = (aot_gpr_29 + static_cast<std::uint32_t>(76));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(92), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(96), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(100), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(104), aot_gpr_5);
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(92));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(108), aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[9] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(112), aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[9] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(116), aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[9] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(120), aot_gpr_6);
    aot_gpr_8 = (aot_gpr_29 + static_cast<std::uint32_t>(108));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(124), static_cast<std::uint8_t>(0u));
    aot_gpr_6 = (aot_gpr_7 | 0u);
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_8 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(128), aot_gpr_7);
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_8 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(132), aot_gpr_7);
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_8 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(136), aot_gpr_7);
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_8 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(140), aot_gpr_7);
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    aot_gpr_8 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_7 = (aot_gpr_7 ^ aot_gpr_8);
    aot_gpr_7 = (0u < aot_gpr_7 ? 1u : 0u);
    aot_gpr_7 = (aot_gpr_7 & 255u);
    { const bool branch_taken = aot_gpr_7 == 0u;
      if (branch_taken) {
          goto L_088BCA80;
      }
      goto L_088BC9D4;
    }
L_088BC9D4:
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(128)));
    goto L_088BC9D8;
L_088BC9D8:
    { const bool branch_taken = aot_gpr_7 == 0u;
    aot_gpr_8 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088BC9E8;
      }
      goto L_088BC9E0;
    }
L_088BC9E0:
    aot_gpr_8 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_8 + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_direct_store16(aot_gpr_7 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_8));
    goto L_088BC9E8;
L_088BC9E8:
    aot_gpr_7 = (aot_gpr_6 | 0u);
    aot_gpr_8 = (aot_mem.aot_direct_load32(aot_gpr_7 + static_cast<std::uint32_t>(0)));
    aot_gpr_8 = (aot_gpr_8 + static_cast<std::uint32_t>(2));
    aot_mem.aot_direct_store32(aot_gpr_7 + static_cast<std::uint32_t>(0), aot_gpr_8);
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_7 + static_cast<std::uint32_t>(8)));
    if (aot_gpr_8 != ctx.gpr[9]) {
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(128)));
        goto L_088BCA2C;
    }
    goto L_088BCA04;
L_088BCA04:
    aot_gpr_8 = (aot_mem.aot_direct_load32(aot_gpr_7 + static_cast<std::uint32_t>(12)));
    aot_gpr_8 = (aot_gpr_8 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_7 + static_cast<std::uint32_t>(12), aot_gpr_8);
    aot_gpr_8 = (aot_mem.aot_direct_load32(aot_gpr_8 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_7 + static_cast<std::uint32_t>(4), aot_gpr_8);
    aot_gpr_8 = (aot_gpr_8 + static_cast<std::uint32_t>(128));
    aot_mem.aot_direct_store32(aot_gpr_7 + static_cast<std::uint32_t>(8), aot_gpr_8);
    aot_gpr_8 = (aot_mem.aot_direct_load32(aot_gpr_7 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_7 + static_cast<std::uint32_t>(0), aot_gpr_8);
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(128)));
    goto L_088BCA2C;
L_088BCA2C:
    aot_gpr_7 = (aot_gpr_7 + static_cast<std::uint32_t>(2));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(128), aot_gpr_7);
    aot_gpr_8 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(136)));
    if (aot_gpr_7 != aot_gpr_8) {
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
        goto L_088BCA68;
    }
    goto L_088BCA40;
L_088BCA40:
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(140)));
    aot_gpr_7 = (aot_gpr_7 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(140), aot_gpr_7);
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_7 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(132), aot_gpr_7);
    aot_gpr_7 = (aot_gpr_7 + static_cast<std::uint32_t>(128));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(136), aot_gpr_7);
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(132)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(128), aot_gpr_7);
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    goto L_088BCA68;
L_088BCA68:
    aot_gpr_8 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_7 = (aot_gpr_7 ^ aot_gpr_8);
    aot_gpr_7 = (0u < aot_gpr_7 ? 1u : 0u);
    aot_gpr_7 = (aot_gpr_7 & 255u);
    if (aot_gpr_7 != 0u) {
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(128)));
        goto L_088BC9D8;
    }
    goto L_088BCA80;
L_088BCA80:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(128)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(144), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(132)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(148), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(136)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(152), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(140)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(156), aot_gpr_5);
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(144));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(160), static_cast<std::uint8_t>(0u));
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_run_words);
      aot_gpr_6 = aot_run_words[0];
      aot_gpr_7 = aot_run_words[1];
      aot_gpr_8 = aot_run_words[2];
    }
    { const std::uint32_t aot_run_words[3]{aot_gpr_6, aot_gpr_7, aot_gpr_8};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(180), aot_run_words); }
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(36)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(192), aot_gpr_6);
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(56), aot_run_words);
      aot_gpr_6 = aot_run_words[0];
      aot_gpr_7 = aot_run_words[1];
      aot_gpr_8 = aot_run_words[2];
    }
    { const std::uint32_t aot_run_words[3]{aot_gpr_6, aot_gpr_7, aot_gpr_8};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(196), aot_run_words); }
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(68)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(208), aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), aot_gpr_6);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(12), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(180)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(196)));
    aot_gpr_5 = (aot_gpr_5 ^ aot_gpr_6);
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_088BCBCC;
      }
      goto L_088BCB24;
    }
L_088BCB24:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    goto L_088BCB28;
L_088BCB28:
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(180)));
      if (branch_taken) {
          goto L_088BCB38;
      }
      goto L_088BCB30;
    }
L_088BCB30:
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_6 + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_direct_store16(aot_gpr_5 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_6));
    goto L_088BCB38;
L_088BCB38:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(180)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(2));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(180), aot_gpr_5);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(188)));
    if (aot_gpr_5 != aot_gpr_6) {
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
        goto L_088BCB78;
    }
    goto L_088BCB50;
L_088BCB50:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(192)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(192), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(184), aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(128));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(188), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(184)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(180), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    goto L_088BCB78;
L_088BCB78:
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(2));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    if (aot_gpr_5 != aot_gpr_6) {
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(180)));
        goto L_088BCBB4;
    }
    goto L_088BCB8C;
L_088BCB8C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(12)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(12), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(128));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(180)));
    goto L_088BCBB4;
L_088BCBB4:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(196)));
    aot_gpr_5 = (aot_gpr_5 ^ aot_gpr_6);
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    if (aot_gpr_5 != 0u) {
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
        goto L_088BCB28;
    }
    goto L_088BCBCC;
L_088BCBCC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088BCBD4;
      }
      goto L_088BCBD4;
    }
L_088BCBD4:
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(240));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088BCBDC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-128));
    aot_gpr_8 = (aot_gpr_7 | 0u);
    aot_gpr_7 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_8 | 0u);
    aot_gpr_8 = (aot_mem.aot_direct_load32(aot_gpr_7 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_8);
    aot_gpr_8 = (aot_mem.aot_direct_load32(aot_gpr_7 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_8);
    aot_gpr_8 = (aot_mem.aot_direct_load32(aot_gpr_7 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_gpr_8);
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_7 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_gpr_7);
    aot_gpr_7 = (aot_gpr_29 + static_cast<std::uint32_t>(12));
    aot_gpr_8 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), aot_gpr_8);
    aot_gpr_8 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_gpr_8);
    aot_gpr_8 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(36), aot_gpr_8);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(40), aot_gpr_6);
    aot_gpr_8 = (aot_gpr_29 + static_cast<std::uint32_t>(28));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(44), aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(48), aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(52), aot_gpr_6);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(56), aot_gpr_5);
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(44));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(61))))));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(aot_gpr_6));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_7 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(64), aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_7 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(68), aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_7 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(72), aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_7 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(76), aot_gpr_6);
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_8 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(80), aot_gpr_7);
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_8 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(84), aot_gpr_7);
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_8 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(88), aot_gpr_7);
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_8 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(92), aot_gpr_7);
    aot_gpr_7 = (aot_gpr_29 + static_cast<std::uint32_t>(80));
    aot_gpr_8 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(96), aot_gpr_8);
    aot_gpr_8 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(100), aot_gpr_8);
    aot_gpr_8 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(104), aot_gpr_8);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(108), aot_gpr_5);
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(96));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(112), static_cast<std::uint8_t>(0u));
    aot_gpr_8 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(12)));
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_7 + static_cast<std::uint32_t>(12)));
    aot_gpr_8 = (ctx.gpr[9] - aot_gpr_8);
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_8) >> 2u));
    ctx.gpr[9] = (ctx.gpr[9] >> 30u);
    aot_gpr_8 = (aot_gpr_8 + ctx.gpr[9]);
    aot_gpr_8 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_8) >> 2u));
    aot_gpr_8 = (aot_gpr_8 << 6u);
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_7 + static_cast<std::uint32_t>(0)));
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_7 + static_cast<std::uint32_t>(4)));
    aot_gpr_7 = (ctx.gpr[9] - aot_gpr_7);
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_7) >> 1u));
    ctx.gpr[9] = (ctx.gpr[9] >> 31u);
    aot_gpr_7 = (aot_gpr_7 + ctx.gpr[9]);
    aot_gpr_7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_7) >> 1u));
    aot_gpr_7 = (aot_gpr_8 + aot_gpr_7);
    aot_gpr_8 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(8)));
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    aot_gpr_8 = (aot_gpr_8 - ctx.gpr[9]);
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_8) >> 1u));
    ctx.gpr[9] = (ctx.gpr[9] >> 31u);
    aot_gpr_8 = (aot_gpr_8 + ctx.gpr[9]);
    aot_gpr_8 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_8) >> 1u));
    aot_gpr_7 = (aot_gpr_7 + aot_gpr_8);
    aot_gpr_7 = (aot_gpr_7 + static_cast<std::uint32_t>(-64));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_7) <= 0;
      if (branch_taken) {
          goto L_088BCDDC;
      }
      goto L_088BCD40;
    }
L_088BCD40:
    aot_gpr_8 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    goto L_088BCD44;
L_088BCD44:
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[9] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_direct_store16(aot_gpr_8 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[9]));
    aot_gpr_8 = (aot_gpr_6 | 0u);
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_8 + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(2));
    aot_mem.aot_direct_store32(aot_gpr_8 + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    ctx.gpr[10] = (aot_mem.aot_direct_load32(aot_gpr_8 + static_cast<std::uint32_t>(8)));
    if (ctx.gpr[9] != ctx.gpr[10]) {
    aot_gpr_8 = (aot_gpr_5 | 0u);
        goto L_088BCD94;
    }
    goto L_088BCD6C;
L_088BCD6C:
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_8 + static_cast<std::uint32_t>(12)));
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_8 + static_cast<std::uint32_t>(12), ctx.gpr[9]);
    ctx.gpr[9] = (aot_mem.aot_direct_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_8 + static_cast<std::uint32_t>(4), ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(128));
    aot_mem.aot_direct_store32(aot_gpr_8 + static_cast<std::uint32_t>(8), ctx.gpr[9]);
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_8 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_8 + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    aot_gpr_8 = (aot_gpr_5 | 0u);
    goto L_088BCD94;
L_088BCD94:
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_8 + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(2));
    aot_mem.aot_direct_store32(aot_gpr_8 + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    ctx.gpr[10] = (aot_mem.aot_direct_load32(aot_gpr_8 + static_cast<std::uint32_t>(8)));
    if (ctx.gpr[9] != ctx.gpr[10]) {
    aot_gpr_7 = (aot_gpr_7 + static_cast<std::uint32_t>(-1));
        goto L_088BCDD4;
    }
    goto L_088BCDAC;
L_088BCDAC:
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_8 + static_cast<std::uint32_t>(12)));
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_8 + static_cast<std::uint32_t>(12), ctx.gpr[9]);
    ctx.gpr[9] = (aot_mem.aot_direct_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_8 + static_cast<std::uint32_t>(4), ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(128));
    aot_mem.aot_direct_store32(aot_gpr_8 + static_cast<std::uint32_t>(8), ctx.gpr[9]);
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_8 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_8 + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    aot_gpr_7 = (aot_gpr_7 + static_cast<std::uint32_t>(-1));
    goto L_088BCDD4;
L_088BCDD4:
    if (static_cast<std::int32_t>(aot_gpr_7) > 0) {
    aot_gpr_8 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
        goto L_088BCD44;
    }
    goto L_088BCDDC;
L_088BCDDC:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), aot_gpr_6);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(12), aot_gpr_5);
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088BCE04:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-1360));
    { const std::uint32_t aot_run_words[7]{ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[31]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(1320), aot_run_words); }
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    ctx.gpr[18] = (aot_gpr_5 | 0u);
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_6 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_gpr_4 = aot_run_words[0];
      aot_gpr_5 = aot_run_words[1];
      ctx.gpr[9] = aot_run_words[2];
    }
    { const std::uint32_t aot_run_words[3]{aot_gpr_4, aot_gpr_5, ctx.gpr[9]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(36), aot_run_words); }
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(48), aot_gpr_4);
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_7 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_gpr_4 = aot_run_words[0];
      aot_gpr_5 = aot_run_words[1];
      aot_gpr_6 = aot_run_words[2];
    }
    { const std::uint32_t aot_run_words[3]{aot_gpr_4, aot_gpr_5, aot_gpr_6};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(68), aot_run_words); }
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_7 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(80), aot_gpr_4);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr_5 = (aot_gpr_5 - aot_gpr_4);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 2u));
    aot_gpr_6 = (aot_gpr_6 >> 30u);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 2u));
    aot_gpr_5 = (aot_gpr_5 << 6u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr_7 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr_6 = (aot_gpr_6 - aot_gpr_7);
    aot_gpr_7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_6) >> 1u));
    aot_gpr_7 = (aot_gpr_7 >> 31u);
    aot_gpr_6 = (aot_gpr_6 + aot_gpr_7);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_6) >> 1u));
    aot_gpr_7 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (aot_gpr_5 - aot_gpr_6);
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 1u));
    ctx.gpr[10] = (ctx.gpr[10] >> 31u);
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[10]);
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 1u));
    ctx.gpr[19] = (aot_gpr_7 + ctx.gpr[9]);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-64));
    aot_gpr_7 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    aot_gpr_7 = (aot_gpr_7 - aot_gpr_4);
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_7) >> 2u));
    ctx.gpr[9] = (ctx.gpr[9] >> 30u);
    aot_gpr_7 = (aot_gpr_7 + ctx.gpr[9]);
    aot_gpr_7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_7) >> 2u));
    aot_gpr_7 = (aot_gpr_7 << 6u);
    ctx.gpr[9] = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[10] = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[9] = (ctx.gpr[9] - ctx.gpr[10]);
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 1u));
    ctx.gpr[10] = (ctx.gpr[10] >> 31u);
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[10]);
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 1u));
    aot_gpr_7 = (aot_gpr_7 + ctx.gpr[9]);
    ctx.gpr[9] = (aot_gpr_5 - aot_gpr_6);
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 1u));
    ctx.gpr[10] = (ctx.gpr[10] >> 31u);
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[10]);
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 1u));
    ctx.gpr[20] = (aot_gpr_7 + ctx.gpr[9]);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-64));
    aot_gpr_7 = (ctx.gpr[20] >> 1u);
    aot_gpr_7 = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(aot_gpr_7) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_7 == 0u;
    ctx.gpr[17] = (aot_gpr_8 | 0u);
      if (branch_taken) {
          goto L_088BD8F0;
      }
      goto L_088BCF38;
    }
L_088BCF38:
    aot_gpr_7 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr_8 = (aot_gpr_6 - aot_gpr_7);
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_8) >> 1u));
    ctx.gpr[9] = (ctx.gpr[9] >> 31u);
    aot_gpr_8 = (aot_gpr_8 + ctx.gpr[9]);
    aot_gpr_8 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_8) >> 1u));
    ctx.gpr[9] = (aot_gpr_8 < ctx.gpr[17] ? 1u : 0u);
    if (ctx.gpr[9] == 0u) {
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(524), aot_gpr_6);
        goto L_088BCF7C;
    }
    goto L_088BCF5C;
L_088BCF5C:
    aot_gpr_5 = (ctx.gpr[17] - aot_gpr_8);
    ctx.gpr[31] = (0x088BCF68u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0217_entry, 217u, 243u, 0x08B69BB4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088BCF68u) goto L_088BCF68;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088BCF68:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr_7 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(524), aot_gpr_6);
    goto L_088BCF7C;
L_088BCF7C:
    { const std::uint32_t aot_run_words[3]{aot_gpr_7, aot_gpr_5, aot_gpr_4};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(528), aot_run_words); }
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(524));
    ctx.gpr[31] = (0x088BCF94u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0045_entry, 45u, 556u, 0x088BAA8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088BCF94u) goto L_088BCF94;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088BCF94:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(100), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(104), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(108), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(112), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(116), aot_gpr_4);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(120), aot_gpr_5);
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(124), aot_gpr_6);
    aot_gpr_7 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(128), aot_gpr_7);
    { const std::uint32_t aot_run_words[4]{aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(540), aot_run_words); }
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(540));
    ctx.gpr[31] = (0x088BCFF0u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0045_entry, 45u, 548u, 0x088BA9D4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088BCFF0u) goto L_088BCFF0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088BCFF0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(84), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(88), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(92), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(96), aot_gpr_4);
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(84), aot_run_words);
      aot_gpr_4 = aot_run_words[0];
      aot_gpr_5 = aot_run_words[1];
      aot_gpr_6 = aot_run_words[2];
    }
    { const std::uint32_t aot_run_words[3]{aot_gpr_4, aot_gpr_5, aot_gpr_6};
      aot_mem.aot_direct_store32_block(ctx.gpr[18] + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(96)));
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(12), aot_gpr_4);
    aot_gpr_8 = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_8 != 0u;
    aot_gpr_7 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_088BD540;
      }
      goto L_088BD048;
    }
L_088BD048:
    { const std::uint32_t aot_run_words[4]{aot_gpr_6, aot_gpr_7, aot_gpr_5, aot_gpr_4};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(556), aot_run_words); }
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(556));
    ctx.gpr[31] = (0x088BD064u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0045_entry, 45u, 548u, 0x088BA9D4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088BD064u) goto L_088BD064;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088BD064:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(212), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(216), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(220), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(224), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(148), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(152), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(156), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(160), aot_gpr_4);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(148));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(212)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(164), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(216)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(168), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(220)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(172), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(224)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(176), aot_gpr_5);
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(164));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(100)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(180), aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(104)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(184), aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(108)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(188), aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(112)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(192), aot_gpr_6);
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(180));
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(640), aot_gpr_7);
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(644), aot_gpr_7);
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(648), aot_gpr_7);
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(652), aot_gpr_7);
    aot_gpr_7 = (aot_gpr_29 + static_cast<std::uint32_t>(640));
    aot_gpr_8 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(656), aot_gpr_8);
    aot_gpr_8 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(660), aot_gpr_8);
    aot_gpr_8 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(664), aot_gpr_8);
    aot_gpr_8 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(668), aot_gpr_8);
    aot_gpr_8 = (aot_gpr_29 + static_cast<std::uint32_t>(656));
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(672), ctx.gpr[9]);
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(676), ctx.gpr[9]);
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(680), ctx.gpr[9]);
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(684), ctx.gpr[9]);
    ctx.gpr[9] = (aot_gpr_29 + static_cast<std::uint32_t>(672));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(688), static_cast<std::uint8_t>(0u));
    ctx.gpr[10] = (aot_mem.aot_direct_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(132), ctx.gpr[10]);
    ctx.gpr[10] = (aot_mem.aot_direct_load32(ctx.gpr[9] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(136), ctx.gpr[10]);
    ctx.gpr[10] = (aot_mem.aot_direct_load32(ctx.gpr[9] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(140), ctx.gpr[10]);
    ctx.gpr[9] = (aot_mem.aot_direct_load32(ctx.gpr[9] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(144), ctx.gpr[9]);
    ctx.gpr[10] = (aot_mem.aot_direct_load32(aot_gpr_7 + static_cast<std::uint32_t>(0)));
    ctx.gpr[11] = (aot_mem.aot_direct_load32(aot_gpr_8 + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (ctx.gpr[10] ^ ctx.gpr[11]);
    ctx.gpr[10] = (0u < ctx.gpr[10] ? 1u : 0u);
    ctx.gpr[10] = (ctx.gpr[10] & 255u);
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.gpr[9] = (aot_gpr_29 + static_cast<std::uint32_t>(132));
      if (branch_taken) {
          goto L_088BD248;
      }
      goto L_088BD19C;
    }
L_088BD19C:
    ctx.gpr[11] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(132)));
    goto L_088BD1A0;
L_088BD1A0:
    { const bool branch_taken = ctx.gpr[11] == 0u;
    ctx.gpr[10] = (aot_mem.aot_direct_load32(aot_gpr_7 + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088BD1B0;
      }
      goto L_088BD1A8;
    }
L_088BD1A8:
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[10] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_direct_store16(ctx.gpr[11] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[10]));
    goto L_088BD1B0;
L_088BD1B0:
    ctx.gpr[10] = (aot_gpr_7 | 0u);
    ctx.gpr[11] = (aot_mem.aot_direct_load32(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(2));
    aot_mem.aot_direct_store32(ctx.gpr[10] + static_cast<std::uint32_t>(0), ctx.gpr[11]);
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[10] + static_cast<std::uint32_t>(8)));
    if (ctx.gpr[11] != ctx.gpr[2]) {
    ctx.gpr[10] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(132)));
        goto L_088BD1F4;
    }
    goto L_088BD1CC;
L_088BD1CC:
    ctx.gpr[11] = (aot_mem.aot_direct_load32(ctx.gpr[10] + static_cast<std::uint32_t>(12)));
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(ctx.gpr[10] + static_cast<std::uint32_t>(12), ctx.gpr[11]);
    ctx.gpr[11] = (aot_mem.aot_direct_load32(ctx.gpr[11] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(ctx.gpr[10] + static_cast<std::uint32_t>(4), ctx.gpr[11]);
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(128));
    aot_mem.aot_direct_store32(ctx.gpr[10] + static_cast<std::uint32_t>(8), ctx.gpr[11]);
    ctx.gpr[11] = (aot_mem.aot_direct_load32(ctx.gpr[10] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(ctx.gpr[10] + static_cast<std::uint32_t>(0), ctx.gpr[11]);
    ctx.gpr[10] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(132)));
    goto L_088BD1F4;
L_088BD1F4:
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(2));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(132), ctx.gpr[10]);
    ctx.gpr[11] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(140)));
    if (ctx.gpr[10] != ctx.gpr[11]) {
    ctx.gpr[10] = (aot_mem.aot_direct_load32(aot_gpr_7 + static_cast<std::uint32_t>(0)));
        goto L_088BD230;
    }
    goto L_088BD208;
L_088BD208:
    ctx.gpr[10] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(144)));
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(144), ctx.gpr[10]);
    ctx.gpr[10] = (aot_mem.aot_direct_load32(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(136), ctx.gpr[10]);
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(128));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(140), ctx.gpr[10]);
    ctx.gpr[10] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(136)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(132), ctx.gpr[10]);
    ctx.gpr[10] = (aot_mem.aot_direct_load32(aot_gpr_7 + static_cast<std::uint32_t>(0)));
    goto L_088BD230;
L_088BD230:
    ctx.gpr[11] = (aot_mem.aot_direct_load32(aot_gpr_8 + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (ctx.gpr[10] ^ ctx.gpr[11]);
    ctx.gpr[10] = (0u < ctx.gpr[10] ? 1u : 0u);
    ctx.gpr[10] = (ctx.gpr[10] & 255u);
    if (ctx.gpr[10] != 0u) {
    ctx.gpr[11] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(132)));
        goto L_088BD1A0;
    }
    goto L_088BD248;
L_088BD248:
    aot_gpr_7 = (aot_gpr_4 | 0u);
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(100), aot_run_words);
      aot_gpr_4 = aot_run_words[0];
      aot_gpr_8 = aot_run_words[1];
      ctx.gpr[10] = aot_run_words[2];
    }
    { const std::uint32_t aot_run_words[3]{aot_gpr_4, aot_gpr_8, ctx.gpr[10]};
      aot_mem.aot_direct_store32_block(ctx.gpr[16] + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(112)));
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(212)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(164), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(216)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(168), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(220)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(172), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(224)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(176), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(148), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(152), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(156), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(160), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(116)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(132), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(120)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(136), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(124)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(140), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(128)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(144), aot_gpr_4);
    aot_gpr_4 = (aot_gpr_6 | 0u);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    ctx.gpr[31] = (0x088BD2DCu);
    aot_gpr_7 = (ctx.gpr[9] | 0u);
    goto L_088BCBDC;
L_088BD2DC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(572), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(576), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(580), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(584), aot_gpr_4);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(572));
    ctx.gpr[31] = (0x088BD308u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0045_entry, 45u, 556u, 0x088BAA8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088BD308u) goto L_088BD308;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088BD308:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(196), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(200), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(204), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(208), aot_gpr_4);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(196));
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(36), aot_run_words);
      aot_gpr_5 = aot_run_words[0];
      aot_gpr_6 = aot_run_words[1];
      aot_gpr_7 = aot_run_words[2];
    }
    { const std::uint32_t aot_run_words[3]{aot_gpr_5, aot_gpr_6, aot_gpr_7};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(708), aot_run_words); }
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(48)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(720), aot_gpr_5);
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(68), aot_run_words);
      aot_gpr_8 = aot_run_words[0];
      ctx.gpr[9] = aot_run_words[1];
      ctx.gpr[10] = aot_run_words[2];
    }
    { const std::uint32_t aot_run_words[3]{aot_gpr_8, ctx.gpr[9], ctx.gpr[10]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(724), aot_run_words); }
    aot_gpr_8 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(80)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(736), aot_gpr_8);
    ctx.gpr[11] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(740), ctx.gpr[11]);
    ctx.gpr[11] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(744), ctx.gpr[11]);
    ctx.gpr[11] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(748), ctx.gpr[11]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(752), aot_gpr_4);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(740));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(757), static_cast<std::uint8_t>(0u));
    ctx.gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(757))))));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(756), static_cast<std::uint8_t>(ctx.gpr[11]));
    ctx.gpr[11] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(708)));
    { const std::uint32_t aot_run_words[4]{ctx.gpr[11], aot_gpr_6, aot_gpr_7, aot_gpr_5};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(760), aot_run_words); }
    ctx.gpr[11] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(724)));
    { const std::uint32_t aot_run_words[4]{ctx.gpr[11], ctx.gpr[9], ctx.gpr[10], aot_gpr_8};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(776), aot_run_words); }
    ctx.gpr[11] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(792), ctx.gpr[11]);
    ctx.gpr[11] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(796), ctx.gpr[11]);
    ctx.gpr[11] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(800), ctx.gpr[11]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(804), aot_gpr_4);
    ctx.gpr[16] = (aot_gpr_29 + static_cast<std::uint32_t>(792));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(808), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(760)));
    { const std::uint32_t aot_run_words[4]{aot_gpr_4, aot_gpr_6, aot_gpr_7, aot_gpr_5};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(812), aot_run_words); }
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(776)));
    { const std::uint32_t aot_run_words[4]{aot_gpr_4, ctx.gpr[9], ctx.gpr[10], aot_gpr_8};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(828), aot_run_words); }
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(840)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(824)));
    aot_gpr_4 = (aot_gpr_4 - aot_gpr_5);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 2u));
    aot_gpr_5 = (aot_gpr_5 >> 30u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 2u));
    aot_gpr_4 = (aot_gpr_4 << 6u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(828)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(832)));
    aot_gpr_5 = (aot_gpr_5 - aot_gpr_6);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 1u));
    aot_gpr_6 = (aot_gpr_6 >> 31u);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 1u));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(820)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(812)));
    aot_gpr_5 = (aot_gpr_5 - aot_gpr_6);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 1u));
    aot_gpr_6 = (aot_gpr_6 >> 31u);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 1u));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-64));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) <= 0;
      if (branch_taken) {
          goto L_088BD518;
      }
      goto L_088BD480;
    }
L_088BD480:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_088BD484;
L_088BD484:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(812)));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_6 + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_direct_store16(aot_gpr_5 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_6));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(812)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(2));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(812), aot_gpr_5);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(820)));
    { const bool branch_taken = aot_gpr_5 != aot_gpr_6;
    aot_gpr_5 = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_088BD4D0;
      }
      goto L_088BD4A8;
    }
L_088BD4A8:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(824)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(824), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(816), aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(128));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(820), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(816)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(812), aot_gpr_5);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    goto L_088BD4D0;
L_088BD4D0:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(2));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(8)));
    if (aot_gpr_6 != aot_gpr_7) {
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
        goto L_088BD510;
    }
    goto L_088BD4E8;
L_088BD4E8:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(12)));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(12), aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(4), aot_gpr_6);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(128));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(8), aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    goto L_088BD510;
L_088BD510:
    if (static_cast<std::int32_t>(aot_gpr_4) > 0) {
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_088BD484;
    }
    goto L_088BD518;
L_088BD518:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(180), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(184), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(188), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(192), aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088BD8E8;
      }
      goto L_088BD540;
    }
L_088BD540:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(36), aot_run_words);
      aot_gpr_8 = aot_run_words[0];
      ctx.gpr[9] = aot_run_words[1];
      ctx.gpr[10] = aot_run_words[2];
    }
    { const std::uint32_t aot_run_words[3]{aot_gpr_8, ctx.gpr[9], ctx.gpr[10]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(296), aot_run_words); }
    aot_gpr_8 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(48)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(308), aot_gpr_8);
    ctx.gpr[11] = (ctx.gpr[17] - ctx.gpr[19]);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(636), static_cast<std::uint8_t>(0u));
    ctx.gpr[2] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(296)));
    aot_gpr_8 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(300)));
    aot_gpr_8 = (ctx.gpr[2] - aot_gpr_8);
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_8) >> 1u));
    ctx.gpr[9] = (ctx.gpr[9] >> 31u);
    aot_gpr_8 = (aot_gpr_8 + ctx.gpr[9]);
    ctx.gpr[3] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_8) >> 1u));
    ctx.gpr[3] = (ctx.gpr[11] + ctx.gpr[3]);
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(100), aot_run_words);
      ctx.gpr[17] = aot_run_words[0];
      aot_gpr_8 = aot_run_words[1];
      ctx.gpr[9] = aot_run_words[2];
      ctx.gpr[10] = aot_run_words[3];
    }
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) < 0;
    ctx.gpr[12] = (aot_gpr_29 + static_cast<std::uint32_t>(276));
      if (branch_taken) {
          goto L_088BD5B8;
      }
      goto L_088BD5A0;
    }
L_088BD5A0:
    ctx.gpr[13] = (static_cast<std::int32_t>(ctx.gpr[3]) < 64 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[13] == 0u;
    ctx.gpr[11] = (ctx.gpr[11] + ctx.gpr[11]);
      if (branch_taken) {
          goto L_088BD5B8;
      }
      goto L_088BD5AC;
    }
L_088BD5AC:
    ctx.gpr[11] = (ctx.gpr[2] + ctx.gpr[11]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(296), ctx.gpr[11]);
      if (branch_taken) {
          goto L_088BD62C;
      }
      goto L_088BD5B8;
    }
L_088BD5B8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) <= 0;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(308)));
      if (branch_taken) {
          goto L_088BD5D4;
      }
      goto L_088BD5C0;
    }
L_088BD5C0:
    ctx.gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 6u));
    ctx.gpr[11] = (ctx.gpr[11] >> 26u);
    ctx.gpr[11] = (ctx.gpr[3] + ctx.gpr[11]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[11]) >> 6u));
      if (branch_taken) {
          goto L_088BD5F8;
      }
      goto L_088BD5D4;
    }
L_088BD5D4:
    ctx.gpr[11] = (0u - ctx.gpr[3]);
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(-1));
    ctx.gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[11]) >> 6u));
    ctx.gpr[11] = (ctx.gpr[11] >> 26u);
    ctx.gpr[11] = (ctx.gpr[11] - ctx.gpr[3]);
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(-1));
    ctx.gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[11]) >> 6u));
    ctx.gpr[11] = (0u - ctx.gpr[11]);
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(-1));
    goto L_088BD5F8;
L_088BD5F8:
    ctx.gpr[13] = (ctx.gpr[11] << 2u);
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[13]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(308), ctx.gpr[2]);
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(300), ctx.gpr[2]);
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(128));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(304), ctx.gpr[2]);
    ctx.gpr[2] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(300)));
    ctx.gpr[11] = (ctx.gpr[11] << 6u);
    ctx.gpr[11] = (ctx.gpr[3] - ctx.gpr[11]);
    ctx.gpr[11] = (ctx.gpr[11] + ctx.gpr[11]);
    ctx.gpr[11] = (ctx.gpr[2] + ctx.gpr[11]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(296), ctx.gpr[11]);
    goto L_088BD62C;
L_088BD62C:
    ctx.gpr[11] = (aot_gpr_29 + static_cast<std::uint32_t>(296));
    ctx.gpr[2] = (aot_gpr_29 + static_cast<std::uint32_t>(228));
    { const std::uint32_t aot_run_words[4]{aot_gpr_6, aot_gpr_7, aot_gpr_5, aot_gpr_4};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(244), aot_run_words); }
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(244));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(260), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(264), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(268), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(272), aot_gpr_4);
    ctx.gpr[18] = (aot_gpr_29 + static_cast<std::uint32_t>(260));
    aot_gpr_7 = (aot_gpr_29 + static_cast<std::uint32_t>(36));
    { const std::uint32_t aot_run_words[4]{ctx.gpr[17], aot_gpr_8, ctx.gpr[9], ctx.gpr[10]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(276), aot_run_words); }
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(292), static_cast<std::uint8_t>(0u));
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(292))))));
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    aot_gpr_6 = (ctx.gpr[18] | 0u);
    aot_gpr_8 = (ctx.gpr[11] | 0u);
    ctx.gpr[31] = (0x088BD69Cu);
    ctx.gpr[9] = (ctx.gpr[12] | 0u);
    goto L_088BC8DC;
L_088BD69C:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(100), aot_run_words);
      aot_gpr_4 = aot_run_words[0];
      aot_gpr_5 = aot_run_words[1];
      aot_gpr_6 = aot_run_words[2];
    }
    { const std::uint32_t aot_run_words[3]{aot_gpr_4, aot_gpr_5, aot_gpr_6};
      aot_mem.aot_direct_store32_block(ctx.gpr[16] + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(112)));
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(116)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(260), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(120)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(264), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(124)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(268), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(128)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(272), aot_gpr_4);
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(296), aot_run_words);
      aot_gpr_4 = aot_run_words[0];
      aot_gpr_5 = aot_run_words[1];
      aot_gpr_6 = aot_run_words[2];
    }
    { const std::uint32_t aot_run_words[3]{aot_gpr_4, aot_gpr_5, aot_gpr_6};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(844), aot_run_words); }
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(308)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(856), aot_gpr_4);
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(68), aot_run_words);
      aot_gpr_7 = aot_run_words[0];
      aot_gpr_8 = aot_run_words[1];
      ctx.gpr[9] = aot_run_words[2];
    }
    { const std::uint32_t aot_run_words[3]{aot_gpr_7, aot_gpr_8, ctx.gpr[9]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(860), aot_run_words); }
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(80)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(872), aot_gpr_7);
    ctx.gpr[10] = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(876), ctx.gpr[10]);
    ctx.gpr[10] = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(880), ctx.gpr[10]);
    ctx.gpr[10] = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(884), ctx.gpr[10]);
    ctx.gpr[10] = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(888), ctx.gpr[10]);
    ctx.gpr[10] = (aot_gpr_29 + static_cast<std::uint32_t>(876));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(893), static_cast<std::uint8_t>(0u));
    ctx.gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(893))))));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(892), static_cast<std::uint8_t>(ctx.gpr[11]));
    ctx.gpr[11] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(844)));
    { const std::uint32_t aot_run_words[4]{ctx.gpr[11], aot_gpr_5, aot_gpr_6, aot_gpr_4};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(896), aot_run_words); }
    ctx.gpr[11] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(860)));
    { const std::uint32_t aot_run_words[4]{ctx.gpr[11], aot_gpr_8, ctx.gpr[9], aot_gpr_7};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(912), aot_run_words); }
    ctx.gpr[11] = (aot_mem.aot_direct_load32(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(928), ctx.gpr[11]);
    ctx.gpr[11] = (aot_mem.aot_direct_load32(ctx.gpr[10] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(932), ctx.gpr[11]);
    ctx.gpr[11] = (aot_mem.aot_direct_load32(ctx.gpr[10] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(936), ctx.gpr[11]);
    ctx.gpr[10] = (aot_mem.aot_direct_load32(ctx.gpr[10] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(940), ctx.gpr[10]);
    ctx.gpr[16] = (aot_gpr_29 + static_cast<std::uint32_t>(928));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(944), static_cast<std::uint8_t>(0u));
    ctx.gpr[10] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(896)));
    { const std::uint32_t aot_run_words[4]{ctx.gpr[10], aot_gpr_5, aot_gpr_6, aot_gpr_4};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(948), aot_run_words); }
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(912)));
    { const std::uint32_t aot_run_words[4]{aot_gpr_4, aot_gpr_8, ctx.gpr[9], aot_gpr_7};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(964), aot_run_words); }
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(976)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(960)));
    aot_gpr_4 = (aot_gpr_4 - aot_gpr_5);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 2u));
    aot_gpr_5 = (aot_gpr_5 >> 30u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 2u));
    aot_gpr_4 = (aot_gpr_4 << 6u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(964)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(968)));
    aot_gpr_5 = (aot_gpr_5 - aot_gpr_6);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 1u));
    aot_gpr_6 = (aot_gpr_6 >> 31u);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 1u));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(956)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(948)));
    aot_gpr_5 = (aot_gpr_5 - aot_gpr_6);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 1u));
    aot_gpr_6 = (aot_gpr_6 >> 31u);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 1u));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-64));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) <= 0;
      if (branch_taken) {
          goto L_088BD8C8;
      }
      goto L_088BD830;
    }
L_088BD830:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_088BD834;
L_088BD834:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(948)));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_6 + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_direct_store16(aot_gpr_5 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_6));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(948)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(2));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(948), aot_gpr_5);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(956)));
    { const bool branch_taken = aot_gpr_5 != aot_gpr_6;
    aot_gpr_5 = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_088BD880;
      }
      goto L_088BD858;
    }
L_088BD858:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(960)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(960), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(952), aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(128));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(956), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(952)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(948), aot_gpr_5);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    goto L_088BD880;
L_088BD880:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(2));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(8)));
    if (aot_gpr_6 != aot_gpr_7) {
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
        goto L_088BD8C0;
    }
    goto L_088BD898;
L_088BD898:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(12)));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(12), aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(4), aot_gpr_6);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(128));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(8), aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    goto L_088BD8C0;
L_088BD8C0:
    if (static_cast<std::int32_t>(aot_gpr_4) > 0) {
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_088BD834;
    }
    goto L_088BD8C8;
L_088BD8C8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(276), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(280), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(284), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(288), aot_gpr_4);
    goto L_088BD8E8;
L_088BD8E8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088BE260;
      }
      goto L_088BD8F0;
    }
L_088BD8F0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr_6 = (aot_gpr_4 - aot_gpr_5);
    aot_gpr_7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_6) >> 1u));
    aot_gpr_7 = (aot_gpr_7 >> 31u);
    aot_gpr_6 = (aot_gpr_6 + aot_gpr_7);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_6) >> 1u));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-1));
    aot_gpr_7 = (aot_gpr_6 < ctx.gpr[17] ? 1u : 0u);
    { const bool branch_taken = aot_gpr_7 == 0u;
    ctx.gpr[21] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_088BD930;
      }
      goto L_088BD91C;
    }
L_088BD91C:
    aot_gpr_5 = (ctx.gpr[17] - aot_gpr_6);
    ctx.gpr[31] = (0x088BD928u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0217_entry, 217u, 253u, 0x08B69CA0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088BD928u) goto L_088BD928;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088BD928:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    goto L_088BD930;
L_088BD930:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(588), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(592), aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(596), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(600), aot_gpr_4);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(588));
    ctx.gpr[31] = (0x088BD954u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0045_entry, 45u, 548u, 0x088BA9D4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088BD954u) goto L_088BD954;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088BD954:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(328), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(332), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(336), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(340), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(344), aot_gpr_4);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(348), aot_gpr_5);
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(352), aot_gpr_6);
    aot_gpr_7 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(356), aot_gpr_7);
    ctx.gpr[19] = (ctx.gpr[20] - ctx.gpr[19]);
    { const std::uint32_t aot_run_words[4]{aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(604), aot_run_words); }
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(604));
    ctx.gpr[31] = (0x088BD9B4u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0045_entry, 45u, 556u, 0x088BAA8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088BD9B4u) goto L_088BD9B4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088BD9B4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(312), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(316), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(320), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(324), aot_gpr_4);
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(312), aot_run_words);
      aot_gpr_4 = aot_run_words[0];
      aot_gpr_5 = aot_run_words[1];
      aot_gpr_6 = aot_run_words[2];
    }
    { const std::uint32_t aot_run_words[3]{aot_gpr_4, aot_gpr_5, aot_gpr_6};
      aot_mem.aot_direct_store32_block(ctx.gpr[18] + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(324)));
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(12), aot_gpr_4);
    aot_gpr_8 = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr_8 == 0u;
    aot_gpr_7 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_088BDEBC;
      }
      goto L_088BDA0C;
    }
L_088BDA0C:
    { const std::uint32_t aot_run_words[4]{aot_gpr_5, aot_gpr_6, aot_gpr_4, aot_gpr_7};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(620), aot_run_words); }
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(620));
    ctx.gpr[31] = (0x088BDA28u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0045_entry, 45u, 556u, 0x088BAA8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088BDA28u) goto L_088BDA28;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088BDA28:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(424), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(428), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(432), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(436), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(424)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(376), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(428)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(380), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(432)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(384), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(436)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(388), aot_gpr_4);
    ctx.gpr[17] = (aot_gpr_29 + static_cast<std::uint32_t>(376));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(392), aot_gpr_4);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(396), aot_gpr_5);
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(400), aot_gpr_6);
    aot_gpr_7 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(404), aot_gpr_7);
    ctx.gpr[16] = (aot_gpr_29 + static_cast<std::uint32_t>(392));
    { const std::uint32_t aot_run_words[4]{aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(408), aot_run_words); }
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(408));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(980), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(984), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(988), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(992), aot_gpr_5);
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(980));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(996), aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1000), aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1004), aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1008), aot_gpr_6);
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(996));
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1012), aot_gpr_7);
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1016), aot_gpr_7);
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1020), aot_gpr_7);
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1024), aot_gpr_7);
    aot_gpr_7 = (aot_gpr_29 + static_cast<std::uint32_t>(1012));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(1028), static_cast<std::uint8_t>(0u));
    aot_gpr_8 = (aot_mem.aot_direct_load32(aot_gpr_7 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(360), aot_gpr_8);
    aot_gpr_8 = (aot_mem.aot_direct_load32(aot_gpr_7 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(364), aot_gpr_8);
    aot_gpr_8 = (aot_mem.aot_direct_load32(aot_gpr_7 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(368), aot_gpr_8);
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_7 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(372), aot_gpr_7);
    aot_gpr_8 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    aot_gpr_8 = (aot_gpr_8 ^ ctx.gpr[9]);
    aot_gpr_8 = (0u < aot_gpr_8 ? 1u : 0u);
    aot_gpr_8 = (aot_gpr_8 & 255u);
    { const bool branch_taken = aot_gpr_8 == 0u;
    aot_gpr_7 = (aot_gpr_29 + static_cast<std::uint32_t>(360));
      if (branch_taken) {
          goto L_088BDBFC;
      }
      goto L_088BDB50;
    }
L_088BDB50:
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(360)));
    goto L_088BDB54;
L_088BDB54:
    { const bool branch_taken = ctx.gpr[9] == 0u;
    aot_gpr_8 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088BDB64;
      }
      goto L_088BDB5C;
    }
L_088BDB5C:
    aot_gpr_8 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_8 + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_direct_store16(ctx.gpr[9] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_8));
    goto L_088BDB64;
L_088BDB64:
    aot_gpr_8 = (aot_gpr_5 | 0u);
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_8 + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(2));
    aot_mem.aot_direct_store32(aot_gpr_8 + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    ctx.gpr[10] = (aot_mem.aot_direct_load32(aot_gpr_8 + static_cast<std::uint32_t>(8)));
    if (ctx.gpr[9] != ctx.gpr[10]) {
    aot_gpr_8 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(360)));
        goto L_088BDBA8;
    }
    goto L_088BDB80;
L_088BDB80:
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_8 + static_cast<std::uint32_t>(12)));
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_8 + static_cast<std::uint32_t>(12), ctx.gpr[9]);
    ctx.gpr[9] = (aot_mem.aot_direct_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_8 + static_cast<std::uint32_t>(4), ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(128));
    aot_mem.aot_direct_store32(aot_gpr_8 + static_cast<std::uint32_t>(8), ctx.gpr[9]);
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_8 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_8 + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    aot_gpr_8 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(360)));
    goto L_088BDBA8;
L_088BDBA8:
    aot_gpr_8 = (aot_gpr_8 + static_cast<std::uint32_t>(2));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(360), aot_gpr_8);
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(368)));
    if (aot_gpr_8 != ctx.gpr[9]) {
    aot_gpr_8 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
        goto L_088BDBE4;
    }
    goto L_088BDBBC;
L_088BDBBC:
    aot_gpr_8 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(372)));
    aot_gpr_8 = (aot_gpr_8 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(372), aot_gpr_8);
    aot_gpr_8 = (aot_mem.aot_direct_load32(aot_gpr_8 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(364), aot_gpr_8);
    aot_gpr_8 = (aot_gpr_8 + static_cast<std::uint32_t>(128));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(368), aot_gpr_8);
    aot_gpr_8 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(364)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(360), aot_gpr_8);
    aot_gpr_8 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    goto L_088BDBE4;
L_088BDBE4:
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    aot_gpr_8 = (aot_gpr_8 ^ ctx.gpr[9]);
    aot_gpr_8 = (0u < aot_gpr_8 ? 1u : 0u);
    aot_gpr_8 = (aot_gpr_8 & 255u);
    if (aot_gpr_8 != 0u) {
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(360)));
        goto L_088BDB54;
    }
    goto L_088BDBFC;
L_088BDBFC:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(328), aot_run_words);
      aot_gpr_5 = aot_run_words[0];
      aot_gpr_6 = aot_run_words[1];
      aot_gpr_8 = aot_run_words[2];
    }
    { const std::uint32_t aot_run_words[3]{aot_gpr_5, aot_gpr_6, aot_gpr_8};
      aot_mem.aot_direct_store32_block(ctx.gpr[21] + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(340)));
    aot_mem.aot_direct_store32(ctx.gpr[21] + static_cast<std::uint32_t>(12), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(392), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(396), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(400), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(404), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(424)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(376), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(428)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(380), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(432)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(384), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(436)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(388), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(344)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(360), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(348)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(364), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(352)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(368), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(356)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(372), aot_gpr_5);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088BDC88u);
    aot_gpr_6 = (ctx.gpr[17] | 0u);
    goto L_088BC6BC;
L_088BDC88:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(392), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(396), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(400), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(404), aot_gpr_4);
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(36), aot_run_words);
      aot_gpr_4 = aot_run_words[0];
      aot_gpr_5 = aot_run_words[1];
      aot_gpr_6 = aot_run_words[2];
    }
    { const std::uint32_t aot_run_words[3]{aot_gpr_4, aot_gpr_5, aot_gpr_6};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(1048), aot_run_words); }
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(48)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1060), aot_gpr_4);
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(68), aot_run_words);
      aot_gpr_7 = aot_run_words[0];
      aot_gpr_8 = aot_run_words[1];
      ctx.gpr[9] = aot_run_words[2];
    }
    { const std::uint32_t aot_run_words[3]{aot_gpr_7, aot_gpr_8, ctx.gpr[9]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(1064), aot_run_words); }
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(80)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1076), aot_gpr_7);
    ctx.gpr[10] = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1080), ctx.gpr[10]);
    ctx.gpr[10] = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1084), ctx.gpr[10]);
    ctx.gpr[10] = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1088), ctx.gpr[10]);
    ctx.gpr[10] = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1092), ctx.gpr[10]);
    ctx.gpr[10] = (aot_gpr_29 + static_cast<std::uint32_t>(1080));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(1097), static_cast<std::uint8_t>(0u));
    ctx.gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(1097))))));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(1096), static_cast<std::uint8_t>(ctx.gpr[11]));
    ctx.gpr[11] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1048)));
    { const std::uint32_t aot_run_words[4]{ctx.gpr[11], aot_gpr_5, aot_gpr_6, aot_gpr_4};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(1100), aot_run_words); }
    ctx.gpr[11] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1064)));
    { const std::uint32_t aot_run_words[4]{ctx.gpr[11], aot_gpr_8, ctx.gpr[9], aot_gpr_7};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(1116), aot_run_words); }
    ctx.gpr[11] = (aot_mem.aot_direct_load32(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1132), ctx.gpr[11]);
    ctx.gpr[11] = (aot_mem.aot_direct_load32(ctx.gpr[10] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1136), ctx.gpr[11]);
    ctx.gpr[11] = (aot_mem.aot_direct_load32(ctx.gpr[10] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1140), ctx.gpr[11]);
    ctx.gpr[10] = (aot_mem.aot_direct_load32(ctx.gpr[10] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1144), ctx.gpr[10]);
    ctx.gpr[18] = (aot_gpr_29 + static_cast<std::uint32_t>(1132));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(1148), static_cast<std::uint8_t>(0u));
    ctx.gpr[10] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1100)));
    { const std::uint32_t aot_run_words[4]{ctx.gpr[10], aot_gpr_5, aot_gpr_6, aot_gpr_4};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(1152), aot_run_words); }
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1116)));
    { const std::uint32_t aot_run_words[4]{aot_gpr_4, aot_gpr_8, ctx.gpr[9], aot_gpr_7};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(1168), aot_run_words); }
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1180)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1164)));
    aot_gpr_4 = (aot_gpr_4 - aot_gpr_5);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 2u));
    aot_gpr_5 = (aot_gpr_5 >> 30u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 2u));
    aot_gpr_4 = (aot_gpr_4 << 6u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1168)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1172)));
    aot_gpr_5 = (aot_gpr_5 - aot_gpr_6);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 1u));
    aot_gpr_6 = (aot_gpr_6 >> 31u);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 1u));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1160)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1152)));
    aot_gpr_5 = (aot_gpr_5 - aot_gpr_6);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 1u));
    aot_gpr_6 = (aot_gpr_6 >> 31u);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 1u));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-64));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) <= 0;
      if (branch_taken) {
          goto L_088BDE94;
      }
      goto L_088BDDFC;
    }
L_088BDDFC:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    goto L_088BDE00;
L_088BDE00:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1152)));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_6 + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_direct_store16(aot_gpr_5 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_6));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1152)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(2));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1152), aot_gpr_5);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1160)));
    { const bool branch_taken = aot_gpr_5 != aot_gpr_6;
    aot_gpr_5 = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_088BDE4C;
      }
      goto L_088BDE24;
    }
L_088BDE24:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1164)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1164), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1156), aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(128));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1160), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1156)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1152), aot_gpr_5);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    goto L_088BDE4C;
L_088BDE4C:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(2));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(8)));
    if (aot_gpr_6 != aot_gpr_7) {
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
        goto L_088BDE8C;
    }
    goto L_088BDE64;
L_088BDE64:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(12)));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(12), aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(4), aot_gpr_6);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(128));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(8), aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    goto L_088BDE8C;
L_088BDE8C:
    if (static_cast<std::int32_t>(aot_gpr_4) > 0) {
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
        goto L_088BDE00;
    }
    goto L_088BDE94;
L_088BDE94:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(408), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(412), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(416), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(420), aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088BE260;
      }
      goto L_088BDEBC;
    }
L_088BDEBC:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(36), aot_run_words);
      aot_gpr_8 = aot_run_words[0];
      ctx.gpr[9] = aot_run_words[1];
      ctx.gpr[10] = aot_run_words[2];
    }
    { const std::uint32_t aot_run_words[3]{aot_gpr_8, ctx.gpr[9], ctx.gpr[10]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(508), aot_run_words); }
    aot_gpr_8 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(48)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(520), aot_gpr_8);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(637), static_cast<std::uint8_t>(0u));
    aot_gpr_8 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(508)));
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(512)));
    ctx.gpr[9] = (aot_gpr_8 - ctx.gpr[9]);
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 1u));
    ctx.gpr[10] = (ctx.gpr[10] >> 31u);
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[10]);
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 1u));
    ctx.gpr[9] = (ctx.gpr[19] + ctx.gpr[9]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[9]) < 0;
    ctx.gpr[10] = (aot_gpr_29 + static_cast<std::uint32_t>(488));
      if (branch_taken) {
          goto L_088BDF24;
      }
      goto L_088BDF08;
    }
L_088BDF08:
    ctx.gpr[11] = (static_cast<std::int32_t>(ctx.gpr[9]) < 64 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[11] == 0u;
      if (branch_taken) {
          goto L_088BDF24;
      }
      goto L_088BDF14;
    }
L_088BDF14:
    ctx.gpr[9] = (ctx.gpr[19] + ctx.gpr[19]);
    aot_gpr_8 = (aot_gpr_8 + ctx.gpr[9]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(508), aot_gpr_8);
      if (branch_taken) {
          goto L_088BDF98;
      }
      goto L_088BDF24;
    }
L_088BDF24:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[9]) <= 0;
    ctx.gpr[11] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(520)));
      if (branch_taken) {
          goto L_088BDF40;
      }
      goto L_088BDF2C;
    }
L_088BDF2C:
    aot_gpr_8 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 6u));
    aot_gpr_8 = (aot_gpr_8 >> 26u);
    aot_gpr_8 = (ctx.gpr[9] + aot_gpr_8);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_8 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_8) >> 6u));
      if (branch_taken) {
          goto L_088BDF64;
      }
      goto L_088BDF40;
    }
L_088BDF40:
    aot_gpr_8 = (0u - ctx.gpr[9]);
    aot_gpr_8 = (aot_gpr_8 + static_cast<std::uint32_t>(-1));
    aot_gpr_8 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_8) >> 6u));
    aot_gpr_8 = (aot_gpr_8 >> 26u);
    aot_gpr_8 = (aot_gpr_8 - ctx.gpr[9]);
    aot_gpr_8 = (aot_gpr_8 + static_cast<std::uint32_t>(-1));
    aot_gpr_8 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_8) >> 6u));
    aot_gpr_8 = (0u - aot_gpr_8);
    aot_gpr_8 = (aot_gpr_8 + static_cast<std::uint32_t>(-1));
    goto L_088BDF64;
L_088BDF64:
    ctx.gpr[2] = (aot_gpr_8 << 2u);
    ctx.gpr[11] = (ctx.gpr[11] + ctx.gpr[2]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(520), ctx.gpr[11]);
    ctx.gpr[11] = (aot_mem.aot_direct_load32(ctx.gpr[11] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(512), ctx.gpr[11]);
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(128));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(516), ctx.gpr[11]);
    ctx.gpr[11] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(512)));
    aot_gpr_8 = (aot_gpr_8 << 6u);
    aot_gpr_8 = (ctx.gpr[9] - aot_gpr_8);
    aot_gpr_8 = (aot_gpr_8 + aot_gpr_8);
    aot_gpr_8 = (ctx.gpr[11] + aot_gpr_8);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(508), aot_gpr_8);
    goto L_088BDF98;
L_088BDF98:
    aot_gpr_8 = (aot_gpr_29 + static_cast<std::uint32_t>(508));
    ctx.gpr[9] = (aot_gpr_29 + static_cast<std::uint32_t>(440));
    ctx.gpr[11] = (aot_gpr_29 + static_cast<std::uint32_t>(68));
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(456), ctx.gpr[2]);
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(460), ctx.gpr[2]);
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(464), ctx.gpr[2]);
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(468), ctx.gpr[2]);
    ctx.gpr[2] = (aot_gpr_29 + static_cast<std::uint32_t>(456));
    { const std::uint32_t aot_run_words[4]{aot_gpr_5, aot_gpr_6, aot_gpr_4, aot_gpr_7};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(472), aot_run_words); }
    ctx.gpr[16] = (aot_gpr_29 + static_cast<std::uint32_t>(472));
    { const std::uint32_t aot_run_words[4]{aot_gpr_5, aot_gpr_6, aot_gpr_4, aot_gpr_7};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(488), aot_run_words); }
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(504), static_cast<std::uint8_t>(0u));
    ctx.gpr[3] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(504))))));
    aot_gpr_4 = (ctx.gpr[9] | 0u);
    aot_gpr_5 = (aot_gpr_8 | 0u);
    aot_gpr_6 = (ctx.gpr[11] | 0u);
    aot_gpr_7 = (ctx.gpr[2] | 0u);
    aot_gpr_8 = (ctx.gpr[16] | 0u);
    ctx.gpr[9] = (ctx.gpr[10] | 0u);
    ctx.gpr[31] = (0x088BE014u);
    ctx.gpr[10] = (ctx.gpr[3] | 0u);
    goto L_088BC3CC;
L_088BE014:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(328), aot_run_words);
      aot_gpr_4 = aot_run_words[0];
      aot_gpr_5 = aot_run_words[1];
      aot_gpr_6 = aot_run_words[2];
    }
    { const std::uint32_t aot_run_words[3]{aot_gpr_4, aot_gpr_5, aot_gpr_6};
      aot_mem.aot_direct_store32_block(ctx.gpr[21] + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(340)));
    aot_mem.aot_direct_store32(ctx.gpr[21] + static_cast<std::uint32_t>(12), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(472), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(476), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(480), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(484), aot_gpr_4);
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(36), aot_run_words);
      aot_gpr_4 = aot_run_words[0];
      aot_gpr_5 = aot_run_words[1];
      aot_gpr_6 = aot_run_words[2];
    }
    { const std::uint32_t aot_run_words[3]{aot_gpr_4, aot_gpr_5, aot_gpr_6};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(1184), aot_run_words); }
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(48)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1196), aot_gpr_4);
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(508), aot_run_words);
      aot_gpr_7 = aot_run_words[0];
      aot_gpr_8 = aot_run_words[1];
      ctx.gpr[9] = aot_run_words[2];
    }
    { const std::uint32_t aot_run_words[3]{aot_gpr_7, aot_gpr_8, ctx.gpr[9]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(1200), aot_run_words); }
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(520)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1212), aot_gpr_7);
    ctx.gpr[10] = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1216), ctx.gpr[10]);
    ctx.gpr[10] = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1220), ctx.gpr[10]);
    ctx.gpr[10] = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1224), ctx.gpr[10]);
    ctx.gpr[10] = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1228), ctx.gpr[10]);
    ctx.gpr[10] = (aot_gpr_29 + static_cast<std::uint32_t>(1216));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(1233), static_cast<std::uint8_t>(0u));
    ctx.gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(1233))))));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(1232), static_cast<std::uint8_t>(ctx.gpr[11]));
    ctx.gpr[11] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1184)));
    { const std::uint32_t aot_run_words[4]{ctx.gpr[11], aot_gpr_5, aot_gpr_6, aot_gpr_4};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(1236), aot_run_words); }
    ctx.gpr[11] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1200)));
    { const std::uint32_t aot_run_words[4]{ctx.gpr[11], aot_gpr_8, ctx.gpr[9], aot_gpr_7};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(1252), aot_run_words); }
    ctx.gpr[11] = (aot_mem.aot_direct_load32(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1268), ctx.gpr[11]);
    ctx.gpr[11] = (aot_mem.aot_direct_load32(ctx.gpr[10] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1272), ctx.gpr[11]);
    ctx.gpr[11] = (aot_mem.aot_direct_load32(ctx.gpr[10] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1276), ctx.gpr[11]);
    ctx.gpr[10] = (aot_mem.aot_direct_load32(ctx.gpr[10] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1280), ctx.gpr[10]);
    ctx.gpr[18] = (aot_gpr_29 + static_cast<std::uint32_t>(1268));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(1284), static_cast<std::uint8_t>(0u));
    ctx.gpr[10] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1236)));
    { const std::uint32_t aot_run_words[4]{ctx.gpr[10], aot_gpr_5, aot_gpr_6, aot_gpr_4};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(1288), aot_run_words); }
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1252)));
    { const std::uint32_t aot_run_words[4]{aot_gpr_4, aot_gpr_8, ctx.gpr[9], aot_gpr_7};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(1304), aot_run_words); }
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1316)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1300)));
    aot_gpr_4 = (aot_gpr_4 - aot_gpr_5);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 2u));
    aot_gpr_5 = (aot_gpr_5 >> 30u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 2u));
    aot_gpr_4 = (aot_gpr_4 << 6u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1304)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1308)));
    aot_gpr_5 = (aot_gpr_5 - aot_gpr_6);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 1u));
    aot_gpr_6 = (aot_gpr_6 >> 31u);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 1u));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1296)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1288)));
    aot_gpr_5 = (aot_gpr_5 - aot_gpr_6);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 1u));
    aot_gpr_6 = (aot_gpr_6 >> 31u);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 1u));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-64));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) <= 0;
      if (branch_taken) {
          goto L_088BE240;
      }
      goto L_088BE1A8;
    }
L_088BE1A8:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    goto L_088BE1AC;
L_088BE1AC:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1288)));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_6 + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_direct_store16(aot_gpr_5 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_6));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1288)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(2));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1288), aot_gpr_5);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1296)));
    { const bool branch_taken = aot_gpr_5 != aot_gpr_6;
    aot_gpr_5 = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_088BE1F8;
      }
      goto L_088BE1D0;
    }
L_088BE1D0:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1300)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1300), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1292), aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(128));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1296), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1292)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1288), aot_gpr_5);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    goto L_088BE1F8;
L_088BE1F8:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(2));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(8)));
    if (aot_gpr_6 != aot_gpr_7) {
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
        goto L_088BE238;
    }
    goto L_088BE210;
L_088BE210:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(12)));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(12), aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(4), aot_gpr_6);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(128));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(8), aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    goto L_088BE238;
L_088BE238:
    if (static_cast<std::int32_t>(aot_gpr_4) > 0) {
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
        goto L_088BE1AC;
    }
    goto L_088BE240;
L_088BE240:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(488), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(492), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(496), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(500), aot_gpr_4);
    goto L_088BE260;
L_088BE260:
    { std::uint32_t aot_run_words[7]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(1320), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      ctx.gpr[20] = aot_run_words[4];
      ctx.gpr[21] = aot_run_words[5];
      ctx.gpr[31] = aot_run_words[6];
    }
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(1360));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088BE284:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-432));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(420), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(424), ctx.gpr[31]);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_6 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_gpr_5 = aot_run_words[0];
      aot_gpr_8 = aot_run_words[1];
      ctx.gpr[9] = aot_run_words[2];
    }
    { const std::uint32_t aot_run_words[3]{aot_gpr_5, aot_gpr_8, ctx.gpr[9]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_run_words); }
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_gpr_5);
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_7 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_gpr_5 = aot_run_words[0];
      aot_gpr_6 = aot_run_words[1];
      aot_gpr_8 = aot_run_words[2];
    }
    { const std::uint32_t aot_run_words[3]{aot_gpr_5, aot_gpr_6, aot_gpr_8};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(52), aot_run_words); }
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_7 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(64), aot_gpr_5);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(180), static_cast<std::uint8_t>(0u));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(64)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(32)));
    aot_gpr_5 = (aot_gpr_5 - aot_gpr_6);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 2u));
    aot_gpr_6 = (aot_gpr_6 >> 30u);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 2u));
    aot_gpr_5 = (aot_gpr_5 << 6u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(52)));
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(56)));
    aot_gpr_6 = (aot_gpr_6 - aot_gpr_7);
    aot_gpr_7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_6) >> 1u));
    aot_gpr_7 = (aot_gpr_7 >> 31u);
    aot_gpr_6 = (aot_gpr_6 + aot_gpr_7);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_6) >> 1u));
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(28)));
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    aot_gpr_6 = (aot_gpr_6 - aot_gpr_7);
    aot_gpr_7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_6) >> 1u));
    aot_gpr_7 = (aot_gpr_7 >> 31u);
    aot_gpr_6 = (aot_gpr_6 + aot_gpr_7);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_6) >> 1u));
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-64));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_7 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (aot_gpr_6 != aot_gpr_7) {
    aot_gpr_7 = (aot_gpr_6 | 0u);
        goto L_088BE588;
    }
    goto L_088BE350;
L_088BE350:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (aot_gpr_7 - aot_gpr_4);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 1u));
    aot_gpr_6 = (aot_gpr_6 >> 31u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 1u));
    aot_gpr_6 = (aot_gpr_4 < aot_gpr_5 ? 1u : 0u);
    if (aot_gpr_6 == 0u) {
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(184), aot_gpr_7);
        goto L_088BE390;
    }
    goto L_088BE374;
L_088BE374:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(416), aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 - aot_gpr_4);
    ctx.gpr[31] = (0x088BE384u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0217_entry, 217u, 243u, 0x08B69BB4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088BE384u) goto L_088BE384;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088BE384:
    aot_gpr_7 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(416)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(184), aot_gpr_7);
    goto L_088BE390;
L_088BE390:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(188), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(192), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(196), aot_gpr_4);
    ctx.gpr[31] = (0x088BE3B0u);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(184));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0045_entry, 45u, 556u, 0x088BAA8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088BE3B0u) goto L_088BE3B0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088BE3B0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(68), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(72), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(76), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(80), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(68)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(100), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(72)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(104), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(76)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(108), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(80)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(112), aot_gpr_4);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(100));
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_run_words);
      aot_gpr_5 = aot_run_words[0];
      aot_gpr_6 = aot_run_words[1];
      aot_gpr_7 = aot_run_words[2];
    }
    { const std::uint32_t aot_run_words[3]{aot_gpr_5, aot_gpr_6, aot_gpr_7};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(216), aot_run_words); }
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(32)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(228), aot_gpr_5);
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(52), aot_run_words);
      aot_gpr_8 = aot_run_words[0];
      ctx.gpr[9] = aot_run_words[1];
      ctx.gpr[10] = aot_run_words[2];
    }
    { const std::uint32_t aot_run_words[3]{aot_gpr_8, ctx.gpr[9], ctx.gpr[10]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(232), aot_run_words); }
    aot_gpr_8 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(64)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(244), aot_gpr_8);
    ctx.gpr[11] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(248), ctx.gpr[11]);
    ctx.gpr[11] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(252), ctx.gpr[11]);
    ctx.gpr[11] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(256), ctx.gpr[11]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(260), aot_gpr_4);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(248));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(264), static_cast<std::uint8_t>(0u));
    ctx.gpr[11] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(216)));
    { const std::uint32_t aot_run_words[4]{ctx.gpr[11], aot_gpr_6, aot_gpr_7, aot_gpr_5};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(268), aot_run_words); }
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(232)));
    { const std::uint32_t aot_run_words[4]{aot_gpr_5, ctx.gpr[9], ctx.gpr[10], aot_gpr_8};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(284), aot_run_words); }
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(84), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(88), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(92), aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(96), aot_gpr_4);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(268)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(284)));
    aot_gpr_6 = (aot_gpr_5 ^ aot_gpr_4);
    aot_gpr_6 = (0u < aot_gpr_6 ? 1u : 0u);
    aot_gpr_6 = (aot_gpr_6 & 255u);
    { const bool branch_taken = aot_gpr_6 == 0u;
      if (branch_taken) {
          goto L_088BE560;
      }
      goto L_088BE4C0;
    }
L_088BE4C0:
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(84)));
    goto L_088BE4C4;
L_088BE4C4:
    { const bool branch_taken = aot_gpr_7 == 0u;
    aot_gpr_6 = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_088BE4D8;
      }
      goto L_088BE4CC;
    }
L_088BE4CC:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_6 + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_direct_store16(aot_gpr_7 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_5));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(268)));
    goto L_088BE4D8;
L_088BE4D8:
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(2));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(268), aot_gpr_5);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(276)));
    if (aot_gpr_5 != aot_gpr_6) {
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(84)));
        goto L_088BE514;
    }
    goto L_088BE4EC;
L_088BE4EC:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(280)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(280), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(272), aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(128));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(276), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(272)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(268), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(84)));
    goto L_088BE514;
L_088BE514:
    aot_gpr_6 = (aot_gpr_5 + static_cast<std::uint32_t>(2));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(84), aot_gpr_6);
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(92)));
    { const bool branch_taken = aot_gpr_6 != aot_gpr_7;
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(268)));
      if (branch_taken) {
          goto L_088BE54C;
      }
      goto L_088BE528;
    }
L_088BE528:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(96)));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(96), aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(88), aot_gpr_6);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(128));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(92), aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(88)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(84), aot_gpr_6);
    goto L_088BE54C;
L_088BE54C:
    aot_gpr_6 = (aot_gpr_5 ^ aot_gpr_4);
    aot_gpr_6 = (0u < aot_gpr_6 ? 1u : 0u);
    aot_gpr_6 = (aot_gpr_6 & 255u);
    if (aot_gpr_6 != 0u) {
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(84)));
        goto L_088BE4C4;
    }
    goto L_088BE560;
L_088BE560:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(68), aot_run_words);
      aot_gpr_4 = aot_run_words[0];
      aot_gpr_5 = aot_run_words[1];
      aot_gpr_6 = aot_run_words[2];
    }
    { const std::uint32_t aot_run_words[3]{aot_gpr_4, aot_gpr_5, aot_gpr_6};
      aot_mem.aot_direct_store32_block(ctx.gpr[16] + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(80)));
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088BE808;
      }
      goto L_088BE588;
    }
L_088BE588:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr_7 != aot_gpr_6;
    aot_gpr_8 = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_088BE7D4;
      }
      goto L_088BE594;
    }
L_088BE594:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr_7 = (aot_gpr_4 - aot_gpr_6);
    aot_gpr_8 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_7) >> 1u));
    aot_gpr_8 = (aot_gpr_8 >> 31u);
    aot_gpr_7 = (aot_gpr_7 + aot_gpr_8);
    aot_gpr_7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_7) >> 1u));
    aot_gpr_7 = (aot_gpr_7 + static_cast<std::uint32_t>(-1));
    aot_gpr_8 = (aot_gpr_7 < aot_gpr_5 ? 1u : 0u);
    if (aot_gpr_8 == 0u) {
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(200), aot_gpr_6);
        goto L_088BE5DC;
    }
    goto L_088BE5BC;
L_088BE5BC:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(416), aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 - aot_gpr_7);
    ctx.gpr[31] = (0x088BE5CCu);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0217_entry, 217u, 253u, 0x08B69CA0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088BE5CCu) goto L_088BE5CC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088BE5CC:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(416)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(200), aot_gpr_6);
    goto L_088BE5DC;
L_088BE5DC:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(204), aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(208), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(212), aot_gpr_4);
    ctx.gpr[31] = (0x088BE5F8u);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(200));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0045_entry, 45u, 548u, 0x088BA9D4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088BE5F8u) goto L_088BE5F8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088BE5F8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(116), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(120), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(124), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(128), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(148), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(152), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(156), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(160), aot_gpr_4);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(148));
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_run_words);
      aot_gpr_5 = aot_run_words[0];
      aot_gpr_6 = aot_run_words[1];
      aot_gpr_7 = aot_run_words[2];
    }
    { const std::uint32_t aot_run_words[3]{aot_gpr_5, aot_gpr_6, aot_gpr_7};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(316), aot_run_words); }
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(32)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(328), aot_gpr_5);
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(52), aot_run_words);
      aot_gpr_8 = aot_run_words[0];
      ctx.gpr[9] = aot_run_words[1];
      ctx.gpr[10] = aot_run_words[2];
    }
    { const std::uint32_t aot_run_words[3]{aot_gpr_8, ctx.gpr[9], ctx.gpr[10]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(332), aot_run_words); }
    aot_gpr_8 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(64)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(344), aot_gpr_8);
    ctx.gpr[11] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(348), ctx.gpr[11]);
    ctx.gpr[11] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(352), ctx.gpr[11]);
    ctx.gpr[11] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(356), ctx.gpr[11]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(360), aot_gpr_4);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(348));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(364), static_cast<std::uint8_t>(0u));
    ctx.gpr[11] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(316)));
    { const std::uint32_t aot_run_words[4]{ctx.gpr[11], aot_gpr_6, aot_gpr_7, aot_gpr_5};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(368), aot_run_words); }
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(332)));
    { const std::uint32_t aot_run_words[4]{aot_gpr_5, ctx.gpr[9], ctx.gpr[10], aot_gpr_8};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(384), aot_run_words); }
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(132), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(136), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(140), aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(144), aot_gpr_4);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(368)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(384)));
    aot_gpr_6 = (aot_gpr_5 ^ aot_gpr_4);
    aot_gpr_6 = (0u < aot_gpr_6 ? 1u : 0u);
    aot_gpr_6 = (aot_gpr_6 & 255u);
    { const bool branch_taken = aot_gpr_6 == 0u;
      if (branch_taken) {
          goto L_088BE7A8;
      }
      goto L_088BE708;
    }
L_088BE708:
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(132)));
    goto L_088BE70C;
L_088BE70C:
    { const bool branch_taken = aot_gpr_7 == 0u;
    aot_gpr_6 = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_088BE720;
      }
      goto L_088BE714;
    }
L_088BE714:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_6 + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_direct_store16(aot_gpr_7 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_5));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(368)));
    goto L_088BE720;
L_088BE720:
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(2));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(368), aot_gpr_5);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(376)));
    if (aot_gpr_5 != aot_gpr_6) {
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(132)));
        goto L_088BE75C;
    }
    goto L_088BE734;
L_088BE734:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(380)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(380), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(372), aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(128));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(376), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(372)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(368), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(132)));
    goto L_088BE75C;
L_088BE75C:
    aot_gpr_6 = (aot_gpr_5 + static_cast<std::uint32_t>(2));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(132), aot_gpr_6);
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(140)));
    { const bool branch_taken = aot_gpr_6 != aot_gpr_7;
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(368)));
      if (branch_taken) {
          goto L_088BE794;
      }
      goto L_088BE770;
    }
L_088BE770:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(144)));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(144), aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(136), aot_gpr_6);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(128));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(140), aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(136)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(132), aot_gpr_6);
    goto L_088BE794;
L_088BE794:
    aot_gpr_6 = (aot_gpr_5 ^ aot_gpr_4);
    aot_gpr_6 = (0u < aot_gpr_6 ? 1u : 0u);
    aot_gpr_6 = (aot_gpr_6 & 255u);
    if (aot_gpr_6 != 0u) {
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(132)));
        goto L_088BE70C;
    }
    goto L_088BE7A8;
L_088BE7A8:
    aot_gpr_4 = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(116), aot_run_words);
      aot_gpr_5 = aot_run_words[0];
      aot_gpr_6 = aot_run_words[1];
      aot_gpr_7 = aot_run_words[2];
    }
    { const std::uint32_t aot_run_words[3]{aot_gpr_5, aot_gpr_6, aot_gpr_7};
      aot_mem.aot_direct_store32_block(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(128)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(12), aot_gpr_5);
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088BE808;
      }
      goto L_088BE7D4;
    }
L_088BE7D4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(164), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(168), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(172), aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(176), aot_gpr_4);
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(164));
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(20));
    aot_gpr_7 = (aot_gpr_29 + static_cast<std::uint32_t>(52));
    ctx.gpr[31] = (0x088BE808u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    goto L_088BCE04;
L_088BE808:
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(420)));
    ctx.gpr[31] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(424)));
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(432));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088BE818:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    { const std::uint32_t aot_run_words[5]{ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[31]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(28), aot_run_words); }
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_gpr_4 = (ctx.gpr[9] & 255u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_8);
    aot_gpr_7 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[9] = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr_7 = (aot_gpr_7 - ctx.gpr[9]);
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_7) >> 2u));
    ctx.gpr[9] = (ctx.gpr[9] >> 30u);
    ctx.gpr[17] = (aot_gpr_7 + ctx.gpr[9]);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 2u));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_gpr_7 = (ctx.gpr[17] < aot_gpr_8 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_7 == 0u;
    aot_gpr_7 = (aot_gpr_29 + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088BE874;
      }
      goto L_088BE868;
    }
L_088BE868:
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + aot_gpr_7);
      if (branch_taken) {
          goto L_088BE87C;
      }
      goto L_088BE874;
    }
L_088BE874:
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_7 + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (ctx.gpr[17] + aot_gpr_7);
    goto L_088BE87C;
L_088BE87C:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_088BE8D8;
      }
      goto L_088BE884;
    }
L_088BE884:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_5);
    aot_gpr_4 = (ctx.gpr[17] << 2u);
    ctx.gpr[31] = (0x088BE89Cu);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_gpr_4);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 474u, 0x08ABE308u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088BE89Cu) goto L_088BE89C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088BE89C:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_run_words);
      aot_gpr_5 = aot_run_words[0];
      aot_gpr_6 = aot_run_words[1];
      aot_gpr_7 = aot_run_words[2];
    }
    { const bool branch_taken = ctx.gpr[19] != 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_088BE8D8;
      }
      goto L_088BE8B4;
    }
L_088BE8B4:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_5);
    ctx.gpr[31] = (0x088BE8C8u);
    aot_gpr_4 = (aot_gpr_7 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 289u, 0x08B65438u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088BE8C8u) goto L_088BE8C8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088BE8C8:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(12)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(24)));
    goto L_088BE8D8;
L_088BE8D8:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    aot_gpr_7 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_7 == aot_gpr_5;
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088BE918;
      }
      goto L_088BE8E8;
    }
L_088BE8E8:
    aot_gpr_8 = (ctx.gpr[19] | 0u);
    if (aot_gpr_8 == 0u) {
    aot_gpr_7 = (aot_gpr_7 + static_cast<std::uint32_t>(4));
        goto L_088BE910;
    }
    goto L_088BE8F4;
L_088BE8F4:
    ctx.gpr[9] = (aot_mem.aot_direct_load8(aot_gpr_7 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store8(aot_gpr_8 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    aot_gpr_8 = (aot_gpr_8 + static_cast<std::uint32_t>(2));
    ctx.gpr[9] = (aot_gpr_7 + static_cast<std::uint32_t>(2));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[9] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_direct_store16(aot_gpr_8 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[9]));
    aot_gpr_7 = (aot_gpr_7 + static_cast<std::uint32_t>(4));
    goto L_088BE910;
L_088BE910:
    { const bool branch_taken = aot_gpr_7 != aot_gpr_5;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088BE8E8;
      }
      goto L_088BE918;
    }
L_088BE918:
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_8 = (0u | 1u);
    { const bool branch_taken = aot_gpr_7 != aot_gpr_8;
      if (branch_taken) {
          goto L_088BE958;
      }
      goto L_088BE928;
    }
L_088BE928:
    aot_gpr_7 = (ctx.gpr[19] | 0u);
    { const bool branch_taken = aot_gpr_7 == 0u;
      if (branch_taken) {
          goto L_088BE94C;
      }
      goto L_088BE934;
    }
L_088BE934:
    aot_gpr_8 = (aot_mem.aot_direct_load8(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store8(aot_gpr_7 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_8));
    aot_gpr_7 = (aot_gpr_7 + static_cast<std::uint32_t>(2));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(2));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_6 + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_direct_store16(aot_gpr_7 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_6));
    goto L_088BE94C;
L_088BE94C:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_088BE994;
      }
      goto L_088BE958;
    }
L_088BE958:
    { const bool branch_taken = aot_gpr_7 == 0u;
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088BE990;
      }
      goto L_088BE960;
    }
L_088BE960:
    aot_gpr_8 = (aot_gpr_6 + static_cast<std::uint32_t>(2));
    goto L_088BE964;
L_088BE964:
    ctx.gpr[9] = (ctx.gpr[19] | 0u);
    if (ctx.gpr[9] == 0u) {
    aot_gpr_7 = (aot_gpr_7 + static_cast<std::uint32_t>(-1));
        goto L_088BE988;
    }
    goto L_088BE970;
L_088BE970:
    ctx.gpr[10] = (aot_mem.aot_direct_load8(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store8(ctx.gpr[9] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[10]));
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(2));
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_8 + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_direct_store16(ctx.gpr[9] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[10]));
    aot_gpr_7 = (aot_gpr_7 + static_cast<std::uint32_t>(-1));
    goto L_088BE988;
L_088BE988:
    { const bool branch_taken = aot_gpr_7 != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088BE964;
      }
      goto L_088BE990;
    }
L_088BE990:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_088BE994;
L_088BE994:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088BE9E0;
      }
      goto L_088BE99C;
    }
L_088BE99C:
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088BE9E0;
      }
      goto L_088BE9AC;
    }
L_088BE9AC:
    aot_gpr_6 = (ctx.gpr[19] | 0u);
    if (aot_gpr_6 == 0u) {
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
        goto L_088BE9D4;
    }
    goto L_088BE9B8;
L_088BE9B8:
    aot_gpr_7 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store8(aot_gpr_6 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_7));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(2));
    aot_gpr_7 = (aot_gpr_4 + static_cast<std::uint32_t>(2));
    aot_gpr_7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_7 + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_direct_store16(aot_gpr_6 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_7));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    goto L_088BE9D4;
L_088BE9D4:
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088BE9AC;
      }
      goto L_088BE9DC;
    }
L_088BE9DC:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_088BE9E0;
L_088BE9E0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_4 | 0u);
    { const bool branch_taken = aot_gpr_5 == aot_gpr_6;
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088BE9FC;
      }
      goto L_088BE9F0;
    }
L_088BE9F0:
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(4));
    goto L_088BE9F4;
L_088BE9F4:
    { const bool branch_taken = aot_gpr_5 != aot_gpr_6;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088BE9F4;
      }
      goto L_088BE9FC;
    }
L_088BE9FC:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088BEA0C;
      }
      goto L_088BEA04;
    }
L_088BEA04:
    ctx.gpr[31] = (0x088BEA0Cu);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE398, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, ctx.gpr[31]); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088BEA0Cu) goto L_088BEA0C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088BEA0C:
    aot_gpr_4 = (ctx.gpr[17] << 2u);
    aot_gpr_4 = (ctx.gpr[18] + aot_gpr_4);
    { const std::uint32_t aot_run_words[3]{ctx.gpr[18], ctx.gpr[19], aot_gpr_4};
      aot_mem.aot_direct_store32_block(ctx.gpr[16] + static_cast<std::uint32_t>(0), aot_run_words); }
    { std::uint32_t aot_run_words[5]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(28), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      ctx.gpr[31] = aot_run_words[4];
    }
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088BEA3C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-144));
    { const std::uint32_t aot_run_words[10]{ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], ctx.gpr[23], ctx.gpr[30], ctx.gpr[31]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(104), aot_run_words); }
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    aot_gpr_8 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(4)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(8)));
    { const std::uint32_t aot_run_words[3]{aot_gpr_7, aot_gpr_8, aot_gpr_6};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_run_words); }
    aot_gpr_6 = (aot_gpr_5 - aot_gpr_4);
    aot_gpr_7 = (0u | 56u);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_6); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr_7); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[20] = (ctx.lo);
    ctx.gpr[20] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[20]) >> 2u));
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[20]) <= 0;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(100), aot_gpr_5);
      if (branch_taken) {
          goto L_088BEC90;
      }
      goto L_088BEAA0;
    }
L_088BEAA0:
    ctx.gpr[19] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(20))))));
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(12)));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(40))))));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(41))))));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(48))))));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(96), aot_gpr_4);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(49))))));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(92), aot_gpr_5);
    ctx.gpr[30] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(56))))));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(88), aot_gpr_6);
    ctx.gpr[23] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(57))))));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(84), aot_gpr_4);
    goto L_088BEAD4;
L_088BEAD4:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(0u));
    ctx.gpr[22] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(24))))));
    ctx.gpr[21] = (ctx.gpr[18] | 0u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    jump_target = ctx.gpr[17];
    ctx.gpr[31] = (0x088BEAF0u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088BEAF0u) goto L_088BEAF0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088BEAF0:
    if (ctx.gpr[2] != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(96)));
        goto L_088BEC30;
    }
    goto L_088BEAF8;
L_088BEAF8:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(56));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(34), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(34))))));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(96), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(92), ctx.gpr[18]);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    jump_target = ctx.gpr[17];
    ctx.gpr[31] = (0x088BEB1Cu);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088BEB1Cu) goto L_088BEB1C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088BEB1C:
    if (ctx.gpr[2] != 0u) {
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[22]));
        goto L_088BEBFC;
    }
    goto L_088BEB24;
L_088BEB24:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(56));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(44), ctx.gpr[16]);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(42), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(42))))));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(88), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(84), ctx.gpr[18]);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    jump_target = ctx.gpr[17];
    ctx.gpr[31] = (0x088BEB48u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088BEB48u) goto L_088BEB48;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088BEB48:
    if (ctx.gpr[2] != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(96)));
        goto L_088BEBC8;
    }
    goto L_088BEB50;
L_088BEB50:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(56));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(52), ctx.gpr[16]);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(50), static_cast<std::uint8_t>(0u));
    ctx.gpr[30] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(50))))));
    ctx.gpr[23] = (ctx.gpr[18] | 0u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    jump_target = ctx.gpr[17];
    ctx.gpr[31] = (0x088BEB70u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088BEB70u) goto L_088BEB70;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088BEB70:
    if (ctx.gpr[2] != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(96)));
        goto L_088BEB94;
    }
    goto L_088BEB78;
L_088BEB78:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(56));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[20]) > 0;
      if (branch_taken) {
          goto L_088BEAD4;
      }
      goto L_088BEB88;
    }
L_088BEB88:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(96)));
      if (branch_taken) {
          goto L_088BEC64;
      }
      goto L_088BEB90;
    }
L_088BEB90:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(96)));
    goto L_088BEB94;
L_088BEB94:
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[22]));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(33), static_cast<std::uint8_t>(ctx.gpr[21]));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(92)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(88)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(84)));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(41), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(49), static_cast<std::uint8_t>(aot_gpr_6));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[30]));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(57), static_cast<std::uint8_t>(ctx.gpr[23]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_088BED8C;
      }
      goto L_088BEBC8;
    }
L_088BEBC8:
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[22]));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(33), static_cast<std::uint8_t>(ctx.gpr[21]));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(92)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(88)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(84)));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(41), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(49), static_cast<std::uint8_t>(aot_gpr_6));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[30]));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(57), static_cast<std::uint8_t>(ctx.gpr[23]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_088BED8C;
      }
      goto L_088BEBFC;
    }
L_088BEBFC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(96)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(92)));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(33), static_cast<std::uint8_t>(ctx.gpr[21]));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(88)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(84)));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(41), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(49), static_cast<std::uint8_t>(aot_gpr_6));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[30]));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(57), static_cast<std::uint8_t>(ctx.gpr[23]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_088BED8C;
      }
      goto L_088BEC30;
    }
L_088BEC30:
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[22]));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(33), static_cast<std::uint8_t>(ctx.gpr[21]));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(92)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(88)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(84)));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(41), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(49), static_cast<std::uint8_t>(aot_gpr_6));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[30]));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(57), static_cast<std::uint8_t>(ctx.gpr[23]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_088BED8C;
      }
      goto L_088BEC64;
    }
L_088BEC64:
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[22]));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(33), static_cast<std::uint8_t>(ctx.gpr[21]));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(92)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(88)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(84)));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(41), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(49), static_cast<std::uint8_t>(aot_gpr_6));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[30]));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(57), static_cast<std::uint8_t>(ctx.gpr[23]));
    goto L_088BEC90;
L_088BEC90:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(100)));
    aot_gpr_5 = (0u | 56u);
    aot_gpr_4 = (aot_gpr_4 - ctx.gpr[16]);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_4); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr_5); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr_4 = (ctx.lo);
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_088BECF8;
      }
      goto L_088BECB0;
    }
L_088BECB0:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) <= 0;
      if (branch_taken) {
          goto L_088BECE8;
      }
      goto L_088BECB8;
    }
L_088BECB8:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(76), ctx.gpr[16]);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(74), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(74))))));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(80), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(20))))));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(81), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(12)));
    jump_target = aot_gpr_6;
    ctx.gpr[31] = (0x088BECE0u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088BECE0u) goto L_088BECE0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088BECE0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_088BECF0;
      }
      goto L_088BECE8;
    }
L_088BECE8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(100)));
      if (branch_taken) {
          goto L_088BED8C;
      }
      goto L_088BECF0;
    }
L_088BECF0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_088BED8C;
      }
      goto L_088BECF8;
    }
L_088BECF8:
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_088BED4C;
      }
      goto L_088BED00;
    }
L_088BED00:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088BECE8;
      }
      goto L_088BED08;
    }
L_088BED08:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(60), ctx.gpr[16]);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(58), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(58))))));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(64), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(20))))));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(65), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(12)));
    jump_target = aot_gpr_6;
    ctx.gpr[31] = (0x088BED30u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088BED30u) goto L_088BED30;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088BED30:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_088BED44;
      }
      goto L_088BED38;
    }
L_088BED38:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(56));
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088BED4C;
      }
      goto L_088BED44;
    }
L_088BED44:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_088BED8C;
      }
      goto L_088BED4C;
    }
L_088BED4C:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(68), ctx.gpr[16]);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(66), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(66))))));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(20))))));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(73), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(12)));
    jump_target = aot_gpr_6;
    ctx.gpr[31] = (0x088BED74u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088BED74u) goto L_088BED74;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088BED74:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_088BED88;
      }
      goto L_088BED7C;
    }
L_088BED7C:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(56));
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088BECB8;
      }
      goto L_088BED88;
    }
L_088BED88:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    goto L_088BED8C;
L_088BED8C:
    { std::uint32_t aot_run_words[10]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(104), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      ctx.gpr[20] = aot_run_words[4];
      ctx.gpr[21] = aot_run_words[5];
      ctx.gpr[22] = aot_run_words[6];
      ctx.gpr[23] = aot_run_words[7];
      ctx.gpr[30] = aot_run_words[8];
      ctx.gpr[31] = aot_run_words[9];
    }
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088BEDBC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-144));
    { const std::uint32_t aot_run_words[10]{ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], ctx.gpr[23], ctx.gpr[30], ctx.gpr[31]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(104), aot_run_words); }
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    aot_gpr_8 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(4)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(8)));
    { const std::uint32_t aot_run_words[3]{aot_gpr_7, aot_gpr_8, aot_gpr_6};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_run_words); }
    aot_gpr_6 = (aot_gpr_5 - aot_gpr_4);
    aot_gpr_7 = (0u | 56u);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_6); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr_7); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[20] = (ctx.lo);
    ctx.gpr[20] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[20]) >> 2u));
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[20]) <= 0;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(100), aot_gpr_5);
      if (branch_taken) {
          goto L_088BF010;
      }
      goto L_088BEE20;
    }
L_088BEE20:
    ctx.gpr[19] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(20))))));
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(12)));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(40))))));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(41))))));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(48))))));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(96), aot_gpr_4);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(49))))));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(92), aot_gpr_5);
    ctx.gpr[30] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(56))))));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(88), aot_gpr_6);
    ctx.gpr[23] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(57))))));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(84), aot_gpr_4);
    goto L_088BEE54;
L_088BEE54:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(0u));
    ctx.gpr[22] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(24))))));
    ctx.gpr[21] = (ctx.gpr[18] | 0u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    jump_target = ctx.gpr[17];
    ctx.gpr[31] = (0x088BEE70u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088BEE70u) goto L_088BEE70;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088BEE70:
    if (ctx.gpr[2] != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(96)));
        goto L_088BEFB0;
    }
    goto L_088BEE78;
L_088BEE78:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(56));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(34), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(34))))));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(96), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(92), ctx.gpr[18]);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    jump_target = ctx.gpr[17];
    ctx.gpr[31] = (0x088BEE9Cu);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088BEE9Cu) goto L_088BEE9C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088BEE9C:
    if (ctx.gpr[2] != 0u) {
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[22]));
        goto L_088BEF7C;
    }
    goto L_088BEEA4;
L_088BEEA4:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(56));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(44), ctx.gpr[16]);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(42), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(42))))));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(88), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(84), ctx.gpr[18]);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    jump_target = ctx.gpr[17];
    ctx.gpr[31] = (0x088BEEC8u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088BEEC8u) goto L_088BEEC8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088BEEC8:
    if (ctx.gpr[2] != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(96)));
        goto L_088BEF48;
    }
    goto L_088BEED0;
L_088BEED0:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(56));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(52), ctx.gpr[16]);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(50), static_cast<std::uint8_t>(0u));
    ctx.gpr[30] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(50))))));
    ctx.gpr[23] = (ctx.gpr[18] | 0u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    jump_target = ctx.gpr[17];
    ctx.gpr[31] = (0x088BEEF0u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088BEEF0u) goto L_088BEEF0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088BEEF0:
    if (ctx.gpr[2] != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(96)));
        goto L_088BEF14;
    }
    goto L_088BEEF8;
L_088BEEF8:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(56));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[20]) > 0;
      if (branch_taken) {
          goto L_088BEE54;
      }
      goto L_088BEF08;
    }
L_088BEF08:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(96)));
      if (branch_taken) {
          goto L_088BEFE4;
      }
      goto L_088BEF10;
    }
L_088BEF10:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(96)));
    goto L_088BEF14;
L_088BEF14:
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[22]));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(33), static_cast<std::uint8_t>(ctx.gpr[21]));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(92)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(88)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(84)));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(41), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(49), static_cast<std::uint8_t>(aot_gpr_6));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[30]));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(57), static_cast<std::uint8_t>(ctx.gpr[23]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_088BF10C;
      }
      goto L_088BEF48;
    }
L_088BEF48:
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[22]));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(33), static_cast<std::uint8_t>(ctx.gpr[21]));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(92)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(88)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(84)));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(41), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(49), static_cast<std::uint8_t>(aot_gpr_6));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[30]));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(57), static_cast<std::uint8_t>(ctx.gpr[23]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_088BF10C;
      }
      goto L_088BEF7C;
    }
L_088BEF7C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(96)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(92)));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(33), static_cast<std::uint8_t>(ctx.gpr[21]));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(88)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(84)));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(41), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(49), static_cast<std::uint8_t>(aot_gpr_6));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[30]));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(57), static_cast<std::uint8_t>(ctx.gpr[23]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_088BF10C;
      }
      goto L_088BEFB0;
    }
L_088BEFB0:
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[22]));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(33), static_cast<std::uint8_t>(ctx.gpr[21]));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(92)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(88)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(84)));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(41), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(49), static_cast<std::uint8_t>(aot_gpr_6));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[30]));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(57), static_cast<std::uint8_t>(ctx.gpr[23]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_088BF10C;
      }
      goto L_088BEFE4;
    }
L_088BEFE4:
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[22]));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(33), static_cast<std::uint8_t>(ctx.gpr[21]));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(92)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(88)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(84)));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(41), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(49), static_cast<std::uint8_t>(aot_gpr_6));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[30]));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(57), static_cast<std::uint8_t>(ctx.gpr[23]));
    goto L_088BF010;
L_088BF010:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(100)));
    aot_gpr_5 = (0u | 56u);
    aot_gpr_4 = (aot_gpr_4 - ctx.gpr[16]);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_4); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr_5); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr_4 = (ctx.lo);
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_088BF078;
      }
      goto L_088BF030;
    }
L_088BF030:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) <= 0;
      if (branch_taken) {
          goto L_088BF068;
      }
      goto L_088BF038;
    }
L_088BF038:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(76), ctx.gpr[16]);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(74), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(74))))));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(80), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(20))))));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(81), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(12)));
    jump_target = aot_gpr_6;
    ctx.gpr[31] = (0x088BF060u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088BF060u) goto L_088BF060;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088BF060:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_088BF070;
      }
      goto L_088BF068;
    }
L_088BF068:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(100)));
      if (branch_taken) {
          goto L_088BF10C;
      }
      goto L_088BF070;
    }
L_088BF070:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_088BF10C;
      }
      goto L_088BF078;
    }
L_088BF078:
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_088BF0CC;
      }
      goto L_088BF080;
    }
L_088BF080:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088BF068;
      }
      goto L_088BF088;
    }
L_088BF088:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(60), ctx.gpr[16]);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(58), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(58))))));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(64), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(20))))));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(65), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(12)));
    jump_target = aot_gpr_6;
    ctx.gpr[31] = (0x088BF0B0u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088BF0B0u) goto L_088BF0B0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088BF0B0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_088BF0C4;
      }
      goto L_088BF0B8;
    }
L_088BF0B8:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(56));
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088BF0CC;
      }
      goto L_088BF0C4;
    }
L_088BF0C4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_088BF10C;
      }
      goto L_088BF0CC;
    }
L_088BF0CC:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(68), ctx.gpr[16]);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(66), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(66))))));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(20))))));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(73), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(12)));
    jump_target = aot_gpr_6;
    ctx.gpr[31] = (0x088BF0F4u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088BF0F4u) goto L_088BF0F4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088BF0F4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_088BF108;
      }
      goto L_088BF0FC;
    }
L_088BF0FC:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(56));
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088BF038;
      }
      goto L_088BF108;
    }
L_088BF108:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    goto L_088BF10C;
L_088BF10C:
    { std::uint32_t aot_run_words[10]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(104), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      ctx.gpr[20] = aot_run_words[4];
      ctx.gpr[21] = aot_run_words[5];
      ctx.gpr[22] = aot_run_words[6];
      ctx.gpr[23] = aot_run_words[7];
      ctx.gpr[30] = aot_run_words[8];
      ctx.gpr[31] = aot_run_words[9];
    }
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088BF13C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-2656));
    { const std::uint32_t aot_run_words[10]{ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], ctx.gpr[23], ctx.gpr[30], ctx.gpr[31]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(2604), aot_run_words); }
    ctx.gpr[16] = (aot_gpr_5 & 255u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    { const bool branch_taken = aot_gpr_5 != 0u;
    ctx.gpr[21] = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_088BF180;
      }
      goto L_088BF178;
    }
L_088BF178:
    ctx.gpr[31] = (0x088BF180u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 452u, 0x08B65D8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088BF180u) goto L_088BF180;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088BF180:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(68)));
    aot_gpr_5 = (aot_gpr_5 & 1u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_088BF1A4;
      }
      goto L_088BF194;
    }
L_088BF194:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (aot_gpr_4 & 255u);
      if (branch_taken) {
          goto L_088BF1AC;
      }
      goto L_088BF1A4;
    }
L_088BF1A4:
    aot_gpr_4 = (0u | 1u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    goto L_088BF1AC;
L_088BF1AC:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088BF1E4;
      }
      goto L_088BF1B4;
    }
L_088BF1B4:
    ctx.gpr[17] = (2237u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-28736));
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(233)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088BF1DC;
      }
      goto L_088BF1C8;
    }
L_088BF1C8:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2592), ctx.gpr[16]);
    { const bool branch_taken = ctx.gpr[16] == 0u;
      if (branch_taken) {
          goto L_088BF1EC;
      }
      goto L_088BF1D4;
    }
L_088BF1D4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088BF1F8;
      }
      goto L_088BF1DC;
    }
L_088BF1DC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0047_entry, 47u, 55u, 0x088C0590u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_088BF1E4;
    }
L_088BF1E4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0047_entry, 47u, 55u, 0x088C0590u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_088BF1EC;
    }
L_088BF1EC:
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x088BF1F8u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0045_entry, 45u, 697u, 0x088BB4BCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088BF1F8u) goto L_088BF1F8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088BF1F8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(100)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(96));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    aot_gpr_4 = (17352u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_13; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_12 = aot_fpr_12 - aot_fpr_13;
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(ctx.gpr[21] + static_cast<std::uint32_t>(4), aot_gpr_4);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) >= 0;
      if (branch_taken) {
          goto L_088BF290;
      }
      goto L_088BF23C;
    }
L_088BF23C:
    aot_mem.aot_direct_store32(ctx.gpr[21] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(6));
    aot_gpr_4 = (aot_gpr_4 & 65535u);
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(8618)));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(aot_gpr_4));
    ctx.gpr[20] = (aot_gpr_29 + static_cast<std::uint32_t>(18));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[21] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(aot_gpr_4));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 8u));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(0u));
    ctx.gpr[23] = (ctx.gpr[21] + static_cast<std::uint32_t>(10));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(16))))));
    aot_mem.aot_direct_store16(ctx.gpr[23] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_4));
    ctx.gpr[9] = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    if (ctx.gpr[9] != aot_gpr_4) {
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2596), ctx.gpr[9]);
        goto L_088BF298;
    }
    goto L_088BF288;
L_088BF288:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2588), ctx.gpr[17]);
      if (branch_taken) {
          goto L_088BFAD4;
      }
      goto L_088BF290;
    }
L_088BF290:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0047_entry, 47u, 55u, 0x088C0590u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_088BF298;
    }
L_088BF298:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(2076));
    ctx.gpr[31] = (0x088BF2A4u);
    aot_gpr_5 = (ctx.gpr[9] + static_cast<std::uint32_t>(4));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0045_entry, 45u, 739u, 0x088BB990u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088BF2A4u) goto L_088BF2A4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088BF2A4:
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(2596)));
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(56));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[9] == aot_gpr_5;
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(2076));
      if (branch_taken) {
          goto L_088BF680;
      }
      goto L_088BF2B8;
    }
L_088BF2B8:
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(2132));
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(2116));
    aot_gpr_8 = (aot_gpr_29 + static_cast<std::uint32_t>(2148));
    goto L_088BF2C4;
L_088BF2C4:
    { const std::uint32_t aot_run_words[12]{0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(2164), aot_run_words); }
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(2076)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2116), aot_gpr_7);
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(2080)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2120), aot_gpr_7);
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(2084)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2124), aot_gpr_7);
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(2088)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2128), aot_gpr_7);
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_gpr_7 = aot_run_words[0];
      ctx.gpr[10] = aot_run_words[1];
      ctx.gpr[11] = aot_run_words[2];
    }
    { const std::uint32_t aot_run_words[3]{aot_gpr_7, ctx.gpr[10], ctx.gpr[11]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(2196), aot_run_words); }
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2208), aot_gpr_7);
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_gpr_7 = aot_run_words[0];
      ctx.gpr[10] = aot_run_words[1];
      ctx.gpr[11] = aot_run_words[2];
    }
    { const std::uint32_t aot_run_words[3]{aot_gpr_7, ctx.gpr[10], ctx.gpr[11]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(2164), aot_run_words); }
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2176), aot_gpr_7);
    aot_gpr_7 = (aot_mem.aot_direct_load32(ctx.gpr[9] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2132), aot_gpr_7);
    aot_gpr_7 = (aot_mem.aot_direct_load32(ctx.gpr[9] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2136), aot_gpr_7);
    aot_gpr_7 = (aot_mem.aot_direct_load32(ctx.gpr[9] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2140), aot_gpr_7);
    aot_gpr_7 = (aot_mem.aot_direct_load32(ctx.gpr[9] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2144), aot_gpr_7);
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(2132), aot_run_words);
      aot_gpr_7 = aot_run_words[0];
      ctx.gpr[10] = aot_run_words[1];
      ctx.gpr[11] = aot_run_words[2];
    }
    { const std::uint32_t aot_run_words[3]{aot_gpr_7, ctx.gpr[10], ctx.gpr[11]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(2180), aot_run_words); }
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(2144)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2192), aot_gpr_7);
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(2092)));
    goto L_088BF398;
L_088BF398:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2132), aot_gpr_7);
    ctx.gpr[10] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(2096)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2136), ctx.gpr[10]);
    ctx.gpr[10] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(2100)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2140), ctx.gpr[10]);
    ctx.gpr[10] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(2104)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2144), ctx.gpr[10]);
    ctx.gpr[10] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(2164)));
    aot_gpr_7 = (ctx.gpr[10] ^ aot_gpr_7);
    aot_gpr_7 = (0u < aot_gpr_7 ? 1u : 0u);
    aot_gpr_7 = (aot_gpr_7 & 255u);
    { const bool branch_taken = aot_gpr_7 == 0u;
    ctx.gpr[10] = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_088BF5E8;
      }
      goto L_088BF3CC;
    }
L_088BF3CC:
    aot_gpr_7 = (aot_mem.aot_direct_load32(ctx.gpr[9] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2116), aot_gpr_7);
    aot_gpr_7 = (aot_mem.aot_direct_load32(ctx.gpr[9] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2120), aot_gpr_7);
    aot_gpr_7 = (aot_mem.aot_direct_load32(ctx.gpr[9] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2124), aot_gpr_7);
    aot_gpr_7 = (aot_mem.aot_direct_load32(ctx.gpr[9] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2128), aot_gpr_7);
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(2180)));
    ctx.gpr[10] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(2116)));
    aot_gpr_7 = (aot_gpr_7 ^ ctx.gpr[10]);
    aot_gpr_7 = (0u < aot_gpr_7 ? 1u : 0u);
    aot_gpr_7 = (aot_gpr_7 & 255u);
    { const bool branch_taken = aot_gpr_7 == 0u;
    ctx.gpr[10] = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_088BF5E8;
      }
      goto L_088BF408;
    }
L_088BF408:
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(2164)));
    ctx.gpr[10] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(2180)));
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[10] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(2348), static_cast<std::uint16_t>(ctx.gpr[10]));
    aot_gpr_7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_7 + static_cast<std::uint32_t>(0))))));
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(2348))))));
    aot_gpr_7 = (aot_gpr_7 - ctx.gpr[10]);
    aot_gpr_7 = (aot_gpr_7 << 16u);
    aot_gpr_7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_7) >> 16u));
    aot_gpr_7 = (static_cast<std::int32_t>(aot_gpr_7) < 0 ? 1u : 0u);
    aot_gpr_7 = (aot_gpr_7 & 255u);
    { const bool branch_taken = aot_gpr_7 == 0u;
      if (branch_taken) {
          goto L_088BF47C;
      }
      goto L_088BF43C;
    }
L_088BF43C:
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(2164)));
    aot_gpr_7 = (aot_gpr_7 + static_cast<std::uint32_t>(2));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2164), aot_gpr_7);
    ctx.gpr[10] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(2172)));
    { const bool branch_taken = aot_gpr_7 != ctx.gpr[10];
      if (branch_taken) {
          goto L_088BF5DC;
      }
      goto L_088BF454;
    }
L_088BF454:
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(2176)));
    aot_gpr_7 = (aot_gpr_7 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2176), aot_gpr_7);
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_7 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2168), aot_gpr_7);
    aot_gpr_7 = (aot_gpr_7 + static_cast<std::uint32_t>(128));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2172), aot_gpr_7);
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(2168)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2164), aot_gpr_7);
      if (branch_taken) {
          goto L_088BF5DC;
      }
      goto L_088BF47C;
    }
L_088BF47C:
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(2180)));
    ctx.gpr[10] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(2164)));
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[10] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(2350), static_cast<std::uint16_t>(ctx.gpr[10]));
    aot_gpr_7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_7 + static_cast<std::uint32_t>(0))))));
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(2350))))));
    aot_gpr_7 = (aot_gpr_7 - ctx.gpr[10]);
    aot_gpr_7 = (aot_gpr_7 << 16u);
    aot_gpr_7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_7) >> 16u));
    aot_gpr_7 = (static_cast<std::int32_t>(aot_gpr_7) < 0 ? 1u : 0u);
    aot_gpr_7 = (aot_gpr_7 & 255u);
    { const bool branch_taken = aot_gpr_7 == 0u;
      if (branch_taken) {
          goto L_088BF4F0;
      }
      goto L_088BF4B0;
    }
L_088BF4B0:
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(2180)));
    aot_gpr_7 = (aot_gpr_7 + static_cast<std::uint32_t>(2));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2180), aot_gpr_7);
    ctx.gpr[10] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(2188)));
    { const bool branch_taken = aot_gpr_7 != ctx.gpr[10];
      if (branch_taken) {
          goto L_088BF5DC;
      }
      goto L_088BF4C8;
    }
L_088BF4C8:
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(2192)));
    aot_gpr_7 = (aot_gpr_7 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2192), aot_gpr_7);
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_7 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2184), aot_gpr_7);
    aot_gpr_7 = (aot_gpr_7 + static_cast<std::uint32_t>(128));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2188), aot_gpr_7);
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(2184)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2180), aot_gpr_7);
      if (branch_taken) {
          goto L_088BF5DC;
      }
      goto L_088BF4F0;
    }
L_088BF4F0:
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(2196)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2212), aot_gpr_7);
    ctx.gpr[10] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(2200)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2216), ctx.gpr[10]);
    ctx.gpr[10] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(2204)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2220), ctx.gpr[10]);
    ctx.gpr[11] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(2208)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2224), ctx.gpr[11]);
    aot_gpr_7 = (aot_gpr_7 + static_cast<std::uint32_t>(2));
    { const bool branch_taken = aot_gpr_7 != ctx.gpr[10];
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2196), aot_gpr_7);
      if (branch_taken) {
          goto L_088BF540;
      }
      goto L_088BF51C;
    }
L_088BF51C:
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(2208)));
    aot_gpr_7 = (aot_gpr_7 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2208), aot_gpr_7);
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_7 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2200), aot_gpr_7);
    aot_gpr_7 = (aot_gpr_7 + static_cast<std::uint32_t>(128));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2204), aot_gpr_7);
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(2200)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2196), aot_gpr_7);
    goto L_088BF540;
L_088BF540:
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(2212)));
    ctx.gpr[10] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(2164)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2228), ctx.gpr[10]);
    ctx.gpr[11] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(2168)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2232), ctx.gpr[11]);
    ctx.gpr[11] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(2172)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2236), ctx.gpr[11]);
    ctx.gpr[2] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(2176)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2240), ctx.gpr[2]);
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[10] != ctx.gpr[11];
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2164), ctx.gpr[10]);
      if (branch_taken) {
          goto L_088BF594;
      }
      goto L_088BF570;
    }
L_088BF570:
    ctx.gpr[10] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(2176)));
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2176), ctx.gpr[10]);
    ctx.gpr[10] = (aot_mem.aot_direct_load32(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2168), ctx.gpr[10]);
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(128));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2172), ctx.gpr[10]);
    ctx.gpr[10] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(2168)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2164), ctx.gpr[10]);
    goto L_088BF594;
L_088BF594:
    ctx.gpr[10] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(2228)));
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[10] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_direct_store16(aot_gpr_7 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[10]));
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(2180)));
    aot_gpr_7 = (aot_gpr_7 + static_cast<std::uint32_t>(2));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2180), aot_gpr_7);
    ctx.gpr[10] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(2188)));
    { const bool branch_taken = aot_gpr_7 != ctx.gpr[10];
      if (branch_taken) {
          goto L_088BF5DC;
      }
      goto L_088BF5B8;
    }
L_088BF5B8:
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(2192)));
    aot_gpr_7 = (aot_gpr_7 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2192), aot_gpr_7);
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_7 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2184), aot_gpr_7);
    aot_gpr_7 = (aot_gpr_7 + static_cast<std::uint32_t>(128));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2188), aot_gpr_7);
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(2184)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2180), aot_gpr_7);
    goto L_088BF5DC;
L_088BF5DC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(2092)));
      if (branch_taken) {
          goto L_088BF398;
      }
      goto L_088BF5E4;
    }
L_088BF5E4:
    ctx.gpr[10] = (aot_gpr_5 | 0u);
    goto L_088BF5E8;
L_088BF5E8:
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_7 = (aot_gpr_8 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2596), ctx.gpr[9]);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(2196)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2116), aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(2200)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2120), aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(2204)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2124), aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(2208)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2128), aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(2092)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2148), aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(2096)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2152), aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(2100)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2156), aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(2104)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2160), aot_gpr_6);
    ctx.gpr[31] = (0x088BF63Cu);
    aot_gpr_6 = (ctx.gpr[10] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0217_entry, 217u, 182u, 0x08B6927Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088BF63Cu) goto L_088BF63C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088BF63C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(2092)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(2076)));
    aot_gpr_4 = (aot_gpr_4 ^ aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_7 = (aot_gpr_4 & 255u);
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(2596)));
    aot_gpr_8 = (aot_gpr_29 + static_cast<std::uint32_t>(2148));
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(2132));
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(2116));
    { const bool branch_taken = aot_gpr_7 == 0u;
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(2076));
      if (branch_taken) {
          goto L_088BF670;
      }
      goto L_088BF668;
    }
L_088BF668:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088BF680;
      }
      goto L_088BF670;
    }
L_088BF670:
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(56));
    aot_gpr_7 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[9] != aot_gpr_7;
      if (branch_taken) {
          goto L_088BF2C4;
      }
      goto L_088BF680;
    }
L_088BF680:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(2092)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(2076)));
    aot_gpr_5 = (aot_gpr_5 ^ aot_gpr_6);
    aot_gpr_5 = (aot_gpr_5 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_088BF974;
      }
      goto L_088BF69C;
    }
L_088BF69C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(2092)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2384), aot_gpr_5);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(2096)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2388), aot_gpr_6);
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(2100)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2392), aot_gpr_7);
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(2104)));
    { const bool branch_taken = aot_gpr_5 != aot_gpr_6;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2396), aot_gpr_7);
      if (branch_taken) {
          goto L_088BF6E0;
      }
      goto L_088BF6C0;
    }
L_088BF6C0:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(2396)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-4));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2396), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2388), aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(128));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2392), aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2384), aot_gpr_5);
    goto L_088BF6E0;
L_088BF6E0:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(2384)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-2));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2384), aot_gpr_5);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_direct_store16(ctx.gpr[23] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_5));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(16))))));
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(2400), static_cast<std::uint16_t>(aot_gpr_5));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[23] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(2402), static_cast<std::uint16_t>(aot_gpr_5));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(2400))))));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(2402))))));
    aot_gpr_5 = (aot_gpr_5 - aot_gpr_6);
    aot_gpr_5 = (aot_gpr_5 << 16u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 16u));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_5) < 31 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_088BF75C;
      }
      goto L_088BF724;
    }
L_088BF724:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(16))))));
    aot_mem.aot_direct_store16(ctx.gpr[23] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_5));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(36)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = aot_gpr_5 == aot_gpr_6;
    aot_gpr_6 = (32768u << 16u);
      if (branch_taken) {
          goto L_088BF75C;
      }
      goto L_088BF73C;
    }
L_088BF73C:
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-1));
    goto L_088BF740;
L_088BF740:
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    aot_gpr_7 = (aot_gpr_7 & aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(4), aot_gpr_7);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(8));
    aot_gpr_7 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = aot_gpr_5 != aot_gpr_7;
      if (branch_taken) {
          goto L_088BF740;
      }
      goto L_088BF75C;
    }
L_088BF75C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr_5 == aot_gpr_6;
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(2244));
      if (branch_taken) {
          goto L_088BF974;
      }
      goto L_088BF76C;
    }
L_088BF76C:
    aot_gpr_7 = (aot_gpr_29 + static_cast<std::uint32_t>(2260));
    aot_gpr_8 = (aot_gpr_29 + static_cast<std::uint32_t>(2276));
    goto L_088BF774;
L_088BF774:
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2292), ctx.gpr[9]);
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2296), ctx.gpr[9]);
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2300), ctx.gpr[9]);
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(16)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2304), ctx.gpr[9]);
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(20)));
    goto L_088BF798;
L_088BF798:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2244), ctx.gpr[9]);
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(24)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2248), ctx.gpr[9]);
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(28)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2252), ctx.gpr[9]);
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(32)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2256), ctx.gpr[9]);
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(2292)));
    ctx.gpr[10] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(2244)));
    ctx.gpr[9] = (ctx.gpr[9] ^ ctx.gpr[10]);
    ctx.gpr[9] = (0u < ctx.gpr[9] ? 1u : 0u);
    ctx.gpr[9] = (ctx.gpr[9] & 255u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
      if (branch_taken) {
          goto L_088BF844;
      }
      goto L_088BF7D0;
    }
L_088BF7D0:
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(2292)));
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[23] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(2404), static_cast<std::uint16_t>(ctx.gpr[10]));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[9] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(2404))))));
    ctx.gpr[9] = (ctx.gpr[9] - ctx.gpr[10]);
    ctx.gpr[9] = (ctx.gpr[9] << 16u);
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 16u));
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[9]) < 0 ? 1u : 0u);
    ctx.gpr[9] = (ctx.gpr[9] & 255u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
      if (branch_taken) {
          goto L_088BF844;
      }
      goto L_088BF800;
    }
L_088BF800:
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(2292)));
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(2));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2292), ctx.gpr[9]);
    ctx.gpr[10] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(2300)));
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[10];
      if (branch_taken) {
          goto L_088BF83C;
      }
      goto L_088BF818;
    }
L_088BF818:
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(2304)));
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2304), ctx.gpr[9]);
    ctx.gpr[9] = (aot_mem.aot_direct_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2296), ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(128));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2300), ctx.gpr[9]);
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(2296)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2292), ctx.gpr[9]);
    goto L_088BF83C;
L_088BF83C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_088BF798;
      }
      goto L_088BF844;
    }
L_088BF844:
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(20)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2244), ctx.gpr[9]);
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(24)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2248), ctx.gpr[9]);
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(28)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2252), ctx.gpr[9]);
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(32)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2256), ctx.gpr[9]);
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(2292)));
    ctx.gpr[10] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(2244)));
    ctx.gpr[9] = (ctx.gpr[9] ^ ctx.gpr[10]);
    ctx.gpr[9] = (ctx.gpr[9] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[9] = (ctx.gpr[9] & 255u);
    if (ctx.gpr[9] == 0u) {
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2596), aot_gpr_5);
        goto L_088BF8FC;
    }
    goto L_088BF880;
L_088BF880:
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2260), ctx.gpr[9]);
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2264), ctx.gpr[9]);
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2268), ctx.gpr[9]);
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(16)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2272), ctx.gpr[9]);
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(2292)));
    ctx.gpr[10] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(2260)));
    ctx.gpr[9] = (ctx.gpr[9] ^ ctx.gpr[10]);
    ctx.gpr[9] = (0u < ctx.gpr[9] ? 1u : 0u);
    ctx.gpr[9] = (ctx.gpr[9] & 255u);
    if (ctx.gpr[9] == 0u) {
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2596), aot_gpr_5);
        goto L_088BF8FC;
    }
    goto L_088BF8BC;
L_088BF8BC:
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(2292)));
    ctx.gpr[10] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(2296)));
    if (ctx.gpr[9] != ctx.gpr[10]) {
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(2292)));
        goto L_088BF8F0;
    }
    goto L_088BF8CC;
L_088BF8CC:
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(2304)));
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(-4));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2304), ctx.gpr[9]);
    ctx.gpr[9] = (aot_mem.aot_direct_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2296), ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(128));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2300), ctx.gpr[9]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2292), ctx.gpr[9]);
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(2292)));
    goto L_088BF8F0;
L_088BF8F0:
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(-2));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2292), ctx.gpr[9]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2596), aot_gpr_5);
    goto L_088BF8FC;
L_088BF8FC:
    ctx.gpr[9] = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_7 | 0u);
    aot_gpr_7 = (aot_gpr_8 | 0u);
    aot_gpr_4 = (ctx.gpr[9] + static_cast<std::uint32_t>(4));
    aot_gpr_8 = (aot_mem.aot_direct_load32(ctx.gpr[9] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2244), aot_gpr_8);
    aot_gpr_8 = (aot_mem.aot_direct_load32(ctx.gpr[9] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2248), aot_gpr_8);
    aot_gpr_8 = (aot_mem.aot_direct_load32(ctx.gpr[9] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2252), aot_gpr_8);
    aot_gpr_8 = (aot_mem.aot_direct_load32(ctx.gpr[9] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2256), aot_gpr_8);
    aot_gpr_8 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(2292)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2276), aot_gpr_8);
    aot_gpr_8 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(2296)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2280), aot_gpr_8);
    aot_gpr_8 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(2300)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2284), aot_gpr_8);
    aot_gpr_8 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(2304)));
    ctx.gpr[31] = (0x088BF950u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2288), aot_gpr_8);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0217_entry, 217u, 182u, 0x08B6927Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088BF950u) goto L_088BF950;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088BF950:
    aot_gpr_8 = (aot_gpr_29 + static_cast<std::uint32_t>(2276));
    aot_gpr_7 = (aot_gpr_29 + static_cast<std::uint32_t>(2260));
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(2244));
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(2076));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(2596)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(56));
    ctx.gpr[9] = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr_5 != ctx.gpr[9];
      if (branch_taken) {
          goto L_088BF774;
      }
      goto L_088BF974;
    }
L_088BF974:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(2076)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2448), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(2080)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2452), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(2084)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2456), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(2088)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2460), aot_gpr_5);
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(2448));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(2092)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2464), aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(2096)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2468), aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(2100)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2472), aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(2104)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2476), aot_gpr_6);
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(2464));
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2480), aot_gpr_7);
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2484), aot_gpr_7);
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2488), aot_gpr_7);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2492), aot_gpr_5);
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(2480));
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2496), aot_gpr_7);
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2500), aot_gpr_7);
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2504), aot_gpr_7);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2508), aot_gpr_6);
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(2496));
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2512), aot_gpr_7);
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2516), aot_gpr_7);
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2520), aot_gpr_7);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2524), aot_gpr_5);
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(2512));
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2528), aot_gpr_7);
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2532), aot_gpr_7);
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2536), aot_gpr_7);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2540), aot_gpr_6);
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(2528));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(2544), static_cast<std::uint8_t>(0u));
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_8 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    aot_gpr_7 = (aot_gpr_7 ^ aot_gpr_8);
    aot_gpr_7 = (0u < aot_gpr_7 ? 1u : 0u);
    aot_gpr_7 = (aot_gpr_7 & 255u);
    { const bool branch_taken = aot_gpr_7 == 0u;
      if (branch_taken) {
          goto L_088BFAC8;
      }
      goto L_088BFA6C;
    }
L_088BFA6C:
    aot_gpr_7 = (aot_gpr_5 | 0u);
    goto L_088BFA70;
L_088BFA70:
    aot_gpr_8 = (aot_mem.aot_direct_load32(aot_gpr_7 + static_cast<std::uint32_t>(0)));
    aot_gpr_8 = (aot_gpr_8 + static_cast<std::uint32_t>(2));
    aot_mem.aot_direct_store32(aot_gpr_7 + static_cast<std::uint32_t>(0), aot_gpr_8);
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_7 + static_cast<std::uint32_t>(8)));
    if (aot_gpr_8 != ctx.gpr[9]) {
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
        goto L_088BFAB0;
    }
    goto L_088BFA88;
L_088BFA88:
    aot_gpr_8 = (aot_mem.aot_direct_load32(aot_gpr_7 + static_cast<std::uint32_t>(12)));
    aot_gpr_8 = (aot_gpr_8 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_7 + static_cast<std::uint32_t>(12), aot_gpr_8);
    aot_gpr_8 = (aot_mem.aot_direct_load32(aot_gpr_8 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_7 + static_cast<std::uint32_t>(4), aot_gpr_8);
    aot_gpr_8 = (aot_gpr_8 + static_cast<std::uint32_t>(128));
    aot_mem.aot_direct_store32(aot_gpr_7 + static_cast<std::uint32_t>(8), aot_gpr_8);
    aot_gpr_8 = (aot_mem.aot_direct_load32(aot_gpr_7 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_7 + static_cast<std::uint32_t>(0), aot_gpr_8);
    aot_gpr_7 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    goto L_088BFAB0;
L_088BFAB0:
    aot_gpr_8 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    aot_gpr_7 = (aot_gpr_7 ^ aot_gpr_8);
    aot_gpr_7 = (0u < aot_gpr_7 ? 1u : 0u);
    aot_gpr_7 = (aot_gpr_7 & 255u);
    { const bool branch_taken = aot_gpr_7 != 0u;
    aot_gpr_7 = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_088BFA70;
      }
      goto L_088BFAC8;
    }
L_088BFAC8:
    ctx.gpr[31] = (0x088BFAD0u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0217_entry, 217u, 121u, 0x08B6876Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088BFAD0u) goto L_088BFAD0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088BFAD0:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2588), ctx.gpr[17]);
    goto L_088BFAD4;
L_088BFAD4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(84)));
    aot_gpr_4 = (aot_gpr_4 << 16u);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 16u));
    aot_gpr_4 = (aot_gpr_4 << 16u);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 16u));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(16))))));
    aot_gpr_4 = (aot_gpr_5 - aot_gpr_4);
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(2406), static_cast<std::uint16_t>(aot_gpr_4));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(2406))))));
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(2072), static_cast<std::uint16_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(233)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088BFB3C;
      }
      goto L_088BFB08;
    }
L_088BFB08:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(2072))))));
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(2410), static_cast<std::uint16_t>(aot_gpr_4));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[21] + static_cast<std::uint32_t>(10))))));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(2410))))));
    aot_gpr_4 = (aot_gpr_4 - aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 << 16u);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 16u));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 0 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088BFB3C;
      }
      goto L_088BFB34;
    }
L_088BFB34:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[23] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(2072), static_cast<std::uint16_t>(aot_gpr_4));
    goto L_088BFB3C;
L_088BFB3C:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[21] + static_cast<std::uint32_t>(10))))));
    aot_gpr_4 = (aot_gpr_4 << 16u);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 16u));
    aot_gpr_4 = (aot_gpr_4 & 65535u);
    aot_gpr_4 = (aot_gpr_4 & 65535u);
    aot_gpr_5 = (aot_gpr_4 & 255u);
    aot_gpr_6 = (aot_mem.aot_direct_load_word_right(ctx.gpr[20] + static_cast<std::uint32_t>(0), aot_gpr_6));
    aot_gpr_6 = (aot_mem.aot_direct_load_word_left(ctx.gpr[20] + static_cast<std::uint32_t>(3), aot_gpr_6));
    aot_gpr_6 = (aot_gpr_6 & 65535u);
    aot_gpr_7 = (ctx.gpr[20] + aot_gpr_6);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store8(ctx.gpr[20] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_6));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_6) >> 8u));
    aot_mem.aot_direct_store8(ctx.gpr[20] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_direct_store8(aot_gpr_7 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 8u));
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_gpr_5 = (aot_mem.aot_direct_load_word_right(ctx.gpr[20] + static_cast<std::uint32_t>(0), aot_gpr_5));
    aot_gpr_5 = (aot_mem.aot_direct_load_word_left(ctx.gpr[20] + static_cast<std::uint32_t>(3), aot_gpr_5));
    aot_gpr_5 = (aot_gpr_5 & 65535u);
    aot_gpr_6 = (ctx.gpr[20] + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store8(ctx.gpr[20] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_5));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 8u));
    aot_mem.aot_direct_store8(ctx.gpr[20] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_direct_store8(aot_gpr_6 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(18)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2584), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(48)));
    aot_gpr_4 = (aot_gpr_5 - aot_gpr_4);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 2u));
    aot_gpr_5 = (aot_gpr_5 >> 30u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 2u));
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_gpr_5 = (aot_mem.aot_direct_load_word_right(ctx.gpr[20] + static_cast<std::uint32_t>(0), aot_gpr_5));
    aot_gpr_5 = (aot_mem.aot_direct_load_word_left(ctx.gpr[20] + static_cast<std::uint32_t>(3), aot_gpr_5));
    aot_gpr_5 = (aot_gpr_5 & 65535u);
    aot_gpr_6 = (ctx.gpr[20] + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store8(ctx.gpr[20] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_5));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 8u));
    aot_mem.aot_direct_store8(ctx.gpr[20] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_direct_store8(aot_gpr_6 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(48)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_088BFC98;
      }
      goto L_088BFC00;
    }
L_088BFC00:
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_mem.aot_direct_load_word_right(ctx.gpr[20] + static_cast<std::uint32_t>(0), aot_gpr_6));
    aot_gpr_6 = (aot_mem.aot_direct_load_word_left(ctx.gpr[20] + static_cast<std::uint32_t>(3), aot_gpr_6));
    aot_gpr_6 = (aot_gpr_6 & 65535u);
    aot_gpr_7 = (ctx.gpr[20] + aot_gpr_6);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store8(ctx.gpr[20] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_6));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_6) >> 8u));
    aot_mem.aot_direct_store8(ctx.gpr[20] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_direct_store8(aot_gpr_7 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(2))))));
    aot_gpr_5 = (aot_gpr_5 & 65535u);
    aot_gpr_5 = (aot_gpr_5 & 65535u);
    aot_gpr_6 = (aot_gpr_5 & 255u);
    aot_gpr_7 = (aot_mem.aot_direct_load_word_right(ctx.gpr[20] + static_cast<std::uint32_t>(0), aot_gpr_7));
    aot_gpr_7 = (aot_mem.aot_direct_load_word_left(ctx.gpr[20] + static_cast<std::uint32_t>(3), aot_gpr_7));
    aot_gpr_7 = (aot_gpr_7 & 65535u);
    aot_gpr_8 = (ctx.gpr[20] + aot_gpr_7);
    aot_gpr_7 = (aot_gpr_7 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store8(ctx.gpr[20] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_7));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_7) >> 8u));
    aot_mem.aot_direct_store8(ctx.gpr[20] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_direct_store8(aot_gpr_8 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_6));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 8u));
    aot_gpr_5 = (aot_gpr_5 & 255u);
    aot_gpr_6 = (aot_mem.aot_direct_load_word_right(ctx.gpr[20] + static_cast<std::uint32_t>(0), aot_gpr_6));
    aot_gpr_6 = (aot_mem.aot_direct_load_word_left(ctx.gpr[20] + static_cast<std::uint32_t>(3), aot_gpr_6));
    aot_gpr_6 = (aot_gpr_6 & 65535u);
    aot_gpr_7 = (ctx.gpr[20] + aot_gpr_6);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store8(ctx.gpr[20] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_6));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_6) >> 8u));
    aot_mem.aot_direct_store8(ctx.gpr[20] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_direct_store8(aot_gpr_7 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_088BFC00;
      }
      goto L_088BFC98;
    }
L_088BFC98:
    ctx.gpr[22] = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(48)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(2444), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(2445), static_cast<std::uint8_t>(0u));
    aot_gpr_5 = (aot_gpr_4 - aot_gpr_4);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 2u));
    aot_gpr_6 = (aot_gpr_6 >> 30u);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 2u));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_5) <= 0;
      if (branch_taken) {
          goto L_088BFCE4;
      }
      goto L_088BFCC4;
    }
L_088BFCC4:
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(2))))));
    aot_mem.aot_direct_store16(ctx.gpr[22] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_6));
    aot_mem.aot_direct_store16(ctx.gpr[22] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(aot_gpr_7));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_5) > 0;
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088BFCC4;
      }
      goto L_088BFCE4;
    }
L_088BFCE4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(52)));
    aot_gpr_5 = (ctx.gpr[22] | 0u);
    { const bool branch_taken = aot_gpr_5 == aot_gpr_4;
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(2446), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088BFD00;
      }
      goto L_088BFCF4;
    }
L_088BFCF4:
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(4));
    goto L_088BFCF8;
L_088BFCF8:
    { const bool branch_taken = aot_gpr_5 != aot_gpr_4;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088BFCF8;
      }
      goto L_088BFD00;
    }
L_088BFD00:
    aot_mem.aot_direct_store32(ctx.gpr[21] + static_cast<std::uint32_t>(52), ctx.gpr[22]);
    ctx.gpr[22] = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(24)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[22] == aot_gpr_4;
    ctx.gpr[30] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0047_entry, 47u, 14u, 0x088C0188u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_088BFD14;
    }
L_088BFD14:
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-24128));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-24120));
    aot_gpr_6 = (ctx.gpr[28] + static_cast<std::uint32_t>(-24112));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2580), aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-24104));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2576), aot_gpr_5);
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-24096));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2572), aot_gpr_6);
    aot_gpr_6 = (ctx.gpr[28] + static_cast<std::uint32_t>(-24088));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2568), aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-24080));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2564), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(2584)));
    aot_gpr_7 = (ctx.gpr[28] + static_cast<std::uint32_t>(-24072));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2560), aot_gpr_6);
    aot_gpr_5 = (ctx.gpr[20] + aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2556), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2548), aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2552), aot_gpr_7);
    goto L_088BFD60;
L_088BFD60:
    ctx.gpr[16] = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(2072))))));
    ctx.gpr[31] = (0x088BFD70u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0165_entry, 165u, 411u, 0x08A9B470u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088BFD70u) goto L_088BFD70;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088BFD70:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    aot_gpr_4 = (aot_gpr_4 ^ aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0047_entry, 47u, 13u, 0x088C0178u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_088BFD8C;
    }
L_088BFD8C:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1)));
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0047_entry, 47u, 13u, 0x088C0178u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_088BFDA0;
    }
L_088BFDA0:
    ctx.gpr[18] = (aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(18)));
    ctx.gpr[17] = (0u | 4000u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(64));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_5;
    ctx.gpr[31] = (0x088BFDC0u);
    aot_gpr_4 = (ctx.gpr[16] + aot_gpr_4);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088BFDC0u) goto L_088BFDC0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088BFDC0:
    aot_gpr_4 = (0u | 7u);
    { const bool branch_taken = ctx.gpr[2] != aot_gpr_4;
    ctx.gpr[19] = (ctx.gpr[16] + static_cast<std::uint32_t>(14));
      if (branch_taken) {
          goto L_088BFDDC;
      }
      goto L_088BFDCC;
    }
L_088BFDCC:
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_gpr_4 & 63u);
    ctx.gpr[17] = (aot_gpr_4 << 6u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(2000));
    goto L_088BFDDC;
L_088BFDDC:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(16))))));
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(2412), static_cast<std::uint16_t>(aot_gpr_4));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[21] + static_cast<std::uint32_t>(10))))));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(2412))))));
    aot_gpr_4 = (aot_gpr_4 - aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 << 16u);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 16u));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 0 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088BFE70;
      }
      goto L_088BFE10;
    }
L_088BFE10:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(2416), static_cast<std::uint16_t>(aot_gpr_4));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[21] + static_cast<std::uint32_t>(10))))));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(2416))))));
    aot_gpr_4 = (aot_gpr_4 - aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 << 16u);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 16u));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 0 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088BFE70;
      }
      goto L_088BFE40;
    }
L_088BFE40:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(16))))));
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(2420), static_cast<std::uint16_t>(aot_gpr_4));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[19] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(2422), static_cast<std::uint16_t>(aot_gpr_4));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(2420))))));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(2422))))));
    aot_gpr_4 = (aot_gpr_4 - aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 << 16u);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 16u));
    aot_gpr_4 = (aot_gpr_4 < ctx.gpr[17] ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0047_entry, 47u, 2u, 0x088C0014u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_088BFE70;
    }
L_088BFE70:
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_gpr_4 | 32768u);
    aot_gpr_4 = (aot_gpr_4 & 65535u);
    aot_gpr_4 = (aot_gpr_4 & 65535u);
    aot_gpr_5 = (aot_gpr_4 & 255u);
    aot_gpr_6 = (aot_mem.aot_direct_load_word_right(ctx.gpr[20] + static_cast<std::uint32_t>(0), aot_gpr_6));
    aot_gpr_6 = (aot_mem.aot_direct_load_word_left(ctx.gpr[20] + static_cast<std::uint32_t>(3), aot_gpr_6));
    aot_gpr_6 = (aot_gpr_6 & 65535u);
    aot_gpr_7 = (ctx.gpr[20] + aot_gpr_6);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store8(ctx.gpr[20] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_6));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_6) >> 8u));
    aot_mem.aot_direct_store8(ctx.gpr[20] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_direct_store8(aot_gpr_7 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 8u));
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_gpr_5 = (aot_mem.aot_direct_load_word_right(ctx.gpr[20] + static_cast<std::uint32_t>(0), aot_gpr_5));
    aot_gpr_5 = (aot_mem.aot_direct_load_word_left(ctx.gpr[20] + static_cast<std::uint32_t>(3), aot_gpr_5));
    aot_gpr_5 = (aot_gpr_5 & 65535u);
    aot_gpr_6 = (ctx.gpr[20] + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store8(ctx.gpr[20] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_5));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 8u));
    aot_mem.aot_direct_store8(ctx.gpr[20] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_direct_store8(aot_gpr_6 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(64));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_5;
    ctx.gpr[31] = (0x088BFEECu);
    aot_gpr_4 = (ctx.gpr[16] + aot_gpr_4);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088BFEECu) goto L_088BFEEC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088BFEEC:
    aot_gpr_4 = (ctx.gpr[2] & 255u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2))))));
    { const bool branch_taken = aot_gpr_5 == ctx.gpr[30];
      if (branch_taken) {
          goto L_088BFF04;
      }
      goto L_088BFEFC;
    }
L_088BFEFC:
    aot_gpr_4 = (aot_gpr_4 | 128u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    goto L_088BFF04;
L_088BFF04:
    aot_gpr_5 = (aot_mem.aot_direct_load_word_right(ctx.gpr[20] + static_cast<std::uint32_t>(0), aot_gpr_5));
    aot_gpr_5 = (aot_mem.aot_direct_load_word_left(ctx.gpr[20] + static_cast<std::uint32_t>(3), aot_gpr_5));
    aot_gpr_5 = (aot_gpr_5 & 65535u);
    aot_gpr_6 = (ctx.gpr[20] + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store8(ctx.gpr[20] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_5));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 8u));
    aot_mem.aot_direct_store8(ctx.gpr[20] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_direct_store8(aot_gpr_6 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_gpr_4 & 128u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088BFFBC;
      }
      goto L_088BFF34;
    }
L_088BFF34:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2))))));
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_gpr_5 = (aot_mem.aot_direct_load_word_right(ctx.gpr[20] + static_cast<std::uint32_t>(0), aot_gpr_5));
    aot_gpr_5 = (aot_mem.aot_direct_load_word_left(ctx.gpr[20] + static_cast<std::uint32_t>(3), aot_gpr_5));
    aot_gpr_5 = (aot_gpr_5 & 65535u);
    aot_gpr_6 = (ctx.gpr[20] + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store8(ctx.gpr[20] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_5));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 8u));
    aot_mem.aot_direct_store8(ctx.gpr[20] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_direct_store8(aot_gpr_6 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(6)));
    aot_gpr_4 = (aot_gpr_4 & 65535u);
    aot_gpr_5 = (aot_gpr_4 & 255u);
    aot_gpr_6 = (aot_mem.aot_direct_load_word_right(ctx.gpr[20] + static_cast<std::uint32_t>(0), aot_gpr_6));
    aot_gpr_6 = (aot_mem.aot_direct_load_word_left(ctx.gpr[20] + static_cast<std::uint32_t>(3), aot_gpr_6));
    aot_gpr_6 = (aot_gpr_6 & 65535u);
    aot_gpr_7 = (ctx.gpr[20] + aot_gpr_6);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store8(ctx.gpr[20] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_6));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_6) >> 8u));
    aot_mem.aot_direct_store8(ctx.gpr[20] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_direct_store8(aot_gpr_7 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 8u));
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_gpr_5 = (aot_mem.aot_direct_load_word_right(ctx.gpr[20] + static_cast<std::uint32_t>(0), aot_gpr_5));
    aot_gpr_5 = (aot_mem.aot_direct_load_word_left(ctx.gpr[20] + static_cast<std::uint32_t>(3), aot_gpr_5));
    aot_gpr_5 = (aot_gpr_5 & 65535u);
    aot_gpr_6 = (ctx.gpr[20] + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store8(ctx.gpr[20] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_5));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 8u));
    aot_mem.aot_direct_store8(ctx.gpr[20] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_direct_store8(aot_gpr_6 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_088BFFBC;
L_088BFFBC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(88));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    aot_gpr_4 = (ctx.gpr[16] + aot_gpr_4);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(16))))));
    aot_gpr_7 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr_7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_7 + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(2308), static_cast<std::uint16_t>(aot_gpr_7));
    aot_gpr_7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(2308))))));
    aot_gpr_7 = (aot_gpr_7 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(2426), static_cast<std::uint16_t>(aot_gpr_7));
    aot_gpr_7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(2426))))));
    aot_gpr_8 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_8;
    ctx.gpr[31] = (0x088BFFF8u);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088BFFF8u) goto L_088BFFF8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088BFFF8:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(16))))));
    ctx.pc = 0x088C0000u; AOT_REGCACHE_SYNC_OUT(); return;
}

#undef AOT_REGCACHE_SYNC_IN
#undef AOT_REGCACHE_SYNC_OUT

void recomp_unit_0046(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0046_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_46(Runtime &runtime) {
    runtime.register_generated_unit(46u, 0x088BC000u, 16384u, &recomp_unit_0046, &recomp_unit_0046_entry);
    // PSPRECOMP_V812_COMPACT_REGISTRATION: same entry set, looped once in Runtime instead of source-expanded calls.
    runtime.register_generated_entry_mask(0x088BC000u, &recomp_unit_0046, "recomp_unit_0046",
                                          kEntryMasks_recomp_unit_0046, 64u);
}
} // namespace psprecomp
