#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include "vcs_resident_regions.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
// PSPRECOMP_V811_COMPACT_DISPATCH: 64-slot occupancy masks + per-group base id.
static constexpr std::uint64_t kEntryMasks_recomp_unit_0120[64] = {
    0x2AA028140A411499ull, 0x4A2A29504544AA8Aull, 0x90554A1084AA854Aull, 0x8AA9000041208112ull,
    0x00002AA000012910ull, 0x90042401090042A2ull, 0x2552492084200110ull, 0x55044002AAA12495ull,
    0x0000800091014020ull, 0xAAA0004424A84548ull, 0x4800042400022A2Aull, 0x0400610044400008ull,
    0x08291048442D0C44ull, 0x6862202284A14A00ull, 0x8528002148824221ull, 0x2000200085210A12ull,
    0x0441104400000000ull, 0x4200190000000090ull, 0x2241001010814A40ull, 0x0000000000000001ull,
    0x0008480102100000ull, 0x0840000000000000ull, 0x0308001900900002ull, 0x0121849542001182ull,
    0x4811024200120010ull, 0x221122088A240884ull, 0x4800812040022010ull, 0x512250048A244A00ull,
    0xA04009020000811Aull, 0x81141410022A0829ull, 0x0200428414508000ull, 0x05108A4088442109ull,
    0x842C202008204101ull, 0x0248020810404040ull, 0x8842080020205843ull, 0x0102610510A52AA8ull,
    0x022A4922492D2010ull, 0xA0820240210A4A81ull, 0x025031004C062008ull, 0x44842100A2222222ull,
    0x428022A452192480ull, 0x2D502A8114044A82ull, 0x1480002914254AA2ull, 0x01448A1000040209ull,
    0x1000093A02041008ull, 0x01010000200C24A1ull, 0x05A96516A9044800ull, 0x0908308200200118ull,
    0x01680A2204A0A4A0ull, 0x02C81242C245AA89ull, 0x4504004154450840ull, 0x12A041120080C891ull,
    0x2C01400002D1420Dull, 0x0410D002582020A0ull, 0x0208212801114800ull, 0x0004240A00000641ull,
    0xAAA04008A0001148ull, 0x028802A40A40A200ull, 0xA2D2850440420681ull, 0x2B522219054B2140ull,
    0x401140A096415488ull, 0x0AD5204004452A01ull, 0x4000800002004001ull, 0x100830A812240000ull,
};
static constexpr std::uint16_t kEntryBases_recomp_unit_0120[64] = {
    1u, 20u, 43u, 65u, 79u, 89u, 102u, 117u, 137u, 144u, 162u, 174u, 182u, 199u, 216u, 231u,
    242u, 248u, 255u, 267u, 268u, 274u, 276u, 285u, 300u, 310u, 325u, 334u, 350u, 361u, 376u, 386u,
    401u, 413u, 422u, 435u, 453u, 471u, 486u, 499u, 514u, 531u, 550u, 567u, 578u, 589u, 599u, 619u,
    630u, 646u, 667u, 681u, 696u, 711u, 724u, 735u, 744u, 758u, 771u, 789u, 810u, 827u, 844u, 849u,
};
void recomp_unit_0120_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
// PSPRECOMP_AOT_REGCACHE_BEGIN
// PSPRECOMP_AOT_REGCACHE_META gprs=4,5,29,31,6,16 fprs=12,13,20,14 gpr_occ=4373 fpr_occ=267 gpr_total=6093 fpr_total=349
    std::uint32_t aot_gpr_4 = ctx.gpr[4];
    std::uint32_t aot_gpr_5 = ctx.gpr[5];
    std::uint32_t aot_gpr_29 = ctx.gpr[29];
    std::uint32_t aot_gpr_31 = ctx.gpr[31];
    std::uint32_t aot_gpr_6 = ctx.gpr[6];
    std::uint32_t aot_gpr_16 = ctx.gpr[16];
    float aot_fpr_12 = ctx.fpr[12];
    float aot_fpr_13 = ctx.fpr[13];
    float aot_fpr_20 = ctx.fpr[20];
    float aot_fpr_14 = ctx.fpr[14];
    bool aot_regcache_valid = true;
#define AOT_REGCACHE_SYNC_OUT() do { if (aot_regcache_valid) { ctx.gpr[4] = aot_gpr_4; ctx.gpr[5] = aot_gpr_5; ctx.gpr[29] = aot_gpr_29; ctx.gpr[31] = aot_gpr_31; ctx.gpr[6] = aot_gpr_6; ctx.gpr[16] = aot_gpr_16; ctx.fpr[12] = aot_fpr_12; ctx.fpr[13] = aot_fpr_13; ctx.fpr[20] = aot_fpr_20; ctx.fpr[14] = aot_fpr_14; } } while (false)
#define AOT_REGCACHE_SYNC_IN() do { if (aot_regcache_valid) { aot_gpr_4 = ctx.gpr[4]; aot_gpr_5 = ctx.gpr[5]; aot_gpr_29 = ctx.gpr[29]; aot_gpr_31 = ctx.gpr[31]; aot_gpr_6 = ctx.gpr[6]; aot_gpr_16 = ctx.gpr[16]; aot_fpr_12 = ctx.fpr[12]; aot_fpr_13 = ctx.fpr[13]; aot_fpr_20 = ctx.fpr[20]; aot_fpr_14 = ctx.fpr[14]; } } while (false)
// PSPRECOMP_AOT_REGCACHE_END
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_redispatch_rounds = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x089E4000u;
        entry_id = 0u;
        if (entry_delta < 16372u && (entry_delta & 3u) == 0u) {
            const std::uint32_t entry_slot = entry_delta >> 2u;
            const std::uint32_t entry_group = entry_slot >> 6u;
            const std::uint64_t entry_mask = kEntryMasks_recomp_unit_0120[entry_group];
            const std::uint64_t entry_bit = 1ull << (entry_slot & 63u);
            if ((entry_mask & entry_bit) != 0u) {
                entry_id = static_cast<std::uint16_t>(
                    kEntryBases_recomp_unit_0120[entry_group] +
                    std::popcount(entry_mask & (entry_bit - 1ull)));
            }
        }
    }
    switch (entry_id) {
    case 1u: goto L_089E4000;
    case 2u: goto L_089E400C;
    case 3u: goto L_089E4010;
    case 4u: goto L_089E401C;
    case 5u: goto L_089E4028;
    case 6u: goto L_089E4030;
    case 7u: goto L_089E4040;
    case 8u: goto L_089E4058;
    case 9u: goto L_089E4064;
    case 10u: goto L_089E406C;
    case 11u: goto L_089E4088;
    case 12u: goto L_089E4090;
    case 13u: goto L_089E40AC;
    case 14u: goto L_089E40B4;
    case 15u: goto L_089E40D4;
    case 16u: goto L_089E40DC;
    case 17u: goto L_089E40E4;
    case 18u: goto L_089E40EC;
    case 19u: goto L_089E40F4;
    case 20u: goto L_089E4104;
    case 21u: goto L_089E410C;
    case 22u: goto L_089E411C;
    case 23u: goto L_089E4124;
    case 24u: goto L_089E412C;
    case 25u: goto L_089E4134;
    case 26u: goto L_089E413C;
    case 27u: goto L_089E4148;
    case 28u: goto L_089E4158;
    case 29u: goto L_089E4160;
    case 30u: goto L_089E4168;
    case 31u: goto L_089E4178;
    case 32u: goto L_089E4190;
    case 33u: goto L_089E4198;
    case 34u: goto L_089E41A0;
    case 35u: goto L_089E41AC;
    case 36u: goto L_089E41B4;
    case 37u: goto L_089E41C4;
    case 38u: goto L_089E41CC;
    case 39u: goto L_089E41D4;
    case 40u: goto L_089E41E4;
    case 41u: goto L_089E41EC;
    case 42u: goto L_089E41F8;
    case 43u: goto L_089E4204;
    case 44u: goto L_089E420C;
    case 45u: goto L_089E4218;
    case 46u: goto L_089E4220;
    case 47u: goto L_089E4228;
    case 48u: goto L_089E423C;
    case 49u: goto L_089E4244;
    case 50u: goto L_089E424C;
    case 51u: goto L_089E4254;
    case 52u: goto L_089E425C;
    case 53u: goto L_089E4268;
    case 54u: goto L_089E427C;
    case 55u: goto L_089E4290;
    case 56u: goto L_089E42A4;
    case 57u: goto L_089E42AC;
    case 58u: goto L_089E42B8;
    case 59u: goto L_089E42C0;
    case 60u: goto L_089E42C8;
    case 61u: goto L_089E42D0;
    case 62u: goto L_089E42D8;
    case 63u: goto L_089E42F0;
    case 64u: goto L_089E42FC;
    case 65u: goto L_089E4304;
    case 66u: goto L_089E4310;
    case 67u: goto L_089E4320;
    case 68u: goto L_089E433C;
    case 69u: goto L_089E4354;
    case 70u: goto L_089E4360;
    case 71u: goto L_089E4378;
    case 72u: goto L_089E43C0;
    case 73u: goto L_089E43CC;
    case 74u: goto L_089E43D4;
    case 75u: goto L_089E43DC;
    case 76u: goto L_089E43E4;
    case 77u: goto L_089E43EC;
    case 78u: goto L_089E43FC;
    case 79u: goto L_089E4410;
    case 80u: goto L_089E4420;
    case 81u: goto L_089E442C;
    case 82u: goto L_089E4434;
    case 83u: goto L_089E4440;
    case 84u: goto L_089E4494;
    case 85u: goto L_089E449C;
    case 86u: goto L_089E44A4;
    case 87u: goto L_089E44AC;
    case 88u: goto L_089E44B4;
    case 89u: goto L_089E4504;
    case 90u: goto L_089E4514;
    case 91u: goto L_089E451C;
    case 92u: goto L_089E4524;
    case 93u: goto L_089E4538;
    case 94u: goto L_089E4560;
    case 95u: goto L_089E456C;
    case 96u: goto L_089E4580;
    case 97u: goto L_089E45A8;
    case 98u: goto L_089E45B4;
    case 99u: goto L_089E45C8;
    case 100u: goto L_089E45F0;
    case 101u: goto L_089E45FC;
    case 102u: goto L_089E4610;
    case 103u: goto L_089E4620;
    case 104u: goto L_089E4654;
    case 105u: goto L_089E4668;
    case 106u: goto L_089E467C;
    case 107u: goto L_089E4694;
    case 108u: goto L_089E46A0;
    case 109u: goto L_089E46AC;
    case 110u: goto L_089E46B8;
    case 111u: goto L_089E46C4;
    case 112u: goto L_089E46D0;
    case 113u: goto L_089E46D8;
    case 114u: goto L_089E46E0;
    case 115u: goto L_089E46E8;
    case 116u: goto L_089E46F4;
    case 117u: goto L_089E4700;
    case 118u: goto L_089E4708;
    case 119u: goto L_089E4710;
    case 120u: goto L_089E471C;
    case 121u: goto L_089E4728;
    case 122u: goto L_089E4734;
    case 123u: goto L_089E4740;
    case 124u: goto L_089E4754;
    case 125u: goto L_089E475C;
    case 126u: goto L_089E4764;
    case 127u: goto L_089E476C;
    case 128u: goto L_089E4774;
    case 129u: goto L_089E477C;
    case 130u: goto L_089E4784;
    case 131u: goto L_089E47B8;
    case 132u: goto L_089E47C8;
    case 133u: goto L_089E47E0;
    case 134u: goto L_089E47E8;
    case 135u: goto L_089E47F0;
    case 136u: goto L_089E47F8;
    case 137u: goto L_089E4814;
    case 138u: goto L_089E4838;
    case 139u: goto L_089E4840;
    case 140u: goto L_089E4860;
    case 141u: goto L_089E4870;
    case 142u: goto L_089E487C;
    case 143u: goto L_089E48BC;
    case 144u: goto L_089E490C;
    case 145u: goto L_089E4918;
    case 146u: goto L_089E4920;
    case 147u: goto L_089E4928;
    case 148u: goto L_089E4938;
    case 149u: goto L_089E494C;
    case 150u: goto L_089E4954;
    case 151u: goto L_089E495C;
    case 152u: goto L_089E4968;
    case 153u: goto L_089E4974;
    case 154u: goto L_089E4988;
    case 155u: goto L_089E4998;
    case 156u: goto L_089E49D4;
    case 157u: goto L_089E49DC;
    case 158u: goto L_089E49E4;
    case 159u: goto L_089E49EC;
    case 160u: goto L_089E49F4;
    case 161u: goto L_089E49FC;
    case 162u: goto L_089E4A04;
    case 163u: goto L_089E4A0C;
    case 164u: goto L_089E4A14;
    case 165u: goto L_089E4A24;
    case 166u: goto L_089E4A2C;
    case 167u: goto L_089E4A34;
    case 168u: goto L_089E4A44;
    case 169u: goto L_089E4A88;
    case 170u: goto L_089E4A94;
    case 171u: goto L_089E4AA8;
    case 172u: goto L_089E4AEC;
    case 173u: goto L_089E4AF8;
    case 174u: goto L_089E4B0C;
    case 175u: goto L_089E4B58;
    case 176u: goto L_089E4B68;
    case 177u: goto L_089E4B78;
    case 178u: goto L_089E4BA0;
    case 179u: goto L_089E4BB4;
    case 180u: goto L_089E4BB8;
    case 181u: goto L_089E4BE8;
    case 182u: goto L_089E4C08;
    case 183u: goto L_089E4C18;
    case 184u: goto L_089E4C28;
    case 185u: goto L_089E4C2C;
    case 186u: goto L_089E4C40;
    case 187u: goto L_089E4C48;
    case 188u: goto L_089E4C4C;
    case 189u: goto L_089E4C54;
    case 190u: goto L_089E4C68;
    case 191u: goto L_089E4C78;
    case 192u: goto L_089E4C8C;
    case 193u: goto L_089E4C98;
    case 194u: goto L_089E4CB0;
    case 195u: goto L_089E4CC0;
    case 196u: goto L_089E4CCC;
    case 197u: goto L_089E4CD4;
    case 198u: goto L_089E4CEC;
    case 199u: goto L_089E4D24;
    case 200u: goto L_089E4D2C;
    case 201u: goto L_089E4D38;
    case 202u: goto L_089E4D40;
    case 203u: goto L_089E4D54;
    case 204u: goto L_089E4D5C;
    case 205u: goto L_089E4D68;
    case 206u: goto L_089E4D7C;
    case 207u: goto L_089E4D84;
    case 208u: goto L_089E4D94;
    case 209u: goto L_089E4DB4;
    case 210u: goto L_089E4DC4;
    case 211u: goto L_089E4DD4;
    case 212u: goto L_089E4DD8;
    case 213u: goto L_089E4DEC;
    case 214u: goto L_089E4DF4;
    case 215u: goto L_089E4DF8;
    case 216u: goto L_089E4E00;
    case 217u: goto L_089E4E14;
    case 218u: goto L_089E4E24;
    case 219u: goto L_089E4E38;
    case 220u: goto L_089E4E44;
    case 221u: goto L_089E4E5C;
    case 222u: goto L_089E4E6C;
    case 223u: goto L_089E4E78;
    case 224u: goto L_089E4E80;
    case 225u: goto L_089E4E94;
    case 226u: goto L_089E4ECC;
    case 227u: goto L_089E4ED4;
    case 228u: goto L_089E4EE0;
    case 229u: goto L_089E4EE8;
    case 230u: goto L_089E4EFC;
    case 231u: goto L_089E4F04;
    case 232u: goto L_089E4F10;
    case 233u: goto L_089E4F24;
    case 234u: goto L_089E4F2C;
    case 235u: goto L_089E4F40;
    case 236u: goto L_089E4F54;
    case 237u: goto L_089E4F60;
    case 238u: goto L_089E4F68;
    case 239u: goto L_089E4F7C;
    case 240u: goto L_089E4FB4;
    case 241u: goto L_089E4FF4;
    case 242u: goto L_089E5088;
    case 243u: goto L_089E5098;
    case 244u: goto L_089E50B0;
    case 245u: goto L_089E50C0;
    case 246u: goto L_089E50D8;
    case 247u: goto L_089E50E8;
    case 248u: goto L_089E5110;
    case 249u: goto L_089E511C;
    case 250u: goto L_089E51A0;
    case 251u: goto L_089E51AC;
    case 252u: goto L_089E51B0;
    case 253u: goto L_089E51E4;
    case 254u: goto L_089E51F8;
    case 255u: goto L_089E5218;
    case 256u: goto L_089E5224;
    case 257u: goto L_089E522C;
    case 258u: goto L_089E5238;
    case 259u: goto L_089E5240;
    case 260u: goto L_089E525C;
    case 261u: goto L_089E5270;
    case 262u: goto L_089E5290;
    case 263u: goto L_089E52C0;
    case 264u: goto L_089E52D8;
    case 265u: goto L_089E52E4;
    case 266u: goto L_089E52F4;
    case 267u: goto L_089E5300;
    case 268u: goto L_089E5450;
    case 269u: goto L_089E5464;
    case 270u: goto L_089E5480;
    case 271u: goto L_089E54AC;
    case 272u: goto L_089E54B8;
    case 273u: goto L_089E54CC;
    case 274u: goto L_089E55D8;
    case 275u: goto L_089E55EC;
    case 276u: goto L_089E5604;
    case 277u: goto L_089E5650;
    case 278u: goto L_089E565C;
    case 279u: goto L_089E5680;
    case 280u: goto L_089E568C;
    case 281u: goto L_089E5690;
    case 282u: goto L_089E56CC;
    case 283u: goto L_089E56E0;
    case 284u: goto L_089E56E4;
    case 285u: goto L_089E5704;
    case 286u: goto L_089E571C;
    case 287u: goto L_089E5720;
    case 288u: goto L_089E5730;
    case 289u: goto L_089E5764;
    case 290u: goto L_089E5778;
    case 291u: goto L_089E5780;
    case 292u: goto L_089E5788;
    case 293u: goto L_089E5790;
    case 294u: goto L_089E579C;
    case 295u: goto L_089E57A8;
    case 296u: goto L_089E57BC;
    case 297u: goto L_089E57C0;
    case 298u: goto L_089E57D4;
    case 299u: goto L_089E57E0;
    case 300u: goto L_089E5810;
    case 301u: goto L_089E5844;
    case 302u: goto L_089E5850;
    case 303u: goto L_089E5884;
    case 304u: goto L_089E5898;
    case 305u: goto L_089E58A4;
    case 306u: goto L_089E58C0;
    case 307u: goto L_089E58D0;
    case 308u: goto L_089E58EC;
    case 309u: goto L_089E58F8;
    case 310u: goto L_089E5908;
    case 311u: goto L_089E591C;
    case 312u: goto L_089E592C;
    case 313u: goto L_089E5948;
    case 314u: goto L_089E5954;
    case 315u: goto L_089E5964;
    case 316u: goto L_089E596C;
    case 317u: goto L_089E597C;
    case 318u: goto L_089E598C;
    case 319u: goto L_089E59A4;
    case 320u: goto L_089E59B4;
    case 321u: goto L_089E59C0;
    case 322u: goto L_089E59D0;
    case 323u: goto L_089E59E4;
    case 324u: goto L_089E59F4;
    case 325u: goto L_089E5A10;
    case 326u: goto L_089E5A34;
    case 327u: goto L_089E5A44;
    case 328u: goto L_089E5A78;
    case 329u: goto L_089E5A94;
    case 330u: goto L_089E5AA0;
    case 331u: goto L_089E5ABC;
    case 332u: goto L_089E5AEC;
    case 333u: goto L_089E5AF8;
    case 334u: goto L_089E5B24;
    case 335u: goto L_089E5B2C;
    case 336u: goto L_089E5B38;
    case 337u: goto L_089E5B48;
    case 338u: goto L_089E5B54;
    case 339u: goto L_089E5B64;
    case 340u: goto L_089E5B6C;
    case 341u: goto L_089E5B7C;
    case 342u: goto L_089E5B88;
    case 343u: goto L_089E5BB0;
    case 344u: goto L_089E5BB8;
    case 345u: goto L_089E5BC4;
    case 346u: goto L_089E5BD4;
    case 347u: goto L_089E5BE0;
    case 348u: goto L_089E5BF0;
    case 349u: goto L_089E5BF8;
    case 350u: goto L_089E5C04;
    case 351u: goto L_089E5C0C;
    case 352u: goto L_089E5C10;
    case 353u: goto L_089E5C20;
    case 354u: goto L_089E5C3C;
    case 355u: goto L_089E5C84;
    case 356u: goto L_089E5CA0;
    case 357u: goto L_089E5CAC;
    case 358u: goto L_089E5CD8;
    case 359u: goto L_089E5CF4;
    case 360u: goto L_089E5CFC;
    case 361u: goto L_089E5D00;
    case 362u: goto L_089E5D0C;
    case 363u: goto L_089E5D14;
    case 364u: goto L_089E5D2C;
    case 365u: goto L_089E5D44;
    case 366u: goto L_089E5D4C;
    case 367u: goto L_089E5D54;
    case 368u: goto L_089E5D64;
    case 369u: goto L_089E5D90;
    case 370u: goto L_089E5DA8;
    case 371u: goto L_089E5DB0;
    case 372u: goto L_089E5DC8;
    case 373u: goto L_089E5DD0;
    case 374u: goto L_089E5DE0;
    case 375u: goto L_089E5DFC;
    case 376u: goto L_089E5E3C;
    case 377u: goto L_089E5E50;
    case 378u: goto L_089E5E58;
    case 379u: goto L_089E5E68;
    case 380u: goto L_089E5E70;
    case 381u: goto L_089E5E88;
    case 382u: goto L_089E5E9C;
    case 383u: goto L_089E5EA4;
    case 384u: goto L_089E5EB8;
    case 385u: goto L_089E5EE4;
    case 386u: goto L_089E5F00;
    case 387u: goto L_089E5F0C;
    case 388u: goto L_089E5F20;
    case 389u: goto L_089E5F34;
    case 390u: goto L_089E5F48;
    case 391u: goto L_089E5F58;
    case 392u: goto L_089E5F6C;
    case 393u: goto L_089E5F7C;
    case 394u: goto L_089E5F98;
    case 395u: goto L_089E5FA4;
    case 396u: goto L_089E5FAC;
    case 397u: goto L_089E5FBC;
    case 398u: goto L_089E5FD0;
    case 399u: goto L_089E5FE0;
    case 400u: goto L_089E5FE8;
    case 401u: goto L_089E6000;
    case 402u: goto L_089E6020;
    case 403u: goto L_089E6038;
    case 404u: goto L_089E6054;
    case 405u: goto L_089E606C;
    case 406u: goto L_089E6094;
    case 407u: goto L_089E60B4;
    case 408u: goto L_089E60C8;
    case 409u: goto L_089E60CC;
    case 410u: goto L_089E60D4;
    case 411u: goto L_089E60E8;
    case 412u: goto L_089E60FC;
    case 413u: goto L_089E6118;
    case 414u: goto L_089E6138;
    case 415u: goto L_089E6158;
    case 416u: goto L_089E6170;
    case 417u: goto L_089E618C;
    case 418u: goto L_089E61A4;
    case 419u: goto L_089E61CC;
    case 420u: goto L_089E61D8;
    case 421u: goto L_089E61E4;
    case 422u: goto L_089E6200;
    case 423u: goto L_089E6204;
    case 424u: goto L_089E6218;
    case 425u: goto L_089E622C;
    case 426u: goto L_089E6230;
    case 427u: goto L_089E6238;
    case 428u: goto L_089E6254;
    case 429u: goto L_089E6274;
    case 430u: goto L_089E62AC;
    case 431u: goto L_089E62C4;
    case 432u: goto L_089E62D8;
    case 433u: goto L_089E62EC;
    case 434u: goto L_089E62FC;
    case 435u: goto L_089E630C;
    case 436u: goto L_089E6314;
    case 437u: goto L_089E631C;
    case 438u: goto L_089E6324;
    case 439u: goto L_089E632C;
    case 440u: goto L_089E6334;
    case 441u: goto L_089E6340;
    case 442u: goto L_089E6348;
    case 443u: goto L_089E6354;
    case 444u: goto L_089E635C;
    case 445u: goto L_089E6370;
    case 446u: goto L_089E6380;
    case 447u: goto L_089E6388;
    case 448u: goto L_089E63A0;
    case 449u: goto L_089E63B4;
    case 450u: goto L_089E63B8;
    case 451u: goto L_089E63C4;
    case 452u: goto L_089E63E0;
    case 453u: goto L_089E6410;
    case 454u: goto L_089E6434;
    case 455u: goto L_089E6440;
    case 456u: goto L_089E6448;
    case 457u: goto L_089E644C;
    case 458u: goto L_089E6454;
    case 459u: goto L_089E6460;
    case 460u: goto L_089E646C;
    case 461u: goto L_089E6478;
    case 462u: goto L_089E6484;
    case 463u: goto L_089E6494;
    case 464u: goto L_089E64A0;
    case 465u: goto L_089E64AC;
    case 466u: goto L_089E64B8;
    case 467u: goto L_089E64C4;
    case 468u: goto L_089E64CC;
    case 469u: goto L_089E64D4;
    case 470u: goto L_089E64E4;
    case 471u: goto L_089E6500;
    case 472u: goto L_089E651C;
    case 473u: goto L_089E6524;
    case 474u: goto L_089E652C;
    case 475u: goto L_089E6538;
    case 476u: goto L_089E6544;
    case 477u: goto L_089E654C;
    case 478u: goto L_089E6560;
    case 479u: goto L_089E6574;
    case 480u: goto L_089E6598;
    case 481u: goto L_089E65A4;
    case 482u: goto L_089E65C4;
    case 483u: goto L_089E65DC;
    case 484u: goto L_089E65F4;
    case 485u: goto L_089E65FC;
    case 486u: goto L_089E660C;
    case 487u: goto L_089E6634;
    case 488u: goto L_089E6644;
    case 489u: goto L_089E6648;
    case 490u: goto L_089E6668;
    case 491u: goto L_089E666C;
    case 492u: goto L_089E6678;
    case 493u: goto L_089E66A0;
    case 494u: goto L_089E66B0;
    case 495u: goto L_089E66B4;
    case 496u: goto L_089E66D0;
    case 497u: goto L_089E66D8;
    case 498u: goto L_089E66E4;
    case 499u: goto L_089E6704;
    case 500u: goto L_089E6714;
    case 501u: goto L_089E6724;
    case 502u: goto L_089E6734;
    case 503u: goto L_089E6744;
    case 504u: goto L_089E6754;
    case 505u: goto L_089E6764;
    case 506u: goto L_089E6774;
    case 507u: goto L_089E677C;
    case 508u: goto L_089E67A0;
    case 509u: goto L_089E67B4;
    case 510u: goto L_089E67C8;
    case 511u: goto L_089E67DC;
    case 512u: goto L_089E67E8;
    case 513u: goto L_089E67F8;
    case 514u: goto L_089E681C;
    case 515u: goto L_089E6828;
    case 516u: goto L_089E6834;
    case 517u: goto L_089E6840;
    case 518u: goto L_089E684C;
    case 519u: goto L_089E6850;
    case 520u: goto L_089E6864;
    case 521u: goto L_089E6870;
    case 522u: goto L_089E6878;
    case 523u: goto L_089E6888;
    case 524u: goto L_089E6894;
    case 525u: goto L_089E689C;
    case 526u: goto L_089E68A4;
    case 527u: goto L_089E68B4;
    case 528u: goto L_089E68DC;
    case 529u: goto L_089E68E4;
    case 530u: goto L_089E68F8;
    case 531u: goto L_089E6904;
    case 532u: goto L_089E691C;
    case 533u: goto L_089E6924;
    case 534u: goto L_089E692C;
    case 535u: goto L_089E6938;
    case 536u: goto L_089E6948;
    case 537u: goto L_089E6968;
    case 538u: goto L_089E6970;
    case 539u: goto L_089E6980;
    case 540u: goto L_089E699C;
    case 541u: goto L_089E69A4;
    case 542u: goto L_089E69AC;
    case 543u: goto L_089E69B4;
    case 544u: goto L_089E69D0;
    case 545u: goto L_089E69D8;
    case 546u: goto L_089E69E0;
    case 547u: goto L_089E69E8;
    case 548u: goto L_089E69EC;
    case 549u: goto L_089E69F4;
    case 550u: goto L_089E6A04;
    case 551u: goto L_089E6A14;
    case 552u: goto L_089E6A1C;
    case 553u: goto L_089E6A24;
    case 554u: goto L_089E6A2C;
    case 555u: goto L_089E6A38;
    case 556u: goto L_089E6A40;
    case 557u: goto L_089E6A48;
    case 558u: goto L_089E6A54;
    case 559u: goto L_089E6A68;
    case 560u: goto L_089E6A70;
    case 561u: goto L_089E6A80;
    case 562u: goto L_089E6A8C;
    case 563u: goto L_089E6A94;
    case 564u: goto L_089E6ADC;
    case 565u: goto L_089E6AE8;
    case 566u: goto L_089E6AF0;
    case 567u: goto L_089E6B00;
    case 568u: goto L_089E6B0C;
    case 569u: goto L_089E6B24;
    case 570u: goto L_089E6B48;
    case 571u: goto L_089E6B90;
    case 572u: goto L_089E6BA4;
    case 573u: goto L_089E6BAC;
    case 574u: goto L_089E6BBC;
    case 575u: goto L_089E6BC8;
    case 576u: goto L_089E6BD8;
    case 577u: goto L_089E6BE0;
    case 578u: goto L_089E6C0C;
    case 579u: goto L_089E6C30;
    case 580u: goto L_089E6C48;
    case 581u: goto L_089E6C64;
    case 582u: goto L_089E6C84;
    case 583u: goto L_089E6C8C;
    case 584u: goto L_089E6C90;
    case 585u: goto L_089E6C94;
    case 586u: goto L_089E6CA0;
    case 587u: goto L_089E6CAC;
    case 588u: goto L_089E6CF0;
    case 589u: goto L_089E6D00;
    case 590u: goto L_089E6D14;
    case 591u: goto L_089E6D1C;
    case 592u: goto L_089E6D28;
    case 593u: goto L_089E6D34;
    case 594u: goto L_089E6D48;
    case 595u: goto L_089E6D4C;
    case 596u: goto L_089E6D74;
    case 597u: goto L_089E6DC0;
    case 598u: goto L_089E6DE0;
    case 599u: goto L_089E6E2C;
    case 600u: goto L_089E6E38;
    case 601u: goto L_089E6E48;
    case 602u: goto L_089E6E60;
    case 603u: goto L_089E6E6C;
    case 604u: goto L_089E6E74;
    case 605u: goto L_089E6E7C;
    case 606u: goto L_089E6E84;
    case 607u: goto L_089E6E88;
    case 608u: goto L_089E6E90;
    case 609u: goto L_089E6EA0;
    case 610u: goto L_089E6EA8;
    case 611u: goto L_089E6EB4;
    case 612u: goto L_089E6EB8;
    case 613u: goto L_089E6EC0;
    case 614u: goto L_089E6ECC;
    case 615u: goto L_089E6ED4;
    case 616u: goto L_089E6EDC;
    case 617u: goto L_089E6EE0;
    case 618u: goto L_089E6EE8;
    case 619u: goto L_089E6F0C;
    case 620u: goto L_089E6F10;
    case 621u: goto L_089E6F20;
    case 622u: goto L_089E6F54;
    case 623u: goto L_089E6F84;
    case 624u: goto L_089E6F9C;
    case 625u: goto L_089E6FB0;
    case 626u: goto L_089E6FB4;
    case 627u: goto L_089E6FCC;
    case 628u: goto L_089E6FE0;
    case 629u: goto L_089E6FEC;
    case 630u: goto L_089E7014;
    case 631u: goto L_089E701C;
    case 632u: goto L_089E7028;
    case 633u: goto L_089E7034;
    case 634u: goto L_089E703C;
    case 635u: goto L_089E7054;
    case 636u: goto L_089E705C;
    case 637u: goto L_089E7068;
    case 638u: goto L_089E7084;
    case 639u: goto L_089E7094;
    case 640u: goto L_089E70A4;
    case 641u: goto L_089E70AC;
    case 642u: goto L_089E70CC;
    case 643u: goto L_089E70D4;
    case 644u: goto L_089E70D8;
    case 645u: goto L_089E70E0;
    case 646u: goto L_089E7100;
    case 647u: goto L_089E710C;
    case 648u: goto L_089E711C;
    case 649u: goto L_089E7124;
    case 650u: goto L_089E712C;
    case 651u: goto L_089E7134;
    case 652u: goto L_089E713C;
    case 653u: goto L_089E7140;
    case 654u: goto L_089E7148;
    case 655u: goto L_089E7158;
    case 656u: goto L_089E7164;
    case 657u: goto L_089E7178;
    case 658u: goto L_089E717C;
    case 659u: goto L_089E7184;
    case 660u: goto L_089E7198;
    case 661u: goto L_089E71A4;
    case 662u: goto L_089E71B0;
    case 663u: goto L_089E71CC;
    case 664u: goto L_089E71D8;
    case 665u: goto L_089E71DC;
    case 666u: goto L_089E71E4;
    case 667u: goto L_089E7218;
    case 668u: goto L_089E722C;
    case 669u: goto L_089E7240;
    case 670u: goto L_089E7248;
    case 671u: goto L_089E7258;
    case 672u: goto L_089E7268;
    case 673u: goto L_089E7270;
    case 674u: goto L_089E7278;
    case 675u: goto L_089E7280;
    case 676u: goto L_089E7298;
    case 677u: goto L_089E72C8;
    case 678u: goto L_089E72E0;
    case 679u: goto L_089E72E8;
    case 680u: goto L_089E72F8;
    case 681u: goto L_089E7300;
    case 682u: goto L_089E7310;
    case 683u: goto L_089E731C;
    case 684u: goto L_089E732C;
    case 685u: goto L_089E7338;
    case 686u: goto L_089E733C;
    case 687u: goto L_089E735C;
    case 688u: goto L_089E7384;
    case 689u: goto L_089E7390;
    case 690u: goto L_089E73A0;
    case 691u: goto L_089E73B8;
    case 692u: goto L_089E73D4;
    case 693u: goto L_089E73DC;
    case 694u: goto L_089E73E4;
    case 695u: goto L_089E73F0;
    case 696u: goto L_089E7400;
    case 697u: goto L_089E7408;
    case 698u: goto L_089E740C;
    case 699u: goto L_089E7424;
    case 700u: goto L_089E7438;
    case 701u: goto L_089E7440;
    case 702u: goto L_089E7450;
    case 703u: goto L_089E7458;
    case 704u: goto L_089E745C;
    case 705u: goto L_089E7464;
    case 706u: goto L_089E74B8;
    case 707u: goto L_089E74C0;
    case 708u: goto L_089E74E8;
    case 709u: goto L_089E74EC;
    case 710u: goto L_089E74F4;
    case 711u: goto L_089E7514;
    case 712u: goto L_089E751C;
    case 713u: goto L_089E7534;
    case 714u: goto L_089E7554;
    case 715u: goto L_089E756C;
    case 716u: goto L_089E7570;
    case 717u: goto L_089E7578;
    case 718u: goto L_089E7584;
    case 719u: goto L_089E75B0;
    case 720u: goto L_089E75B8;
    case 721u: goto L_089E75BC;
    case 722u: goto L_089E75D0;
    case 723u: goto L_089E75E8;
    case 724u: goto L_089E762C;
    case 725u: goto L_089E7638;
    case 726u: goto L_089E7640;
    case 727u: goto L_089E7650;
    case 728u: goto L_089E7660;
    case 729u: goto L_089E768C;
    case 730u: goto L_089E7694;
    case 731u: goto L_089E76A0;
    case 732u: goto L_089E76B4;
    case 733u: goto L_089E76CC;
    case 734u: goto L_089E76E4;
    case 735u: goto L_089E7700;
    case 736u: goto L_089E7718;
    case 737u: goto L_089E7724;
    case 738u: goto L_089E7728;
    case 739u: goto L_089E7784;
    case 740u: goto L_089E778C;
    case 741u: goto L_089E77A8;
    case 742u: goto L_089E77B4;
    case 743u: goto L_089E77C8;
    case 744u: goto L_089E780C;
    case 745u: goto L_089E7818;
    case 746u: goto L_089E7820;
    case 747u: goto L_089E7830;
    case 748u: goto L_089E7874;
    case 749u: goto L_089E787C;
    case 750u: goto L_089E788C;
    case 751u: goto L_089E78B8;
    case 752u: goto L_089E78D4;
    case 753u: goto L_089E78DC;
    case 754u: goto L_089E78E4;
    case 755u: goto L_089E78EC;
    case 756u: goto L_089E78F4;
    case 757u: goto L_089E78FC;
    case 758u: goto L_089E7924;
    case 759u: goto L_089E7934;
    case 760u: goto L_089E793C;
    case 761u: goto L_089E7958;
    case 762u: goto L_089E7964;
    case 763u: goto L_089E796C;
    case 764u: goto L_089E7988;
    case 765u: goto L_089E7994;
    case 766u: goto L_089E799C;
    case 767u: goto L_089E79A4;
    case 768u: goto L_089E79CC;
    case 769u: goto L_089E79DC;
    case 770u: goto L_089E79E4;
    case 771u: goto L_089E7A00;
    case 772u: goto L_089E7A1C;
    case 773u: goto L_089E7A24;
    case 774u: goto L_089E7A28;
    case 775u: goto L_089E7A44;
    case 776u: goto L_089E7A58;
    case 777u: goto L_089E7A78;
    case 778u: goto L_089E7A88;
    case 779u: goto L_089E7AA0;
    case 780u: goto L_089E7AA8;
    case 781u: goto L_089E7ABC;
    case 782u: goto L_089E7AC4;
    case 783u: goto L_089E7AD0;
    case 784u: goto L_089E7AD8;
    case 785u: goto L_089E7ADC;
    case 786u: goto L_089E7AE4;
    case 787u: goto L_089E7AF4;
    case 788u: goto L_089E7AFC;
    case 789u: goto L_089E7B18;
    case 790u: goto L_089E7B20;
    case 791u: goto L_089E7B34;
    case 792u: goto L_089E7B40;
    case 793u: goto L_089E7B44;
    case 794u: goto L_089E7B4C;
    case 795u: goto L_089E7B58;
    case 796u: goto L_089E7B60;
    case 797u: goto L_089E7B68;
    case 798u: goto L_089E7B80;
    case 799u: goto L_089E7B8C;
    case 800u: goto L_089E7B90;
    case 801u: goto L_089E7BA4;
    case 802u: goto L_089E7BB4;
    case 803u: goto L_089E7BC4;
    case 804u: goto L_089E7BD0;
    case 805u: goto L_089E7BD8;
    case 806u: goto L_089E7BE0;
    case 807u: goto L_089E7BE4;
    case 808u: goto L_089E7BEC;
    case 809u: goto L_089E7BF4;
    case 810u: goto L_089E7C0C;
    case 811u: goto L_089E7C1C;
    case 812u: goto L_089E7C28;
    case 813u: goto L_089E7C30;
    case 814u: goto L_089E7C38;
    case 815u: goto L_089E7C40;
    case 816u: goto L_089E7C58;
    case 817u: goto L_089E7C64;
    case 818u: goto L_089E7C68;
    case 819u: goto L_089E7C70;
    case 820u: goto L_089E7C7C;
    case 821u: goto L_089E7C94;
    case 822u: goto L_089E7C9C;
    case 823u: goto L_089E7CB8;
    case 824u: goto L_089E7CC0;
    case 825u: goto L_089E7CD0;
    case 826u: goto L_089E7CF8;
    case 827u: goto L_089E7D00;
    case 828u: goto L_089E7D24;
    case 829u: goto L_089E7D2C;
    case 830u: goto L_089E7D34;
    case 831u: goto L_089E7D40;
    case 832u: goto L_089E7D48;
    case 833u: goto L_089E7D58;
    case 834u: goto L_089E7D68;
    case 835u: goto L_089E7D98;
    case 836u: goto L_089E7DB4;
    case 837u: goto L_089E7DC0;
    case 838u: goto L_089E7DC8;
    case 839u: goto L_089E7DD0;
    case 840u: goto L_089E7DD8;
    case 841u: goto L_089E7DDC;
    case 842u: goto L_089E7DE4;
    case 843u: goto L_089E7DEC;
    case 844u: goto L_089E7E00;
    case 845u: goto L_089E7E38;
    case 846u: goto L_089E7E64;
    case 847u: goto L_089E7EBC;
    case 848u: goto L_089E7EF8;
    case 849u: goto L_089E7F48;
    case 850u: goto L_089E7F54;
    case 851u: goto L_089E7F64;
    case 852u: goto L_089E7F70;
    case 853u: goto L_089E7F8C;
    case 854u: goto L_089E7F94;
    case 855u: goto L_089E7F9C;
    case 856u: goto L_089E7FB0;
    case 857u: goto L_089E7FB4;
    case 858u: goto L_089E7FCC;
    case 859u: goto L_089E7FF0;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        AOT_REGCACHE_SYNC_OUT(); return;
    }
    }
L_089E4000:
    aot_gpr_5 = (0u | 6u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_089E406C;
      }
      goto L_089E400C;
    }
L_089E400C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(460)));
    goto L_089E4010;
L_089E4010:
    aot_gpr_4 = (aot_gpr_4 & 512u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_089E406C;
      }
      goto L_089E401C;
    }
L_089E401C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2120)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_089E406C;
      }
      goto L_089E4028;
    }
L_089E4028:
    aot_gpr_31 = (0x089E4030u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089101A4, 67u, 27u, 0x089101A4u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0067_entry, 67u, 27u, 0x089101A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089E4030u) goto L_089E4030;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089E4030:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    aot_gpr_31 = (0x089E4040u);
    aot_gpr_6 = (0u | 10000u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 803u, 0x0890B27Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089E4040u) goto L_089E4040;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089E4040:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(456)));
    aot_gpr_5 = (16384u << 16u);
    aot_gpr_4 = (aot_gpr_4 | aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(456), aot_gpr_4);
    aot_gpr_31 = (0x089E4058u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890FF64, 66u, 887u, 0x0890FF64u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 887u, 0x0890FF64u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089E4058u) goto L_089E4058;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089E4058:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x089E4064u);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890BE50, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0065_entry, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089E4064u) goto L_089E4064;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089E4064:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089E41E4;
      }
      goto L_089E406C;
    }
L_089E406C:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1929))))));
    aot_gpr_5 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 - aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[17] + aot_gpr_4);
    aot_gpr_31 = (0x089E4088u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1396));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0143_entry, 143u, 159u, 0x08A40D34u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089E4088u) goto L_089E4088;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089E4088:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_089E40B4;
      }
      goto L_089E4090;
    }
L_089E4090:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(1929))))));
    aot_gpr_5 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_4);
    aot_gpr_31 = (0x089E40ACu);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1396));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0143_entry, 143u, 159u, 0x08A40D34u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089E40ACu) goto L_089E40AC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089E40AC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_089E41E4;
      }
      goto L_089E40B4;
    }
L_089E40B4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1360)));
    aot_gpr_5 = (aot_mem.aot_direct_load16(ctx.gpr[17] + static_cast<std::uint32_t>(1948)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-7));
    aot_gpr_6 = (0u | 1u);
    aot_gpr_4 = (aot_gpr_6 << (aot_gpr_4 & 31u));
    aot_gpr_4 = (aot_gpr_5 & aot_gpr_4);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_089E41E4;
      }
      goto L_089E40D4;
    }
L_089E40D4:
    aot_gpr_31 = (0x089E40DCu);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890D44C, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089E40DCu) goto L_089E40DC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089E40DC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_089E4124;
      }
      goto L_089E40E4;
    }
L_089E40E4:
    aot_gpr_31 = (0x089E40ECu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0066_entry, 66u, 319u, 0x0890D46Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089E40ECu) goto L_089E40EC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089E40EC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_089E4124;
      }
      goto L_089E40F4;
    }
L_089E40F4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(468)));
    aot_gpr_4 = (aot_gpr_4 & 32768u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089E4124;
      }
      goto L_089E4104;
    }
L_089E4104:
    aot_gpr_31 = (0x089E410Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089101A4, 67u, 27u, 0x089101A4u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0067_entry, 67u, 27u, 0x089101A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089E410Cu) goto L_089E410C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089E410C:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (0u | 8u);
    aot_gpr_31 = (0x089E411Cu);
    aot_gpr_6 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0178_entry, 178u, 482u, 0x08ACD698u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089E411Cu) goto L_089E411C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089E411C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089E41E4;
      }
      goto L_089E4124;
    }
L_089E4124:
    aot_gpr_31 = (0x089E412Cu);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890D44C, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089E412Cu) goto L_089E412C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089E412C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_089E41A0;
      }
      goto L_089E4134;
    }
L_089E4134:
    aot_gpr_31 = (0x089E413Cu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089E413Cu) goto L_089E413C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089E413C:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2312)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) <= 0;
      if (branch_taken) {
          goto L_089E41A0;
      }
      goto L_089E4148;
    }
L_089E4148:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2196)));
    aot_gpr_5 = (0u | 9u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_5 = (0u | 8u);
      if (branch_taken) {
          goto L_089E4160;
      }
      goto L_089E4158;
    }
L_089E4158:
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_089E4198;
      }
      goto L_089E4160;
    }
L_089E4160:
    aot_gpr_31 = (0x089E4168u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089101A4, 67u, 27u, 0x089101A4u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0067_entry, 67u, 27u, 0x089101A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089E4168u) goto L_089E4168;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089E4168:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    aot_gpr_31 = (0x089E4178u);
    aot_gpr_6 = (0u | 10000u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 803u, 0x0890B27Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089E4178u) goto L_089E4178;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089E4178:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(456)));
    aot_gpr_5 = (16384u << 16u);
    aot_gpr_4 = (aot_gpr_4 | aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(456), aot_gpr_4);
    aot_gpr_31 = (0x089E4190u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890FF64, 66u, 887u, 0x0890FF64u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 887u, 0x0890FF64u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089E4190u) goto L_089E4190;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089E4190:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089E41E4;
      }
      goto L_089E4198;
    }
L_089E4198:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089E41E4;
      }
      goto L_089E41A0;
    }
L_089E41A0:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_089E41E4;
      }
      goto L_089E41AC;
    }
L_089E41AC:
    aot_gpr_31 = (0x089E41B4u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089101A4, 67u, 27u, 0x089101A4u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0067_entry, 67u, 27u, 0x089101A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089E41B4u) goto L_089E41B4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089E41B4:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (0u | 8u);
    aot_gpr_31 = (0x089E41C4u);
    aot_gpr_6 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0178_entry, 178u, 482u, 0x08ACD698u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089E41C4u) goto L_089E41C4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089E41C4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089E41E4;
      }
      goto L_089E41CC;
    }
L_089E41CC:
    aot_gpr_31 = (0x089E41D4u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089101A4, 67u, 27u, 0x089101A4u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0067_entry, 67u, 27u, 0x089101A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089E41D4u) goto L_089E41D4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089E41D4:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (0u | 22u);
    aot_gpr_31 = (0x089E41E4u);
    aot_gpr_6 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0178_entry, 178u, 482u, 0x08ACD698u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089E41E4u) goto L_089E41E4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089E41E4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089E4360;
      }
      goto L_089E41EC;
    }
L_089E41EC:
    aot_gpr_5 = (0u | 4u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_089E4360;
      }
      goto L_089E41F8;
    }
L_089E41F8:
    aot_gpr_5 = (0u | 8u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_5 = (0u | 9u);
      if (branch_taken) {
          goto L_089E420C;
      }
      goto L_089E4204;
    }
L_089E4204:
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_089E4228;
      }
      goto L_089E420C;
    }
L_089E420C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2192)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089E4228;
      }
      goto L_089E4218;
    }
L_089E4218:
    aot_gpr_31 = (0x089E4220u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890D44C, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089E4220u) goto L_089E4220;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089E4220:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_089E4244;
      }
      goto L_089E4228;
    }
L_089E4228:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1736)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_gpr_4 = (aot_gpr_4 < aot_gpr_5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_089E424C;
      }
      goto L_089E423C;
    }
L_089E423C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089E4360;
      }
      goto L_089E4244;
    }
L_089E4244:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089E4360;
      }
      goto L_089E424C;
    }
L_089E424C:
    aot_gpr_31 = (0x089E4254u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 813u, 0x089079CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089E4254u) goto L_089E4254;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089E4254:
    aot_gpr_31 = (0x089E425Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 824u, 0x08907A54u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089E425Cu) goto L_089E425C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089E425C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1900)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089E4360;
      }
      goto L_089E4268;
    }
L_089E4268:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1904)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_gpr_5 = (aot_gpr_5 < aot_gpr_6 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_089E4360;
      }
      goto L_089E427C;
    }
L_089E427C:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(1900), 0u);
    aot_gpr_5 = (16u << 16u);
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(1904), 0u);
      if (branch_taken) {
          goto L_089E42AC;
      }
      goto L_089E4290;
    }
L_089E4290:
    aot_gpr_5 = (16u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089E4360;
      }
      goto L_089E42A4;
    }
L_089E42A4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089E42C0;
      }
      goto L_089E42AC;
    }
L_089E42AC:
    aot_gpr_5 = (128u << 16u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_089E4304;
      }
      goto L_089E42B8;
    }
L_089E42B8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089E4360;
      }
      goto L_089E42C0;
    }
L_089E42C0:
    aot_gpr_31 = (0x089E42C8u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089101A4, 67u, 27u, 0x089101A4u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0067_entry, 67u, 27u, 0x089101A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089E42C8u) goto L_089E42C8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089E42C8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_089E42FC;
      }
      goto L_089E42D0;
    }
L_089E42D0:
    aot_gpr_31 = (0x089E42D8u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089101A4, 67u, 27u, 0x089101A4u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0067_entry, 67u, 27u, 0x089101A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089E42D8u) goto L_089E42D8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089E42D8:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    aot_gpr_6 = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    aot_gpr_31 = (0x089E42F0u);
    ctx.gpr[8] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 442u, 0x08909A64u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089E42F0u) goto L_089E42F0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089E42F0:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x089E42FCu);
    aot_gpr_5 = (0u | 500u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 326u, 0x089092DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089E42FCu) goto L_089E42FC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089E42FC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089E4360;
      }
      goto L_089E4304;
    }
L_089E4304:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(112));
    aot_gpr_31 = (0x089E4310u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 28u, 0x089101ACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089E4310u) goto L_089E4310;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089E4310:
    aot_fpr_20 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(112)));
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(120));
    aot_gpr_31 = (0x089E4320u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 28u, 0x089101ACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089E4320u) goto L_089E4320;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089E4320:
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(48));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(124)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_fpr_12 = aot_fpr_12 - aot_fpr_20;
    aot_gpr_31 = (0x089E433Cu);
    aot_fpr_13 = aot_fpr_13 - aot_fpr_14;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089E433Cu) goto L_089E433C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089E433C:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_gpr_5 = (0u | 1u);
    aot_gpr_6 = (0u | 0u);
    aot_gpr_31 = (0x089E4354u);
    ctx.gpr[7] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 430u, 0x08909990u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089E4354u) goto L_089E4354;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089E4354:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x089E4360u);
    aot_gpr_5 = (0u | 500u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 326u, 0x089092DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089E4360u) goto L_089E4360;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089E4360:
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(160), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      aot_gpr_16 = aot_run_words[1];
      ctx.gpr[17] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(176));
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
L_089E4378:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-160));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(2288)));
    { const std::uint32_t aot_run_words[14]{std::bit_cast<std::uint32_t>(aot_fpr_20), std::bit_cast<std::uint32_t>(ctx.fpr[22]), std::bit_cast<std::uint32_t>(ctx.fpr[24]), std::bit_cast<std::uint32_t>(ctx.fpr[26]), aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], ctx.gpr[23], ctx.gpr[30], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(92), aot_run_words); }
    { const bool branch_taken = aot_gpr_5 == 0u;
    ctx.gpr[21] = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_089E43D4;
      }
      goto L_089E43C0;
    }
L_089E43C0:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[21] + static_cast<std::uint32_t>(2297)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_089E43DC;
      }
      goto L_089E43CC;
    }
L_089E43CC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089E43FC;
      }
      goto L_089E43D4;
    }
L_089E43D4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089E487C;
      }
      goto L_089E43DC;
    }
L_089E43DC:
    aot_gpr_31 = (0x089E43E4u);
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089E43E4u) goto L_089E43E4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089E43E4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_089E43FC;
      }
      goto L_089E43EC;
    }
L_089E43EC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1156)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1152)));
    if (aot_gpr_4 == aot_gpr_5) {
    aot_mem.aot_direct_store8(ctx.gpr[21] + static_cast<std::uint32_t>(2297), static_cast<std::uint8_t>(0u));
        goto L_089E44B4;
    }
    goto L_089E43FC;
L_089E43FC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(464)));
    aot_gpr_5 = (2u << 16u);
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_089E44AC;
      }
      goto L_089E4410;
    }
L_089E4410:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(2292)));
    aot_gpr_5 = (0u | 8u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_089E4504;
      }
      goto L_089E4420;
    }
L_089E4420:
    aot_mem.aot_direct_store32(ctx.gpr[21] + static_cast<std::uint32_t>(2292), 0u);
    aot_gpr_31 = (0x089E442Cu);
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 620u, 0x08906DE4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089E442Cu) goto L_089E442C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089E442C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_089E44A4;
      }
      goto L_089E4434;
    }
L_089E4434:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(2196)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[22] = (ctx.gpr[21] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_089E449C;
      }
      goto L_089E4440;
    }
L_089E4440:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (16672u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_14 = aot_fpr_13 - aot_fpr_12;
    aot_gpr_4 = (17056u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fpr[16] = aot_fpr_14 / aot_fpr_13;
    aot_gpr_4 = (16880u << 16u);
    aot_gpr_6 = (32639u << 16u);
    aot_gpr_5 = (0u | 49u);
    aot_gpr_6 = (aot_gpr_6 | 65535u);
    ctx.gpr[7] = (16840u << 16u);
    ctx.gpr[23] = (0u | 0u);
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_6);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    ctx.fpr[16] = ctx.fpr[16] + aot_fpr_14;
    ctx.fpr[16] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[16]));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[7]);
      if (branch_taken) {
          goto L_089E4514;
      }
      goto L_089E4494;
    }
L_089E4494:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 0 ? 1u : 0u);
      if (branch_taken) {
          goto L_089E451C;
      }
      goto L_089E449C;
    }
L_089E449C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089E487C;
      }
      goto L_089E44A4;
    }
L_089E44A4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089E487C;
      }
      goto L_089E44AC;
    }
L_089E44AC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089E487C;
      }
      goto L_089E44B4;
    }
L_089E44B4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1152)));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-497));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(72)));
    aot_gpr_5 = (aot_gpr_6 & aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 | 48u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(72), aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1152)));
    aot_gpr_5 = (0u | 1u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(384));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(149), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1152)));
    aot_gpr_5 = (0u | 10u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(384));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(151), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1152)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(613));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (aot_gpr_5 | 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_5));
      if (branch_taken) {
          goto L_089E487C;
      }
      goto L_089E4504;
    }
L_089E4504:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(2292)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[21] + static_cast<std::uint32_t>(2292), aot_gpr_4);
      if (branch_taken) {
          goto L_089E487C;
      }
      goto L_089E4514;
    }
L_089E4514:
    aot_gpr_4 = (0u | 49u);
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 0 ? 1u : 0u);
    goto L_089E451C;
L_089E451C:
    if (aot_gpr_5 != 0u) {
    aot_gpr_4 = (0u | 0u);
        goto L_089E4524;
    }
    goto L_089E4524;
L_089E4524:
    aot_gpr_5 = (0u | 0u);
    aot_gpr_6 = (0u | 0u);
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    if (aot_gpr_5 != 0u) {
    aot_gpr_6 = (aot_gpr_4 | 0u);
        goto L_089E4538;
    }
    goto L_089E4538;
L_089E4538:
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    ctx.fpr[16] = ctx.fpr[16] - aot_fpr_12;
    ctx.fpr[16] = ctx.fpr[16] / aot_fpr_13;
    aot_gpr_4 = (0u | 49u);
    ctx.fpr[16] = ctx.fpr[16] + ctx.fpr[15];
    ctx.fpr[16] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[16]));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    if (aot_gpr_4 != 0u) {
    aot_gpr_5 = (0u | 49u);
        goto L_089E4560;
    }
    goto L_089E4560;
L_089E4560:
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_5) < 0 ? 1u : 0u);
    if (aot_gpr_4 != 0u) {
    aot_gpr_5 = (0u | 0u);
        goto L_089E456C;
    }
    goto L_089E456C;
L_089E456C:
    ctx.gpr[7] = (0u | 0u);
    aot_gpr_4 = (0u | 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    aot_gpr_4 = (aot_gpr_5 | 0u);
        goto L_089E4580;
    }
    goto L_089E4580;
L_089E4580:
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.fpr[16] = ctx.fpr[16] + aot_fpr_12;
    ctx.fpr[16] = ctx.fpr[16] / aot_fpr_13;
    ctx.gpr[7] = (0u | 49u);
    aot_fpr_14 = ctx.fpr[16] + aot_fpr_14;
    aot_fpr_14 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_14));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_14));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    aot_gpr_5 = (0u | 49u);
        goto L_089E45A8;
    }
    goto L_089E45A8;
L_089E45A8:
    ctx.gpr[7] = (static_cast<std::int32_t>(aot_gpr_5) < 0 ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    aot_gpr_5 = (0u | 0u);
        goto L_089E45B4;
    }
    goto L_089E45B4;
L_089E45B4:
    ctx.gpr[7] = (0u | 49u);
    ctx.gpr[8] = (static_cast<std::int32_t>(aot_gpr_5) < 49 ? 1u : 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(72), ctx.gpr[7]);
    if (ctx.gpr[8] != 0u) {
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(72), aot_gpr_5);
        goto L_089E45C8;
    }
    goto L_089E45C8;
L_089E45C8:
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    aot_fpr_12 = aot_fpr_14 + aot_fpr_12;
    aot_fpr_12 = aot_fpr_12 / aot_fpr_13;
    ctx.gpr[7] = (0u | 49u);
    aot_fpr_12 = aot_fpr_12 + ctx.fpr[15];
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    aot_gpr_5 = (0u | 49u);
        goto L_089E45F0;
    }
    goto L_089E45F0;
L_089E45F0:
    ctx.gpr[7] = (static_cast<std::int32_t>(aot_gpr_5) < 0 ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    aot_gpr_5 = (0u | 0u);
        goto L_089E45FC;
    }
    goto L_089E45FC;
L_089E45FC:
    ctx.gpr[7] = (0u | 49u);
    ctx.gpr[8] = (static_cast<std::int32_t>(aot_gpr_5) < 49 ? 1u : 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(88), ctx.gpr[7]);
    if (ctx.gpr[8] != 0u) {
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(88), aot_gpr_5);
        goto L_089E4610;
    }
    goto L_089E4610;
L_089E4610:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(88)));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(80), aot_gpr_4);
      if (branch_taken) {
          goto L_089E4838;
      }
      goto L_089E4620;
    }
L_089E4620:
    aot_gpr_5 = (aot_gpr_4 << 4u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(84), aot_gpr_6);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(76), aot_gpr_4);
    aot_gpr_4 = (17480u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[20] = (0u | 1u);
    aot_gpr_4 = (17096u << 16u);
    ctx.gpr[19] = (0u | 3u);
    ctx.fpr[26] = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[18] = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    goto L_089E4654;
L_089E4654:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(84)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(72)));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(68), aot_gpr_4);
      if (branch_taken) {
          goto L_089E4814;
      }
      goto L_089E4668;
    }
L_089E4668:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(76)));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    ctx.gpr[30] = (aot_gpr_4 << 6u);
    aot_gpr_4 = (aot_gpr_4 << 3u);
    ctx.gpr[30] = (ctx.gpr[30] - aot_gpr_4);
    goto L_089E467C;
L_089E467C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25496)));
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[30]);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(28));
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
      if (branch_taken) {
          goto L_089E47F8;
      }
      goto L_089E4694;
    }
L_089E4694:
    aot_gpr_16 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_16 == 0u;
    ctx.gpr[17] = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_089E47F0;
      }
      goto L_089E46A0;
    }
L_089E46A0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_089E47F0;
      }
      goto L_089E46AC;
    }
L_089E46AC:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(612)));
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[20];
      if (branch_taken) {
          goto L_089E46C4;
      }
      goto L_089E46B8;
    }
L_089E46B8:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(612)));
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[19];
      if (branch_taken) {
          goto L_089E47F0;
      }
      goto L_089E46C4;
    }
L_089E46C4:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(86))))));
    aot_gpr_31 = (0x089E46D0u);
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0119_entry, 119u, 483u, 0x089E26B8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089E46D0u) goto L_089E46D0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089E46D0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_089E47F0;
      }
      goto L_089E46D8;
    }
L_089E46D8:
    aot_gpr_31 = (0x089E46E0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0191_entry, 191u, 456u, 0x08B01BA4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089E46E0u) goto L_089E46E0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089E46E0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_089E47F0;
      }
      goto L_089E46E8;
    }
L_089E46E8:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[21] + static_cast<std::uint32_t>(2296)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_089E4710;
      }
      goto L_089E46F4;
    }
L_089E46F4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(900)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_089E47F0;
      }
      goto L_089E4700;
    }
L_089E4700:
    aot_gpr_31 = (0x089E4708u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0191_entry, 191u, 559u, 0x08B021B0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089E4708u) goto L_089E4708;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089E4708:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_089E47F0;
      }
      goto L_089E4710;
    }
L_089E4710:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(562)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_089E47F0;
      }
      goto L_089E471C;
    }
L_089E471C:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(563)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_089E47F0;
      }
      goto L_089E4728;
    }
L_089E4728:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(564)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_089E47F0;
      }
      goto L_089E4734;
    }
L_089E4734:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(596)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_089E47F0;
      }
      goto L_089E4740;
    }
L_089E4740:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(636)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= ctx.fpr[22])) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_089E47F0;
      }
      goto L_089E4754;
    }
L_089E4754:
    aot_gpr_31 = (0x089E475Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0191_entry, 191u, 229u, 0x08B00D78u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089E475Cu) goto L_089E475C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089E475C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_089E47F0;
      }
      goto L_089E4764;
    }
L_089E4764:
    aot_gpr_31 = (0x089E476Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0191_entry, 191u, 233u, 0x08B00DBCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089E476Cu) goto L_089E476C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089E476C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_089E47F0;
      }
      goto L_089E4774;
    }
L_089E4774:
    aot_gpr_31 = (0x089E477Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0191_entry, 191u, 327u, 0x08B011C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089E477Cu) goto L_089E477C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089E477C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_089E47F0;
      }
      goto L_089E4784;
    }
L_089E4784:
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(48));
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
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    aot_gpr_4 = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[24] = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[24] < ctx.fpr[26])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_089E47F0;
      }
      goto L_089E47B8;
    }
L_089E47B8:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[24] < aot_fpr_20)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_089E47F0;
      }
      goto L_089E47C8;
    }
L_089E47C8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(92)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(360));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_6;
    aot_gpr_31 = (0x089E47E0u);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_5);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089E47E0u) goto L_089E47E0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089E47E0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_089E47F0;
      }
      goto L_089E47E8;
    }
L_089E47E8:
    aot_fpr_20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[23] = (aot_gpr_16 | 0u);
    goto L_089E47F0;
L_089E47F0:
    { const bool branch_taken = ctx.gpr[17] != 0u;
      if (branch_taken) {
          goto L_089E4694;
      }
      goto L_089E47F8;
    }
L_089E47F8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(68)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(72)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(56));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(68), aot_gpr_4);
      if (branch_taken) {
          goto L_089E467C;
      }
      goto L_089E4814;
    }
L_089E4814:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(80)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(76)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(88)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(50));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(80), aot_gpr_4);
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_6) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(76), aot_gpr_5);
      if (branch_taken) {
          goto L_089E4654;
      }
      goto L_089E4838;
    }
L_089E4838:
    { const bool branch_taken = ctx.gpr[23] == 0u;
      if (branch_taken) {
          goto L_089E487C;
      }
      goto L_089E4840;
    }
L_089E4840:
    aot_gpr_4 = (0u | 1u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(464)));
    aot_mem.aot_direct_store8(ctx.gpr[21] + static_cast<std::uint32_t>(2297), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (2u << 16u);
    aot_gpr_4 = (aot_gpr_5 | aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[21] + static_cast<std::uint32_t>(464), aot_gpr_4);
    aot_gpr_31 = (0x089E4860u);
    aot_gpr_4 = (ctx.gpr[23] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0207_entry, 207u, 374u, 0x08B41694u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089E4860u) goto L_089E4860;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089E4860:
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    aot_gpr_5 = (0u | 18u);
    aot_gpr_31 = (0x089E4870u);
    aot_gpr_6 = (ctx.gpr[23] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0178_entry, 178u, 482u, 0x08ACD698u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089E4870u) goto L_089E4870;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089E4870:
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    aot_gpr_31 = (0x089E487Cu);
    aot_gpr_5 = (0u | 10000u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0176_entry, 176u, 1084u, 0x08AC7F30u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089E487Cu) goto L_089E487C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089E487C:
    { std::uint32_t aot_run_words[14]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(92), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      ctx.fpr[22] = std::bit_cast<float>(aot_run_words[1]);
      ctx.fpr[24] = std::bit_cast<float>(aot_run_words[2]);
      ctx.fpr[26] = std::bit_cast<float>(aot_run_words[3]);
      aot_gpr_16 = aot_run_words[4];
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
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(160));
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
L_089E48BC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-208));
    aot_gpr_5 = (15948u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7896)));
    aot_gpr_5 = (aot_gpr_5 | 52429u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(aot_fpr_20));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const std::uint32_t aot_run_words[11]{std::bit_cast<std::uint32_t>(ctx.fpr[22]), aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], ctx.gpr[23], ctx.gpr[30], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(156), aot_run_words); }
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    ctx.gpr[20] = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_089E4918;
      }
      goto L_089E490C;
    }
L_089E490C:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[20] + static_cast<std::uint32_t>(2364)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089E4A0C;
      }
      goto L_089E4918;
    }
L_089E4918:
    aot_gpr_31 = (0x089E4920u);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0066_entry, 66u, 589u, 0x0890E818u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089E4920u) goto L_089E4920;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089E4920:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_089E4A04;
      }
      goto L_089E4928;
    }
L_089E4928:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8980)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(2368)));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_089E4A14;
      }
      goto L_089E4938;
    }
L_089E4938:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(464)));
    aot_gpr_5 = (1u << 16u);
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_mem.aot_direct_store32(ctx.gpr[20] + static_cast<std::uint32_t>(2368), 0u);
      if (branch_taken) {
          goto L_089E49FC;
      }
      goto L_089E494C;
    }
L_089E494C:
    aot_gpr_31 = (0x089E4954u);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 620u, 0x08906DE4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089E4954u) goto L_089E4954;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089E4954:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_089E49F4;
      }
      goto L_089E495C;
    }
L_089E495C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(2196)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_089E49EC;
      }
      goto L_089E4968;
    }
L_089E4968:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(676)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_089E49E4;
      }
      goto L_089E4974;
    }
L_089E4974:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(460)));
    aot_gpr_5 = (2u << 16u);
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_089E49E4;
      }
      goto L_089E4988;
    }
L_089E4988:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(2228)));
    aot_gpr_5 = (0u | 9u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_4 = (ctx.gpr[20] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_089E49DC;
      }
      goto L_089E4998;
    }
L_089E4998:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8996)));
    aot_gpr_4 = (17056u << 16u);
    aot_fpr_12 = aot_fpr_12 - aot_fpr_13;
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 / aot_fpr_14;
    aot_gpr_4 = (16880u << 16u);
    aot_gpr_6 = (0u | 49u);
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 + ctx.fpr[15];
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[7] = (static_cast<std::int32_t>(aot_gpr_6) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    aot_gpr_5 = (0u | 0u);
      if (branch_taken) {
          goto L_089E4A24;
      }
      goto L_089E49D4;
    }
L_089E49D4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
      if (branch_taken) {
          goto L_089E4A2C;
      }
      goto L_089E49DC;
    }
L_089E49DC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089E4F7C;
      }
      goto L_089E49E4;
    }
L_089E49E4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089E4F7C;
      }
      goto L_089E49EC;
    }
L_089E49EC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089E4F7C;
      }
      goto L_089E49F4;
    }
L_089E49F4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089E4F7C;
      }
      goto L_089E49FC;
    }
L_089E49FC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089E4F7C;
      }
      goto L_089E4A04;
    }
L_089E4A04:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089E4F7C;
      }
      goto L_089E4A0C;
    }
L_089E4A0C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089E4F7C;
      }
      goto L_089E4A14;
    }
L_089E4A14:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(2368)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[20] + static_cast<std::uint32_t>(2368), aot_gpr_4);
      if (branch_taken) {
          goto L_089E4F7C;
      }
      goto L_089E4A24;
    }
L_089E4A24:
    aot_gpr_4 = (aot_gpr_6 | 0u);
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    goto L_089E4A2C;
L_089E4A2C:
    if (aot_gpr_6 != 0u) {
    aot_gpr_4 = (aot_gpr_5 | 0u);
        goto L_089E4A34;
    }
    goto L_089E4A34;
L_089E4A34:
    ctx.gpr[7] = (0u | 0u);
    aot_gpr_5 = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    if (aot_gpr_5 != 0u) {
    ctx.gpr[7] = (aot_gpr_4 | 0u);
        goto L_089E4A44;
    }
    goto L_089E4A44;
L_089E4A44:
    aot_gpr_4 = (ctx.gpr[20] + static_cast<std::uint32_t>(48));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8996)));
    aot_gpr_4 = (17056u << 16u);
    aot_fpr_12 = aot_fpr_12 - aot_fpr_13;
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 / aot_fpr_14;
    aot_gpr_6 = (16840u << 16u);
    aot_gpr_5 = (0u | 49u);
    aot_gpr_4 = (0u | 0u);
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_6);
    aot_fpr_12 = aot_fpr_12 + ctx.fpr[15];
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    ctx.gpr[30] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(ctx.gpr[30]) ? 1u : 0u);
    if (aot_gpr_6 != 0u) {
    ctx.gpr[30] = (aot_gpr_5 | 0u);
        goto L_089E4A88;
    }
    goto L_089E4A88;
L_089E4A88:
    aot_gpr_5 = (static_cast<std::int32_t>(ctx.gpr[30]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    if (aot_gpr_5 != 0u) {
    ctx.gpr[30] = (aot_gpr_4 | 0u);
        goto L_089E4A94;
    }
    goto L_089E4A94;
L_089E4A94:
    aot_gpr_4 = (ctx.gpr[30] | 0u);
    ctx.gpr[30] = (0u | 0u);
    aot_gpr_5 = (static_cast<std::int32_t>(ctx.gpr[30]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    if (aot_gpr_5 != 0u) {
    ctx.gpr[30] = (aot_gpr_4 | 0u);
        goto L_089E4AA8;
    }
    goto L_089E4AA8;
L_089E4AA8:
    aot_gpr_4 = (ctx.gpr[20] + static_cast<std::uint32_t>(48));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8996)));
    aot_gpr_4 = (17056u << 16u);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 / aot_fpr_14;
    aot_gpr_4 = (16880u << 16u);
    aot_gpr_6 = (0u | 49u);
    aot_gpr_5 = (0u | 0u);
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 + ctx.fpr[15];
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[8] = (static_cast<std::int32_t>(aot_gpr_6) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    if (ctx.gpr[8] != 0u) {
    aot_gpr_4 = (aot_gpr_6 | 0u);
        goto L_089E4AEC;
    }
    goto L_089E4AEC;
L_089E4AEC:
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    if (aot_gpr_6 != 0u) {
    aot_gpr_4 = (aot_gpr_5 | 0u);
        goto L_089E4AF8;
    }
    goto L_089E4AF8;
L_089E4AF8:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (0u | 49u);
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    if (aot_gpr_6 != 0u) {
    aot_gpr_4 = (aot_gpr_5 | 0u);
        goto L_089E4B0C;
    }
    goto L_089E4B0C;
L_089E4B0C:
    aot_gpr_5 = (ctx.gpr[20] + static_cast<std::uint32_t>(48));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8996)));
    aot_gpr_5 = (17056u << 16u);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_12 = aot_fpr_12 / aot_fpr_14;
    aot_gpr_6 = (16840u << 16u);
    ctx.gpr[8] = (aot_gpr_4 | 0u);
    aot_gpr_5 = (0u | 49u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(144), ctx.gpr[8]);
    aot_gpr_4 = (0u | 0u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_6);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[8] = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_6) ? 1u : 0u);
    if (ctx.gpr[8] != 0u) {
    aot_gpr_6 = (aot_gpr_5 | 0u);
        goto L_089E4B58;
    }
    goto L_089E4B58;
L_089E4B58:
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    if (aot_gpr_6 != 0u) {
    aot_gpr_5 = (aot_gpr_4 | 0u);
        goto L_089E4B68;
    }
    goto L_089E4B68;
L_089E4B68:
    aot_gpr_4 = (0u | 49u);
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    if (aot_gpr_6 != 0u) {
    aot_gpr_4 = (aot_gpr_5 | 0u);
        goto L_089E4B78;
    }
    goto L_089E4B78;
L_089E4B78:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(140), ctx.gpr[7]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(136), aot_gpr_4);
    aot_gpr_5 = (0u | 0u);
    aot_fpr_20 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8992)));
    aot_gpr_6 = (0u | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(132), aot_gpr_5);
    { const float fs = aot_fpr_20; const float ft = aot_fpr_20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_20 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_20 = fs * ft; }
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(ctx.gpr[30]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(128), aot_gpr_6);
      if (branch_taken) {
          goto L_089E4F54;
      }
      goto L_089E4BA0;
    }
L_089E4BA0:
    ctx.gpr[23] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(140)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(144)));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(ctx.gpr[23]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_089E4F40;
      }
      goto L_089E4BB4;
    }
L_089E4BB4:
    aot_gpr_4 = (ctx.gpr[30] << 4u);
    goto L_089E4BB8;
L_089E4BB8:
    aot_gpr_5 = (ctx.gpr[30] + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (ctx.gpr[23] + aot_gpr_4);
    aot_gpr_5 = (aot_gpr_4 << 6u);
    ctx.gpr[22] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25496)));
    aot_gpr_4 = (aot_gpr_4 << 3u);
    aot_gpr_4 = (aot_gpr_5 - aot_gpr_4);
    ctx.gpr[22] = (ctx.gpr[22] + aot_gpr_4);
    ctx.gpr[21] = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[21] == 0u;
      if (branch_taken) {
          goto L_089E4D84;
      }
      goto L_089E4BE8;
    }
L_089E4BE8:
    ctx.gpr[19] = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[21] = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(72)));
    aot_gpr_5 = (aot_gpr_5 & 14u);
    aot_gpr_5 = (aot_gpr_5 ^ 8u);
    aot_gpr_5 = (aot_gpr_5 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (0u | 1u);
      if (branch_taken) {
          goto L_089E4C4C;
      }
      goto L_089E4C08;
    }
L_089E4C08:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(72)));
    aot_gpr_6 = (aot_gpr_6 & 2048u);
    { const bool branch_taken = aot_gpr_6 != 0u;
    aot_gpr_5 = (0u | 0u);
      if (branch_taken) {
          goto L_089E4C28;
      }
      goto L_089E4C18;
    }
L_089E4C18:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(76)));
    aot_gpr_6 = (aot_gpr_6 & 2048u);
    { const bool branch_taken = aot_gpr_6 == 0u;
      if (branch_taken) {
          goto L_089E4C2C;
      }
      goto L_089E4C28;
    }
L_089E4C28:
    aot_gpr_5 = (0u | 1u);
    goto L_089E4C2C;
L_089E4C2C:
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[19] + static_cast<std::uint32_t>(482))))));
    ctx.gpr[7] = (aot_gpr_5 & 255u);
    aot_gpr_5 = (aot_gpr_6 & 64u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
      if (branch_taken) {
          goto L_089E4C48;
      }
      goto L_089E4C40;
    }
L_089E4C40:
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_089E4C4C;
      }
      goto L_089E4C48;
    }
L_089E4C48:
    aot_gpr_4 = (0u | 0u);
    goto L_089E4C4C;
L_089E4C4C:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089E4D7C;
      }
      goto L_089E4C54;
    }
L_089E4C54:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[19] + static_cast<std::uint32_t>(86))))));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_089E4C78;
      }
      goto L_089E4C68;
    }
L_089E4C68:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    goto L_089E4C78;
L_089E4C78:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[18] + static_cast<std::uint32_t>(17)));
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089E4D7C;
      }
      goto L_089E4C8C;
    }
L_089E4C8C:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[18] + static_cast<std::uint32_t>(24))))));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) < 0;
    aot_gpr_16 = (0u | 0u);
      if (branch_taken) {
          goto L_089E4CB0;
      }
      goto L_089E4C98;
    }
L_089E4C98:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[18] + static_cast<std::uint32_t>(24))))));
    aot_gpr_16 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8672)));
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[17]);
    aot_gpr_4 = (aot_gpr_4 << 6u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_16 = (aot_gpr_16 + aot_gpr_4);
      if (branch_taken) {
          goto L_089E4CB0;
      }
      goto L_089E4CB0;
    }
L_089E4CB0:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(20)));
    aot_gpr_5 = (0u | 3u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_089E4D68;
      }
      goto L_089E4CC0;
    }
L_089E4CC0:
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(48)));
    aot_gpr_31 = (0x089E4CCCu);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0119_entry, 119u, 489u, 0x089E26F0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089E4CCCu) goto L_089E4CCC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089E4CCC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_089E4D68;
      }
      goto L_089E4CD4;
    }
L_089E4CD4:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(148), aot_gpr_16);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    aot_gpr_16 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    aot_gpr_31 = (0x089E4CECu);
    aot_gpr_6 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0127_entry, 127u, 914u, 0x08A036C4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089E4CECu) goto L_089E4CEC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089E4CEC:
    aot_gpr_4 = (ctx.gpr[20] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr_16 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vec3_ct<0u, 0u, 1u, 3u, 1u>();
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    aot_gpr_4 = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[22] = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[22] < aot_fpr_20)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(148)));
      if (branch_taken) {
          goto L_089E4D68;
      }
      goto L_089E4D24;
    }
L_089E4D24:
    aot_gpr_31 = (0x089E4D2Cu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0127_entry, 127u, 371u, 0x08A01528u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089E4D2Cu) goto L_089E4D2C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089E4D2C:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    aot_gpr_31 = (0x089E4D38u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0127_entry, 127u, 886u, 0x08A03590u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089E4D38u) goto L_089E4D38;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089E4D38:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_089E4D68;
      }
      goto L_089E4D40;
    }
L_089E4D40:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    aot_gpr_6 = (0u | 0u);
    aot_gpr_31 = (0x089E4D54u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0127_entry, 127u, 918u, 0x08A03794u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089E4D54u) goto L_089E4D54;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089E4D54:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_089E4D68;
      }
      goto L_089E4D5C;
    }
L_089E4D5C:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(128), aot_gpr_16);
    aot_fpr_20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(132), ctx.gpr[19]);
    goto L_089E4D68;
L_089E4D68:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[18] + static_cast<std::uint32_t>(17)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_089E4C8C;
      }
      goto L_089E4D7C;
    }
L_089E4D7C:
    { const bool branch_taken = ctx.gpr[21] != 0u;
      if (branch_taken) {
          goto L_089E4BE8;
      }
      goto L_089E4D84;
    }
L_089E4D84:
    aot_gpr_4 = (ctx.gpr[22] + static_cast<std::uint32_t>(12));
    ctx.gpr[21] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[21] == 0u;
      if (branch_taken) {
          goto L_089E4F2C;
      }
      goto L_089E4D94;
    }
L_089E4D94:
    ctx.gpr[19] = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[21] = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(72)));
    aot_gpr_5 = (aot_gpr_5 & 14u);
    aot_gpr_5 = (aot_gpr_5 ^ 8u);
    aot_gpr_5 = (aot_gpr_5 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (0u | 1u);
      if (branch_taken) {
          goto L_089E4DF8;
      }
      goto L_089E4DB4;
    }
L_089E4DB4:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(72)));
    aot_gpr_6 = (aot_gpr_6 & 2048u);
    { const bool branch_taken = aot_gpr_6 != 0u;
    aot_gpr_5 = (0u | 0u);
      if (branch_taken) {
          goto L_089E4DD4;
      }
      goto L_089E4DC4;
    }
L_089E4DC4:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(76)));
    aot_gpr_6 = (aot_gpr_6 & 2048u);
    { const bool branch_taken = aot_gpr_6 == 0u;
      if (branch_taken) {
          goto L_089E4DD8;
      }
      goto L_089E4DD4;
    }
L_089E4DD4:
    aot_gpr_5 = (0u | 1u);
    goto L_089E4DD8;
L_089E4DD8:
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[19] + static_cast<std::uint32_t>(482))))));
    ctx.gpr[7] = (aot_gpr_5 & 255u);
    aot_gpr_5 = (aot_gpr_6 & 64u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
      if (branch_taken) {
          goto L_089E4DF4;
      }
      goto L_089E4DEC;
    }
L_089E4DEC:
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_089E4DF8;
      }
      goto L_089E4DF4;
    }
L_089E4DF4:
    aot_gpr_4 = (0u | 0u);
    goto L_089E4DF8;
L_089E4DF8:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089E4F24;
      }
      goto L_089E4E00;
    }
L_089E4E00:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[19] + static_cast<std::uint32_t>(86))))));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_089E4E24;
      }
      goto L_089E4E14;
    }
L_089E4E14:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    goto L_089E4E24;
L_089E4E24:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[18] + static_cast<std::uint32_t>(17)));
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089E4F24;
      }
      goto L_089E4E38;
    }
L_089E4E38:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[18] + static_cast<std::uint32_t>(24))))));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) < 0;
    aot_gpr_16 = (0u | 0u);
      if (branch_taken) {
          goto L_089E4E5C;
      }
      goto L_089E4E44;
    }
L_089E4E44:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[18] + static_cast<std::uint32_t>(24))))));
    aot_gpr_16 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8672)));
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[17]);
    aot_gpr_4 = (aot_gpr_4 << 6u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_16 = (aot_gpr_16 + aot_gpr_4);
      if (branch_taken) {
          goto L_089E4E5C;
      }
      goto L_089E4E5C;
    }
L_089E4E5C:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(20)));
    aot_gpr_5 = (0u | 3u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_089E4F10;
      }
      goto L_089E4E6C;
    }
L_089E4E6C:
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(48)));
    aot_gpr_31 = (0x089E4E78u);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0119_entry, 119u, 489u, 0x089E26F0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089E4E78u) goto L_089E4E78;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089E4E78:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_089E4F10;
      }
      goto L_089E4E80;
    }
L_089E4E80:
    ctx.gpr[22] = (aot_gpr_29 + static_cast<std::uint32_t>(80));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x089E4E94u);
    aot_gpr_6 = (ctx.gpr[22] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0127_entry, 127u, 914u, 0x08A036C4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089E4E94u) goto L_089E4E94;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089E4E94:
    aot_gpr_4 = (ctx.gpr[20] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vec3_ct<0u, 0u, 1u, 3u, 1u>();
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    aot_gpr_4 = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[22] = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[22] < aot_fpr_20)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_089E4F10;
      }
      goto L_089E4ECC;
    }
L_089E4ECC:
    aot_gpr_31 = (0x089E4ED4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0127_entry, 127u, 371u, 0x08A01528u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089E4ED4u) goto L_089E4ED4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089E4ED4:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    aot_gpr_31 = (0x089E4EE0u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0127_entry, 127u, 886u, 0x08A03590u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089E4EE0u) goto L_089E4EE0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089E4EE0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_089E4F10;
      }
      goto L_089E4EE8;
    }
L_089E4EE8:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    aot_gpr_6 = (0u | 0u);
    aot_gpr_31 = (0x089E4EFCu);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0127_entry, 127u, 918u, 0x08A03794u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089E4EFCu) goto L_089E4EFC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089E4EFC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_089E4F10;
      }
      goto L_089E4F04;
    }
L_089E4F04:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(128), aot_gpr_16);
    aot_fpr_20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(132), ctx.gpr[19]);
    goto L_089E4F10;
L_089E4F10:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[18] + static_cast<std::uint32_t>(17)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_089E4E38;
      }
      goto L_089E4F24;
    }
L_089E4F24:
    { const bool branch_taken = ctx.gpr[21] != 0u;
      if (branch_taken) {
          goto L_089E4D94;
      }
      goto L_089E4F2C;
    }
L_089E4F2C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(144)));
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(ctx.gpr[23]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (ctx.gpr[30] << 4u);
      if (branch_taken) {
          goto L_089E4BB8;
      }
      goto L_089E4F40;
    }
L_089E4F40:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(136)));
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(ctx.gpr[30]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089E4BA0;
      }
      goto L_089E4F54;
    }
L_089E4F54:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(128)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089E4F7C;
      }
      goto L_089E4F60;
    }
L_089E4F60:
    aot_gpr_31 = (0x089E4F68u);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0127_entry, 127u, 371u, 0x08A01528u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089E4F68u) goto L_089E4F68;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089E4F68:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(132)));
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x089E4F7Cu);
    aot_gpr_6 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0127_entry, 127u, 720u, 0x08A02D68u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089E4F7Cu) goto L_089E4F7C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089E4F7C:
    { std::uint32_t aot_run_words[12]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(152), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      ctx.fpr[22] = std::bit_cast<float>(aot_run_words[1]);
      aot_gpr_16 = aot_run_words[2];
      ctx.gpr[17] = aot_run_words[3];
      ctx.gpr[18] = aot_run_words[4];
      ctx.gpr[19] = aot_run_words[5];
      ctx.gpr[20] = aot_run_words[6];
      ctx.gpr[21] = aot_run_words[7];
      ctx.gpr[22] = aot_run_words[8];
      ctx.gpr[23] = aot_run_words[9];
      ctx.gpr[30] = aot_run_words[10];
      aot_gpr_31 = aot_run_words[11];
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
L_089E4FB4:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store_word_left(aot_gpr_4 + static_cast<std::uint32_t>(3), aot_gpr_6);
    aot_mem.aot_direct_store_word_right(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    ctx.gpr[7] = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store_word_left(ctx.gpr[7] + static_cast<std::uint32_t>(3), aot_gpr_6);
    aot_mem.aot_direct_store_word_right(ctx.gpr[7] + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_14));
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(8));
    aot_mem.aot_direct_store_word_left(aot_gpr_6 + static_cast<std::uint32_t>(3), aot_gpr_5);
    aot_mem.aot_direct_store_word_right(aot_gpr_6 + static_cast<std::uint32_t>(0), aot_gpr_5);
    jump_target = aot_gpr_31;
    ctx.gpr[2] = (aot_gpr_4 | 0u);
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
L_089E4FF4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_gpr_31);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(48), aot_gpr_6);
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(3));
    aot_gpr_6 = (aot_mem.aot_direct_load_word_left(aot_gpr_5 + static_cast<std::uint32_t>(3), aot_gpr_6));
    aot_gpr_6 = (aot_mem.aot_direct_load_word_right(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_6));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_6);
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(7));
    aot_gpr_6 = (aot_mem.aot_direct_load_word_left(aot_gpr_5 + static_cast<std::uint32_t>(3), aot_gpr_6));
    aot_gpr_6 = (aot_mem.aot_direct_load_word_right(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_6));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_6);
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(11));
    aot_gpr_6 = (aot_mem.aot_direct_load_word_left(aot_gpr_5 + static_cast<std::uint32_t>(3), aot_gpr_6));
    aot_gpr_6 = (aot_mem.aot_direct_load_word_right(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_6));
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_6);
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_12), std::bit_cast<std::uint32_t>(aot_fpr_13), std::bit_cast<std::uint32_t>(aot_fpr_14)};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(15));
    aot_gpr_6 = (aot_mem.aot_direct_load_word_left(aot_gpr_5 + static_cast<std::uint32_t>(3), aot_gpr_6));
    aot_gpr_6 = (aot_mem.aot_direct_load_word_right(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_6));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_6);
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(19));
    aot_gpr_6 = (aot_mem.aot_direct_load_word_left(aot_gpr_5 + static_cast<std::uint32_t>(3), aot_gpr_6));
    aot_gpr_6 = (aot_mem.aot_direct_load_word_right(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_6));
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_6);
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(23));
    aot_gpr_6 = (aot_mem.aot_direct_load_word_left(aot_gpr_5 + static_cast<std::uint32_t>(3), aot_gpr_6));
    aot_gpr_6 = (aot_mem.aot_direct_load_word_right(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_6));
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_6);
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_13), std::bit_cast<std::uint32_t>(aot_fpr_14), std::bit_cast<std::uint32_t>(ctx.fpr[15])};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words); }
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_089E5098;
      }
      goto L_089E5088;
    }
L_089E5088:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_089E5098;
L_089E5098:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_089E50C0;
      }
      goto L_089E50B0;
    }
L_089E50B0:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_089E50C0;
L_089E50C0:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(24)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_089E50E8;
      }
      goto L_089E50D8;
    }
L_089E50D8:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(24)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_089E50E8;
L_089E50E8:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(27))))));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(24)));
    aot_gpr_31 = (0x089E5110u);
    aot_gpr_5 = (aot_gpr_5 & 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0093_entry, 93u, 36u, 0x089783ACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089E5110u) goto L_089E5110;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089E5110:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(32)));
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
L_089E511C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-128));
    { const std::uint32_t aot_run_words[6]{std::bit_cast<std::uint32_t>(aot_fpr_20), aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(100), aot_run_words); }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(128), aot_gpr_6);
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(3));
    aot_gpr_6 = (aot_mem.aot_direct_load_word_left(aot_gpr_5 + static_cast<std::uint32_t>(3), aot_gpr_6));
    aot_gpr_6 = (aot_mem.aot_direct_load_word_right(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_6));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_6);
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(7));
    aot_gpr_6 = (aot_mem.aot_direct_load_word_left(aot_gpr_5 + static_cast<std::uint32_t>(3), aot_gpr_6));
    aot_gpr_6 = (aot_mem.aot_direct_load_word_right(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_6));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_6);
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(11));
    aot_gpr_6 = (aot_mem.aot_direct_load_word_left(aot_gpr_5 + static_cast<std::uint32_t>(3), aot_gpr_6));
    aot_gpr_6 = (aot_mem.aot_direct_load_word_right(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_6));
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_6);
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_12), std::bit_cast<std::uint32_t>(aot_fpr_13), std::bit_cast<std::uint32_t>(aot_fpr_14)};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words); }
    aot_gpr_16 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    ctx.gpr[1] = (aot_mem.aot_direct_load_word_right(aot_gpr_4 + static_cast<std::uint32_t>(15), ctx.gpr[1]));
    ctx.gpr[1] = (aot_mem.aot_direct_load_word_left(aot_gpr_4 + static_cast<std::uint32_t>(18), ctx.gpr[1]));
    aot_fpr_20 = std::bit_cast<float>(ctx.gpr[1]);
    aot_gpr_4 = (49864u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_14 <= aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_089E51B0;
      }
      goto L_089E51A0;
    }
L_089E51A0:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    aot_gpr_31 = (0x089E51ACu);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0035_entry, 35u, 514u, 0x088933E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089E51ACu) goto L_089E51AC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089E51AC:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_089E51B0;
L_089E51B0:
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(96));
    ctx.gpr[8] = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_5 = (0u | 1u);
    ctx.gpr[7] = (0u | 16u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), 0u);
    aot_gpr_31 = (0x089E51E4u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0037_entry, 37u, 287u, 0x08899758u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089E51E4u) goto L_089E51E4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089E51E4:
    aot_gpr_16 = (0u | 0u);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(96))))));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_16) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[18] = (aot_gpr_29 | 0u);
      if (branch_taken) {
          goto L_089E5270;
      }
      goto L_089E51F8;
    }
L_089E51F8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(32)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(72)));
    aot_gpr_4 = (aot_gpr_4 & 14u);
    aot_gpr_4 = (aot_gpr_4 ^ 4u);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089E525C;
      }
      goto L_089E5218;
    }
L_089E5218:
    ctx.gpr[17] = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(32)));
    aot_gpr_31 = (0x089E5224u);
    ctx.gpr[19] = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(900)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089E5224u) goto L_089E5224;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089E5224:
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[2];
      if (branch_taken) {
          goto L_089E525C;
      }
      goto L_089E522C;
    }
L_089E522C:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x089E5238u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0035_entry, 35u, 247u, 0x08891B8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089E5238u) goto L_089E5238;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089E5238:
    { const bool branch_taken = ctx.gpr[17] == 0u;
      if (branch_taken) {
          goto L_089E525C;
      }
      goto L_089E5240;
    }
L_089E5240:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(24));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    aot_gpr_4 = (ctx.gpr[17] + aot_gpr_4);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_6;
    aot_gpr_31 = (0x089E525Cu);
    aot_gpr_5 = (0u | 3u);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089E525Cu) goto L_089E525C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089E525C:
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(96))))));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_16) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089E51F8;
      }
      goto L_089E5270;
    }
L_089E5270:
    { std::uint32_t aot_run_words[6]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(100), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      aot_gpr_16 = aot_run_words[1];
      ctx.gpr[17] = aot_run_words[2];
      ctx.gpr[18] = aot_run_words[3];
      ctx.gpr[19] = aot_run_words[4];
      aot_gpr_31 = aot_run_words[5];
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
L_089E5290:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-160));
    { const std::uint32_t aot_run_words[4]{aot_gpr_16, ctx.gpr[17], ctx.gpr[18], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(132), aot_run_words); }
    aot_gpr_16 = (aot_gpr_4 | 0u);
    ctx.gpr[17] = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    aot_gpr_6 = (0u | 1u);
    aot_gpr_31 = (0x089E52C0u);
    ctx.gpr[7] = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0075_entry, 75u, 315u, 0x08931AF4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089E52C0u) goto L_089E52C0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089E52C0:
    ctx.gpr[18] = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    aot_gpr_6 = (0u | 2u);
    aot_gpr_31 = (0x089E52D8u);
    ctx.gpr[7] = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0075_entry, 75u, 315u, 0x08931AF4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089E52D8u) goto L_089E52D8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089E52D8:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x089E52E4u);
    aot_gpr_5 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806AE0, 0u, 368u, 0x08806AE0u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 368u, 0x08806AE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089E52E4u) goto L_089E52E4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089E52E4:
    aot_gpr_16 = (0u < ctx.gpr[2] ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    aot_gpr_31 = (0x089E52F4u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    goto L_089E4FB4;
L_089E52F4:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(28));
    aot_gpr_31 = (0x089E5300u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    goto L_089E4FB4;
L_089E5300:
    aot_gpr_4 = (aot_gpr_16 & 255u);
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words);
      aot_gpr_5 = aot_run_words[0];
      aot_gpr_6 = aot_run_words[1];
      ctx.gpr[7] = aot_run_words[2];
    }
    { const std::uint32_t aot_run_words[3]{aot_gpr_5, aot_gpr_6, ctx.gpr[7]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(108), aot_run_words); }
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(28), aot_run_words);
      aot_gpr_5 = aot_run_words[0];
      aot_gpr_6 = aot_run_words[1];
      ctx.gpr[7] = aot_run_words[2];
    }
    { const std::uint32_t aot_run_words[3]{aot_gpr_5, aot_gpr_6, ctx.gpr[7]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(120), aot_run_words); }
    aot_gpr_5 = (0u | 28u);
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(80), static_cast<std::uint16_t>(aot_gpr_5));
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(9664)));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(82), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_16 = (aot_gpr_29 + static_cast<std::uint32_t>(80));
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(83));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(108))))));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(109))))));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(110))))));
    aot_mem.aot_direct_store8(aot_gpr_5 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_6));
    aot_mem.aot_direct_store8(aot_gpr_5 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_direct_store8(aot_gpr_5 + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[8]));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(111))))));
    aot_mem.aot_direct_store8(aot_gpr_5 + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(aot_gpr_6));
    aot_gpr_6 = (aot_gpr_5 + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(112))))));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(113))))));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(114))))));
    aot_mem.aot_direct_store8(aot_gpr_6 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_direct_store8(aot_gpr_6 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[8]));
    aot_mem.aot_direct_store8(aot_gpr_6 + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(115))))));
    aot_mem.aot_direct_store8(aot_gpr_6 + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(8));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(116))))));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(117))))));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(118))))));
    aot_mem.aot_direct_store8(aot_gpr_5 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_6));
    aot_mem.aot_direct_store8(aot_gpr_5 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_direct_store8(aot_gpr_5 + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[8]));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(119))))));
    aot_mem.aot_direct_store8(aot_gpr_5 + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(aot_gpr_6));
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(95));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(120))))));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(121))))));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(122))))));
    aot_mem.aot_direct_store8(aot_gpr_5 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_6));
    aot_mem.aot_direct_store8(aot_gpr_5 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_direct_store8(aot_gpr_5 + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[8]));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(123))))));
    aot_mem.aot_direct_store8(aot_gpr_5 + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(aot_gpr_6));
    aot_gpr_6 = (aot_gpr_5 + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(124))))));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(125))))));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(126))))));
    aot_mem.aot_direct_store8(aot_gpr_6 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_direct_store8(aot_gpr_6 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[8]));
    aot_mem.aot_direct_store8(aot_gpr_6 + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(127))))));
    aot_mem.aot_direct_store8(aot_gpr_6 + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(8));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(128))))));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(129))))));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(130))))));
    aot_mem.aot_direct_store8(aot_gpr_5 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_6));
    aot_mem.aot_direct_store8(aot_gpr_5 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_direct_store8(aot_gpr_5 + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[8]));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(131))))));
    aot_mem.aot_direct_store8(aot_gpr_5 + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(aot_gpr_6));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(107))))));
    aot_gpr_6 = (0u + static_cast<std::uint32_t>(-2));
    aot_gpr_5 = (aot_gpr_5 & aot_gpr_6);
    aot_gpr_4 = (aot_gpr_4 & 1u);
    aot_gpr_4 = (aot_gpr_5 | aot_gpr_4);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(107), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(40), static_cast<std::uint16_t>(0u));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(40))))));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x089E5450u);
    ctx.gpr[7] = (0u | 0u);
    goto L_089E4FF4;
L_089E5450:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    aot_gpr_5 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x089E5464u);
    aot_gpr_6 = (0u + static_cast<std::uint32_t>(-1));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 189u, 0x08ADCA34u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089E5464u) goto L_089E5464;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089E5464:
    ctx.gpr[2] = (0u | 0u);
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(132), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(160));
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
L_089E5480:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-96));
    { const std::uint32_t aot_run_words[3]{aot_gpr_16, ctx.gpr[17], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(80), aot_run_words); }
    aot_gpr_16 = (aot_gpr_4 | 0u);
    ctx.gpr[17] = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    aot_gpr_6 = (0u | 1u);
    aot_gpr_31 = (0x089E54ACu);
    ctx.gpr[7] = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0075_entry, 75u, 315u, 0x08931AF4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089E54ACu) goto L_089E54AC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089E54AC:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x089E54B8u);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806A88, 0u, 360u, 0x08806A88u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 360u, 0x08806A88u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089E54B8u) goto L_089E54B8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089E54B8:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    aot_gpr_16 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    aot_gpr_31 = (0x089E54CCu);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    goto L_089E4FB4;
L_089E54CC:
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_16);
    aot_fpr_13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_13)));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(16))))));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(17))))));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(18))))));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(67), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(68), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(69), static_cast<std::uint8_t>(aot_gpr_6));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(19))))));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(20))))));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(21))))));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(70), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(71), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(aot_gpr_6));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(22))))));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(23))))));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(24))))));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(73), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(74), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(75), static_cast<std::uint8_t>(aot_gpr_6));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(25))))));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(26))))));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(27))))));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(77), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(78), static_cast<std::uint8_t>(aot_gpr_6));
    aot_gpr_4 = (0u | 19u);
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(48), static_cast<std::uint16_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(9665)));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(50), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_16 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(51));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(67))))));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(68))))));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(aot_gpr_5));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 8u));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(70))))));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(71))))));
    aot_mem.aot_direct_store8(aot_gpr_5 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_6));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(72))))));
    aot_mem.aot_direct_store8(aot_gpr_5 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(aot_gpr_6));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_6) >> 8u));
    aot_mem.aot_direct_store8(aot_gpr_5 + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(74))))));
    aot_mem.aot_direct_store8(aot_gpr_5 + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(aot_gpr_6));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(8));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(75))))));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(76))))));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(aot_gpr_5));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 8u));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(78))))));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(aot_gpr_5));
    ctx.gpr[1] = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_mem.aot_direct_store_word_right(aot_gpr_29 + static_cast<std::uint32_t>(63), ctx.gpr[1]);
    aot_mem.aot_direct_store_word_left(aot_gpr_29 + static_cast<std::uint32_t>(66), ctx.gpr[1]);
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(28), static_cast<std::uint16_t>(0u));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(28))))));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x089E55D8u);
    ctx.gpr[7] = (0u | 0u);
    goto L_089E511C;
L_089E55D8:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    aot_gpr_5 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x089E55ECu);
    aot_gpr_6 = (0u + static_cast<std::uint32_t>(-1));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 189u, 0x08ADCA34u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089E55ECu) goto L_089E55EC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089E55EC:
    ctx.gpr[2] = (0u | 0u);
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(80), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
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
L_089E5604:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-208));
    { const std::uint32_t aot_run_words[9]{std::bit_cast<std::uint32_t>(aot_fpr_20), aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(164), aot_run_words); }
    aot_gpr_16 = (aot_gpr_4 | 0u);
    ctx.gpr[17] = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[19] = (0u | 1u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    aot_gpr_6 = (0u | 1u);
    aot_gpr_31 = (0x089E5650u);
    ctx.gpr[7] = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0075_entry, 75u, 315u, 0x08931AF4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089E5650u) goto L_089E5650;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089E5650:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x089E565Cu);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806A88, 0u, 360u, 0x08806A88u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 360u, 0x08806A88u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089E565Cu) goto L_089E565C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089E565C:
    aot_fpr_20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(24)));
    aot_gpr_4 = (49864u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[21] = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    ctx.gpr[22] = (aot_gpr_29 + static_cast<std::uint32_t>(36));
      if (branch_taken) {
          goto L_089E5690;
      }
      goto L_089E5680;
    }
L_089E5680:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    aot_gpr_31 = (0x089E568Cu);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0035_entry, 35u, 514u, 0x088933E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089E568Cu) goto L_089E568C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089E568C:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_089E5690;
L_089E5690:
    ctx.gpr[20] = (ctx.gpr[18] | 0u);
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(32), static_cast<std::uint16_t>(0u));
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_5 = (0u | 1u);
    aot_gpr_6 = (ctx.gpr[21] | 0u);
    ctx.gpr[7] = (0u | 32u);
    ctx.gpr[8] = (ctx.gpr[22] | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), 0u);
    aot_gpr_31 = (0x089E56CCu);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[19]);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0037_entry, 37u, 287u, 0x08899758u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089E56CCu) goto L_089E56CC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089E56CC:
    aot_gpr_5 = (0u | 0u);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(32))))));
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 == 0u;
    ctx.gpr[8] = (1u << 16u);
      if (branch_taken) {
          goto L_089E5730;
      }
      goto L_089E56E0;
    }
L_089E56E0:
    aot_gpr_6 = (aot_gpr_29 | 0u);
    goto L_089E56E4;
L_089E56E4:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(36)));
    ctx.gpr[9] = (aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(72)));
    ctx.gpr[9] = (ctx.gpr[9] & 14u);
    ctx.gpr[9] = (ctx.gpr[9] ^ 4u);
    ctx.gpr[9] = (ctx.gpr[9] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[9] = (ctx.gpr[9] & 255u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
      if (branch_taken) {
          goto L_089E571C;
      }
      goto L_089E5704;
    }
L_089E5704:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(76)));
    ctx.gpr[7] = (ctx.gpr[7] & ctx.gpr[8]);
    ctx.gpr[7] = (0u < ctx.gpr[7] ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
      if (branch_taken) {
          goto L_089E5720;
      }
      goto L_089E571C;
    }
L_089E571C:
    ctx.gpr[20] = (0u | 0u);
    goto L_089E5720;
L_089E5720:
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089E56E4;
      }
      goto L_089E5730;
    }
L_089E5730:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_5 = (0u | 1u);
    aot_gpr_6 = (ctx.gpr[21] | 0u);
    ctx.gpr[7] = (0u | 32u);
    ctx.gpr[8] = (ctx.gpr[22] | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 1u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), 0u);
    aot_gpr_31 = (0x089E5764u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[19]);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0037_entry, 37u, 287u, 0x08899758u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089E5764u) goto L_089E5764;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089E5764:
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(32))))));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[21] = (2237u << 16u);
      if (branch_taken) {
          goto L_089E57D4;
      }
      goto L_089E5778;
    }
L_089E5778:
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-28736));
    ctx.gpr[19] = (aot_gpr_29 | 0u);
    goto L_089E5780;
L_089E5780:
    aot_gpr_31 = (0x089E5788u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(36)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 58u, 0x08AD0600u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089E5788u) goto L_089E5788;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089E5788:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_089E57C0;
      }
      goto L_089E5790;
    }
L_089E5790:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089E57C0;
      }
      goto L_089E579C;
    }
L_089E579C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(352)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089E57C0;
      }
      goto L_089E57A8;
    }
L_089E57A8:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(3))))));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(100)));
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_089E57C0;
      }
      goto L_089E57BC;
    }
L_089E57BC:
    ctx.gpr[20] = (0u | 0u);
    goto L_089E57C0;
L_089E57C0:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(32))))));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089E5780;
      }
      goto L_089E57D4;
    }
L_089E57D4:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x089E57E0u);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08807098, 0u, 451u, 0x08807098u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 451u, 0x08807098u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089E57E0u) goto L_089E57E0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089E57E0:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
    { std::uint32_t aot_run_words[9]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(164), aot_run_words);
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
L_089E5810:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-64));
    { const std::uint32_t aot_run_words[4]{aot_gpr_16, ctx.gpr[17], ctx.gpr[18], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(48), aot_run_words); }
    aot_gpr_16 = (aot_gpr_4 | 0u);
    ctx.gpr[17] = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    ctx.gpr[18] = (0u | 1u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    aot_gpr_6 = (0u | 1u);
    aot_gpr_31 = (0x089E5844u);
    ctx.gpr[7] = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0075_entry, 75u, 315u, 0x08931AF4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089E5844u) goto L_089E5844;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089E5844:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x089E5850u);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806A88, 0u, 360u, 0x08806A88u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 360u, 0x08806A88u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089E5850u) goto L_089E5850;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089E5850:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[9] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
    aot_gpr_5 = (17530u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    aot_gpr_6 = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 1u);
    aot_gpr_31 = (0x089E5884u);
    ctx.gpr[10] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0092_entry, 92u, 754u, 0x08977C18u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089E5884u) goto L_089E5884;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089E5884:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    ctx.gpr[17] = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x089E5898u);
    aot_gpr_6 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0092_entry, 92u, 728u, 0x08977830u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089E5898u) goto L_089E5898;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089E5898:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x089E58A4u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0075_entry, 75u, 313u, 0x08931AD0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089E58A4u) goto L_089E58A4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089E58A4:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(48), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
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
L_089E58C0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x089E58D0u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806A88, 0u, 360u, 0x08806A88u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 360u, 0x08806A88u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089E58D0u) goto L_089E58D0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089E58D0:
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_gpr_4 = (20224u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 < aot_fpr_12)) ? 0x00800000u : 0u);
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_12 = aot_fpr_13 - aot_fpr_12;
        goto L_089E58F8;
    }
    goto L_089E58EC;
L_089E58EC:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_13));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_089E5908;
      }
      goto L_089E58F8;
    }
L_089E58F8:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (32768u << 16u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    goto L_089E5908;
L_089E5908:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(5460), aot_gpr_4);
    ctx.gpr[2] = (0u | 0u);
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
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
L_089E591C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x089E592Cu);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806A88, 0u, 360u, 0x08806A88u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 360u, 0x08806A88u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089E592Cu) goto L_089E592C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089E592C:
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_gpr_4 = (20224u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 < aot_fpr_12)) ? 0x00800000u : 0u);
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_12 = aot_fpr_13 - aot_fpr_12;
        goto L_089E5954;
    }
    goto L_089E5948;
L_089E5948:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_13));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_089E5964;
      }
      goto L_089E5954;
    }
L_089E5954:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (32768u << 16u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    goto L_089E5964;
L_089E5964:
    aot_gpr_31 = (0x089E596Cu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0207_entry, 207u, 571u, 0x08B42624u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089E596Cu) goto L_089E596C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089E596C:
    ctx.gpr[2] = (0u | 0u);
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
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
L_089E597C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x089E598Cu);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806AE0, 0u, 368u, 0x08806AE0u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 368u, 0x08806AE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089E598Cu) goto L_089E598C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089E598C:
    aot_gpr_4 = (ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(4210), static_cast<std::uint8_t>(aot_gpr_4));
    ctx.gpr[2] = (0u | 0u);
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
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
L_089E59A4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x089E59B4u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806AE0, 0u, 368u, 0x08806AE0u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 368u, 0x08806AE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089E59B4u) goto L_089E59B4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089E59B4:
    aot_gpr_4 = (0u < ctx.gpr[2] ? 1u : 0u);
    aot_gpr_31 = (0x089E59C0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0207_entry, 207u, 572u, 0x08B4262Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089E59C0u) goto L_089E59C0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089E59C0:
    ctx.gpr[2] = (0u | 0u);
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
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
L_089E59D0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_4 = (2238u << 16u);
    aot_gpr_31 = (0x089E59E4u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(14864));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0115_entry, 115u, 47u, 0x089D03FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089E59E4u) goto L_089E59E4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089E59E4:
    ctx.gpr[2] = (0u | 0u);
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
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
L_089E59F4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_31);
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_29 | 0u);
    aot_gpr_6 = (0u | 1u);
    aot_gpr_31 = (0x089E5A10u);
    ctx.gpr[7] = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0075_entry, 75u, 315u, 0x08931AF4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089E5A10u) goto L_089E5A10;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089E5A10:
    aot_gpr_4 = (0u | 0u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_6 = (0u | 0u);
    ctx.gpr[7] = (aot_gpr_29 | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[10] = (0u | 1u);
    aot_gpr_31 = (0x089E5A34u);
    ctx.gpr[11] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0121_entry, 121u, 287u, 0x089E974Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089E5A34u) goto L_089E5A34;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089E5A34:
    ctx.gpr[2] = (0u | 0u);
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
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
L_089E5A44:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    { const std::uint32_t aot_run_words[4]{aot_gpr_16, ctx.gpr[17], ctx.gpr[18], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_run_words); }
    aot_gpr_16 = (aot_gpr_4 | 0u);
    ctx.gpr[17] = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    ctx.gpr[18] = (0u | 1u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    aot_gpr_6 = (0u | 1u);
    aot_gpr_31 = (0x089E5A78u);
    ctx.gpr[7] = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0075_entry, 75u, 315u, 0x08931AF4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089E5A78u) goto L_089E5A78;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089E5A78:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(280)));
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
    aot_gpr_31 = (0x089E5A94u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 121u, 0x08804E00u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089E5A94u) goto L_089E5A94;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089E5A94:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x089E5AA0u);
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08807098, 0u, 451u, 0x08807098u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 451u, 0x08807098u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089E5AA0u) goto L_089E5AA0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089E5AA0:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
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
L_089E5ABC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    { const std::uint32_t aot_run_words[5]{aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_run_words); }
    aot_gpr_16 = (2237u << 16u);
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(-28736));
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(9664))))));
    ctx.gpr[18] = (0u | 0u);
    aot_gpr_31 = (0x089E5AECu);
    aot_gpr_4 = (0u | 12u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089E5AECu) goto L_089E5AEC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089E5AEC:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[19] = (aot_gpr_29 + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_089E5B24;
      }
      goto L_089E5AF8;
    }
L_089E5AF8:
    aot_gpr_5 = (2235u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-27364));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), 0u);
    aot_gpr_5 = (2235u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-27348));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_gpr_5 = (2206u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(20468));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), aot_gpr_5);
    ctx.gpr[18] = (aot_gpr_4 | 0u);
    goto L_089E5B24;
L_089E5B24:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), ctx.gpr[18]);
      if (branch_taken) {
          goto L_089E5B38;
      }
      goto L_089E5B2C;
    }
L_089E5B2C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), aot_gpr_4);
    goto L_089E5B38;
L_089E5B38:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x089E5B48u);
    aot_gpr_6 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 340u, 0x08ADD3DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089E5B48u) goto L_089E5B48;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089E5B48:
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
      if (branch_taken) {
          goto L_089E5B6C;
      }
      goto L_089E5B54;
    }
L_089E5B54:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), aot_gpr_4);
      if (branch_taken) {
          goto L_089E5B6C;
      }
      goto L_089E5B64;
    }
L_089E5B64:
    aot_gpr_31 = (0x089E5B6Cu);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE2C0, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089E5B6Cu) goto L_089E5B6C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089E5B6C:
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(9665))))));
    ctx.gpr[18] = (0u | 0u);
    aot_gpr_31 = (0x089E5B7Cu);
    aot_gpr_4 = (0u | 12u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089E5B7Cu) goto L_089E5B7C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089E5B7C:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_5 = (2235u << 16u);
      if (branch_taken) {
          goto L_089E5BB0;
      }
      goto L_089E5B88;
    }
L_089E5B88:
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-27364));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), 0u);
    aot_gpr_5 = (2235u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-27348));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_gpr_5 = (2206u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(20764));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), aot_gpr_5);
    ctx.gpr[18] = (aot_gpr_4 | 0u);
    goto L_089E5BB0;
L_089E5BB0:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), ctx.gpr[18]);
      if (branch_taken) {
          goto L_089E5BC4;
      }
      goto L_089E5BB8;
    }
L_089E5BB8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), aot_gpr_4);
    goto L_089E5BC4;
L_089E5BC4:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x089E5BD4u);
    aot_gpr_6 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 340u, 0x08ADD3DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089E5BD4u) goto L_089E5BD4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089E5BD4:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr_16 == 0u;
      if (branch_taken) {
          goto L_089E5BF8;
      }
      goto L_089E5BE0;
    }
L_089E5BE0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(0), aot_gpr_4);
      if (branch_taken) {
          goto L_089E5BF8;
      }
      goto L_089E5BF0;
    }
L_089E5BF0:
    aot_gpr_31 = (0x089E5BF8u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE2C0, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089E5BF8u) goto L_089E5BF8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089E5BF8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
        goto L_089E5C10;
    }
    goto L_089E5C04;
L_089E5C04:
    aot_gpr_31 = (0x089E5C0Cu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 755u, 0x08B67230u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089E5C0Cu) goto L_089E5C0C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089E5C0C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    goto L_089E5C10;
L_089E5C10:
    aot_gpr_5 = (2232u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-2976));
    aot_gpr_31 = (0x089E5C20u);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0032_entry, 32u, 266u, 0x08885220u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089E5C20u) goto L_089E5C20;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089E5C20:
    { std::uint32_t aot_run_words[5]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      aot_gpr_31 = aot_run_words[4];
    }
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
L_089E5C3C:
    aot_gpr_4 = (0u | 46u);
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(9664), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-11024));
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(9664)));
    aot_gpr_5 = (aot_gpr_5 << 2u);
    aot_gpr_6 = (2237u << 16u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-30144));
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_4 = (0u | 47u);
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(9665), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (2232u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-2880));
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(9665)));
    aot_gpr_5 = (aot_gpr_5 << 2u);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    jump_target = aot_gpr_31;
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_4);
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
L_089E5C84:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
    aot_gpr_5 = (2232u << 16u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x089E5CA0u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-2856));
    goto L_089E77C8;
L_089E5CA0:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
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
L_089E5CAC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    ctx.gpr[7] = (aot_gpr_6 + static_cast<std::uint32_t>(-1));
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    { const bool branch_taken = aot_gpr_6 == 0u;
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_089E5CF4;
      }
      goto L_089E5CD8;
    }
L_089E5CD8:
    aot_gpr_4 = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_6);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] & 255u);
      if (branch_taken) {
          goto L_089E5D00;
      }
      goto L_089E5CF4;
    }
L_089E5CF4:
    aot_gpr_31 = (0x089E5CFCu);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0164_entry, 164u, 231u, 0x08A952D4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089E5CFCu) goto L_089E5CFC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089E5CFC:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    goto L_089E5D00;
L_089E5D00:
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[17] != aot_gpr_4;
      if (branch_taken) {
          goto L_089E5D14;
      }
      goto L_089E5D0C;
    }
L_089E5D0C:
    aot_gpr_31 = (0x089E5D14u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_089E5C84;
L_089E5D14:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
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
L_089E5D2C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    aot_gpr_31 = (0x089E5D44u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0164_entry, 164u, 245u, 0x08A953C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089E5D44u) goto L_089E5D44;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089E5D44:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_089E5D54;
      }
      goto L_089E5D4C;
    }
L_089E5D4C:
    aot_gpr_31 = (0x089E5D54u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_089E5C84;
L_089E5D54:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
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
L_089E5D64:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    ctx.gpr[19] = (aot_gpr_5 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_31);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[18] = (aot_gpr_6 | 0u);
      if (branch_taken) {
          goto L_089E5DD0;
      }
      goto L_089E5D90;
    }
L_089E5D90:
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[18]);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    ctx.gpr[17] = (ctx.gpr[18] + static_cast<std::uint32_t>(-1));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_089E5DC8;
      }
      goto L_089E5DA8;
    }
L_089E5DA8:
    aot_gpr_31 = (0x089E5DB0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_089E5CAC;
L_089E5DB0:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_mem.aot_direct_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[17] = (ctx.gpr[18] + static_cast<std::uint32_t>(-1));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_089E5DA8;
      }
      goto L_089E5DC8;
    }
L_089E5DC8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089E5DE0;
      }
      goto L_089E5DD0;
    }
L_089E5DD0:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x089E5DE0u);
    aot_gpr_6 = (ctx.gpr[18] | 0u);
    goto L_089E5D2C;
L_089E5DE0:
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
L_089E5DFC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    ctx.gpr[19] = (aot_gpr_5 | 0u);
    ctx.gpr[17] = (aot_gpr_6 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    { const std::uint32_t aot_run_words[5]{ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], ctx.gpr[23], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words); }
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[18] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_089E5EA4;
      }
      goto L_089E5E3C;
    }
L_089E5E3C:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    ctx.gpr[19] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr_5 == 0u;
    ctx.gpr[17] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_089E5E9C;
      }
      goto L_089E5E50;
    }
L_089E5E50:
    ctx.gpr[20] = (aot_gpr_4 + ctx.gpr[18]);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-1));
    goto L_089E5E58;
L_089E5E58:
    ctx.gpr[23] = (ctx.gpr[18] + static_cast<std::uint32_t>(-1));
    ctx.gpr[21] = (ctx.gpr[20] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[22] = (ctx.gpr[23] | 0u);
      if (branch_taken) {
          goto L_089E5E88;
      }
      goto L_089E5E68;
    }
L_089E5E68:
    aot_gpr_31 = (0x089E5E70u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_089E5CAC;
L_089E5E70:
    aot_gpr_4 = (ctx.gpr[23] | 0u);
    aot_mem.aot_direct_store8(ctx.gpr[21] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[23] = (ctx.gpr[22] + static_cast<std::uint32_t>(-1));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[22] = (ctx.gpr[23] | 0u);
      if (branch_taken) {
          goto L_089E5E68;
      }
      goto L_089E5E88;
    }
L_089E5E88:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    ctx.gpr[19] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    ctx.gpr[20] = (ctx.gpr[20] + ctx.gpr[18]);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[17] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_089E5E58;
      }
      goto L_089E5E9C;
    }
L_089E5E9C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089E5EB8;
      }
      goto L_089E5EA4;
    }
L_089E5EA4:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[17])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[18])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_6 = (ctx.lo);
    aot_gpr_31 = (0x089E5EB8u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    goto L_089E5D2C;
L_089E5EB8:
    { std::uint32_t aot_run_words[9]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
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
L_089E5EE4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    aot_gpr_31 = (0x089E5F00u);
    aot_gpr_6 = (0u | 4u);
    goto L_089E5D64;
L_089E5F00:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) >= 0;
      if (branch_taken) {
          goto L_089E5F20;
      }
      goto L_089E5F0C;
    }
L_089E5F0C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (2232u << 16u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(16)));
    aot_gpr_31 = (0x089E5F20u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-2824));
    goto L_089E77C8;
L_089E5F20:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[2] = aot_run_words[0];
      aot_gpr_16 = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
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
L_089E5F34:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_5 = (aot_gpr_29 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    aot_gpr_31 = (0x089E5F48u);
    aot_gpr_6 = (0u | 4u);
    goto L_089E5D64;
L_089E5F48:
    ctx.gpr[2] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
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
L_089E5F58:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_5 = (aot_gpr_29 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    aot_gpr_31 = (0x089E5F6Cu);
    aot_gpr_6 = (0u | 4u);
    goto L_089E5D64;
L_089E5F6C:
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
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
L_089E5F7C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    { const std::uint32_t aot_run_words[4]{aot_gpr_16, ctx.gpr[17], ctx.gpr[18], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_gpr_31 = (0x089E5F98u);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    goto L_089E5F34;
L_089E5F98:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] != 0u;
      if (branch_taken) {
          goto L_089E5FAC;
      }
      goto L_089E5FA4;
    }
L_089E5FA4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089E5FE8;
      }
      goto L_089E5FAC;
    }
L_089E5FAC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(8)));
    aot_gpr_31 = (0x089E5FBCu);
    aot_gpr_6 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0164_entry, 164u, 257u, 0x08A954A0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089E5FBCu) goto L_089E5FBC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089E5FBC:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x089E5FD0u);
    aot_gpr_6 = (ctx.gpr[17] | 0u);
    goto L_089E5D2C;
L_089E5FD0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    aot_gpr_31 = (0x089E5FE0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0115_entry, 115u, 314u, 0x089D1D64u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089E5FE0u) goto L_089E5FE0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089E5FE0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089E5FE8;
      }
      goto L_089E5FE8;
    }
L_089E5FE8:
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
L_089E6000:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    { const std::uint32_t aot_run_words[3]{ctx.gpr[17], ctx.gpr[18], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_run_words); }
    aot_gpr_31 = (0x089E6020u);
    ctx.gpr[17] = (aot_gpr_5 | 0u);
    goto L_089E5EE4;
L_089E6020:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[7] = (ctx.gpr[2] << 2u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x089E6038u);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0166_entry, 166u, 148u, 0x08A9D3CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089E6038u) goto L_089E6038;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089E6038:
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(44), ctx.gpr[18]);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    aot_gpr_6 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x089E6054u);
    ctx.gpr[7] = (0u | 4u);
    goto L_089E5DFC;
L_089E6054:
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
L_089E606C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    { const std::uint32_t aot_run_words[4]{ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_run_words); }
    aot_gpr_31 = (0x089E6094u);
    aot_gpr_16 = (aot_gpr_5 | 0u);
    goto L_089E5EE4;
L_089E6094:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    aot_gpr_5 = (ctx.gpr[20] + ctx.gpr[20]);
    ctx.gpr[7] = (ctx.gpr[20] + aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x089E60B4u);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0166_entry, 166u, 148u, 0x08A9D3CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089E60B4u) goto L_089E60B4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089E60B4:
    ctx.gpr[19] = (0u | 0u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(56), ctx.gpr[20]);
      if (branch_taken) {
          goto L_089E6118;
      }
      goto L_089E60C8;
    }
L_089E60C8:
    ctx.gpr[18] = (0u | 0u);
    goto L_089E60CC;
L_089E60CC:
    aot_gpr_31 = (0x089E60D4u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    goto L_089E5F7C;
L_089E60D4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(24)));
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (aot_gpr_5 + ctx.gpr[18]);
    aot_gpr_31 = (0x089E60E8u);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    goto L_089E5EE4;
L_089E60E8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(24)));
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    aot_gpr_31 = (0x089E60FCu);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    goto L_089E5EE4;
L_089E60FC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(24)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_089E60CC;
      }
      goto L_089E6118;
    }
L_089E6118:
    { std::uint32_t aot_run_words[6]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      ctx.gpr[20] = aot_run_words[4];
      aot_gpr_31 = aot_run_words[5];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
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
L_089E6138:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    { const std::uint32_t aot_run_words[3]{ctx.gpr[17], ctx.gpr[18], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_run_words); }
    aot_gpr_31 = (0x089E6158u);
    ctx.gpr[17] = (aot_gpr_5 | 0u);
    goto L_089E5EE4;
L_089E6158:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[7] = (ctx.gpr[2] << 2u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x089E6170u);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0166_entry, 166u, 148u, 0x08A9D3CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089E6170u) goto L_089E6170;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089E6170:
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), ctx.gpr[18]);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    aot_gpr_6 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x089E618Cu);
    ctx.gpr[7] = (0u | 4u);
    goto L_089E5DFC;
L_089E618C:
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
L_089E61A4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    { const std::uint32_t aot_run_words[4]{ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_run_words); }
    aot_gpr_31 = (0x089E61CCu);
    aot_gpr_16 = (aot_gpr_5 | 0u);
    goto L_089E5EE4;
L_089E61CC:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[19] = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089E6204;
      }
      goto L_089E61D8;
    }
L_089E61D8:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = ctx.gpr[18] == aot_gpr_4;
      if (branch_taken) {
          goto L_089E6204;
      }
      goto L_089E61E4;
    }
L_089E61E4:
    ctx.gpr[8] = (aot_gpr_4 | 0u);
    aot_gpr_5 = (2232u << 16u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x089E6200u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-2804));
    goto L_089E77C8;
L_089E6200:
    ctx.gpr[19] = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    goto L_089E6204;
L_089E6204:
    ctx.gpr[7] = (ctx.gpr[18] << 2u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x089E6218u);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0166_entry, 166u, 148u, 0x08A9D3CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089E6218u) goto L_089E6218;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089E6218:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.gpr[19] = (0u | 0u);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(36), ctx.gpr[18]);
      if (branch_taken) {
          goto L_089E6254;
      }
      goto L_089E622C;
    }
L_089E622C:
    ctx.gpr[20] = (0u | 0u);
    goto L_089E6230;
L_089E6230:
    aot_gpr_31 = (0x089E6238u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    goto L_089E5F7C;
L_089E6238:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(28)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[20]);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089E6230;
      }
      goto L_089E6254;
    }
L_089E6254:
    { std::uint32_t aot_run_words[6]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      ctx.gpr[20] = aot_run_words[4];
      aot_gpr_31 = aot_run_words[5];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
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
L_089E6274:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    { const std::uint32_t aot_run_words[9]{ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], ctx.gpr[23], ctx.gpr[30], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_run_words); }
    aot_gpr_31 = (0x089E62ACu);
    ctx.gpr[17] = (aot_gpr_5 | 0u);
    goto L_089E5EE4;
L_089E62AC:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[18] << 3u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x089E62C4u);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0166_entry, 166u, 148u, 0x08A9D3CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089E62C4u) goto L_089E62C4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089E62C4:
    ctx.gpr[30] = (0u | 0u);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[30]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
      if (branch_taken) {
          goto L_089E6380;
      }
      goto L_089E62D8;
    }
L_089E62D8:
    ctx.gpr[23] = (2232u << 16u);
    ctx.gpr[21] = (0u | 3u);
    ctx.gpr[22] = (0u | 4u);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(-2760));
    goto L_089E62EC;
L_089E62EC:
    ctx.gpr[20] = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x089E62FCu);
    ctx.gpr[20] = (ctx.gpr[20] + ctx.gpr[19]);
    goto L_089E5CAC;
L_089E62FC:
    aot_gpr_4 = (ctx.gpr[2] & 255u);
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 3 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_089E631C;
      }
      goto L_089E630C;
    }
L_089E630C:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_089E635C;
      }
      goto L_089E6314;
    }
L_089E6314:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          goto L_089E6370;
      }
      goto L_089E631C;
    }
L_089E631C:
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 5 ? 1u : 0u);
      if (branch_taken) {
          goto L_089E6334;
      }
      goto L_089E6324;
    }
L_089E6324:
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_089E6348;
      }
      goto L_089E632C;
    }
L_089E632C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089E635C;
      }
      goto L_089E6334;
    }
L_089E6334:
    aot_mem.aot_direct_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[21]);
    aot_gpr_31 = (0x089E6340u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_089E5F58;
L_089E6340:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[20] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_089E6370;
      }
      goto L_089E6348;
    }
L_089E6348:
    aot_mem.aot_direct_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[22]);
    aot_gpr_31 = (0x089E6354u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_089E5F7C;
L_089E6354:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[20] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
      if (branch_taken) {
          goto L_089E6370;
      }
      goto L_089E635C;
    }
L_089E635C:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(16)));
    aot_gpr_31 = (0x089E6370u);
    aot_gpr_5 = (ctx.gpr[23] | 0u);
    goto L_089E77C8;
L_089E6370:
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[30]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_089E62EC;
      }
      goto L_089E6380;
    }
L_089E6380:
    aot_gpr_31 = (0x089E6388u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_089E5EE4;
L_089E6388:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[19] << 2u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x089E63A0u);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0166_entry, 166u, 148u, 0x08A9D3CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089E63A0u) goto L_089E63A0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089E63A0:
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.gpr[18] = (0u | 0u);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[19]);
      if (branch_taken) {
          goto L_089E63E0;
      }
      goto L_089E63B4;
    }
L_089E63B4:
    ctx.gpr[20] = (0u | 0u);
    goto L_089E63B8;
L_089E63B8:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    aot_gpr_31 = (0x089E63C4u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_089E6410;
L_089E63C4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[20]);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089E63B8;
      }
      goto L_089E63E0;
    }
L_089E63E0:
    { std::uint32_t aot_run_words[10]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
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
L_089E6410:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    aot_gpr_16 = (aot_gpr_5 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_31);
    aot_gpr_31 = (0x089E6434u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0171_entry, 171u, 74u, 0x08AB0668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089E6434u) goto L_089E6434;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089E6434:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    aot_gpr_31 = (0x089E6440u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    goto L_089E5F7C;
L_089E6440:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
      if (branch_taken) {
          goto L_089E644C;
      }
      goto L_089E6448;
    }
L_089E6448:
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(32), aot_gpr_16);
    goto L_089E644C;
L_089E644C:
    aot_gpr_31 = (0x089E6454u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    goto L_089E5EE4;
L_089E6454:
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(60), ctx.gpr[2]);
    aot_gpr_31 = (0x089E6460u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    goto L_089E5CAC;
L_089E6460:
    aot_mem.aot_direct_store8(ctx.gpr[18] + static_cast<std::uint32_t>(68), static_cast<std::uint8_t>(ctx.gpr[2]));
    aot_gpr_31 = (0x089E646Cu);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    goto L_089E5CAC;
L_089E646C:
    aot_mem.aot_direct_store8(ctx.gpr[18] + static_cast<std::uint32_t>(69), static_cast<std::uint8_t>(ctx.gpr[2]));
    aot_gpr_31 = (0x089E6478u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    goto L_089E5CAC;
L_089E6478:
    aot_mem.aot_direct_store8(ctx.gpr[18] + static_cast<std::uint32_t>(70), static_cast<std::uint8_t>(ctx.gpr[2]));
    aot_gpr_31 = (0x089E6484u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    goto L_089E5CAC;
L_089E6484:
    aot_mem.aot_direct_store8(ctx.gpr[18] + static_cast<std::uint32_t>(71), static_cast<std::uint8_t>(ctx.gpr[2]));
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x089E6494u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    goto L_089E6138;
L_089E6494:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x089E64A0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    goto L_089E606C;
L_089E64A0:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x089E64ACu);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    goto L_089E61A4;
L_089E64AC:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x089E64B8u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    goto L_089E6274;
L_089E64B8:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x089E64C4u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    goto L_089E6000;
L_089E64C4:
    aot_gpr_31 = (0x089E64CCu);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    goto L_089E7184;
L_089E64CC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_089E64E4;
      }
      goto L_089E64D4;
    }
L_089E64D4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    aot_gpr_31 = (0x089E64E4u);
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-11008));
    goto L_089E77C8;
L_089E64E4:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
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
L_089E6500:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    ctx.gpr[17] = (ctx.gpr[28] + static_cast<std::uint32_t>(-10992));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    goto L_089E651C;
L_089E651C:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089E6544;
      }
      goto L_089E6524;
    }
L_089E6524:
    aot_gpr_31 = (0x089E652Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_089E5CAC;
L_089E652C:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[2] != aot_gpr_4;
      if (branch_taken) {
          goto L_089E6544;
      }
      goto L_089E6538;
    }
L_089E6538:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
      if (branch_taken) {
          goto L_089E651C;
      }
      goto L_089E6544;
    }
L_089E6544:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089E6560;
      }
      goto L_089E654C;
    }
L_089E654C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (2232u << 16u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(16)));
    aot_gpr_31 = (0x089E6560u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-2728));
    goto L_089E77C8;
L_089E6560:
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
L_089E6574:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_gpr_16 = (aot_gpr_6 | 0u);
    ctx.gpr[18] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_31);
    aot_gpr_31 = (0x089E6598u);
    ctx.gpr[17] = (aot_gpr_5 | 0u);
    goto L_089E5CAC;
L_089E6598:
    aot_gpr_4 = (ctx.gpr[2] & 255u);
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[17];
      if (branch_taken) {
          goto L_089E65C4;
      }
      goto L_089E65A4;
    }
L_089E65A4:
    ctx.gpr[9] = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (2232u << 16u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (aot_gpr_16 | 0u);
    ctx.gpr[8] = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x089E65C4u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-2708));
    goto L_089E77C8;
L_089E65C4:
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
L_089E65DC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    { const std::uint32_t aot_run_words[3]{aot_gpr_16, ctx.gpr[17], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_run_words); }
    aot_gpr_31 = (0x089E65F4u);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    goto L_089E6500;
L_089E65F4:
    aot_gpr_31 = (0x089E65FCu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_089E5CAC;
L_089E65FC:
    aot_gpr_4 = (ctx.gpr[2] & 255u);
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 81 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_089E666C;
      }
      goto L_089E660C;
    }
L_089E660C:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 4u));
    aot_gpr_5 = (aot_gpr_5 >> 28u);
    ctx.gpr[7] = (aot_gpr_4 + aot_gpr_5);
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (2232u << 16u);
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 4u));
    aot_gpr_6 = (aot_gpr_4 | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_6) >= 0;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-2644));
      if (branch_taken) {
          goto L_089E6644;
      }
      goto L_089E6634;
    }
L_089E6634:
    aot_gpr_6 = (0u - aot_gpr_6);
    aot_gpr_6 = (aot_gpr_6 & 15u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_6 = (0u - aot_gpr_6);
      if (branch_taken) {
          goto L_089E6648;
      }
      goto L_089E6644;
    }
L_089E6644:
    aot_gpr_6 = (aot_gpr_6 & 15u);
    goto L_089E6648;
L_089E6648:
    ctx.gpr[10] = (aot_gpr_6 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_6 = (ctx.gpr[8] | 0u);
    aot_gpr_4 = (ctx.gpr[9] | 0u);
    ctx.gpr[8] = (ctx.gpr[10] | 0u);
    ctx.gpr[9] = (0u | 5u);
    aot_gpr_31 = (0x089E6668u);
    ctx.gpr[10] = (0u | 0u);
    goto L_089E77C8;
L_089E6668:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    goto L_089E666C;
L_089E666C:
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 80 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_089E66D0;
      }
      goto L_089E6678;
    }
L_089E6678:
    ctx.gpr[8] = (aot_gpr_4 | 0u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 4u));
    aot_gpr_6 = (aot_gpr_5 >> 28u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (ctx.gpr[8] + aot_gpr_6);
    ctx.gpr[7] = (2232u << 16u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-2588));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[8]) >= 0;
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_6) >> 4u));
      if (branch_taken) {
          goto L_089E66B0;
      }
      goto L_089E66A0;
    }
L_089E66A0:
    ctx.gpr[8] = (0u - ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] & 15u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (0u - ctx.gpr[8]);
      if (branch_taken) {
          goto L_089E66B4;
      }
      goto L_089E66B0;
    }
L_089E66B0:
    ctx.gpr[8] = (ctx.gpr[8] & 15u);
    goto L_089E66B4;
L_089E66B4:
    ctx.gpr[9] = (aot_gpr_6 | 0u);
    aot_gpr_6 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (ctx.gpr[9] | 0u);
    ctx.gpr[9] = (0u | 5u);
    aot_gpr_31 = (0x089E66D0u);
    ctx.gpr[10] = (0u | 0u);
    goto L_089E77C8;
L_089E66D0:
    aot_gpr_31 = (0x089E66D8u);
    goto L_089E6870;
L_089E66D8:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    aot_gpr_31 = (0x089E66E4u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_089E5CAC;
L_089E66E4:
    aot_gpr_4 = (ctx.gpr[2] & 255u);
    aot_gpr_4 = (ctx.gpr[17] ^ aot_gpr_4);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(12), aot_gpr_4);
    aot_gpr_6 = (ctx.gpr[28] + static_cast<std::uint32_t>(-10984));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x089E6704u);
    aot_gpr_5 = (0u | 4u);
    goto L_089E6574;
L_089E6704:
    aot_gpr_6 = (ctx.gpr[28] + static_cast<std::uint32_t>(-10980));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x089E6714u);
    aot_gpr_5 = (0u | 4u);
    goto L_089E6574;
L_089E6714:
    aot_gpr_6 = (ctx.gpr[28] + static_cast<std::uint32_t>(-10972));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x089E6724u);
    aot_gpr_5 = (0u | 4u);
    goto L_089E6574;
L_089E6724:
    aot_gpr_6 = (ctx.gpr[28] + static_cast<std::uint32_t>(-10960));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x089E6734u);
    aot_gpr_5 = (0u | 6u);
    goto L_089E6574;
L_089E6734:
    aot_gpr_6 = (ctx.gpr[28] + static_cast<std::uint32_t>(-10956));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x089E6744u);
    aot_gpr_5 = (0u | 8u);
    goto L_089E6574;
L_089E6744:
    aot_gpr_6 = (ctx.gpr[28] + static_cast<std::uint32_t>(-10952));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x089E6754u);
    aot_gpr_5 = (0u | 9u);
    goto L_089E6574;
L_089E6754:
    aot_gpr_6 = (ctx.gpr[28] + static_cast<std::uint32_t>(-10948));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x089E6764u);
    aot_gpr_5 = (0u | 9u);
    goto L_089E6574;
L_089E6764:
    aot_gpr_6 = (ctx.gpr[28] + static_cast<std::uint32_t>(-10944));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x089E6774u);
    aot_gpr_5 = (0u | 4u);
    goto L_089E6574;
L_089E6774:
    aot_gpr_31 = (0x089E677Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_089E5F58;
L_089E677C:
    aot_gpr_4 = (19439u << 16u);
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    aot_gpr_4 = (aot_gpr_4 | 44859u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_13));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_089E67B4;
      }
      goto L_089E67A0;
    }
L_089E67A0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (2232u << 16u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(16)));
    aot_gpr_31 = (0x089E67B4u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-2532));
    goto L_089E77C8;
L_089E67B4:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
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
L_089E67C8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    aot_gpr_31 = (0x089E67DCu);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    goto L_089E65DC;
L_089E67DC:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x089E67E8u);
    aot_gpr_5 = (0u | 0u);
    goto L_089E6410;
L_089E67E8:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
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
L_089E67F8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(16)));
    ctx.gpr[9] = (aot_gpr_6 | 0u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (aot_gpr_4 | 0u);
    ctx.gpr[10] = (0u | 64u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_gpr_31);
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[10];
    aot_gpr_4 = (ctx.gpr[9] | 0u);
      if (branch_taken) {
          goto L_089E6828;
      }
      goto L_089E681C;
    }
L_089E681C:
    ctx.gpr[9] = (0u | 61u);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[9];
      if (branch_taken) {
          goto L_089E6834;
      }
      goto L_089E6828;
    }
L_089E6828:
    ctx.gpr[7] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), ctx.gpr[7]);
      if (branch_taken) {
          goto L_089E6850;
      }
      goto L_089E6834;
    }
L_089E6834:
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-10992))))));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[9];
      if (branch_taken) {
          goto L_089E684C;
      }
      goto L_089E6840;
    }
L_089E6840:
    ctx.gpr[7] = (ctx.gpr[28] + static_cast<std::uint32_t>(-10936));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), ctx.gpr[7]);
      if (branch_taken) {
          goto L_089E6850;
      }
      goto L_089E684C;
    }
L_089E684C:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), ctx.gpr[8]);
    goto L_089E6850;
L_089E6850:
    { const std::uint32_t aot_run_words[3]{aot_gpr_6, aot_gpr_5, aot_gpr_4};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_gpr_31 = (0x089E6864u);
    aot_gpr_4 = (aot_gpr_29 | 0u);
    goto L_089E67C8;
L_089E6864:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
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
L_089E6870:
    jump_target = aot_gpr_31;
    ctx.gpr[2] = (0u | 1u);
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
L_089E6878:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_gpr_6 = (aot_gpr_5 & 1u);
    { const bool branch_taken = aot_gpr_6 != 0u;
      if (branch_taken) {
          goto L_089E689C;
      }
      goto L_089E6888;
    }
L_089E6888:
    aot_gpr_5 = (aot_gpr_5 & 2u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_089E68A4;
      }
      goto L_089E6894;
    }
L_089E6894:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089E68B4;
      }
      goto L_089E689C;
    }
L_089E689C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_089E68DC;
      }
      goto L_089E68A4;
    }
L_089E68A4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(12), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    goto L_089E68B4;
L_089E68B4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(12)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(-4)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(12)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(12)));
    aot_gpr_4 = (aot_gpr_4 - aot_gpr_5);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 2u));
    aot_gpr_5 = (aot_gpr_5 >> 30u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 2u));
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    goto L_089E68DC;
L_089E68DC:
    jump_target = aot_gpr_31;
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
L_089E68E4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    aot_gpr_31 = (0x089E68F8u);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    goto L_089E6878;
L_089E68F8:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) < 0;
      if (branch_taken) {
          goto L_089E6924;
      }
      goto L_089E6904;
    }
L_089E6904:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(-4)));
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(12)));
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr_16 != 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089E692C;
      }
      goto L_089E691C;
    }
L_089E691C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089E6938;
      }
      goto L_089E6924;
    }
L_089E6924:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_089E6938;
      }
      goto L_089E692C;
    }
L_089E692C:
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_4);
    ctx.gpr[2] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    goto L_089E6938;
L_089E6938:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
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
L_089E6948:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(20)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(40)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    { const bool branch_taken = ctx.gpr[17] == aot_gpr_5;
    aot_gpr_16 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_089E6980;
      }
      goto L_089E6968;
    }
L_089E6968:
    aot_gpr_31 = (0x089E6970u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    goto L_089E6878;
L_089E6970:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(40)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-24));
    { const bool branch_taken = ctx.gpr[17] != aot_gpr_4;
      if (branch_taken) {
          goto L_089E6968;
      }
      goto L_089E6980;
    }
L_089E6980:
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(50), static_cast<std::uint8_t>(aot_gpr_4));
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
L_089E699C:
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_089E69AC;
      }
      goto L_089E69A4;
    }
L_089E69A4:
    { const bool branch_taken = aot_gpr_6 != 0u;
      if (branch_taken) {
          goto L_089E69B4;
      }
      goto L_089E69AC;
    }
L_089E69AC:
    aot_gpr_6 = (0u | 0u);
    aot_gpr_5 = (0u | 0u);
    goto L_089E69B4;
L_089E69B4:
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(60), aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(52), ctx.gpr[7]);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(56), ctx.gpr[7]);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(aot_gpr_6));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(50), static_cast<std::uint8_t>(0u));
    jump_target = aot_gpr_31;
    ctx.gpr[2] = (0u | 1u);
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
L_089E69D0:
    jump_target = aot_gpr_31;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(60)));
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
L_089E69D8:
    jump_target = aot_gpr_31;
    ctx.gpr[2] = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(48)));
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
L_089E69E0:
    jump_target = aot_gpr_31;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(52)));
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
L_089E69E8:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(20)));
    goto L_089E69EC;
L_089E69EC:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_5) <= 0;
      if (branch_taken) {
          goto L_089E6A24;
      }
      goto L_089E69F4;
    }
L_089E69F4:
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(40)));
    ctx.gpr[8] = (ctx.gpr[8] < ctx.gpr[7] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
      if (branch_taken) {
          goto L_089E6A24;
      }
      goto L_089E6A04;
    }
L_089E6A04:
    ctx.gpr[8] = (aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
    ctx.gpr[8] = (ctx.gpr[8] & 1u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_089E6A1C;
      }
      goto L_089E6A14;
    }
L_089E6A14:
    ctx.gpr[8] = (aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(20)));
    aot_gpr_5 = (aot_gpr_5 - ctx.gpr[8]);
    goto L_089E6A1C;
L_089E6A1C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-24));
      if (branch_taken) {
          goto L_089E69EC;
      }
      goto L_089E6A24;
    }
L_089E6A24:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_5) > 0;
      if (branch_taken) {
          goto L_089E6A38;
      }
      goto L_089E6A2C;
    }
L_089E6A2C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[7] != aot_gpr_4;
      if (branch_taken) {
          goto L_089E6A40;
      }
      goto L_089E6A38;
    }
L_089E6A38:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089E6A68;
      }
      goto L_089E6A40;
    }
L_089E6A40:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_5) >= 0;
    aot_gpr_4 = (ctx.gpr[7] - aot_gpr_4);
      if (branch_taken) {
          goto L_089E6A54;
      }
      goto L_089E6A48;
    }
L_089E6A48:
    ctx.gpr[2] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(92), 0u);
      if (branch_taken) {
          goto L_089E6A68;
      }
      goto L_089E6A54;
    }
L_089E6A54:
    aot_gpr_5 = (0u | 24u);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_4); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr_5); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[2] = (0u | 1u);
    aot_gpr_4 = (ctx.lo);
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(92), aot_gpr_4);
    goto L_089E6A68;
L_089E6A68:
    jump_target = aot_gpr_31;
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
L_089E6A70:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (aot_gpr_5 & 1u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089E6A8C;
      }
      goto L_089E6A80;
    }
L_089E6A80:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(-4)));
    ctx.gpr[2] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(12)));
    goto L_089E6A8C;
L_089E6A8C:
    jump_target = aot_gpr_31;
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
L_089E6A94:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(92)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_gpr_4 = (aot_gpr_4 << 3u);
    ctx.gpr[19] = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    ctx.gpr[19] = (ctx.gpr[19] + aot_gpr_4);
    aot_gpr_16 = (aot_gpr_6 | 0u);
    ctx.gpr[20] = (0u | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_gpr_31);
    aot_gpr_31 = (0x089E6ADCu);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    goto L_089E6A70;
L_089E6ADC:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
      if (branch_taken) {
          goto L_089E6B24;
      }
      goto L_089E6AE8;
    }
L_089E6AE8:
    aot_gpr_31 = (0x089E6AF0u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    goto L_089E6878;
L_089E6AF0:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x089E6B00u);
    aot_gpr_6 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0171_entry, 171u, 90u, 0x08AB0814u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089E6B00u) goto L_089E6B00;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089E6B00:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
      if (branch_taken) {
          goto L_089E6B24;
      }
      goto L_089E6B0C;
    }
L_089E6B0C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_16 << 3u);
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-8));
    aot_gpr_31 = (0x089E6B24u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 282u, 0x08806450u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089E6B24u) goto L_089E6B24;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089E6B24:
    ctx.gpr[2] = (ctx.gpr[20] | 0u);
    { std::uint32_t aot_run_words[6]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      ctx.gpr[20] = aot_run_words[4];
      aot_gpr_31 = aot_run_words[5];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
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
L_089E6B48:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(92)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_gpr_4 = (aot_gpr_4 << 3u);
    ctx.gpr[19] = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    ctx.gpr[19] = (ctx.gpr[19] + aot_gpr_4);
    aot_gpr_16 = (aot_gpr_6 | 0u);
    ctx.gpr[20] = (0u | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_gpr_31);
    aot_gpr_31 = (0x089E6B90u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    goto L_089E6A70;
L_089E6B90:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-8));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), aot_gpr_4);
      if (branch_taken) {
          goto L_089E6C0C;
      }
      goto L_089E6BA4;
    }
L_089E6BA4:
    aot_gpr_31 = (0x089E6BACu);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    goto L_089E6878;
L_089E6BAC:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x089E6BBCu);
    aot_gpr_6 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0171_entry, 171u, 90u, 0x08AB0814u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089E6BBCu) goto L_089E6BBC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089E6BBC:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
      if (branch_taken) {
          goto L_089E6BD8;
      }
      goto L_089E6BC8;
    }
L_089E6BC8:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[20] + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (0u | 40u);
    if (aot_gpr_4 != aot_gpr_5) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
        goto L_089E6BE0;
    }
    goto L_089E6BD8;
L_089E6BD8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_089E6C0C;
      }
      goto L_089E6BE0;
    }
L_089E6BE0:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_gpr_16 << 3u);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-8));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_5 + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    goto L_089E6C0C;
L_089E6C0C:
    ctx.gpr[2] = (ctx.gpr[20] | 0u);
    { std::uint32_t aot_run_words[6]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      ctx.gpr[20] = aot_run_words[4];
      aot_gpr_31 = aot_run_words[5];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
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
L_089E6C30:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(6)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    if (aot_gpr_6 == 0u) {
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(12)));
        goto L_089E6C64;
    }
    goto L_089E6C48;
L_089E6C48:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-10920));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(16), aot_gpr_5);
    aot_gpr_6 = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(28), aot_gpr_6);
    aot_gpr_6 = (ctx.gpr[28] + static_cast<std::uint32_t>(-10912));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(12), aot_gpr_6);
      if (branch_taken) {
          goto L_089E6C94;
      }
      goto L_089E6C64;
    }
L_089E6C64:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(32)));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(16));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(16), aot_gpr_6);
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(12)));
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = aot_gpr_6 != 0u;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(28), aot_gpr_6);
      if (branch_taken) {
          goto L_089E6C8C;
      }
      goto L_089E6C84;
    }
L_089E6C84:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_6 = (ctx.gpr[28] + static_cast<std::uint32_t>(-10908));
      if (branch_taken) {
          goto L_089E6C90;
      }
      goto L_089E6C8C;
    }
L_089E6C8C:
    aot_gpr_6 = (ctx.gpr[28] + static_cast<std::uint32_t>(-10900));
    goto L_089E6C90;
L_089E6C90:
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(12), aot_gpr_6);
    goto L_089E6C94;
L_089E6C94:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(32));
    aot_gpr_31 = (0x089E6CA0u);
    aot_gpr_6 = (0u | 60u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0045_entry, 45u, 339u, 0x088B9930u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089E6CA0u) goto L_089E6CA0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089E6CA0:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
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
L_089E6CAC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), ctx.gpr[22]);
    ctx.gpr[22] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(68)));
    aot_gpr_6 = (aot_mem.aot_direct_load8(ctx.gpr[22] + static_cast<std::uint32_t>(7)));
    aot_gpr_4 = (0u | 1u);
    aot_gpr_4 = (aot_gpr_4 << (aot_gpr_6 & 31u));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_gpr_16 = (aot_gpr_5 | 0u);
    ctx.gpr[20] = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    { const std::uint32_t aot_run_words[3]{ctx.gpr[17], ctx.gpr[18], ctx.gpr[19]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_run_words); }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), aot_gpr_31);
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[21] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_089E6D48;
      }
      goto L_089E6CF0;
    }
L_089E6CF0:
    ctx.gpr[19] = (ctx.gpr[20] << 4u);
    aot_gpr_4 = (ctx.gpr[20] << 2u);
    ctx.gpr[17] = (0u | 4u);
    ctx.gpr[19] = (ctx.gpr[19] + aot_gpr_4);
    goto L_089E6D00;
L_089E6D00:
    ctx.gpr[18] = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(16)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    ctx.gpr[18] = (ctx.gpr[18] + ctx.gpr[19]);
    aot_gpr_31 = (0x089E6D14u);
    aot_gpr_5 = (ctx.gpr[18] + static_cast<std::uint32_t>(8));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0045_entry, 45u, 305u, 0x088B96E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089E6D14u) goto L_089E6D14;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089E6D14:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_089E6D34;
      }
      goto L_089E6D1C;
    }
L_089E6D1C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[17];
      if (branch_taken) {
          goto L_089E6D34;
      }
      goto L_089E6D28;
    }
L_089E6D28:
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_089E6D4C;
      }
      goto L_089E6D34;
    }
L_089E6D34:
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    ctx.gpr[20] = (ctx.gpr[21] + static_cast<std::uint32_t>(-1));
    ctx.gpr[21] = (ctx.gpr[20] | 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-20));
      if (branch_taken) {
          goto L_089E6D00;
      }
      goto L_089E6D48;
    }
L_089E6D48:
    ctx.gpr[2] = (0u | 0u);
    goto L_089E6D4C;
L_089E6D4C:
    { std::uint32_t aot_run_words[8]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
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
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
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
L_089E6D74:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_5 | 0u);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-10896));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(8), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(4), aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-10892));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(12), aot_gpr_4);
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(20), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(28), aot_gpr_4);
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-10884));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(16), aot_gpr_5);
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    aot_gpr_31 = (0x089E6DC0u);
    aot_gpr_6 = (0u | 60u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0045_entry, 45u, 339u, 0x088B9930u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089E6DC0u) goto L_089E6DC0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089E6DC0:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(24), 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), 0u);
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
L_089E6DE0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    { const std::uint32_t aot_run_words[3]{ctx.gpr[17], ctx.gpr[18], ctx.gpr[19]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_run_words); }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    ctx.gpr[21] = (0u | 1u);
    ctx.gpr[17] = (aot_gpr_5 | 0u);
    ctx.gpr[18] = (aot_gpr_6 | 0u);
    ctx.gpr[19] = (ctx.gpr[7] | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    { const std::uint32_t aot_run_words[4]{ctx.gpr[22], ctx.gpr[23], ctx.gpr[30], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_run_words); }
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[20] = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_089E6F20;
      }
      goto L_089E6E2C;
    }
L_089E6E2C:
    ctx.gpr[22] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    ctx.gpr[23] = (ctx.gpr[28] + static_cast<std::uint32_t>(-10868));
    ctx.gpr[30] = (ctx.gpr[28] + static_cast<std::uint32_t>(-10896));
    goto L_089E6E38;
L_089E6E38:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-83));
    aot_gpr_5 = (aot_gpr_4 < static_cast<std::uint32_t>(35) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_089E6F0C;
      }
      goto L_089E6E48;
    }
L_089E6E48:
    aot_gpr_4 = (aot_gpr_4 << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_4);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-2304)));
    jump_target = ctx.gpr[1];
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
L_089E6E60:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x089E6E6Cu);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    goto L_089E6C30;
L_089E6E6C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089E6F10;
      }
      goto L_089E6E74;
    }
L_089E6E74:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_089E6E88;
      }
      goto L_089E6E7C;
    }
L_089E6E7C:
    aot_gpr_31 = (0x089E6E84u);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    goto L_089E68E4;
L_089E6E84:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    goto L_089E6E88;
L_089E6E88:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(20), aot_gpr_4);
      if (branch_taken) {
          goto L_089E6F10;
      }
      goto L_089E6E90;
    }
L_089E6E90:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(7)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24), aot_gpr_4);
      if (branch_taken) {
          goto L_089E6F10;
      }
      goto L_089E6EA0;
    }
L_089E6EA0:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_089E6EB8;
      }
      goto L_089E6EA8;
    }
L_089E6EA8:
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x089E6EB4u);
    aot_gpr_5 = (ctx.gpr[22] | 0u);
    goto L_089E735C;
L_089E6EB4:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    goto L_089E6EB8;
L_089E6EB8:
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), aot_gpr_4);
      if (branch_taken) {
          goto L_089E6EE0;
      }
      goto L_089E6EC0;
    }
L_089E6EC0:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x089E6ECCu);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    goto L_089E6CAC;
L_089E6ECC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
      if (branch_taken) {
          goto L_089E6EDC;
      }
      goto L_089E6ED4;
    }
L_089E6ED4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[23]);
      if (branch_taken) {
          goto L_089E6EE0;
      }
      goto L_089E6EDC;
    }
L_089E6EDC:
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[30]);
    goto L_089E6EE0;
L_089E6EE0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089E6F10;
      }
      goto L_089E6EE8;
    }
L_089E6EE8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
      if (branch_taken) {
          goto L_089E6F10;
      }
      goto L_089E6F0C;
    }
L_089E6F0C:
    ctx.gpr[21] = (0u | 0u);
    goto L_089E6F10;
L_089E6F10:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_089E6E38;
      }
      goto L_089E6F20;
    }
L_089E6F20:
    ctx.gpr[2] = (ctx.gpr[21] | 0u);
    { std::uint32_t aot_run_words[10]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
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
L_089E6F54:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    { const std::uint32_t aot_run_words[3]{aot_gpr_16, ctx.gpr[17], ctx.gpr[18]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_run_words); }
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[8] = (0u | 62u);
    aot_gpr_16 = (aot_gpr_5 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_31);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[8];
    aot_gpr_4 = (aot_gpr_6 | 0u);
      if (branch_taken) {
          goto L_089E6FE0;
      }
      goto L_089E6F84;
    }
L_089E6F84:
    ctx.gpr[18] = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (0u | 6u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-8));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_6 == aot_gpr_5;
      if (branch_taken) {
          goto L_089E6FB4;
      }
      goto L_089E6F9C;
    }
L_089E6F9C:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_5 = (2232u << 16u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x089E6FB0u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-2504));
    goto L_089E77C8;
L_089E6FB0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    goto L_089E6FB4;
L_089E6FB4:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_5 = (aot_gpr_16 + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x089E6FCCu);
    ctx.gpr[8] = (0u | 0u);
    goto L_089E6DE0;
L_089E6FCC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-8));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), aot_gpr_4);
      if (branch_taken) {
          goto L_089E7028;
      }
      goto L_089E6FE0;
    }
L_089E6FE0:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(92)));
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_6 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_089E701C;
      }
      goto L_089E6FEC;
    }
L_089E6FEC:
    aot_gpr_4 = (aot_gpr_5 << 3u);
    ctx.gpr[8] = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    ctx.gpr[8] = (ctx.gpr[8] + aot_gpr_4);
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x089E7014u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-8));
    goto L_089E6DE0;
L_089E7014:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_089E7028;
      }
      goto L_089E701C;
    }
L_089E701C:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_31 = (0x089E7028u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    goto L_089E6D74;
L_089E7028:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x089E7034u);
    aot_gpr_5 = (0u | 102u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 50u, 0x08B58294u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089E7034u) goto L_089E7034;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089E7034:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_089E7068;
      }
      goto L_089E703C;
    }
L_089E703C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_gpr_4 - aot_gpr_5);
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 9 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_089E705C;
      }
      goto L_089E7054;
    }
L_089E7054:
    aot_gpr_31 = (0x089E705Cu);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0027_entry, 27u, 473u, 0x08871CECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089E705Cu) goto L_089E705C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089E705C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(8));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), aot_gpr_4);
    goto L_089E7068;
L_089E7068:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
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
L_089E7084:
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(71)));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_5) < 251 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_089E70D4;
      }
      goto L_089E7094;
    }
L_089E7094:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(48)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = aot_gpr_6 == aot_gpr_5;
      if (branch_taken) {
          goto L_089E70AC;
      }
      goto L_089E70A4;
    }
L_089E70A4:
    { const bool branch_taken = aot_gpr_6 != 0u;
      if (branch_taken) {
          goto L_089E70D4;
      }
      goto L_089E70AC;
    }
L_089E70AC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(12)));
    aot_gpr_5 = (aot_gpr_5 << 2u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(-4)));
    aot_gpr_5 = (0u | 27u);
    aot_gpr_4 = (aot_gpr_4 & 63u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_089E70D4;
      }
      goto L_089E70CC;
    }
L_089E70CC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089E70D8;
      }
      goto L_089E70D4;
    }
L_089E70D4:
    ctx.gpr[2] = (0u | 0u);
    goto L_089E70D8;
L_089E70D8:
    jump_target = aot_gpr_31;
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
L_089E70E0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(12)));
    aot_gpr_5 = (aot_gpr_5 << 2u);
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (aot_gpr_5 & 63u);
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_4) < 28 ? 1u : 0u);
    if (aot_gpr_6 == 0u) {
    aot_gpr_5 = (0u | 32u);
        goto L_089E7134;
    }
    goto L_089E7100;
L_089E7100:
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 25 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_089E712C;
      }
      goto L_089E710C;
    }
L_089E710C:
    aot_gpr_4 = (aot_gpr_5 >> 15u);
    aot_gpr_4 = (aot_gpr_4 & 511u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_089E7124;
      }
      goto L_089E711C;
    }
L_089E711C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089E7140;
      }
      goto L_089E7124;
    }
L_089E7124:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089E7140;
      }
      goto L_089E712C;
    }
L_089E712C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089E7140;
      }
      goto L_089E7134;
    }
L_089E7134:
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_089E712C;
      }
      goto L_089E713C;
    }
L_089E713C:
    ctx.gpr[2] = (0u | 1u);
    goto L_089E7140;
L_089E7140:
    jump_target = aot_gpr_31;
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
L_089E7148:
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(71)));
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_6) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 != 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089E7178;
      }
      goto L_089E7158;
    }
L_089E7158:
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_5) < 250 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 != 0u;
      if (branch_taken) {
          goto L_089E717C;
      }
      goto L_089E7164;
    }
L_089E7164:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(40)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-250));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089E717C;
      }
      goto L_089E7178;
    }
L_089E7178:
    ctx.gpr[2] = (0u | 1u);
    goto L_089E717C;
L_089E717C:
    jump_target = aot_gpr_31;
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
L_089E7184:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(44)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x089E7198u);
    aot_gpr_6 = (0u | 255u);
    goto L_089E7830;
L_089E7198:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
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
L_089E71A4:
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-250));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_5) < 0;
      if (branch_taken) {
          goto L_089E71D8;
      }
      goto L_089E71B0;
    }
L_089E71B0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (aot_gpr_5 << 3u);
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (0u | 4u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_6;
      if (branch_taken) {
          goto L_089E71D8;
      }
      goto L_089E71CC;
    }
L_089E71CC:
    ctx.gpr[2] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_089E71DC;
      }
      goto L_089E71D8;
    }
L_089E71D8:
    ctx.gpr[2] = (ctx.gpr[28] + static_cast<std::uint32_t>(-10860));
    goto L_089E71DC;
L_089E71DC:
    jump_target = aot_gpr_31;
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
L_089E71E4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_gpr_4 = (ctx.gpr[7] & 1u);
    ctx.gpr[18] = (aot_gpr_5 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    { const std::uint32_t aot_run_words[3]{ctx.gpr[19], ctx.gpr[20], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_run_words); }
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_16 = (aot_gpr_6 | 0u);
      if (branch_taken) {
          goto L_089E7338;
      }
      goto L_089E7218;
    }
L_089E7218:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(-4)));
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x089E722Cu);
    ctx.gpr[20] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(12)));
    goto L_089E6878;
L_089E722C:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    aot_gpr_5 = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x089E7240u);
    aot_gpr_6 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0171_entry, 171u, 90u, 0x08AB0814u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089E7240u) goto L_089E7240;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089E7240:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(0), ctx.gpr[2]);
      if (branch_taken) {
          goto L_089E7270;
      }
      goto L_089E7248;
    }
L_089E7248:
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x089E7258u);
    aot_gpr_6 = (ctx.gpr[18] | 0u);
    goto L_089E7830;
L_089E7258:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    aot_gpr_4 = (ctx.gpr[18] & 63u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) < 0;
      if (branch_taken) {
          goto L_089E7338;
      }
      goto L_089E7268;
    }
L_089E7268:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 12 ? 1u : 0u);
      if (branch_taken) {
          goto L_089E7278;
      }
      goto L_089E7270;
    }
L_089E7270:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[28] + static_cast<std::uint32_t>(-10856));
      if (branch_taken) {
          goto L_089E733C;
      }
      goto L_089E7278;
    }
L_089E7278:
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_089E7338;
      }
      goto L_089E7280;
    }
L_089E7280:
    aot_gpr_4 = (aot_gpr_4 << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_4);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-2160)));
    jump_target = ctx.gpr[1];
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
L_089E7298:
    aot_gpr_5 = (4u << 16u);
    aot_gpr_4 = (ctx.gpr[18] >> 6u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_gpr_4 << 3u);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    ctx.gpr[2] = (ctx.gpr[28] + static_cast<std::uint32_t>(-10868));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(16));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(0), aot_gpr_4);
      if (branch_taken) {
          goto L_089E733C;
      }
      goto L_089E72C8;
    }
L_089E72C8:
    aot_gpr_4 = (ctx.gpr[18] >> 24u);
    ctx.gpr[18] = (ctx.gpr[18] >> 15u);
    ctx.gpr[18] = (ctx.gpr[18] & 511u);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_089E72E8;
      }
      goto L_089E72E0;
    }
L_089E72E0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089E7338;
      }
      goto L_089E72E8;
    }
L_089E72E8:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x089E72F8u);
    aot_gpr_6 = (aot_gpr_16 | 0u);
    goto L_089E71E4;
L_089E72F8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089E733C;
      }
      goto L_089E7300;
    }
L_089E7300:
    aot_gpr_5 = (ctx.gpr[18] >> 6u);
    aot_gpr_5 = (aot_gpr_5 & 511u);
    aot_gpr_31 = (0x089E7310u);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    goto L_089E71A4;
L_089E7310:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[28] + static_cast<std::uint32_t>(-10848));
      if (branch_taken) {
          goto L_089E733C;
      }
      goto L_089E731C;
    }
L_089E731C:
    aot_gpr_5 = (ctx.gpr[18] >> 6u);
    aot_gpr_5 = (aot_gpr_5 & 511u);
    aot_gpr_31 = (0x089E732Cu);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    goto L_089E71A4;
L_089E732C:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[28] + static_cast<std::uint32_t>(-10840));
      if (branch_taken) {
          goto L_089E733C;
      }
      goto L_089E7338;
    }
L_089E7338:
    ctx.gpr[2] = (0u | 0u);
    goto L_089E733C;
L_089E733C:
    { std::uint32_t aot_run_words[6]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      ctx.gpr[20] = aot_run_words[4];
      aot_gpr_31 = aot_run_words[5];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
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
L_089E735C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_6 & 1u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_31);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_16 = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_089E7390;
      }
      goto L_089E7384;
    }
L_089E7384:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) > 0;
      if (branch_taken) {
          goto L_089E73DC;
      }
      goto L_089E7390;
    }
L_089E7390:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-16)));
    aot_gpr_4 = (aot_gpr_4 & 1u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-24));
      if (branch_taken) {
          goto L_089E73DC;
      }
      goto L_089E73A0;
    }
L_089E73A0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(-4)));
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(12)));
    aot_gpr_31 = (0x089E73B8u);
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(12)));
    goto L_089E6878;
L_089E73B8:
    aot_gpr_4 = (ctx.gpr[2] << 2u);
    aot_gpr_4 = (ctx.gpr[18] + aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (0u | 25u);
    aot_gpr_6 = (aot_gpr_4 & 63u);
    { const bool branch_taken = aot_gpr_6 == aot_gpr_5;
      if (branch_taken) {
          goto L_089E73F0;
      }
      goto L_089E73D4;
    }
L_089E73D4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (aot_gpr_4 & 63u);
      if (branch_taken) {
          goto L_089E73E4;
      }
      goto L_089E73DC;
    }
L_089E73DC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089E740C;
      }
      goto L_089E73E4;
    }
L_089E73E4:
    aot_gpr_6 = (0u | 26u);
    { const bool branch_taken = aot_gpr_5 != aot_gpr_6;
      if (branch_taken) {
          goto L_089E7408;
      }
      goto L_089E73F0;
    }
L_089E73F0:
    aot_gpr_5 = (aot_gpr_4 >> 24u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x089E7400u);
    aot_gpr_6 = (aot_gpr_16 | 0u);
    goto L_089E71E4;
L_089E7400:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089E740C;
      }
      goto L_089E7408;
    }
L_089E7408:
    ctx.gpr[2] = (0u | 0u);
    goto L_089E740C;
L_089E740C:
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
L_089E7424:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_gpr_6 < aot_gpr_4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
      if (branch_taken) {
          goto L_089E7450;
      }
      goto L_089E7438;
    }
L_089E7438:
    { const bool branch_taken = aot_gpr_5 == aot_gpr_6;
      if (branch_taken) {
          goto L_089E7458;
      }
      goto L_089E7440;
    }
L_089E7440:
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(8));
    ctx.gpr[7] = (aot_gpr_6 < aot_gpr_4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
      if (branch_taken) {
          goto L_089E7438;
      }
      goto L_089E7450;
    }
L_089E7450:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089E745C;
      }
      goto L_089E7458;
    }
L_089E7458:
    ctx.gpr[2] = (0u | 1u);
    goto L_089E745C;
L_089E745C:
    jump_target = aot_gpr_31;
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
L_089E7464:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    ctx.gpr[20] = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 << 2u);
    aot_gpr_5 = (2233u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-31904));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), 0u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    ctx.gpr[19] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    aot_gpr_16 = (aot_gpr_6 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (0u | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_gpr_31);
    aot_gpr_31 = (0x089E74B8u);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    goto L_089E7424;
L_089E74B8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_089E74EC;
      }
      goto L_089E74C0;
    }
L_089E74C0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    aot_gpr_4 = (ctx.gpr[20] - aot_gpr_4);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 3u));
    aot_gpr_5 = (aot_gpr_5 >> 29u);
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_6 | 0u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 3u));
    aot_gpr_31 = (0x089E74E8u);
    aot_gpr_6 = (aot_gpr_29 | 0u);
    goto L_089E71E4;
L_089E74E8:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    goto L_089E74EC;
L_089E74EC:
    { const bool branch_taken = ctx.gpr[18] == 0u;
      if (branch_taken) {
          goto L_089E751C;
      }
      goto L_089E74F4;
    }
L_089E74F4:
    aot_gpr_5 = (2232u << 16u);
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_6 = (aot_gpr_16 | 0u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    ctx.gpr[9] = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x089E7514u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-2460));
    goto L_089E77C8;
L_089E7514:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089E7534;
      }
      goto L_089E751C;
    }
L_089E751C:
    aot_gpr_5 = (2232u << 16u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_6 = (aot_gpr_16 | 0u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x089E7534u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-2424));
    goto L_089E77C8;
L_089E7534:
    { std::uint32_t aot_run_words[6]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      ctx.gpr[20] = aot_run_words[4];
      aot_gpr_31 = aot_run_words[5];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
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
L_089E7554:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (0u | 4u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[8];
      if (branch_taken) {
          goto L_089E7570;
      }
      goto L_089E756C;
    }
L_089E756C:
    aot_gpr_5 = (aot_gpr_6 | 0u);
    goto L_089E7570;
L_089E7570:
    aot_gpr_31 = (0x089E7578u);
    aot_gpr_6 = (ctx.gpr[28] + static_cast<std::uint32_t>(-10832));
    goto L_089E7464;
L_089E7578:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
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
L_089E7584:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    ctx.gpr[17] = (aot_gpr_5 | 0u);
    ctx.gpr[18] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_6 | 0u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_gpr_31);
    aot_gpr_31 = (0x089E75B0u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0047_entry, 47u, 349u, 0x088C2EA4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089E75B0u) goto L_089E75B0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089E75B0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_089E75BC;
      }
      goto L_089E75B8;
    }
L_089E75B8:
    aot_gpr_16 = (ctx.gpr[17] | 0u);
    goto L_089E75BC;
L_089E75BC:
    aot_gpr_6 = (2232u << 16u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x089E75D0u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-2396));
    goto L_089E7464;
L_089E75D0:
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
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
L_089E75E8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (2233u << 16u);
    aot_gpr_5 = (aot_gpr_5 << 2u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-31904));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_5 + ctx.gpr[7]);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_gpr_6 << 2u);
    ctx.gpr[7] = (aot_gpr_6 + ctx.gpr[7]);
    aot_gpr_6 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_6 + static_cast<std::uint32_t>(2))))));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(2))))));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[8];
      if (branch_taken) {
          goto L_089E7640;
      }
      goto L_089E762C;
    }
L_089E762C:
    aot_gpr_5 = (2232u << 16u);
    aot_gpr_31 = (0x089E7638u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-2372));
    goto L_089E77C8;
L_089E7638:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089E7650;
      }
      goto L_089E7640;
    }
L_089E7640:
    ctx.gpr[7] = (aot_gpr_5 | 0u);
    aot_gpr_5 = (2232u << 16u);
    aot_gpr_31 = (0x089E7650u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-2336));
    goto L_089E77C8;
L_089E7650:
    ctx.gpr[2] = (0u | 0u);
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
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
L_089E7660:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-80));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(68), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(20)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(64), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(60), aot_gpr_16);
    aot_gpr_4 = (aot_gpr_4 & 1u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(72), aot_gpr_31);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_16 = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_089E76CC;
      }
      goto L_089E768C;
    }
L_089E768C:
    aot_gpr_31 = (0x089E7694u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    goto L_089E68E4;
L_089E7694:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x089E76A0u);
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    goto L_089E6A70;
L_089E76A0:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32)));
    aot_gpr_4 = (aot_gpr_29 | 0u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(16));
    aot_gpr_31 = (0x089E76B4u);
    aot_gpr_6 = (0u | 60u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0045_entry, 45u, 339u, 0x088B9930u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089E76B4u) goto L_089E76B4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089E76B4:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-10820));
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_6 = (aot_gpr_29 | 0u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x089E76CCu);
    ctx.gpr[8] = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0045_entry, 45u, 337u, 0x088B98ECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089E76CCu) goto L_089E76CC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089E76CC:
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(60), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(80));
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
L_089E76E4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(84)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_gpr_16 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_089E77A8;
      }
      goto L_089E7700;
    }
L_089E7700:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(28)));
    aot_gpr_5 = (0u | 6u);
    ctx.gpr[17] = (aot_gpr_4 + ctx.gpr[17]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (aot_gpr_4 == aot_gpr_5) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(8)));
        goto L_089E7728;
    }
    goto L_089E7718;
L_089E7718:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x089E7724u);
    aot_gpr_5 = (0u | 5u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0027_entry, 27u, 446u, 0x088719B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089E7724u) goto L_089E7724;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089E7724:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(8)));
    goto L_089E7728;
L_089E7728:
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(-8));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-8));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_5 = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(24)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_gpr_4 - aot_gpr_5);
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 9 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (aot_gpr_16 | 0u);
      if (branch_taken) {
          goto L_089E778C;
      }
      goto L_089E7784;
    }
L_089E7784:
    aot_gpr_31 = (0x089E778Cu);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0027_entry, 27u, 473u, 0x08871CECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089E778Cu) goto L_089E778C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089E778C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(8));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(8), aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-16));
    aot_gpr_31 = (0x089E77A8u);
    aot_gpr_6 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0027_entry, 27u, 560u, 0x088724C4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089E77A8u) goto L_089E77A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089E77A8:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x089E77B4u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0027_entry, 27u, 446u, 0x088719B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089E77B4u) goto L_089E77B4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089E77B4:
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
L_089E77C8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), ctx.gpr[7]);
    aot_gpr_4 = (0u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), ctx.gpr[8]);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(36), ctx.gpr[9]);
    aot_gpr_4 = (aot_gpr_4 & 65535u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(40), ctx.gpr[10]);
    aot_gpr_6 = (aot_gpr_29 + aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(44), ctx.gpr[11]);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(8));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    aot_gpr_31 = (0x089E780Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0045_entry, 45u, 360u, 0x088B9A78u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089E780Cu) goto L_089E780C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089E780C:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x089E7818u);
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    goto L_089E7660;
L_089E7818:
    aot_gpr_31 = (0x089E7820u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_089E76E4;
L_089E7820:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
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
L_089E7830:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    { const std::uint32_t aot_run_words[3]{ctx.gpr[17], ctx.gpr[18], ctx.gpr[19]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_run_words); }
    ctx.gpr[19] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(44)));
    ctx.gpr[18] = (aot_gpr_6 | 0u);
    ctx.gpr[17] = (aot_gpr_5 | 0u);
    { const std::uint32_t aot_run_words[6]{ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], ctx.gpr[23], ctx.gpr[30], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words); }
    aot_gpr_31 = (0x089E7874u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-1));
    goto L_089E7084;
L_089E7874:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_089E7D2C;
      }
      goto L_089E787C;
    }
L_089E787C:
    ctx.gpr[20] = (0u | 0u);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089E7D58;
      }
      goto L_089E788C;
    }
L_089E788C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(12)));
    aot_gpr_5 = (ctx.gpr[20] << 2u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(71)));
    ctx.gpr[22] = (aot_gpr_4 >> 24u);
    ctx.gpr[23] = (0u | 0u);
    ctx.gpr[21] = (aot_gpr_4 & 63u);
    aot_gpr_5 = (static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    ctx.gpr[30] = (0u | 0u);
      if (branch_taken) {
          goto L_089E7D2C;
      }
      goto L_089E78B8;
    }
L_089E78B8:
    aot_gpr_5 = (2232u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-1032));
    aot_gpr_5 = (ctx.gpr[21] + aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_5 & 3u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_5) > 0;
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_5) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_089E78E4;
      }
      goto L_089E78D4;
    }
L_089E78D4:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_5) < 0;
      if (branch_taken) {
          goto L_089E7A00;
      }
      goto L_089E78DC;
    }
L_089E78DC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089E78FC;
      }
      goto L_089E78E4;
    }
L_089E78E4:
    { const bool branch_taken = aot_gpr_6 != 0u;
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_5) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_089E79A4;
      }
      goto L_089E78EC;
    }
L_089E78EC:
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_089E79E4;
      }
      goto L_089E78F4;
    }
L_089E78F4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089E7A00;
      }
      goto L_089E78FC;
    }
L_089E78FC:
    aot_gpr_5 = (2232u << 16u);
    ctx.gpr[23] = (aot_gpr_4 >> 15u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-1032));
    ctx.gpr[30] = (aot_gpr_4 >> 6u);
    aot_gpr_4 = (ctx.gpr[21] + aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    ctx.gpr[23] = (ctx.gpr[23] & 511u);
    aot_gpr_4 = (aot_gpr_4 & 4u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[30] = (ctx.gpr[30] & 511u);
      if (branch_taken) {
          goto L_089E793C;
      }
      goto L_089E7924;
    }
L_089E7924:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(71)));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[23]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089E7D2C;
      }
      goto L_089E7934;
    }
L_089E7934:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089E796C;
      }
      goto L_089E793C;
    }
L_089E793C:
    aot_gpr_4 = (2232u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1032));
    aot_gpr_4 = (ctx.gpr[21] + aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 & 8u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089E796C;
      }
      goto L_089E7958;
    }
L_089E7958:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x089E7964u);
    aot_gpr_5 = (ctx.gpr[23] | 0u);
    goto L_089E7148;
L_089E7964:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_089E7D2C;
      }
      goto L_089E796C;
    }
L_089E796C:
    aot_gpr_4 = (2232u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1032));
    aot_gpr_4 = (ctx.gpr[21] + aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 & 16u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089E799C;
      }
      goto L_089E7988;
    }
L_089E7988:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x089E7994u);
    aot_gpr_5 = (ctx.gpr[30] | 0u);
    goto L_089E7148;
L_089E7994:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_089E7D2C;
      }
      goto L_089E799C;
    }
L_089E799C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089E7A00;
      }
      goto L_089E79A4;
    }
L_089E79A4:
    ctx.gpr[23] = (aot_gpr_4 >> 6u);
    aot_gpr_4 = (2232u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1032));
    aot_gpr_4 = (ctx.gpr[21] + aot_gpr_4);
    aot_gpr_5 = (4u << 16u);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    aot_gpr_4 = (aot_gpr_4 & 64u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[23] = (ctx.gpr[23] & aot_gpr_5);
      if (branch_taken) {
          goto L_089E79DC;
      }
      goto L_089E79CC;
    }
L_089E79CC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(40)));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[23]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089E7D2C;
      }
      goto L_089E79DC;
    }
L_089E79DC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089E7A00;
      }
      goto L_089E79E4;
    }
L_089E79E4:
    aot_gpr_5 = (4u << 16u);
    aot_gpr_4 = (aot_gpr_4 >> 6u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    ctx.gpr[23] = (aot_gpr_4 & aot_gpr_5);
    aot_gpr_4 = (2u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    ctx.gpr[23] = (ctx.gpr[23] - aot_gpr_4);
    goto L_089E7A00;
L_089E7A00:
    aot_gpr_4 = (2232u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1032));
    aot_gpr_4 = (ctx.gpr[21] + aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 & 32u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089E7A28;
      }
      goto L_089E7A1C;
    }
L_089E7A1C:
    { const bool branch_taken = ctx.gpr[22] != ctx.gpr[18];
      if (branch_taken) {
          goto L_089E7A28;
      }
      goto L_089E7A24;
    }
L_089E7A24:
    ctx.gpr[19] = (ctx.gpr[20] | 0u);
    goto L_089E7A28;
L_089E7A28:
    aot_gpr_4 = (2232u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1032));
    aot_gpr_4 = (ctx.gpr[21] + aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 & 128u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089E7A78;
      }
      goto L_089E7A44;
    }
L_089E7A44:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(44)));
    aot_gpr_5 = (ctx.gpr[20] + static_cast<std::uint32_t>(2));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089E7D2C;
      }
      goto L_089E7A58;
    }
L_089E7A58:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(12)));
    aot_gpr_5 = (ctx.gpr[20] << 2u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (0u | 20u);
    aot_gpr_4 = (aot_gpr_4 & 63u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_089E7D2C;
      }
      goto L_089E7A78;
    }
L_089E7A78:
    aot_gpr_4 = (ctx.gpr[21] + static_cast<std::uint32_t>(-2));
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(33) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (ctx.gpr[21] + static_cast<std::uint32_t>(-2));
      if (branch_taken) {
          goto L_089E7D48;
      }
      goto L_089E7A88;
    }
L_089E7A88:
    aot_gpr_4 = (aot_gpr_4 << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_4);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-2112)));
    jump_target = ctx.gpr[1];
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
L_089E7AA0:
    { const bool branch_taken = ctx.gpr[30] == 0u;
      if (branch_taken) {
          goto L_089E7ABC;
      }
      goto L_089E7AA8;
    }
L_089E7AA8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(44)));
    aot_gpr_5 = (ctx.gpr[20] + static_cast<std::uint32_t>(2));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089E7D2C;
      }
      goto L_089E7ABC;
    }
L_089E7ABC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089E7D48;
      }
      goto L_089E7AC4;
    }
L_089E7AC4:
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[22]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[23]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
      if (branch_taken) {
          goto L_089E7ADC;
      }
      goto L_089E7AD0;
    }
L_089E7AD0:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_089E7ADC;
      }
      goto L_089E7AD8;
    }
L_089E7AD8:
    ctx.gpr[19] = (ctx.gpr[20] | 0u);
    goto L_089E7ADC;
L_089E7ADC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089E7D48;
      }
      goto L_089E7AE4;
    }
L_089E7AE4:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(68)));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[23]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089E7D2C;
      }
      goto L_089E7AF4;
    }
L_089E7AF4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089E7D48;
      }
      goto L_089E7AFC;
    }
L_089E7AFC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (ctx.gpr[23] << 3u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (0u | 4u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_089E7D2C;
      }
      goto L_089E7B18;
    }
L_089E7B18:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089E7D48;
      }
      goto L_089E7B20;
    }
L_089E7B20:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(71)));
    aot_gpr_5 = (ctx.gpr[22] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089E7D2C;
      }
      goto L_089E7B34;
    }
L_089E7B34:
    aot_gpr_4 = (ctx.gpr[22] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[18] != aot_gpr_4;
      if (branch_taken) {
          goto L_089E7B44;
      }
      goto L_089E7B40;
    }
L_089E7B40:
    ctx.gpr[19] = (ctx.gpr[20] | 0u);
    goto L_089E7B44;
L_089E7B44:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089E7D48;
      }
      goto L_089E7B4C;
    }
L_089E7B4C:
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[30]) < 250 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[23]) < static_cast<std::int32_t>(ctx.gpr[30]) ? 1u : 0u);
      if (branch_taken) {
          goto L_089E7D2C;
      }
      goto L_089E7B58;
    }
L_089E7B58:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089E7D2C;
      }
      goto L_089E7B60;
    }
L_089E7B60:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089E7D48;
      }
      goto L_089E7B68;
    }
L_089E7B68:
    aot_gpr_4 = (ctx.gpr[22] + ctx.gpr[30]);
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(71)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(5));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089E7D2C;
      }
      goto L_089E7B80;
    }
L_089E7B80:
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[22]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_089E7B90;
      }
      goto L_089E7B8C;
    }
L_089E7B8C:
    ctx.gpr[19] = (ctx.gpr[20] | 0u);
    goto L_089E7B90;
L_089E7B90:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(71)));
    aot_gpr_5 = (ctx.gpr[22] + static_cast<std::uint32_t>(2));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089E7D2C;
      }
      goto L_089E7BA4;
    }
L_089E7BA4:
    aot_gpr_4 = (ctx.gpr[23] + ctx.gpr[20]);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) < 0;
      if (branch_taken) {
          goto L_089E7D2C;
      }
      goto L_089E7BB4;
    }
L_089E7BB4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(44)));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_089E7D2C;
      }
      goto L_089E7BC4;
    }
L_089E7BC4:
    aot_gpr_5 = (0u | 255u);
    { const bool branch_taken = ctx.gpr[18] == aot_gpr_5;
    aot_gpr_5 = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
      if (branch_taken) {
          goto L_089E7BE4;
      }
      goto L_089E7BD0;
    }
L_089E7BD0:
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
      if (branch_taken) {
          goto L_089E7BE4;
      }
      goto L_089E7BD8;
    }
L_089E7BD8:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_089E7BE4;
      }
      goto L_089E7BE0;
    }
L_089E7BE0:
    ctx.gpr[20] = (ctx.gpr[23] + ctx.gpr[20]);
    goto L_089E7BE4;
L_089E7BE4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089E7D48;
      }
      goto L_089E7BEC;
    }
L_089E7BEC:
    { const bool branch_taken = ctx.gpr[23] == 0u;
      if (branch_taken) {
          goto L_089E7C0C;
      }
      goto L_089E7BF4;
    }
L_089E7BF4:
    aot_gpr_4 = (ctx.gpr[22] + ctx.gpr[23]);
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(71)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089E7D2C;
      }
      goto L_089E7C0C;
    }
L_089E7C0C:
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(-1));
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[30] != aot_gpr_4;
      if (branch_taken) {
          goto L_089E7C38;
      }
      goto L_089E7C1C;
    }
L_089E7C1C:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x089E7C28u);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    goto L_089E70E0;
L_089E7C28:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_089E7D2C;
      }
      goto L_089E7C30;
    }
L_089E7C30:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089E7C58;
      }
      goto L_089E7C38;
    }
L_089E7C38:
    { const bool branch_taken = ctx.gpr[30] == 0u;
      if (branch_taken) {
          goto L_089E7C58;
      }
      goto L_089E7C40;
    }
L_089E7C40:
    aot_gpr_4 = (ctx.gpr[22] + ctx.gpr[30]);
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(71)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089E7D2C;
      }
      goto L_089E7C58;
    }
L_089E7C58:
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[22]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_089E7C68;
      }
      goto L_089E7C64;
    }
L_089E7C64:
    ctx.gpr[19] = (ctx.gpr[20] | 0u);
    goto L_089E7C68;
L_089E7C68:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089E7D48;
      }
      goto L_089E7C70;
    }
L_089E7C70:
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[23]) <= 0;
      if (branch_taken) {
          goto L_089E7C94;
      }
      goto L_089E7C7C;
    }
L_089E7C7C:
    aot_gpr_4 = (ctx.gpr[22] + ctx.gpr[23]);
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(71)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089E7D2C;
      }
      goto L_089E7C94;
    }
L_089E7C94:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089E7D48;
      }
      goto L_089E7C9C;
    }
L_089E7C9C:
    aot_gpr_4 = (ctx.gpr[23] & 31u);
    aot_gpr_4 = (ctx.gpr[22] + aot_gpr_4);
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(71)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089E7D2C;
      }
      goto L_089E7CB8;
    }
L_089E7CB8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089E7D48;
      }
      goto L_089E7CC0;
    }
L_089E7CC0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(52)));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[23]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089E7D2C;
      }
      goto L_089E7CD0;
    }
L_089E7CD0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(16)));
    aot_gpr_5 = (ctx.gpr[23] << 2u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(44)));
    ctx.gpr[23] = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(68)));
    aot_gpr_4 = (ctx.gpr[23] + ctx.gpr[20]);
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089E7D2C;
      }
      goto L_089E7CF8;
    }
L_089E7CF8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[23]) <= 0;
      if (branch_taken) {
          goto L_089E7D40;
      }
      goto L_089E7D00;
    }
L_089E7D00:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(12)));
    aot_gpr_5 = (ctx.gpr[23] + ctx.gpr[20]);
    aot_gpr_5 = (aot_gpr_5 << 2u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (0u | 4u);
    aot_gpr_4 = (aot_gpr_4 & 63u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_089E7D34;
      }
      goto L_089E7D24;
    }
L_089E7D24:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089E7D34;
      }
      goto L_089E7D2C;
    }
L_089E7D2C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089E7D68;
      }
      goto L_089E7D34;
    }
L_089E7D34:
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[23]) > 0;
      if (branch_taken) {
          goto L_089E7D00;
      }
      goto L_089E7D40;
    }
L_089E7D40:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089E7D48;
      }
      goto L_089E7D48;
    }
L_089E7D48:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_089E788C;
      }
      goto L_089E7D58;
    }
L_089E7D58:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(12)));
    aot_gpr_5 = (ctx.gpr[19] << 2u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    ctx.gpr[2] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    goto L_089E7D68;
L_089E7D68:
    { std::uint32_t aot_run_words[10]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
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
L_089E7D98:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_31);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_16 = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_089E7DEC;
      }
      goto L_089E7DB4;
    }
L_089E7DB4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_089E7DD8;
      }
      goto L_089E7DC0;
    }
L_089E7DC0:
    if (aot_gpr_4 == 0u) {
    aot_gpr_4 = (aot_gpr_16 & 1u);
        goto L_089E7DDC;
    }
    goto L_089E7DC8;
L_089E7DC8:
    if (aot_gpr_4 == 0u) {
    aot_gpr_4 = (aot_gpr_16 & 1u);
        goto L_089E7DDC;
    }
    goto L_089E7DD0;
L_089E7DD0:
    aot_gpr_31 = (0x089E7DD8u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE398, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089E7DD8u) goto L_089E7DD8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089E7DD8:
    aot_gpr_4 = (aot_gpr_16 & 1u);
    goto L_089E7DDC;
L_089E7DDC:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089E7DEC;
      }
      goto L_089E7DE4;
    }
L_089E7DE4:
    aot_gpr_31 = (0x089E7DECu);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE2C0, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089E7DECu) goto L_089E7DEC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089E7DEC:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
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
L_089E7E00:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (2235u << 16u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-27268));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(4), aot_gpr_4);
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(8));
    aot_gpr_5 = (0u | 255u);
    aot_gpr_6 = (0u | 255u);
    ctx.gpr[7] = (0u | 255u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    aot_gpr_31 = (0x089E7E38u);
    ctx.gpr[8] = (0u | 255u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08A3550C, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089E7E38u) goto L_089E7E38;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089E7E38:
    aot_fpr_12 = std::bit_cast<float>(0u);
    { const std::uint32_t aot_run_words[4]{std::bit_cast<std::uint32_t>(aot_fpr_12), std::bit_cast<std::uint32_t>(aot_fpr_12), std::bit_cast<std::uint32_t>(aot_fpr_12), std::bit_cast<std::uint32_t>(aot_fpr_12)};
      aot_mem.aot_direct_store32_block(aot_gpr_16 + static_cast<std::uint32_t>(12), aot_run_words); }
    ctx.gpr[2] = (aot_gpr_16 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
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
L_089E7E64:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (2235u << 16u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-27268));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(4), aot_gpr_4);
    { const std::uint32_t aot_run_words[4]{std::bit_cast<std::uint32_t>(aot_fpr_20), std::bit_cast<std::uint32_t>(ctx.fpr[22]), std::bit_cast<std::uint32_t>(ctx.fpr[24]), std::bit_cast<std::uint32_t>(ctx.fpr[26])};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_fpr_20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_14));
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(8));
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_gpr_5 = (0u | 255u);
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_6 = (0u | 255u);
    ctx.gpr[7] = (0u | 255u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_gpr_31);
    aot_gpr_31 = (0x089E7EBCu);
    ctx.gpr[8] = (0u | 255u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08A3550C, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089E7EBCu) goto L_089E7EBC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089E7EBC:
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(ctx.fpr[26]), std::bit_cast<std::uint32_t>(ctx.fpr[24]), std::bit_cast<std::uint32_t>(ctx.fpr[22])};
      aot_mem.aot_direct_store32_block(aot_gpr_16 + static_cast<std::uint32_t>(12), aot_run_words); }
    aot_fpr_12 = std::bit_cast<float>(0u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[2] = (aot_gpr_16 | 0u);
    { std::uint32_t aot_run_words[6]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      ctx.fpr[22] = std::bit_cast<float>(aot_run_words[1]);
      ctx.fpr[24] = std::bit_cast<float>(aot_run_words[2]);
      ctx.fpr[26] = std::bit_cast<float>(aot_run_words[3]);
      aot_gpr_16 = aot_run_words[4];
      aot_gpr_31 = aot_run_words[5];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
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
L_089E7EF8:
    aot_gpr_6 = (2235u << 16u);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-27268));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_6);
    aot_gpr_6 = (aot_gpr_5 + static_cast<std::uint32_t>(8));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_gpr_4 + static_cast<std::uint32_t>(8));
    aot_mem.aot_direct_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(16)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(20)));
    ctx.gpr[2] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(24)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(28)));
    jump_target = aot_gpr_31;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(aot_fpr_12));
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
L_089E7F48:
    ctx.gpr[2] = (2206u << 16u);
    jump_target = aot_gpr_31;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(32584));
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
L_089E7F54:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x089E7F64u);
    goto L_089E7F48;
L_089E7F64:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
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
L_089E7F70:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_5 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    aot_gpr_31 = (0x089E7F8Cu);
    ctx.gpr[17] = (0u | 0u);
    goto L_089E7F48;
L_089E7F8C:
    if (ctx.gpr[2] == aot_gpr_16) {
    ctx.gpr[17] = (0u | 1u);
        goto L_089E7FB4;
    }
    goto L_089E7F94;
L_089E7F94:
    aot_gpr_31 = (0x089E7F9Cu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0165_entry, 165u, 295u, 0x08A9A6CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089E7F9Cu) goto L_089E7F9C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089E7F9C:
    aot_gpr_4 = (ctx.gpr[2] ^ aot_gpr_16);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089E7FB4;
      }
      goto L_089E7FB0;
    }
L_089E7FB0:
    ctx.gpr[17] = (0u | 1u);
    goto L_089E7FB4;
L_089E7FB4:
    ctx.gpr[2] = (ctx.gpr[17] & 255u);
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
L_089E7FCC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-64));
    { const std::uint32_t aot_run_words[6]{aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(28), aot_run_words); }
    aot_gpr_31 = (0x089E7FF0u);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0165_entry, 165u, 300u, 0x08A9A720u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089E7FF0u) goto L_089E7FF0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089E7FF0:
    aot_gpr_4 = (2234u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(26704));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(108), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9676)));
    ctx.pc = 0x089E8000u; AOT_REGCACHE_SYNC_OUT(); return;
}

#undef AOT_REGCACHE_SYNC_IN
#undef AOT_REGCACHE_SYNC_OUT

void recomp_unit_0120(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0120_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_120(Runtime &runtime) {
    runtime.register_generated_unit(120u, 0x089E4000u, 16384u, &recomp_unit_0120, &recomp_unit_0120_entry);
    runtime.register_function(0x089E4000u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E400Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4010u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E401Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4028u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4030u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4040u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4058u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4064u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E406Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4088u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4090u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E40ACu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E40B4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E40D4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E40DCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E40E4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E40ECu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E40F4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4104u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E410Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E411Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4124u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E412Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4134u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E413Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4148u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4158u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4160u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4168u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4178u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4190u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4198u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E41A0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E41ACu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E41B4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E41C4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E41CCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E41D4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E41E4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E41ECu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E41F8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4204u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E420Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4218u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4220u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4228u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E423Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4244u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E424Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4254u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E425Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4268u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E427Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4290u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E42A4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E42ACu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E42B8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E42C0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E42C8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E42D0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E42D8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E42F0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E42FCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4304u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4310u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4320u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E433Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4354u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4360u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4378u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E43C0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E43CCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E43D4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E43DCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E43E4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E43ECu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E43FCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4410u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4420u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E442Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4434u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4440u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4494u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E449Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E44A4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E44ACu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E44B4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4504u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4514u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E451Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4524u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4538u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4560u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E456Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4580u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E45A8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E45B4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E45C8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E45F0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E45FCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4610u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4620u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4654u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4668u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E467Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4694u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E46A0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E46ACu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E46B8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E46C4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E46D0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E46D8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E46E0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E46E8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E46F4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4700u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4708u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4710u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E471Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4728u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4734u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4740u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4754u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E475Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4764u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E476Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4774u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E477Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4784u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E47B8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E47C8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E47E0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E47E8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E47F0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E47F8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4814u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4838u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4840u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4860u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4870u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E487Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E48BCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E490Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4918u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4920u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4928u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4938u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E494Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4954u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E495Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4968u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4974u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4988u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4998u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E49D4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E49DCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E49E4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E49ECu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E49F4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E49FCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4A04u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4A0Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4A14u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4A24u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4A2Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4A34u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4A44u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4A88u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4A94u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4AA8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4AECu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4AF8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4B0Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4B58u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4B68u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4B78u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4BA0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4BB4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4BB8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4BE8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4C08u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4C18u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4C28u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4C2Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4C40u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4C48u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4C4Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4C54u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4C68u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4C78u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4C8Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4C98u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4CB0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4CC0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4CCCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4CD4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4CECu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4D24u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4D2Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4D38u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4D40u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4D54u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4D5Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4D68u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4D7Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4D84u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4D94u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4DB4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4DC4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4DD4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4DD8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4DECu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4DF4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4DF8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4E00u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4E14u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4E24u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4E38u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4E44u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4E5Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4E6Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4E78u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4E80u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4E94u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4ECCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4ED4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4EE0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4EE8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4EFCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4F04u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4F10u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4F24u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4F2Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4F40u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4F54u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4F60u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4F68u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4F7Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4FB4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4FF4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5088u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5098u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E50B0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E50C0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E50D8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E50E8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5110u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E511Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E51A0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E51ACu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E51B0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E51E4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E51F8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5218u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5224u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E522Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5238u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5240u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E525Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5270u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5290u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E52C0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E52D8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E52E4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E52F4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5300u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5450u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5464u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5480u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E54ACu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E54B8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E54CCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E55D8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E55ECu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5604u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5650u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E565Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5680u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E568Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5690u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E56CCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E56E0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E56E4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5704u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E571Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5720u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5730u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5764u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5778u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5780u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5788u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5790u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E579Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E57A8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E57BCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E57C0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E57D4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E57E0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5810u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5844u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5850u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5884u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5898u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E58A4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E58C0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E58D0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E58ECu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E58F8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5908u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E591Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E592Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5948u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5954u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5964u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E596Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E597Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E598Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E59A4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E59B4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E59C0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E59D0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E59E4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E59F4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5A10u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5A34u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5A44u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5A78u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5A94u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5AA0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5ABCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5AECu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5AF8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5B24u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5B2Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5B38u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5B48u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5B54u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5B64u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5B6Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5B7Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5B88u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5BB0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5BB8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5BC4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5BD4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5BE0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5BF0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5BF8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5C04u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5C0Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5C10u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5C20u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5C3Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5C84u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5CA0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5CACu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5CD8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5CF4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5CFCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5D00u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5D0Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5D14u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5D2Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5D44u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5D4Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5D54u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5D64u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5D90u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5DA8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5DB0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5DC8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5DD0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5DE0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5DFCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5E3Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5E50u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5E58u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5E68u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5E70u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5E88u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5E9Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5EA4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5EB8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5EE4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5F00u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5F0Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5F20u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5F34u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5F48u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5F58u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5F6Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5F7Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5F98u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5FA4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5FACu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5FBCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5FD0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5FE0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5FE8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6000u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6020u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6038u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6054u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E606Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6094u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E60B4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E60C8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E60CCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E60D4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E60E8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E60FCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6118u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6138u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6158u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6170u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E618Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E61A4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E61CCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E61D8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E61E4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6200u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6204u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6218u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E622Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6230u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6238u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6254u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6274u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E62ACu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E62C4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E62D8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E62ECu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E62FCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E630Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6314u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E631Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6324u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E632Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6334u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6340u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6348u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6354u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E635Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6370u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6380u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6388u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E63A0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E63B4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E63B8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E63C4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E63E0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6410u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6434u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6440u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6448u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E644Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6454u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6460u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E646Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6478u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6484u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6494u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E64A0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E64ACu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E64B8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E64C4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E64CCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E64D4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E64E4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6500u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E651Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6524u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E652Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6538u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6544u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E654Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6560u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6574u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6598u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E65A4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E65C4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E65DCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E65F4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E65FCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E660Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6634u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6644u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6648u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6668u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E666Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6678u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E66A0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E66B0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E66B4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E66D0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E66D8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E66E4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6704u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6714u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6724u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6734u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6744u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6754u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6764u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6774u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E677Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E67A0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E67B4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E67C8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E67DCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E67E8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E67F8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E681Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6828u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6834u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6840u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E684Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6850u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6864u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6870u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6878u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6888u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6894u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E689Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E68A4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E68B4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E68DCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E68E4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E68F8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6904u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E691Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6924u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E692Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6938u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6948u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6968u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6970u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6980u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E699Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E69A4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E69ACu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E69B4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E69D0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E69D8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E69E0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E69E8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E69ECu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E69F4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6A04u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6A14u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6A1Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6A24u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6A2Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6A38u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6A40u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6A48u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6A54u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6A68u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6A70u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6A80u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6A8Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6A94u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6ADCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6AE8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6AF0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6B00u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6B0Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6B24u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6B48u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6B90u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6BA4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6BACu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6BBCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6BC8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6BD8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6BE0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6C0Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6C30u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6C48u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6C64u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6C84u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6C8Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6C90u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6C94u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6CA0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6CACu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6CF0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6D00u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6D14u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6D1Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6D28u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6D34u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6D48u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6D4Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6D74u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6DC0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6DE0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6E2Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6E38u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6E48u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6E60u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6E6Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6E74u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6E7Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6E84u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6E88u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6E90u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6EA0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6EA8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6EB4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6EB8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6EC0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6ECCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6ED4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6EDCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6EE0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6EE8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6F0Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6F10u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6F20u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6F54u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6F84u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6F9Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6FB0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6FB4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6FCCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6FE0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6FECu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7014u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E701Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7028u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7034u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E703Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7054u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E705Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7068u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7084u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7094u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E70A4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E70ACu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E70CCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E70D4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E70D8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E70E0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7100u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E710Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E711Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7124u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E712Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7134u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E713Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7140u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7148u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7158u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7164u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7178u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E717Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7184u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7198u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E71A4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E71B0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E71CCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E71D8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E71DCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E71E4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7218u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E722Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7240u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7248u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7258u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7268u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7270u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7278u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7280u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7298u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E72C8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E72E0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E72E8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E72F8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7300u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7310u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E731Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E732Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7338u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E733Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E735Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7384u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7390u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E73A0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E73B8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E73D4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E73DCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E73E4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E73F0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7400u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7408u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E740Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7424u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7438u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7440u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7450u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7458u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E745Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7464u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E74B8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E74C0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E74E8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E74ECu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E74F4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7514u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E751Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7534u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7554u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E756Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7570u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7578u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7584u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E75B0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E75B8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E75BCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E75D0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E75E8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E762Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7638u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7640u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7650u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7660u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E768Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7694u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E76A0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E76B4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E76CCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E76E4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7700u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7718u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7724u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7728u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7784u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E778Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E77A8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E77B4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E77C8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E780Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7818u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7820u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7830u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7874u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E787Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E788Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E78B8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E78D4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E78DCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E78E4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E78ECu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E78F4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E78FCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7924u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7934u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E793Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7958u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7964u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E796Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7988u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7994u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E799Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E79A4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E79CCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E79DCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E79E4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7A00u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7A1Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7A24u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7A28u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7A44u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7A58u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7A78u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7A88u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7AA0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7AA8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7ABCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7AC4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7AD0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7AD8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7ADCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7AE4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7AF4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7AFCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7B18u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7B20u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7B34u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7B40u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7B44u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7B4Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7B58u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7B60u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7B68u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7B80u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7B8Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7B90u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7BA4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7BB4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7BC4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7BD0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7BD8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7BE0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7BE4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7BECu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7BF4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7C0Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7C1Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7C28u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7C30u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7C38u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7C40u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7C58u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7C64u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7C68u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7C70u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7C7Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7C94u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7C9Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7CB8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7CC0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7CD0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7CF8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7D00u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7D24u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7D2Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7D34u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7D40u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7D48u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7D58u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7D68u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7D98u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7DB4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7DC0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7DC8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7DD0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7DD8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7DDCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7DE4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7DECu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7E00u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7E38u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7E64u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7EBCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7EF8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7F48u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7F54u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7F64u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7F70u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7F8Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7F94u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7F9Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7FB0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7FB4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7FCCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7FF0u, &recomp_unit_0120, "recomp_unit_0120");
}
} // namespace psprecomp
