#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include "vcs_resident_regions.hpp"
#include "vcs_tier2_superblocks.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
// PSPRECOMP_V811_COMPACT_DISPATCH: 64-slot occupancy masks + per-group base id.
static constexpr std::uint64_t kEntryMasks_recomp_unit_0044[64] = {
    0x30810000500000A1ull, 0x1020000A00001428ull, 0x0814000004003106ull, 0x8821008040284204ull,
    0x51080204090A0010ull, 0x0020020C20081028ull, 0x141040000A000000ull, 0x0900000000002003ull,
    0x181082A824484808ull, 0x0400000040A20000ull, 0x0002000000000002ull, 0x00D051A00C434060ull,
    0x0000000040104200ull, 0x21A0309004000852ull, 0x010044108018D006ull, 0x0088420018800000ull,
    0x01002D215514A120ull, 0x4048510AA8A50480ull, 0x2100000202841001ull, 0x890106845201100Aull,
    0x0104120A0D52400Cull, 0x410228A0010228A0ull, 0x0000000000000000ull, 0x0000100000041080ull,
    0x5000280005000014ull, 0x0000D28502802800ull, 0xA800190401100000ull, 0x240401454551594Aull,
    0x1001695230110000ull, 0x102AA80800001630ull, 0x2444208292000045ull, 0x0AB1A122D0948914ull,
    0x448D214900000080ull, 0x1A1125A112911228ull, 0x90000100002B6952ull, 0xA2800849A8004002ull,
    0xAAB0120945202284ull, 0x81550100180A0902ull, 0x4935002004291088ull, 0x90508A1550494008ull,
    0x16A2080C008095A4ull, 0x0A14002D40814800ull, 0x0400950009544020ull, 0x8400020000012A88ull,
    0x80080891A8141A80ull, 0x8014C2120A522148ull, 0x401001106000006Aull, 0x0000000211200A32ull,
    0x8040000044521001ull, 0x50A52215200210A4ull, 0x5242200220880291ull, 0x0411222442400042ull,
    0xC880048004800480ull, 0x014000001A400000ull, 0x0200405000149210ull, 0x00028A2504200200ull,
    0x00050210C0100000ull, 0x0000000040000000ull, 0x1120001000040000ull, 0x0000800120000800ull,
    0x889044822A802800ull, 0x0429001240140024ull, 0x1010204024912089ull, 0x2A84425080080804ull,
};
static constexpr std::uint16_t kEntryBases_recomp_unit_0044[64] = {
    1u, 10u, 18u, 27u, 38u, 49u, 58u, 64u, 69u, 84u, 89u, 91u, 107u, 111u, 124u, 136u,
    143u, 160u, 177u, 185u, 200u, 215u, 228u, 228u, 232u, 240u, 251u, 260u, 280u, 293u, 306u, 319u,
    341u, 353u, 373u, 387u, 400u, 419u, 433u, 448u, 465u, 482u, 495u, 507u, 516u, 531u, 548u, 558u,
    567u, 576u, 593u, 607u, 619u, 629u, 635u, 645u, 655u, 662u, 663u, 668u, 672u, 686u, 697u, 710u,
};
void recomp_unit_0044_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
// PSPRECOMP_AOT_REGCACHE_BEGIN
// PSPRECOMP_AOT_REGCACHE_META gprs=4,5,29,6,31,16 fprs=12,13,14,15 gpr_occ=4262 fpr_occ=496 gpr_total=6803 fpr_total=579
    std::uint32_t aot_gpr_4 = ctx.gpr[4];
    std::uint32_t aot_gpr_5 = ctx.gpr[5];
    std::uint32_t aot_gpr_29 = ctx.gpr[29];
    std::uint32_t aot_gpr_6 = ctx.gpr[6];
    std::uint32_t aot_gpr_31 = ctx.gpr[31];
    std::uint32_t aot_gpr_16 = ctx.gpr[16];
    float aot_fpr_12 = ctx.fpr[12];
    float aot_fpr_13 = ctx.fpr[13];
    float aot_fpr_14 = ctx.fpr[14];
    float aot_fpr_15 = ctx.fpr[15];
    bool aot_regcache_valid = true;
#define AOT_REGCACHE_SYNC_OUT() do { if (aot_regcache_valid) { ctx.gpr[4] = aot_gpr_4; ctx.gpr[5] = aot_gpr_5; ctx.gpr[29] = aot_gpr_29; ctx.gpr[6] = aot_gpr_6; ctx.gpr[31] = aot_gpr_31; ctx.gpr[16] = aot_gpr_16; ctx.fpr[12] = aot_fpr_12; ctx.fpr[13] = aot_fpr_13; ctx.fpr[14] = aot_fpr_14; ctx.fpr[15] = aot_fpr_15; } } while (false)
#define AOT_REGCACHE_SYNC_IN() do { if (aot_regcache_valid) { aot_gpr_4 = ctx.gpr[4]; aot_gpr_5 = ctx.gpr[5]; aot_gpr_29 = ctx.gpr[29]; aot_gpr_6 = ctx.gpr[6]; aot_gpr_31 = ctx.gpr[31]; aot_gpr_16 = ctx.gpr[16]; aot_fpr_12 = ctx.fpr[12]; aot_fpr_13 = ctx.fpr[13]; aot_fpr_14 = ctx.fpr[14]; aot_fpr_15 = ctx.fpr[15]; } } while (false)
// PSPRECOMP_AOT_REGCACHE_END
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_redispatch_rounds = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x088B4004u;
        entry_id = 0u;
        if (entry_delta < 16376u && (entry_delta & 3u) == 0u) {
            const std::uint32_t entry_slot = entry_delta >> 2u;
            const std::uint32_t entry_group = entry_slot >> 6u;
            const std::uint64_t entry_mask = kEntryMasks_recomp_unit_0044[entry_group];
            const std::uint64_t entry_bit = 1ull << (entry_slot & 63u);
            if ((entry_mask & entry_bit) != 0u) {
                entry_id = static_cast<std::uint16_t>(
                    kEntryBases_recomp_unit_0044[entry_group] +
                    std::popcount(entry_mask & (entry_bit - 1ull)));
            }
        }
    }
    switch (entry_id) {
    case 1u: goto L_088B4004;
    case 2u: goto L_088B4018;
    case 3u: goto L_088B4020;
    case 4u: goto L_088B4074;
    case 5u: goto L_088B407C;
    case 6u: goto L_088B40C4;
    case 7u: goto L_088B40E0;
    case 8u: goto L_088B40F4;
    case 9u: goto L_088B40F8;
    case 10u: goto L_088B4110;
    case 11u: goto L_088B4118;
    case 12u: goto L_088B412C;
    case 13u: goto L_088B4134;
    case 14u: goto L_088B4188;
    case 15u: goto L_088B4190;
    case 16u: goto L_088B41D8;
    case 17u: goto L_088B41F4;
    case 18u: goto L_088B4208;
    case 19u: goto L_088B420C;
    case 20u: goto L_088B4224;
    case 21u: goto L_088B4234;
    case 22u: goto L_088B4238;
    case 23u: goto L_088B426C;
    case 24u: goto L_088B42CC;
    case 25u: goto L_088B42D4;
    case 26u: goto L_088B42F0;
    case 27u: goto L_088B430C;
    case 28u: goto L_088B4328;
    case 29u: goto L_088B433C;
    case 30u: goto L_088B4350;
    case 31u: goto L_088B4358;
    case 32u: goto L_088B437C;
    case 33u: goto L_088B43A0;
    case 34u: goto L_088B43C4;
    case 35u: goto L_088B43D8;
    case 36u: goto L_088B43F0;
    case 37u: goto L_088B4400;
    case 38u: goto L_088B4414;
    case 39u: goto L_088B4448;
    case 40u: goto L_088B4450;
    case 41u: goto L_088B4464;
    case 42u: goto L_088B4470;
    case 43u: goto L_088B448C;
    case 44u: goto L_088B44A8;
    case 45u: goto L_088B44D0;
    case 46u: goto L_088B44E4;
    case 47u: goto L_088B44F4;
    case 48u: goto L_088B44FC;
    case 49u: goto L_088B4510;
    case 50u: goto L_088B4518;
    case 51u: goto L_088B4534;
    case 52u: goto L_088B4550;
    case 53u: goto L_088B4578;
    case 54u: goto L_088B458C;
    case 55u: goto L_088B4590;
    case 56u: goto L_088B45A8;
    case 57u: goto L_088B45D8;
    case 58u: goto L_088B4668;
    case 59u: goto L_088B4670;
    case 60u: goto L_088B46BC;
    case 61u: goto L_088B46D4;
    case 62u: goto L_088B46EC;
    case 63u: goto L_088B46F4;
    case 64u: goto L_088B4704;
    case 65u: goto L_088B4708;
    case 66u: goto L_088B4738;
    case 67u: goto L_088B47E4;
    case 68u: goto L_088B47F0;
    case 69u: goto L_088B4810;
    case 70u: goto L_088B4830;
    case 71u: goto L_088B483C;
    case 72u: goto L_088B4850;
    case 73u: goto L_088B485C;
    case 74u: goto L_088B486C;
    case 75u: goto L_088B4878;
    case 76u: goto L_088B4890;
    case 77u: goto L_088B4898;
    case 78u: goto L_088B48A0;
    case 79u: goto L_088B48A8;
    case 80u: goto L_088B48C0;
    case 81u: goto L_088B48D4;
    case 82u: goto L_088B48F0;
    case 83u: goto L_088B48F4;
    case 84u: goto L_088B4948;
    case 85u: goto L_088B4958;
    case 86u: goto L_088B4960;
    case 87u: goto L_088B497C;
    case 88u: goto L_088B49EC;
    case 89u: goto L_088B4A08;
    case 90u: goto L_088B4AC8;
    case 91u: goto L_088B4B18;
    case 92u: goto L_088B4B1C;
    case 93u: goto L_088B4B3C;
    case 94u: goto L_088B4B44;
    case 95u: goto L_088B4B48;
    case 96u: goto L_088B4B5C;
    case 97u: goto L_088B4B6C;
    case 98u: goto L_088B4B70;
    case 99u: goto L_088B4B98;
    case 100u: goto L_088B4BA0;
    case 101u: goto L_088B4BA4;
    case 102u: goto L_088B4BB4;
    case 103u: goto L_088B4BBC;
    case 104u: goto L_088B4BD4;
    case 105u: goto L_088B4BDC;
    case 106u: goto L_088B4BE0;
    case 107u: goto L_088B4C28;
    case 108u: goto L_088B4C3C;
    case 109u: goto L_088B4C54;
    case 110u: goto L_088B4C7C;
    case 111u: goto L_088B4D08;
    case 112u: goto L_088B4D14;
    case 113u: goto L_088B4D1C;
    case 114u: goto L_088B4D30;
    case 115u: goto L_088B4D6C;
    case 116u: goto L_088B4D94;
    case 117u: goto L_088B4DA0;
    case 118u: goto L_088B4DB4;
    case 119u: goto L_088B4DB8;
    case 120u: goto L_088B4DD8;
    case 121u: goto L_088B4DE0;
    case 122u: goto L_088B4DE4;
    case 123u: goto L_088B4DF8;
    case 124u: goto L_088B4E08;
    case 125u: goto L_088B4E0C;
    case 126u: goto L_088B4E34;
    case 127u: goto L_088B4E3C;
    case 128u: goto L_088B4E40;
    case 129u: goto L_088B4E50;
    case 130u: goto L_088B4E54;
    case 131u: goto L_088B4E80;
    case 132u: goto L_088B4E94;
    case 133u: goto L_088B4EAC;
    case 134u: goto L_088B4EBC;
    case 135u: goto L_088B4EE4;
    case 136u: goto L_088B4F60;
    case 137u: goto L_088B4F70;
    case 138u: goto L_088B4F74;
    case 139u: goto L_088B4FA8;
    case 140u: goto L_088B4FBC;
    case 141u: goto L_088B4FD0;
    case 142u: goto L_088B4FE0;
    case 143u: goto L_088B5018;
    case 144u: goto L_088B5024;
    case 145u: goto L_088B5038;
    case 146u: goto L_088B5040;
    case 147u: goto L_088B504C;
    case 148u: goto L_088B5054;
    case 149u: goto L_088B5064;
    case 150u: goto L_088B506C;
    case 151u: goto L_088B5074;
    case 152u: goto L_088B507C;
    case 153u: goto L_088B5084;
    case 154u: goto L_088B5098;
    case 155u: goto L_088B50A4;
    case 156u: goto L_088B50AC;
    case 157u: goto L_088B50B0;
    case 158u: goto L_088B50B8;
    case 159u: goto L_088B50E4;
    case 160u: goto L_088B5120;
    case 161u: goto L_088B512C;
    case 162u: goto L_088B5144;
    case 163u: goto L_088B514C;
    case 164u: goto L_088B5158;
    case 165u: goto L_088B5160;
    case 166u: goto L_088B5170;
    case 167u: goto L_088B5178;
    case 168u: goto L_088B5180;
    case 169u: goto L_088B5188;
    case 170u: goto L_088B5190;
    case 171u: goto L_088B51A4;
    case 172u: goto L_088B51B4;
    case 173u: goto L_088B51BC;
    case 174u: goto L_088B51D0;
    case 175u: goto L_088B51DC;
    case 176u: goto L_088B51FC;
    case 177u: goto L_088B5204;
    case 178u: goto L_088B5234;
    case 179u: goto L_088B524C;
    case 180u: goto L_088B5260;
    case 181u: goto L_088B5268;
    case 182u: goto L_088B5288;
    case 183u: goto L_088B52E4;
    case 184u: goto L_088B52F8;
    case 185u: goto L_088B5308;
    case 186u: goto L_088B5310;
    case 187u: goto L_088B5334;
    case 188u: goto L_088B5344;
    case 189u: goto L_088B5368;
    case 190u: goto L_088B5374;
    case 191u: goto L_088B537C;
    case 192u: goto L_088B538C;
    case 193u: goto L_088B53A0;
    case 194u: goto L_088B53A8;
    case 195u: goto L_088B53AC;
    case 196u: goto L_088B53C4;
    case 197u: goto L_088B53E4;
    case 198u: goto L_088B53F0;
    case 199u: goto L_088B5400;
    case 200u: goto L_088B540C;
    case 201u: goto L_088B5410;
    case 202u: goto L_088B543C;
    case 203u: goto L_088B5448;
    case 204u: goto L_088B5454;
    case 205u: goto L_088B545C;
    case 206u: goto L_088B5464;
    case 207u: goto L_088B546C;
    case 208u: goto L_088B5470;
    case 209u: goto L_088B5488;
    case 210u: goto L_088B5490;
    case 211u: goto L_088B54A8;
    case 212u: goto L_088B54B4;
    case 213u: goto L_088B54CC;
    case 214u: goto L_088B54E4;
    case 215u: goto L_088B5518;
    case 216u: goto L_088B5520;
    case 217u: goto L_088B5530;
    case 218u: goto L_088B5538;
    case 219u: goto L_088B5548;
    case 220u: goto L_088B5564;
    case 221u: goto L_088B5598;
    case 222u: goto L_088B55A0;
    case 223u: goto L_088B55B0;
    case 224u: goto L_088B55B8;
    case 225u: goto L_088B55C8;
    case 226u: goto L_088B55E4;
    case 227u: goto L_088B55FC;
    case 228u: goto L_088B5720;
    case 229u: goto L_088B5734;
    case 230u: goto L_088B574C;
    case 231u: goto L_088B57B4;
    case 232u: goto L_088B580C;
    case 233u: goto L_088B5814;
    case 234u: goto L_088B5864;
    case 235u: goto L_088B586C;
    case 236u: goto L_088B58B0;
    case 237u: goto L_088B58B8;
    case 238u: goto L_088B58F4;
    case 239u: goto L_088B58FC;
    case 240u: goto L_088B5930;
    case 241u: goto L_088B5938;
    case 242u: goto L_088B5960;
    case 243u: goto L_088B5968;
    case 244u: goto L_088B5984;
    case 245u: goto L_088B598C;
    case 246u: goto L_088B59A0;
    case 247u: goto L_088B59A8;
    case 248u: goto L_088B59B4;
    case 249u: goto L_088B59BC;
    case 250u: goto L_088B59C0;
    case 251u: goto L_088B5A54;
    case 252u: goto L_088B5A64;
    case 253u: goto L_088B5A8C;
    case 254u: goto L_088B5AA4;
    case 255u: goto L_088B5AB0;
    case 256u: goto L_088B5AB4;
    case 257u: goto L_088B5AF0;
    case 258u: goto L_088B5AF8;
    case 259u: goto L_088B5B00;
    case 260u: goto L_088B5B08;
    case 261u: goto L_088B5B10;
    case 262u: goto L_088B5B1C;
    case 263u: goto L_088B5B24;
    case 264u: goto L_088B5B30;
    case 265u: goto L_088B5B34;
    case 266u: goto L_088B5B3C;
    case 267u: goto L_088B5B44;
    case 268u: goto L_088B5B54;
    case 269u: goto L_088B5B5C;
    case 270u: goto L_088B5B64;
    case 271u: goto L_088B5B6C;
    case 272u: goto L_088B5B7C;
    case 273u: goto L_088B5B84;
    case 274u: goto L_088B5B8C;
    case 275u: goto L_088B5B9C;
    case 276u: goto L_088B5BA4;
    case 277u: goto L_088B5BCC;
    case 278u: goto L_088B5BEC;
    case 279u: goto L_088B5BF8;
    case 280u: goto L_088B5C44;
    case 281u: goto L_088B5C54;
    case 282u: goto L_088B5C74;
    case 283u: goto L_088B5C78;
    case 284u: goto L_088B5C88;
    case 285u: goto L_088B5C94;
    case 286u: goto L_088B5C9C;
    case 287u: goto L_088B5CA4;
    case 288u: goto L_088B5CB0;
    case 289u: goto L_088B5CB8;
    case 290u: goto L_088B5CBC;
    case 291u: goto L_088B5CC4;
    case 292u: goto L_088B5CF4;
    case 293u: goto L_088B5D14;
    case 294u: goto L_088B5D18;
    case 295u: goto L_088B5D28;
    case 296u: goto L_088B5D2C;
    case 297u: goto L_088B5D34;
    case 298u: goto L_088B5D90;
    case 299u: goto L_088B5DB0;
    case 300u: goto L_088B5DB8;
    case 301u: goto L_088B5DC0;
    case 302u: goto L_088B5DC8;
    case 303u: goto L_088B5DD0;
    case 304u: goto L_088B5DD8;
    case 305u: goto L_088B5DF4;
    case 306u: goto L_088B5E04;
    case 307u: goto L_088B5E0C;
    case 308u: goto L_088B5E1C;
    case 309u: goto L_088B5E68;
    case 310u: goto L_088B5E74;
    case 311u: goto L_088B5E80;
    case 312u: goto L_088B5E88;
    case 313u: goto L_088B5EA0;
    case 314u: goto L_088B5EB8;
    case 315u: goto L_088B5ECC;
    case 316u: goto L_088B5EDC;
    case 317u: goto L_088B5EEC;
    case 318u: goto L_088B5EF8;
    case 319u: goto L_088B5F0C;
    case 320u: goto L_088B5F14;
    case 321u: goto L_088B5F24;
    case 322u: goto L_088B5F30;
    case 323u: goto L_088B5F40;
    case 324u: goto L_088B5F4C;
    case 325u: goto L_088B5F54;
    case 326u: goto L_088B5F60;
    case 327u: goto L_088B5F74;
    case 328u: goto L_088B5F7C;
    case 329u: goto L_088B5F80;
    case 330u: goto L_088B5F88;
    case 331u: goto L_088B5F98;
    case 332u: goto L_088B5FA4;
    case 333u: goto L_088B5FB8;
    case 334u: goto L_088B5FC0;
    case 335u: goto L_088B5FC4;
    case 336u: goto L_088B5FD4;
    case 337u: goto L_088B5FD8;
    case 338u: goto L_088B5FE0;
    case 339u: goto L_088B5FE8;
    case 340u: goto L_088B5FF0;
    case 341u: goto L_088B6020;
    case 342u: goto L_088B6084;
    case 343u: goto L_088B6090;
    case 344u: goto L_088B609C;
    case 345u: goto L_088B60A4;
    case 346u: goto L_088B60B8;
    case 347u: goto L_088B60C4;
    case 348u: goto L_088B60CC;
    case 349u: goto L_088B60D0;
    case 350u: goto L_088B60E0;
    case 351u: goto L_088B60EC;
    case 352u: goto L_088B60FC;
    case 353u: goto L_088B6110;
    case 354u: goto L_088B6118;
    case 355u: goto L_088B6128;
    case 356u: goto L_088B6134;
    case 357u: goto L_088B6144;
    case 358u: goto L_088B6154;
    case 359u: goto L_088B6160;
    case 360u: goto L_088B6168;
    case 361u: goto L_088B6174;
    case 362u: goto L_088B6184;
    case 363u: goto L_088B6198;
    case 364u: goto L_088B61A0;
    case 365u: goto L_088B61A4;
    case 366u: goto L_088B61AC;
    case 367u: goto L_088B61B8;
    case 368u: goto L_088B61C4;
    case 369u: goto L_088B61D4;
    case 370u: goto L_088B61E8;
    case 371u: goto L_088B61F0;
    case 372u: goto L_088B61F4;
    case 373u: goto L_088B6208;
    case 374u: goto L_088B6214;
    case 375u: goto L_088B621C;
    case 376u: goto L_088B6224;
    case 377u: goto L_088B6230;
    case 378u: goto L_088B6238;
    case 379u: goto L_088B623C;
    case 380u: goto L_088B6244;
    case 381u: goto L_088B6248;
    case 382u: goto L_088B6250;
    case 383u: goto L_088B6258;
    case 384u: goto L_088B62A4;
    case 385u: goto L_088B62F4;
    case 386u: goto L_088B6300;
    case 387u: goto L_088B6308;
    case 388u: goto L_088B633C;
    case 389u: goto L_088B6370;
    case 390u: goto L_088B6378;
    case 391u: goto L_088B6380;
    case 392u: goto L_088B6384;
    case 393u: goto L_088B6390;
    case 394u: goto L_088B639C;
    case 395u: goto L_088B63B0;
    case 396u: goto L_088B63E0;
    case 397u: goto L_088B63E8;
    case 398u: goto L_088B63F8;
    case 399u: goto L_088B6400;
    case 400u: goto L_088B640C;
    case 401u: goto L_088B6420;
    case 402u: goto L_088B6428;
    case 403u: goto L_088B6438;
    case 404u: goto L_088B6458;
    case 405u: goto L_088B6464;
    case 406u: goto L_088B646C;
    case 407u: goto L_088B647C;
    case 408u: goto L_088B6484;
    case 409u: goto L_088B6490;
    case 410u: goto L_088B64A8;
    case 411u: goto L_088B64B4;
    case 412u: goto L_088B64D4;
    case 413u: goto L_088B64D8;
    case 414u: goto L_088B64E0;
    case 415u: goto L_088B64E8;
    case 416u: goto L_088B64F0;
    case 417u: goto L_088B64F8;
    case 418u: goto L_088B6500;
    case 419u: goto L_088B6508;
    case 420u: goto L_088B6524;
    case 421u: goto L_088B6530;
    case 422u: goto L_088B6548;
    case 423u: goto L_088B6550;
    case 424u: goto L_088B6570;
    case 425u: goto L_088B6574;
    case 426u: goto L_088B65A4;
    case 427u: goto L_088B65C4;
    case 428u: goto L_088B65CC;
    case 429u: goto L_088B65D4;
    case 430u: goto L_088B65DC;
    case 431u: goto L_088B65E4;
    case 432u: goto L_088B6600;
    case 433u: goto L_088B6610;
    case 434u: goto L_088B6620;
    case 435u: goto L_088B6634;
    case 436u: goto L_088B6644;
    case 437u: goto L_088B6650;
    case 438u: goto L_088B6658;
    case 439u: goto L_088B666C;
    case 440u: goto L_088B6698;
    case 441u: goto L_088B66C4;
    case 442u: goto L_088B66CC;
    case 443u: goto L_088B66D4;
    case 444u: goto L_088B66D8;
    case 445u: goto L_088B66E4;
    case 446u: goto L_088B66F0;
    case 447u: goto L_088B66FC;
    case 448u: goto L_088B6710;
    case 449u: goto L_088B673C;
    case 450u: goto L_088B6744;
    case 451u: goto L_088B6750;
    case 452u: goto L_088B675C;
    case 453u: goto L_088B6774;
    case 454u: goto L_088B677C;
    case 455u: goto L_088B6784;
    case 456u: goto L_088B678C;
    case 457u: goto L_088B6794;
    case 458u: goto L_088B67A8;
    case 459u: goto L_088B67B0;
    case 460u: goto L_088B67C0;
    case 461u: goto L_088B67D4;
    case 462u: goto L_088B67DC;
    case 463u: goto L_088B67F4;
    case 464u: goto L_088B6800;
    case 465u: goto L_088B680C;
    case 466u: goto L_088B6818;
    case 467u: goto L_088B6820;
    case 468u: goto L_088B6824;
    case 469u: goto L_088B682C;
    case 470u: goto L_088B6834;
    case 471u: goto L_088B6840;
    case 472u: goto L_088B6860;
    case 473u: goto L_088B688C;
    case 474u: goto L_088B6890;
    case 475u: goto L_088B68B0;
    case 476u: goto L_088B68C8;
    case 477u: goto L_088B68D8;
    case 478u: goto L_088B68E0;
    case 479u: goto L_088B68E8;
    case 480u: goto L_088B68EC;
    case 481u: goto L_088B68F4;
    case 482u: goto L_088B6930;
    case 483u: goto L_088B693C;
    case 484u: goto L_088B6944;
    case 485u: goto L_088B6960;
    case 486u: goto L_088B697C;
    case 487u: goto L_088B6984;
    case 488u: goto L_088B698C;
    case 489u: goto L_088B6990;
    case 490u: goto L_088B6998;
    case 491u: goto L_088B69CC;
    case 492u: goto L_088B69D4;
    case 493u: goto L_088B69E8;
    case 494u: goto L_088B69F0;
    case 495u: goto L_088B6A18;
    case 496u: goto L_088B6A3C;
    case 497u: goto L_088B6A4C;
    case 498u: goto L_088B6A54;
    case 499u: goto L_088B6A5C;
    case 500u: goto L_088B6A64;
    case 501u: goto L_088B6A70;
    case 502u: goto L_088B6AA4;
    case 503u: goto L_088B6AAC;
    case 504u: goto L_088B6AB4;
    case 505u: goto L_088B6AC0;
    case 506u: goto L_088B6AEC;
    case 507u: goto L_088B6B10;
    case 508u: goto L_088B6B20;
    case 509u: goto L_088B6B28;
    case 510u: goto L_088B6B30;
    case 511u: goto L_088B6B38;
    case 512u: goto L_088B6B44;
    case 513u: goto L_088B6BA8;
    case 514u: goto L_088B6BEC;
    case 515u: goto L_088B6C00;
    case 516u: goto L_088B6C20;
    case 517u: goto L_088B6C28;
    case 518u: goto L_088B6C30;
    case 519u: goto L_088B6C34;
    case 520u: goto L_088B6C4C;
    case 521u: goto L_088B6C54;
    case 522u: goto L_088B6C70;
    case 523u: goto L_088B6C78;
    case 524u: goto L_088B6C80;
    case 525u: goto L_088B6C84;
    case 526u: goto L_088B6C94;
    case 527u: goto L_088B6CA0;
    case 528u: goto L_088B6CB0;
    case 529u: goto L_088B6CD0;
    case 530u: goto L_088B6D00;
    case 531u: goto L_088B6D10;
    case 532u: goto L_088B6D1C;
    case 533u: goto L_088B6D24;
    case 534u: goto L_088B6D38;
    case 535u: goto L_088B6D48;
    case 536u: goto L_088B6D54;
    case 537u: goto L_088B6D5C;
    case 538u: goto L_088B6D68;
    case 539u: goto L_088B6D70;
    case 540u: goto L_088B6D88;
    case 541u: goto L_088B6D94;
    case 542u: goto L_088B6DA8;
    case 543u: goto L_088B6DBC;
    case 544u: goto L_088B6DC0;
    case 545u: goto L_088B6DCC;
    case 546u: goto L_088B6DD4;
    case 547u: goto L_088B6E00;
    case 548u: goto L_088B6E08;
    case 549u: goto L_088B6E10;
    case 550u: goto L_088B6E18;
    case 551u: goto L_088B6E1C;
    case 552u: goto L_088B6E78;
    case 553u: goto L_088B6E7C;
    case 554u: goto L_088B6E94;
    case 555u: goto L_088B6EA4;
    case 556u: goto L_088B6ED4;
    case 557u: goto L_088B6EFC;
    case 558u: goto L_088B6F08;
    case 559u: goto L_088B6F14;
    case 560u: goto L_088B6F18;
    case 561u: goto L_088B6F28;
    case 562u: goto L_088B6F30;
    case 563u: goto L_088B6F58;
    case 564u: goto L_088B6F64;
    case 565u: goto L_088B6F74;
    case 566u: goto L_088B6F88;
    case 567u: goto L_088B7004;
    case 568u: goto L_088B7034;
    case 569u: goto L_088B7048;
    case 570u: goto L_088B7054;
    case 571u: goto L_088B705C;
    case 572u: goto L_088B706C;
    case 573u: goto L_088B707C;
    case 574u: goto L_088B70DC;
    case 575u: goto L_088B7100;
    case 576u: goto L_088B710C;
    case 577u: goto L_088B7118;
    case 578u: goto L_088B7120;
    case 579u: goto L_088B7134;
    case 580u: goto L_088B7148;
    case 581u: goto L_088B7178;
    case 582u: goto L_088B7184;
    case 583u: goto L_088B718C;
    case 584u: goto L_088B7194;
    case 585u: goto L_088B71A8;
    case 586u: goto L_088B71B8;
    case 587u: goto L_088B71C4;
    case 588u: goto L_088B71CC;
    case 589u: goto L_088B71D8;
    case 590u: goto L_088B71E0;
    case 591u: goto L_088B71F4;
    case 592u: goto L_088B71FC;
    case 593u: goto L_088B7204;
    case 594u: goto L_088B7214;
    case 595u: goto L_088B7220;
    case 596u: goto L_088B7228;
    case 597u: goto L_088B7250;
    case 598u: goto L_088B7260;
    case 599u: goto L_088B7278;
    case 600u: goto L_088B7288;
    case 601u: goto L_088B72B8;
    case 602u: goto L_088B72C8;
    case 603u: goto L_088B72DC;
    case 604u: goto L_088B72E8;
    case 605u: goto L_088B72F4;
    case 606u: goto L_088B72FC;
    case 607u: goto L_088B7308;
    case 608u: goto L_088B731C;
    case 609u: goto L_088B735C;
    case 610u: goto L_088B7368;
    case 611u: goto L_088B737C;
    case 612u: goto L_088B738C;
    case 613u: goto L_088B7398;
    case 614u: goto L_088B73A8;
    case 615u: goto L_088B73B8;
    case 616u: goto L_088B73C4;
    case 617u: goto L_088B73D4;
    case 618u: goto L_088B73EC;
    case 619u: goto L_088B7420;
    case 620u: goto L_088B742C;
    case 621u: goto L_088B7460;
    case 622u: goto L_088B746C;
    case 623u: goto L_088B74A0;
    case 624u: goto L_088B74AC;
    case 625u: goto L_088B74E0;
    case 626u: goto L_088B74F0;
    case 627u: goto L_088B74FC;
    case 628u: goto L_088B7500;
    case 629u: goto L_088B755C;
    case 630u: goto L_088B7568;
    case 631u: goto L_088B7570;
    case 632u: goto L_088B7574;
    case 633u: goto L_088B75DC;
    case 634u: goto L_088B75E4;
    case 635u: goto L_088B7614;
    case 636u: goto L_088B7628;
    case 637u: goto L_088B7634;
    case 638u: goto L_088B7640;
    case 639u: goto L_088B764C;
    case 640u: goto L_088B7654;
    case 641u: goto L_088B7694;
    case 642u: goto L_088B769C;
    case 643u: goto L_088B76BC;
    case 644u: goto L_088B76E8;
    case 645u: goto L_088B7728;
    case 646u: goto L_088B7758;
    case 647u: goto L_088B776C;
    case 648u: goto L_088B7784;
    case 649u: goto L_088B778C;
    case 650u: goto L_088B7798;
    case 651u: goto L_088B77A8;
    case 652u: goto L_088B77B0;
    case 653u: goto L_088B77C0;
    case 654u: goto L_088B77C8;
    case 655u: goto L_088B7854;
    case 656u: goto L_088B787C;
    case 657u: goto L_088B7880;
    case 658u: goto L_088B7894;
    case 659u: goto L_088B78A8;
    case 660u: goto L_088B78C4;
    case 661u: goto L_088B78CC;
    case 662u: goto L_088B797C;
    case 663u: goto L_088B7A4C;
    case 664u: goto L_088B7A94;
    case 665u: goto L_088B7AD8;
    case 666u: goto L_088B7AE4;
    case 667u: goto L_088B7AF4;
    case 668u: goto L_088B7B30;
    case 669u: goto L_088B7B78;
    case 670u: goto L_088B7B84;
    case 671u: goto L_088B7BC0;
    case 672u: goto L_088B7C30;
    case 673u: goto L_088B7C38;
    case 674u: goto L_088B7C60;
    case 675u: goto L_088B7C68;
    case 676u: goto L_088B7C70;
    case 677u: goto L_088B7C78;
    case 678u: goto L_088B7C88;
    case 679u: goto L_088B7CA0;
    case 680u: goto L_088B7CAC;
    case 681u: goto L_088B7CBC;
    case 682u: goto L_088B7CD4;
    case 683u: goto L_088B7CE0;
    case 684u: goto L_088B7CF0;
    case 685u: goto L_088B7D00;
    case 686u: goto L_088B7D0C;
    case 687u: goto L_088B7D18;
    case 688u: goto L_088B7D4C;
    case 689u: goto L_088B7D54;
    case 690u: goto L_088B7D7C;
    case 691u: goto L_088B7D88;
    case 692u: goto L_088B7D94;
    case 693u: goto L_088B7DC4;
    case 694u: goto L_088B7DD0;
    case 695u: goto L_088B7DD8;
    case 696u: goto L_088B7DEC;
    case 697u: goto L_088B7E04;
    case 698u: goto L_088B7E10;
    case 699u: goto L_088B7E20;
    case 700u: goto L_088B7E38;
    case 701u: goto L_088B7E44;
    case 702u: goto L_088B7E54;
    case 703u: goto L_088B7E60;
    case 704u: goto L_088B7E6C;
    case 705u: goto L_088B7E78;
    case 706u: goto L_088B7E9C;
    case 707u: goto L_088B7EB8;
    case 708u: goto L_088B7ED4;
    case 709u: goto L_088B7EF4;
    case 710u: goto L_088B7F0C;
    case 711u: goto L_088B7F30;
    case 712u: goto L_088B7F50;
    case 713u: goto L_088B7F80;
    case 714u: goto L_088B7F94;
    case 715u: goto L_088B7F9C;
    case 716u: goto L_088B7FA8;
    case 717u: goto L_088B7FBC;
    case 718u: goto L_088B7FCC;
    case 719u: goto L_088B7FE0;
    case 720u: goto L_088B7FE8;
    case 721u: goto L_088B7FF0;
    case 722u: goto L_088B7FF8;
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
L_088B4004:
// TIER2_SUPERBLOCK_V2_HOOK_BEGIN
    if (vcs::tier2_cluster_enabled(vcs::Tier2ClusterId::Edge43) && rt.memory().direct_fastmem_enabled()) {
        AOT_REGCACHE_SYNC_OUT(); aot_regcache_valid = false;
        vcs::tier2_superblock_edge43(rt, ctx, aot_mem, 0x088B4004u);
        AOT_REGCACHE_SYNC_OUT(); return;
    }
// TIER2_SUPERBLOCK_V2_HOOK_END
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[18] + static_cast<std::uint32_t>(6))))));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_16 = (ctx.gpr[17] << 3u);
      if (branch_taken) {
          goto L_088B40F4;
      }
      goto L_088B4018;
    }
L_088B4018:
    { const bool branch_taken = ctx.gpr[22] == 0u;
      if (branch_taken) {
          goto L_088B4074;
      }
      goto L_088B4020;
    }
L_088B4020:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(76)));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_16);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(6)));
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_gpr_5 = (aot_gpr_4 ^ 7u);
    aot_gpr_5 = (aot_gpr_5 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_6 = (aot_gpr_4 ^ 8u);
    aot_gpr_6 = (aot_gpr_6 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 | aot_gpr_6);
    aot_gpr_6 = (aot_gpr_4 ^ 16u);
    aot_gpr_6 = (aot_gpr_6 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 | aot_gpr_6);
    aot_gpr_6 = (aot_gpr_4 ^ 31u);
    aot_gpr_6 = (aot_gpr_6 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 | aot_gpr_6);
    aot_gpr_4 = (aot_gpr_4 ^ 12u);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_5 | aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088B40E0;
      }
      goto L_088B4074;
    }
L_088B4074:
    { const bool branch_taken = ctx.gpr[21] == 0u;
      if (branch_taken) {
          goto L_088B40C4;
      }
      goto L_088B407C;
    }
L_088B407C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(76)));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_16);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(6)));
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_gpr_5 = (aot_gpr_4 ^ 8u);
    aot_gpr_5 = (aot_gpr_5 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_6 = (aot_gpr_4 ^ 16u);
    aot_gpr_6 = (aot_gpr_6 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 | aot_gpr_6);
    aot_gpr_6 = (aot_gpr_4 ^ 31u);
    aot_gpr_6 = (aot_gpr_6 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 | aot_gpr_6);
    aot_gpr_4 = (aot_gpr_4 ^ 12u);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_5 | aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088B40E0;
      }
      goto L_088B40C4;
    }
L_088B40C4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(72)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(76)));
    aot_gpr_6 = (aot_gpr_6 + aot_gpr_16);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (ctx.gpr[23] | 0u);
    aot_gpr_31 = (0x088B40E0u);
    ctx.gpr[8] = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0043_entry, 43u, 210u, 0x088B18ECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088B40E0u) goto L_088B40E0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B40E0:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_088B4018;
      }
      goto L_088B40F4;
    }
L_088B40F4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(48)));
    goto L_088B40F8;
L_088B40F8:
// TIER2_SUPERBLOCK_V2_HOOK_BEGIN
    if (vcs::tier2_cluster_enabled(vcs::Tier2ClusterId::Edge43) && rt.memory().direct_fastmem_enabled()) {
        AOT_REGCACHE_SYNC_OUT(); aot_regcache_valid = false;
        vcs::tier2_superblock_edge43(rt, ctx, aot_mem, 0x088B40F8u);
        AOT_REGCACHE_SYNC_OUT(); return;
    }
// TIER2_SUPERBLOCK_V2_HOOK_END
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(52)));
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(16));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(48), aot_gpr_4);
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0043_entry, 43u, 509u, 0x088B3FCCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_088B4110;
    }
L_088B4110:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088B4208;
      }
      goto L_088B4118;
    }
L_088B4118:
    aot_gpr_16 = (0u | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[19] + static_cast<std::uint32_t>(50)));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_16) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_088B4208;
      }
      goto L_088B412C;
    }
L_088B412C:
    { const bool branch_taken = ctx.gpr[22] == 0u;
      if (branch_taken) {
          goto L_088B4188;
      }
      goto L_088B4134;
    }
L_088B4134:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(76)));
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[17]);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(6)));
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_gpr_5 = (aot_gpr_4 ^ 7u);
    aot_gpr_5 = (aot_gpr_5 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_6 = (aot_gpr_4 ^ 8u);
    aot_gpr_6 = (aot_gpr_6 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 | aot_gpr_6);
    aot_gpr_6 = (aot_gpr_4 ^ 16u);
    aot_gpr_6 = (aot_gpr_6 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 | aot_gpr_6);
    aot_gpr_6 = (aot_gpr_4 ^ 31u);
    aot_gpr_6 = (aot_gpr_6 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 | aot_gpr_6);
    aot_gpr_4 = (aot_gpr_4 ^ 12u);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_5 | aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088B41F4;
      }
      goto L_088B4188;
    }
L_088B4188:
    { const bool branch_taken = ctx.gpr[21] == 0u;
      if (branch_taken) {
          goto L_088B41D8;
      }
      goto L_088B4190;
    }
L_088B4190:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(76)));
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[17]);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(6)));
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_gpr_5 = (aot_gpr_4 ^ 8u);
    aot_gpr_5 = (aot_gpr_5 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_6 = (aot_gpr_4 ^ 16u);
    aot_gpr_6 = (aot_gpr_6 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 | aot_gpr_6);
    aot_gpr_6 = (aot_gpr_4 ^ 31u);
    aot_gpr_6 = (aot_gpr_6 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 | aot_gpr_6);
    aot_gpr_4 = (aot_gpr_4 ^ 12u);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_5 | aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088B41F4;
      }
      goto L_088B41D8;
    }
L_088B41D8:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(72)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(76)));
    aot_gpr_6 = (aot_gpr_6 + ctx.gpr[17]);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (ctx.gpr[23] | 0u);
    aot_gpr_31 = (0x088B41F4u);
    ctx.gpr[8] = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0043_entry, 43u, 210u, 0x088B18ECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088B41F4u) goto L_088B41F4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B41F4:
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[19] + static_cast<std::uint32_t>(50)));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_16) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_088B412C;
      }
      goto L_088B4208;
    }
L_088B4208:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(56)));
    goto L_088B420C;
L_088B420C:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_088B4234;
      }
      goto L_088B4224;
    }
L_088B4224:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_12));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088B4238;
      }
      goto L_088B4234;
    }
L_088B4234:
    ctx.gpr[2] = (0u | 0u);
    goto L_088B4238;
L_088B4238:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(60)));
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(64)));
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(68)));
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(72)));
    ctx.gpr[19] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(76)));
    ctx.gpr[20] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(80)));
    ctx.gpr[21] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(84)));
    ctx.gpr[22] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(88)));
    ctx.gpr[23] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(92)));
    ctx.gpr[30] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(96)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(100)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088B426C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-160));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(120), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(124), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(128), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(132), ctx.gpr[19]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(136), ctx.gpr[20]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(140), ctx.gpr[21]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(144), ctx.gpr[22]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(148), ctx.gpr[23]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(152), ctx.gpr[30]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(156), aot_gpr_31);
    ctx.gpr[18] = (ctx.gpr[9] & 255u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_16 = (0u | 0u);
    ctx.gpr[9] = (aot_mem.aot_direct_load8(aot_gpr_6 + static_cast<std::uint32_t>(52)));
    ctx.gpr[9] = (static_cast<std::int32_t>(aot_gpr_16) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
    ctx.gpr[30] = (aot_gpr_4 | 0u);
    ctx.gpr[23] = (aot_gpr_5 | 0u);
    ctx.gpr[17] = (aot_gpr_6 | 0u);
    ctx.gpr[21] = (ctx.gpr[7] | 0u);
    ctx.gpr[22] = (ctx.gpr[11] | 0u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(116), ctx.gpr[8]);
      if (branch_taken) {
          goto L_088B433C;
      }
      goto L_088B42CC;
    }
L_088B42CC:
    { const bool branch_taken = ctx.gpr[18] == 0u;
      if (branch_taken) {
          goto L_088B430C;
      }
      goto L_088B42D4;
    }
L_088B42D4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(56)));
    aot_gpr_5 = (aot_gpr_16 << 5u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(16)));
    aot_gpr_5 = (0u | 7u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_088B4328;
      }
      goto L_088B42F0;
    }
L_088B42F0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(56)));
    aot_gpr_5 = (aot_gpr_16 << 5u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(16)));
    aot_gpr_5 = (0u | 8u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_088B4328;
      }
      goto L_088B430C;
    }
L_088B430C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(56)));
    aot_gpr_4 = (aot_gpr_16 << 5u);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[30] | 0u);
    aot_gpr_6 = (ctx.gpr[21] | 0u);
    aot_gpr_31 = (0x088B4328u);
    ctx.gpr[7] = (aot_gpr_29 | 0u);
    ctx.pc = 0x088B1554u;
    ([&]() { AOT_REGCACHE_SYNC_OUT(); rt.invoke_native_fast_path(0x088B1554u, ctx); AOT_REGCACHE_SYNC_IN(); }());
    if (ctx.pc == 0x088B4328u) goto L_088B4328;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B4328:
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_16) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088B42CC;
      }
      goto L_088B433C;
    }
L_088B433C:
    aot_gpr_16 = (0u | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_16) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088B43D8;
      }
      goto L_088B4350;
    }
L_088B4350:
    { const bool branch_taken = ctx.gpr[18] == 0u;
      if (branch_taken) {
          goto L_088B43A0;
      }
      goto L_088B4358;
    }
L_088B4358:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(64)));
    aot_gpr_5 = (aot_gpr_16 << 4u);
    aot_gpr_6 = (aot_gpr_5 + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(32)));
    aot_gpr_5 = (0u | 7u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_088B43C4;
      }
      goto L_088B437C;
    }
L_088B437C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(64)));
    aot_gpr_5 = (aot_gpr_16 << 4u);
    aot_gpr_6 = (aot_gpr_5 + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(32)));
    aot_gpr_5 = (0u | 8u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_088B43C4;
      }
      goto L_088B43A0;
    }
L_088B43A0:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(64)));
    aot_gpr_4 = (aot_gpr_16 << 4u);
    aot_gpr_6 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[30] | 0u);
    aot_gpr_6 = (ctx.gpr[21] | 0u);
    aot_gpr_31 = (0x088B43C4u);
    ctx.gpr[7] = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0043_entry, 43u, 382u, 0x088B3060u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088B43C4u) goto L_088B43C4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B43C4:
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_16) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088B4350;
      }
      goto L_088B43D8;
    }
L_088B43D8:
    aot_gpr_4 = (2236u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-27712));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[17] + static_cast<std::uint32_t>(50)));
    if (aot_gpr_4 == 0u) {
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(116)));
        goto L_088B4590;
    }
    goto L_088B43F0;
L_088B43F0:
    ctx.gpr[20] = (aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(54)));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[20]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088B44FC;
      }
      goto L_088B4400;
    }
L_088B4400:
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(112), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.gpr[19] = (0u | 0u);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088B44F4;
      }
      goto L_088B4414;
    }
L_088B4414:
    ctx.gpr[18] = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    aot_gpr_4 = (ctx.gpr[19] << 4u);
    ctx.gpr[18] = (ctx.gpr[18] + aot_gpr_4);
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vx2i_ct<0u, 2u, 2u, 3u>();
    ctx.execute_vfpu_vx2i_ct<1u, 66u, 2u, 3u>();
    ctx.execute_vfpu_vi2f_ct<0u, 0u, 3u, 23u>();
    ctx.execute_vfpu_vi2f_ct<1u, 1u, 3u, 23u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(16);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_31 = (0x088B4448u);
    aot_gpr_4 = (ctx.gpr[30] | 0u);
    ctx.pc = 0x088B1780u;
    ([&]() { AOT_REGCACHE_SYNC_OUT(); rt.invoke_native_fast_path(0x088B1780u, ctx); AOT_REGCACHE_SYNC_IN(); }());
    if (ctx.pc == 0x088B4448u) goto L_088B4448;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B4448:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_088B44E4;
      }
      goto L_088B4450;
    }
L_088B4450:
    aot_gpr_16 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[18] + static_cast<std::uint32_t>(6))))));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(aot_gpr_16) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088B44E4;
      }
      goto L_088B4464;
    }
L_088B4464:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(112)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088B44A8;
      }
      goto L_088B4470;
    }
L_088B4470:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(76)));
    aot_gpr_5 = (aot_gpr_16 << 3u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(6)));
    aot_gpr_5 = (0u | 7u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_088B44D0;
      }
      goto L_088B448C;
    }
L_088B448C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(76)));
    aot_gpr_5 = (aot_gpr_16 << 3u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(6)));
    aot_gpr_5 = (0u | 8u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_088B44D0;
      }
      goto L_088B44A8;
    }
L_088B44A8:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(76)));
    aot_gpr_4 = (aot_gpr_16 << 3u);
    aot_gpr_6 = (aot_gpr_6 + aot_gpr_4);
    ctx.gpr[9] = (2236u << 16u);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(-27712));
    aot_gpr_4 = (ctx.gpr[30] | 0u);
    ctx.gpr[7] = (ctx.gpr[21] | 0u);
    aot_gpr_31 = (0x088B44D0u);
    ctx.gpr[8] = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0043_entry, 43u, 217u, 0x088B1A34u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088B44D0u) goto L_088B44D0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B44D0:
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(aot_gpr_16) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088B4464;
      }
      goto L_088B44E4;
    }
L_088B44E4:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088B4414;
      }
      goto L_088B44F4;
    }
L_088B44F4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088B458C;
      }
      goto L_088B44FC;
    }
L_088B44FC:
    aot_gpr_16 = (0u | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[17] + static_cast<std::uint32_t>(50)));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_16) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088B458C;
      }
      goto L_088B4510;
    }
L_088B4510:
    { const bool branch_taken = ctx.gpr[18] == 0u;
      if (branch_taken) {
          goto L_088B4550;
      }
      goto L_088B4518;
    }
L_088B4518:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(76)));
    aot_gpr_5 = (aot_gpr_16 << 3u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(6)));
    aot_gpr_5 = (0u | 7u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_088B4578;
      }
      goto L_088B4534;
    }
L_088B4534:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(76)));
    aot_gpr_5 = (aot_gpr_16 << 3u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(6)));
    aot_gpr_5 = (0u | 8u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_088B4578;
      }
      goto L_088B4550;
    }
L_088B4550:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(76)));
    aot_gpr_4 = (aot_gpr_16 << 3u);
    aot_gpr_6 = (aot_gpr_6 + aot_gpr_4);
    ctx.gpr[9] = (2236u << 16u);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(-27712));
    aot_gpr_4 = (ctx.gpr[30] | 0u);
    ctx.gpr[7] = (ctx.gpr[21] | 0u);
    aot_gpr_31 = (0x088B4578u);
    ctx.gpr[8] = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0043_entry, 43u, 217u, 0x088B1A34u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088B4578u) goto L_088B4578;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B4578:
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[17] + static_cast<std::uint32_t>(50)));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_16) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088B4510;
      }
      goto L_088B458C;
    }
L_088B458C:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(116)));
    goto L_088B4590;
L_088B4590:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_088B4704;
      }
      goto L_088B45A8;
    }
L_088B45A8:
    ctx.gpr[17] = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[18] = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (ctx.gpr[23] | 0u);
    aot_gpr_31 = (0x088B45D8u);
    aot_gpr_6 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0043_entry, 43u, 73u, 0x088B086Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088B45D8u) goto L_088B45D8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B45D8:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(aot_fpr_14));
    aot_mem.aot_direct_store32(ctx.gpr[21] + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[21] + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[21] + static_cast<std::uint32_t>(8), aot_gpr_6);
    aot_fpr_15 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(aot_fpr_15));
    aot_fpr_15 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(aot_fpr_15));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(aot_fpr_12));
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(16);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(32);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<7u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vtfm_ct<0u, 36u, 7u, 3u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (ctx.gpr[21] + static_cast<std::uint32_t>(16));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(aot_fpr_14));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    aot_gpr_4 = (2236u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-27712));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088B46F4;
      }
      goto L_088B4668;
    }
L_088B4668:
    { const bool branch_taken = ctx.gpr[22] == 0u;
      if (branch_taken) {
          goto L_088B46F4;
      }
      goto L_088B4670;
    }
L_088B4670:
    aot_gpr_4 = (2236u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-27712));
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
      const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[17] = (ctx.gpr[22] + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[18] = (ctx.gpr[22] + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(48)));
    aot_mem.aot_direct_store8(ctx.gpr[22] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(aot_gpr_4));
    ctx.gpr[19] = (aot_gpr_29 + static_cast<std::uint32_t>(80));
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_5 = (ctx.gpr[23] | 0u);
    aot_gpr_31 = (0x088B46BCu);
    aot_gpr_6 = (ctx.gpr[22] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0043_entry, 43u, 73u, 0x088B086Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088B46BCu) goto L_088B46BC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B46BC:
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_5 = (ctx.gpr[23] | 0u);
    aot_gpr_31 = (0x088B46D4u);
    aot_gpr_6 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0043_entry, 43u, 73u, 0x088B086Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088B46D4u) goto L_088B46D4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B46D4:
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_5 = (ctx.gpr[23] | 0u);
    aot_gpr_31 = (0x088B46ECu);
    aot_gpr_6 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0043_entry, 43u, 73u, 0x088B086Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088B46ECu) goto L_088B46EC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B46EC:
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    goto L_088B46F4;
L_088B46F4:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_12));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088B4708;
      }
      goto L_088B4704;
    }
L_088B4704:
    ctx.gpr[2] = (0u | 0u);
    goto L_088B4708;
L_088B4708:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(120)));
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(124)));
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(128)));
    ctx.gpr[19] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(132)));
    ctx.gpr[20] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(136)));
    ctx.gpr[21] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(140)));
    ctx.gpr[22] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(144)));
    ctx.gpr[23] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(148)));
    ctx.gpr[30] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(152)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(156)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088B4738:
// TIER2_SUPERBLOCK_V2_HOOK_BEGIN
    if (vcs::tier2_cluster_enabled(vcs::Tier2ClusterId::Matrix) && rt.memory().direct_fastmem_enabled()) {
        AOT_REGCACHE_SYNC_OUT(); aot_regcache_valid = false;
        vcs::tier2_superblock_matrix(rt, ctx, aot_mem, 0x088B4738u);
        AOT_REGCACHE_SYNC_OUT(); return;
    }
// TIER2_SUPERBLOCK_V2_HOOK_END
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-352));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(296), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(300), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(304), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(308), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(312), ctx.gpr[19]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(316), ctx.gpr[20]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(320), ctx.gpr[21]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(324), ctx.gpr[22]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(328), ctx.gpr[23]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(332), ctx.gpr[30]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(336), aot_gpr_31);
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(16);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(32);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(48);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<3u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr_6 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<36u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr_6 + static_cast<std::uint32_t>(16);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<37u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr_6 + static_cast<std::uint32_t>(32);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<38u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr_6 + static_cast<std::uint32_t>(48);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<19u, 4u>(vfpu_value); }
    { float vfpu_value[4]{};
      ctx.write_vfpu_vector_with_destination_prefix_ct<39u, 3u>(vfpu_value); }
    { float vfpu_value[4]{};
      ctx.write_vfpu_vector_with_destination_prefix_ct<35u, 3u>(vfpu_value); }
    ctx.execute_vfpu_vtfm_ct<7u, 36u, 19u, 3u, 3u>();
    ctx.execute_vfpu_unary_ct<7u, 7u, 3u, 2u>();
    { float vfpu_value[4]{1.0f, 1.0f, 1.0f, 1.0f};
      ctx.write_vfpu_vector_with_destination_prefix_ct<99u, 1u>(vfpu_value); }
    { float vfpu_value[4]{1.0f, 1.0f, 1.0f, 1.0f};
      ctx.write_vfpu_vector_with_destination_prefix_ct<103u, 1u>(vfpu_value); }
    { float vfpu_s[16]{}, vfpu_t[16]{}, vfpu_d[16]{};
      ctx.read_vfpu_matrix(vfpu_s, 0u, 4u);
      ctx.read_vfpu_matrix(vfpu_t, 36u, 4u);
      for (std::uint32_t a = 0; a < 4u; ++a) {
        for (std::uint32_t b = 0; b < 4u; ++b) {
          float sum = 0.0f;
          for (std::uint32_t c = 0; c < 4u; ++c) sum += vfpu_s[b * 4u + c] * vfpu_t[a * 4u + c];
          vfpu_d[a * 4u + b] = sum;
        }
      }
      ctx.write_vfpu_matrix(vfpu_d, 44u, 4u);
      ctx.eat_vfpu_prefixes(); }
    { const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<8u, 4u>(vfpu_value); }
    aot_gpr_4 = (ctx.gpr[7] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<28u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(16);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<29u, 4u>(vfpu_value); }
    ctx.execute_vfpu_unary_ct<117u, 104u, 1u, 0u>();
    ctx.execute_vfpu_unary_ct<118u, 104u, 1u, 0u>();
    ctx.execute_vfpu_unary_ct<116u, 104u, 1u, 0u>();
    ctx.execute_vfpu_vtfm_ct<20u, 44u, 8u, 3u, 3u>();
    ctx.execute_vfpu_vec3_ct<20u, 20u, 15u, 3u, 0u>();
    ctx.execute_vfpu_vec3_ct<16u, 28u, 55u, 3u, 1u>();
    ctx.execute_vfpu_vec3_ct<17u, 29u, 55u, 3u, 0u>();
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    ctx.execute_vfpu_vcmp_ct<20u, 16u, 3u, 2u>();
    { const bool branch_taken = ((ctx.vfpu_ctrl[3] >> 4u) & 1u) != 0u;
      if (branch_taken) {
          goto L_088B4810;
      }
      goto L_088B47E4;
    }
L_088B47E4:
    ctx.execute_vfpu_vcmp_ct<20u, 17u, 3u, 7u>();
    { const bool branch_taken = ((ctx.vfpu_ctrl[3] >> 4u) & 1u) != 0u;
      if (branch_taken) {
          goto L_088B4810;
      }
      goto L_088B47F0;
    }
L_088B47F0:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(1));
    ctx.gpr[2] = (ctx.gpr[2] & 255u);
    ctx.execute_vfpu_vtfm_ct<35u, 0u, 3u, 3u, 3u>();
    { float vfpu_value[4]{};
      ctx.write_vfpu_vector_with_destination_prefix_ct<3u, 3u>(vfpu_value); }
    ctx.execute_vfpu_unary_ct<35u, 35u, 3u, 2u>();
    ctx.execute_vfpu_unary_ct<39u, 19u, 3u, 0u>();
    { float vfpu_value[4]{};
      ctx.write_vfpu_vector_with_destination_prefix_ct<7u, 3u>(vfpu_value); }
    { float vfpu_s[16]{}, vfpu_t[16]{}, vfpu_d[16]{};
      ctx.read_vfpu_matrix(vfpu_s, 36u, 4u);
      ctx.read_vfpu_matrix(vfpu_t, 0u, 4u);
      for (std::uint32_t a = 0; a < 4u; ++a) {
        for (std::uint32_t b = 0; b < 4u; ++b) {
          float sum = 0.0f;
          for (std::uint32_t c = 0; c < 4u; ++c) sum += vfpu_s[b * 4u + c] * vfpu_t[a * 4u + c];
          vfpu_d[a * 4u + b] = sum;
        }
      }
      ctx.write_vfpu_matrix(vfpu_d, 48u, 4u);
      ctx.eat_vfpu_prefixes(); }
    goto L_088B4810;
L_088B4810:
    ctx.gpr[30] = (aot_gpr_5 | 0u);
    ctx.gpr[23] = (ctx.gpr[7] | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(256), aot_gpr_6);
    ctx.gpr[17] = (ctx.gpr[9] | 0u);
    ctx.gpr[18] = (ctx.gpr[10] | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(292), ctx.gpr[8]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_088B48A0;
      }
      goto L_088B4830;
    }
L_088B4830:
    aot_gpr_4 = (ctx.gpr[30] | 0u);
    aot_gpr_31 = (0x088B483Cu);
    aot_gpr_5 = (ctx.gpr[23] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0043_entry, 43u, 138u, 0x088B0E34u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088B483Cu) goto L_088B483C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B483C:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[30] + static_cast<std::uint32_t>(53)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(276), ctx.gpr[2]);
    aot_gpr_5 = (aot_gpr_4 | ctx.gpr[2]);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(272), aot_gpr_4);
      if (branch_taken) {
          goto L_088B4898;
      }
      goto L_088B4850;
    }
L_088B4850:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(288), ctx.gpr[18]);
    aot_gpr_31 = (0x088B485Cu);
    aot_gpr_4 = (ctx.gpr[30] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0043_entry, 43u, 135u, 0x088B0DD4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088B485Cu) goto L_088B485C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B485C:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(276)));
    aot_gpr_4 = (ctx.gpr[23] | 0u);
    aot_gpr_31 = (0x088B486Cu);
    aot_gpr_5 = (ctx.gpr[30] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0043_entry, 43u, 145u, 0x088B0EE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088B486Cu) goto L_088B486C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B486C:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    aot_gpr_31 = (0x088B4878u);
    aot_gpr_4 = (ctx.gpr[23] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0043_entry, 43u, 152u, 0x088B0FA4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088B4878u) goto L_088B4878;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B4878:
    ctx.gpr[30] = (ctx.gpr[2] | 0u);
    aot_gpr_16 = (2235u << 16u);
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(28480));
    ctx.gpr[8] = (2236u << 16u);
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-28864));
      if (branch_taken) {
          goto L_088B48A8;
      }
      goto L_088B4890;
    }
L_088B4890:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[11] = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_088B48F4;
      }
      goto L_088B4898;
    }
L_088B4898:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088B4F74;
      }
      goto L_088B48A0;
    }
L_088B48A0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088B4F74;
      }
      goto L_088B48A8;
    }
L_088B48A8:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(288), ctx.gpr[18]);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(272)));
    aot_gpr_4 = (0u | 0u);
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_088B48F0;
      }
      goto L_088B48C0;
    }
L_088B48C0:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(288), ctx.gpr[18]);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_5 = (ctx.gpr[17] + aot_gpr_5);
    aot_gpr_6 = (ctx.gpr[18] | 0u);
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(272)));
    goto L_088B48D4;
L_088B48D4:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(32));
    ctx.gpr[9] = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088B48D4;
      }
      goto L_088B48F0;
    }
L_088B48F0:
    ctx.gpr[11] = (ctx.gpr[8] | 0u);
    goto L_088B48F4;
L_088B48F4:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(224), ctx.gpr[19]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(284), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(280), ctx.gpr[11]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[23] + static_cast<std::uint32_t>(68)));
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[23] + static_cast<std::uint32_t>(54)));
    aot_gpr_5 = (aot_gpr_5 << 4u);
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[23] + static_cast<std::uint32_t>(76)));
    ctx.gpr[7] = (aot_mem.aot_direct_load16(ctx.gpr[23] + static_cast<std::uint32_t>(50)));
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(276)));
    ctx.gpr[9] = (aot_mem.aot_direct_load32(ctx.gpr[23] + static_cast<std::uint32_t>(72)));
    ctx.gpr[2] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(272)));
    ctx.gpr[10] = (ctx.gpr[8] << 6u);
    ctx.gpr[10] = (ctx.gpr[10] + aot_gpr_16);
    ctx.gpr[8] = (ctx.gpr[2] << 5u);
    ctx.gpr[2] = (ctx.gpr[8] + ctx.gpr[11]);
    ctx.gpr[8] = (ctx.gpr[9] | 0u);
    ctx.gpr[9] = (aot_gpr_16 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    aot_gpr_31 = (0x088B4948u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0043_entry, 43u, 75u, 0x088B08ACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088B4948u) goto L_088B4948;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B4948:
    aot_gpr_4 = (ctx.gpr[30] | ctx.gpr[19]);
    aot_gpr_4 = (aot_gpr_4 | ctx.gpr[2]);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088B4960;
      }
      goto L_088B4958;
    }
L_088B4958:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088B4F74;
      }
      goto L_088B4960;
    }
L_088B4960:
    aot_gpr_4 = (0u | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(260), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(276)));
    aot_gpr_5 = (0u | 0u);
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(252), aot_gpr_5);
      if (branch_taken) {
          goto L_088B4C28;
      }
      goto L_088B497C;
    }
L_088B497C:
    ctx.gpr[21] = (aot_gpr_29 + static_cast<std::uint32_t>(80));
    aot_gpr_4 = (2236u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-27840));
    ctx.gpr[20] = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    aot_gpr_5 = (2236u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(264), aot_gpr_4);
    aot_gpr_4 = (aot_gpr_5 + static_cast<std::uint32_t>(-28352));
    aot_gpr_5 = (19224u << 16u);
    aot_gpr_5 = (aot_gpr_5 | 38528u);
    ctx.fpr[20] = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_5 = (aot_gpr_16 + static_cast<std::uint32_t>(16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(268), aot_gpr_4);
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(32));
    aot_gpr_6 = (aot_gpr_16 + static_cast<std::uint32_t>(44));
    ctx.gpr[7] = (aot_gpr_16 + static_cast<std::uint32_t>(46));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[19] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(292)));
    ctx.gpr[22] = (aot_gpr_16 | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[9]);
    aot_gpr_5 = (ctx.gpr[8] + aot_gpr_5);
    aot_gpr_4 = (ctx.gpr[8] + aot_gpr_4);
    aot_gpr_6 = (ctx.gpr[8] + aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(248), aot_gpr_5);
    aot_gpr_5 = (ctx.gpr[8] + ctx.gpr[7]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(244), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(236), aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(240), aot_gpr_5);
    goto L_088B49EC;
L_088B49EC:
    ctx.gpr[18] = (0u | 0u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < ctx.fpr[20])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(236)));
      if (branch_taken) {
          goto L_088B4AC8;
      }
      goto L_088B4A08;
    }
L_088B4A08:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(248)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(112));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(8)));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(aot_fpr_14));
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(244)));
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[8]);
    aot_fpr_15 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(aot_fpr_15));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_6 = (ctx.gpr[19] + static_cast<std::uint32_t>(16));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_14));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(4), ctx.gpr[8]);
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(8), aot_gpr_5);
    aot_gpr_5 = (ctx.gpr[19] + static_cast<std::uint32_t>(28));
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(1)));
    aot_mem.aot_direct_store8(aot_gpr_5 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_6));
    aot_mem.aot_direct_store8(aot_gpr_5 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(240)));
    aot_gpr_6 = (ctx.gpr[19] + static_cast<std::uint32_t>(30));
    ctx.gpr[7] = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(1)));
    aot_mem.aot_direct_store8(aot_gpr_6 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_direct_store8(aot_gpr_6 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(aot_gpr_5));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[18] = (0u | 1u);
    goto L_088B4AC8;
L_088B4AC8:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(aot_fpr_14));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(80), aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(84), aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(88), ctx.gpr[7]);
    aot_fpr_15 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(aot_fpr_15));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(1)));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(96), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(224)));
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088B4B5C;
      }
      goto L_088B4B18;
    }
L_088B4B18:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(268)));
    goto L_088B4B1C;
L_088B4B1C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[23] + static_cast<std::uint32_t>(56)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 << 5u);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    aot_gpr_6 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x088B4B3Cu);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0043_entry, 43u, 159u, 0x088B1028u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088B4B3Cu) goto L_088B4B3C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B4B3C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_088B4B48;
      }
      goto L_088B4B44;
    }
L_088B4B44:
    ctx.gpr[18] = (0u | 1u);
    goto L_088B4B48;
L_088B4B48:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(224)));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088B4B1C;
      }
      goto L_088B4B5C;
    }
L_088B4B5C:
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[30]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088B4BB4;
      }
      goto L_088B4B6C;
    }
L_088B4B6C:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(264)));
    goto L_088B4B70;
L_088B4B70:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[23] + static_cast<std::uint32_t>(64)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 << 4u);
    aot_gpr_6 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    aot_gpr_6 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x088B4B98u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0043_entry, 43u, 239u, 0x088B1C50u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088B4B98u) goto L_088B4B98;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B4B98:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_088B4BA4;
      }
      goto L_088B4BA0;
    }
L_088B4BA0:
    ctx.gpr[18] = (0u | 1u);
    goto L_088B4BA4;
L_088B4BA4:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[30]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088B4B70;
      }
      goto L_088B4BB4;
    }
L_088B4BB4:
    if (ctx.gpr[18] == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(252)));
        goto L_088B4BE0;
    }
    goto L_088B4BBC;
L_088B4BBC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(260)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(32));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 32 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(260), aot_gpr_4);
      if (branch_taken) {
          goto L_088B4BDC;
      }
      goto L_088B4BD4;
    }
L_088B4BD4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088B4C28;
      }
      goto L_088B4BDC;
    }
L_088B4BDC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(252)));
    goto L_088B4BE0;
L_088B4BE0:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(64));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(248)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(252), aot_gpr_4);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(236)));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(244)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(64));
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(240)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(64));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(248), aot_gpr_5);
    aot_gpr_5 = (aot_gpr_6 + static_cast<std::uint32_t>(64));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(276)));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(64));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(244), ctx.gpr[7]);
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(aot_gpr_6) ? 1u : 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(236), aot_gpr_5);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(240), ctx.gpr[8]);
      if (branch_taken) {
          goto L_088B49EC;
      }
      goto L_088B4C28;
    }
L_088B4C28:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(260)));
    ctx.gpr[18] = (0u | 0u);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[17] = (aot_gpr_29 + static_cast<std::uint32_t>(128));
      if (branch_taken) {
          goto L_088B4D08;
      }
      goto L_088B4C3C;
    }
L_088B4C3C:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(292)));
    ctx.gpr[19] = (aot_gpr_29 + static_cast<std::uint32_t>(144));
    aot_gpr_4 = (0u | 0u);
    aot_gpr_16 = (aot_gpr_16 + aot_gpr_4);
    ctx.gpr[20] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(256)));
    ctx.gpr[21] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(260)));
    goto L_088B4C54;
L_088B4C54:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x088B4C7Cu);
    aot_gpr_6 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0043_entry, 43u, 73u, 0x088B086Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088B4C7Cu) goto L_088B4C7C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B4C7C:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(aot_fpr_14));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(8), aot_gpr_6);
    aot_fpr_15 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(16)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(aot_fpr_15));
    aot_fpr_15 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(20)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(aot_fpr_15));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(24)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(aot_fpr_12));
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(16);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(32);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<7u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vtfm_ct<0u, 36u, 7u, 3u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(16));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(aot_fpr_14));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_088B4C54;
      }
      goto L_088B4D08;
    }
L_088B4D08:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(284)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088B4D1C;
      }
      goto L_088B4D14;
    }
L_088B4D14:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(260)));
      if (branch_taken) {
          goto L_088B4F74;
      }
      goto L_088B4D1C;
    }
L_088B4D1C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(272)));
    aot_gpr_6 = (0u | 0u);
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_6) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(232), aot_gpr_6);
      if (branch_taken) {
          goto L_088B4E80;
      }
      goto L_088B4D30;
    }
L_088B4D30:
    aot_gpr_5 = (2236u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-27840));
    ctx.gpr[22] = (0u | 1u);
    aot_gpr_6 = (2236u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(264), aot_gpr_5);
    aot_gpr_5 = (aot_gpr_6 + static_cast<std::uint32_t>(-28352));
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[19] = (aot_gpr_4 + ctx.gpr[21]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(268), aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(288)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(280)));
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[21] = (ctx.gpr[21] + aot_gpr_5);
    ctx.gpr[20] = (aot_gpr_4 + ctx.gpr[20]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(228), aot_gpr_4);
    goto L_088B4D6C;
L_088B4D6C:
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(232)));
    ctx.gpr[18] = (aot_gpr_29 + ctx.gpr[18]);
    aot_mem.aot_direct_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(228)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_088B4DA0;
      }
      goto L_088B4D94;
    }
L_088B4D94:
    aot_mem.aot_direct_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[22]));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_088B4DA0;
L_088B4DA0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(224)));
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088B4DF8;
      }
      goto L_088B4DB4;
    }
L_088B4DB4:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(268)));
    goto L_088B4DB8;
L_088B4DB8:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[23] + static_cast<std::uint32_t>(56)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 << 5u);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    aot_gpr_6 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x088B4DD8u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    ctx.pc = 0x088B1554u;
    ([&]() { AOT_REGCACHE_SYNC_OUT(); rt.invoke_native_fast_path(0x088B1554u, ctx); AOT_REGCACHE_SYNC_IN(); }());
    if (ctx.pc == 0x088B4DD8u) goto L_088B4DD8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B4DD8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_088B4DE4;
      }
      goto L_088B4DE0;
    }
L_088B4DE0:
    aot_mem.aot_direct_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[22]));
    goto L_088B4DE4;
L_088B4DE4:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(224)));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088B4DB8;
      }
      goto L_088B4DF8;
    }
L_088B4DF8:
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[30]) ? 1u : 0u);
    if (aot_gpr_4 == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(232)));
        goto L_088B4E54;
    }
    goto L_088B4E08;
L_088B4E08:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(264)));
    goto L_088B4E0C;
L_088B4E0C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[23] + static_cast<std::uint32_t>(64)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 << 4u);
    aot_gpr_6 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    aot_gpr_6 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x088B4E34u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0043_entry, 43u, 382u, 0x088B3060u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088B4E34u) goto L_088B4E34;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B4E34:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_088B4E40;
      }
      goto L_088B4E3C;
    }
L_088B4E3C:
    aot_mem.aot_direct_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[22]));
    goto L_088B4E40;
L_088B4E40:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[30]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088B4E0C;
      }
      goto L_088B4E50;
    }
L_088B4E50:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(232)));
    goto L_088B4E54;
L_088B4E54:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(228)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(32));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(232), aot_gpr_4);
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(32));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(272)));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(aot_gpr_6) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(228), aot_gpr_5);
      if (branch_taken) {
          goto L_088B4D6C;
      }
      goto L_088B4E80;
    }
L_088B4E80:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(272)));
    aot_gpr_16 = (0u | 0u);
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_16) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[18] = (aot_gpr_29 + static_cast<std::uint32_t>(160));
      if (branch_taken) {
          goto L_088B4F70;
      }
      goto L_088B4E94;
    }
L_088B4E94:
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(284)));
    ctx.gpr[19] = (aot_gpr_29 + static_cast<std::uint32_t>(176));
    aot_gpr_4 = (0u | 0u);
    ctx.gpr[17] = (ctx.gpr[17] + aot_gpr_4);
    ctx.gpr[20] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(256)));
    ctx.gpr[21] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(272)));
    goto L_088B4EAC;
L_088B4EAC:
    aot_gpr_4 = (aot_gpr_29 + aot_gpr_16);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088B4F60;
      }
      goto L_088B4EBC;
    }
L_088B4EBC:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(176), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(180), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x088B4EE4u);
    aot_gpr_6 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0043_entry, 43u, 73u, 0x088B086Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088B4EE4u) goto L_088B4EE4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B4EE4:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(aot_fpr_14));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), aot_gpr_6);
    aot_fpr_15 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(176), std::bit_cast<std::uint32_t>(aot_fpr_15));
    aot_fpr_15 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(180), std::bit_cast<std::uint32_t>(aot_fpr_15));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(aot_fpr_12));
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(16);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(32);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<7u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vtfm_ct<0u, 36u, 7u, 3u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(aot_fpr_14));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    goto L_088B4F60;
L_088B4F60:
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_16) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_088B4EAC;
      }
      goto L_088B4F70;
    }
L_088B4F70:
    ctx.gpr[2] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(260)));
    goto L_088B4F74;
L_088B4F74:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(296)));
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(300)));
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(304)));
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(308)));
    ctx.gpr[19] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(312)));
    ctx.gpr[20] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(316)));
    ctx.gpr[21] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(320)));
    ctx.gpr[22] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(324)));
    ctx.gpr[23] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(328)));
    ctx.gpr[30] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(332)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(336)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(352));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088B4FA8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    aot_gpr_31 = (0x088B4FBCu);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58974, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088B4FBCu) goto L_088B4FBC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B4FBC:
    aot_gpr_6 = (1217u << 16u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    aot_gpr_31 = (0x088B4FD0u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(7607));
    goto L_088B55E4;
L_088B4FD0:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088B4FE0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-656));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(608), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(612), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    aot_gpr_16 = (aot_gpr_5 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(616), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(620), ctx.gpr[19]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(624), ctx.gpr[20]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(628), ctx.gpr[21]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(632), ctx.gpr[22]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(636), ctx.gpr[23]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(640), aot_gpr_31);
    aot_gpr_31 = (0x088B5018u);
    ctx.gpr[23] = (0u | 0u);
    ctx.pc = 0x08B7366Cu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B5018:
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[22]) < 0;
      if (branch_taken) {
          goto L_088B5038;
      }
      goto L_088B5024;
    }
L_088B5024:
    ctx.gpr[21] = (aot_gpr_29 + static_cast<std::uint32_t>(256));
    ctx.gpr[20] = (0u | 4096u);
    ctx.gpr[19] = (ctx.gpr[28] + static_cast<std::uint32_t>(-24752));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (aot_gpr_29 + static_cast<std::uint32_t>(344));
      if (branch_taken) {
          goto L_088B5040;
      }
      goto L_088B5038;
    }
L_088B5038:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088B50B8;
      }
      goto L_088B5040;
    }
L_088B5040:
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    aot_gpr_31 = (0x088B504Cu);
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    ctx.pc = 0x08B7367Cu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B504C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
      if (branch_taken) {
          goto L_088B506C;
      }
      goto L_088B5054;
    }
L_088B5054:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(256)));
    aot_gpr_4 = (aot_gpr_4 & 61440u);
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[20];
      if (branch_taken) {
          goto L_088B507C;
      }
      goto L_088B5064;
    }
L_088B5064:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088B50AC;
      }
      goto L_088B506C;
    }
L_088B506C:
    aot_gpr_31 = (0x088B5074u);
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    ctx.pc = 0x08B73684u;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B5074:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[23] | 0u);
      if (branch_taken) {
          goto L_088B50B8;
      }
      goto L_088B507C;
    }
L_088B507C:
    { const bool branch_taken = aot_gpr_16 == 0u;
      if (branch_taken) {
          goto L_088B50B0;
      }
      goto L_088B5084;
    }
L_088B5084:
    aot_gpr_4 = (aot_gpr_29 | 0u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    aot_gpr_6 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088B5098u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088B5098u) goto L_088B5098;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B5098:
    aot_gpr_4 = (aot_gpr_29 | 0u);
    aot_gpr_31 = (0x088B50A4u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    goto L_088B4FE0;
L_088B50A4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[23] = (ctx.gpr[23] + ctx.gpr[2]);
      if (branch_taken) {
          goto L_088B50B0;
      }
      goto L_088B50AC;
    }
L_088B50AC:
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
    goto L_088B50B0;
L_088B50B0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088B5040;
      }
      goto L_088B50B8;
    }
L_088B50B8:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(608)));
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(612)));
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(616)));
    ctx.gpr[19] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(620)));
    ctx.gpr[20] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(624)));
    ctx.gpr[21] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(628)));
    ctx.gpr[22] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(632)));
    ctx.gpr[23] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(636)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(640)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(656));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088B50E4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-656));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(608), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(616), ctx.gpr[18]);
    aot_gpr_16 = (aot_gpr_6 | 0u);
    ctx.gpr[18] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(612), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(620), ctx.gpr[19]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(624), ctx.gpr[20]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(628), ctx.gpr[21]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(632), ctx.gpr[22]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(636), ctx.gpr[23]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(640), ctx.gpr[30]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(644), aot_gpr_31);
    aot_gpr_31 = (0x088B5120u);
    ctx.gpr[17] = (aot_gpr_5 | 0u);
    ctx.pc = 0x08B7366Cu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B5120:
    ctx.gpr[30] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[30]) < 0;
      if (branch_taken) {
          goto L_088B5144;
      }
      goto L_088B512C;
    }
L_088B512C:
    ctx.gpr[23] = (aot_gpr_29 + static_cast<std::uint32_t>(256));
    ctx.gpr[22] = (0u | 4096u);
    ctx.gpr[21] = (ctx.gpr[28] + static_cast<std::uint32_t>(-24752));
    ctx.gpr[20] = (aot_gpr_29 + static_cast<std::uint32_t>(344));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[28] + static_cast<std::uint32_t>(-24744));
      if (branch_taken) {
          goto L_088B514C;
      }
      goto L_088B5144;
    }
L_088B5144:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_088B5204;
      }
      goto L_088B514C;
    }
L_088B514C:
    aot_gpr_4 = (ctx.gpr[30] | 0u);
    aot_gpr_31 = (0x088B5158u);
    aot_gpr_5 = (ctx.gpr[23] | 0u);
    ctx.pc = 0x08B7367Cu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B5158:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
      if (branch_taken) {
          goto L_088B5178;
      }
      goto L_088B5160;
    }
L_088B5160:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(256)));
    aot_gpr_4 = (aot_gpr_4 & 61440u);
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[22];
      if (branch_taken) {
          goto L_088B5188;
      }
      goto L_088B5170;
    }
L_088B5170:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088B51BC;
      }
      goto L_088B5178;
    }
L_088B5178:
    aot_gpr_31 = (0x088B5180u);
    aot_gpr_4 = (ctx.gpr[30] | 0u);
    ctx.pc = 0x08B73684u;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B5180:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_088B5204;
      }
      goto L_088B5188;
    }
L_088B5188:
    { const bool branch_taken = aot_gpr_16 == 0u;
      if (branch_taken) {
          goto L_088B51FC;
      }
      goto L_088B5190;
    }
L_088B5190:
    aot_gpr_4 = (aot_gpr_29 | 0u);
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    aot_gpr_6 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x088B51A4u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088B51A4u) goto L_088B51A4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B51A4:
    aot_gpr_4 = (aot_gpr_29 | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088B51B4u);
    aot_gpr_6 = (aot_gpr_16 | 0u);
    goto L_088B50E4;
L_088B51B4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088B51FC;
      }
      goto L_088B51BC;
    }
L_088B51BC:
    aot_gpr_4 = (aot_gpr_29 | 0u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    aot_gpr_6 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x088B51D0u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088B51D0u) goto L_088B51D0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B51D0:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-24764)));
    jump_target = aot_gpr_5;
    aot_gpr_31 = (0x088B51DCu);
    aot_gpr_4 = (aot_gpr_29 | 0u);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088B51DCu) goto L_088B51DC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B51DC:
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(320)));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), aot_gpr_4);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(268)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(264)));
    aot_gpr_4 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), aot_gpr_4);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(12));
    goto L_088B51FC;
L_088B51FC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088B514C;
      }
      goto L_088B5204;
    }
L_088B5204:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(608)));
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(612)));
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(616)));
    ctx.gpr[19] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(620)));
    ctx.gpr[20] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(624)));
    ctx.gpr[21] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(628)));
    ctx.gpr[22] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(632)));
    ctx.gpr[23] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(636)));
    ctx.gpr[30] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(640)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(644)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(656));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088B5234:
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (0u | 0u);
    aot_gpr_5 = (ctx.gpr[9] + static_cast<std::uint32_t>(-1));
    aot_gpr_5 = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_5 = (0u | 0u);
      if (branch_taken) {
          goto L_088B5308;
      }
      goto L_088B524C;
    }
L_088B524C:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_gpr_6 = (ctx.gpr[7] | 0u);
    ctx.gpr[8] = (static_cast<std::int32_t>(aot_gpr_6) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[8] = (ctx.gpr[7] + ctx.gpr[7]);
      if (branch_taken) {
          goto L_088B52F8;
      }
      goto L_088B5260;
    }
L_088B5260:
    ctx.gpr[8] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] << 2u);
    goto L_088B5268;
L_088B5268:
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    ctx.gpr[11] = (ctx.gpr[9] + ctx.gpr[8]);
    ctx.gpr[9] = (ctx.gpr[9] + aot_gpr_5);
    ctx.gpr[10] = (aot_mem.aot_direct_load32(ctx.gpr[11] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (ctx.gpr[10] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_088B52E4;
      }
      goto L_088B5288;
    }
L_088B5288:
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[11] + static_cast<std::uint32_t>(4)));
    ctx.gpr[9] = (aot_mem.aot_direct_load32(ctx.gpr[9] + static_cast<std::uint32_t>(4)));
    ctx.gpr[3] = (aot_mem.aot_direct_load32(ctx.gpr[11] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(ctx.gpr[11] + static_cast<std::uint32_t>(4), ctx.gpr[9]);
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    ctx.gpr[11] = (ctx.gpr[9] + aot_gpr_5);
    ctx.gpr[11] = (aot_mem.aot_direct_load32(ctx.gpr[11] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[8]);
    aot_mem.aot_direct_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[11]);
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    ctx.gpr[11] = (ctx.gpr[9] + aot_gpr_5);
    ctx.gpr[11] = (aot_mem.aot_direct_load32(ctx.gpr[11] + static_cast<std::uint32_t>(8)));
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[8]);
    aot_mem.aot_direct_store32(ctx.gpr[9] + static_cast<std::uint32_t>(8), ctx.gpr[11]);
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    ctx.gpr[9] = (ctx.gpr[9] + aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[9] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    ctx.gpr[9] = (ctx.gpr[9] + aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[10]);
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    ctx.gpr[9] = (ctx.gpr[9] + aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[9] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    goto L_088B52E4;
L_088B52E4:
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(1));
    ctx.gpr[10] = (static_cast<std::int32_t>(aot_gpr_6) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_088B5268;
      }
      goto L_088B52F8;
    }
L_088B52F8:
    aot_gpr_6 = (ctx.gpr[9] + static_cast<std::uint32_t>(-1));
    aot_gpr_6 = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(aot_gpr_6) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 != 0u;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_088B524C;
      }
      goto L_088B5308;
    }
L_088B5308:
    jump_target = aot_gpr_31;
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088B5310:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (aot_gpr_4 | 0u);
    ctx.gpr[17] = (aot_gpr_5 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_31);
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_16 = (aot_gpr_6 | 0u);
      if (branch_taken) {
          goto L_088B538C;
      }
      goto L_088B5334;
    }
L_088B5334:
    ctx.gpr[17] = (ctx.gpr[28] + static_cast<std::uint32_t>(6040));
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x088B5344u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    goto L_088B4FE0;
L_088B5344:
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (2236u << 16u);
    aot_gpr_6 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-27648));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), aot_gpr_5);
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (aot_gpr_4 << 2u);
      if (branch_taken) {
          goto L_088B537C;
      }
      goto L_088B5368;
    }
L_088B5368:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-24756)));
    jump_target = aot_gpr_5;
    aot_gpr_31 = (0x088B5374u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088B5374u) goto L_088B5374;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B5374:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088B53AC;
      }
      goto L_088B537C;
    }
L_088B537C:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_31 = (0x088B538Cu);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B5814C, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[9], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088B538Cu) goto L_088B538C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B538C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-24768), ctx.gpr[17]);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x088B53A0u);
    aot_gpr_6 = (aot_gpr_16 | 0u);
    goto L_088B50E4;
L_088B53A0:
    aot_gpr_31 = (0x088B53A8u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    goto L_088B5234;
L_088B53A8:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    goto L_088B53AC;
L_088B53AC:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(12)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088B53C4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-24768)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_31);
    { const bool branch_taken = ctx.gpr[18] == 0u;
      if (branch_taken) {
          goto L_088B546C;
      }
      goto L_088B53E4;
    }
L_088B53E4:
    aot_gpr_16 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr_16 == 0u;
      if (branch_taken) {
          goto L_088B546C;
      }
      goto L_088B53F0;
    }
L_088B53F0:
    ctx.gpr[18] = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-24764)));
    jump_target = aot_gpr_5;
    aot_gpr_31 = (0x088B5400u);
    ctx.gpr[17] = (0u | 0u);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088B5400u) goto L_088B5400;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B5400:
    aot_gpr_5 = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088B546C;
      }
      goto L_088B540C;
    }
L_088B540C:
    aot_gpr_5 = (ctx.gpr[17] + ctx.gpr[18]);
    goto L_088B5410;
L_088B5410:
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 1u));
    aot_gpr_6 = (aot_gpr_6 >> 31u);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 1u));
    aot_gpr_6 = (aot_gpr_5 + aot_gpr_5);
    aot_gpr_6 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_6 = (aot_gpr_6 << 2u);
    ctx.gpr[7] = (aot_gpr_16 + aot_gpr_6);
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] == aot_gpr_4;
      if (branch_taken) {
          goto L_088B5454;
      }
      goto L_088B543C;
    }
L_088B543C:
    aot_gpr_6 = (aot_gpr_4 < ctx.gpr[7] ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 == 0u;
      if (branch_taken) {
          goto L_088B545C;
      }
      goto L_088B5448;
    }
L_088B5448:
    ctx.gpr[18] = (aot_gpr_5 | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
      if (branch_taken) {
          goto L_088B5464;
      }
      goto L_088B5454;
    }
L_088B5454:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_gpr_16 + aot_gpr_6);
      if (branch_taken) {
          goto L_088B5470;
      }
      goto L_088B545C;
    }
L_088B545C:
    ctx.gpr[17] = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    aot_gpr_5 = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    goto L_088B5464;
L_088B5464:
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_5 = (ctx.gpr[17] + ctx.gpr[18]);
      if (branch_taken) {
          goto L_088B5410;
      }
      goto L_088B546C;
    }
L_088B546C:
    ctx.gpr[2] = (0u | 0u);
    goto L_088B5470;
L_088B5470:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(12)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088B5488:
    jump_target = aot_gpr_31;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-24768)));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088B5490:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    aot_gpr_31 = (0x088B54A8u);
    aot_gpr_16 = (aot_gpr_5 | 0u);
    goto L_088B53C4;
L_088B54A8:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
      if (branch_taken) {
          goto L_088B54CC;
      }
      goto L_088B54B4;
    }
L_088B54B4:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (2232u << 16u);
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088B54CCu);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-22440));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088B54CCu) goto L_088B54CC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B54CC:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088B54E4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.gpr[19] = (2236u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[17] = (aot_gpr_5 | 0u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-22248));
    aot_gpr_16 = (aot_gpr_6 | 0u);
    ctx.gpr[18] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_31);
    aot_gpr_31 = (0x088B5518u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    goto L_088B5490;
L_088B5518:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_088B5538;
      }
      goto L_088B5520;
    }
L_088B5520:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088B5530u);
    aot_gpr_6 = (aot_gpr_16 | 0u);
    ctx.pc = 0x08B73694u;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B5530:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088B5548;
      }
      goto L_088B5538;
    }
L_088B5538:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088B5548u);
    aot_gpr_6 = (aot_gpr_16 | 0u);
    ctx.pc = 0x08B73694u;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B5548:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    ctx.gpr[19] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(12)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088B5564:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.gpr[19] = (2236u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[17] = (aot_gpr_5 | 0u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-22184));
    aot_gpr_16 = (aot_gpr_6 | 0u);
    ctx.gpr[18] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_31);
    aot_gpr_31 = (0x088B5598u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    goto L_088B5490;
L_088B5598:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_088B55B8;
      }
      goto L_088B55A0;
    }
L_088B55A0:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088B55B0u);
    aot_gpr_6 = (aot_gpr_16 | 0u);
    ctx.pc = 0x08B7364Cu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B55B0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088B55C8;
      }
      goto L_088B55B8;
    }
L_088B55B8:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088B55C8u);
    aot_gpr_6 = (aot_gpr_16 | 0u);
    ctx.pc = 0x08B7364Cu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B55C8:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    ctx.gpr[19] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(12)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088B55E4:
    ctx.gpr[8] = (40503u << 16u);
    ctx.gpr[9] = (aot_gpr_5 | 0u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(31161));
    ctx.gpr[10] = (ctx.gpr[9] < static_cast<std::uint32_t>(12) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[7] = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_088B5720;
      }
      goto L_088B55FC;
    }
L_088B55FC:
    ctx.gpr[10] = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(1)));
    ctx.gpr[11] = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (ctx.gpr[10] << 8u);
    ctx.gpr[2] = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(2)));
    ctx.gpr[10] = (ctx.gpr[11] + ctx.gpr[10]);
    ctx.gpr[11] = (ctx.gpr[2] << 16u);
    ctx.gpr[2] = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(3)));
    ctx.gpr[10] = (ctx.gpr[10] + ctx.gpr[11]);
    ctx.gpr[11] = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(5)));
    ctx.gpr[2] = (ctx.gpr[2] << 24u);
    ctx.gpr[3] = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    ctx.gpr[10] = (ctx.gpr[10] + ctx.gpr[2]);
    ctx.gpr[11] = (ctx.gpr[11] << 8u);
    ctx.gpr[2] = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(6)));
    ctx.gpr[7] = (ctx.gpr[10] + ctx.gpr[7]);
    ctx.gpr[10] = (ctx.gpr[3] + ctx.gpr[11]);
    ctx.gpr[11] = (ctx.gpr[2] << 16u);
    ctx.gpr[2] = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(7)));
    ctx.gpr[10] = (ctx.gpr[10] + ctx.gpr[11]);
    ctx.gpr[11] = (ctx.gpr[2] << 24u);
    ctx.gpr[2] = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(9)));
    ctx.gpr[10] = (ctx.gpr[10] + ctx.gpr[11]);
    ctx.gpr[3] = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    ctx.gpr[8] = (ctx.gpr[10] + ctx.gpr[8]);
    ctx.gpr[10] = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(10)));
    ctx.gpr[11] = (ctx.gpr[2] << 8u);
    ctx.gpr[11] = (ctx.gpr[3] + ctx.gpr[11]);
    ctx.gpr[10] = (ctx.gpr[10] << 16u);
    ctx.gpr[2] = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(11)));
    ctx.gpr[10] = (ctx.gpr[11] + ctx.gpr[10]);
    ctx.gpr[11] = (ctx.gpr[2] << 24u);
    ctx.gpr[10] = (ctx.gpr[10] + ctx.gpr[11]);
    aot_gpr_6 = (ctx.gpr[10] + aot_gpr_6);
    ctx.gpr[7] = (ctx.gpr[7] - ctx.gpr[8]);
    ctx.gpr[7] = (ctx.gpr[7] - aot_gpr_6);
    ctx.gpr[10] = (aot_gpr_6 >> 13u);
    ctx.gpr[7] = (ctx.gpr[7] ^ ctx.gpr[10]);
    ctx.gpr[8] = (ctx.gpr[8] - aot_gpr_6);
    ctx.gpr[8] = (ctx.gpr[8] - ctx.gpr[7]);
    ctx.gpr[10] = (ctx.gpr[7] << 8u);
    ctx.gpr[8] = (ctx.gpr[8] ^ ctx.gpr[10]);
    aot_gpr_6 = (aot_gpr_6 - ctx.gpr[7]);
    aot_gpr_6 = (aot_gpr_6 - ctx.gpr[8]);
    ctx.gpr[10] = (ctx.gpr[8] >> 13u);
    aot_gpr_6 = (aot_gpr_6 ^ ctx.gpr[10]);
    ctx.gpr[7] = (ctx.gpr[7] - ctx.gpr[8]);
    ctx.gpr[7] = (ctx.gpr[7] - aot_gpr_6);
    ctx.gpr[10] = (aot_gpr_6 >> 12u);
    ctx.gpr[7] = (ctx.gpr[7] ^ ctx.gpr[10]);
    ctx.gpr[8] = (ctx.gpr[8] - aot_gpr_6);
    ctx.gpr[8] = (ctx.gpr[8] - ctx.gpr[7]);
    ctx.gpr[10] = (ctx.gpr[7] << 16u);
    ctx.gpr[8] = (ctx.gpr[8] ^ ctx.gpr[10]);
    aot_gpr_6 = (aot_gpr_6 - ctx.gpr[7]);
    aot_gpr_6 = (aot_gpr_6 - ctx.gpr[8]);
    ctx.gpr[10] = (ctx.gpr[8] >> 5u);
    aot_gpr_6 = (aot_gpr_6 ^ ctx.gpr[10]);
    ctx.gpr[7] = (ctx.gpr[7] - ctx.gpr[8]);
    ctx.gpr[7] = (ctx.gpr[7] - aot_gpr_6);
    ctx.gpr[10] = (aot_gpr_6 >> 3u);
    ctx.gpr[7] = (ctx.gpr[7] ^ ctx.gpr[10]);
    ctx.gpr[8] = (ctx.gpr[8] - aot_gpr_6);
    ctx.gpr[8] = (ctx.gpr[8] - ctx.gpr[7]);
    ctx.gpr[10] = (ctx.gpr[7] << 10u);
    ctx.gpr[8] = (ctx.gpr[8] ^ ctx.gpr[10]);
    aot_gpr_6 = (aot_gpr_6 - ctx.gpr[7]);
    aot_gpr_6 = (aot_gpr_6 - ctx.gpr[8]);
    ctx.gpr[10] = (ctx.gpr[8] >> 15u);
    aot_gpr_6 = (aot_gpr_6 ^ ctx.gpr[10]);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(-12));
    ctx.gpr[10] = (ctx.gpr[9] < static_cast<std::uint32_t>(12) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] == 0u;
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_088B55FC;
      }
      goto L_088B5720;
    }
L_088B5720:
    aot_gpr_6 = (aot_gpr_6 + aot_gpr_5);
    aot_gpr_5 = (ctx.gpr[9] + static_cast<std::uint32_t>(-1));
    ctx.gpr[9] = (aot_gpr_5 < static_cast<std::uint32_t>(11) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[9] = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_088B59C0;
      }
      goto L_088B5734;
    }
L_088B5734:
    ctx.gpr[9] = (ctx.gpr[9] << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[9]);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-22408)));
    jump_target = ctx.gpr[1];
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088B574C:
    ctx.gpr[11] = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[11] + static_cast<std::uint32_t>(10)));
    ctx.gpr[12] = (ctx.gpr[8] | 0u);
    aot_gpr_4 = (aot_gpr_4 << 24u);
    ctx.gpr[3] = (aot_gpr_6 + aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[11] + static_cast<std::uint32_t>(1)));
    ctx.gpr[9] = (aot_mem.aot_direct_load8(ctx.gpr[11] + static_cast<std::uint32_t>(2)));
    aot_gpr_6 = (aot_mem.aot_direct_load8(ctx.gpr[11] + static_cast<std::uint32_t>(3)));
    ctx.gpr[10] = (aot_mem.aot_direct_load8(ctx.gpr[11] + static_cast<std::uint32_t>(5)));
    ctx.gpr[8] = (aot_mem.aot_direct_load8(ctx.gpr[11] + static_cast<std::uint32_t>(4)));
    ctx.gpr[13] = (aot_gpr_6 << 24u);
    ctx.gpr[2] = (aot_mem.aot_direct_load8(ctx.gpr[11] + static_cast<std::uint32_t>(6)));
    aot_gpr_6 = (aot_mem.aot_direct_load8(ctx.gpr[11] + static_cast<std::uint32_t>(7)));
    ctx.gpr[14] = (aot_mem.aot_direct_load8(ctx.gpr[11] + static_cast<std::uint32_t>(9)));
    ctx.gpr[15] = (aot_gpr_6 << 24u);
    ctx.gpr[11] = (aot_mem.aot_direct_load8(ctx.gpr[11] + static_cast<std::uint32_t>(8)));
    aot_gpr_6 = (ctx.gpr[14] << 16u);
    ctx.gpr[3] = (ctx.gpr[3] + aot_gpr_6);
    aot_gpr_6 = (ctx.gpr[11] << 8u);
    aot_gpr_4 = (aot_gpr_4 << 8u);
    ctx.gpr[9] = (ctx.gpr[9] << 16u);
    ctx.gpr[10] = (ctx.gpr[10] << 8u);
    ctx.gpr[2] = (ctx.gpr[2] << 16u);
    ctx.gpr[11] = (ctx.gpr[12] + ctx.gpr[15]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[13]);
      if (branch_taken) {
          goto L_088B580C;
      }
      goto L_088B57B4;
    }
L_088B57B4:
    ctx.gpr[11] = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[11] + static_cast<std::uint32_t>(1)));
    ctx.gpr[12] = (ctx.gpr[8] | 0u);
    ctx.gpr[9] = (aot_mem.aot_direct_load8(ctx.gpr[11] + static_cast<std::uint32_t>(2)));
    ctx.gpr[8] = (aot_mem.aot_direct_load8(ctx.gpr[11] + static_cast<std::uint32_t>(3)));
    ctx.gpr[10] = (aot_mem.aot_direct_load8(ctx.gpr[11] + static_cast<std::uint32_t>(5)));
    ctx.gpr[13] = (ctx.gpr[8] << 24u);
    ctx.gpr[8] = (aot_mem.aot_direct_load8(ctx.gpr[11] + static_cast<std::uint32_t>(4)));
    ctx.gpr[2] = (aot_mem.aot_direct_load8(ctx.gpr[11] + static_cast<std::uint32_t>(6)));
    ctx.gpr[3] = (aot_mem.aot_direct_load8(ctx.gpr[11] + static_cast<std::uint32_t>(7)));
    ctx.gpr[14] = (aot_mem.aot_direct_load8(ctx.gpr[11] + static_cast<std::uint32_t>(9)));
    ctx.gpr[15] = (ctx.gpr[3] << 24u);
    ctx.gpr[11] = (aot_mem.aot_direct_load8(ctx.gpr[11] + static_cast<std::uint32_t>(8)));
    ctx.gpr[3] = (ctx.gpr[14] << 16u);
    ctx.gpr[3] = (aot_gpr_6 + ctx.gpr[3]);
    aot_gpr_6 = (ctx.gpr[11] << 8u);
    aot_gpr_4 = (aot_gpr_4 << 8u);
    ctx.gpr[9] = (ctx.gpr[9] << 16u);
    ctx.gpr[10] = (ctx.gpr[10] << 8u);
    ctx.gpr[2] = (ctx.gpr[2] << 16u);
    ctx.gpr[11] = (ctx.gpr[12] + ctx.gpr[15]);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[13]);
    goto L_088B580C;
L_088B580C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_6 = (ctx.gpr[3] + aot_gpr_6);
      if (branch_taken) {
          goto L_088B5864;
      }
      goto L_088B5814;
    }
L_088B5814:
    ctx.gpr[11] = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[11] + static_cast<std::uint32_t>(1)));
    ctx.gpr[3] = (ctx.gpr[8] | 0u);
    ctx.gpr[9] = (aot_mem.aot_direct_load8(ctx.gpr[11] + static_cast<std::uint32_t>(2)));
    ctx.gpr[8] = (aot_mem.aot_direct_load8(ctx.gpr[11] + static_cast<std::uint32_t>(3)));
    ctx.gpr[10] = (aot_mem.aot_direct_load8(ctx.gpr[11] + static_cast<std::uint32_t>(5)));
    ctx.gpr[12] = (ctx.gpr[8] << 24u);
    ctx.gpr[8] = (aot_mem.aot_direct_load8(ctx.gpr[11] + static_cast<std::uint32_t>(4)));
    ctx.gpr[2] = (aot_mem.aot_direct_load8(ctx.gpr[11] + static_cast<std::uint32_t>(6)));
    ctx.gpr[13] = (aot_mem.aot_direct_load8(ctx.gpr[11] + static_cast<std::uint32_t>(7)));
    ctx.gpr[11] = (aot_mem.aot_direct_load8(ctx.gpr[11] + static_cast<std::uint32_t>(8)));
    ctx.gpr[13] = (ctx.gpr[13] << 24u);
    ctx.gpr[11] = (ctx.gpr[11] << 8u);
    aot_gpr_6 = (aot_gpr_6 + ctx.gpr[11]);
    aot_gpr_4 = (aot_gpr_4 << 8u);
    ctx.gpr[9] = (ctx.gpr[9] << 16u);
    ctx.gpr[10] = (ctx.gpr[10] << 8u);
    ctx.gpr[2] = (ctx.gpr[2] << 16u);
    ctx.gpr[11] = (ctx.gpr[3] + ctx.gpr[13]);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[12]);
    goto L_088B5864;
L_088B5864:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088B58B0;
      }
      goto L_088B586C;
    }
L_088B586C:
    ctx.gpr[10] = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[10] + static_cast<std::uint32_t>(1)));
    ctx.gpr[11] = (ctx.gpr[8] | 0u);
    ctx.gpr[9] = (aot_mem.aot_direct_load8(ctx.gpr[10] + static_cast<std::uint32_t>(2)));
    ctx.gpr[8] = (aot_mem.aot_direct_load8(ctx.gpr[10] + static_cast<std::uint32_t>(3)));
    ctx.gpr[2] = (aot_mem.aot_direct_load8(ctx.gpr[10] + static_cast<std::uint32_t>(5)));
    ctx.gpr[3] = (ctx.gpr[8] << 24u);
    ctx.gpr[8] = (aot_mem.aot_direct_load8(ctx.gpr[10] + static_cast<std::uint32_t>(4)));
    ctx.gpr[12] = (aot_mem.aot_direct_load8(ctx.gpr[10] + static_cast<std::uint32_t>(6)));
    ctx.gpr[13] = (aot_mem.aot_direct_load8(ctx.gpr[10] + static_cast<std::uint32_t>(7)));
    ctx.gpr[10] = (ctx.gpr[2] << 8u);
    ctx.gpr[2] = (ctx.gpr[12] << 16u);
    ctx.gpr[12] = (ctx.gpr[13] << 24u);
    aot_gpr_4 = (aot_gpr_4 << 8u);
    ctx.gpr[9] = (ctx.gpr[9] << 16u);
    ctx.gpr[11] = (ctx.gpr[11] + ctx.gpr[12]);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[3]);
    goto L_088B58B0;
L_088B58B0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[11] + ctx.gpr[2]);
      if (branch_taken) {
          goto L_088B58F4;
      }
      goto L_088B58B8;
    }
L_088B58B8:
    ctx.gpr[10] = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[10] + static_cast<std::uint32_t>(1)));
    ctx.gpr[2] = (ctx.gpr[8] | 0u);
    ctx.gpr[9] = (aot_mem.aot_direct_load8(ctx.gpr[10] + static_cast<std::uint32_t>(2)));
    ctx.gpr[8] = (aot_mem.aot_direct_load8(ctx.gpr[10] + static_cast<std::uint32_t>(3)));
    ctx.gpr[3] = (aot_mem.aot_direct_load8(ctx.gpr[10] + static_cast<std::uint32_t>(5)));
    ctx.gpr[11] = (ctx.gpr[8] << 24u);
    ctx.gpr[12] = (aot_mem.aot_direct_load8(ctx.gpr[10] + static_cast<std::uint32_t>(6)));
    ctx.gpr[8] = (aot_mem.aot_direct_load8(ctx.gpr[10] + static_cast<std::uint32_t>(4)));
    ctx.gpr[10] = (ctx.gpr[3] << 8u);
    ctx.gpr[3] = (ctx.gpr[12] << 16u);
    aot_gpr_4 = (aot_gpr_4 << 8u);
    ctx.gpr[9] = (ctx.gpr[9] << 16u);
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[3]);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[11]);
    goto L_088B58F4;
L_088B58F4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[10] = (ctx.gpr[2] + ctx.gpr[10]);
      if (branch_taken) {
          goto L_088B5930;
      }
      goto L_088B58FC;
    }
L_088B58FC:
    ctx.gpr[10] = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[10] + static_cast<std::uint32_t>(1)));
    ctx.gpr[11] = (ctx.gpr[8] | 0u);
    ctx.gpr[9] = (aot_mem.aot_direct_load8(ctx.gpr[10] + static_cast<std::uint32_t>(2)));
    ctx.gpr[8] = (aot_mem.aot_direct_load8(ctx.gpr[10] + static_cast<std::uint32_t>(3)));
    ctx.gpr[2] = (aot_mem.aot_direct_load8(ctx.gpr[10] + static_cast<std::uint32_t>(5)));
    ctx.gpr[3] = (ctx.gpr[8] << 24u);
    ctx.gpr[8] = (aot_mem.aot_direct_load8(ctx.gpr[10] + static_cast<std::uint32_t>(4)));
    ctx.gpr[10] = (ctx.gpr[2] << 8u);
    aot_gpr_4 = (aot_gpr_4 << 8u);
    ctx.gpr[9] = (ctx.gpr[9] << 16u);
    ctx.gpr[10] = (ctx.gpr[11] + ctx.gpr[10]);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[3]);
    goto L_088B5930;
L_088B5930:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (ctx.gpr[10] + ctx.gpr[8]);
      if (branch_taken) {
          goto L_088B5960;
      }
      goto L_088B5938;
    }
L_088B5938:
    ctx.gpr[10] = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[10] + static_cast<std::uint32_t>(1)));
    ctx.gpr[9] = (aot_mem.aot_direct_load8(ctx.gpr[10] + static_cast<std::uint32_t>(2)));
    ctx.gpr[11] = (aot_mem.aot_direct_load8(ctx.gpr[10] + static_cast<std::uint32_t>(3)));
    ctx.gpr[10] = (aot_mem.aot_direct_load8(ctx.gpr[10] + static_cast<std::uint32_t>(4)));
    ctx.gpr[11] = (ctx.gpr[11] << 24u);
    aot_gpr_4 = (aot_gpr_4 << 8u);
    ctx.gpr[9] = (ctx.gpr[9] << 16u);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[10]);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[11]);
    goto L_088B5960;
L_088B5960:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088B5984;
      }
      goto L_088B5968;
    }
L_088B5968:
    ctx.gpr[9] = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(1)));
    ctx.gpr[10] = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(2)));
    ctx.gpr[11] = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(3)));
    aot_gpr_4 = (ctx.gpr[9] << 8u);
    ctx.gpr[9] = (ctx.gpr[10] << 16u);
    ctx.gpr[10] = (ctx.gpr[11] << 24u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[10]);
    goto L_088B5984;
L_088B5984:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[9] = (ctx.gpr[7] + ctx.gpr[9]);
      if (branch_taken) {
          goto L_088B59A0;
      }
      goto L_088B598C;
    }
L_088B598C:
    ctx.gpr[9] = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(1)));
    ctx.gpr[10] = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(2)));
    aot_gpr_4 = (ctx.gpr[9] << 8u);
    ctx.gpr[9] = (ctx.gpr[10] << 16u);
    ctx.gpr[9] = (ctx.gpr[7] + ctx.gpr[9]);
    goto L_088B59A0;
L_088B59A0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (ctx.gpr[9] + aot_gpr_4);
      if (branch_taken) {
          goto L_088B59B4;
      }
      goto L_088B59A8;
    }
L_088B59A8:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(1)));
    aot_gpr_4 = (aot_gpr_4 << 8u);
    aot_gpr_4 = (ctx.gpr[7] + aot_gpr_4);
    goto L_088B59B4;
L_088B59B4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (aot_gpr_4 + aot_gpr_5);
      if (branch_taken) {
          goto L_088B59C0;
      }
      goto L_088B59BC;
    }
L_088B59BC:
    ctx.gpr[7] = (ctx.gpr[7] + aot_gpr_5);
    goto L_088B59C0;
L_088B59C0:
    aot_gpr_4 = (ctx.gpr[7] - ctx.gpr[8]);
    aot_gpr_4 = (aot_gpr_4 - aot_gpr_6);
    aot_gpr_5 = (aot_gpr_6 >> 13u);
    aot_gpr_4 = (aot_gpr_4 ^ aot_gpr_5);
    aot_gpr_5 = (ctx.gpr[8] - aot_gpr_6);
    aot_gpr_5 = (aot_gpr_5 - aot_gpr_4);
    ctx.gpr[7] = (aot_gpr_4 << 8u);
    aot_gpr_5 = (aot_gpr_5 ^ ctx.gpr[7]);
    aot_gpr_6 = (aot_gpr_6 - aot_gpr_4);
    aot_gpr_6 = (aot_gpr_6 - aot_gpr_5);
    ctx.gpr[7] = (aot_gpr_5 >> 13u);
    aot_gpr_6 = (aot_gpr_6 ^ ctx.gpr[7]);
    aot_gpr_4 = (aot_gpr_4 - aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 - aot_gpr_6);
    ctx.gpr[7] = (aot_gpr_6 >> 12u);
    aot_gpr_4 = (aot_gpr_4 ^ ctx.gpr[7]);
    aot_gpr_5 = (aot_gpr_5 - aot_gpr_6);
    aot_gpr_5 = (aot_gpr_5 - aot_gpr_4);
    ctx.gpr[7] = (aot_gpr_4 << 16u);
    aot_gpr_5 = (aot_gpr_5 ^ ctx.gpr[7]);
    aot_gpr_6 = (aot_gpr_6 - aot_gpr_4);
    aot_gpr_6 = (aot_gpr_6 - aot_gpr_5);
    ctx.gpr[7] = (aot_gpr_5 >> 5u);
    aot_gpr_6 = (aot_gpr_6 ^ ctx.gpr[7]);
    aot_gpr_4 = (aot_gpr_4 - aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 - aot_gpr_6);
    ctx.gpr[7] = (aot_gpr_6 >> 3u);
    aot_gpr_4 = (aot_gpr_4 ^ ctx.gpr[7]);
    aot_gpr_5 = (aot_gpr_5 - aot_gpr_6);
    aot_gpr_5 = (aot_gpr_5 - aot_gpr_4);
    ctx.gpr[7] = (aot_gpr_4 << 10u);
    aot_gpr_5 = (aot_gpr_5 ^ ctx.gpr[7]);
    aot_gpr_4 = (aot_gpr_6 - aot_gpr_4);
    ctx.gpr[2] = (aot_gpr_4 - aot_gpr_5);
    aot_gpr_4 = (aot_gpr_5 >> 15u);
    jump_target = aot_gpr_31;
    ctx.gpr[2] = (ctx.gpr[2] ^ aot_gpr_4);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088B5A54:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(8))))));
    aot_gpr_5 = (aot_gpr_5 | 8u);
    jump_target = aot_gpr_31;
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(aot_gpr_5));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088B5A64:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_gpr_31);
    aot_gpr_31 = (0x088B5A8Cu);
    ctx.gpr[18] = (0u | 0u);
    goto L_088B6F30;
L_088B5A8C:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(8))))));
    aot_gpr_4 = (aot_gpr_4 & 2u);
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    aot_gpr_4 = (aot_gpr_4 >> 1u);
    if (ctx.gpr[17] != aot_gpr_4) {
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-24736), static_cast<std::uint8_t>(0u));
        goto L_088B5AB4;
    }
    goto L_088B5AA4;
L_088B5AA4:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-24736)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088B5B44;
      }
      goto L_088B5AB0;
    }
L_088B5AB0:
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-24736), static_cast<std::uint8_t>(0u));
    goto L_088B5AB4;
L_088B5AB4:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(8))))));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-3));
    aot_gpr_6 = (ctx.gpr[17] & 1u);
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_gpr_5 = (aot_gpr_6 << 1u);
    aot_gpr_4 = (aot_gpr_4 | aot_gpr_5);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(8))))));
    ctx.gpr[19] = (2237u << 16u);
    aot_gpr_4 = (aot_gpr_4 & 2u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-1008));
    aot_gpr_5 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    aot_gpr_31 = (0x088B5AF0u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0033_entry, 33u, 195u, 0x08888928u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088B5AF0u) goto L_088B5AF0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B5AF0:
    { const bool branch_taken = ctx.gpr[17] == 0u;
      if (branch_taken) {
          goto L_088B5B08;
      }
      goto L_088B5AF8;
    }
L_088B5AF8:
    aot_gpr_31 = (0x088B5B00u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_088B5D90;
L_088B5B00:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5576)));
      if (branch_taken) {
          goto L_088B5B34;
      }
      goto L_088B5B08;
    }
L_088B5B08:
    aot_gpr_31 = (0x088B5B10u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_088B5BEC;
L_088B5B10:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    aot_gpr_31 = (0x088B5B1Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_088B5BF8;
L_088B5B1C:
    { const bool branch_taken = ctx.gpr[20] == 0u;
      if (branch_taken) {
          goto L_088B5B30;
      }
      goto L_088B5B24;
    }
L_088B5B24:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x088B5B30u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0033_entry, 33u, 196u, 0x08888934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088B5B30u) goto L_088B5B30;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B5B30:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5576)));
    goto L_088B5B34;
L_088B5B34:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088B5B44;
      }
      goto L_088B5B3C;
    }
L_088B5B3C:
    aot_gpr_31 = (0x088B5B44u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0211_entry, 211u, 158u, 0x08B50A54u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088B5B44u) goto L_088B5B44;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B5B44:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(8))))));
    aot_gpr_4 = (aot_gpr_4 & 4u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088B5B7C;
      }
      goto L_088B5B54;
    }
L_088B5B54:
    aot_gpr_31 = (0x088B5B5Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_088B65A4;
L_088B5B5C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_088B5B6C;
      }
      goto L_088B5B64;
    }
L_088B5B64:
    aot_gpr_31 = (0x088B5B6Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_088B5BF8;
L_088B5B6C:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(8))))));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-5));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_088B5B7C;
L_088B5B7C:
    aot_gpr_31 = (0x088B5B84u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_088B5BEC;
L_088B5B84:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_088B5BA4;
      }
      goto L_088B5B8C;
    }
L_088B5B8C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(56)));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_088B5BA4;
      }
      goto L_088B5B9C;
    }
L_088B5B9C:
    aot_gpr_31 = (0x088B5BA4u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_088B68F4;
L_088B5BA4:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(56), 0u);
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    ctx.gpr[19] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(12)));
    ctx.gpr[20] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088B5BCC:
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(8))))));
    aot_gpr_5 = (aot_gpr_5 & 255u);
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-2));
    aot_gpr_6 = (aot_gpr_6 & ctx.gpr[7]);
    aot_gpr_5 = (aot_gpr_5 & 1u);
    aot_gpr_5 = (aot_gpr_6 | aot_gpr_5);
    jump_target = aot_gpr_31;
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(aot_gpr_5));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088B5BEC:
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(8))))));
    jump_target = aot_gpr_31;
    ctx.gpr[2] = (ctx.gpr[2] & 1u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088B5BF8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(16)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), ctx.gpr[21]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_gpr_31);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    aot_gpr_5 = (ctx.gpr[17] - ctx.gpr[17]);
    aot_gpr_6 = (0u | 12u);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_5); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr_6); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[19] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(0u));
    ctx.gpr[18] = (ctx.lo);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) <= 0;
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088B5C78;
      }
      goto L_088B5C44;
    }
L_088B5C44:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (0x088B5C54u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 319u, 0x08B655B8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088B5C54u) goto L_088B5C54;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B5C54:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store8(ctx.gpr[19] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(9)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(12));
    aot_mem.aot_direct_store8(ctx.gpr[19] + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(aot_gpr_4));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) > 0;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_088B5C44;
      }
      goto L_088B5C74;
    }
L_088B5C74:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(16)));
    goto L_088B5C78;
L_088B5C78:
    ctx.gpr[17] = (ctx.gpr[19] | 0u);
    ctx.gpr[18] = (aot_gpr_4 | 0u);
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[18];
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088B5CC4;
      }
      goto L_088B5C88;
    }
L_088B5C88:
    ctx.gpr[21] = (2236u << 16u);
    ctx.gpr[20] = (ctx.gpr[28] + static_cast<std::uint32_t>(5824));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(25856));
    goto L_088B5C94;
L_088B5C94:
    if (ctx.gpr[19] == 0u) {
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(12));
        goto L_088B5CBC;
    }
    goto L_088B5C9C;
L_088B5C9C:
    if (ctx.gpr[19] == 0u) {
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(12));
        goto L_088B5CBC;
    }
    goto L_088B5CA4;
L_088B5CA4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[20];
    aot_gpr_5 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_088B5CB8;
      }
      goto L_088B5CB0;
    }
L_088B5CB0:
    aot_gpr_31 = (0x088B5CB8u);
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE8F4, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088B5CB8u) goto L_088B5CB8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B5CB8:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(12));
    goto L_088B5CBC;
L_088B5CBC:
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[18];
      if (branch_taken) {
          goto L_088B5C94;
      }
      goto L_088B5CC4;
    }
L_088B5CC4:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(28)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(24)));
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_6 = (aot_gpr_4 - aot_gpr_4);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_6) >> 3u));
    ctx.gpr[7] = (ctx.gpr[7] >> 29u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(0u));
    aot_gpr_6 = (aot_gpr_6 + ctx.gpr[7]);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_6) >> 3u));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_6) <= 0;
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088B5D18;
      }
      goto L_088B5CF4;
    }
L_088B5CF4:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(4), ctx.gpr[8]);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(8));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_6) > 0;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_088B5CF4;
      }
      goto L_088B5D14;
    }
L_088B5D14:
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(28)));
    goto L_088B5D18;
L_088B5D18:
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(7), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[17];
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_088B5D34;
      }
      goto L_088B5D28;
    }
L_088B5D28:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(8));
    goto L_088B5D2C;
L_088B5D2C:
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[17];
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_088B5D2C;
      }
      goto L_088B5D34;
    }
L_088B5D34:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(8))))));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(28), aot_gpr_5);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-5));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (aot_gpr_4 & ctx.gpr[7]);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(40), aot_gpr_6);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(48), 0u);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(8))))));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-2));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(56), 0u);
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(12)));
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    ctx.gpr[19] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    ctx.gpr[20] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(24)));
    ctx.gpr[21] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(28)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(32)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088B5D90:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-272));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(8))))));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(256), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 & 8u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(260), aot_gpr_31);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088B5DD0;
      }
      goto L_088B5DB0;
    }
L_088B5DB0:
    aot_gpr_31 = (0x088B5DB8u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_088B5BF8;
L_088B5DB8:
    aot_gpr_31 = (0x088B5DC0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_088B6F30;
L_088B5DC0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_088B5DD8;
      }
      goto L_088B5DC8;
    }
L_088B5DC8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088B5E0C;
      }
      goto L_088B5DD0;
    }
L_088B5DD0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088B5E0C;
      }
      goto L_088B5DD8;
    }
L_088B5DD8:
    aot_gpr_6 = (2232u << 16u);
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-24716));
    ctx.gpr[7] = (ctx.gpr[28] + static_cast<std::uint32_t>(-24708));
    ctx.gpr[8] = (ctx.gpr[28] + static_cast<std::uint32_t>(-24696));
    aot_gpr_4 = (aot_gpr_29 | 0u);
    aot_gpr_31 = (0x088B5DF4u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-22360));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088B5DF4u) goto L_088B5DF4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B5DF4:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    aot_gpr_31 = (0x088B5E04u);
    aot_gpr_6 = (0u | 1u);
    goto L_088B62A4;
L_088B5E04:
    aot_gpr_31 = (0x088B5E0Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_088B707C;
L_088B5E0C:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(256)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(260)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(272));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088B5E1C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    ctx.gpr[10] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (ctx.gpr[9] & 255u);
    ctx.gpr[7] = (ctx.gpr[7] - ctx.gpr[10]);
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 3u));
    ctx.gpr[9] = (ctx.gpr[9] >> 29u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[7] + ctx.gpr[9]);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 3u));
    ctx.gpr[7] = (ctx.gpr[17] < ctx.gpr[8] ? 1u : 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(44), aot_gpr_31);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
      if (branch_taken) {
          goto L_088B5E74;
      }
      goto L_088B5E68;
    }
L_088B5E68:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[7]);
      if (branch_taken) {
          goto L_088B5E80;
      }
      goto L_088B5E74;
    }
L_088B5E74:
    ctx.gpr[7] = (aot_gpr_29 + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[7]);
    goto L_088B5E80;
L_088B5E80:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_088B5EDC;
      }
      goto L_088B5E88;
    }
L_088B5E88:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_6);
    aot_gpr_4 = (ctx.gpr[17] << 3u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_5);
    aot_gpr_31 = (0x088B5EA0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_gpr_4);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 474u, 0x08ABE308u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088B5EA0u) goto L_088B5EA0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B5EA0:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(12)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] != 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_088B5EDC;
      }
      goto L_088B5EB8;
    }
L_088B5EB8:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_5);
    aot_gpr_31 = (0x088B5ECCu);
    aot_gpr_4 = (ctx.gpr[7] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 289u, 0x08B65438u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088B5ECCu) goto L_088B5ECC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B5ECC:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(12)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(24)));
    goto L_088B5EDC;
L_088B5EDC:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    { const bool branch_taken = ctx.gpr[7] == aot_gpr_5;
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088B5F14;
      }
      goto L_088B5EEC;
    }
L_088B5EEC:
    ctx.gpr[8] = (ctx.gpr[19] | 0u);
    if (ctx.gpr[8] == 0u) {
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(8));
        goto L_088B5F0C;
    }
    goto L_088B5EF8;
L_088B5EF8:
    ctx.gpr[9] = (aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    ctx.gpr[9] = (aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(ctx.gpr[8] + static_cast<std::uint32_t>(4), ctx.gpr[9]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(8));
    goto L_088B5F0C;
L_088B5F0C:
    { const bool branch_taken = ctx.gpr[7] != aot_gpr_5;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_088B5EEC;
      }
      goto L_088B5F14;
    }
L_088B5F14:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[8];
      if (branch_taken) {
          goto L_088B5F4C;
      }
      goto L_088B5F24;
    }
L_088B5F24:
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
      if (branch_taken) {
          goto L_088B5F40;
      }
      goto L_088B5F30;
    }
L_088B5F30:
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), aot_gpr_6);
    goto L_088B5F40;
L_088B5F40:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_088B5F80;
      }
      goto L_088B5F4C;
    }
L_088B5F4C:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088B5F7C;
      }
      goto L_088B5F54;
    }
L_088B5F54:
    ctx.gpr[8] = (ctx.gpr[19] | 0u);
    if (ctx.gpr[8] == 0u) {
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
        goto L_088B5F74;
    }
    goto L_088B5F60;
L_088B5F60:
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(ctx.gpr[8] + static_cast<std::uint32_t>(4), ctx.gpr[9]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    goto L_088B5F74;
L_088B5F74:
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_088B5F54;
      }
      goto L_088B5F7C;
    }
L_088B5F7C:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    goto L_088B5F80;
L_088B5F80:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088B5FC4;
      }
      goto L_088B5F88;
    }
L_088B5F88:
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088B5FC4;
      }
      goto L_088B5F98;
    }
L_088B5F98:
    aot_gpr_6 = (ctx.gpr[19] | 0u);
    if (aot_gpr_6 == 0u) {
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(8));
        goto L_088B5FB8;
    }
    goto L_088B5FA4;
L_088B5FA4:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(8));
    goto L_088B5FB8;
L_088B5FB8:
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_088B5F98;
      }
      goto L_088B5FC0;
    }
L_088B5FC0:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    goto L_088B5FC4;
L_088B5FC4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_4 | 0u);
    { const bool branch_taken = aot_gpr_5 == aot_gpr_6;
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088B5FE0;
      }
      goto L_088B5FD4;
    }
L_088B5FD4:
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(8));
    goto L_088B5FD8;
L_088B5FD8:
    { const bool branch_taken = aot_gpr_5 != aot_gpr_6;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_088B5FD8;
      }
      goto L_088B5FE0;
    }
L_088B5FE0:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088B5FF0;
      }
      goto L_088B5FE8;
    }
L_088B5FE8:
    aot_gpr_31 = (0x088B5FF0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE398, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088B5FF0u) goto L_088B5FF0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B5FF0:
    aot_gpr_4 = (ctx.gpr[17] << 3u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    aot_gpr_4 = (ctx.gpr[18] + aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(4), ctx.gpr[19]);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(8), aot_gpr_4);
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(28)));
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(32)));
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(36)));
    ctx.gpr[19] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(40)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(44)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088B6020:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-64));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    ctx.gpr[10] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    ctx.gpr[11] = (0u | 12u);
    ctx.gpr[7] = (ctx.gpr[7] - ctx.gpr[10]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[7]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[11]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[9] & 255u);
    ctx.gpr[17] = (aot_gpr_5 | 0u);
    ctx.gpr[18] = (aot_gpr_6 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(44), ctx.gpr[23]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(48), ctx.gpr[30]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(52), aot_gpr_31);
    ctx.gpr[20] = (ctx.lo);
    aot_gpr_4 = (ctx.gpr[20] < ctx.gpr[8] ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[20]);
      if (branch_taken) {
          goto L_088B6090;
      }
      goto L_088B6084;
    }
L_088B6084:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[20] + aot_gpr_4);
      if (branch_taken) {
          goto L_088B609C;
      }
      goto L_088B6090;
    }
L_088B6090:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    ctx.gpr[20] = (ctx.gpr[20] + aot_gpr_4);
    goto L_088B609C;
L_088B609C:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    ctx.gpr[23] = (0u | 0u);
      if (branch_taken) {
          goto L_088B60D0;
      }
      goto L_088B60A4;
    }
L_088B60A4:
    aot_gpr_4 = (ctx.gpr[20] + ctx.gpr[20]);
    aot_gpr_4 = (ctx.gpr[20] + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_31 = (0x088B60B8u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_4);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 474u, 0x08ABE308u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088B60B8u) goto L_088B60B8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B60B8:
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[23] != 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_088B60D0;
      }
      goto L_088B60C4;
    }
L_088B60C4:
    aot_gpr_31 = (0x088B60CCu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 289u, 0x08B65438u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088B60CCu) goto L_088B60CC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B60CC:
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    goto L_088B60D0;
L_088B60D0:
    ctx.gpr[22] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    ctx.gpr[21] = (ctx.gpr[23] | 0u);
    { const bool branch_taken = ctx.gpr[22] == ctx.gpr[17];
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088B6118;
      }
      goto L_088B60E0;
    }
L_088B60E0:
    ctx.gpr[30] = (ctx.gpr[23] | 0u);
    if (ctx.gpr[30] == 0u) {
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(12));
        goto L_088B6110;
    }
    goto L_088B60EC;
L_088B60EC:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (0x088B60FCu);
    aot_gpr_4 = (ctx.gpr[30] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 283u, 0x08B653C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088B60FCu) goto L_088B60FC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B60FC:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[22] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store8(ctx.gpr[30] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[22] + static_cast<std::uint32_t>(9)));
    aot_mem.aot_direct_store8(ctx.gpr[30] + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(aot_gpr_4));
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(12));
    goto L_088B6110;
L_088B6110:
    { const bool branch_taken = ctx.gpr[22] != ctx.gpr[17];
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_088B60E0;
      }
      goto L_088B6118;
    }
L_088B6118:
    ctx.gpr[22] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (0u | 1u);
    { const bool branch_taken = ctx.gpr[22] != aot_gpr_4;
      if (branch_taken) {
          goto L_088B6160;
      }
      goto L_088B6128;
    }
L_088B6128:
    ctx.gpr[22] = (ctx.gpr[23] | 0u);
    { const bool branch_taken = ctx.gpr[22] == 0u;
      if (branch_taken) {
          goto L_088B6154;
      }
      goto L_088B6134;
    }
L_088B6134:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (0x088B6144u);
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 283u, 0x08B653C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088B6144u) goto L_088B6144;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B6144:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store8(ctx.gpr[22] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[18] + static_cast<std::uint32_t>(9)));
    aot_mem.aot_direct_store8(ctx.gpr[22] + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_088B6154;
L_088B6154:
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(12));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_088B61A4;
      }
      goto L_088B6160;
    }
L_088B6160:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088B61A0;
      }
      goto L_088B6168;
    }
L_088B6168:
    ctx.gpr[30] = (ctx.gpr[23] | 0u);
    if (ctx.gpr[30] == 0u) {
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(-1));
        goto L_088B6198;
    }
    goto L_088B6174;
L_088B6174:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (0x088B6184u);
    aot_gpr_4 = (ctx.gpr[30] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 283u, 0x08B653C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088B6184u) goto L_088B6184;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B6184:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store8(ctx.gpr[30] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[18] + static_cast<std::uint32_t>(9)));
    aot_mem.aot_direct_store8(ctx.gpr[30] + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(aot_gpr_4));
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(-1));
    goto L_088B6198;
L_088B6198:
    { const bool branch_taken = ctx.gpr[22] != 0u;
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_088B6168;
      }
      goto L_088B61A0;
    }
L_088B61A0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    goto L_088B61A4;
L_088B61A4:
    { const bool branch_taken = ctx.gpr[19] != 0u;
      if (branch_taken) {
          goto L_088B61F4;
      }
      goto L_088B61AC;
    }
L_088B61AC:
    ctx.gpr[18] = (aot_gpr_4 | 0u);
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[18];
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088B61F4;
      }
      goto L_088B61B8;
    }
L_088B61B8:
    ctx.gpr[19] = (ctx.gpr[23] | 0u);
    if (ctx.gpr[19] == 0u) {
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(12));
        goto L_088B61E8;
    }
    goto L_088B61C4;
L_088B61C4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (0x088B61D4u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 283u, 0x08B653C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088B61D4u) goto L_088B61D4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B61D4:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store8(ctx.gpr[19] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(9)));
    aot_mem.aot_direct_store8(ctx.gpr[19] + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(aot_gpr_4));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(12));
    goto L_088B61E8;
L_088B61E8:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[18];
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_088B61B8;
      }
      goto L_088B61F0;
    }
L_088B61F0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    goto L_088B61F4;
L_088B61F4:
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (aot_gpr_4 | 0u);
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[17];
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088B6248;
      }
      goto L_088B6208;
    }
L_088B6208:
    ctx.gpr[22] = (2236u << 16u);
    ctx.gpr[19] = (ctx.gpr[28] + static_cast<std::uint32_t>(5824));
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(25856));
    goto L_088B6214;
L_088B6214:
    if (ctx.gpr[18] == 0u) {
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(12));
        goto L_088B623C;
    }
    goto L_088B621C;
L_088B621C:
    if (ctx.gpr[18] == 0u) {
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(12));
        goto L_088B623C;
    }
    goto L_088B6224;
L_088B6224:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[19];
    aot_gpr_5 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_088B6238;
      }
      goto L_088B6230;
    }
L_088B6230:
    aot_gpr_31 = (0x088B6238u);
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE8F4, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088B6238u) goto L_088B6238;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B6238:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(12));
    goto L_088B623C;
L_088B623C:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[17];
      if (branch_taken) {
          goto L_088B6214;
      }
      goto L_088B6244;
    }
L_088B6244:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    goto L_088B6248;
L_088B6248:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088B6258;
      }
      goto L_088B6250;
    }
L_088B6250:
    aot_gpr_31 = (0x088B6258u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE398, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088B6258u) goto L_088B6258;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B6258:
    aot_gpr_4 = (ctx.gpr[20] + ctx.gpr[20]);
    aot_gpr_4 = (ctx.gpr[20] + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(0), ctx.gpr[21]);
    aot_gpr_4 = (ctx.gpr[21] + aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(4), ctx.gpr[23]);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(8), aot_gpr_4);
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(24)));
    ctx.gpr[19] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(28)));
    ctx.gpr[20] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(32)));
    ctx.gpr[21] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(36)));
    ctx.gpr[22] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(40)));
    ctx.gpr[23] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(44)));
    ctx.gpr[30] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(48)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(52)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088B62A4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-720));
    aot_gpr_6 = (aot_gpr_6 & 255u);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(8))))));
    ctx.gpr[7] = (0u | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(664), aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(680), ctx.gpr[17]);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(672), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_gpr_6 = (ctx.gpr[8] & 8u);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(676), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(684), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(688), ctx.gpr[19]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(692), ctx.gpr[20]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(696), ctx.gpr[21]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(700), ctx.gpr[22]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(704), ctx.gpr[23]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(708), ctx.gpr[30]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(712), aot_gpr_31);
    { const bool branch_taken = aot_gpr_6 == 0u;
    ctx.gpr[7] = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_088B6378;
      }
      goto L_088B62F4;
    }
L_088B62F4:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(668), ctx.gpr[7]);
    aot_gpr_31 = (0x088B6300u);
    aot_gpr_4 = (ctx.gpr[7] | 0u);
    ctx.pc = 0x08B7366Cu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B6300:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(648), ctx.gpr[2]);
      if (branch_taken) {
          goto L_088B6370;
      }
      goto L_088B6308;
    }
L_088B6308:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    aot_gpr_6 = (0u | 12u);
    aot_gpr_4 = (aot_gpr_4 - aot_gpr_5);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_4); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr_6); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[30] = (aot_gpr_29 + static_cast<std::uint32_t>(264));
    ctx.gpr[23] = (0u | 0u);
    aot_gpr_4 = (ctx.gpr[30] | 0u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_6 = (0u | 352u);
    ctx.gpr[7] = (ctx.lo);
    aot_gpr_31 = (0x088B633Cu);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(256), ctx.gpr[7]);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B5814C, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[9], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088B633Cu) goto L_088B633C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B633C:
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-24680));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-24672));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(660), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(656), aot_gpr_5);
    aot_gpr_4 = (ctx.gpr[17] + static_cast<std::uint32_t>(12));
    ctx.gpr[19] = (2236u << 16u);
    ctx.gpr[22] = (aot_gpr_29 + static_cast<std::uint32_t>(352));
    ctx.gpr[21] = (aot_gpr_29 + static_cast<std::uint32_t>(616));
    ctx.gpr[18] = (ctx.gpr[28] + static_cast<std::uint32_t>(5824));
    ctx.gpr[20] = (aot_gpr_29 + static_cast<std::uint32_t>(624));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(652), aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(25856));
      if (branch_taken) {
          goto L_088B6380;
      }
      goto L_088B6370;
    }
L_088B6370:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088B6574;
      }
      goto L_088B6378;
    }
L_088B6378:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088B6574;
      }
      goto L_088B6380;
    }
L_088B6380:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(648)));
    goto L_088B6384;
L_088B6384:
    aot_gpr_5 = (ctx.gpr[30] | 0u);
    aot_gpr_31 = (0x088B6390u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    ctx.pc = 0x08B7367Cu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B6390:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(664)));
      if (branch_taken) {
          goto L_088B64F0;
      }
      goto L_088B639C;
    }
L_088B639C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(264)));
    aot_gpr_5 = (0u | 4096u);
    aot_gpr_4 = (aot_gpr_4 & 61440u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_088B64E8;
      }
      goto L_088B63B0;
    }
L_088B63B0:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-24660)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-24664)));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(276)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(272)));
    ctx.gpr[8] = (ctx.gpr[7] ^ aot_gpr_5);
    ctx.gpr[8] = (ctx.gpr[8] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_6 < aot_gpr_4 ? 1u : 0u);
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    aot_gpr_4 = (ctx.gpr[8] & aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 | ctx.gpr[9]);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088B64E8;
      }
      goto L_088B63E0;
    }
L_088B63E0:
    aot_gpr_31 = (0x088B63E8u);
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58974, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088B63E8u) goto L_088B63E8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B63E8:
    aot_gpr_4 = (aot_gpr_29 + ctx.gpr[2]);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(660)));
    aot_gpr_31 = (0x088B63F8u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(348));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 31u, 0x08B58180u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088B63F8u) goto L_088B63F8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B63F8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_088B64E8;
      }
      goto L_088B6400;
    }
L_088B6400:
    aot_gpr_4 = (0u | 1u);
    { const bool branch_taken = aot_gpr_16 == 0u;
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(672), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_088B64E8;
      }
      goto L_088B640C;
    }
L_088B640C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(656)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(668)));
    aot_gpr_4 = (aot_gpr_29 | 0u);
    aot_gpr_31 = (0x088B6420u);
    ctx.gpr[7] = (ctx.gpr[22] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088B6420u) goto L_088B6420;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B6420:
    aot_gpr_31 = (0x088B6428u);
    aot_gpr_4 = (aot_gpr_29 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58974, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088B6428u) goto L_088B6428;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B6428:
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    aot_gpr_31 = (0x088B6438u);
    aot_gpr_6 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 283u, 0x08B653C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088B6438u) goto L_088B6438;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B6438:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(624), 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(628), ctx.gpr[18]);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(632), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(633), static_cast<std::uint8_t>(0u));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (0x088B6458u);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 319u, 0x08B655B8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088B6458u) goto L_088B6458;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B6458:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(620)));
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[18];
    aot_gpr_5 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_088B646C;
      }
      goto L_088B6464;
    }
L_088B6464:
    aot_gpr_31 = (0x088B646Cu);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE8F4, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088B646Cu) goto L_088B646C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B646C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_16 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_088B64B4;
      }
      goto L_088B647C;
    }
L_088B647C:
    { const bool branch_taken = aot_gpr_16 == 0u;
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(628)));
      if (branch_taken) {
          goto L_088B64A8;
      }
      goto L_088B6484;
    }
L_088B6484:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(624)));
    aot_gpr_31 = (0x088B6490u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 283u, 0x08B653C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088B6490u) goto L_088B6490;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B6490:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(632)));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(633)));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(628)));
    goto L_088B64A8;
L_088B64A8:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(12));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), aot_gpr_4);
      if (branch_taken) {
          goto L_088B64D8;
      }
      goto L_088B64B4;
    }
L_088B64B4:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(652)));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(644), static_cast<std::uint8_t>(0u));
    ctx.gpr[7] = (aot_gpr_29 + static_cast<std::uint32_t>(644));
    aot_gpr_6 = (ctx.gpr[20] | 0u);
    ctx.gpr[8] = (0u | 1u);
    aot_gpr_31 = (0x088B64D4u);
    ctx.gpr[9] = (0u | 1u);
    goto L_088B6020;
L_088B64D4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(628)));
    goto L_088B64D8;
L_088B64D8:
    { const bool branch_taken = aot_gpr_5 == ctx.gpr[18];
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088B64E8;
      }
      goto L_088B64E0;
    }
L_088B64E0:
    aot_gpr_31 = (0x088B64E8u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE8F4, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088B64E8u) goto L_088B64E8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B64E8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(648)));
      if (branch_taken) {
          goto L_088B6384;
      }
      goto L_088B64F0;
    }
L_088B64F0:
    aot_gpr_31 = (0x088B64F8u);
    ctx.pc = 0x08B73684u;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B64F8:
    { const bool branch_taken = aot_gpr_16 == 0u;
      if (branch_taken) {
          goto L_088B6570;
      }
      goto L_088B6500;
    }
L_088B6500:
    { const bool branch_taken = ctx.gpr[23] == 0u;
      if (branch_taken) {
          goto L_088B6570;
      }
      goto L_088B6508;
    }
L_088B6508:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(256)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(640), ctx.gpr[23]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(636), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    ctx.gpr[23] = (aot_gpr_29 + static_cast<std::uint32_t>(636));
      if (branch_taken) {
          goto L_088B6550;
      }
      goto L_088B6524;
    }
L_088B6524:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_088B6548;
      }
      goto L_088B6530;
    }
L_088B6530:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(636)));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(640)));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(4), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(8));
    goto L_088B6548;
L_088B6548:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(28), aot_gpr_4);
      if (branch_taken) {
          goto L_088B6570;
      }
      goto L_088B6550;
    }
L_088B6550:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (ctx.gpr[17] + static_cast<std::uint32_t>(24));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(645), static_cast<std::uint8_t>(0u));
    ctx.gpr[7] = (aot_gpr_29 + static_cast<std::uint32_t>(645));
    aot_gpr_6 = (ctx.gpr[23] | 0u);
    ctx.gpr[8] = (0u | 1u);
    aot_gpr_31 = (0x088B6570u);
    ctx.gpr[9] = (0u | 1u);
    goto L_088B5E1C;
L_088B6570:
    ctx.gpr[2] = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(672)));
    goto L_088B6574;
L_088B6574:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(676)));
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(680)));
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(684)));
    ctx.gpr[19] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(688)));
    ctx.gpr[20] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(692)));
    ctx.gpr[21] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(696)));
    ctx.gpr[22] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(700)));
    ctx.gpr[23] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(704)));
    ctx.gpr[30] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(708)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(712)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(720));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088B65A4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-272));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(8))))));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(256), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 & 8u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(260), aot_gpr_31);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088B65DC;
      }
      goto L_088B65C4;
    }
L_088B65C4:
    aot_gpr_31 = (0x088B65CCu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_088B6F30;
L_088B65CC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_088B65E4;
      }
      goto L_088B65D4;
    }
L_088B65D4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088B6610;
      }
      goto L_088B65DC;
    }
L_088B65DC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088B6610;
      }
      goto L_088B65E4;
    }
L_088B65E4:
    aot_gpr_6 = (2232u << 16u);
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-24716));
    ctx.gpr[7] = (ctx.gpr[28] + static_cast<std::uint32_t>(-24708));
    ctx.gpr[8] = (ctx.gpr[28] + static_cast<std::uint32_t>(-24696));
    aot_gpr_4 = (aot_gpr_29 | 0u);
    aot_gpr_31 = (0x088B6600u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-22360));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088B6600u) goto L_088B6600;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B6600:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    aot_gpr_31 = (0x088B6610u);
    aot_gpr_6 = (0u | 1u);
    goto L_088B62A4;
L_088B6610:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(256)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(260)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(272));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088B6620:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    aot_gpr_31 = (0x088B6634u);
    goto L_088B666C;
L_088B6634:
    aot_gpr_4 = (2232u << 16u);
    aot_gpr_16 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    aot_gpr_31 = (0x088B6644u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-22360));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58974, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088B6644u) goto L_088B6644;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B6644:
    aot_gpr_4 = (aot_gpr_16 + ctx.gpr[2]);
    aot_gpr_31 = (0x088B6650u);
    aot_gpr_5 = (0u | 47u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 50u, 0x08B58294u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088B6650u) goto L_088B6650;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B6650:
    aot_gpr_31 = (0x088B6658u);
    aot_gpr_4 = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58974, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088B6658u) goto L_088B6658;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B6658:
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-3));
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088B666C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(48)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(36)));
    aot_gpr_5 = (aot_gpr_5 << 2u);
    aot_gpr_5 = (aot_gpr_6 + aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(12)));
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    jump_target = aot_gpr_31;
    ctx.gpr[2] = (ctx.gpr[2] + aot_gpr_4);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088B6698:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (2244u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.gpr[17] = (0u | 47u);
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(27840));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_31);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_16 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_088B66CC;
      }
      goto L_088B66C4;
    }
L_088B66C4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_16 = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_088B66D8;
      }
      goto L_088B66CC;
    }
L_088B66CC:
    aot_gpr_31 = (0x088B66D4u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_088B666C;
L_088B66D4:
    aot_gpr_16 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    goto L_088B66D8;
L_088B66D8:
    aot_gpr_4 = (2232u << 16u);
    aot_gpr_31 = (0x088B66E4u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-22360));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58974, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088B66E4u) goto L_088B66E4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B66E4:
    aot_gpr_4 = (aot_gpr_16 + ctx.gpr[2]);
    aot_gpr_31 = (0x088B66F0u);
    aot_gpr_5 = (0u | 47u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 50u, 0x08B58294u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088B66F0u) goto L_088B66F0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B66F0:
    aot_gpr_16 = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
    aot_gpr_31 = (0x088B66FCu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58974, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088B66FCu) goto L_088B66FC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B66FC:
    aot_gpr_5 = (ctx.gpr[2] + static_cast<std::uint32_t>(-3));
    aot_gpr_4 = (0u | 64u);
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_5) < 64 ? 1u : 0u);
    if (aot_gpr_6 != 0u) {
    aot_gpr_4 = (aot_gpr_5 | 0u);
        goto L_088B6710;
    }
    goto L_088B6710;
L_088B6710:
    ctx.gpr[7] = (aot_gpr_4 | 0u);
    aot_gpr_4 = (0u | 0u);
    aot_gpr_5 = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    ctx.gpr[10] = (0u | 92u);
    ctx.gpr[11] = (0u | 126u);
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-127));
    ctx.gpr[3] = (0u + static_cast<std::uint32_t>(-95));
    ctx.gpr[12] = (0u | 128u);
    aot_gpr_6 = (0u | 1u);
    ctx.gpr[8] = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    goto L_088B673C;
L_088B673C:
    { const bool branch_taken = ctx.gpr[8] == 0u;
    aot_gpr_5 = (aot_gpr_6 | 0u);
      if (branch_taken) {
          goto L_088B67DC;
      }
      goto L_088B6744;
    }
L_088B6744:
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_4) < 63 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 == 0u;
      if (branch_taken) {
          goto L_088B67DC;
      }
      goto L_088B6750;
    }
L_088B6750:
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr_6 == 0u;
      if (branch_taken) {
          goto L_088B67DC;
      }
      goto L_088B675C;
    }
L_088B675C:
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(0))))));
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[10];
    ctx.gpr[13] = (aot_gpr_4 + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088B6794;
      }
      goto L_088B6774;
    }
L_088B6774:
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[17];
      if (branch_taken) {
          goto L_088B6794;
      }
      goto L_088B677C;
    }
L_088B677C:
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[11];
      if (branch_taken) {
          goto L_088B6794;
      }
      goto L_088B6784;
    }
L_088B6784:
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[2];
      if (branch_taken) {
          goto L_088B67C0;
      }
      goto L_088B678C;
    }
L_088B678C:
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[3];
      if (branch_taken) {
          goto L_088B67C0;
      }
      goto L_088B6794;
    }
L_088B6794:
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_4);
    ctx.gpr[14] = (aot_gpr_4 + ctx.gpr[19]);
    aot_gpr_4 = (ctx.gpr[13] | 0u);
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[2];
    aot_mem.aot_direct_store16(ctx.gpr[14] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[12]));
      if (branch_taken) {
          goto L_088B67D4;
      }
      goto L_088B67A8;
    }
L_088B67A8:
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[3];
      if (branch_taken) {
          goto L_088B67D4;
      }
      goto L_088B67B0;
    }
L_088B67B0:
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_6 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088B67D4;
      }
      goto L_088B67C0;
    }
L_088B67C0:
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_4);
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    ctx.gpr[9] = (aot_gpr_4 + ctx.gpr[19]);
    aot_gpr_4 = (ctx.gpr[13] | 0u);
    aot_mem.aot_direct_store16(ctx.gpr[9] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[8]));
    goto L_088B67D4;
L_088B67D4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
      if (branch_taken) {
          goto L_088B673C;
      }
      goto L_088B67DC;
    }
L_088B67DC:
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[19]);
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[18] + static_cast<std::uint32_t>(27840)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088B6840;
      }
      goto L_088B67F4;
    }
L_088B67F4:
    aot_gpr_16 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    { const bool branch_taken = aot_gpr_16 != 0u;
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-24656));
      if (branch_taken) {
          goto L_088B682C;
      }
      goto L_088B6800;
    }
L_088B6800:
    aot_gpr_16 = (0u | 0u);
    aot_gpr_31 = (0x088B680Cu);
    aot_gpr_4 = (0u | 2452u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088B680Cu) goto L_088B680C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B680C:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
      if (branch_taken) {
          goto L_088B6824;
      }
      goto L_088B6818;
    }
L_088B6818:
    aot_gpr_31 = (0x088B6820u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088B6820u) goto L_088B6820;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B6820:
    aot_gpr_16 = (ctx.gpr[17] | 0u);
    goto L_088B6824;
L_088B6824:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), aot_gpr_16);
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-24656));
    goto L_088B682C;
L_088B682C:
    aot_gpr_31 = (0x088B6834u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088B6834u) goto L_088B6834;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B6834:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x088B6840u);
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0032_entry, 32u, 851u, 0x08887B80u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088B6840u) goto L_088B6840;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B6840:
    ctx.gpr[2] = (ctx.gpr[19] | 0u);
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    ctx.gpr[19] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(12)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088B6860:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(40)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(36)));
    aot_gpr_6 = (aot_gpr_6 - aot_gpr_5);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_6) >> 2u));
    ctx.gpr[7] = (ctx.gpr[7] >> 30u);
    aot_gpr_6 = (aot_gpr_6 + ctx.gpr[7]);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_6) >> 2u));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (ctx.gpr[7] < aot_gpr_6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
      if (branch_taken) {
          goto L_088B68E8;
      }
      goto L_088B688C;
    }
L_088B688C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(12)));
    goto L_088B6890;
L_088B6890:
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (ctx.gpr[8] + ctx.gpr[8]);
    ctx.gpr[9] = (ctx.gpr[8] + ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[9] << 2u);
    ctx.gpr[9] = (aot_gpr_4 + ctx.gpr[9]);
    ctx.gpr[9] = (aot_mem.aot_direct_load8(ctx.gpr[9] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[9] = (ctx.gpr[8] + ctx.gpr[8]);
      if (branch_taken) {
          goto L_088B68C8;
      }
      goto L_088B68B0;
    }
L_088B68B0:
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[9]);
    ctx.gpr[8] = (ctx.gpr[8] << 2u);
    ctx.gpr[8] = (aot_gpr_4 + ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_direct_load8(ctx.gpr[8] + static_cast<std::uint32_t>(9)));
    { const bool branch_taken = ctx.gpr[8] == 0u;
      if (branch_taken) {
          goto L_088B68E0;
      }
      goto L_088B68C8;
    }
L_088B68C8:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (ctx.gpr[7] < aot_gpr_6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088B6890;
      }
      goto L_088B68D8;
    }
L_088B68D8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088B68E8;
      }
      goto L_088B68E0;
    }
L_088B68E0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088B68EC;
      }
      goto L_088B68E8;
    }
L_088B68E8:
    ctx.gpr[2] = (0u | 0u);
    goto L_088B68EC;
L_088B68EC:
    jump_target = aot_gpr_31;
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088B68F4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(48)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(36)));
    aot_gpr_5 = (aot_gpr_5 << 2u);
    aot_gpr_5 = (aot_gpr_6 + aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_gpr_5 + aot_gpr_5);
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(12)));
    aot_gpr_5 = (aot_gpr_5 + ctx.gpr[7]);
    aot_gpr_5 = (aot_gpr_5 << 2u);
    aot_gpr_6 = (0u | 1u);
    aot_gpr_5 = (ctx.gpr[8] + aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x088B6930u);
    aot_mem.aot_direct_store8(aot_gpr_5 + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(aot_gpr_6));
    goto L_088B6998;
L_088B6930:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088B693C:
    jump_target = aot_gpr_31;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(48)));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088B6944:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(36)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(40)));
    aot_gpr_5 = (aot_gpr_5 ^ aot_gpr_6);
    aot_gpr_5 = (aot_gpr_5 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_088B6984;
      }
      goto L_088B6960;
    }
L_088B6960:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(12)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
    aot_gpr_4 = (aot_gpr_5 ^ aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088B698C;
      }
      goto L_088B697C;
    }
L_088B697C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088B6990;
      }
      goto L_088B6984;
    }
L_088B6984:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088B6990;
      }
      goto L_088B698C;
    }
L_088B698C:
    ctx.gpr[2] = (0u | 0u);
    goto L_088B6990;
L_088B6990:
    jump_target = aot_gpr_31;
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088B6998:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(40)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(36)));
    aot_gpr_5 = (aot_gpr_5 - aot_gpr_6);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 2u));
    ctx.gpr[7] = (ctx.gpr[7] >> 30u);
    aot_gpr_5 = (aot_gpr_5 + ctx.gpr[7]);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 2u));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[9] < aot_gpr_5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
      if (branch_taken) {
          goto L_088B6A5C;
      }
      goto L_088B69CC;
    }
L_088B69CC:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(12)));
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(48)));
    goto L_088B69D4;
L_088B69D4:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(48), ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] < aot_gpr_5 ? 1u : 0u);
    if (ctx.gpr[8] != 0u) {
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(48)));
        goto L_088B69F0;
    }
    goto L_088B69E8;
L_088B69E8:
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(48), 0u);
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(48)));
    goto L_088B69F0;
L_088B69F0:
    ctx.gpr[10] = (ctx.gpr[8] << 2u);
    ctx.gpr[10] = (aot_gpr_6 + ctx.gpr[10]);
    ctx.gpr[10] = (aot_mem.aot_direct_load32(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    ctx.gpr[11] = (ctx.gpr[10] + ctx.gpr[10]);
    ctx.gpr[10] = (ctx.gpr[10] + ctx.gpr[11]);
    ctx.gpr[10] = (ctx.gpr[10] << 2u);
    ctx.gpr[10] = (ctx.gpr[7] + ctx.gpr[10]);
    ctx.gpr[10] = (aot_mem.aot_direct_load8(ctx.gpr[10] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.gpr[10] = (ctx.gpr[8] << 2u);
      if (branch_taken) {
          goto L_088B6A54;
      }
      goto L_088B6A18;
    }
L_088B6A18:
    ctx.gpr[10] = (aot_gpr_6 + ctx.gpr[10]);
    ctx.gpr[10] = (aot_mem.aot_direct_load32(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    ctx.gpr[11] = (ctx.gpr[10] + ctx.gpr[10]);
    ctx.gpr[10] = (ctx.gpr[10] + ctx.gpr[11]);
    ctx.gpr[10] = (ctx.gpr[10] << 2u);
    ctx.gpr[10] = (ctx.gpr[7] + ctx.gpr[10]);
    ctx.gpr[10] = (aot_mem.aot_direct_load8(ctx.gpr[10] + static_cast<std::uint32_t>(9)));
    { const bool branch_taken = ctx.gpr[10] != 0u;
      if (branch_taken) {
          goto L_088B6A54;
      }
      goto L_088B6A3C;
    }
L_088B6A3C:
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    ctx.gpr[10] = (ctx.gpr[9] < aot_gpr_5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
      if (branch_taken) {
          goto L_088B69D4;
      }
      goto L_088B6A4C;
    }
L_088B6A4C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088B6A5C;
      }
      goto L_088B6A54;
    }
L_088B6A54:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088B6A64;
      }
      goto L_088B6A5C;
    }
L_088B6A5C:
    aot_gpr_31 = (0x088B6A64u);
    goto L_088B7034;
L_088B6A64:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088B6A70:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(40)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(36)));
    aot_gpr_5 = (aot_gpr_5 - aot_gpr_6);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 2u));
    ctx.gpr[7] = (ctx.gpr[7] >> 30u);
    aot_gpr_5 = (aot_gpr_5 + ctx.gpr[7]);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 2u));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[9] < aot_gpr_5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
      if (branch_taken) {
          goto L_088B6B30;
      }
      goto L_088B6AA4;
    }
L_088B6AA4:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(12)));
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(48)));
    goto L_088B6AAC;
L_088B6AAC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[8]) > 0;
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088B6AC0;
      }
      goto L_088B6AB4;
    }
L_088B6AB4:
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(48), aot_gpr_5);
    ctx.gpr[8] = (aot_gpr_5 | 0u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-1));
    goto L_088B6AC0;
L_088B6AC0:
    ctx.gpr[10] = (ctx.gpr[8] << 2u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(48), ctx.gpr[8]);
    ctx.gpr[10] = (aot_gpr_6 + ctx.gpr[10]);
    ctx.gpr[10] = (aot_mem.aot_direct_load32(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    ctx.gpr[11] = (ctx.gpr[10] + ctx.gpr[10]);
    ctx.gpr[10] = (ctx.gpr[10] + ctx.gpr[11]);
    ctx.gpr[10] = (ctx.gpr[10] << 2u);
    ctx.gpr[10] = (ctx.gpr[7] + ctx.gpr[10]);
    ctx.gpr[10] = (aot_mem.aot_direct_load8(ctx.gpr[10] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.gpr[10] = (ctx.gpr[8] << 2u);
      if (branch_taken) {
          goto L_088B6B28;
      }
      goto L_088B6AEC;
    }
L_088B6AEC:
    ctx.gpr[10] = (aot_gpr_6 + ctx.gpr[10]);
    ctx.gpr[10] = (aot_mem.aot_direct_load32(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    ctx.gpr[11] = (ctx.gpr[10] + ctx.gpr[10]);
    ctx.gpr[10] = (ctx.gpr[10] + ctx.gpr[11]);
    ctx.gpr[10] = (ctx.gpr[10] << 2u);
    ctx.gpr[10] = (ctx.gpr[7] + ctx.gpr[10]);
    ctx.gpr[10] = (aot_mem.aot_direct_load8(ctx.gpr[10] + static_cast<std::uint32_t>(9)));
    { const bool branch_taken = ctx.gpr[10] != 0u;
      if (branch_taken) {
          goto L_088B6B28;
      }
      goto L_088B6B10;
    }
L_088B6B10:
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    ctx.gpr[10] = (ctx.gpr[9] < aot_gpr_5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
      if (branch_taken) {
          goto L_088B6AAC;
      }
      goto L_088B6B20;
    }
L_088B6B20:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088B6B30;
      }
      goto L_088B6B28;
    }
L_088B6B28:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088B6B38;
      }
      goto L_088B6B30;
    }
L_088B6B30:
    aot_gpr_31 = (0x088B6B38u);
    goto L_088B7034;
L_088B6B38:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088B6B44:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-80));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(44), ctx.gpr[18]);
    ctx.gpr[18] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(56), ctx.gpr[21]);
    ctx.gpr[21] = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(52), ctx.gpr[20]);
    aot_gpr_6 = (0u | 12u);
    aot_gpr_4 = (aot_gpr_4 - ctx.gpr[7]);
    ctx.gpr[20] = (aot_gpr_5 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(36), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(48), ctx.gpr[19]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(60), ctx.gpr[22]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(64), ctx.gpr[23]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(68), ctx.gpr[30]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(72), aot_gpr_31);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_4); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr_6); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(40), ctx.gpr[21]);
    aot_gpr_5 = (ctx.lo);
    aot_gpr_31 = (0x088B6BA8u);
    aot_gpr_4 = (ctx.gpr[18] + static_cast<std::uint32_t>(36));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0217_entry, 217u, 96u, 0x08B685A0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088B6BA8u) goto L_088B6BA8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B6BA8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    aot_gpr_6 = (0u | 12u);
    aot_gpr_4 = (aot_gpr_4 - aot_gpr_5);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_4); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr_6); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
    aot_gpr_5 = (aot_gpr_5 << 2u);
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(48), 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_gpr_5);
    ctx.gpr[21] = (0u | 0u);
    aot_gpr_5 = (ctx.lo);
    aot_gpr_5 = (ctx.gpr[21] < aot_gpr_5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_088B6E7C;
      }
      goto L_088B6BEC;
    }
L_088B6BEC:
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-24724));
    ctx.gpr[23] = (0u | 20u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_4);
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[30] = (0u | 0u);
    goto L_088B6C00;
L_088B6C00:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 - aot_gpr_5);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_4); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[23]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr_5 = (ctx.lo);
    aot_gpr_5 = (ctx.gpr[21] < aot_gpr_5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_088B6C34;
      }
      goto L_088B6C20;
    }
L_088B6C20:
    aot_gpr_31 = (0x088B6C28u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_4);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0893685C, 76u, 698u, 0x0893685Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0076_entry, 76u, 698u, 0x0893685Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088B6C28u) goto L_088B6C28;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B6C28:
    aot_gpr_31 = (0x088B6C30u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 919u, 0x08B576C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088B6C30u) goto L_088B6C30;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B6C30:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    goto L_088B6C34;
L_088B6C34:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    aot_gpr_5 = (aot_gpr_5 + ctx.gpr[22]);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    if (aot_gpr_6 != aot_gpr_5) {
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
        goto L_088B6C54;
    }
    goto L_088B6C4C;
L_088B6C4C:
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(48), ctx.gpr[21]);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    goto L_088B6C54;
L_088B6C54:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_5 - aot_gpr_6);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_5); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[23]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr_5 = (ctx.lo);
    aot_gpr_5 = (ctx.gpr[21] < aot_gpr_5 ? 1u : 0u);
    if (aot_gpr_5 != 0u) {
    aot_gpr_16 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
        goto L_088B6C84;
    }
    goto L_088B6C70;
L_088B6C70:
    aot_gpr_31 = (0x088B6C78u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0893685C, 76u, 698u, 0x0893685Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0076_entry, 76u, 698u, 0x0893685Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088B6C78u) goto L_088B6C78;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B6C78:
    aot_gpr_31 = (0x088B6C80u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 919u, 0x08B576C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088B6C80u) goto L_088B6C80;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B6C80:
    aot_gpr_16 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    goto L_088B6C84;
L_088B6C84:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_16 = (aot_gpr_16 + ctx.gpr[22]);
      if (branch_taken) {
          goto L_088B6CD0;
      }
      goto L_088B6C94;
    }
L_088B6C94:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088B6CB0;
      }
      goto L_088B6CA0;
    }
L_088B6CA0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    goto L_088B6CB0;
L_088B6CB0:
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(40), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 - aot_gpr_5);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_4); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[23]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[19] = (ctx.lo);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[21] < ctx.gpr[19] ? 1u : 0u);
      if (branch_taken) {
          goto L_088B6E00;
      }
      goto L_088B6CD0;
    }
L_088B6CD0:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
    aot_gpr_6 = (0u | 1u);
    aot_gpr_5 = (aot_gpr_4 - aot_gpr_5);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 2u));
    ctx.gpr[7] = (ctx.gpr[7] >> 30u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(0u));
    aot_gpr_5 = (aot_gpr_5 + ctx.gpr[7]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_6);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 2u));
    aot_gpr_6 = (aot_gpr_5 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_5);
      if (branch_taken) {
          goto L_088B6D10;
      }
      goto L_088B6D00;
    }
L_088B6D00:
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(4));
    ctx.gpr[19] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (aot_gpr_5 + ctx.gpr[19]);
      if (branch_taken) {
          goto L_088B6D1C;
      }
      goto L_088B6D10;
    }
L_088B6D10:
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(8));
    ctx.gpr[19] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (aot_gpr_5 + ctx.gpr[19]);
    goto L_088B6D1C;
L_088B6D1C:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    aot_gpr_5 = (0u | 0u);
      if (branch_taken) {
          goto L_088B6D5C;
      }
      goto L_088B6D24;
    }
L_088B6D24:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (ctx.gpr[19] << 2u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), aot_gpr_5);
    aot_gpr_31 = (0x088B6D38u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_gpr_4);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 474u, 0x08ABE308u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088B6D38u) goto L_088B6D38;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B6D38:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(24)));
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_088B6D5C;
      }
      goto L_088B6D48;
    }
L_088B6D48:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), aot_gpr_4);
    aot_gpr_31 = (0x088B6D54u);
    aot_gpr_4 = (aot_gpr_6 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 289u, 0x08B65438u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088B6D54u) goto L_088B6D54;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B6D54:
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(28)));
    goto L_088B6D5C;
L_088B6D5C:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_6;
    ctx.gpr[17] = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_088B6D70;
      }
      goto L_088B6D68;
    }
L_088B6D68:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_088B6D94;
      }
      goto L_088B6D70;
    }
L_088B6D70:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), ctx.gpr[30]);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    ctx.gpr[30] = (aot_gpr_4 - aot_gpr_6);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088B6D88u);
    aot_gpr_6 = (ctx.gpr[30] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088B6D88u) goto L_088B6D88;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B6D88:
    aot_gpr_5 = (ctx.gpr[2] + ctx.gpr[30]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    ctx.gpr[30] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(32)));
    goto L_088B6D94;
L_088B6D94:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    if (aot_gpr_5 == 0u) {
    aot_gpr_16 = (aot_gpr_4 | 0u);
        goto L_088B6DC0;
    }
    goto L_088B6DA8;
L_088B6DA8:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_6);
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088B6DA8;
      }
      goto L_088B6DBC;
    }
L_088B6DBC:
    aot_gpr_16 = (aot_gpr_4 | 0u);
    goto L_088B6DC0;
L_088B6DC0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088B6DD4;
      }
      goto L_088B6DCC;
    }
L_088B6DCC:
    aot_gpr_31 = (0x088B6DD4u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE398, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088B6DD4u) goto L_088B6DD4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B6DD4:
    aot_gpr_4 = (ctx.gpr[19] << 2u);
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_gpr_4 = (ctx.gpr[17] + aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(40), aot_gpr_16);
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(44), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 - aot_gpr_5);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_4); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[23]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[19] = (ctx.lo);
    ctx.gpr[19] = (ctx.gpr[21] < ctx.gpr[19] ? 1u : 0u);
    goto L_088B6E00;
L_088B6E00:
    if (ctx.gpr[19] != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
        goto L_088B6E1C;
    }
    goto L_088B6E08;
L_088B6E08:
    aot_gpr_31 = (0x088B6E10u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0893685C, 76u, 698u, 0x0893685Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0076_entry, 76u, 698u, 0x0893685Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088B6E10u) goto L_088B6E10;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B6E10:
    aot_gpr_31 = (0x088B6E18u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 919u, 0x08B576C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088B6E18u) goto L_088B6E18;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B6E18:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
    goto L_088B6E1C;
L_088B6E1C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[30]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_5 + ctx.gpr[22]);
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(16)));
    aot_gpr_6 = (aot_gpr_4 + aot_gpr_4);
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_5 = (aot_gpr_5 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_4 = (ctx.gpr[7] + aot_gpr_4);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    aot_gpr_6 = (0u | 12u);
    aot_gpr_4 = (aot_gpr_4 - aot_gpr_5);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_4); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr_6); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(20));
    aot_gpr_4 = (ctx.lo);
    aot_gpr_4 = (ctx.gpr[21] < aot_gpr_4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088B6C00;
      }
      goto L_088B6E78;
    }
L_088B6E78:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
    goto L_088B6E7C;
L_088B6E7C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    aot_gpr_4 = (aot_gpr_4 ^ aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088B6EA4;
      }
      goto L_088B6E94;
    }
L_088B6E94:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[18] + static_cast<std::uint32_t>(8))))));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-2));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_mem.aot_direct_store8(ctx.gpr[18] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_088B6EA4;
L_088B6EA4:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(36)));
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(40)));
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(44)));
    ctx.gpr[19] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(48)));
    ctx.gpr[20] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(52)));
    ctx.gpr[21] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(56)));
    ctx.gpr[22] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(60)));
    ctx.gpr[23] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(64)));
    ctx.gpr[30] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(68)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(72)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088B6ED4:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(12)));
    ctx.gpr[7] = (0u | 12u);
    aot_gpr_6 = (aot_gpr_6 - ctx.gpr[8]);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_6); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[7]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (ctx.lo);
    ctx.gpr[9] = (ctx.gpr[8] < ctx.gpr[9] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
      if (branch_taken) {
          goto L_088B6F28;
      }
      goto L_088B6EFC;
    }
L_088B6EFC:
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_6); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[7]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(36)));
    ctx.gpr[7] = (ctx.lo);
    goto L_088B6F08;
L_088B6F08:
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_5 != ctx.gpr[9];
      if (branch_taken) {
          goto L_088B6F18;
      }
      goto L_088B6F14;
    }
L_088B6F14:
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(48), ctx.gpr[8]);
    goto L_088B6F18;
L_088B6F18:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (ctx.gpr[8] < ctx.gpr[7] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088B6F08;
      }
      goto L_088B6F28;
    }
L_088B6F28:
    jump_target = aot_gpr_31;
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088B6F30:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_5 = (578u << 16u);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-24732));
    aot_gpr_6 = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (aot_gpr_29 | 0u);
    ctx.gpr[9] = (0u | 4u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    aot_gpr_31 = (0x088B6F58u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(22563));
    ctx.pc = 0x08B7361Cu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B6F58:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) < 0;
      if (branch_taken) {
          goto L_088B6F74;
      }
      goto L_088B6F64;
    }
L_088B6F64:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 ^ 1u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
      if (branch_taken) {
          goto L_088B6F74;
      }
      goto L_088B6F74;
    }
L_088B6F74:
    ctx.gpr[2] = (aot_gpr_4 ^ 1u);
    ctx.gpr[2] = (ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088B6F88:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(8))))));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-2));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(8))))));
    aot_gpr_5 = (2235u << 16u);
    aot_gpr_6 = (0u + static_cast<std::uint32_t>(-5));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-27524));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(8))))));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-9));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(12), 0u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(16), 0u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(20), 0u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(24), 0u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(28), 0u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(32), 0u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(36), 0u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(40), 0u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(44), 0u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(56), 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    aot_gpr_31 = (0x088B7004u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_088B6F30;
L_088B7004:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(8))))));
    aot_gpr_5 = (ctx.gpr[2] & 1u);
    aot_gpr_6 = (0u + static_cast<std::uint32_t>(-3));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_6);
    aot_gpr_5 = (aot_gpr_5 << 1u);
    aot_gpr_4 = (aot_gpr_4 | aot_gpr_5);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(aot_gpr_4));
    ctx.gpr[2] = (aot_gpr_16 | 0u);
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088B7034:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    aot_gpr_31 = (0x088B7048u);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    goto L_088B5BEC;
L_088B7048:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088B7054u);
    aot_gpr_16 = (ctx.gpr[2] | 0u);
    goto L_088B5BF8;
L_088B7054:
    { const bool branch_taken = aot_gpr_16 == 0u;
      if (branch_taken) {
          goto L_088B706C;
      }
      goto L_088B705C;
    }
L_088B705C:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_5 = (0u | 1u);
    aot_gpr_31 = (0x088B706Cu);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1008));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0033_entry, 33u, 196u, 0x08888934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088B706Cu) goto L_088B706C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B706C:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088B707C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-80));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(60), ctx.gpr[30]);
    ctx.gpr[30] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(36)));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(52), ctx.gpr[22]);
    ctx.gpr[22] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    ctx.gpr[17] = (0u | 12u);
    ctx.gpr[22] = (ctx.gpr[22] - aot_gpr_5);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(44), ctx.gpr[20]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(48), ctx.gpr[21]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(56), ctx.gpr[23]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(64), aot_gpr_31);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[22]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[17]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(40), ctx.gpr[30]);
    aot_gpr_5 = (ctx.lo);
    aot_gpr_31 = (0x088B70DCu);
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(36));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0217_entry, 217u, 96u, 0x08B685A0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088B70DCu) goto L_088B70DC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B70DC:
    ctx.gpr[22] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(16)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(12)));
    ctx.gpr[22] = (ctx.gpr[22] - aot_gpr_4);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[22]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[17]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[18] = (0u | 0u);
    aot_gpr_4 = (ctx.lo);
    aot_gpr_4 = (ctx.gpr[18] < aot_gpr_4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[30] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(40)));
      if (branch_taken) {
          goto L_088B7260;
      }
      goto L_088B7100;
    }
L_088B7100:
    ctx.gpr[19] = (0u | 1u);
    ctx.gpr[20] = (aot_gpr_29 + static_cast<std::uint32_t>(8));
    ctx.gpr[21] = (aot_gpr_29 + static_cast<std::uint32_t>(12));
    goto L_088B710C;
L_088B710C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[30] == aot_gpr_4;
    aot_gpr_4 = (ctx.gpr[30] | 0u);
      if (branch_taken) {
          goto L_088B7148;
      }
      goto L_088B7118;
    }
L_088B7118:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088B7134;
      }
      goto L_088B7120;
    }
L_088B7120:
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    ctx.gpr[22] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(16)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(12)));
    ctx.gpr[30] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(40)));
    ctx.gpr[22] = (ctx.gpr[22] - aot_gpr_4);
    goto L_088B7134;
L_088B7134:
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[22]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[17]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (ctx.lo);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(40), ctx.gpr[30]);
      if (branch_taken) {
          goto L_088B7250;
      }
      goto L_088B7148;
    }
L_088B7148:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(36)));
    aot_gpr_4 = (ctx.gpr[30] | 0u);
    aot_gpr_5 = (aot_gpr_4 - aot_gpr_5);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 2u));
    aot_gpr_6 = (aot_gpr_6 >> 30u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(0u));
    ctx.gpr[30] = (aot_gpr_5 + aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[19]);
    ctx.gpr[30] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[30]) >> 2u));
    aot_gpr_5 = (ctx.gpr[30] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[30]);
      if (branch_taken) {
          goto L_088B7184;
      }
      goto L_088B7178;
    }
L_088B7178:
    ctx.gpr[22] = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (ctx.gpr[30] + ctx.gpr[22]);
      if (branch_taken) {
          goto L_088B718C;
      }
      goto L_088B7184;
    }
L_088B7184:
    ctx.gpr[22] = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[22] = (ctx.gpr[30] + ctx.gpr[22]);
    goto L_088B718C;
L_088B718C:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    aot_gpr_5 = (0u | 0u);
      if (branch_taken) {
          goto L_088B71CC;
      }
      goto L_088B7194;
    }
L_088B7194:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (ctx.gpr[22] << 2u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_gpr_5);
    aot_gpr_31 = (0x088B71A8u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_gpr_4);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 474u, 0x08ABE308u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088B71A8u) goto L_088B71A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B71A8:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_088B71CC;
      }
      goto L_088B71B8;
    }
L_088B71B8:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_gpr_4);
    aot_gpr_31 = (0x088B71C4u);
    aot_gpr_4 = (aot_gpr_6 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 289u, 0x08B65438u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088B71C4u) goto L_088B71C4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B71C4:
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(24)));
    goto L_088B71CC;
L_088B71CC:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_6;
    ctx.gpr[23] = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_088B71E0;
      }
      goto L_088B71D8;
    }
L_088B71D8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_088B71FC;
      }
      goto L_088B71E0;
    }
L_088B71E0:
    aot_gpr_5 = (aot_gpr_6 | 0u);
    ctx.gpr[30] = (aot_gpr_4 - aot_gpr_6);
    aot_gpr_4 = (ctx.gpr[23] | 0u);
    aot_gpr_31 = (0x088B71F4u);
    aot_gpr_6 = (ctx.gpr[30] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088B71F4u) goto L_088B71F4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B71F4:
    aot_gpr_5 = (ctx.gpr[2] + ctx.gpr[30]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    goto L_088B71FC;
L_088B71FC:
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[30] = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_088B7214;
      }
      goto L_088B7204;
    }
L_088B7204:
    aot_mem.aot_direct_store32(ctx.gpr[30] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088B7204;
      }
      goto L_088B7214;
    }
L_088B7214:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088B7228;
      }
      goto L_088B7220;
    }
L_088B7220:
    aot_gpr_31 = (0x088B7228u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE398, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088B7228u) goto L_088B7228;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B7228:
    aot_gpr_4 = (ctx.gpr[22] << 2u);
    ctx.gpr[22] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(16)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(12)));
    ctx.gpr[22] = (ctx.gpr[22] - aot_gpr_5);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[22]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[17]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(40), ctx.gpr[30]);
    aot_gpr_4 = (ctx.gpr[23] + aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(36), ctx.gpr[23]);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(44), aot_gpr_4);
    aot_gpr_4 = (ctx.lo);
    goto L_088B7250;
L_088B7250:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (ctx.gpr[18] < aot_gpr_4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088B710C;
      }
      goto L_088B7260;
    }
L_088B7260:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(36)));
    aot_gpr_4 = (aot_gpr_4 ^ ctx.gpr[30]);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(48), 0u);
      if (branch_taken) {
          goto L_088B7288;
      }
      goto L_088B7278;
    }
L_088B7278:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(8))))));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-2));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_088B7288;
L_088B7288:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(28)));
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(32)));
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(36)));
    ctx.gpr[19] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(40)));
    ctx.gpr[20] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(44)));
    ctx.gpr[21] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(48)));
    ctx.gpr[22] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(52)));
    ctx.gpr[23] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(56)));
    ctx.gpr[30] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(60)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(64)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088B72B8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088B72FC;
      }
      goto L_088B72C8;
    }
L_088B72C8:
    aot_gpr_6 = (2235u << 16u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-27540));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_6);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(5896), 0u);
      if (branch_taken) {
          goto L_088B72E8;
      }
      goto L_088B72DC;
    }
L_088B72DC:
    aot_gpr_6 = (2235u << 16u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-28772));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_6);
    goto L_088B72E8;
L_088B72E8:
    aot_gpr_5 = (aot_gpr_5 & 1u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_088B72FC;
      }
      goto L_088B72F4;
    }
L_088B72F4:
    aot_gpr_31 = (0x088B72FCu);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE2C0, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088B72FCu) goto L_088B72FC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B72FC:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088B7308:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(0))))));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088B731C:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (17279u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-24588)));
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_15 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_15 = fs * ft; }
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    { const float fs = aot_fpr_14; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    aot_gpr_4 = (20224u << 16u);
    { const float fs = aot_fpr_15; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_15 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_15 = fs * ft; }
    { const float fs = ctx.fpr[17]; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_15 < aot_fpr_14)) ? 0x00800000u : 0u);
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
      if (branch_taken) {
          goto L_088B7368;
      }
      goto L_088B735C;
    }
L_088B735C:
    aot_fpr_15 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_15));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(aot_fpr_15));
      if (branch_taken) {
          goto L_088B737C;
      }
      goto L_088B7368;
    }
L_088B7368:
    aot_fpr_15 = aot_fpr_15 - aot_fpr_14;
    aot_gpr_6 = (32768u << 16u);
    aot_fpr_15 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_15));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_15));
    aot_gpr_6 = (aot_gpr_4 + aot_gpr_6);
    goto L_088B737C;
L_088B737C:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 < aot_fpr_14)) ? 0x00800000u : 0u);
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_13 = aot_fpr_13 - aot_fpr_14;
        goto L_088B7398;
    }
    goto L_088B738C;
L_088B738C:
    aot_fpr_13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_13));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
      if (branch_taken) {
          goto L_088B73A8;
      }
      goto L_088B7398;
    }
L_088B7398:
    aot_gpr_5 = (32768u << 16u);
    aot_fpr_13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_13));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_5);
    goto L_088B73A8;
L_088B73A8:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_14)) ? 0x00800000u : 0u);
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_12 = aot_fpr_12 - aot_fpr_14;
        goto L_088B73C4;
    }
    goto L_088B73B8;
L_088B73B8:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_088B73D4;
      }
      goto L_088B73C4;
    }
L_088B73C4:
    aot_gpr_4 = (32768u << 16u);
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (ctx.gpr[7] + aot_gpr_4);
    goto L_088B73D4;
L_088B73D4:
    aot_gpr_4 = (aot_gpr_4 << 16u);
    aot_gpr_5 = (aot_gpr_5 << 8u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    jump_target = aot_gpr_31;
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8544), aot_gpr_4);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088B73EC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8488), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8484), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8480), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8472), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8468), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8464), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8504), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8500), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8496), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x088B7420u);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(8464));
    goto L_088B731C;
L_088B7420:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-24628)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088B7460;
      }
      goto L_088B742C;
    }
L_088B742C:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8464)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8468)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8472)));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(24));
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_fpr_15 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8476)));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(aot_fpr_14));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_6);
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_15));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(12), aot_gpr_5);
    goto L_088B7460;
L_088B7460:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-24624)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088B74A0;
      }
      goto L_088B746C;
    }
L_088B746C:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8496)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8500)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8504)));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(24));
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_fpr_15 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8508)));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(aot_fpr_14));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_6);
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_15));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(12), aot_gpr_5);
    goto L_088B74A0;
L_088B74A0:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088B74AC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-64));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(48), aot_gpr_16);
    aot_gpr_16 = (0u | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(52), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(56), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(60), aot_gpr_31);
    aot_gpr_31 = (0x088B74E0u);
    aot_gpr_4 = (0u | 40u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088B74E0u) goto L_088B74E0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B74E0:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[17] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_088B7500;
      }
      goto L_088B74F0;
    }
L_088B74F0:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x088B74FCu);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0080_entry, 80u, 95u, 0x08944D14u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088B74FCu) goto L_088B74FC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B74FC:
    aot_gpr_16 = (ctx.gpr[18] | 0u);
    goto L_088B7500;
L_088B7500:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-24628), aot_gpr_16);
    aot_gpr_4 = (16000u << 16u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (15948u << 16u);
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-24628)));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(24));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(12), ctx.gpr[8]);
    aot_gpr_16 = (0u | 0u);
    aot_gpr_31 = (0x088B755Cu);
    aot_gpr_4 = (0u | 40u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088B755Cu) goto L_088B755C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B755C:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_gpr_4 = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_088B7574;
      }
      goto L_088B7568;
    }
L_088B7568:
    aot_gpr_31 = (0x088B7570u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0080_entry, 80u, 95u, 0x08944D14u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088B7570u) goto L_088B7570;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B7570:
    aot_gpr_16 = (ctx.gpr[18] | 0u);
    goto L_088B7574;
L_088B7574:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-24624), aot_gpr_16);
    aot_gpr_4 = (16256u << 16u);
    ctx.gpr[7] = (16217u << 16u);
    ctx.fpr[28] = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[7] = (ctx.gpr[7] | 39322u);
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-24624)));
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[7] = (16102u << 16u);
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(24));
    ctx.gpr[7] = (ctx.gpr[7] | 26214u);
    aot_fpr_13 = std::bit_cast<float>(ctx.gpr[7]);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), ctx.gpr[8]);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), aot_gpr_5);
    aot_gpr_5 = (16384u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(12), aot_gpr_6);
    ctx.fpr[20] = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-24624)));
    aot_gpr_31 = (0x088B75DCu);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0080_entry, 80u, 96u, 0x08944D50u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088B75DCu) goto L_088B75DC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B75DC:
    aot_gpr_31 = (0x088B75E4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0091_entry, 91u, 622u, 0x08972DA4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088B75E4u) goto L_088B75E4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B75E4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-24624)));
    ctx.fpr[24] = std::bit_cast<float>(0u);
    ctx.gpr[7] = (17184u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[7]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    aot_gpr_31 = (0x088B7614u);
    aot_gpr_6 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0091_entry, 91u, 645u, 0x08972FD4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088B7614u) goto L_088B7614;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B7614:
    aot_gpr_4 = (16128u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_gpr_16 = (0u | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    goto L_088B7628;
L_088B7628:
    ctx.gpr[18] = (0u | 0u);
    aot_gpr_31 = (0x088B7634u);
    aot_gpr_4 = (0u | 40u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088B7634u) goto L_088B7634;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B7634:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_gpr_4 = (aot_gpr_16 << 2u);
      if (branch_taken) {
          goto L_088B7654;
      }
      goto L_088B7640;
    }
L_088B7640:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088B764Cu);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0080_entry, 80u, 95u, 0x08944D14u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088B764Cu) goto L_088B764C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B764C:
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
    aot_gpr_4 = (aot_gpr_16 << 2u);
    goto L_088B7654;
L_088B7654:
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[17] = (ctx.gpr[28] + aot_gpr_4);
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-24620), ctx.gpr[18]);
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_direct_store8(ctx.gpr[18] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(0u));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-24620)));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(24));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(12), ctx.gpr[8]);
    aot_gpr_31 = (0x088B7694u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-24620)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0080_entry, 80u, 96u, 0x08944D50u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088B7694u) goto L_088B7694;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B7694:
    aot_gpr_31 = (0x088B769Cu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0091_entry, 91u, 622u, 0x08972DA4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088B769Cu) goto L_088B769C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B769C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-24620)));
    aot_gpr_5 = (aot_gpr_16 + static_cast<std::uint32_t>(1));
    aot_gpr_16 = (aot_gpr_5 << 16u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    aot_gpr_16 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_16) >> 16u));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_16) < 3 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088B7628;
      }
      goto L_088B76BC;
    }
L_088B76BC:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(28)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(32)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(36)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(40)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(44)));
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(48)));
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(52)));
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(56)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(60)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088B76E8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-24628)));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(24));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_6);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(12), aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-24624)));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(0u));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088B7728:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-96));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_14));
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_fpr_15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_14));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(80), aot_gpr_16);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(84), ctx.gpr[17]);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_15)) ? 0x00800000u : 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(88), aot_gpr_31);
    if (((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_15));
        goto L_088B7758;
    }
    goto L_088B7758;
L_088B7758:
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_13));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[16] < aot_fpr_12)) ? 0x00800000u : 0u);
    if (((ctx.fcr31 & 0x00800000u) != 0u)) {
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
        goto L_088B776C;
    }
    goto L_088B776C;
L_088B776C:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[16]));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-24608)));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_6) < 3 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_gpr_16 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_088B778C;
      }
      goto L_088B7784;
    }
L_088B7784:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-24608)));
      if (branch_taken) {
          goto L_088B77C0;
      }
      goto L_088B778C;
    }
L_088B778C:
    ctx.gpr[8] = (aot_gpr_16 | 0u);
    ctx.gpr[7] = (0u | 0u);
    aot_gpr_6 = (ctx.gpr[28] | 0u);
    goto L_088B7798;
L_088B7798:
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(8552)));
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
      if (branch_taken) {
          goto L_088B77B0;
      }
      goto L_088B77A8;
    }
L_088B77A8:
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(8552)));
    aot_gpr_5 = (ctx.gpr[7] | 0u);
    goto L_088B77B0;
L_088B77B0:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[7]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088B7798;
      }
      goto L_088B77C0;
    }
L_088B77C0:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_5) < 0;
      if (branch_taken) {
          goto L_088B7880;
      }
      goto L_088B77C8;
    }
L_088B77C8:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(aot_fpr_15));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(aot_fpr_14));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_gpr_5 = (aot_gpr_5 << 2u);
    ctx.gpr[17] = (ctx.gpr[28] + aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-24620)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(24));
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(aot_fpr_15));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(aot_fpr_14));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(4), aot_gpr_6);
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(8), aot_gpr_6);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(28)));
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(12), aot_gpr_6);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-24620)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    aot_gpr_6 = (aot_gpr_5 + static_cast<std::uint32_t>(16));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_unary_ct<0u, 0u, 3u, 2u>();
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_14));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(4), ctx.gpr[8]);
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(8), aot_gpr_4);
    aot_gpr_31 = (0x088B7854u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0091_entry, 91u, 621u, 0x08972D80u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088B7854u) goto L_088B7854;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B7854:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-24620)));
    aot_gpr_5 = (0u | 1u);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8552), aot_gpr_16);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-24608)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (0u | 3u);
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_5) < 3 ? 1u : 0u);
    if (aot_gpr_6 != 0u) {
    aot_gpr_4 = (aot_gpr_5 | 0u);
        goto L_088B787C;
    }
    goto L_088B787C;
L_088B787C:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-24608), aot_gpr_4);
    goto L_088B7880;
L_088B7880:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(80)));
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(84)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(88)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088B7894:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-24608)));
    aot_gpr_5 = (0u | 0u);
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (ctx.gpr[28] | 0u);
      if (branch_taken) {
          goto L_088B78C4;
      }
      goto L_088B78A8;
    }
L_088B78A8:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(-24620)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store8(aot_gpr_6 + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(0u));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-24608)));
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_6) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 != 0u;
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088B78A8;
      }
      goto L_088B78C4;
    }
L_088B78C4:
    jump_target = aot_gpr_31;
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-24608), 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088B78CC:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8464)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8468)));
    aot_fpr_15 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8472)));
    { const float fs = aot_fpr_13; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8496)));
    { const float fs = aot_fpr_14; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8500)));
    { const float fs = aot_fpr_15; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_15 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_15 = fs * ft; }
    { const float fs = ctx.fpr[16]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8504)));
    { const float fs = ctx.fpr[17]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8512), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8516), std::bit_cast<std::uint32_t>(aot_fpr_14));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8520), std::bit_cast<std::uint32_t>(aot_fpr_15));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_14));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8528), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    { const float fs = ctx.fpr[18]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8532), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-24628)));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(aot_fpr_15));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(24));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8536), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8524)));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(12), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-24624)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8528)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8532)));
    aot_fpr_15 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8536)));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(24));
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(aot_fpr_14));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8540)));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(aot_fpr_15));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_6);
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    jump_target = aot_gpr_31;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(12), aot_gpr_5);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088B797C:
    aot_gpr_4 = (16256u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8496)));
    aot_gpr_4 = (16153u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 39322u);
    aot_fpr_14 = aot_fpr_13 - aot_fpr_12;
    aot_fpr_15 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8500)));
    ctx.fpr[16] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (16076u << 16u);
    ctx.fpr[17] = aot_fpr_13 - aot_fpr_15;
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8512), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8516), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fpr[18] = std::bit_cast<float>(aot_gpr_4);
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8504)));
    { const float fs = aot_fpr_14; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8520), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_fpr_13 = aot_fpr_13 - ctx.fpr[19];
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-24628)));
    aot_fpr_12 = aot_fpr_12 + aot_fpr_14;
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(24));
    aot_fpr_15 = aot_fpr_15 + ctx.fpr[17];
    { const float fs = aot_fpr_13; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8528), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8532), std::bit_cast<std::uint32_t>(aot_fpr_15));
    aot_fpr_12 = ctx.fpr[19] + aot_fpr_13;
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8536), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_6);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8524)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(12), aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-24624)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8528)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8532)));
    aot_fpr_15 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8536)));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_14));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(24));
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8540)));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(aot_fpr_15));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_6);
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    jump_target = aot_gpr_31;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(12), aot_gpr_5);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088B7A4C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-24628)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8464)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8468)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8472)));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(24));
    aot_fpr_15 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8476)));
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(aot_fpr_14));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_6);
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_15));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(12), aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x088B7A94u);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(8464));
    goto L_088B731C;
L_088B7A94:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-24624)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8496)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8500)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8504)));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(24));
    aot_fpr_15 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8508)));
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(aot_fpr_14));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_6);
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_15));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(12), aot_gpr_5);
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088B7AD8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-24624)));
    jump_target = aot_gpr_31;
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(0u));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088B7AE4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-24624)));
    aot_gpr_5 = (0u | 1u);
    jump_target = aot_gpr_31;
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(aot_gpr_5));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088B7AF4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-24628)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-24604)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-24600)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-24596)));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(24));
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_fpr_15 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-24592)));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(aot_fpr_14));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_6);
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_15));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    jump_target = aot_gpr_31;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(12), aot_gpr_5);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088B7B30:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-24628)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8464)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8468)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8472)));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(24));
    aot_fpr_15 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8476)));
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(aot_fpr_14));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_6);
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_15));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(12), aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x088B7B78u);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(8464));
    goto L_088B731C;
L_088B7B78:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088B7B84:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-24628)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8480)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8484)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8488)));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(24));
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_fpr_15 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8492)));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(aot_fpr_14));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_6);
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_15));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    jump_target = aot_gpr_31;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(12), aot_gpr_5);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088B7BC0:
    aot_gpr_4 = (2236u << 16u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(29552)));
    aot_gpr_6 = (6144u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(29552)));
    aot_gpr_6 = (6400u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(29552), aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(29552)));
    aot_gpr_6 = (6656u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(29552), aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(29552)));
    aot_gpr_6 = (6912u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(29552), aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(29552)));
    aot_gpr_6 = (21504u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(29552), aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(29552)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(4));
    jump_target = aot_gpr_31;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(29552), aot_gpr_5);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088B7C30:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088B7C68;
      }
      goto L_088B7C38;
    }
L_088B7C38:
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(32)));
    aot_gpr_5 = (17279u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    { const float fs = aot_fpr_14; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_gpr_5 = (20224u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_14 < aot_fpr_12)) ? 0x00800000u : 0u);
    if (((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_14 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_14));
        goto L_088B7C70;
    }
    goto L_088B7C60;
L_088B7C60:
    { const bool branch_taken = 0u == 0u;
    aot_fpr_14 = aot_fpr_14 - aot_fpr_12;
      if (branch_taken) {
          goto L_088B7C78;
      }
      goto L_088B7C68;
    }
L_088B7C68:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088B7D4C;
      }
      goto L_088B7C70;
    }
L_088B7C70:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(aot_fpr_14));
      if (branch_taken) {
          goto L_088B7C88;
      }
      goto L_088B7C78;
    }
L_088B7C78:
    ctx.gpr[7] = (32768u << 16u);
    aot_fpr_14 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_14));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_14));
    ctx.gpr[7] = (aot_gpr_5 + ctx.gpr[7]);
    goto L_088B7C88;
L_088B7C88:
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(28)));
    { const float fs = aot_fpr_14; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_14 < aot_fpr_12)) ? 0x00800000u : 0u);
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_14 = aot_fpr_14 - aot_fpr_12;
        goto L_088B7CAC;
    }
    goto L_088B7CA0;
L_088B7CA0:
    aot_fpr_14 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_14));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(aot_fpr_14));
      if (branch_taken) {
          goto L_088B7CBC;
      }
      goto L_088B7CAC;
    }
L_088B7CAC:
    aot_gpr_6 = (32768u << 16u);
    aot_fpr_14 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_14));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_14));
    aot_gpr_6 = (aot_gpr_5 + aot_gpr_6);
    goto L_088B7CBC;
L_088B7CBC:
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(24)));
    { const float fs = aot_fpr_14; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 < aot_fpr_12)) ? 0x00800000u : 0u);
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_12 = aot_fpr_13 - aot_fpr_12;
        goto L_088B7CE0;
    }
    goto L_088B7CD4;
L_088B7CD4:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_13));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_088B7CF0;
      }
      goto L_088B7CE0;
    }
L_088B7CE0:
    aot_gpr_5 = (32768u << 16u);
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_5);
    goto L_088B7CF0;
L_088B7CF0:
    aot_gpr_4 = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (aot_gpr_4 < static_cast<std::uint32_t>(256) ? 1u : 0u);
    if (ctx.gpr[7] == 0u) {
    aot_gpr_4 = (0u | 255u);
        goto L_088B7D00;
    }
    goto L_088B7D00;
L_088B7D00:
    ctx.gpr[7] = (aot_gpr_6 < static_cast<std::uint32_t>(256) ? 1u : 0u);
    if (ctx.gpr[7] == 0u) {
    aot_gpr_6 = (0u | 255u);
        goto L_088B7D0C;
    }
    goto L_088B7D0C;
L_088B7D0C:
    ctx.gpr[7] = (aot_gpr_5 < static_cast<std::uint32_t>(256) ? 1u : 0u);
    if (ctx.gpr[7] == 0u) {
    aot_gpr_5 = (0u | 255u);
        goto L_088B7D18;
    }
    goto L_088B7D18;
L_088B7D18:
    aot_gpr_4 = (aot_gpr_4 << 16u);
    aot_gpr_6 = (aot_gpr_6 << 8u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8564), aot_gpr_4);
    aot_gpr_5 = (23552u << 16u);
    aot_gpr_4 = (aot_gpr_4 | aot_gpr_5);
    aot_gpr_5 = (2236u << 16u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(29552)));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(29552)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(29552), aot_gpr_4);
    goto L_088B7D4C;
L_088B7D4C:
    jump_target = aot_gpr_31;
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088B7D54:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_5 & 255u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), ctx.gpr[20]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_gpr_31);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_16 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_088B7DD0;
      }
      goto L_088B7D7C;
    }
L_088B7D7C:
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[17]) < 3 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088B7DD0;
      }
      goto L_088B7D88;
    }
L_088B7D88:
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    aot_gpr_31 = (0x088B7D94u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0091_entry, 91u, 725u, 0x08973704u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088B7D94u) goto L_088B7D94;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B7D94:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(32)));
    aot_gpr_4 = (17279u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[19] = (2236u << 16u);
    { const float fs = aot_fpr_13; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_gpr_4 = (20224u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(112));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 < aot_fpr_14)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    ctx.gpr[20] = (ctx.gpr[19] + static_cast<std::uint32_t>(29552));
      if (branch_taken) {
          goto L_088B7DD8;
      }
      goto L_088B7DC4;
    }
L_088B7DC4:
    aot_fpr_13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_13));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
      if (branch_taken) {
          goto L_088B7DEC;
      }
      goto L_088B7DD0;
    }
L_088B7DD0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088B7F30;
      }
      goto L_088B7DD8;
    }
L_088B7DD8:
    aot_fpr_13 = aot_fpr_13 - aot_fpr_14;
    aot_gpr_4 = (32768u << 16u);
    aot_fpr_13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_13));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    goto L_088B7DEC;
L_088B7DEC:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(28)));
    { const float fs = aot_fpr_13; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 < aot_fpr_14)) ? 0x00800000u : 0u);
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_13 = aot_fpr_13 - aot_fpr_14;
        goto L_088B7E10;
    }
    goto L_088B7E04;
L_088B7E04:
    aot_fpr_13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_13));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
      if (branch_taken) {
          goto L_088B7E20;
      }
      goto L_088B7E10;
    }
L_088B7E10:
    aot_gpr_5 = (32768u << 16u);
    aot_fpr_13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_13));
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_gpr_5 = (aot_gpr_6 + aot_gpr_5);
    goto L_088B7E20;
L_088B7E20:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(24)));
    { const float fs = aot_fpr_13; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_14)) ? 0x00800000u : 0u);
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_12 = aot_fpr_12 - aot_fpr_14;
        goto L_088B7E44;
    }
    goto L_088B7E38;
L_088B7E38:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_088B7E54;
      }
      goto L_088B7E44;
    }
L_088B7E44:
    aot_gpr_6 = (32768u << 16u);
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_6 = (ctx.gpr[7] + aot_gpr_6);
    goto L_088B7E54;
L_088B7E54:
    ctx.gpr[7] = (aot_gpr_4 < static_cast<std::uint32_t>(256) ? 1u : 0u);
    if (ctx.gpr[7] == 0u) {
    aot_gpr_4 = (0u | 255u);
        goto L_088B7E60;
    }
    goto L_088B7E60;
L_088B7E60:
    ctx.gpr[7] = (aot_gpr_5 < static_cast<std::uint32_t>(256) ? 1u : 0u);
    if (ctx.gpr[7] == 0u) {
    aot_gpr_5 = (0u | 255u);
        goto L_088B7E6C;
    }
    goto L_088B7E6C;
L_088B7E6C:
    ctx.gpr[7] = (aot_gpr_6 < static_cast<std::uint32_t>(256) ? 1u : 0u);
    if (ctx.gpr[7] == 0u) {
    aot_gpr_6 = (0u | 255u);
        goto L_088B7E78;
    }
    goto L_088B7E78;
L_088B7E78:
    aot_gpr_4 = (aot_gpr_4 << 16u);
    ctx.gpr[7] = (65280u << 16u);
    aot_gpr_4 = (ctx.gpr[7] + aot_gpr_4);
    aot_gpr_5 = (aot_gpr_5 << 8u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_6 = (aot_gpr_4 + aot_gpr_6);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x088B7E9Cu);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0054_entry, 54u, 516u, 0x088DFDD4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088B7E9Cu) goto L_088B7E9C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B7E9C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23440)));
    aot_fpr_12 = std::bit_cast<float>(0u);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(11240)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 <= aot_fpr_12)) ? 0x00800000u : 0u);
    if (((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
        goto L_088B7ED4;
    }
    goto L_088B7EB8;
L_088B7EB8:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8576)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8580)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8584)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(aot_fpr_13));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_088B7EF4;
      }
      goto L_088B7ED4;
    }
L_088B7ED4:
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12) ^ 0x80000000u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12) ^ 0x80000000u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12) ^ 0x80000000u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_088B7EF4;
L_088B7EF4:
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_6 = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    aot_gpr_31 = (0x088B7F0Cu);
    ctx.gpr[8] = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0054_entry, 54u, 506u, 0x088DFB74u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088B7F0Cu) goto L_088B7F0C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088B7F0C:
    aot_gpr_4 = (ctx.gpr[17] & 3u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(24));
    aot_gpr_4 = (aot_gpr_4 << 24u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(29552)));
    aot_gpr_4 = (aot_gpr_4 | 1u);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(29552)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(29552), aot_gpr_4);
    goto L_088B7F30;
L_088B7F30:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(12)));
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    ctx.gpr[19] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(24)));
    ctx.gpr[20] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(28)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(32)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088B7F50:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-64));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(20)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(32));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_gpr_5 = (aot_gpr_4 & 96u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(40), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(44), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(48), aot_gpr_31);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_088B7FF8;
      }
      goto L_088B7F80;
    }
L_088B7F80:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-24624)));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(2)));
    aot_gpr_5 = (aot_gpr_5 & 1u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-24628)));
      if (branch_taken) {
          goto L_088B7FE8;
      }
      goto L_088B7F94;
    }
L_088B7F94:
    aot_gpr_31 = (0x088B7F9Cu);
    goto L_088B7C30;
L_088B7F9C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-24624)));
    aot_gpr_31 = (0x088B7FA8u);
    aot_gpr_5 = (0u | 0u);
    goto L_088B7D54;
L_088B7FA8:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-24608)));
    aot_gpr_4 = (0u | 0u);
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_16 = (ctx.gpr[28] | 0u);
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0045_entry, 45u, 16u, 0x088B81B8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_088B7FBC;
    }
L_088B7FBC:
    ctx.gpr[17] = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(-24620)));
    aot_gpr_31 = (0x088B7FCCu);
    aot_gpr_5 = (ctx.gpr[17] & 255u);
    goto L_088B7D54;
L_088B7FCC:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-24608)));
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088B7FBC;
      }
      goto L_088B7FE0;
    }
L_088B7FE0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0045_entry, 45u, 16u, 0x088B81B8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_088B7FE8;
    }
L_088B7FE8:
    aot_gpr_31 = (0x088B7FF0u);
    goto L_088B7C30;
L_088B7FF0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0045_entry, 45u, 16u, 0x088B81B8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_088B7FF8;
    }
L_088B7FF8:
    aot_gpr_4 = (aot_gpr_4 & 28u);
    aot_gpr_5 = (0u | 20u);
    ctx.pc = 0x088B8000u; AOT_REGCACHE_SYNC_OUT(); return;
}

#undef AOT_REGCACHE_SYNC_IN
#undef AOT_REGCACHE_SYNC_OUT

void recomp_unit_0044(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0044_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_44(Runtime &runtime) {
    runtime.register_generated_unit(44u, 0x088B4000u, 16384u, &recomp_unit_0044, &recomp_unit_0044_entry);
    // PSPRECOMP_V812_COMPACT_REGISTRATION: same entry set, looped once in Runtime instead of source-expanded calls.
    runtime.register_generated_entry_mask(0x088B4004u, &recomp_unit_0044, "recomp_unit_0044",
                                          kEntryMasks_recomp_unit_0044, 64u);
}
} // namespace psprecomp
