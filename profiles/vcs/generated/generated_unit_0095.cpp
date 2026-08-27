#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include "vcs_resident_regions.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
// PSPRECOMP_V811_COMPACT_DISPATCH: 64-slot occupancy masks + per-group base id.
static constexpr std::uint64_t kEntryMasks_recomp_unit_0095[64] = {
    0x200154496400028Bull, 0x540000A802848001ull, 0x5149144492A22AA9ull, 0x0010044AC9090000ull,
    0x808952D555555504ull, 0x4A0A555105500108ull, 0x0082122404A92905ull, 0x08002856A8810004ull,
    0x4220069510901A08ull, 0x0289100428614401ull, 0x509448A292002002ull, 0xA920A29491584644ull,
    0x414A452914912948ull, 0x2008501820254952ull, 0x08205C2104018930ull, 0x44400444006802E1ull,
    0x9300089000960800ull, 0x24D6662000000202ull, 0x01286210A808452Cull, 0x5080004800000204ull,
    0x00004D0016902441ull, 0x00000008082A0002ull, 0x210A080000048040ull, 0x0908AA1010800080ull,
    0x03402C4504021552ull, 0x88B0580340204458ull, 0x16088B058222C160ull, 0x3401011168034010ull,
    0x5400000548515680ull, 0x0000009250400000ull, 0x8000001140004800ull, 0x03014100000020A2ull,
    0x00841400000A8000ull, 0x0800001000000000ull, 0x0840000000000004ull, 0x0000924000000080ull,
    0x02824A0000104000ull, 0x5280000841030842ull, 0x0041608404280008ull, 0x050100B494A40410ull,
    0x0400000008000009ull, 0x10594A4800005000ull, 0x8214400000000000ull, 0x0000090C40824924ull,
    0x8200000000000000ull, 0x0480000100004920ull, 0x9020000104924940ull, 0x8440A00214004224ull,
    0x0088140420A00080ull, 0x2000800000000000ull, 0x0000100004924A04ull, 0x0000002000080002ull,
    0x0000000000080000ull, 0x0000000000000000ull, 0x0000000000000000ull, 0x0000000000000000ull,
    0x0005000400000004ull, 0x0000000000000000ull, 0x9450824924900000ull, 0x0000008010004924ull,
    0xA20A100A82000550ull, 0x2028040000544152ull, 0xA402400000054200ull, 0x02484A00000041A4ull,
};
static constexpr std::uint16_t kEntryBases_recomp_unit_0095[64] = {
    1u, 17u, 28u, 51u, 62u, 87u, 105u, 121u, 134u, 150u, 164u, 179u, 201u, 222u, 238u, 253u,
    267u, 279u, 293u, 310u, 317u, 330u, 336u, 344u, 355u, 372u, 389u, 408u, 422u, 437u, 443u, 449u,
    458u, 465u, 467u, 470u, 475u, 483u, 495u, 505u, 520u, 524u, 536u, 541u, 553u, 555u, 562u, 574u,
    586u, 595u, 597u, 606u, 609u, 610u, 610u, 610u, 610u, 614u, 614u, 628u, 635u, 649u, 661u, 670u,
};
void recomp_unit_0095_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
// PSPRECOMP_AOT_REGCACHE_BEGIN
// PSPRECOMP_AOT_REGCACHE_META gprs=4,5,29,6,31,2 fprs=12,13,14,15 gpr_occ=3289 fpr_occ=898 gpr_total=5546 fpr_total=1440
    std::uint32_t aot_gpr_4 = ctx.gpr[4];
    std::uint32_t aot_gpr_5 = ctx.gpr[5];
    std::uint32_t aot_gpr_29 = ctx.gpr[29];
    std::uint32_t aot_gpr_6 = ctx.gpr[6];
    std::uint32_t aot_gpr_31 = ctx.gpr[31];
    std::uint32_t aot_gpr_2 = ctx.gpr[2];
    float aot_fpr_12 = ctx.fpr[12];
    float aot_fpr_13 = ctx.fpr[13];
    float aot_fpr_14 = ctx.fpr[14];
    float aot_fpr_15 = ctx.fpr[15];
    bool aot_regcache_valid = true;
#define AOT_REGCACHE_SYNC_OUT() do { if (aot_regcache_valid) { ctx.gpr[4] = aot_gpr_4; ctx.gpr[5] = aot_gpr_5; ctx.gpr[29] = aot_gpr_29; ctx.gpr[6] = aot_gpr_6; ctx.gpr[31] = aot_gpr_31; ctx.gpr[2] = aot_gpr_2; ctx.fpr[12] = aot_fpr_12; ctx.fpr[13] = aot_fpr_13; ctx.fpr[14] = aot_fpr_14; ctx.fpr[15] = aot_fpr_15; } } while (false)
#define AOT_REGCACHE_SYNC_IN() do { if (aot_regcache_valid) { aot_gpr_4 = ctx.gpr[4]; aot_gpr_5 = ctx.gpr[5]; aot_gpr_29 = ctx.gpr[29]; aot_gpr_6 = ctx.gpr[6]; aot_gpr_31 = ctx.gpr[31]; aot_gpr_2 = ctx.gpr[2]; aot_fpr_12 = ctx.fpr[12]; aot_fpr_13 = ctx.fpr[13]; aot_fpr_14 = ctx.fpr[14]; aot_fpr_15 = ctx.fpr[15]; } } while (false)
// PSPRECOMP_AOT_REGCACHE_END
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_redispatch_rounds = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08980000u;
        entry_id = 0u;
        if (entry_delta < 16360u && (entry_delta & 3u) == 0u) {
            const std::uint32_t entry_slot = entry_delta >> 2u;
            const std::uint32_t entry_group = entry_slot >> 6u;
            const std::uint64_t entry_mask = kEntryMasks_recomp_unit_0095[entry_group];
            const std::uint64_t entry_bit = 1ull << (entry_slot & 63u);
            if ((entry_mask & entry_bit) != 0u) {
                entry_id = static_cast<std::uint16_t>(
                    kEntryBases_recomp_unit_0095[entry_group] +
                    std::popcount(entry_mask & (entry_bit - 1ull)));
            }
        }
    }
    switch (entry_id) {
    case 1u: goto L_08980000;
    case 2u: goto L_08980004;
    case 3u: goto L_0898000C;
    case 4u: goto L_0898001C;
    case 5u: goto L_08980024;
    case 6u: goto L_08980068;
    case 7u: goto L_08980074;
    case 8u: goto L_08980078;
    case 9u: goto L_08980080;
    case 10u: goto L_0898008C;
    case 11u: goto L_08980098;
    case 12u: goto L_089800A8;
    case 13u: goto L_089800B0;
    case 14u: goto L_089800B8;
    case 15u: goto L_089800C0;
    case 16u: goto L_089800F4;
    case 17u: goto L_08980100;
    case 18u: goto L_0898013C;
    case 19u: goto L_08980148;
    case 20u: goto L_0898015C;
    case 21u: goto L_08980164;
    case 22u: goto L_0898018C;
    case 23u: goto L_08980194;
    case 24u: goto L_0898019C;
    case 25u: goto L_089801E8;
    case 26u: goto L_089801F0;
    case 27u: goto L_089801F8;
    case 28u: goto L_08980200;
    case 29u: goto L_0898020C;
    case 30u: goto L_08980214;
    case 31u: goto L_0898021C;
    case 32u: goto L_08980224;
    case 33u: goto L_0898022C;
    case 34u: goto L_08980234;
    case 35u: goto L_08980244;
    case 36u: goto L_08980254;
    case 37u: goto L_0898025C;
    case 38u: goto L_08980264;
    case 39u: goto L_08980270;
    case 40u: goto L_0898027C;
    case 41u: goto L_08980288;
    case 42u: goto L_08980298;
    case 43u: goto L_089802A8;
    case 44u: goto L_089802B0;
    case 45u: goto L_089802C0;
    case 46u: goto L_089802CC;
    case 47u: goto L_089802D8;
    case 48u: goto L_089802E0;
    case 49u: goto L_089802F0;
    case 50u: goto L_089802F8;
    case 51u: goto L_08980340;
    case 52u: goto L_0898034C;
    case 53u: goto L_08980360;
    case 54u: goto L_0898036C;
    case 55u: goto L_08980378;
    case 56u: goto L_0898037C;
    case 57u: goto L_08980384;
    case 58u: goto L_0898038C;
    case 59u: goto L_08980398;
    case 60u: goto L_089803A8;
    case 61u: goto L_089803D0;
    case 62u: goto L_08980408;
    case 63u: goto L_08980420;
    case 64u: goto L_08980428;
    case 65u: goto L_08980430;
    case 66u: goto L_08980438;
    case 67u: goto L_08980440;
    case 68u: goto L_08980448;
    case 69u: goto L_08980450;
    case 70u: goto L_08980458;
    case 71u: goto L_08980460;
    case 72u: goto L_08980468;
    case 73u: goto L_08980470;
    case 74u: goto L_08980478;
    case 75u: goto L_08980480;
    case 76u: goto L_08980488;
    case 77u: goto L_08980490;
    case 78u: goto L_08980498;
    case 79u: goto L_0898049C;
    case 80u: goto L_089804A4;
    case 81u: goto L_089804B0;
    case 82u: goto L_089804B8;
    case 83u: goto L_089804C0;
    case 84u: goto L_089804CC;
    case 85u: goto L_089804DC;
    case 86u: goto L_089804FC;
    case 87u: goto L_0898050C;
    case 88u: goto L_08980520;
    case 89u: goto L_08980550;
    case 90u: goto L_08980558;
    case 91u: goto L_08980560;
    case 92u: goto L_08980568;
    case 93u: goto L_08980580;
    case 94u: goto L_08980590;
    case 95u: goto L_08980598;
    case 96u: goto L_089805A0;
    case 97u: goto L_089805A8;
    case 98u: goto L_089805B0;
    case 99u: goto L_089805B8;
    case 100u: goto L_089805C4;
    case 101u: goto L_089805CC;
    case 102u: goto L_089805E4;
    case 103u: goto L_089805EC;
    case 104u: goto L_089805F8;
    case 105u: goto L_08980600;
    case 106u: goto L_08980608;
    case 107u: goto L_08980620;
    case 108u: goto L_0898062C;
    case 109u: goto L_08980634;
    case 110u: goto L_08980640;
    case 111u: goto L_0898064C;
    case 112u: goto L_08980654;
    case 113u: goto L_0898065C;
    case 114u: goto L_08980668;
    case 115u: goto L_08980688;
    case 116u: goto L_08980694;
    case 117u: goto L_089806A4;
    case 118u: goto L_089806B0;
    case 119u: goto L_089806C4;
    case 120u: goto L_089806DC;
    case 121u: goto L_08980708;
    case 122u: goto L_08980740;
    case 123u: goto L_0898075C;
    case 124u: goto L_0898076C;
    case 125u: goto L_08980774;
    case 126u: goto L_0898077C;
    case 127u: goto L_08980784;
    case 128u: goto L_08980788;
    case 129u: goto L_08980790;
    case 130u: goto L_08980798;
    case 131u: goto L_089807AC;
    case 132u: goto L_089807B4;
    case 133u: goto L_089807EC;
    case 134u: goto L_0898080C;
    case 135u: goto L_08980824;
    case 136u: goto L_0898082C;
    case 137u: goto L_08980830;
    case 138u: goto L_08980850;
    case 139u: goto L_0898085C;
    case 140u: goto L_08980870;
    case 141u: goto L_08980880;
    case 142u: goto L_08980888;
    case 143u: goto L_08980890;
    case 144u: goto L_0898089C;
    case 145u: goto L_089808A4;
    case 146u: goto L_089808A8;
    case 147u: goto L_089808D4;
    case 148u: goto L_089808E4;
    case 149u: goto L_089808F8;
    case 150u: goto L_08980900;
    case 151u: goto L_08980928;
    case 152u: goto L_08980938;
    case 153u: goto L_08980940;
    case 154u: goto L_08980954;
    case 155u: goto L_08980958;
    case 156u: goto L_0898096C;
    case 157u: goto L_08980974;
    case 158u: goto L_08980988;
    case 159u: goto L_089809B0;
    case 160u: goto L_089809C0;
    case 161u: goto L_089809CC;
    case 162u: goto L_089809DC;
    case 163u: goto L_089809E4;
    case 164u: goto L_08980A04;
    case 165u: goto L_08980A34;
    case 166u: goto L_08980A64;
    case 167u: goto L_08980A70;
    case 168u: goto L_08980A7C;
    case 169u: goto L_08980A84;
    case 170u: goto L_08980A94;
    case 171u: goto L_08980A9C;
    case 172u: goto L_08980AAC;
    case 173u: goto L_08980AB8;
    case 174u: goto L_08980AC8;
    case 175u: goto L_08980AD0;
    case 176u: goto L_08980ADC;
    case 177u: goto L_08980AF0;
    case 178u: goto L_08980AF8;
    case 179u: goto L_08980B08;
    case 180u: goto L_08980B18;
    case 181u: goto L_08980B24;
    case 182u: goto L_08980B28;
    case 183u: goto L_08980B38;
    case 184u: goto L_08980B4C;
    case 185u: goto L_08980B50;
    case 186u: goto L_08980B58;
    case 187u: goto L_08980B60;
    case 188u: goto L_08980B70;
    case 189u: goto L_08980B7C;
    case 190u: goto L_08980B88;
    case 191u: goto L_08980B90;
    case 192u: goto L_08980B9C;
    case 193u: goto L_08980BA4;
    case 194u: goto L_08980BB4;
    case 195u: goto L_08980BBC;
    case 196u: goto L_08980BD4;
    case 197u: goto L_08980BE0;
    case 198u: goto L_08980BEC;
    case 199u: goto L_08980BF4;
    case 200u: goto L_08980BFC;
    case 201u: goto L_08980C0C;
    case 202u: goto L_08980C18;
    case 203u: goto L_08980C20;
    case 204u: goto L_08980C2C;
    case 205u: goto L_08980C34;
    case 206u: goto L_08980C40;
    case 207u: goto L_08980C50;
    case 208u: goto L_08980C5C;
    case 209u: goto L_08980C68;
    case 210u: goto L_08980C70;
    case 211u: goto L_08980C80;
    case 212u: goto L_08980C8C;
    case 213u: goto L_08980C94;
    case 214u: goto L_08980CA0;
    case 215u: goto L_08980CA8;
    case 216u: goto L_08980CB8;
    case 217u: goto L_08980CC4;
    case 218u: goto L_08980CCC;
    case 219u: goto L_08980CD8;
    case 220u: goto L_08980CE0;
    case 221u: goto L_08980CF8;
    case 222u: goto L_08980D04;
    case 223u: goto L_08980D10;
    case 224u: goto L_08980D18;
    case 225u: goto L_08980D20;
    case 226u: goto L_08980D2C;
    case 227u: goto L_08980D38;
    case 228u: goto L_08980D40;
    case 229u: goto L_08980D48;
    case 230u: goto L_08980D54;
    case 231u: goto L_08980D74;
    case 232u: goto L_08980D8C;
    case 233u: goto L_08980D90;
    case 234u: goto L_08980DB0;
    case 235u: goto L_08980DB8;
    case 236u: goto L_08980DCC;
    case 237u: goto L_08980DF4;
    case 238u: goto L_08980E10;
    case 239u: goto L_08980E14;
    case 240u: goto L_08980E20;
    case 241u: goto L_08980E2C;
    case 242u: goto L_08980E3C;
    case 243u: goto L_08980E40;
    case 244u: goto L_08980E68;
    case 245u: goto L_08980E80;
    case 246u: goto L_08980E94;
    case 247u: goto L_08980EA8;
    case 248u: goto L_08980EAC;
    case 249u: goto L_08980EB0;
    case 250u: goto L_08980EB8;
    case 251u: goto L_08980ED4;
    case 252u: goto L_08980EEC;
    case 253u: goto L_08980F00;
    case 254u: goto L_08980F14;
    case 255u: goto L_08980F18;
    case 256u: goto L_08980F1C;
    case 257u: goto L_08980F24;
    case 258u: goto L_08980F4C;
    case 259u: goto L_08980F54;
    case 260u: goto L_08980F58;
    case 261u: goto L_08980F88;
    case 262u: goto L_08980F98;
    case 263u: goto L_08980FA8;
    case 264u: goto L_08980FD8;
    case 265u: goto L_08980FE8;
    case 266u: goto L_08980FF8;
    case 267u: goto L_0898102C;
    case 268u: goto L_08981044;
    case 269u: goto L_08981048;
    case 270u: goto L_08981050;
    case 271u: goto L_0898105C;
    case 272u: goto L_08981090;
    case 273u: goto L_0898109C;
    case 274u: goto L_089810AC;
    case 275u: goto L_089810E0;
    case 276u: goto L_089810E4;
    case 277u: goto L_089810F0;
    case 278u: goto L_089810FC;
    case 279u: goto L_08981104;
    case 280u: goto L_08981124;
    case 281u: goto L_08981194;
    case 282u: goto L_089811A4;
    case 283u: goto L_089811A8;
    case 284u: goto L_089811B4;
    case 285u: goto L_089811B8;
    case 286u: goto L_089811C4;
    case 287u: goto L_089811C8;
    case 288u: goto L_089811D0;
    case 289u: goto L_089811D8;
    case 290u: goto L_089811DC;
    case 291u: goto L_089811E8;
    case 292u: goto L_089811F4;
    case 293u: goto L_08981208;
    case 294u: goto L_0898120C;
    case 295u: goto L_08981214;
    case 296u: goto L_08981220;
    case 297u: goto L_08981228;
    case 298u: goto L_08981238;
    case 299u: goto L_0898124C;
    case 300u: goto L_0898126C;
    case 301u: goto L_08981274;
    case 302u: goto L_0898127C;
    case 303u: goto L_08981290;
    case 304u: goto L_089812A4;
    case 305u: goto L_089812B4;
    case 306u: goto L_089812B8;
    case 307u: goto L_089812CC;
    case 308u: goto L_089812D4;
    case 309u: goto L_089812E0;
    case 310u: goto L_08981308;
    case 311u: goto L_08981324;
    case 312u: goto L_0898138C;
    case 313u: goto L_08981398;
    case 314u: goto L_089813DC;
    case 315u: goto L_089813F0;
    case 316u: goto L_089813F8;
    case 317u: goto L_08981400;
    case 318u: goto L_08981418;
    case 319u: goto L_08981428;
    case 320u: goto L_08981434;
    case 321u: goto L_08981450;
    case 322u: goto L_0898145C;
    case 323u: goto L_08981464;
    case 324u: goto L_08981468;
    case 325u: goto L_08981470;
    case 326u: goto L_089814A0;
    case 327u: goto L_089814A8;
    case 328u: goto L_089814AC;
    case 329u: goto L_089814B8;
    case 330u: goto L_08981504;
    case 331u: goto L_08981544;
    case 332u: goto L_0898154C;
    case 333u: goto L_08981554;
    case 334u: goto L_0898156C;
    case 335u: goto L_0898158C;
    case 336u: goto L_08981618;
    case 337u: goto L_0898163C;
    case 338u: goto L_08981648;
    case 339u: goto L_089816AC;
    case 340u: goto L_089816C4;
    case 341u: goto L_089816CC;
    case 342u: goto L_089816E0;
    case 343u: goto L_089816F4;
    case 344u: goto L_0898171C;
    case 345u: goto L_0898175C;
    case 346u: goto L_08981770;
    case 347u: goto L_08981790;
    case 348u: goto L_089817A4;
    case 349u: goto L_089817AC;
    case 350u: goto L_089817B4;
    case 351u: goto L_089817BC;
    case 352u: goto L_089817CC;
    case 353u: goto L_089817E0;
    case 354u: goto L_089817EC;
    case 355u: goto L_08981804;
    case 356u: goto L_08981810;
    case 357u: goto L_08981818;
    case 358u: goto L_08981820;
    case 359u: goto L_08981828;
    case 360u: goto L_08981830;
    case 361u: goto L_08981844;
    case 362u: goto L_08981868;
    case 363u: goto L_08981880;
    case 364u: goto L_08981888;
    case 365u: goto L_08981898;
    case 366u: goto L_089818A8;
    case 367u: goto L_089818AC;
    case 368u: goto L_089818B4;
    case 369u: goto L_089818D8;
    case 370u: goto L_089818E0;
    case 371u: goto L_089818E4;
    case 372u: goto L_0898190C;
    case 373u: goto L_08981910;
    case 374u: goto L_08981918;
    case 375u: goto L_08981928;
    case 376u: goto L_08981938;
    case 377u: goto L_08981954;
    case 378u: goto L_08981978;
    case 379u: goto L_08981980;
    case 380u: goto L_08981984;
    case 381u: goto L_089819AC;
    case 382u: goto L_089819B0;
    case 383u: goto L_089819B8;
    case 384u: goto L_089819D0;
    case 385u: goto L_089819D4;
    case 386u: goto L_089819DC;
    case 387u: goto L_089819EC;
    case 388u: goto L_089819FC;
    case 389u: goto L_08981A14;
    case 390u: goto L_08981A18;
    case 391u: goto L_08981A20;
    case 392u: goto L_08981A38;
    case 393u: goto L_08981A3C;
    case 394u: goto L_08981A44;
    case 395u: goto L_08981A54;
    case 396u: goto L_08981A64;
    case 397u: goto L_08981A7C;
    case 398u: goto L_08981A80;
    case 399u: goto L_08981A88;
    case 400u: goto L_08981AA0;
    case 401u: goto L_08981AA4;
    case 402u: goto L_08981AAC;
    case 403u: goto L_08981ABC;
    case 404u: goto L_08981ACC;
    case 405u: goto L_08981AE4;
    case 406u: goto L_08981AE8;
    case 407u: goto L_08981AF0;
    case 408u: goto L_08981B10;
    case 409u: goto L_08981B38;
    case 410u: goto L_08981B40;
    case 411u: goto L_08981B44;
    case 412u: goto L_08981B6C;
    case 413u: goto L_08981B74;
    case 414u: goto L_08981B78;
    case 415u: goto L_08981B80;
    case 416u: goto L_08981B90;
    case 417u: goto L_08981BA0;
    case 418u: goto L_08981BC0;
    case 419u: goto L_08981BE8;
    case 420u: goto L_08981BF0;
    case 421u: goto L_08981BF4;
    case 422u: goto L_08981C1C;
    case 423u: goto L_08981C24;
    case 424u: goto L_08981C28;
    case 425u: goto L_08981C30;
    case 426u: goto L_08981C38;
    case 427u: goto L_08981C40;
    case 428u: goto L_08981C50;
    case 429u: goto L_08981C58;
    case 430u: goto L_08981C6C;
    case 431u: goto L_08981C78;
    case 432u: goto L_08981C80;
    case 433u: goto L_08981C88;
    case 434u: goto L_08981CE8;
    case 435u: goto L_08981CF0;
    case 436u: goto L_08981CF8;
    case 437u: goto L_08981D58;
    case 438u: goto L_08981D70;
    case 439u: goto L_08981D78;
    case 440u: goto L_08981D84;
    case 441u: goto L_08981D90;
    case 442u: goto L_08981D9C;
    case 443u: goto L_08981E2C;
    case 444u: goto L_08981E38;
    case 445u: goto L_08981E78;
    case 446u: goto L_08981E80;
    case 447u: goto L_08981E90;
    case 448u: goto L_08981EFC;
    case 449u: goto L_08981F04;
    case 450u: goto L_08981F14;
    case 451u: goto L_08981F1C;
    case 452u: goto L_08981F34;
    case 453u: goto L_08981FA0;
    case 454u: goto L_08981FB8;
    case 455u: goto L_08981FC0;
    case 456u: goto L_08981FE0;
    case 457u: goto L_08981FE4;
    case 458u: goto L_0898203C;
    case 459u: goto L_08982044;
    case 460u: goto L_0898204C;
    case 461u: goto L_089820A8;
    case 462u: goto L_089820B0;
    case 463u: goto L_089820C8;
    case 464u: goto L_089820DC;
    case 465u: goto L_08982190;
    case 466u: goto L_089821EC;
    case 467u: goto L_08982208;
    case 468u: goto L_089822D8;
    case 469u: goto L_089822EC;
    case 470u: goto L_0898231C;
    case 471u: goto L_08982398;
    case 472u: goto L_089823A4;
    case 473u: goto L_089823B0;
    case 474u: goto L_089823BC;
    case 475u: goto L_08982438;
    case 476u: goto L_08982450;
    case 477u: goto L_089824A4;
    case 478u: goto L_089824AC;
    case 479u: goto L_089824B8;
    case 480u: goto L_089824C4;
    case 481u: goto L_089824DC;
    case 482u: goto L_089824E4;
    case 483u: goto L_08982504;
    case 484u: goto L_08982518;
    case 485u: goto L_0898252C;
    case 486u: goto L_08982540;
    case 487u: goto L_08982544;
    case 488u: goto L_08982560;
    case 489u: goto L_08982578;
    case 490u: goto L_0898258C;
    case 491u: goto L_089825DC;
    case 492u: goto L_089825E4;
    case 493u: goto L_089825F0;
    case 494u: goto L_089825F8;
    case 495u: goto L_0898260C;
    case 496u: goto L_0898264C;
    case 497u: goto L_08982654;
    case 498u: goto L_08982668;
    case 499u: goto L_08982688;
    case 500u: goto L_0898269C;
    case 501u: goto L_089826B4;
    case 502u: goto L_089826B8;
    case 503u: goto L_089826C0;
    case 504u: goto L_089826D8;
    case 505u: goto L_08982710;
    case 506u: goto L_08982728;
    case 507u: goto L_08982748;
    case 508u: goto L_08982754;
    case 509u: goto L_0898275C;
    case 510u: goto L_08982768;
    case 511u: goto L_08982770;
    case 512u: goto L_0898277C;
    case 513u: goto L_08982788;
    case 514u: goto L_08982790;
    case 515u: goto L_08982794;
    case 516u: goto L_0898279C;
    case 517u: goto L_089827C0;
    case 518u: goto L_089827E0;
    case 519u: goto L_089827E8;
    case 520u: goto L_08982800;
    case 521u: goto L_0898280C;
    case 522u: goto L_0898286C;
    case 523u: goto L_089828E8;
    case 524u: goto L_08982930;
    case 525u: goto L_08982938;
    case 526u: goto L_0898298C;
    case 527u: goto L_08982998;
    case 528u: goto L_089829A4;
    case 529u: goto L_089829AC;
    case 530u: goto L_089829B8;
    case 531u: goto L_089829C0;
    case 532u: goto L_089829CC;
    case 533u: goto L_089829D0;
    case 534u: goto L_089829D8;
    case 535u: goto L_089829F0;
    case 536u: goto L_08982AB8;
    case 537u: goto L_08982AC8;
    case 538u: goto L_08982AD0;
    case 539u: goto L_08982AE4;
    case 540u: goto L_08982AFC;
    case 541u: goto L_08982B08;
    case 542u: goto L_08982B14;
    case 543u: goto L_08982B20;
    case 544u: goto L_08982B2C;
    case 545u: goto L_08982B38;
    case 546u: goto L_08982B44;
    case 547u: goto L_08982B5C;
    case 548u: goto L_08982B78;
    case 549u: goto L_08982B88;
    case 550u: goto L_08982B8C;
    case 551u: goto L_08982BA0;
    case 552u: goto L_08982BAC;
    case 553u: goto L_08982CE4;
    case 554u: goto L_08982CFC;
    case 555u: goto L_08982D14;
    case 556u: goto L_08982D20;
    case 557u: goto L_08982D2C;
    case 558u: goto L_08982D38;
    case 559u: goto L_08982D80;
    case 560u: goto L_08982DDC;
    case 561u: goto L_08982DE8;
    case 562u: goto L_08982E18;
    case 563u: goto L_08982E20;
    case 564u: goto L_08982E2C;
    case 565u: goto L_08982E38;
    case 566u: goto L_08982E44;
    case 567u: goto L_08982E50;
    case 568u: goto L_08982E5C;
    case 569u: goto L_08982E68;
    case 570u: goto L_08982E80;
    case 571u: goto L_08982ED4;
    case 572u: goto L_08982EF0;
    case 573u: goto L_08982EFC;
    case 574u: goto L_08982F08;
    case 575u: goto L_08982F14;
    case 576u: goto L_08982F24;
    case 577u: goto L_08982F38;
    case 578u: goto L_08982F68;
    case 579u: goto L_08982F70;
    case 580u: goto L_08982F84;
    case 581u: goto L_08982FB4;
    case 582u: goto L_08982FBC;
    case 583u: goto L_08982FD8;
    case 584u: goto L_08982FE8;
    case 585u: goto L_08982FFC;
    case 586u: goto L_0898301C;
    case 587u: goto L_08983054;
    case 588u: goto L_0898305C;
    case 589u: goto L_08983074;
    case 590u: goto L_08983088;
    case 591u: goto L_089830A8;
    case 592u: goto L_089830B0;
    case 593u: goto L_089830CC;
    case 594u: goto L_089830DC;
    case 595u: goto L_089831BC;
    case 596u: goto L_089831F4;
    case 597u: goto L_08983208;
    case 598u: goto L_08983224;
    case 599u: goto L_0898322C;
    case 600u: goto L_08983238;
    case 601u: goto L_08983244;
    case 602u: goto L_08983250;
    case 603u: goto L_0898325C;
    case 604u: goto L_08983268;
    case 605u: goto L_089832B0;
    case 606u: goto L_08983304;
    case 607u: goto L_0898334C;
    case 608u: goto L_08983394;
    case 609u: goto L_0898344C;
    case 610u: goto L_08983808;
    case 611u: goto L_08983888;
    case 612u: goto L_089838C0;
    case 613u: goto L_089838C8;
    case 614u: goto L_08983A50;
    case 615u: goto L_08983A5C;
    case 616u: goto L_08983A68;
    case 617u: goto L_08983A74;
    case 618u: goto L_08983A80;
    case 619u: goto L_08983A8C;
    case 620u: goto L_08983A98;
    case 621u: goto L_08983AA4;
    case 622u: goto L_08983ABC;
    case 623u: goto L_08983AD0;
    case 624u: goto L_08983AD8;
    case 625u: goto L_08983AE8;
    case 626u: goto L_08983AF0;
    case 627u: goto L_08983AFC;
    case 628u: goto L_08983B08;
    case 629u: goto L_08983B14;
    case 630u: goto L_08983B20;
    case 631u: goto L_08983B2C;
    case 632u: goto L_08983B38;
    case 633u: goto L_08983B70;
    case 634u: goto L_08983B9C;
    case 635u: goto L_08983C10;
    case 636u: goto L_08983C18;
    case 637u: goto L_08983C20;
    case 638u: goto L_08983C28;
    case 639u: goto L_08983C64;
    case 640u: goto L_08983C7C;
    case 641u: goto L_08983C84;
    case 642u: goto L_08983C8C;
    case 643u: goto L_08983CB0;
    case 644u: goto L_08983CC4;
    case 645u: goto L_08983CCC;
    case 646u: goto L_08983CE4;
    case 647u: goto L_08983CF4;
    case 648u: goto L_08983CFC;
    case 649u: goto L_08983D04;
    case 650u: goto L_08983D10;
    case 651u: goto L_08983D18;
    case 652u: goto L_08983D20;
    case 653u: goto L_08983D38;
    case 654u: goto L_08983D48;
    case 655u: goto L_08983D50;
    case 656u: goto L_08983D58;
    case 657u: goto L_08983DA8;
    case 658u: goto L_08983DCC;
    case 659u: goto L_08983DD4;
    case 660u: goto L_08983DF4;
    case 661u: goto L_08983E24;
    case 662u: goto L_08983E38;
    case 663u: goto L_08983E40;
    case 664u: goto L_08983E48;
    case 665u: goto L_08983EB8;
    case 666u: goto L_08983EC4;
    case 667u: goto L_08983EE8;
    case 668u: goto L_08983EF4;
    case 669u: goto L_08983EFC;
    case 670u: goto L_08983F08;
    case 671u: goto L_08983F14;
    case 672u: goto L_08983F1C;
    case 673u: goto L_08983F20;
    case 674u: goto L_08983F38;
    case 675u: goto L_08983FA4;
    case 676u: goto L_08983FAC;
    case 677u: goto L_08983FB8;
    case 678u: goto L_08983FCC;
    case 679u: goto L_08983FD8;
    case 680u: goto L_08983FE4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        AOT_REGCACHE_SYNC_OUT(); return;
    }
    }
L_08980000:
    goto L_08980004;
L_08980004:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9264), ctx.gpr[8]);
      if (branch_taken) {
          goto L_0898001C;
      }
      goto L_0898000C;
    }
L_0898000C:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[8]) < 64 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0094_entry, 94u, 992u, 0x0897FFF8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_0898001C;
    }
L_0898001C:
    { const bool branch_taken = ctx.gpr[10] == 0u;
      if (branch_taken) {
          goto L_08980078;
      }
      goto L_08980024;
    }
L_08980024:
    ctx.gpr[8] = (ctx.gpr[8] << 4u);
    ctx.gpr[9] = (ctx.gpr[8] + ctx.gpr[8]);
    ctx.gpr[9] = (ctx.gpr[8] + ctx.gpr[9]);
    ctx.gpr[8] = (ctx.gpr[9] + aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[8] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[10] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_gpr_6 = (ctx.gpr[10] + aot_gpr_6);
    aot_mem.aot_direct_store32(ctx.gpr[8] + static_cast<std::uint32_t>(32), aot_gpr_6);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(16));
    aot_gpr_5 = (ctx.gpr[9] + aot_gpr_5);
    { const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_mem.aot_direct_store32(ctx.gpr[8] + static_cast<std::uint32_t>(8), 0u);
    aot_gpr_5 = (0u | 4u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08980074;
      }
      goto L_08980068;
    }
L_08980068:
    aot_gpr_4 = (0u | 2u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[8] + static_cast<std::uint32_t>(36), aot_gpr_4);
      if (branch_taken) {
          goto L_08980078;
      }
      goto L_08980074;
    }
L_08980074:
    aot_mem.aot_direct_store32(ctx.gpr[8] + static_cast<std::uint32_t>(36), 0u);
    goto L_08980078;
L_08980078:
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
L_08980080:
    aot_gpr_6 = (2247u << 16u);
    ctx.gpr[7] = (0u | 0u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-3872));
    goto L_0898008C;
L_0898008C:
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[8] == aot_gpr_4;
      if (branch_taken) {
          goto L_089800B0;
      }
      goto L_08980098;
    }
L_08980098:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < 64 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_0898008C;
      }
      goto L_089800A8;
    }
L_089800A8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_089800B8;
      }
      goto L_089800B0;
    }
L_089800B0:
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    aot_gpr_2 = (0u | 1u);
    goto L_089800B8;
L_089800B8:
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
L_089800C0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-80));
    ctx.gpr[9] = (2247u << 16u);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(-3872));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[3] = (ctx.gpr[9] + static_cast<std::uint32_t>(16));
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[3]);
    ctx.gpr[11] = (aot_gpr_5 | 0u);
    ctx.gpr[3] = (17008u << 16u);
    aot_gpr_2 = (0u | 0u);
    aot_fpr_13 = std::bit_cast<float>(ctx.gpr[3]);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[7] = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    goto L_089800F4;
L_089800F4:
    ctx.gpr[3] = (aot_mem.aot_direct_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[3] != aot_gpr_4;
      if (branch_taken) {
          goto L_08980148;
      }
      goto L_08980100;
    }
L_08980100:
    { const std::uint32_t vfpu_address = ctx.gpr[11] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    ctx.execute_vfpu_unary_ct<28u, 28u, 1u, 22u>();
    ctx.gpr[3] = (ctx.vfpu_scalar_bits_ct<28u>());
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 <= aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08980148;
      }
      goto L_0898013C;
    }
L_0898013C:
    aot_gpr_2 = (0u | 1u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(0), ctx.gpr[10]);
    goto L_08980148;
L_08980148:
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(48));
    ctx.gpr[3] = (static_cast<std::int32_t>(ctx.gpr[10]) < 64 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_089800F4;
      }
      goto L_0898015C;
    }
L_0898015C:
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
L_08980164:
    aot_gpr_4 = (aot_gpr_4 << 4u);
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_5 = (2247u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-3872));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(36)));
    aot_gpr_6 = (0u | 1u);
    { const bool branch_taken = aot_gpr_5 == aot_gpr_6;
      if (branch_taken) {
          goto L_08980194;
      }
      goto L_0898018C;
    }
L_0898018C:
    aot_gpr_5 = (0u | 2u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(36), aot_gpr_5);
    goto L_08980194;
L_08980194:
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
L_0898019C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), ctx.gpr[22]);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    ctx.gpr[22] = (2247u << 16u);
    { const std::uint32_t aot_run_words[3]{ctx.gpr[17], ctx.gpr[18], ctx.gpr[19]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_run_words); }
    ctx.gpr[9] = (static_cast<std::int32_t>(aot_gpr_4) < 2 ? 1u : 0u);
    ctx.gpr[17] = (aot_gpr_5 | 0u);
    ctx.gpr[18] = (aot_gpr_6 | 0u);
    ctx.gpr[19] = (ctx.gpr[7] | 0u);
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(-3872));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), aot_gpr_31);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[20] = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_08980200;
      }
      goto L_089801E8;
    }
L_089801E8:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) <= 0;
      if (branch_taken) {
          goto L_08980234;
      }
      goto L_089801F0;
    }
L_089801F0:
    aot_gpr_31 = (0x089801F8u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0099_entry, 99u, 52u, 0x089902B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089801F8u) goto L_089801F8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089801F8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (aot_gpr_2 | 0u);
      if (branch_taken) {
          goto L_08980244;
      }
      goto L_08980200;
    }
L_08980200:
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 3 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08980224;
      }
      goto L_0898020C;
    }
L_0898020C:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08980234;
      }
      goto L_08980214;
    }
L_08980214:
    aot_gpr_31 = (0x0898021Cu);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0099_entry, 99u, 60u, 0x08990334u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898021Cu) goto L_0898021C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898021C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (aot_gpr_2 | 0u);
      if (branch_taken) {
          goto L_08980244;
      }
      goto L_08980224;
    }
L_08980224:
    aot_gpr_31 = (0x0898022Cu);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0099_entry, 99u, 56u, 0x089902F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898022Cu) goto L_0898022C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898022C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (aot_gpr_2 | 0u);
      if (branch_taken) {
          goto L_08980244;
      }
      goto L_08980234;
    }
L_08980234:
    aot_gpr_4 = (2232u << 16u);
    ctx.gpr[21] = (0u | 0u);
    aot_gpr_31 = (0x08980244u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-6992));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0094_entry, 94u, 968u, 0x0897FE38u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08980244u) goto L_08980244;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08980244:
    ctx.gpr[7] = (0u | 0u);
    aot_gpr_4 = (0u | 0u);
    aot_gpr_6 = (0u | 1u);
    aot_gpr_5 = (ctx.gpr[22] | 0u);
    goto L_08980254;
L_08980254:
    { const bool branch_taken = aot_gpr_6 == 0u;
      if (branch_taken) {
          goto L_089802A8;
      }
      goto L_0898025C;
    }
L_0898025C:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_089802A8;
      }
      goto L_08980264;
    }
L_08980264:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_6 != ctx.gpr[16];
      if (branch_taken) {
          goto L_08980298;
      }
      goto L_08980270;
    }
L_08980270:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr_6 != ctx.gpr[17];
      if (branch_taken) {
          goto L_08980298;
      }
      goto L_0898027C;
    }
L_0898027C:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr_6 != ctx.gpr[21];
      if (branch_taken) {
          goto L_08980298;
      }
      goto L_08980288;
    }
L_08980288:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_gpr_4 = (0u | 1u);
    aot_gpr_6 = (aot_gpr_6 + ctx.gpr[20]);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(32), aot_gpr_6);
    goto L_08980298;
L_08980298:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(48));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_6 = (static_cast<std::int32_t>(ctx.gpr[7]) < 64 ? 1u : 0u);
      if (branch_taken) {
          goto L_08980254;
      }
      goto L_089802A8;
    }
L_089802A8:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_089803A8;
      }
      goto L_089802B0;
    }
L_089802B0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9264)));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 64 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_6 = (aot_gpr_4 << 4u);
      if (branch_taken) {
          goto L_089802F0;
      }
      goto L_089802C0;
    }
L_089802C0:
    ctx.gpr[7] = (aot_gpr_6 + aot_gpr_6);
    aot_gpr_6 = (aot_gpr_6 + ctx.gpr[7]);
    aot_gpr_6 = (aot_gpr_6 + ctx.gpr[22]);
    goto L_089802CC;
L_089802CC:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] != 0u;
      if (branch_taken) {
          goto L_089802E0;
      }
      goto L_089802D8;
    }
L_089802D8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9264), aot_gpr_4);
      if (branch_taken) {
          goto L_089802F0;
      }
      goto L_089802E0;
    }
L_089802E0:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 64 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_089802CC;
      }
      goto L_089802F0;
    }
L_089802F0:
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_5 = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_0898037C;
      }
      goto L_089802F8;
    }
L_089802F8:
    aot_gpr_4 = (aot_gpr_4 << 4u);
    aot_gpr_6 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    ctx.gpr[17] = (aot_gpr_4 + ctx.gpr[22]);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_gpr_5 = (aot_gpr_5 + ctx.gpr[20]);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(32), aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[21]);
    aot_gpr_5 = (ctx.gpr[22] + static_cast<std::uint32_t>(16));
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_6 = (ctx.gpr[18] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = aot_gpr_6 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    { const bool branch_taken = ctx.gpr[19] == 0u;
      if (branch_taken) {
          goto L_08980360;
      }
      goto L_08980340;
    }
L_08980340:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08980360;
      }
      goto L_0898034C;
    }
L_0898034C:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    aot_gpr_5 = (ctx.gpr[22] + static_cast<std::uint32_t>(12));
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_31 = (0x08980360u);
    aot_gpr_4 = (aot_gpr_6 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08A92F78, 163u, 419u, 0x08A92F78u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0163_entry, 163u, 419u, 0x08A92F78u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08980360u) goto L_08980360;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08980360:
    aot_gpr_4 = (0u | 4u);
    { const bool branch_taken = ctx.gpr[16] != aot_gpr_4;
      if (branch_taken) {
          goto L_08980378;
      }
      goto L_0898036C;
    }
L_0898036C:
    aot_gpr_4 = (0u | 2u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), aot_gpr_4);
      if (branch_taken) {
          goto L_0898037C;
      }
      goto L_08980378;
    }
L_08980378:
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), 0u);
    goto L_0898037C;
L_0898037C:
    aot_gpr_31 = (0x08980384u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08980384u) goto L_08980384;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08980384:
    { const bool branch_taken = ctx.gpr[19] != aot_gpr_2;
      if (branch_taken) {
          goto L_089803A8;
      }
      goto L_0898038C;
    }
L_0898038C:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_089803A8;
      }
      goto L_08980398;
    }
L_08980398:
    aot_gpr_6 = (0u | 0u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x089803A8u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    goto L_089803D0;
L_089803A8:
    { std::uint32_t aot_run_words[8]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
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
L_089803D0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-64));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    ctx.gpr[16] = (aot_gpr_5 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    ctx.gpr[18] = (aot_gpr_6 & 255u);
    aot_gpr_5 = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    aot_gpr_6 = (aot_gpr_5 < static_cast<std::uint32_t>(18) ? 1u : 0u);
    { const std::uint32_t aot_run_words[3]{ctx.gpr[19], ctx.gpr[20], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(44), aot_run_words); }
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_gpr_4 = (0u | 2u);
      if (branch_taken) {
          goto L_08980498;
      }
      goto L_08980408;
    }
L_08980408:
    aot_gpr_5 = (aot_gpr_5 << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_5);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-6936)));
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
L_08980420:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 7u);
      if (branch_taken) {
          goto L_0898049C;
      }
      goto L_08980428;
    }
L_08980428:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 4u);
      if (branch_taken) {
          goto L_0898049C;
      }
      goto L_08980430;
    }
L_08980430:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 5u);
      if (branch_taken) {
          goto L_0898049C;
      }
      goto L_08980438;
    }
L_08980438:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 6u);
      if (branch_taken) {
          goto L_0898049C;
      }
      goto L_08980440;
    }
L_08980440:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_0898049C;
      }
      goto L_08980448;
    }
L_08980448:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 3u);
      if (branch_taken) {
          goto L_0898049C;
      }
      goto L_08980450;
    }
L_08980450:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 1u);
      if (branch_taken) {
          goto L_0898049C;
      }
      goto L_08980458;
    }
L_08980458:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 10u);
      if (branch_taken) {
          goto L_0898049C;
      }
      goto L_08980460;
    }
L_08980460:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 11u);
      if (branch_taken) {
          goto L_0898049C;
      }
      goto L_08980468;
    }
L_08980468:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 13u);
      if (branch_taken) {
          goto L_0898049C;
      }
      goto L_08980470;
    }
L_08980470:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 14u);
      if (branch_taken) {
          goto L_0898049C;
      }
      goto L_08980478;
    }
L_08980478:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 15u);
      if (branch_taken) {
          goto L_0898049C;
      }
      goto L_08980480;
    }
L_08980480:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 17u);
      if (branch_taken) {
          goto L_0898049C;
      }
      goto L_08980488;
    }
L_08980488:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 18u);
      if (branch_taken) {
          goto L_0898049C;
      }
      goto L_08980490;
    }
L_08980490:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 19u);
      if (branch_taken) {
          goto L_0898049C;
      }
      goto L_08980498;
    }
L_08980498:
    ctx.gpr[19] = (0u | 0u);
    goto L_0898049C;
L_0898049C:
    { const bool branch_taken = ctx.gpr[19] != aot_gpr_4;
      if (branch_taken) {
          goto L_08980558;
      }
      goto L_089804A4;
    }
L_089804A4:
    ctx.gpr[20] = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x089804B0u);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 241u, 0x089051ACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089804B0u) goto L_089804B0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089804B0:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08980558;
      }
      goto L_089804B8;
    }
L_089804B8:
    aot_gpr_31 = (0x089804C0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089804C0u) goto L_089804C0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089804C0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(2320)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08980558;
      }
      goto L_089804CC;
    }
L_089804CC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(460)));
    aot_gpr_4 = (aot_gpr_4 & 1024u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08980558;
      }
      goto L_089804DC;
    }
L_089804DC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(460)));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1025));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[20] + static_cast<std::uint32_t>(460), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(2228)));
    aot_gpr_5 = (0u | 57u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_08980550;
      }
      goto L_089804FC;
    }
L_089804FC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(2228)));
    aot_gpr_5 = (0u | 58u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_08980550;
      }
      goto L_0898050C;
    }
L_0898050C:
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-16648));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr_6 = (0u | 4000u);
    aot_gpr_31 = (0x08980520u);
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0090_entry, 90u, 399u, 0x0896D898u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08980520u) goto L_08980520;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08980520:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    aot_gpr_5 = (2238u << 16u);
    aot_gpr_6 = (aot_gpr_4 + aot_gpr_4);
    ctx.gpr[7] = (aot_gpr_4 << 8u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    aot_gpr_4 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (ctx.gpr[7] + aot_gpr_4);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-6992));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(172)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(50));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(172), aot_gpr_5);
    goto L_08980550;
L_08980550:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08980668;
      }
      goto L_08980558;
    }
L_08980558:
    { const bool branch_taken = ctx.gpr[19] == 0u;
      if (branch_taken) {
          goto L_08980668;
      }
      goto L_08980560;
    }
L_08980560:
    aot_gpr_31 = (0x08980568u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08980568u) goto L_08980568;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08980568:
    aot_gpr_4 = (aot_gpr_2 + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[20] = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_31 = (0x08980580u);
    aot_gpr_4 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 16u, 0x08960154u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08980580u) goto L_08980580;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08980580:
    aot_gpr_4 = (16736u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_31 = (0x08980590u);
    aot_gpr_4 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0172_entry, 172u, 62u, 0x08AB437Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08980590u) goto L_08980590;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08980590:
    { const bool branch_taken = aot_gpr_2 != 0u;
    aot_gpr_4 = (0u | 4u);
      if (branch_taken) {
          goto L_089805C4;
      }
      goto L_08980598;
    }
L_08980598:
    { const bool branch_taken = ctx.gpr[19] == aot_gpr_4;
    aot_gpr_4 = (0u | 5u);
      if (branch_taken) {
          goto L_089805B8;
      }
      goto L_089805A0;
    }
L_089805A0:
    { const bool branch_taken = ctx.gpr[19] == aot_gpr_4;
    aot_gpr_4 = (0u | 14u);
      if (branch_taken) {
          goto L_089805B8;
      }
      goto L_089805A8;
    }
L_089805A8:
    { const bool branch_taken = ctx.gpr[19] == aot_gpr_4;
    aot_gpr_4 = (0u | 15u);
      if (branch_taken) {
          goto L_089805B8;
      }
      goto L_089805B0;
    }
L_089805B0:
    { const bool branch_taken = ctx.gpr[19] != aot_gpr_4;
      if (branch_taken) {
          goto L_08980600;
      }
      goto L_089805B8;
    }
L_089805B8:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-1038)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08980600;
      }
      goto L_089805C4;
    }
L_089805C4:
    aot_gpr_31 = (0x089805CCu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089805CCu) goto L_089805CC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089805CC:
    aot_gpr_4 = (aot_gpr_2 + static_cast<std::uint32_t>(2288));
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    aot_gpr_6 = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x089805E4u);
    ctx.gpr[8] = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0171_entry, 171u, 958u, 0x08AB3BE8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089805E4u) goto L_089805E4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089805E4:
    aot_gpr_31 = (0x089805ECu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089805ECu) goto L_089805EC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089805EC:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x089805F8u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0080_entry, 80u, 659u, 0x089474A8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089805F8u) goto L_089805F8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089805F8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08980620;
      }
      goto L_08980600;
    }
L_08980600:
    aot_gpr_31 = (0x08980608u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08980608u) goto L_08980608;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08980608:
    aot_gpr_4 = (aot_gpr_2 + static_cast<std::uint32_t>(2288));
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    aot_gpr_6 = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08980620u);
    ctx.gpr[8] = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0171_entry, 171u, 954u, 0x08AB3B88u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08980620u) goto L_08980620;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08980620:
    aot_gpr_4 = (0u | 3u);
    { const bool branch_taken = ctx.gpr[17] != aot_gpr_4;
      if (branch_taken) {
          goto L_08980640;
      }
      goto L_0898062C;
    }
L_0898062C:
    aot_gpr_31 = (0x08980634u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08980634u) goto L_08980634;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08980634:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x08980640u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0080_entry, 80u, 659u, 0x089474A8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08980640u) goto L_08980640;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08980640:
    aot_gpr_4 = (0u | 12u);
    { const bool branch_taken = ctx.gpr[17] == aot_gpr_4;
    aot_gpr_4 = (0u | 18u);
      if (branch_taken) {
          goto L_08980654;
      }
      goto L_0898064C;
    }
L_0898064C:
    { const bool branch_taken = ctx.gpr[17] != aot_gpr_4;
      if (branch_taken) {
          goto L_08980668;
      }
      goto L_08980654;
    }
L_08980654:
    aot_gpr_31 = (0x0898065Cu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898065Cu) goto L_0898065C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898065C:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x08980668u);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0080_entry, 80u, 659u, 0x089474A8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08980668u) goto L_08980668;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08980668:
    { std::uint32_t aot_run_words[6]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      ctx.gpr[20] = aot_run_words[4];
      aot_gpr_31 = aot_run_words[5];
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
L_08980688:
    aot_gpr_2 = (2200u << 16u);
    jump_target = aot_gpr_31;
    aot_gpr_2 = (aot_gpr_2 + static_cast<std::uint32_t>(1672));
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
L_08980694:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x089806A4u);
    goto L_08980688;
L_089806A4:
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
L_089806B0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    aot_gpr_31 = (0x089806C4u);
    ctx.gpr[16] = (aot_gpr_5 | 0u);
    goto L_08980688;
L_089806C4:
    aot_gpr_2 = (aot_gpr_2 ^ ctx.gpr[16]);
    aot_gpr_2 = (aot_gpr_2 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
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
L_089806DC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_gpr_4 = (2234u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(24728));
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), aot_gpr_4);
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-16640));
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    aot_gpr_31 = (0x08980708u);
    aot_gpr_6 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08980708u) goto L_08980708;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08980708:
    { const std::uint32_t aot_run_words[3]{0u, 0u, 0u};
      aot_mem.aot_direct_store32_block(ctx.gpr[16] + static_cast<std::uint32_t>(12), aot_run_words); }
    aot_gpr_4 = (16256u << 16u);
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), 0u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_2 = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
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
L_08980740:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[16] = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_08980798;
      }
      goto L_0898075C;
    }
L_0898075C:
    aot_gpr_4 = (2234u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(24728));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), aot_gpr_4);
      if (branch_taken) {
          goto L_08980784;
      }
      goto L_0898076C;
    }
L_0898076C:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08980784;
      }
      goto L_08980774;
    }
L_08980774:
    if (aot_gpr_4 == 0u) {
    aot_gpr_4 = (ctx.gpr[16] & 1u);
        goto L_08980788;
    }
    goto L_0898077C;
L_0898077C:
    aot_gpr_31 = (0x08980784u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE398, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08980784u) goto L_08980784;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08980784:
    aot_gpr_4 = (ctx.gpr[16] & 1u);
    goto L_08980788;
L_08980788:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08980798;
      }
      goto L_08980790;
    }
L_08980790:
    aot_gpr_31 = (0x08980798u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE2C0, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08980798u) goto L_08980798;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08980798:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
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
L_089807AC:
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
L_089807B4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-96));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(56), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(60), ctx.gpr[18]);
    ctx.gpr[17] = (aot_gpr_5 | 0u);
    ctx.gpr[18] = (aot_gpr_6 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(52), ctx.gpr[16]);
    { const std::uint32_t aot_run_words[6]{ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], ctx.gpr[23], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(64), aot_run_words); }
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[18];
    ctx.gpr[16] = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08980A04;
      }
      goto L_089807EC;
    }
L_089807EC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (ctx.gpr[18] - ctx.gpr[17]);
    aot_gpr_4 = (aot_gpr_4 - aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[19] < static_cast<std::uint32_t>(-1) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08980824;
      }
      goto L_0898080C;
    }
L_0898080C:
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-2));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (aot_gpr_5 - ctx.gpr[19]);
    aot_gpr_5 = (aot_gpr_5 < aot_gpr_4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08980830;
      }
      goto L_08980824;
    }
L_08980824:
    aot_gpr_31 = (0x0898082Cu);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 365u, 0x08B658A0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898082Cu) goto L_0898082C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898082C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    goto L_08980830;
L_08980830:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_gpr_4 + ctx.gpr[19]);
    aot_gpr_5 = (aot_gpr_5 - aot_gpr_6);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    aot_gpr_5 = (aot_gpr_5 < ctx.gpr[7] ? 1u : 0u);
    if (aot_gpr_5 == 0u) {
    ctx.gpr[20] = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
        goto L_08980988;
    }
    goto L_08980850;
L_08980850:
    aot_gpr_5 = (aot_gpr_4 < ctx.gpr[19] ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
      if (branch_taken) {
          goto L_08980870;
      }
      goto L_0898085C;
    }
L_0898085C:
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(12));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (aot_gpr_4 + aot_gpr_5);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08980880;
      }
      goto L_08980870;
    }
L_08980870:
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(8));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (aot_gpr_4 + aot_gpr_5);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_08980880;
L_08980880:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_089808A8;
      }
      goto L_08980888;
    }
L_08980888:
    aot_gpr_31 = (0x08980890u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 474u, 0x08ABE308u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08980890u) goto L_08980890;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08980890:
    ctx.gpr[20] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[20] != 0u;
      if (branch_taken) {
          goto L_089808A8;
      }
      goto L_0898089C;
    }
L_0898089C:
    aot_gpr_31 = (0x089808A4u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 289u, 0x08B65438u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089808A4u) goto L_089808A4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089808A4:
    ctx.gpr[20] = (aot_gpr_2 | 0u);
    goto L_089808A8;
L_089808A8:
    ctx.gpr[22] = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[23] = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(19))))));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(0u));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(22))))));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(aot_gpr_4));
    ctx.gpr[21] = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x089808D4u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(aot_gpr_5));
    goto L_08980DB8;
L_089808D4:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(40), aot_gpr_2);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(40))))));
    { const bool branch_taken = ctx.gpr[23] == ctx.gpr[22];
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_08980900;
      }
      goto L_089808E4;
    }
L_089808E4:
    ctx.gpr[20] = (ctx.gpr[23] - ctx.gpr[22]);
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    aot_gpr_5 = (ctx.gpr[22] | 0u);
    aot_gpr_31 = (0x089808F8u);
    aot_gpr_6 = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089808F8u) goto L_089808F8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089808F8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (aot_gpr_2 + ctx.gpr[20]);
      if (branch_taken) {
          goto L_08980900;
      }
      goto L_08980900;
    }
L_08980900:
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(26))))));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(29), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(0u));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(29))))));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(aot_gpr_4));
    ctx.gpr[23] = (ctx.gpr[20] | 0u);
    ctx.gpr[22] = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08980928u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(30), static_cast<std::uint8_t>(aot_gpr_5));
    goto L_08980DB8;
L_08980928:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(44), aot_gpr_2);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(44))))));
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[22];
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_08980940;
      }
      goto L_08980938;
    }
L_08980938:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_08980958;
      }
      goto L_08980940;
    }
L_08980940:
    ctx.gpr[17] = (ctx.gpr[18] - ctx.gpr[17]);
    aot_gpr_4 = (ctx.gpr[23] | 0u);
    aot_gpr_5 = (ctx.gpr[22] | 0u);
    aot_gpr_31 = (0x08980954u);
    aot_gpr_6 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08980954u) goto L_08980954;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08980954:
    ctx.gpr[17] = (aot_gpr_2 + ctx.gpr[17]);
    goto L_08980958;
L_08980958:
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(31), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08980974;
      }
      goto L_0898096C;
    }
L_0898096C:
    aot_gpr_31 = (0x08980974u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE398, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08980974u) goto L_08980974;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08980974:
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[21]);
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_gpr_4 = (ctx.gpr[21] + ctx.gpr[19]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), aot_gpr_4);
      if (branch_taken) {
          goto L_08980A04;
      }
      goto L_08980988;
    }
L_08980988:
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(34), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(34))))));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(37), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(0u));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(37))))));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(33), static_cast<std::uint8_t>(aot_gpr_4));
    ctx.gpr[21] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr_31 = (0x089809B0u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(aot_gpr_5));
    goto L_08980DB8;
L_089809B0:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(48), aot_gpr_2);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(48))))));
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[21];
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_089809CC;
      }
      goto L_089809C0;
    }
L_089809C0:
    ctx.gpr[18] = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + ctx.gpr[19]);
      if (branch_taken) {
          goto L_089809E4;
      }
      goto L_089809CC;
    }
L_089809CC:
    aot_gpr_6 = (ctx.gpr[18] - ctx.gpr[21]);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x089809DCu);
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089809DCu) goto L_089809DC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089809DC:
    ctx.gpr[18] = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (ctx.gpr[18] + ctx.gpr[19]);
    goto L_089809E4;
L_089809E4:
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(39), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[19]);
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), aot_gpr_4);
    goto L_08980A04;
L_08980A04:
    aot_gpr_2 = (ctx.gpr[16] | 0u);
    { std::uint32_t aot_run_words[9]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(52), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
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
L_08980A34:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-64));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_5 | 0u);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_29 | 0u);
    aot_gpr_5 = (0u | 135u);
    { const std::uint32_t aot_run_words[3]{ctx.gpr[18], ctx.gpr[19], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(40), aot_run_words); }
    aot_gpr_31 = (0x08980A64u);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 867u, 0x08AF7A8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08980A64u) goto L_08980A64;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08980A64:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (0x08980A70u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0096_entry, 96u, 89u, 0x089844FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08980A70u) goto L_08980A70;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08980A70:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[18] = (aot_gpr_2 | 0u);
      if (branch_taken) {
          goto L_08980A84;
      }
      goto L_08980A7C;
    }
L_08980A7C:
    aot_gpr_31 = (0x08980A84u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE398, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08980A84u) goto L_08980A84;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08980A84:
    ctx.gpr[18] = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
    if (aot_gpr_4 == 0u) {
    ctx.gpr[18] = (ctx.gpr[28] + static_cast<std::uint32_t>(-16640));
        goto L_08980A9C;
    }
    goto L_08980A94;
L_08980A94:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08980A9C;
      }
      goto L_08980A9C;
    }
L_08980A9C:
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(12));
    aot_gpr_4 = (aot_gpr_29 | 0u);
    aot_gpr_31 = (0x08980AACu);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08980AACu) goto L_08980AAC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08980AAC:
    ctx.gpr[18] = (aot_gpr_2 | 0u);
    if (ctx.gpr[18] == ctx.gpr[16]) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
        goto L_08980B50;
    }
    goto L_08980AB8;
L_08980AB8:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(0u));
    goto L_08980AC8;
L_08980AC8:
    { const bool branch_taken = aot_gpr_5 == aot_gpr_4;
      if (branch_taken) {
          goto L_08980AF0;
      }
      goto L_08980AD0;
    }
L_08980AD0:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[18] == aot_gpr_6;
      if (branch_taken) {
          goto L_08980AF0;
      }
      goto L_08980ADC;
    }
L_08980ADC:
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store8(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_6));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08980AC8;
      }
      goto L_08980AF0;
    }
L_08980AF0:
    { const bool branch_taken = aot_gpr_5 != aot_gpr_4;
    aot_gpr_6 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08980B38;
      }
      goto L_08980AF8;
    }
L_08980AF8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[19] = (aot_gpr_4 | 0u);
    if (ctx.gpr[18] == ctx.gpr[19]) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
        goto L_08980B50;
    }
    goto L_08980B08;
L_08980B08:
    aot_gpr_5 = (aot_gpr_4 - aot_gpr_4);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_6 = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_08980B28;
      }
      goto L_08980B18;
    }
L_08980B18:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08980B24u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08980B24u) goto L_08980B24;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08980B24:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_08980B28;
L_08980B28:
    aot_gpr_5 = (ctx.gpr[19] - ctx.gpr[18]);
    aot_gpr_4 = (aot_gpr_4 - aot_gpr_5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), aot_gpr_4);
      if (branch_taken) {
          goto L_08980B4C;
      }
      goto L_08980B38;
    }
L_08980B38:
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(29), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(30), static_cast<std::uint8_t>(0u));
    ctx.gpr[7] = (aot_gpr_29 + static_cast<std::uint32_t>(30));
    aot_gpr_31 = (0x08980B4Cu);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    goto L_089807B4;
L_08980B4C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    goto L_08980B50;
L_08980B50:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08980B60;
      }
      goto L_08980B58;
    }
L_08980B58:
    aot_gpr_31 = (0x08980B60u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE398, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08980B60u) goto L_08980B60;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08980B60:
    aot_gpr_4 = (aot_gpr_29 | 0u);
    aot_gpr_5 = (0u | 137u);
    aot_gpr_31 = (0x08980B70u);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 867u, 0x08AF7A8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08980B70u) goto L_08980B70;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08980B70:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (0x08980B7Cu);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0096_entry, 96u, 89u, 0x089844FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08980B7Cu) goto L_08980B7C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08980B7C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[18] = (aot_gpr_2 | 0u);
      if (branch_taken) {
          goto L_08980B90;
      }
      goto L_08980B88;
    }
L_08980B88:
    aot_gpr_31 = (0x08980B90u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE398, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08980B90u) goto L_08980B90;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08980B90:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-16636));
    aot_gpr_31 = (0x08980B9Cu);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0096_entry, 96u, 237u, 0x08984D14u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08980B9Cu) goto L_08980B9C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08980B9C:
    aot_gpr_31 = (0x08980BA4u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 937u, 0x08B577E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08980BA4u) goto L_08980BA4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08980BA4:
    ctx.gpr[19] = (aot_gpr_2 | 0u);
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-16632));
    aot_gpr_31 = (0x08980BB4u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0096_entry, 96u, 237u, 0x08984D14u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08980BB4u) goto L_08980BB4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08980BB4:
    aot_gpr_31 = (0x08980BBCu);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 937u, 0x08B577E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08980BBCu) goto L_08980BBC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08980BBC:
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), aot_gpr_2);
    aot_gpr_4 = (aot_gpr_29 | 0u);
    aot_gpr_5 = (0u | 138u);
    aot_gpr_31 = (0x08980BD4u);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 867u, 0x08AF7A8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08980BD4u) goto L_08980BD4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08980BD4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (0x08980BE0u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0096_entry, 96u, 89u, 0x089844FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08980BE0u) goto L_08980BE0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08980BE0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[18] = (aot_gpr_2 | 0u);
      if (branch_taken) {
          goto L_08980BF4;
      }
      goto L_08980BEC;
    }
L_08980BEC:
    aot_gpr_31 = (0x08980BF4u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE398, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08980BF4u) goto L_08980BF4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08980BF4:
    { const bool branch_taken = ctx.gpr[18] == 0u;
      if (branch_taken) {
          goto L_08980C40;
      }
      goto L_08980BFC;
    }
L_08980BFC:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    aot_gpr_5 = (0u | 171u);
    aot_gpr_31 = (0x08980C0Cu);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 867u, 0x08AF7A8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08980C0Cu) goto L_08980C0C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08980C0C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    aot_gpr_31 = (0x08980C18u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0096_entry, 96u, 237u, 0x08984D14u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08980C18u) goto L_08980C18;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08980C18:
    aot_gpr_31 = (0x08980C20u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 937u, 0x08B577E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08980C20u) goto L_08980C20;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08980C20:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[18] = (aot_gpr_2 | 0u);
      if (branch_taken) {
          goto L_08980C34;
      }
      goto L_08980C2C;
    }
L_08980C2C:
    aot_gpr_31 = (0x08980C34u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE398, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08980C34u) goto L_08980C34;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08980C34:
    aot_gpr_4 = (0u < ctx.gpr[18] ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_08980C40;
L_08980C40:
    aot_gpr_4 = (aot_gpr_29 | 0u);
    aot_gpr_5 = (0u | 139u);
    aot_gpr_31 = (0x08980C50u);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 867u, 0x08AF7A8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08980C50u) goto L_08980C50;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08980C50:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (0x08980C5Cu);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0096_entry, 96u, 89u, 0x089844FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08980C5Cu) goto L_08980C5C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08980C5C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[19] = (aot_gpr_2 | 0u);
      if (branch_taken) {
          goto L_08980C70;
      }
      goto L_08980C68;
    }
L_08980C68:
    aot_gpr_31 = (0x08980C70u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE398, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08980C70u) goto L_08980C70;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08980C70:
    aot_gpr_4 = (aot_gpr_29 | 0u);
    aot_gpr_5 = (0u | 175u);
    aot_gpr_31 = (0x08980C80u);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 867u, 0x08AF7A8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08980C80u) goto L_08980C80;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08980C80:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (0x08980C8Cu);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0096_entry, 96u, 237u, 0x08984D14u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08980C8Cu) goto L_08980C8C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08980C8C:
    aot_gpr_31 = (0x08980C94u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 937u, 0x08B577E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08980C94u) goto L_08980C94;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08980C94:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[18] = (aot_gpr_2 | 0u);
      if (branch_taken) {
          goto L_08980CA8;
      }
      goto L_08980CA0;
    }
L_08980CA0:
    aot_gpr_31 = (0x08980CA8u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE398, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08980CA8u) goto L_08980CA8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08980CA8:
    aot_gpr_4 = (aot_gpr_29 | 0u);
    aot_gpr_5 = (0u | 176u);
    aot_gpr_31 = (0x08980CB8u);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 867u, 0x08AF7A8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08980CB8u) goto L_08980CB8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08980CB8:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (0x08980CC4u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0096_entry, 96u, 237u, 0x08984D14u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08980CC4u) goto L_08980CC4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08980CC4:
    aot_gpr_31 = (0x08980CCCu);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 937u, 0x08B577E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08980CCCu) goto L_08980CCC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08980CCC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[19] = (aot_gpr_2 | 0u);
      if (branch_taken) {
          goto L_08980CE0;
      }
      goto L_08980CD8;
    }
L_08980CD8:
    aot_gpr_31 = (0x08980CE0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE398, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08980CE0u) goto L_08980CE0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08980CE0:
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    aot_gpr_4 = (aot_gpr_29 | 0u);
    aot_gpr_5 = (0u | 140u);
    aot_gpr_31 = (0x08980CF8u);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 867u, 0x08AF7A8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08980CF8u) goto L_08980CF8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08980CF8:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (0x08980D04u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0096_entry, 96u, 89u, 0x089844FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08980D04u) goto L_08980D04;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08980D04:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[17] = (aot_gpr_2 | 0u);
      if (branch_taken) {
          goto L_08980D18;
      }
      goto L_08980D10;
    }
L_08980D10:
    aot_gpr_31 = (0x08980D18u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE398, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08980D18u) goto L_08980D18;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08980D18:
    { const bool branch_taken = ctx.gpr[17] == 0u;
      if (branch_taken) {
          goto L_08980D90;
      }
      goto L_08980D20;
    }
L_08980D20:
    ctx.gpr[17] = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
      if (branch_taken) {
          goto L_08980D90;
      }
      goto L_08980D2C;
    }
L_08980D2C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    if (aot_gpr_4 == 0u) {
    ctx.gpr[17] = (ctx.gpr[28] + static_cast<std::uint32_t>(-16640));
        goto L_08980D40;
    }
    goto L_08980D38;
L_08980D38:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08980D40;
      }
      goto L_08980D40;
    }
L_08980D40:
    aot_gpr_31 = (0x08980D48u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 935u, 0x08B577CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08980D48u) goto L_08980D48;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08980D48:
    aot_gpr_5 = (ctx.gpr[3] | 0u);
    aot_gpr_31 = (0x08980D54u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B627F0, 215u, 515u, 0x08B627F0u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, ctx.gpr[3], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[9], ctx.gpr[10], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 515u, 0x08B627F0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08980D54u) goto L_08980D54;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08980D54:
    aot_gpr_4 = (16256u << 16u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 < aot_fpr_12)) ? 0x00800000u : 0u);
    if (((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_13));
        goto L_08980D74;
    }
    goto L_08980D74;
L_08980D74:
    aot_fpr_13 = std::bit_cast<float>(0u);
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
        goto L_08980D8C;
    }
    goto L_08980D8C;
L_08980D8C:
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(aot_fpr_13));
    goto L_08980D90;
L_08980D90:
    aot_gpr_2 = (0u | 1u);
    { std::uint32_t aot_run_words[5]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      aot_gpr_31 = aot_run_words[4];
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
L_08980DB0:
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
L_08980DB8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_gpr_2 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(0))))));
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
L_08980DCC:
    { const std::uint32_t vfpu_address = aot_gpr_6 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(16);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(32);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(48);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<7u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vtfm_ct<0u, 36u, 1u, 3u, 3u>();
    ctx.execute_vfpu_vec3_ct<0u, 0u, 7u, 3u, 0u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
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
L_08980DF4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-64));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(53)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(52), aot_gpr_31);
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(56))))));
      if (branch_taken) {
          goto L_08980E14;
      }
      goto L_08980E10;
    }
L_08980E10:
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(51), static_cast<std::uint8_t>(0u));
    goto L_08980E14;
L_08980E14:
    aot_gpr_4 = (aot_gpr_4 & 1u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08980F98;
      }
      goto L_08980E20;
    }
L_08980E20:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-16588)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (2236u << 16u);
      if (branch_taken) {
          goto L_08980E40;
      }
      goto L_08980E2C;
    }
L_08980E2C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr_5 = (0u | 2u);
    if (aot_gpr_4 == aot_gpr_5) {
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
        goto L_08980F58;
    }
    goto L_08980E3C;
L_08980E3C:
    aot_gpr_4 = (2236u << 16u);
    goto L_08980E40;
L_08980E40:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(32304));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(48));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (50454u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_6);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_14 <= aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_5 = (0u | 0u);
      if (branch_taken) {
          goto L_08980EAC;
      }
      goto L_08980E68;
    }
L_08980E68:
    aot_gpr_6 = (17608u << 16u);
    aot_fpr_15 = std::bit_cast<float>(aot_gpr_6);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_14 < aot_fpr_15)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_6 = (50426u << 16u);
      if (branch_taken) {
          goto L_08980EAC;
      }
      goto L_08980E80;
    }
L_08980E80:
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_6);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 <= aot_fpr_14)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_6 = (17658u << 16u);
      if (branch_taken) {
          goto L_08980EAC;
      }
      goto L_08980E94;
    }
L_08980E94:
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_6);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 < aot_fpr_14)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
      if (branch_taken) {
          goto L_08980EB0;
      }
      goto L_08980EA8;
    }
L_08980EA8:
    aot_gpr_5 = (0u | 1u);
    goto L_08980EAC;
L_08980EAC:
    aot_gpr_5 = (aot_gpr_5 & 255u);
    goto L_08980EB0;
L_08980EB0:
    if (aot_gpr_5 == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
        goto L_08980F58;
    }
    goto L_08980EB8;
L_08980EB8:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 <= aot_fpr_14)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_5 = (0u | 0u);
      if (branch_taken) {
          goto L_08980F18;
      }
      goto L_08980ED4;
    }
L_08980ED4:
    aot_gpr_6 = (17608u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_6);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 < aot_fpr_14)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_6 = (50426u << 16u);
      if (branch_taken) {
          goto L_08980F18;
      }
      goto L_08980EEC;
    }
L_08980EEC:
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_6);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_6 = (17658u << 16u);
      if (branch_taken) {
          goto L_08980F18;
      }
      goto L_08980F00;
    }
L_08980F00:
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_6);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
      if (branch_taken) {
          goto L_08980F1C;
      }
      goto L_08980F14;
    }
L_08980F14:
    aot_gpr_5 = (0u | 1u);
    goto L_08980F18;
L_08980F18:
    aot_gpr_5 = (aot_gpr_5 & 255u);
    goto L_08980F1C;
L_08980F1C:
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_5 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08980F54;
      }
      goto L_08980F24;
    }
L_08980F24:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), 0u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_6 = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_gpr_31 = (0x08980F4Cu);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0036_entry, 36u, 527u, 0x088967ACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08980F4Cu) goto L_08980F4C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08980F4C:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_08980F98;
      }
      goto L_08980F54;
    }
L_08980F54:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    goto L_08980F58;
L_08980F58:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (16752u << 16u);
    aot_fpr_13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_13)));
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_fpr_13 = aot_fpr_13 - aot_fpr_14;
    aot_fpr_12 = std::bit_cast<float>(0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
        goto L_08980F88;
    }
    goto L_08980F88;
L_08980F88:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_13));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_089810E4;
      }
      goto L_08980F98;
    }
L_08980F98:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(56))))));
    aot_gpr_5 = (aot_gpr_5 & 2u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
      if (branch_taken) {
          goto L_08980FE8;
      }
      goto L_08980FA8;
    }
L_08980FA8:
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    aot_gpr_4 = (16752u << 16u);
    aot_fpr_14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_fpr_15 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_13; const float ft = aot_fpr_15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_12 = std::bit_cast<float>(0u);
    aot_fpr_13 = aot_fpr_14 - aot_fpr_13;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
        goto L_08980FD8;
    }
    goto L_08980FD8;
L_08980FD8:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_13));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_089810E4;
      }
      goto L_08980FE8;
    }
L_08980FE8:
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(51)));
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 == 0u;
      if (branch_taken) {
          goto L_08981050;
      }
      goto L_08980FF8;
    }
L_08980FF8:
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    aot_gpr_4 = (16752u << 16u);
    aot_fpr_14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_fpr_15 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_13; const float ft = aot_fpr_15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_fpr_13 = aot_fpr_14 + aot_fpr_13;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    if (((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
        goto L_0898102C;
    }
    goto L_0898102C;
L_0898102C:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_13));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16584)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08981048;
      }
      goto L_08981044;
    }
L_08981044:
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(aot_gpr_5));
    goto L_08981048;
L_08981048:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0898109C;
      }
      goto L_08981050;
    }
L_08981050:
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 == 0u;
      if (branch_taken) {
          goto L_0898109C;
      }
      goto L_0898105C;
    }
L_0898105C:
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    aot_gpr_4 = (16752u << 16u);
    aot_fpr_14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_fpr_15 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_13; const float ft = aot_fpr_15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_fpr_13 = aot_fpr_14 - aot_fpr_13;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
        goto L_08981090;
    }
    goto L_08981090;
L_08981090:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_13));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_0898109C;
L_0898109C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr_5 = (0u | 2u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    aot_gpr_4 = (15733u << 16u);
      if (branch_taken) {
          goto L_089810E4;
      }
      goto L_089810AC;
    }
L_089810AC:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    aot_gpr_4 = (aot_gpr_4 | 49807u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16600)));
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_4 = (16153u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 39322u);
    aot_fpr_12 = aot_fpr_14 - aot_fpr_12;
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 <= aot_fpr_12)) ? 0x00800000u : 0u);
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_13));
        goto L_089810E0;
    }
    goto L_089810E0;
L_089810E0:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-16600), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_089810E4;
L_089810E4:
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(56))))));
      if (branch_taken) {
          goto L_08981104;
      }
      goto L_089810F0;
    }
L_089810F0:
    aot_gpr_5 = (aot_gpr_4 & 4u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_08981104;
      }
      goto L_089810FC;
    }
L_089810FC:
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), 0u);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(56))))));
    goto L_08981104;
L_08981104:
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-5));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(53), static_cast<std::uint8_t>(0u));
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(48)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(52)));
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
L_08981124:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_gpr_4 = (15605u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    aot_gpr_4 = (aot_gpr_4 | 49807u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_5 = (2236u << 16u);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16600)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(32304));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(80)));
    aot_gpr_6 = (16256u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_6);
    aot_gpr_4 = (aot_gpr_4 << 5u);
    aot_gpr_6 = (0u - aot_gpr_4);
    aot_fpr_12 = aot_fpr_14 + aot_fpr_12;
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_6 = (aot_gpr_6 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_gpr_4 = (aot_gpr_6 + aot_gpr_4);
    ctx.gpr[16] = (2247u << 16u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 < aot_fpr_12)) ? 0x00800000u : 0u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(18640));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_gpr_31);
    if (((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_13));
        goto L_08981194;
    }
    goto L_08981194;
L_08981194:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-16600), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(245)));
    { const bool branch_taken = aot_gpr_6 == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_089811A8;
      }
      goto L_089811A4;
    }
L_089811A4:
    ctx.gpr[17] = (0u | 1u);
    goto L_089811A8;
L_089811A8:
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(246)));
    { const bool branch_taken = aot_gpr_6 == 0u;
      if (branch_taken) {
          goto L_089811B8;
      }
      goto L_089811B4;
    }
L_089811B4:
    ctx.gpr[17] = (ctx.gpr[17] | 2u);
    goto L_089811B8;
L_089811B8:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(244)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089811C8;
      }
      goto L_089811C4;
    }
L_089811C4:
    ctx.gpr[17] = (ctx.gpr[17] | 4u);
    goto L_089811C8;
L_089811C8:
    aot_gpr_31 = (0x089811D0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0134_entry, 134u, 56u, 0x08A1C658u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089811D0u) goto L_089811D0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089811D0:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_089811DC;
      }
      goto L_089811D8;
    }
L_089811D8:
    ctx.gpr[17] = (ctx.gpr[17] | 8u);
    goto L_089811DC;
L_089811DC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16576)));
    { const bool branch_taken = ctx.gpr[17] == aot_gpr_4;
      if (branch_taken) {
          goto L_089811F4;
      }
      goto L_089811E8;
    }
L_089811E8:
    aot_gpr_4 = (0u | 3u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-16584), aot_gpr_4);
      if (branch_taken) {
          goto L_0898120C;
      }
      goto L_089811F4;
    }
L_089811F4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16584)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 0 ? 1u : 0u);
    if (aot_gpr_5 != 0u) {
    aot_gpr_4 = (0u | 0u);
        goto L_08981208;
    }
    goto L_08981208;
L_08981208:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-16584), aot_gpr_4);
    goto L_0898120C;
L_0898120C:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-16576), ctx.gpr[17]);
    ctx.gpr[17] = (0u | 0u);
    goto L_08981214;
L_08981214:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08981228;
      }
      goto L_08981220;
    }
L_08981220:
    aot_gpr_31 = (0x08981228u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    goto L_08980DF4;
L_08981228:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[17]) < 56 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(112));
      if (branch_taken) {
          goto L_08981214;
      }
      goto L_08981238;
    }
L_08981238:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
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
L_0898124C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    { const std::uint32_t aot_run_words[5]{ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_gpr_31 = (0x0898126Cu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0170_entry, 170u, 640u, 0x08AAEFC8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898126Cu) goto L_0898126C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898126C:
    aot_gpr_31 = (0x08981274u);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-16572));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0170_entry, 170u, 584u, 0x08AAECA4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08981274u) goto L_08981274;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08981274:
    aot_gpr_31 = (0x0898127Cu);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0170_entry, 170u, 632u, 0x08AAEF5Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898127Cu) goto L_0898127C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898127C:
    ctx.gpr[18] = (2234u << 16u);
    ctx.gpr[16] = (2234u << 16u);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4264));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4300));
    goto L_08981290;
L_08981290:
    ctx.gpr[17] = (ctx.gpr[19] << 2u);
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[18]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_089812B8;
      }
      goto L_089812A4;
    }
L_089812A4:
    aot_gpr_4 = (ctx.gpr[19] << 5u);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[16]);
    aot_gpr_31 = (0x089812B4u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0152_entry, 152u, 398u, 0x08A65C4Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089812B4u) goto L_089812B4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089812B4:
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), aot_gpr_2);
    goto L_089812B8;
L_089812B8:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[19] = (ctx.gpr[19] & 65535u);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[19]) < 9 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08981290;
      }
      goto L_089812CC;
    }
L_089812CC:
    aot_gpr_31 = (0x089812D4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0170_entry, 170u, 642u, 0x08AAEFE8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089812D4u) goto L_089812D4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089812D4:
    aot_gpr_4 = (2247u << 16u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(18640));
    goto L_089812E0;
L_089812E0:
    aot_gpr_6 = (aot_gpr_5 << 7u);
    ctx.gpr[7] = (aot_gpr_5 << 4u);
    aot_gpr_6 = (aot_gpr_6 - ctx.gpr[7]);
    aot_gpr_6 = (aot_gpr_6 + aot_gpr_4);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(16), 0u);
    aot_gpr_5 = (aot_gpr_5 & 65535u);
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_5) < 56 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 != 0u;
      if (branch_taken) {
          goto L_089812E0;
      }
      goto L_08981308;
    }
L_08981308:
    { std::uint32_t aot_run_words[5]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
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
L_08981324:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_gpr_2 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(32)));
    ctx.gpr[10] = (ctx.gpr[10] & 255u);
    ctx.gpr[3] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(36)));
    ctx.gpr[14] = (2234u << 16u);
    ctx.gpr[12] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(40)));
    ctx.gpr[10] = (ctx.gpr[10] << 2u);
    ctx.gpr[14] = (ctx.gpr[14] + static_cast<std::uint32_t>(4264));
    ctx.gpr[13] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(44)));
    ctx.gpr[10] = (ctx.gpr[10] + ctx.gpr[14]);
    aot_gpr_2 = (aot_gpr_2 & 255u);
    ctx.gpr[10] = (aot_mem.aot_direct_load32(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    ctx.gpr[3] = (ctx.gpr[3] & 255u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_2);
    ctx.gpr[12] = (ctx.gpr[12] & 255u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.gpr[13] = (ctx.gpr[13] & 255u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[12]);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    aot_gpr_6 = (aot_gpr_6 & 255u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    ctx.gpr[11] = (ctx.gpr[11] & 255u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_31);
    aot_gpr_31 = (0x0898138Cu);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[13]);
    goto L_08983B9C;
L_0898138C:
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
L_08981398:
    aot_gpr_6 = (2236u << 16u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(32304));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(48));
    aot_fpr_15 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(4)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    aot_fpr_14 = aot_fpr_15 - aot_fpr_14;
    ctx.fpr[16] = ctx.fpr[16] - ctx.fpr[17];
    { const float fs = aot_fpr_12; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    { const float fs = aot_fpr_14; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    aot_fpr_14 = aot_fpr_14 + ctx.fpr[16];
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_14 <= aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_089813F0;
      }
      goto L_089813DC;
    }
L_089813DC:
    aot_gpr_6 = (2247u << 16u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(18640));
      if (branch_taken) {
          goto L_089813F8;
      }
      goto L_089813F0;
    }
L_089813F0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08981468;
      }
      goto L_089813F8;
    }
L_089813F8:
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[8] = (ctx.gpr[7] << 7u);
      if (branch_taken) {
          goto L_08981428;
      }
      goto L_08981400;
    }
L_08981400:
    ctx.gpr[9] = (ctx.gpr[7] << 4u);
    ctx.gpr[8] = (ctx.gpr[8] - ctx.gpr[9]);
    ctx.gpr[8] = (ctx.gpr[8] + aot_gpr_6);
    ctx.gpr[8] = (aot_mem.aot_direct_load32(ctx.gpr[8] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[8] == aot_gpr_4;
      if (branch_taken) {
          goto L_08981428;
      }
      goto L_08981418;
    }
L_08981418:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[7] & 65535u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < 56 ? 1u : 0u);
      if (branch_taken) {
          goto L_089813F8;
      }
      goto L_08981428;
    }
L_08981428:
    aot_gpr_4 = (0u | 56u);
    { const bool branch_taken = ctx.gpr[7] == aot_gpr_4;
      if (branch_taken) {
          goto L_0898145C;
      }
      goto L_08981434;
    }
L_08981434:
    aot_gpr_4 = (ctx.gpr[7] << 7u);
    ctx.gpr[7] = (ctx.gpr[7] << 4u);
    ctx.gpr[7] = (aot_gpr_4 - ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] + aot_gpr_6);
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[7] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08981464;
      }
      goto L_08981450;
    }
L_08981450:
    { const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_mem.aot_direct_store32(ctx.gpr[7] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(aot_fpr_13));
    goto L_0898145C;
L_0898145C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08981468;
      }
      goto L_08981464;
    }
L_08981464:
    aot_mem.aot_direct_store32(ctx.gpr[7] + static_cast<std::uint32_t>(16), 0u);
    goto L_08981468;
L_08981468:
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
L_08981470:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-96));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5884)));
    { const std::uint32_t aot_run_words[8]{std::bit_cast<std::uint32_t>(ctx.fpr[20]), std::bit_cast<std::uint32_t>(ctx.fpr[22]), std::bit_cast<std::uint32_t>(ctx.fpr[24]), ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(64), aot_run_words); }
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5884)));
        goto L_089814AC;
    }
    goto L_089814A0;
L_089814A0:
    aot_gpr_31 = (0x089814A8u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 683u, 0x08B66DBCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089814A8u) goto L_089814A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089814A8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5884)));
    goto L_089814AC;
L_089814AC:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(19)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0898154C;
      }
      goto L_089814B8;
    }
L_089814B8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23440)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(11224)));
    aot_gpr_5 = (aot_gpr_5 << 4u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[16] = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (17174u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.set_vfpu_scalar_bits_ct<1u>(aot_gpr_4);
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 1u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (2236u << 16u);
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(32304));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(48));
    aot_gpr_31 = (0x08981504u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08A931B8, 163u, 0x08A931B8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08981504u) goto L_08981504;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08981504:
    ctx.gpr[8] = (ctx.fcr31);
    ctx.gpr[9] = (0u + static_cast<std::uint32_t>(-3969));
    ctx.gpr[8] = (ctx.gpr[8] & ctx.gpr[9]);
    ctx.fcr31 = ctx.gpr[8] & 0x0181FFFFu;
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23440)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(11224)));
    aot_gpr_5 = (aot_gpr_5 << 4u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (48716u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23440)));
        goto L_08981554;
    }
    goto L_08981544;
L_08981544:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089816AC;
      }
      goto L_0898154C;
    }
L_0898154C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089816F4;
      }
      goto L_08981554;
    }
L_08981554:
    ctx.fpr[24] = std::bit_cast<float>(0u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(11240)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_12) || std::isnan(ctx.fpr[24])) && aot_fpr_12 == ctx.fpr[24])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_089816AC;
      }
      goto L_0898156C;
    }
L_0898156C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23440)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(11104)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(11108)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(11112)));
    ctx.gpr[17] = (aot_gpr_5 & 255u);
    ctx.gpr[18] = (aot_gpr_6 & 255u);
    aot_gpr_31 = (0x0898158Cu);
    ctx.gpr[19] = (aot_gpr_4 & 255u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20934, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898158Cu) goto L_0898158C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898158C:
    aot_gpr_4 = (aot_gpr_2 & 65535u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_5 = (16672u << 16u);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_gpr_4 = (15267u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 55050u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_2 = (18804u << 16u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23440)));
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_2 = (aot_gpr_2 | 9214u);
    aot_fpr_15 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(11128)));
    ctx.fpr[22] = std::bit_cast<float>(aot_gpr_2);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), 0u);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_14;
    aot_gpr_2 = (16320u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), 0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_gpr_2);
    aot_gpr_4 = (0u | 1u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_6 = (ctx.gpr[18] | 0u);
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    ctx.gpr[8] = (0u | 255u);
    ctx.gpr[9] = (ctx.gpr[16] | 0u);
    ctx.gpr[10] = (0u | 0u);
    aot_fpr_15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[11] = (0u | 0u);
    aot_gpr_31 = (0x08981618u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), 0u);
    goto L_08981324;
L_08981618:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23440)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(11224)));
    aot_gpr_5 = (aot_gpr_5 << 4u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= ctx.fpr[24])) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_089816AC;
      }
      goto L_0898163C;
    }
L_0898163C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-1044)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_089816AC;
      }
      goto L_08981648;
    }
L_08981648:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23440)));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_gpr_5 = (16840u << 16u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(11116)));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(11120)));
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(11124)));
    aot_fpr_15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(11128)));
    aot_gpr_5 = (aot_gpr_6 & 255u);
    { const float fs = aot_fpr_14; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_2 = (0u | 1u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), 0u);
    aot_gpr_6 = (ctx.gpr[7] & 255u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_2);
    ctx.gpr[7] = (ctx.gpr[8] & 255u);
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), 0u);
    aot_gpr_4 = (0u | 2u);
    ctx.gpr[8] = (0u | 255u);
    ctx.gpr[9] = (ctx.gpr[16] | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 1u);
    aot_gpr_31 = (0x089816ACu);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), 0u);
    goto L_08981324;
L_089816AC:
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    ctx.gpr[7] = (aot_gpr_29 + static_cast<std::uint32_t>(20));
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x089816C4u);
    ctx.gpr[8] = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0169_entry, 169u, 32u, 0x08AA82D4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089816C4u) goto L_089816C4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089816C4:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_089816E0;
      }
      goto L_089816CC;
    }
L_089816CC:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(32)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(36)));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-16596), std::bit_cast<std::uint32_t>(aot_fpr_12));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-16592), std::bit_cast<std::uint32_t>(aot_fpr_13));
      if (branch_taken) {
          goto L_089816F4;
      }
      goto L_089816E0;
    }
L_089816E0:
    aot_gpr_4 = (18804u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 9216u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-16592), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-16596), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_089816F4;
L_089816F4:
    { std::uint32_t aot_run_words[8]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(64), aot_run_words);
      ctx.fpr[20] = std::bit_cast<float>(aot_run_words[0]);
      ctx.fpr[22] = std::bit_cast<float>(aot_run_words[1]);
      ctx.fpr[24] = std::bit_cast<float>(aot_run_words[2]);
      ctx.gpr[16] = aot_run_words[3];
      ctx.gpr[17] = aot_run_words[4];
      ctx.gpr[18] = aot_run_words[5];
      ctx.gpr[19] = aot_run_words[6];
      aot_gpr_31 = aot_run_words[7];
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
L_0898171C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-304));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(72)));
    aot_gpr_6 = (512u << 16u);
    aot_gpr_5 = (aot_gpr_5 & aot_gpr_6);
    { const std::uint32_t aot_run_words[10]{std::bit_cast<std::uint32_t>(ctx.fpr[20]), std::bit_cast<std::uint32_t>(ctx.fpr[22]), ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(260), aot_run_words); }
    { const bool branch_taken = aot_gpr_5 != 0u;
    ctx.gpr[16] = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_089817B4;
      }
      goto L_0898175C;
    }
L_0898175C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    aot_gpr_5 = (8u << 16u);
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089817B4;
      }
      goto L_08981770;
    }
L_08981770:
    aot_gpr_4 = (16245u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    aot_gpr_4 = (aot_gpr_4 | 49807u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_089817AC;
      }
      goto L_08981790;
    }
L_08981790:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_089817BC;
      }
      goto L_089817A4;
    }
L_089817A4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089817CC;
      }
      goto L_089817AC;
    }
L_089817AC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089822EC;
      }
      goto L_089817B4;
    }
L_089817B4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089822EC;
      }
      goto L_089817BC;
    }
L_089817BC:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    goto L_089817CC;
L_089817CC:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(17)));
    ctx.gpr[18] = (0u | 0u);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089822EC;
      }
      goto L_089817E0;
    }
L_089817E0:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[17] + static_cast<std::uint32_t>(24))))));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) < 0;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_08981804;
      }
      goto L_089817EC;
    }
L_089817EC:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[17] + static_cast<std::uint32_t>(24))))));
    ctx.gpr[19] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8672)));
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[18]);
    aot_gpr_4 = (aot_gpr_4 << 6u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[19] + aot_gpr_4);
      if (branch_taken) {
          goto L_08981804;
      }
      goto L_08981804;
    }
L_08981804:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) > 0;
    aot_gpr_5 = (0u | 4u);
      if (branch_taken) {
          goto L_08981820;
      }
      goto L_08981810;
    }
L_08981810:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) < 0;
      if (branch_taken) {
          goto L_089822D8;
      }
      goto L_08981818;
    }
L_08981818:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08981830;
      }
      goto L_08981820;
    }
L_08981820:
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_089820B0;
      }
      goto L_08981828;
    }
L_08981828:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089822D8;
      }
      goto L_08981830;
    }
L_08981830:
    ctx.gpr[20] = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08981844u);
    aot_gpr_6 = (ctx.gpr[19] | 0u);
    goto L_08980DCC;
L_08981844:
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[21] = (0u | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[19] + static_cast<std::uint32_t>(40)));
    aot_gpr_5 = (aot_gpr_4 < static_cast<std::uint32_t>(15) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08981C40;
      }
      goto L_08981868;
    }
L_08981868:
    aot_gpr_4 = (aot_gpr_4 << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_4);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-6864)));
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
L_08981880:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 1u);
      if (branch_taken) {
          goto L_08981C40;
      }
      goto L_08981888;
    }
L_08981888:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7648)));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 19 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089818A8;
      }
      goto L_08981898;
    }
L_08981898:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7648)));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 7 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089818AC;
      }
      goto L_089818A8;
    }
L_089818A8:
    ctx.gpr[20] = (0u | 1u);
    goto L_089818AC;
L_089818AC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08981C40;
      }
      goto L_089818B4;
    }
L_089818B4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    aot_gpr_6 = (16320u << 16u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_6);
    aot_gpr_4 = (aot_gpr_4 >> 22u);
    aot_gpr_4 = (aot_gpr_5 ^ aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 & 96u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089818E0;
      }
      goto L_089818D8;
    }
L_089818D8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 1u);
      if (branch_taken) {
          goto L_089818E4;
      }
      goto L_089818E0;
    }
L_089818E0:
    ctx.gpr[21] = (0u | 1u);
    goto L_089818E4;
L_089818E4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    aot_gpr_6 = (16320u << 16u);
    aot_gpr_5 = (aot_gpr_5 & aot_gpr_6);
    aot_gpr_4 = (aot_gpr_4 >> 11u);
    aot_gpr_5 = (aot_gpr_5 >> 22u);
    aot_gpr_4 = (aot_gpr_4 ^ aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 & 3u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08981910;
      }
      goto L_0898190C;
    }
L_0898190C:
    ctx.gpr[20] = (0u | 1u);
    goto L_08981910;
L_08981910:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08981C40;
      }
      goto L_08981918;
    }
L_08981918:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7648)));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 19 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08981954;
      }
      goto L_08981928;
    }
L_08981928:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7648)));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 7 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08981954;
      }
      goto L_08981938;
    }
L_08981938:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7888)));
    aot_gpr_4 = (16128u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_089819B0;
      }
      goto L_08981954;
    }
L_08981954:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    aot_gpr_6 = (16320u << 16u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_6);
    aot_gpr_4 = (aot_gpr_4 >> 22u);
    aot_gpr_4 = (aot_gpr_5 ^ aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 & 96u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08981980;
      }
      goto L_08981978;
    }
L_08981978:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 1u);
      if (branch_taken) {
          goto L_08981984;
      }
      goto L_08981980;
    }
L_08981980:
    ctx.gpr[21] = (0u | 1u);
    goto L_08981984;
L_08981984:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    aot_gpr_6 = (16320u << 16u);
    aot_gpr_5 = (aot_gpr_5 & aot_gpr_6);
    aot_gpr_4 = (aot_gpr_4 >> 11u);
    aot_gpr_5 = (aot_gpr_5 >> 22u);
    aot_gpr_4 = (aot_gpr_4 ^ aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 & 3u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089819B0;
      }
      goto L_089819AC;
    }
L_089819AC:
    ctx.gpr[20] = (0u | 1u);
    goto L_089819B0;
L_089819B0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08981C40;
      }
      goto L_089819B8;
    }
L_089819B8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_gpr_5 = (ctx.gpr[18] << 7u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 & 512u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089819D4;
      }
      goto L_089819D0;
    }
L_089819D0:
    ctx.gpr[20] = (0u | 1u);
    goto L_089819D4;
L_089819D4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08981C40;
      }
      goto L_089819DC;
    }
L_089819DC:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7648)));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 19 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089819FC;
      }
      goto L_089819EC;
    }
L_089819EC:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7648)));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 7 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08981A18;
      }
      goto L_089819FC;
    }
L_089819FC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_gpr_5 = (ctx.gpr[18] << 7u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 & 512u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08981A18;
      }
      goto L_08981A14;
    }
L_08981A14:
    ctx.gpr[20] = (0u | 1u);
    goto L_08981A18;
L_08981A18:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08981C40;
      }
      goto L_08981A20;
    }
L_08981A20:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_gpr_5 = (ctx.gpr[18] << 8u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 & 1024u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08981A3C;
      }
      goto L_08981A38;
    }
L_08981A38:
    ctx.gpr[20] = (0u | 1u);
    goto L_08981A3C;
L_08981A3C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08981C40;
      }
      goto L_08981A44;
    }
L_08981A44:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7648)));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 19 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08981A64;
      }
      goto L_08981A54;
    }
L_08981A54:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7648)));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 7 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08981A80;
      }
      goto L_08981A64;
    }
L_08981A64:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_gpr_5 = (ctx.gpr[18] << 8u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 & 1024u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08981A80;
      }
      goto L_08981A7C;
    }
L_08981A7C:
    ctx.gpr[20] = (0u | 1u);
    goto L_08981A80;
L_08981A80:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08981C40;
      }
      goto L_08981A88;
    }
L_08981A88:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_gpr_5 = (ctx.gpr[18] << 9u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 & 2048u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08981AA4;
      }
      goto L_08981AA0;
    }
L_08981AA0:
    ctx.gpr[20] = (0u | 1u);
    goto L_08981AA4;
L_08981AA4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08981C40;
      }
      goto L_08981AAC;
    }
L_08981AAC:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7648)));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 19 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08981ACC;
      }
      goto L_08981ABC;
    }
L_08981ABC:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7648)));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 7 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08981AE8;
      }
      goto L_08981ACC;
    }
L_08981ACC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_gpr_5 = (ctx.gpr[18] << 9u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 & 2048u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08981AE8;
      }
      goto L_08981AE4;
    }
L_08981AE4:
    ctx.gpr[20] = (0u | 1u);
    goto L_08981AE8;
L_08981AE8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08981C40;
      }
      goto L_08981AF0;
    }
L_08981AF0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    aot_gpr_5 = (16320u << 16u);
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 >> 22u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 17 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08981B74;
      }
      goto L_08981B10;
    }
L_08981B10:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    aot_gpr_6 = (16320u << 16u);
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_6);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_gpr_4 = (aot_gpr_4 >> 22u);
    aot_gpr_4 = (aot_gpr_4 << 3u);
    aot_gpr_4 = (aot_gpr_5 ^ aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 & 96u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08981B40;
      }
      goto L_08981B38;
    }
L_08981B38:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 1u);
      if (branch_taken) {
          goto L_08981B44;
      }
      goto L_08981B40;
    }
L_08981B40:
    ctx.gpr[21] = (0u | 1u);
    goto L_08981B44;
L_08981B44:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    aot_gpr_6 = (16320u << 16u);
    aot_gpr_5 = (aot_gpr_5 & aot_gpr_6);
    aot_gpr_4 = (aot_gpr_4 >> 11u);
    aot_gpr_5 = (aot_gpr_5 >> 22u);
    aot_gpr_4 = (aot_gpr_4 ^ aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 & 3u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08981B78;
      }
      goto L_08981B6C;
    }
L_08981B6C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 1u);
      if (branch_taken) {
          goto L_08981B78;
      }
      goto L_08981B74;
    }
L_08981B74:
    ctx.gpr[20] = (0u | 1u);
    goto L_08981B78;
L_08981B78:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08981C40;
      }
      goto L_08981B80;
    }
L_08981B80:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7648)));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 19 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08981BA0;
      }
      goto L_08981B90;
    }
L_08981B90:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7648)));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 7 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08981C28;
      }
      goto L_08981BA0;
    }
L_08981BA0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    aot_gpr_5 = (16320u << 16u);
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 >> 22u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 17 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08981C24;
      }
      goto L_08981BC0;
    }
L_08981BC0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    aot_gpr_6 = (16320u << 16u);
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_6);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_gpr_4 = (aot_gpr_4 >> 22u);
    aot_gpr_4 = (aot_gpr_4 << 3u);
    aot_gpr_4 = (aot_gpr_5 ^ aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 & 96u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08981BF0;
      }
      goto L_08981BE8;
    }
L_08981BE8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 1u);
      if (branch_taken) {
          goto L_08981BF4;
      }
      goto L_08981BF0;
    }
L_08981BF0:
    ctx.gpr[21] = (0u | 1u);
    goto L_08981BF4;
L_08981BF4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    aot_gpr_6 = (16320u << 16u);
    aot_gpr_5 = (aot_gpr_5 & aot_gpr_6);
    aot_gpr_4 = (aot_gpr_4 >> 11u);
    aot_gpr_5 = (aot_gpr_5 >> 22u);
    aot_gpr_4 = (aot_gpr_4 ^ aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 & 3u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08981C28;
      }
      goto L_08981C1C;
    }
L_08981C1C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 1u);
      if (branch_taken) {
          goto L_08981C28;
      }
      goto L_08981C24;
    }
L_08981C24:
    ctx.gpr[20] = (0u | 1u);
    goto L_08981C28;
L_08981C28:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08981C40;
      }
      goto L_08981C30;
    }
L_08981C30:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08981C40;
      }
      goto L_08981C38;
    }
L_08981C38:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08981C40;
      }
      goto L_08981C40;
    }
L_08981C40:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[19] + static_cast<std::uint32_t>(44)));
    aot_gpr_4 = (aot_gpr_4 & 8u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08981C80;
      }
      goto L_08981C50;
    }
L_08981C50:
    { const bool branch_taken = ctx.gpr[20] == 0u;
      if (branch_taken) {
          goto L_08981C6C;
      }
      goto L_08981C58;
    }
L_08981C58:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-65));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(76), aot_gpr_4);
      if (branch_taken) {
          goto L_08981C78;
      }
      goto L_08981C6C;
    }
L_08981C6C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    aot_gpr_4 = (aot_gpr_4 | 64u);
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(76), aot_gpr_4);
    goto L_08981C78;
L_08981C78:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089822EC;
      }
      goto L_08981C80;
    }
L_08981C80:
    { const bool branch_taken = ctx.gpr[20] == 0u;
      if (branch_taken) {
          goto L_08981CF0;
      }
      goto L_08981C88;
    }
L_08981C88:
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    aot_gpr_6 = (aot_mem.aot_direct_load8(ctx.gpr[19] + static_cast<std::uint32_t>(17)));
    ctx.gpr[7] = (aot_mem.aot_direct_load8(ctx.gpr[19] + static_cast<std::uint32_t>(18)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
    ctx.gpr[8] = (aot_mem.aot_direct_load8(ctx.gpr[19] + static_cast<std::uint32_t>(44)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24)));
    ctx.gpr[10] = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(48)));
    aot_fpr_14 = std::bit_cast<float>(0u);
    ctx.gpr[11] = (aot_mem.aot_direct_load8(ctx.gpr[19] + static_cast<std::uint32_t>(42)));
    aot_gpr_2 = (aot_mem.aot_direct_load8(ctx.gpr[19] + static_cast<std::uint32_t>(41)));
    ctx.gpr[3] = (ctx.gpr[8] & 16u);
    ctx.gpr[12] = (ctx.gpr[8] & 1u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_2);
    ctx.gpr[8] = (0u < ctx.gpr[3] ? 1u : 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[12]);
    ctx.gpr[3] = (ctx.gpr[8] & 255u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), 0u);
    aot_gpr_2 = (16320u << 16u);
    aot_gpr_4 = (ctx.gpr[16] + ctx.gpr[18]);
    aot_fpr_15 = std::bit_cast<float>(aot_gpr_2);
    ctx.gpr[9] = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    ctx.gpr[8] = (0u | 255u);
    aot_gpr_31 = (0x08981CE8u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[3]);
    goto L_08983B9C;
L_08981CE8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08981D58;
      }
      goto L_08981CF0;
    }
L_08981CF0:
    { const bool branch_taken = ctx.gpr[21] == 0u;
      if (branch_taken) {
          goto L_08981D58;
      }
      goto L_08981CF8;
    }
L_08981CF8:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[19] + static_cast<std::uint32_t>(44)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24)));
    ctx.gpr[10] = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(48)));
    aot_fpr_14 = std::bit_cast<float>(0u);
    ctx.gpr[11] = (aot_mem.aot_direct_load8(ctx.gpr[19] + static_cast<std::uint32_t>(42)));
    aot_gpr_2 = (aot_mem.aot_direct_load8(ctx.gpr[19] + static_cast<std::uint32_t>(41)));
    aot_gpr_6 = (aot_gpr_5 & 16u);
    ctx.gpr[3] = (aot_gpr_5 & 1u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_2);
    aot_gpr_5 = (0u < aot_gpr_6 ? 1u : 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.gpr[12] = (aot_gpr_5 & 255u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), 0u);
    aot_gpr_2 = (16320u << 16u);
    aot_gpr_4 = (ctx.gpr[16] + ctx.gpr[18]);
    aot_fpr_15 = std::bit_cast<float>(aot_gpr_2);
    ctx.gpr[9] = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    aot_gpr_5 = (0u | 0u);
    aot_gpr_6 = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 255u);
    aot_gpr_31 = (0x08981D58u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[12]);
    goto L_08983B9C;
L_08981D58:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(28)));
    aot_fpr_13 = std::bit_cast<float>(0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_12) || std::isnan(aot_fpr_13)) && aot_fpr_12 == aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    ctx.gpr[22] = (0u | 0u);
      if (branch_taken) {
          goto L_08981E78;
      }
      goto L_08981D70;
    }
L_08981D70:
    { const bool branch_taken = ctx.gpr[20] == 0u;
      if (branch_taken) {
          goto L_08981E78;
      }
      goto L_08981D78;
    }
L_08981D78:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08981D9C;
      }
      goto L_08981D84;
    }
L_08981D84:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[19] + static_cast<std::uint32_t>(17)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08981D9C;
      }
      goto L_08981D90;
    }
L_08981D90:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[19] + static_cast<std::uint32_t>(18)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08981E38;
      }
      goto L_08981D9C;
    }
L_08981D9C:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_fpr_12 = std::bit_cast<float>(0u);
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_12), std::bit_cast<std::uint32_t>(aot_fpr_12), std::bit_cast<std::uint32_t>(aot_fpr_12)};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(64), aot_run_words); }
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(28)));
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_13)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23440)));
    aot_fpr_15 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(11136)));
    { const float fs = aot_fpr_13; const float ft = aot_fpr_15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_gpr_4 = (15232u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_13; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[19] + static_cast<std::uint32_t>(17)));
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_14)));
    { const float fs = aot_fpr_14; const float ft = aot_fpr_15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    { const float fs = aot_fpr_14; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[19] + static_cast<std::uint32_t>(18)));
    ctx.fpr[17] = std::bit_cast<float>(aot_gpr_4);
    ctx.fpr[17] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[17])));
    { const float fs = ctx.fpr[17]; const float ft = aot_fpr_15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_15 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_15 = fs * ft; }
    { const float fs = aot_fpr_15; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_15 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_15 = fs * ft; }
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[19] + static_cast<std::uint32_t>(44)));
    aot_gpr_4 = (aot_gpr_4 & 6u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 1u));
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    aot_gpr_4 = (0u | 0u);
    aot_gpr_31 = (0x08981E2Cu);
    ctx.gpr[8] = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0200_entry, 200u, 403u, 0x08B25C64u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08981E2Cu) goto L_08981E2C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08981E2C:
    ctx.gpr[22] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08981E78;
      }
      goto L_08981E38;
    }
L_08981E38:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_fpr_13 = std::bit_cast<float>(0u);
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_13), std::bit_cast<std::uint32_t>(aot_fpr_13), std::bit_cast<std::uint32_t>(aot_fpr_13)};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(96), aot_run_words); }
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(96));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(28)));
    aot_gpr_4 = (0u | 0u);
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_fpr_15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_13));
    ctx.gpr[7] = (0u | 0u);
    aot_gpr_31 = (0x08981E78u);
    ctx.gpr[8] = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0200_entry, 200u, 403u, 0x08B25C64u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08981E78u) goto L_08981E78;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08981E78:
    { const bool branch_taken = ctx.gpr[22] != 0u;
      if (branch_taken) {
          goto L_08981FA0;
      }
      goto L_08981E80;
    }
L_08981E80:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[19] + static_cast<std::uint32_t>(44)));
    aot_gpr_4 = (aot_gpr_4 & 4u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08981F04;
      }
      goto L_08981E90;
    }
L_08981E90:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_fpr_12 = std::bit_cast<float>(0u);
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_12), std::bit_cast<std::uint32_t>(aot_fpr_12), std::bit_cast<std::uint32_t>(aot_fpr_12)};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(128), aot_run_words); }
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(128));
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_13)));
    aot_gpr_4 = (15232u << 16u);
    aot_fpr_15 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_13; const float ft = aot_fpr_15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[19] + static_cast<std::uint32_t>(17)));
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_14)));
    { const float fs = aot_fpr_14; const float ft = aot_fpr_15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[19] + static_cast<std::uint32_t>(18)));
    ctx.fpr[16] = std::bit_cast<float>(aot_gpr_4);
    ctx.fpr[16] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[16])));
    { const float fs = ctx.fpr[16]; const float ft = aot_fpr_15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_15 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_15 = fs * ft; }
    aot_gpr_4 = (0u | 3u);
    ctx.gpr[7] = (0u | 2u);
    aot_gpr_31 = (0x08981EFCu);
    ctx.gpr[8] = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0200_entry, 200u, 403u, 0x08B25C64u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08981EFCu) goto L_08981EFC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08981EFC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08981FA0;
      }
      goto L_08981F04;
    }
L_08981F04:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[19] + static_cast<std::uint32_t>(44)));
    aot_gpr_4 = (aot_gpr_4 & 2u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08981FA0;
      }
      goto L_08981F14;
    }
L_08981F14:
    { const bool branch_taken = ctx.gpr[20] == 0u;
      if (branch_taken) {
          goto L_08981FA0;
      }
      goto L_08981F1C;
    }
L_08981F1C:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(28)));
    aot_fpr_13 = std::bit_cast<float>(0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_12) || std::isnan(aot_fpr_13)) && aot_fpr_12 == aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08981FA0;
      }
      goto L_08981F34;
    }
L_08981F34:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(144));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_fpr_12 = std::bit_cast<float>(0u);
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_12), std::bit_cast<std::uint32_t>(aot_fpr_12), std::bit_cast<std::uint32_t>(aot_fpr_12)};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(160), aot_run_words); }
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(160));
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_13)));
    aot_gpr_4 = (15232u << 16u);
    aot_fpr_15 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_13; const float ft = aot_fpr_15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[19] + static_cast<std::uint32_t>(17)));
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_14)));
    { const float fs = aot_fpr_14; const float ft = aot_fpr_15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[19] + static_cast<std::uint32_t>(18)));
    ctx.fpr[16] = std::bit_cast<float>(aot_gpr_4);
    ctx.fpr[16] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[16])));
    { const float fs = ctx.fpr[16]; const float ft = aot_fpr_15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_15 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_15 = fs * ft; }
    aot_gpr_4 = (0u | 4u);
    ctx.gpr[7] = (0u | 1u);
    aot_gpr_31 = (0x08981FA0u);
    ctx.gpr[8] = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0200_entry, 200u, 403u, 0x08B25C64u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08981FA0u) goto L_08981FA0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08981FA0:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(36)));
    aot_fpr_13 = std::bit_cast<float>(0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_12) || std::isnan(aot_fpr_13)) && aot_fpr_12 == aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_089820A8;
      }
      goto L_08981FB8;
    }
L_08981FB8:
    { const bool branch_taken = ctx.gpr[20] == 0u;
      if (branch_taken) {
          goto L_08982044;
      }
      goto L_08981FC0;
    }
L_08981FC0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23440)));
    aot_gpr_5 = (16256u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(11136)));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    if (((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(52)));
        goto L_08981FE4;
    }
    goto L_08981FE0;
L_08981FE0:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(52)));
    goto L_08981FE4;
L_08981FE4:
    aot_fpr_13 = std::bit_cast<float>(0u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(36)));
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_13));
    ctx.gpr[9] = (aot_mem.aot_direct_load8(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_gpr_2 = (16752u << 16u);
    aot_fpr_15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12) ^ 0x80000000u);
    ctx.gpr[10] = (aot_mem.aot_direct_load8(ctx.gpr[19] + static_cast<std::uint32_t>(17)));
    ctx.fpr[16] = std::bit_cast<float>(aot_gpr_2);
    ctx.gpr[11] = (aot_mem.aot_direct_load8(ctx.gpr[19] + static_cast<std::uint32_t>(18)));
    aot_gpr_2 = (16256u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), 0u);
    ctx.fpr[17] = std::bit_cast<float>(aot_gpr_2);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), 0u);
    aot_gpr_2 = (16928u << 16u);
    aot_gpr_4 = (ctx.gpr[16] + ctx.gpr[18]);
    ctx.fpr[18] = std::bit_cast<float>(aot_gpr_2);
    ctx.gpr[7] = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    aot_gpr_5 = (0u | 2u);
    ctx.gpr[8] = (0u | 128u);
    aot_gpr_31 = (0x0898203Cu);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(aot_fpr_13));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0164_entry, 164u, 490u, 0x08A97518u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898203Cu) goto L_0898203C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898203C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089820A8;
      }
      goto L_08982044;
    }
L_08982044:
    { const bool branch_taken = ctx.gpr[21] == 0u;
      if (branch_taken) {
          goto L_089820A8;
      }
      goto L_0898204C;
    }
L_0898204C:
    aot_gpr_2 = (16752u << 16u);
    aot_fpr_13 = std::bit_cast<float>(0u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(52)));
    ctx.fpr[16] = std::bit_cast<float>(aot_gpr_2);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(36)));
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_gpr_2 = (16256u << 16u);
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), 0u);
    ctx.fpr[17] = std::bit_cast<float>(aot_gpr_2);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), 0u);
    aot_fpr_15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12) ^ 0x80000000u);
    aot_gpr_2 = (16928u << 16u);
    aot_gpr_4 = (ctx.gpr[16] + ctx.gpr[18]);
    ctx.fpr[18] = std::bit_cast<float>(aot_gpr_2);
    ctx.gpr[7] = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    aot_gpr_5 = (0u | 2u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_gpr_31 = (0x089820A8u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(aot_fpr_13));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0164_entry, 164u, 490u, 0x08A97518u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089820A8u) goto L_089820A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089820A8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089822D8;
      }
      goto L_089820B0;
    }
L_089820B0:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9268)));
    aot_fpr_13 = std::bit_cast<float>(0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_089822D8;
      }
      goto L_089820C8;
    }
L_089820C8:
    ctx.gpr[20] = (aot_gpr_29 + static_cast<std::uint32_t>(176));
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x089820DCu);
    aot_gpr_6 = (ctx.gpr[19] | 0u);
    goto L_08980DCC;
L_089820DC:
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
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
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(ctx.gpr[16] + static_cast<std::uint32_t>(48), aot_run_words);
      aot_fpr_12 = std::bit_cast<float>(aot_run_words[0]);
      aot_fpr_13 = std::bit_cast<float>(aot_run_words[1]);
      aot_fpr_14 = std::bit_cast<float>(aot_run_words[2]);
    }
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_12), std::bit_cast<std::uint32_t>(aot_fpr_13), std::bit_cast<std::uint32_t>(aot_fpr_14)};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(176), aot_run_words); }
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
    ctx.gpr[19] = (aot_gpr_29 + static_cast<std::uint32_t>(192));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_5 = (2236u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(32304));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(48));
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
    ctx.execute_vfpu_vec3_ct<0u, 0u, 1u, 3u, 1u>();
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(208));
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    ctx.execute_vfpu_unary_ct<28u, 28u, 1u, 22u>();
    aot_gpr_4 = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[20] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (16384u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 / ctx.fpr[20];
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.set_vfpu_scalar_bits_ct<1u>(aot_gpr_4);
    { const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 1u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_31 = (0x08982190u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08A931B8, 163u, 0x08A931B8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08982190u) goto L_08982190;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08982190:
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23440)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(11224)));
    aot_gpr_5 = (aot_gpr_5 << 4u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    aot_gpr_4 = (ctx.vfpu_scalar_bits_ct<28u>());
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12) ^ 0x80000000u);
    aot_fpr_13 = std::bit_cast<float>(0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_089822D8;
      }
      goto L_089821EC;
    }
L_089821EC:
    aot_fpr_12 = std::sqrt(aot_fpr_12);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9268)));
    ctx.gpr[19] = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(208));
    aot_gpr_31 = (0x08982208u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08A931B8, 163u, 0x08A931B8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08982208u) goto L_08982208;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08982208:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23440)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(11104)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(510));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_gpr_5 = (16448u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    { const float fs = ctx.fpr[22]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = aot_fpr_12 / aot_fpr_13;
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(11108)));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(510));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(11112)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(510));
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_6);
    aot_fpr_14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_14)));
    { const float fs = ctx.fpr[22]; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = aot_fpr_14 / aot_fpr_13;
    aot_gpr_5 = (aot_gpr_5 & 255u);
    aot_fpr_15 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[16] + ctx.gpr[18]);
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_fpr_14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_15)));
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    { const float fs = ctx.fpr[22]; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_fpr_12 = aot_fpr_14 / aot_fpr_13;
    aot_gpr_6 = (aot_gpr_6 & 255u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(33));
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    aot_fpr_12 = std::sqrt(ctx.fpr[20]);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9268)));
    ctx.gpr[8] = (16128u << 16u);
    aot_fpr_14 = std::bit_cast<float>(ctx.gpr[8]);
    { const float fs = aot_fpr_13; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    ctx.gpr[8] = (17136u << 16u);
    { const std::uint32_t aot_run_words[3]{0u, 0u, 0u};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    { const float fs = aot_fpr_13; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    ctx.gpr[9] = (ctx.gpr[19] | 0u);
    aot_fpr_14 = std::bit_cast<float>(0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), 0u);
    aot_fpr_13 = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[8] = (16320u << 16u);
    aot_fpr_15 = std::bit_cast<float>(ctx.gpr[8]);
    aot_gpr_31 = (0x089822D8u);
    ctx.gpr[8] = (0u | 255u);
    goto L_08981324;
L_089822D8:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(17)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_089817E0;
      }
      goto L_089822EC;
    }
L_089822EC:
    { std::uint32_t aot_run_words[10]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(260), aot_run_words);
      ctx.fpr[20] = std::bit_cast<float>(aot_run_words[0]);
      ctx.fpr[22] = std::bit_cast<float>(aot_run_words[1]);
      ctx.gpr[16] = aot_run_words[2];
      ctx.gpr[17] = aot_run_words[3];
      ctx.gpr[18] = aot_run_words[4];
      ctx.gpr[19] = aot_run_words[5];
      ctx.gpr[20] = aot_run_words[6];
      ctx.gpr[21] = aot_run_words[7];
      ctx.gpr[22] = aot_run_words[8];
      aot_gpr_31 = aot_run_words[9];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(304));
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
L_0898231C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-160));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(108), ctx.gpr[16]);
    ctx.gpr[16] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8744)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(112), ctx.gpr[17]);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 1u));
    ctx.gpr[17] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8740)));
    aot_gpr_4 = (aot_gpr_4 >> 31u);
    aot_gpr_4 = (ctx.gpr[16] + aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(116), ctx.gpr[18]);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 1u));
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 1u));
    aot_gpr_4 = (aot_gpr_5 >> 31u);
    aot_gpr_4 = (ctx.gpr[17] + aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(120), ctx.gpr[19]);
    ctx.gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 1u));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(132), ctx.gpr[22]);
    ctx.gpr[22] = (0u | 6u);
    aot_gpr_4 = (0u | 6u);
    { const std::uint32_t aot_run_words[6]{std::bit_cast<std::uint32_t>(ctx.fpr[20]), std::bit_cast<std::uint32_t>(ctx.fpr[22]), std::bit_cast<std::uint32_t>(ctx.fpr[24]), std::bit_cast<std::uint32_t>(ctx.fpr[26]), std::bit_cast<std::uint32_t>(ctx.fpr[28]), std::bit_cast<std::uint32_t>(ctx.fpr[30])};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(84), aot_run_words); }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(124), ctx.gpr[20]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(128), ctx.gpr[21]);
    { const std::uint32_t aot_run_words[3]{ctx.gpr[23], ctx.gpr[30], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(136), aot_run_words); }
    aot_gpr_31 = (0x08982398u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08861668, 23u, 203u, 0x08861668u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08982398u) goto L_08982398;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08982398:
    aot_gpr_4 = (0u | 10u);
    aot_gpr_31 = (0x089823A4u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08861668, 23u, 203u, 0x08861668u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089823A4u) goto L_089823A4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089823A4:
    aot_gpr_4 = (0u | 8u);
    aot_gpr_31 = (0x089823B0u);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08861668, 23u, 203u, 0x08861668u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089823B0u) goto L_089823B0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089823B0:
    aot_gpr_4 = (0u | 9u);
    aot_gpr_31 = (0x089823BCu);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08861668, 23u, 203u, 0x08861668u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089823BCu) goto L_089823BC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089823BC:
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[16]);
    aot_fpr_13 = std::bit_cast<float>(ctx.gpr[17]);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_fpr_13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_13)));
    aot_gpr_4 = (16512u << 16u);
    ctx.fpr[30] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_5 = (16576u << 16u);
    aot_gpr_4 = (2236u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.fpr[28] = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(32304));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(144));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(60), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(72), aot_gpr_5);
    aot_gpr_4 = (2234u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[18]);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4588));
    aot_gpr_5 = (2234u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.gpr[21] = (2234u << 16u);
    ctx.gpr[18] = (2247u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(4748));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(68), aot_gpr_4);
    ctx.fpr[26] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[26])));
    ctx.gpr[23] = (0u | 0u);
    ctx.fpr[24] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[24])));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(4264));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(18640));
    ctx.gpr[30] = (0u + static_cast<std::uint32_t>(-17));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(64), aot_gpr_5);
    goto L_08982438;
L_08982438:
    aot_gpr_6 = (ctx.gpr[23] << 7u);
    aot_gpr_5 = (ctx.gpr[23] << 4u);
    aot_gpr_6 = (aot_gpr_6 - aot_gpr_5);
    ctx.gpr[17] = (aot_gpr_6 + ctx.gpr[18]);
    aot_gpr_4 = (0u | 5u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    goto L_08982450;
L_08982450:
    ctx.gpr[7] = (aot_gpr_4 + aot_gpr_4);
    ctx.gpr[7] = (aot_gpr_6 + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[18]);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[7] + static_cast<std::uint32_t>(56))))));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[7] + static_cast<std::uint32_t>(68))))));
    ctx.gpr[10] = (aot_gpr_6 + aot_gpr_4);
    aot_mem.aot_direct_store16(ctx.gpr[7] + static_cast<std::uint32_t>(58), static_cast<std::uint16_t>(ctx.gpr[8]));
    ctx.gpr[8] = (ctx.gpr[10] + ctx.gpr[18]);
    aot_mem.aot_direct_store16(ctx.gpr[7] + static_cast<std::uint32_t>(70), static_cast<std::uint16_t>(ctx.gpr[9]));
    ctx.gpr[7] = (aot_mem.aot_direct_load8(ctx.gpr[8] + static_cast<std::uint32_t>(81)));
    ctx.gpr[9] = (aot_mem.aot_direct_load8(ctx.gpr[8] + static_cast<std::uint32_t>(87)));
    aot_mem.aot_direct_store8(ctx.gpr[8] + static_cast<std::uint32_t>(82), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[7] = (aot_mem.aot_direct_load8(ctx.gpr[8] + static_cast<std::uint32_t>(93)));
    aot_mem.aot_direct_store8(ctx.gpr[8] + static_cast<std::uint32_t>(88), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[9] = (aot_mem.aot_direct_load8(ctx.gpr[8] + static_cast<std::uint32_t>(99)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store8(ctx.gpr[8] + static_cast<std::uint32_t>(94), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_gpr_4 = (aot_gpr_4 << 16u);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 16u));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) > 0;
    aot_mem.aot_direct_store8(ctx.gpr[8] + static_cast<std::uint32_t>(100), static_cast<std::uint8_t>(ctx.gpr[9]));
      if (branch_taken) {
          goto L_08982450;
      }
      goto L_089824A4;
    }
L_089824A4:
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(100), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08982AE4;
      }
      goto L_089824AC;
    }
L_089824AC:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) > 0;
      if (branch_taken) {
          goto L_089824C4;
      }
      goto L_089824B8;
    }
L_089824B8:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(51)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) <= 0;
      if (branch_taken) {
          goto L_08982AE4;
      }
      goto L_089824C4;
    }
L_089824C4:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    ctx.gpr[7] = (aot_gpr_29 + static_cast<std::uint32_t>(36));
    aot_gpr_31 = (0x089824DCu);
    ctx.gpr[8] = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0169_entry, 169u, 32u, 0x08AA82D4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089824DCu) goto L_089824DC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089824DC:
    { const bool branch_taken = aot_gpr_2 == 0u;
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(56))))));
      if (branch_taken) {
          goto L_08982AD0;
      }
      goto L_089824E4;
    }
L_089824E4:
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-3));
    aot_fpr_14 = std::bit_cast<float>(0u);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 < aot_fpr_14)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_08982540;
      }
      goto L_08982504;
    }
L_08982504:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_14)) ? 0x00800000u : 0u);
    if (((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(56))))));
        goto L_08982544;
    }
    goto L_08982518;
L_08982518:
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(80)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 <= aot_fpr_14)) ? 0x00800000u : 0u);
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(56))))));
        goto L_08982544;
    }
    goto L_0898252C;
L_0898252C:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(76)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08982560;
      }
      goto L_08982540;
    }
L_08982540:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(56))))));
    goto L_08982544;
L_08982544:
    aot_gpr_4 = (aot_gpr_4 | 2u);
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(56))))));
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    aot_gpr_5 = (aot_gpr_5 & ctx.gpr[30]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(aot_gpr_5));
      if (branch_taken) {
          goto L_089826B8;
      }
      goto L_08982560;
    }
L_08982560:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(2000));
    aot_gpr_5 = (aot_gpr_5 < aot_gpr_4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_089825F8;
      }
      goto L_08982578;
    }
L_08982578:
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), aot_gpr_4);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(56))))));
    aot_gpr_5 = (aot_gpr_4 & 8u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_089825F0;
      }
      goto L_0898258C;
    }
L_0898258C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(60)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(72)));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(80)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), 0u);
    aot_gpr_4 = (aot_gpr_4 << 5u);
    aot_gpr_6 = (0u - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_6 = (aot_gpr_6 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_6 + aot_gpr_4);
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_6 = (0u | 1u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 1u);
    aot_gpr_31 = (0x089825DCu);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0036_entry, 36u, 527u, 0x088967ACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089825DCu) goto L_089825DC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089825DC:
    { const bool branch_taken = aot_gpr_2 == 0u;
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(56))))));
      if (branch_taken) {
          goto L_089825F0;
      }
      goto L_089825E4;
    }
L_089825E4:
    aot_gpr_4 = (aot_gpr_4 | 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_089825F8;
      }
      goto L_089825F0;
    }
L_089825F0:
    aot_gpr_4 = (aot_gpr_4 & ctx.gpr[30]);
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_089825F8;
L_089825F8:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(56))))));
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    aot_gpr_6 = (aot_gpr_5 & 16u);
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(101)));
      if (branch_taken) {
          goto L_0898264C;
      }
      goto L_0898260C;
    }
L_0898260C:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_6 = (aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    aot_fpr_13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_13));
    ctx.gpr[7] = (aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(49)));
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(82), static_cast<std::uint8_t>(aot_gpr_6));
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store16(ctx.gpr[17] + static_cast<std::uint32_t>(58), static_cast<std::uint16_t>(aot_gpr_6));
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_mem.aot_direct_store16(ctx.gpr[17] + static_cast<std::uint32_t>(70), static_cast<std::uint16_t>(aot_gpr_6));
    aot_gpr_6 = (aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(50)));
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(88), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[7] = (0u | 1u);
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(94), static_cast<std::uint8_t>(aot_gpr_6));
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(100), static_cast<std::uint8_t>(ctx.gpr[7]));
    goto L_0898264C;
L_0898264C:
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_089826B8;
      }
      goto L_08982654;
    }
L_08982654:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[17] + static_cast<std::uint32_t>(58))))));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[17] + static_cast<std::uint32_t>(60))))));
    aot_gpr_5 = (aot_gpr_5 - aot_gpr_6);
    if (static_cast<std::int32_t>(aot_gpr_5) < 0) {
    aot_gpr_5 = (0u - aot_gpr_5);
        goto L_08982668;
    }
    goto L_08982668;
L_08982668:
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_gpr_5 = (16968u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 <= aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_089826B4;
      }
      goto L_08982688;
    }
L_08982688:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[17] + static_cast<std::uint32_t>(70))))));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[17] + static_cast<std::uint32_t>(72))))));
    aot_gpr_5 = (aot_gpr_5 - aot_gpr_6);
    if (static_cast<std::int32_t>(aot_gpr_5) < 0) {
    aot_gpr_5 = (0u - aot_gpr_5);
        goto L_0898269C;
    }
    goto L_0898269C;
L_0898269C:
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_13)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 <= aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_089826B8;
      }
      goto L_089826B4;
    }
L_089826B4:
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(100), static_cast<std::uint8_t>(0u));
    goto L_089826B8;
L_089826B8:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) <= 0;
      if (branch_taken) {
          goto L_08982AE4;
      }
      goto L_089826C0;
    }
L_089826C0:
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(24)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_14 < aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_5 = (16128u << 16u);
      if (branch_taken) {
          goto L_08982AE4;
      }
      goto L_089826D8;
    }
L_089826D8:
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_gpr_5 = (16256u << 16u);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_15 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_5 = (aot_gpr_4 << 16u);
    ctx.fpr[22] = aot_fpr_15 / aot_fpr_14;
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 16u));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(56))))));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_14 < aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_fpr_13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_13)));
      if (branch_taken) {
          goto L_08982728;
      }
      goto L_08982710;
    }
L_08982710:
    { const float fs = aot_fpr_13; const float ft = aot_fpr_15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[19] = (aot_gpr_5 << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[19]) >> 16u));
      if (branch_taken) {
          goto L_08982748;
      }
      goto L_08982728;
    }
L_08982728:
    aot_fpr_14 = aot_fpr_14 - aot_fpr_12;
    aot_fpr_12 = aot_fpr_14 / aot_fpr_12;
    aot_fpr_12 = aot_fpr_15 - aot_fpr_12;
    { const float fs = aot_fpr_13; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[19] = (aot_gpr_5 << 16u);
    ctx.gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[19]) >> 16u));
    goto L_08982748;
L_08982748:
    aot_gpr_4 = (aot_gpr_4 & 1u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) > 0;
    ctx.gpr[20] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_08982770;
      }
      goto L_08982754;
    }
L_08982754:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) < 0;
      if (branch_taken) {
          goto L_08982790;
      }
      goto L_0898275C;
    }
L_0898275C:
    aot_gpr_4 = (0u | 4u);
    aot_gpr_31 = (0x08982768u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08861668, 23u, 203u, 0x08861668u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08982768u) goto L_08982768;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08982768:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_08982794;
      }
      goto L_08982770;
    }
L_08982770:
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08982790;
      }
      goto L_0898277C;
    }
L_0898277C:
    aot_gpr_4 = (0u | 4u);
    aot_gpr_31 = (0x08982788u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08861668, 23u, 203u, 0x08861668u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08982788u) goto L_08982788;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08982788:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_08982794;
      }
      goto L_08982790;
    }
L_08982790:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    goto L_08982794;
L_08982794:
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_0898298C;
      }
      goto L_0898279C;
    }
L_0898279C:
    aot_gpr_4 = (16928u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(24)));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < ctx.fpr[20])) ? 0x00800000u : 0u);
    if (((ctx.fcr31 & 0x00800000u) != 0u)) {
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
        goto L_089827C0;
    }
    goto L_089827C0;
L_089827C0:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7900)));
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    ctx.fpr[20] = aot_fpr_12 / aot_fpr_13;
    aot_gpr_6 = (16256u << 16u);
    ctx.gpr[7] = (0u | 1u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_6);
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[7];
    ctx.fpr[20] = ctx.fpr[20] + aot_fpr_14;
      if (branch_taken) {
          goto L_08982800;
      }
      goto L_089827E0;
    }
L_089827E0:
    aot_gpr_31 = (0x089827E8u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8896)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0035_entry, 35u, 116u, 0x088907E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089827E8u) goto L_089827E8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089827E8:
    aot_gpr_4 = (16243u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 13107u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    { const float fs = ctx.fpr[0]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_08982800;
L_08982800:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (0x0898280Cu);
    aot_gpr_4 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08861668, 23u, 203u, 0x08861668u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898280Cu) goto L_0898280C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898280C:
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(24)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    aot_fpr_14 = aot_fpr_14 - aot_fpr_12;
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(32)));
    aot_gpr_6 = (aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    ctx.gpr[7] = (aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(49)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(aot_fpr_14));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(36)));
    ctx.fpr[19] = std::bit_cast<float>(aot_gpr_6);
    ctx.gpr[8] = (aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(50)));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[7]);
    { const float fs = ctx.fpr[17]; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    ctx.fpr[2] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.fpr[19] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[19])));
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[0])));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    aot_fpr_15 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(32)));
    ctx.fpr[2] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[2])));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    { const float fs = ctx.fpr[17]; const float ft = aot_fpr_15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
      if (branch_taken) {
          goto L_08982938;
      }
      goto L_0898286C;
    }
L_0898286C:
    aot_gpr_4 = (16329u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 4059u);
    aot_fpr_15 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    ctx.fpr[16] = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_15 = aot_fpr_15 / ctx.fpr[16];
    aot_gpr_4 = (16256u << 16u);
    aot_gpr_5 = (16128u << 16u);
    aot_gpr_6 = (15733u << 16u);
    aot_gpr_6 = (aot_gpr_6 | 49807u);
    ctx.gpr[7] = (16051u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] | 13107u);
    ctx.gpr[8] = (15897u << 16u);
    ctx.gpr[8] = (ctx.gpr[8] | 39322u);
    ctx.fpr[1] = std::bit_cast<float>(aot_gpr_5);
    ctx.fpr[3] = std::bit_cast<float>(aot_gpr_6);
    ctx.fpr[16] = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_15 = ctx.fpr[16] - aot_fpr_15;
    { const float fs = aot_fpr_15; const float ft = aot_fpr_15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_15 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_15 = fs * ft; }
    { const float fs = aot_fpr_15; const float ft = aot_fpr_15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_15 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_15 = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[7]);
    { const float fs = aot_fpr_15; const float ft = aot_fpr_15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_15 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_15 = fs * ft; }
    { const float fs = aot_fpr_15; const float ft = ctx.fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_15 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_15 = fs * ft; }
    aot_fpr_15 = aot_fpr_15 + ctx.fpr[1];
    ctx.fpr[4] = aot_fpr_15 - ctx.fpr[1];
    { const float fs = ctx.fpr[4]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[3] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[3] = fs * ft; }
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.fpr[16] = ctx.fpr[16] - ctx.fpr[3];
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[1] <= ctx.fpr[16])) ? 0x00800000u : 0u);
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[1]));
        goto L_089828E8;
    }
    goto L_089828E8;
L_089828E8:
    ctx.fpr[19] = ctx.fpr[19] / ctx.fpr[20];
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    ctx.gpr[8] = (0u | 255u);
    ctx.fpr[0] = ctx.fpr[0] / ctx.fpr[20];
    ctx.fpr[2] = ctx.fpr[2] / ctx.fpr[20];
    ctx.fpr[19] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[19]));
    ctx.fpr[0] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    { const float fs = ctx.fpr[17]; const float ft = aot_fpr_15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_15 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_15 = fs * ft; }
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[2] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[2]));
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    aot_gpr_31 = (0x08982930u);
    aot_gpr_6 = (aot_gpr_6 & 255u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0169_entry, 169u, 68u, 0x08AA8C8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08982930u) goto L_08982930;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08982930:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0898298C;
      }
      goto L_08982938;
    }
L_08982938:
    aot_fpr_15 = ctx.fpr[19] / ctx.fpr[20];
    aot_gpr_4 = (16800u << 16u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    ctx.gpr[8] = (0u | 255u);
    ctx.fpr[16] = ctx.fpr[0] / ctx.fpr[20];
    ctx.fpr[2] = ctx.fpr[2] / ctx.fpr[20];
    ctx.fpr[1] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_15));
    ctx.fpr[16] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[16]));
    ctx.fpr[19] = std::bit_cast<float>(aot_gpr_4);
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_15 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_15 = fs * ft; }
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    aot_gpr_5 = (aot_gpr_5 & 255u);
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    aot_gpr_4 = (aot_gpr_4 & 255u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[2]));
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    aot_gpr_6 = (aot_gpr_6 & 255u);
    aot_gpr_31 = (0x0898298Cu);
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0169_entry, 169u, 81u, 0x08AA9084u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898298Cu) goto L_0898298C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898298C:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(54)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08982AE4;
      }
      goto L_08982998;
    }
L_08982998:
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 2 ? 1u : 0u);
    if (aot_gpr_5 == 0u) {
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 3 ? 1u : 0u);
        goto L_089829B8;
    }
    goto L_089829A4;
L_089829A4:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) <= 0;
      if (branch_taken) {
          goto L_089829CC;
      }
      goto L_089829AC;
    }
L_089829AC:
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(16))))));
      if (branch_taken) {
          goto L_089829D0;
      }
      goto L_089829B8;
    }
L_089829B8:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089829CC;
      }
      goto L_089829C0;
    }
L_089829C0:
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(16))))));
      if (branch_taken) {
          goto L_089829D0;
      }
      goto L_089829CC;
    }
L_089829CC:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(16))))));
    goto L_089829D0;
L_089829D0:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08982AC8;
      }
      goto L_089829D8;
    }
L_089829D8:
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[21]);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
    aot_gpr_4 = (0u | 1u);
    aot_gpr_31 = (0x089829F0u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08861668, 23u, 203u, 0x08861668u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089829F0u) goto L_089829F0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089829F0:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    aot_fpr_12 = aot_fpr_12 - ctx.fpr[26];
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_fpr_13 = aot_fpr_13 - ctx.fpr[24];
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(8))))));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[30]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    { const float fs = aot_fpr_14; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(24)));
    { const float fs = aot_fpr_14; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_15 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(32)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr_4)) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr_5)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(49)));
    { const float fs = ctx.fpr[16]; const float ft = aot_fpr_15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_15 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_15 = fs * ft; }
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(36)));
    aot_fpr_15 = aot_fpr_15 / aot_fpr_14;
    aot_gpr_6 = (aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(50)));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(14))))));
    ctx.gpr[8] = (ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr_6)) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr_6 = (ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[19])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[9])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_6) >> 8u));
    aot_gpr_6 = (aot_gpr_6 & 255u);
    ctx.gpr[7] = (ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr_4)) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr_5)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 8u));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 8u));
    ctx.gpr[7] = (ctx.gpr[7] << 16u);
    aot_fpr_12 = ctx.fpr[26] + aot_fpr_12;
    aot_fpr_13 = ctx.fpr[24] + aot_fpr_13;
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_gpr_5 = (ctx.lo);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 8u));
    ctx.gpr[8] = (0u | 255u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 16u));
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    aot_gpr_31 = (0x08982AB8u);
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0169_entry, 169u, 68u, 0x08AA8C8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08982AB8u) goto L_08982AB8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08982AB8:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(20));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(16))))));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_089829D8;
      }
      goto L_08982AC8;
    }
L_08982AC8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08982AE4;
      }
      goto L_08982AD0;
    }
L_08982AD0:
    aot_gpr_4 = (aot_gpr_4 | 2u);
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(56))))));
    aot_gpr_4 = (aot_gpr_4 & ctx.gpr[30]);
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_08982AE4;
L_08982AE4:
    aot_gpr_4 = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
    ctx.gpr[23] = (aot_gpr_4 << 16u);
    ctx.gpr[23] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[23]) >> 16u));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[23]) < 56 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08982438;
      }
      goto L_08982AFC;
    }
L_08982AFC:
    aot_gpr_4 = (0u | 6u);
    aot_gpr_31 = (0x08982B08u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08861668, 23u, 203u, 0x08861668u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08982B08u) goto L_08982B08;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08982B08:
    aot_gpr_4 = (0u | 4u);
    aot_gpr_31 = (0x08982B14u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08861668, 23u, 203u, 0x08861668u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08982B14u) goto L_08982B14;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08982B14:
    aot_gpr_4 = (0u | 10u);
    aot_gpr_31 = (0x08982B20u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08861668, 23u, 203u, 0x08861668u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08982B20u) goto L_08982B20;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08982B20:
    aot_gpr_4 = (0u | 8u);
    aot_gpr_31 = (0x08982B2Cu);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08861668, 23u, 203u, 0x08861668u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08982B2Cu) goto L_08982B2C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08982B2C:
    aot_gpr_4 = (0u | 9u);
    aot_gpr_31 = (0x08982B38u);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08861668, 23u, 203u, 0x08861668u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08982B38u) goto L_08982B38;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08982B38:
    aot_gpr_4 = (0u | 1u);
    aot_gpr_31 = (0x08982B44u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08861668, 23u, 203u, 0x08861668u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08982B44u) goto L_08982B44;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08982B44:
    aot_gpr_4 = (17152u << 16u);
    ctx.gpr[21] = (2247u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[20] = (0u | 5u);
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(18608));
    goto L_08982B5C;
L_08982B5C:
    ctx.gpr[17] = (ctx.gpr[16] << 7u);
    aot_gpr_4 = (ctx.gpr[16] << 4u);
    ctx.gpr[17] = (ctx.gpr[17] - aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[17] + ctx.gpr[18]);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08982CFC;
      }
      goto L_08982B78;
    }
L_08982B78:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(56))))));
    aot_gpr_4 = (aot_gpr_4 & 8u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08982CFC;
      }
      goto L_08982B88;
    }
L_08982B88:
    ctx.gpr[19] = (0u | 0u);
    goto L_08982B8C;
L_08982B8C:
    aot_gpr_4 = (ctx.gpr[17] + ctx.gpr[19]);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[18]);
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(100)));
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08982CE4;
      }
      goto L_08982BA0;
    }
L_08982BA0:
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(101)));
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_5 = (ctx.gpr[22] - ctx.gpr[19]);
      if (branch_taken) {
          goto L_08982CE4;
      }
      goto L_08982BAC;
    }
L_08982BAC:
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_gpr_5 = (ctx.gpr[20] - ctx.gpr[19]);
    aot_fpr_12 = aot_fpr_12 / ctx.fpr[28];
    aot_gpr_6 = (ctx.gpr[19] + ctx.gpr[19]);
    aot_gpr_6 = (ctx.gpr[17] + aot_gpr_6);
    aot_gpr_6 = (aot_gpr_6 + ctx.gpr[18]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_6 + static_cast<std::uint32_t>(58))))));
    ctx.gpr[8] = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(82)));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_6 + static_cast<std::uint32_t>(70))))));
    aot_mem.aot_direct_store16(ctx.gpr[21] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[7] = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(88)));
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_6 + static_cast<std::uint32_t>(60))))));
    aot_mem.aot_direct_store16(ctx.gpr[21] + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(ctx.gpr[9]));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_6 + static_cast<std::uint32_t>(72))))));
    aot_mem.aot_direct_store16(ctx.gpr[21] + static_cast<std::uint32_t>(24), static_cast<std::uint16_t>(ctx.gpr[10]));
    ctx.gpr[10] = (0u | 255u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_13)));
    aot_fpr_13 = aot_fpr_13 / ctx.fpr[28];
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(94)));
    aot_mem.aot_direct_store16(ctx.gpr[21] + static_cast<std::uint32_t>(26), static_cast<std::uint16_t>(aot_gpr_6));
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(83)));
    ctx.gpr[9] = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(89)));
    ctx.gpr[11] = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(95)));
    aot_mem.aot_direct_store8(ctx.gpr[21] + static_cast<std::uint32_t>(7), static_cast<std::uint8_t>(ctx.gpr[10]));
    aot_mem.aot_direct_store8(ctx.gpr[21] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(ctx.gpr[10]));
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    { const float fs = aot_fpr_13; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[10])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_fpr_13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_13));
    aot_gpr_2 = (ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[10])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_2) >> 8u));
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    aot_mem.aot_direct_store8(ctx.gpr[21] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[7] = (ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[10])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr_5)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 8u));
    aot_gpr_5 = (aot_gpr_5 & 255u);
    aot_mem.aot_direct_store8(ctx.gpr[21] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr_6)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 8u));
    aot_gpr_5 = (aot_gpr_5 & 255u);
    aot_mem.aot_direct_store8(ctx.gpr[21] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_6 = (ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[9])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_6) >> 8u));
    aot_gpr_6 = (aot_gpr_6 & 255u);
    aot_mem.aot_direct_store8(ctx.gpr[21] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(aot_gpr_6));
    aot_gpr_6 = (ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[11])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_6) >> 8u));
    aot_gpr_6 = (aot_gpr_6 & 255u);
    aot_mem.aot_direct_store8(ctx.gpr[21] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(aot_gpr_6));
    aot_gpr_5 = (0u | 2u);
    aot_gpr_6 = (ctx.lo);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_6) >> 8u));
    aot_gpr_6 = (aot_gpr_6 & 255u);
    aot_mem.aot_direct_store8(ctx.gpr[21] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(aot_gpr_6));
    aot_gpr_6 = (0u | 0u);
    aot_gpr_31 = (0x08982CE4u);
    ctx.gpr[7] = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0186_entry, 186u, 477u, 0x08AEDF88u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08982CE4u) goto L_08982CE4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08982CE4:
    aot_gpr_4 = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[19] = (aot_gpr_4 << 16u);
    ctx.gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[19]) >> 16u));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[19]) < 5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08982B8C;
      }
      goto L_08982CFC;
    }
L_08982CFC:
    aot_gpr_4 = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (aot_gpr_4 << 16u);
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 16u));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[16]) < 56 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08982B5C;
      }
      goto L_08982D14;
    }
L_08982D14:
    aot_gpr_4 = (0u | 10u);
    aot_gpr_31 = (0x08982D20u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08861668, 23u, 203u, 0x08861668u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08982D20u) goto L_08982D20;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08982D20:
    aot_gpr_4 = (0u | 4u);
    aot_gpr_31 = (0x08982D2Cu);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08861668, 23u, 203u, 0x08861668u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08982D2Cu) goto L_08982D2C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08982D2C:
    aot_gpr_4 = (0u | 6u);
    aot_gpr_31 = (0x08982D38u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08861668, 23u, 203u, 0x08861668u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08982D38u) goto L_08982D38;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08982D38:
    { std::uint32_t aot_run_words[16]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(84), aot_run_words);
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
L_08982D80:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-224));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7888)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(160), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[26] = std::bit_cast<float>(0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(192), ctx.gpr[21]);
    ctx.gpr[21] = (2247u << 16u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= ctx.fpr[26])) ? 0x00800000u : 0u);
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(ctx.fpr[20]), std::bit_cast<std::uint32_t>(ctx.fpr[22]), std::bit_cast<std::uint32_t>(ctx.fpr[24])};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(148), aot_run_words); }
    { const std::uint32_t aot_run_words[7]{std::bit_cast<std::uint32_t>(ctx.fpr[28]), std::bit_cast<std::uint32_t>(ctx.fpr[30]), ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(164), aot_run_words); }
    { const std::uint32_t aot_run_words[4]{ctx.gpr[22], ctx.gpr[23], ctx.gpr[30], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(196), aot_run_words); }
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(18640));
      if (branch_taken) {
          goto L_08982E20;
      }
      goto L_08982DDC;
    }
L_08982DDC:
    aot_gpr_5 = (0u | 0u);
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-65));
    aot_gpr_6 = (aot_gpr_5 << 7u);
    goto L_08982DE8;
L_08982DE8:
    ctx.gpr[7] = (aot_gpr_5 << 4u);
    aot_gpr_6 = (aot_gpr_6 - ctx.gpr[7]);
    aot_gpr_6 = (aot_gpr_6 + ctx.gpr[21]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_6 + static_cast<std::uint32_t>(56))))));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[7] & aot_gpr_4);
    aot_gpr_5 = (aot_gpr_5 << 16u);
    aot_mem.aot_direct_store8(aot_gpr_6 + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 16u));
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_5) < 56 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 != 0u;
    aot_gpr_6 = (aot_gpr_5 << 7u);
      if (branch_taken) {
          goto L_08982DE8;
      }
      goto L_08982E18;
    }
L_08982E18:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08983268;
      }
      goto L_08982E20;
    }
L_08982E20:
    aot_gpr_4 = (0u | 11u);
    aot_gpr_31 = (0x08982E2Cu);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08861668, 23u, 203u, 0x08861668u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08982E2Cu) goto L_08982E2C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08982E2C:
    aot_gpr_4 = (0u | 6u);
    aot_gpr_31 = (0x08982E38u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08861668, 23u, 203u, 0x08861668u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08982E38u) goto L_08982E38;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08982E38:
    aot_gpr_4 = (0u | 4u);
    aot_gpr_31 = (0x08982E44u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08861668, 23u, 203u, 0x08861668u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08982E44u) goto L_08982E44;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08982E44:
    aot_gpr_4 = (0u | 10u);
    aot_gpr_31 = (0x08982E50u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08861668, 23u, 203u, 0x08861668u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08982E50u) goto L_08982E50;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08982E50:
    aot_gpr_4 = (0u | 8u);
    aot_gpr_31 = (0x08982E5Cu);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08861668, 23u, 203u, 0x08861668u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08982E5Cu) goto L_08982E5C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08982E5C:
    aot_gpr_4 = (0u | 9u);
    aot_gpr_31 = (0x08982E68u);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08861668, 23u, 203u, 0x08861668u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08982E68u) goto L_08982E68;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08982E68:
    aot_gpr_4 = (2234u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4264));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(12)));
    aot_gpr_4 = (0u | 1u);
    aot_gpr_31 = (0x08982E80u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08861668, 23u, 203u, 0x08861668u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08982E80u) goto L_08982E80;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08982E80:
    aot_gpr_4 = (2236u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(32304));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(48));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(124), aot_gpr_4);
    aot_gpr_4 = (50298u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (16800u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_4 = (16988u << 16u);
    ctx.fpr[30] = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[20] = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    aot_gpr_4 = (16192u << 16u);
    ctx.fpr[28] = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[19] = (aot_gpr_29 + static_cast<std::uint32_t>(80));
    aot_gpr_4 = (16256u << 16u);
    ctx.gpr[18] = (aot_gpr_29 + static_cast<std::uint32_t>(96));
    ctx.fpr[22] = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[30] = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    ctx.gpr[23] = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    ctx.gpr[22] = (aot_gpr_29 + static_cast<std::uint32_t>(36));
    goto L_08982ED4;
L_08982ED4:
    aot_gpr_4 = (ctx.gpr[17] << 7u);
    aot_gpr_5 = (ctx.gpr[17] << 4u);
    ctx.gpr[16] = (aot_gpr_4 - aot_gpr_5);
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[21]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08983208;
      }
      goto L_08982EF0;
    }
L_08982EF0:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) > 0;
      if (branch_taken) {
          goto L_08982F08;
      }
      goto L_08982EFC;
    }
L_08982EFC:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(51)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) <= 0;
      if (branch_taken) {
          goto L_08983208;
      }
      goto L_08982F08;
    }
L_08982F08:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(55)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08983208;
      }
      goto L_08982F14;
    }
L_08982F14:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(56))))));
    aot_gpr_4 = (aot_gpr_4 & 64u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08982F84;
      }
      goto L_08982F24;
    }
L_08982F24:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7764)));
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[17]);
    aot_gpr_4 = (aot_gpr_4 & 15u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08982FD8;
      }
      goto L_08982F38;
    }
L_08982F38:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), 0u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    aot_gpr_6 = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 1u);
    aot_gpr_31 = (0x08982F68u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0035_entry, 35u, 287u, 0x08891DD4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08982F68u) goto L_08982F68;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08982F68:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08982FD8;
      }
      goto L_08982F70;
    }
L_08982F70:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(56)));
    aot_fpr_12 = aot_fpr_12 - aot_fpr_13;
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_08982FD8;
      }
      goto L_08982F84;
    }
L_08982F84:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), 0u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    aot_gpr_6 = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 1u);
    aot_gpr_31 = (0x08982FB4u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0035_entry, 35u, 287u, 0x08891DD4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08982FB4u) goto L_08982FB4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08982FB4:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08982FD8;
      }
      goto L_08982FBC;
    }
L_08982FBC:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(56)));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(56))))));
    aot_fpr_12 = aot_fpr_12 - aot_fpr_13;
    aot_gpr_4 = (aot_gpr_4 | 64u);
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_08982FD8;
L_08982FD8:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(56))))));
    aot_gpr_4 = (aot_gpr_4 & 64u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08983208;
      }
      goto L_08982FE8;
    }
L_08982FE8:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[20] < ctx.fpr[24])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08983208;
      }
      goto L_08982FFC;
    }
L_08982FFC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(124)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_fpr_12 = aot_fpr_12 - ctx.fpr[20];
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 < aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08983208;
      }
      goto L_0898301C;
    }
L_0898301C:
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
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
    aot_gpr_4 = (16384u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(104)));
    { const float fs = ctx.fpr[20]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = aot_fpr_13 - aot_fpr_12;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (ctx.gpr[30] | 0u);
    aot_gpr_6 = (ctx.gpr[23] | 0u);
    ctx.gpr[7] = (ctx.gpr[22] | 0u);
    aot_gpr_31 = (0x08983054u);
    ctx.gpr[8] = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0169_entry, 169u, 32u, 0x08AA82D4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08983054u) goto L_08983054;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08983054:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08983208;
      }
      goto L_0898305C;
    }
L_0898305C:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[30] < aot_fpr_12)) ? 0x00800000u : 0u);
    if (((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
        goto L_08983074;
    }
    goto L_08983074;
L_08983074:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(24)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 < aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08983208;
      }
      goto L_08983088;
    }
L_08983088:
    aot_gpr_4 = (16128u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(24)));
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_14 < aot_fpr_12)) ? 0x00800000u : 0u);
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(24)));
        goto L_089830B0;
    }
    goto L_089830A8;
L_089830A8:
    { const bool branch_taken = 0u == 0u;
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
      if (branch_taken) {
          goto L_089830DC;
      }
      goto L_089830B0;
    }
L_089830B0:
    aot_fpr_13 = aot_fpr_13 - aot_fpr_12;
    aot_fpr_12 = aot_fpr_13 / aot_fpr_12;
    aot_fpr_12 = ctx.fpr[22] - aot_fpr_12;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= ctx.fpr[22])) ? 0x00800000u : 0u);
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
        goto L_089830CC;
    }
    goto L_089830CC;
L_089830CC:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < ctx.fpr[26])) ? 0x00800000u : 0u);
    if (((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
        goto L_089830DC;
    }
    goto L_089830DC;
L_089830DC:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(144), ctx.gpr[23]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(140), ctx.gpr[22]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_fpr_14 = ctx.fpr[24] - ctx.fpr[20];
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7888)));
    aot_gpr_4 = (17254u << 16u);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_15 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    { const float fs = aot_fpr_12; const float ft = aot_fpr_15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (17279u << 16u);
    ctx.fpr[16] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[16])));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = aot_fpr_12 / ctx.fpr[24];
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_gpr_6 = (16384u << 16u);
    aot_fpr_15 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(32)));
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    ctx.gpr[7] = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(49)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(36)));
    ctx.gpr[8] = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(50)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8896)));
    aot_fpr_13 = ctx.fpr[16] / aot_fpr_13;
    ctx.fpr[18] = std::bit_cast<float>(aot_gpr_6);
    { const float fs = aot_fpr_15; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    { const float fs = aot_fpr_15; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_15 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_15 = fs * ft; }
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[28] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[28] = fs * ft; }
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_6 = (aot_gpr_6 << 16u);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_6) >> 16u));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr_5)) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr_6)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    { const float fs = aot_fpr_15; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    aot_gpr_5 = (ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr_6)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 8u));
    ctx.gpr[16] = (aot_gpr_5 & 255u);
    aot_gpr_5 = (ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr_6)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 8u));
    ctx.gpr[22] = (aot_gpr_5 & 255u);
    aot_gpr_5 = (ctx.lo);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 8u));
    aot_gpr_31 = (0x089831BCu);
    ctx.gpr[23] = (aot_gpr_5 & 255u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0035_entry, 35u, 122u, 0x08890830u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089831BCu) goto L_089831BC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089831BC:
    aot_gpr_4 = (18303u << 16u);
    ctx.fpr[17] = ctx.fpr[22] / ctx.fpr[0];
    ctx.gpr[9] = (aot_gpr_4 | 64000u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (ctx.gpr[22] | 0u);
    aot_gpr_6 = (ctx.gpr[23] | 0u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[8] = (0u | 255u);
    aot_fpr_14 = std::bit_cast<float>(ctx.gpr[9]);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_fpr_15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_gpr_31 = (0x089831F4u);
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0169_entry, 169u, 141u, 0x08AA9B20u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089831F4u) goto L_089831F4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089831F4:
    { std::uint32_t aot_run_words[5]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(128), aot_run_words);
      ctx.fpr[30] = std::bit_cast<float>(aot_run_words[0]);
      ctx.fpr[28] = std::bit_cast<float>(aot_run_words[1]);
      ctx.fpr[24] = std::bit_cast<float>(aot_run_words[2]);
      ctx.gpr[22] = aot_run_words[3];
      ctx.gpr[23] = aot_run_words[4];
    }
    goto L_08983208;
L_08983208:
    aot_gpr_4 = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (aot_gpr_4 << 16u);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 16u));
    aot_gpr_5 = (50298u << 16u);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[17]) < 56 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
      if (branch_taken) {
          goto L_08982ED4;
      }
      goto L_08983224;
    }
L_08983224:
    aot_gpr_31 = (0x0898322Cu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0169_entry, 169u, 59u, 0x08AA8BDCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898322Cu) goto L_0898322C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898322C:
    aot_gpr_4 = (0u | 8u);
    aot_gpr_31 = (0x08983238u);
    aot_gpr_5 = (0u | 5u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08861668, 23u, 203u, 0x08861668u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08983238u) goto L_08983238;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08983238:
    aot_gpr_4 = (0u | 9u);
    aot_gpr_31 = (0x08983244u);
    aot_gpr_5 = (0u | 6u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08861668, 23u, 203u, 0x08861668u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08983244u) goto L_08983244;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08983244:
    aot_gpr_4 = (0u | 10u);
    aot_gpr_31 = (0x08983250u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08861668, 23u, 203u, 0x08861668u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08983250u) goto L_08983250;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08983250:
    aot_gpr_4 = (0u | 6u);
    aot_gpr_31 = (0x0898325Cu);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08861668, 23u, 203u, 0x08861668u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898325Cu) goto L_0898325C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898325C:
    aot_gpr_4 = (0u | 4u);
    aot_gpr_31 = (0x08983268u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08861668, 23u, 203u, 0x08861668u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08983268u) goto L_08983268;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08983268:
    { std::uint32_t aot_run_words[16]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(148), aot_run_words);
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
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(224));
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
L_089832B0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-112));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23440)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(11224)));
    aot_gpr_6 = (aot_gpr_6 << 4u);
    aot_gpr_5 = (48460u << 16u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    aot_gpr_5 = (aot_gpr_5 | 52429u);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 <= aot_fpr_12)) ? 0x00800000u : 0u);
    { const std::uint32_t aot_run_words[8]{std::bit_cast<std::uint32_t>(ctx.fpr[22]), std::bit_cast<std::uint32_t>(ctx.fpr[24]), ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(68), aot_run_words); }
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08983B70;
      }
      goto L_08983304;
    }
L_08983304:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23440)));
    ctx.fpr[20] = std::bit_cast<float>(0u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(11224)));
    aot_gpr_5 = (aot_gpr_5 << 4u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (16000u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (16025u << 16u);
    aot_fpr_13 = aot_fpr_13 - aot_fpr_12;
    aot_gpr_4 = (aot_gpr_4 | 39322u);
    ctx.fpr[22] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (16256u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 < ctx.fpr[20])) ? 0x00800000u : 0u);
    if (((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_13) ^ 0x80000000u);
        goto L_0898334C;
    }
    goto L_0898334C;
L_0898334C:
    aot_fpr_13 = ctx.fpr[22] - aot_fpr_13;
    aot_gpr_4 = (16469u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 20447u);
    aot_fpr_15 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8396)));
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7900)));
    { const float fs = aot_fpr_13; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8348)));
    aot_fpr_15 = ctx.fpr[24] - aot_fpr_15;
    ctx.fpr[16] = ctx.fpr[24] - ctx.fpr[16];
    ctx.fpr[17] = ctx.fpr[24] - ctx.fpr[17];
    { const float fs = aot_fpr_13; const float ft = aot_fpr_15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    { const float fs = aot_fpr_13; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    { const float fs = aot_fpr_13; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 <= ctx.fpr[20])) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08983B70;
      }
      goto L_08983394;
    }
L_08983394:
    { const float fs = aot_fpr_13; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23440)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(11116)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(11104)));
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_14)));
    { const float fs = aot_fpr_14; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_13));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    ctx.gpr[18] = (aot_gpr_5 & 255u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(11120)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(11108)));
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_14)));
    { const float fs = aot_fpr_14; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_13));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    ctx.gpr[19] = (aot_gpr_5 & 255u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(11124)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(11112)));
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_14)));
    { const float fs = aot_fpr_14; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[20] = (aot_gpr_5 & 255u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(11224)));
    aot_gpr_5 = (aot_gpr_5 << 4u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_5 = (16928u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.set_vfpu_scalar_bits_ct<1u>(aot_gpr_5);
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 1u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_5 = (2236u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(32304));
    aot_gpr_31 = (0x0898344Cu);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(48));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08A931B8, 163u, 0x08A931B8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0898344Cu) goto L_0898344C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0898344C:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8348)));
    aot_gpr_4 = (16128u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_13; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_gpr_4 = (16579u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 13107u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_13 = aot_fpr_13 + aot_fpr_14;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23440)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(11224)));
    aot_gpr_5 = (aot_gpr_5 << 4u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
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
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
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
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8452), 0u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8456), 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8456)));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(2));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8452)));
    aot_gpr_6 = (aot_gpr_6 + aot_gpr_6);
    ctx.gpr[16] = (2238u << 16u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(12016));
    aot_gpr_6 = (aot_gpr_6 + ctx.gpr[16]);
    aot_mem.aot_direct_store16(aot_gpr_6 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_5));
    ctx.gpr[7] = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store16(aot_gpr_6 + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[7]));
    aot_mem.aot_direct_store16(aot_gpr_6 + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(aot_gpr_4));
    aot_mem.aot_direct_store16(aot_gpr_6 + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(aot_gpr_5));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(3));
    aot_mem.aot_direct_store16(aot_gpr_6 + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(aot_gpr_5));
    aot_mem.aot_direct_store16(aot_gpr_6 + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(ctx.gpr[7]));
    aot_gpr_4 = (aot_gpr_4 << 3u);
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    ctx.gpr[17] = (2238u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-272));
    ctx.gpr[7] = (aot_gpr_4 + ctx.gpr[17]);
    aot_gpr_4 = (ctx.gpr[18] & 255u);
    aot_gpr_5 = (ctx.gpr[19] & 255u);
    aot_gpr_6 = (ctx.gpr[20] & 255u);
    ctx.gpr[8] = (0u | 255u);
    aot_mem.aot_direct_store8(ctx.gpr[7] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(ctx.gpr[7] + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store8(ctx.gpr[7] + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(aot_gpr_6));
    aot_mem.aot_direct_store8(ctx.gpr[7] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8456)));
    ctx.gpr[7] = (ctx.gpr[7] << 3u);
    ctx.gpr[9] = (ctx.gpr[7] + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[9]);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[17]);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(48)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    ctx.gpr[9] = (16880u << 16u);
    aot_fpr_15 = std::bit_cast<float>(ctx.gpr[9]);
    { const float fs = aot_fpr_14; const float ft = aot_fpr_15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_fpr_13 = aot_fpr_13 + aot_fpr_14;
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(52)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    { const float fs = ctx.fpr[17]; const float ft = aot_fpr_15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[16] = ctx.fpr[16] - ctx.fpr[17];
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(56)));
    ctx.fpr[18] = ctx.fpr[18] + ctx.fpr[22];
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_13), std::bit_cast<std::uint32_t>(ctx.fpr[16]), std::bit_cast<std::uint32_t>(ctx.fpr[18])};
      aot_mem.aot_direct_store32_block(ctx.gpr[7] + static_cast<std::uint32_t>(12), aot_run_words); }
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8456)));
    ctx.gpr[7] = (ctx.gpr[7] << 3u);
    ctx.gpr[9] = (ctx.gpr[7] + ctx.gpr[7]);
    ctx.gpr[9] = (ctx.gpr[7] + ctx.gpr[9]);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(24));
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[7]);
    aot_mem.aot_direct_store8(ctx.gpr[9] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(ctx.gpr[9] + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store8(ctx.gpr[9] + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(aot_gpr_6));
    aot_mem.aot_direct_store8(ctx.gpr[9] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[9] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8456)));
    ctx.gpr[9] = (ctx.gpr[9] << 3u);
    ctx.gpr[10] = (ctx.gpr[9] + ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[10]);
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[7]);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(48)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    { const float fs = aot_fpr_14; const float ft = aot_fpr_15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_fpr_13 = aot_fpr_13 - aot_fpr_14;
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(52)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    { const float fs = ctx.fpr[17]; const float ft = aot_fpr_15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[16] = ctx.fpr[16] + ctx.fpr[17];
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(56)));
    ctx.fpr[18] = ctx.fpr[18] + ctx.fpr[22];
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_13), std::bit_cast<std::uint32_t>(ctx.fpr[16]), std::bit_cast<std::uint32_t>(ctx.fpr[18])};
      aot_mem.aot_direct_store32_block(ctx.gpr[9] + static_cast<std::uint32_t>(12), aot_run_words); }
    ctx.gpr[9] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8456)));
    ctx.gpr[9] = (ctx.gpr[9] << 3u);
    ctx.gpr[10] = (ctx.gpr[9] + ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[10]);
    ctx.gpr[10] = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[10]);
    aot_mem.aot_direct_store8(ctx.gpr[9] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(ctx.gpr[9] + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store8(ctx.gpr[9] + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(aot_gpr_6));
    aot_mem.aot_direct_store8(ctx.gpr[9] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[9] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8456)));
    ctx.gpr[9] = (ctx.gpr[9] << 3u);
    ctx.gpr[11] = (ctx.gpr[9] + ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[11]);
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[10]);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(48)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    ctx.gpr[11] = (17008u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[11]);
    { const float fs = aot_fpr_14; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    aot_fpr_13 = aot_fpr_13 + ctx.fpr[17];
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    { const float fs = ctx.fpr[18]; const float ft = aot_fpr_15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[19] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[19] = fs * ft; }
    aot_fpr_13 = aot_fpr_13 + ctx.fpr[19];
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(52)));
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    ctx.fpr[18] = ctx.fpr[0] + ctx.fpr[18];
    { const float fs = aot_fpr_14; const float ft = aot_fpr_15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_fpr_14 = ctx.fpr[18] - aot_fpr_14;
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(56)));
    ctx.fpr[17] = ctx.fpr[17] + ctx.fpr[22];
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_13), std::bit_cast<std::uint32_t>(aot_fpr_14), std::bit_cast<std::uint32_t>(ctx.fpr[17])};
      aot_mem.aot_direct_store32_block(ctx.gpr[9] + static_cast<std::uint32_t>(12), aot_run_words); }
    ctx.gpr[9] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8456)));
    ctx.gpr[9] = (ctx.gpr[9] << 3u);
    ctx.gpr[11] = (ctx.gpr[9] + ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[11]);
    ctx.gpr[11] = (ctx.gpr[17] + static_cast<std::uint32_t>(72));
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[11]);
    aot_mem.aot_direct_store8(ctx.gpr[9] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(ctx.gpr[9] + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store8(ctx.gpr[9] + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(aot_gpr_6));
    aot_mem.aot_direct_store8(ctx.gpr[9] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[8] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8456)));
    ctx.gpr[8] = (ctx.gpr[8] << 3u);
    ctx.gpr[9] = (ctx.gpr[8] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[9]);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[11]);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(48)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    { const float fs = aot_fpr_14; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    aot_fpr_13 = aot_fpr_13 + ctx.fpr[17];
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    { const float fs = ctx.fpr[18]; const float ft = aot_fpr_15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[19] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[19] = fs * ft; }
    aot_fpr_13 = aot_fpr_13 - ctx.fpr[19];
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(52)));
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[16] = ctx.fpr[0] + ctx.fpr[16];
    { const float fs = aot_fpr_14; const float ft = aot_fpr_15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_fpr_14 = ctx.fpr[16] + aot_fpr_14;
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(56)));
    ctx.fpr[17] = ctx.fpr[17] + ctx.fpr[22];
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_13), std::bit_cast<std::uint32_t>(aot_fpr_14), std::bit_cast<std::uint32_t>(ctx.fpr[17])};
      aot_mem.aot_direct_store32_block(ctx.gpr[8] + static_cast<std::uint32_t>(12), aot_run_words); }
    ctx.gpr[8] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8456)));
    ctx.gpr[8] = (ctx.gpr[8] << 3u);
    ctx.gpr[9] = (ctx.gpr[8] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[9]);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[17]);
    aot_mem.aot_direct_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[8] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8456)));
    ctx.gpr[8] = (ctx.gpr[8] << 3u);
    ctx.gpr[9] = (ctx.gpr[8] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[9]);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[17]);
    aot_mem.aot_direct_store32(ctx.gpr[8] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[8] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8456)));
    ctx.gpr[8] = (ctx.gpr[8] << 3u);
    ctx.gpr[9] = (ctx.gpr[8] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[9]);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[7]);
    aot_mem.aot_direct_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[8] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8456)));
    ctx.gpr[8] = (ctx.gpr[8] << 3u);
    ctx.gpr[9] = (ctx.gpr[8] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[9]);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[7]);
    aot_mem.aot_direct_store32(ctx.gpr[8] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[8] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8456)));
    ctx.gpr[8] = (ctx.gpr[8] << 3u);
    ctx.gpr[9] = (ctx.gpr[8] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[9]);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[10]);
    aot_mem.aot_direct_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[8] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8456)));
    ctx.gpr[8] = (ctx.gpr[8] << 3u);
    ctx.gpr[9] = (ctx.gpr[8] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[9]);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[10]);
    aot_mem.aot_direct_store32(ctx.gpr[8] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[8] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8456)));
    ctx.gpr[8] = (ctx.gpr[8] << 3u);
    ctx.gpr[9] = (ctx.gpr[8] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[9]);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[11]);
    aot_mem.aot_direct_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[8] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8456)));
    ctx.gpr[8] = (ctx.gpr[8] << 3u);
    ctx.gpr[9] = (ctx.gpr[8] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[9]);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[11]);
    aot_mem.aot_direct_store32(ctx.gpr[8] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[8] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8452)));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(6));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8452), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8456)));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8456), ctx.gpr[8]);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[10] = (0u | 20u);
    ctx.gpr[9] = (20352u << 16u);
    aot_fpr_13 = std::bit_cast<float>(ctx.gpr[9]);
    ctx.gpr[9] = (15177u << 16u);
    ctx.gpr[9] = (ctx.gpr[9] | 4059u);
    aot_fpr_14 = std::bit_cast<float>(ctx.gpr[9]);
    ctx.gpr[9] = (16672u << 16u);
    aot_fpr_15 = std::bit_cast<float>(ctx.gpr[9]);
    ctx.gpr[9] = (15692u << 16u);
    ctx.gpr[9] = (ctx.gpr[9] | 52429u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_gpr_2 = (0u | 0u);
    goto L_08983808;
L_08983808:
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[9]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[10]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[3] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8452)));
    ctx.gpr[12] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8456)));
    ctx.gpr[3] = (ctx.gpr[3] + ctx.gpr[3]);
    ctx.gpr[3] = (ctx.gpr[3] + ctx.gpr[16]);
    aot_mem.aot_direct_store16(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[12]));
    ctx.gpr[13] = (ctx.gpr[12] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store16(ctx.gpr[3] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[13]));
    ctx.gpr[14] = (ctx.gpr[12] + static_cast<std::uint32_t>(-2));
    aot_mem.aot_direct_store16(ctx.gpr[3] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[14]));
    aot_mem.aot_direct_store16(ctx.gpr[3] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(ctx.gpr[12]));
    ctx.gpr[12] = (ctx.gpr[12] + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store16(ctx.gpr[3] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[12]));
    aot_mem.aot_direct_store16(ctx.gpr[3] + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(ctx.gpr[13]));
    ctx.gpr[3] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.gpr[3] = (ctx.gpr[3] + aot_gpr_2);
    ctx.gpr[3] = (ctx.gpr[3] & 2047u);
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[19] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[19])));
    ctx.gpr[12] = (ctx.lo);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[11]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[10]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[12] = (ctx.gpr[12] + static_cast<std::uint32_t>(60));
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[12]);
    ctx.fpr[17] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[17])));
    ctx.gpr[12] = (ctx.lo);
    ctx.gpr[12] = (ctx.gpr[12] + static_cast<std::uint32_t>(30));
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[12]);
    ctx.fpr[18] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[18])));
    if (static_cast<std::int32_t>(ctx.gpr[3]) < 0) {
    ctx.fpr[19] = ctx.fpr[19] + aot_fpr_13;
        goto L_08983888;
    }
    goto L_08983888;
L_08983888:
    { const float fs = ctx.fpr[19]; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[19] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[19] = fs * ft; }
    ctx.gpr[3] = (std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[3]);
    { const float vfpu_constant = std::bit_cast<float>(0x3F22F983u);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    ctx.execute_vfpu_vec3_ct<64u, 0u, 32u, 1u, 2u>();
    ctx.execute_vfpu_unary_ct<1u, 64u, 1u, 18u>();
    ctx.gpr[3] = (ctx.vfpu_scalar_bits_ct<1u>());
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    { const float fs = ctx.fpr[0]; const float ft = aot_fpr_15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[19] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[19] = fs * ft; }
    ctx.fpr[18] = ctx.fpr[18] + ctx.fpr[19];
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[22] <= ctx.fpr[20])) ? 0x00800000u : 0u);
    if (((ctx.fcr31 & 0x00800000u) != 0u)) {
    ctx.gpr[3] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8456)));
        goto L_089838C8;
    }
    goto L_089838C0;
L_089838C0:
    ctx.fpr[22] = ctx.fpr[22] - ctx.fpr[16];
    ctx.gpr[3] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8456)));
    goto L_089838C8;
L_089838C8:
    ctx.gpr[12] = (0u | 255u);
    ctx.gpr[3] = (ctx.gpr[3] << 3u);
    ctx.gpr[13] = (ctx.gpr[3] + ctx.gpr[3]);
    ctx.gpr[3] = (ctx.gpr[3] + ctx.gpr[13]);
    ctx.gpr[3] = (ctx.gpr[3] + ctx.gpr[17]);
    aot_mem.aot_direct_store8(ctx.gpr[3] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(ctx.gpr[3] + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store8(ctx.gpr[3] + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(aot_gpr_6));
    aot_mem.aot_direct_store8(ctx.gpr[3] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[12]));
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[2] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    ctx.fpr[1] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(48)));
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[3] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[3] = fs * ft; }
    ctx.gpr[3] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8456)));
    ctx.fpr[4] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(52)));
    ctx.gpr[3] = (ctx.gpr[3] << 3u);
    ctx.fpr[2] = ctx.fpr[1] + ctx.fpr[2];
    ctx.fpr[5] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(56)));
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[0] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.gpr[13] = (ctx.gpr[3] + ctx.gpr[3]);
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[19] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[19] = fs * ft; }
    ctx.gpr[3] = (ctx.gpr[3] + ctx.gpr[13]);
    ctx.fpr[3] = ctx.fpr[4] + ctx.fpr[3];
    ctx.gpr[3] = (ctx.gpr[3] + ctx.gpr[17]);
    ctx.fpr[1] = ctx.fpr[5] + ctx.fpr[22];
    ctx.fpr[0] = ctx.fpr[2] + ctx.fpr[0];
    ctx.fpr[19] = ctx.fpr[3] - ctx.fpr[19];
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(ctx.fpr[0]), std::bit_cast<std::uint32_t>(ctx.fpr[19]), std::bit_cast<std::uint32_t>(ctx.fpr[1])};
      aot_mem.aot_direct_store32_block(ctx.gpr[3] + static_cast<std::uint32_t>(12), aot_run_words); }
    ctx.gpr[3] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8456)));
    ctx.gpr[3] = (ctx.gpr[3] << 3u);
    ctx.gpr[13] = (ctx.gpr[3] + ctx.gpr[3]);
    ctx.gpr[3] = (ctx.gpr[3] + ctx.gpr[13]);
    ctx.gpr[3] = (ctx.gpr[3] + ctx.gpr[7]);
    aot_mem.aot_direct_store8(ctx.gpr[3] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(ctx.gpr[3] + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store8(ctx.gpr[3] + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(aot_gpr_6));
    aot_mem.aot_direct_store8(ctx.gpr[3] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[12]));
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[2] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    ctx.fpr[1] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(48)));
    ctx.gpr[3] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8456)));
    ctx.fpr[3] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(52)));
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.gpr[3] = (ctx.gpr[3] << 3u);
    ctx.fpr[2] = ctx.fpr[1] + ctx.fpr[2];
    ctx.fpr[4] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(56)));
    ctx.gpr[12] = (ctx.gpr[3] + ctx.gpr[3]);
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[0] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.gpr[3] = (ctx.gpr[3] + ctx.gpr[12]);
    ctx.fpr[17] = ctx.fpr[3] + ctx.fpr[17];
    ctx.gpr[3] = (ctx.gpr[3] + ctx.gpr[7]);
    ctx.fpr[1] = ctx.fpr[4] + ctx.fpr[22];
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    ctx.fpr[19] = ctx.fpr[2] - ctx.fpr[0];
    ctx.fpr[17] = ctx.fpr[17] + ctx.fpr[18];
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(ctx.fpr[19]), std::bit_cast<std::uint32_t>(ctx.fpr[17]), std::bit_cast<std::uint32_t>(ctx.fpr[1])};
      aot_mem.aot_direct_store32_block(ctx.gpr[3] + static_cast<std::uint32_t>(12), aot_run_words); }
    ctx.gpr[3] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8456)));
    ctx.gpr[3] = (ctx.gpr[3] << 3u);
    ctx.gpr[12] = (ctx.gpr[3] + ctx.gpr[3]);
    ctx.gpr[3] = (ctx.gpr[3] + ctx.gpr[12]);
    ctx.gpr[3] = (ctx.gpr[3] + ctx.gpr[17]);
    aot_mem.aot_direct_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[3] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8456)));
    ctx.gpr[3] = (ctx.gpr[3] << 3u);
    ctx.gpr[12] = (ctx.gpr[3] + ctx.gpr[3]);
    ctx.gpr[3] = (ctx.gpr[3] + ctx.gpr[12]);
    ctx.gpr[3] = (ctx.gpr[3] + ctx.gpr[17]);
    aot_mem.aot_direct_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[3] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8456)));
    ctx.gpr[3] = (ctx.gpr[3] << 3u);
    ctx.gpr[12] = (ctx.gpr[3] + ctx.gpr[3]);
    ctx.gpr[3] = (ctx.gpr[3] + ctx.gpr[12]);
    ctx.gpr[3] = (ctx.gpr[3] + ctx.gpr[7]);
    aot_mem.aot_direct_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[3] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8456)));
    ctx.gpr[3] = (ctx.gpr[3] << 3u);
    ctx.gpr[12] = (ctx.gpr[3] + ctx.gpr[3]);
    ctx.gpr[3] = (ctx.gpr[3] + ctx.gpr[12]);
    ctx.gpr[3] = (ctx.gpr[3] + ctx.gpr[7]);
    aot_mem.aot_direct_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[3] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8452)));
    ctx.gpr[12] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8456)));
    ctx.gpr[3] = (ctx.gpr[3] + static_cast<std::uint32_t>(6));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8452), ctx.gpr[3]);
    ctx.gpr[3] = (ctx.gpr[12] + static_cast<std::uint32_t>(2));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8456), ctx.gpr[3]);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1440));
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(970));
    ctx.gpr[3] = (static_cast<std::int32_t>(ctx.gpr[8]) < 20 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    aot_gpr_2 = (aot_gpr_2 + static_cast<std::uint32_t>(900));
      if (branch_taken) {
          goto L_08983808;
      }
      goto L_08983A50;
    }
L_08983A50:
    aot_gpr_4 = (0u | 6u);
    aot_gpr_31 = (0x08983A5Cu);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08861668, 23u, 203u, 0x08861668u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08983A5Cu) goto L_08983A5C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08983A5C:
    aot_gpr_4 = (0u | 4u);
    aot_gpr_31 = (0x08983A68u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08861668, 23u, 203u, 0x08861668u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08983A68u) goto L_08983A68;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08983A68:
    aot_gpr_4 = (0u | 11u);
    aot_gpr_31 = (0x08983A74u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08861668, 23u, 203u, 0x08861668u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08983A74u) goto L_08983A74;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08983A74:
    aot_gpr_4 = (0u | 13u);
    aot_gpr_31 = (0x08983A80u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08861668, 23u, 203u, 0x08861668u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08983A80u) goto L_08983A80;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08983A80:
    aot_gpr_4 = (0u | 8u);
    aot_gpr_31 = (0x08983A8Cu);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08861668, 23u, 203u, 0x08861668u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08983A8Cu) goto L_08983A8C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08983A8C:
    aot_gpr_4 = (0u | 9u);
    aot_gpr_31 = (0x08983A98u);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08861668, 23u, 203u, 0x08861668u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08983A98u) goto L_08983A98;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08983A98:
    aot_gpr_4 = (0u | 10u);
    aot_gpr_31 = (0x08983AA4u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08861668, 23u, 203u, 0x08861668u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08983AA4u) goto L_08983AA4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08983AA4:
    aot_gpr_4 = (2234u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4264));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
    aot_gpr_4 = (0u | 1u);
    aot_gpr_31 = (0x08983ABCu);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08861668, 23u, 203u, 0x08861668u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08983ABCu) goto L_08983ABC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08983ABC:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8456)));
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_6 = (0u | 0u);
    aot_gpr_31 = (0x08983AD0u);
    ctx.gpr[7] = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0186_entry, 186u, 515u, 0x08AEE610u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08983AD0u) goto L_08983AD0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08983AD0:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08983AF0;
      }
      goto L_08983AD8;
    }
L_08983AD8:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8452)));
    aot_gpr_4 = (0u | 3u);
    aot_gpr_31 = (0x08983AE8u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0186_entry, 186u, 536u, 0x08AEE8E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08983AE8u) goto L_08983AE8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08983AE8:
    aot_gpr_31 = (0x08983AF0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0186_entry, 186u, 535u, 0x08AEE8D0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08983AF0u) goto L_08983AF0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08983AF0:
    aot_gpr_4 = (0u | 6u);
    aot_gpr_31 = (0x08983AFCu);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08861668, 23u, 203u, 0x08861668u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08983AFCu) goto L_08983AFC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08983AFC:
    aot_gpr_4 = (0u | 4u);
    aot_gpr_31 = (0x08983B08u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08861668, 23u, 203u, 0x08861668u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08983B08u) goto L_08983B08;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08983B08:
    aot_gpr_4 = (0u | 8u);
    aot_gpr_31 = (0x08983B14u);
    aot_gpr_5 = (0u | 5u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08861668, 23u, 203u, 0x08861668u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08983B14u) goto L_08983B14;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08983B14:
    aot_gpr_4 = (0u | 9u);
    aot_gpr_31 = (0x08983B20u);
    aot_gpr_5 = (0u | 6u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08861668, 23u, 203u, 0x08861668u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08983B20u) goto L_08983B20;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08983B20:
    aot_gpr_4 = (0u | 11u);
    aot_gpr_31 = (0x08983B2Cu);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08861668, 23u, 203u, 0x08861668u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08983B2Cu) goto L_08983B2C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08983B2C:
    aot_gpr_4 = (0u | 10u);
    aot_gpr_31 = (0x08983B38u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08861668, 23u, 203u, 0x08861668u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08983B38u) goto L_08983B38;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08983B38:
    aot_gpr_4 = (2236u << 16u);
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(29552));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8452), 0u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(16)));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8456), 0u);
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(29552)));
    aot_gpr_5 = (aot_gpr_5 >> 8u);
    ctx.gpr[7] = (18176u << 16u);
    aot_gpr_5 = (aot_gpr_5 | ctx.gpr[7]);
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(29552)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(29552), aot_gpr_5);
    goto L_08983B70;
L_08983B70:
    { std::uint32_t aot_run_words[9]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(64), aot_run_words);
      ctx.fpr[20] = std::bit_cast<float>(aot_run_words[0]);
      ctx.fpr[22] = std::bit_cast<float>(aot_run_words[1]);
      ctx.fpr[24] = std::bit_cast<float>(aot_run_words[2]);
      ctx.gpr[16] = aot_run_words[3];
      ctx.gpr[17] = aot_run_words[4];
      ctx.gpr[18] = aot_run_words[5];
      ctx.gpr[19] = aot_run_words[6];
      ctx.gpr[20] = aot_run_words[7];
      aot_gpr_31 = aot_run_words[8];
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
L_08983B9C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    aot_gpr_2 = (2236u << 16u);
    ctx.gpr[14] = (aot_gpr_2 + static_cast<std::uint32_t>(32304));
    ctx.gpr[14] = (ctx.gpr[14] + static_cast<std::uint32_t>(48));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[14] + static_cast<std::uint32_t>(0)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[14] + static_cast<std::uint32_t>(4)));
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[9] + static_cast<std::uint32_t>(4)));
    ctx.fpr[16] = ctx.fpr[16] - ctx.fpr[17];
    ctx.fpr[18] = ctx.fpr[18] - ctx.fpr[19];
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.gpr[3] = (ctx.gpr[7] & 255u);
    aot_gpr_2 = (ctx.gpr[8] & 255u);
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(52)));
    ctx.fpr[16] = ctx.fpr[16] + ctx.fpr[17];
    { const float fs = aot_fpr_13; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    ctx.gpr[12] = (aot_gpr_6 & 255u);
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(48)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(56)));
    ctx.gpr[13] = (aot_gpr_5 & 255u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(60)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[16] <= ctx.fpr[18])) ? 0x00800000u : 0u);
    ctx.gpr[11] = (ctx.gpr[11] & 255u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    aot_gpr_6 = (aot_gpr_6 & 255u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
      if (branch_taken) {
          goto L_08983C20;
      }
      goto L_08983C10;
    }
L_08983C10:
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_08983C28;
      }
      goto L_08983C18;
    }
L_08983C18:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08983CB0;
      }
      goto L_08983C20;
    }
L_08983C20:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08983EB8;
      }
      goto L_08983C28;
    }
L_08983C28:
    { const std::uint32_t vfpu_address = ctx.gpr[14] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[9] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = aot_gpr_29 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const std::uint32_t vfpu_address = aot_gpr_29 + static_cast<std::uint32_t>(0);
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
    ctx.gpr[14] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[14]);
    ctx.gpr[14] = (16908u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[14]);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[17] < ctx.fpr[16])) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08983C84;
      }
      goto L_08983C64;
    }
L_08983C64:
    ctx.gpr[14] = (16968u << 16u);
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[14]);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[17] < ctx.fpr[18])) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    ctx.gpr[14] = (16752u << 16u);
      if (branch_taken) {
          goto L_08983C8C;
      }
      goto L_08983C7C;
    }
L_08983C7C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08983CB0;
      }
      goto L_08983C84;
    }
L_08983C84:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08983EB8;
      }
      goto L_08983C8C;
    }
L_08983C8C:
    ctx.fpr[16] = ctx.fpr[17] - ctx.fpr[16];
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[14]);
    ctx.fpr[16] = ctx.fpr[16] / ctx.fpr[18];
    ctx.fpr[19] = std::bit_cast<float>(aot_gpr_2);
    ctx.fpr[19] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[19])));
    { const float fs = ctx.fpr[19]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[16]));
    aot_gpr_2 = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_gpr_2 = (aot_gpr_2 & 255u);
    goto L_08983CB0;
L_08983CB0:
    ctx.gpr[14] = (2247u << 16u);
    ctx.gpr[15] = (0u | 0u);
    ctx.gpr[25] = (0u | 1u);
    ctx.gpr[24] = (0u | 56u);
    ctx.gpr[14] = (ctx.gpr[14] + static_cast<std::uint32_t>(18640));
    goto L_08983CC4;
L_08983CC4:
    { const bool branch_taken = ctx.gpr[25] == 0u;
    ctx.gpr[25] = (ctx.gpr[15] << 7u);
      if (branch_taken) {
          goto L_08983CF4;
      }
      goto L_08983CCC;
    }
L_08983CCC:
    ctx.gpr[16] = (ctx.gpr[15] << 4u);
    ctx.gpr[25] = (ctx.gpr[25] - ctx.gpr[16]);
    ctx.gpr[25] = (ctx.gpr[25] + ctx.gpr[14]);
    ctx.gpr[25] = (aot_mem.aot_direct_load32(ctx.gpr[25] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[25] == aot_gpr_4;
      if (branch_taken) {
          goto L_08983CF4;
      }
      goto L_08983CE4;
    }
L_08983CE4:
    ctx.gpr[15] = (ctx.gpr[15] + static_cast<std::uint32_t>(1));
    ctx.gpr[15] = (ctx.gpr[15] & 65535u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[25] = (static_cast<std::int32_t>(ctx.gpr[15]) < 56 ? 1u : 0u);
      if (branch_taken) {
          goto L_08983CC4;
      }
      goto L_08983CF4;
    }
L_08983CF4:
    { const bool branch_taken = ctx.gpr[15] != ctx.gpr[24];
      if (branch_taken) {
          goto L_08983DD4;
      }
      goto L_08983CFC;
    }
L_08983CFC:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08983D10;
      }
      goto L_08983D04;
    }
L_08983D04:
    ctx.gpr[15] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[25] = (0u | 1u);
      if (branch_taken) {
          goto L_08983D18;
      }
      goto L_08983D10;
    }
L_08983D10:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08983EB8;
      }
      goto L_08983D18;
    }
L_08983D18:
    { const bool branch_taken = ctx.gpr[25] == 0u;
    ctx.gpr[25] = (ctx.gpr[15] << 7u);
      if (branch_taken) {
          goto L_08983D48;
      }
      goto L_08983D20;
    }
L_08983D20:
    ctx.gpr[16] = (ctx.gpr[15] << 4u);
    ctx.gpr[25] = (ctx.gpr[25] - ctx.gpr[16]);
    ctx.gpr[25] = (ctx.gpr[25] + ctx.gpr[14]);
    ctx.gpr[25] = (aot_mem.aot_direct_load32(ctx.gpr[25] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[25] == 0u;
      if (branch_taken) {
          goto L_08983D48;
      }
      goto L_08983D38;
    }
L_08983D38:
    ctx.gpr[15] = (ctx.gpr[15] + static_cast<std::uint32_t>(1));
    ctx.gpr[15] = (ctx.gpr[15] & 65535u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[25] = (static_cast<std::int32_t>(ctx.gpr[15]) < 56 ? 1u : 0u);
      if (branch_taken) {
          goto L_08983D18;
      }
      goto L_08983D48;
    }
L_08983D48:
    { const bool branch_taken = ctx.gpr[15] != ctx.gpr[24];
    ctx.gpr[25] = (ctx.gpr[15] << 7u);
      if (branch_taken) {
          goto L_08983D58;
      }
      goto L_08983D50;
    }
L_08983D50:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08983EB8;
      }
      goto L_08983D58;
    }
L_08983D58:
    ctx.gpr[15] = (ctx.gpr[15] << 4u);
    ctx.gpr[25] = (ctx.gpr[25] - ctx.gpr[15]);
    ctx.gpr[24] = (ctx.gpr[25] + ctx.gpr[14]);
    ctx.gpr[15] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[24] + static_cast<std::uint32_t>(56))))));
    ctx.gpr[15] = (ctx.gpr[15] | 2u);
    aot_mem.aot_direct_store8(ctx.gpr[24] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[15]));
    ctx.gpr[15] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[24] + static_cast<std::uint32_t>(56))))));
    aot_mem.aot_direct_store8(ctx.gpr[24] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(0u));
    ctx.gpr[15] = (ctx.gpr[15] | 4u);
    aot_mem.aot_direct_store8(ctx.gpr[24] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[15]));
    ctx.gpr[15] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[24] + static_cast<std::uint32_t>(56))))));
    ctx.gpr[16] = (0u + static_cast<std::uint32_t>(-65));
    ctx.gpr[15] = (ctx.gpr[15] & ctx.gpr[16]);
    aot_mem.aot_direct_store8(ctx.gpr[24] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[15]));
    ctx.gpr[15] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[24] + static_cast<std::uint32_t>(56))))));
    ctx.gpr[16] = (0u + static_cast<std::uint32_t>(-17));
    aot_mem.aot_direct_store32(ctx.gpr[24] + static_cast<std::uint32_t>(20), 0u);
    ctx.gpr[15] = (ctx.gpr[15] & ctx.gpr[16]);
    aot_mem.aot_direct_store8(ctx.gpr[24] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[15]));
    ctx.gpr[15] = (0u | 0u);
    goto L_08983DA8;
L_08983DA8:
    ctx.gpr[16] = (ctx.gpr[25] + ctx.gpr[15]);
    ctx.gpr[15] = (ctx.gpr[15] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[14]);
    ctx.gpr[15] = (ctx.gpr[15] << 16u);
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(100), static_cast<std::uint8_t>(0u));
    ctx.gpr[15] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[15]) >> 16u));
    ctx.gpr[16] = (static_cast<std::int32_t>(ctx.gpr[15]) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[16] != 0u;
      if (branch_taken) {
          goto L_08983DA8;
      }
      goto L_08983DCC;
    }
L_08983DCC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08983DF4;
      }
      goto L_08983DD4;
    }
L_08983DD4:
    ctx.gpr[24] = (ctx.gpr[15] << 7u);
    ctx.gpr[15] = (ctx.gpr[15] << 4u);
    ctx.gpr[24] = (ctx.gpr[24] - ctx.gpr[15]);
    ctx.gpr[24] = (ctx.gpr[24] + ctx.gpr[14]);
    ctx.gpr[14] = (aot_mem.aot_direct_load8(ctx.gpr[24] + static_cast<std::uint32_t>(52)));
    ctx.gpr[14] = (ctx.gpr[14] | aot_gpr_2);
    { const bool branch_taken = ctx.gpr[14] == 0u;
      if (branch_taken) {
          goto L_08983E38;
      }
      goto L_08983DF4;
    }
L_08983DF4:
    aot_mem.aot_direct_store32(ctx.gpr[24] + static_cast<std::uint32_t>(16), aot_gpr_4);
    aot_mem.aot_direct_store8(ctx.gpr[24] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[13]));
    aot_mem.aot_direct_store8(ctx.gpr[24] + static_cast<std::uint32_t>(49), static_cast<std::uint8_t>(ctx.gpr[12]));
    aot_mem.aot_direct_store8(ctx.gpr[24] + static_cast<std::uint32_t>(50), static_cast<std::uint8_t>(ctx.gpr[3]));
    aot_mem.aot_direct_store8(ctx.gpr[24] + static_cast<std::uint32_t>(51), static_cast<std::uint8_t>(aot_gpr_2));
    { const std::uint32_t vfpu_address = ctx.gpr[9] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[24] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    ctx.fpr[16] = std::bit_cast<float>(0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= ctx.fpr[16])) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08983E40;
      }
      goto L_08983E24;
    }
L_08983E24:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23440)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(11132)));
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[24] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_08983E48;
      }
      goto L_08983E38;
    }
L_08983E38:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[24] + static_cast<std::uint32_t>(16), 0u);
      if (branch_taken) {
          goto L_08983EB8;
      }
      goto L_08983E40;
    }
L_08983E40:
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12) ^ 0x80000000u);
    aot_mem.aot_direct_store32(ctx.gpr[24] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_08983E48;
L_08983E48:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[24] + static_cast<std::uint32_t>(56))))));
    ctx.gpr[9] = (0u + static_cast<std::uint32_t>(-2));
    aot_gpr_4 = (aot_gpr_4 & ctx.gpr[9]);
    ctx.gpr[7] = (ctx.gpr[7] & 1u);
    aot_mem.aot_direct_store32(ctx.gpr[24] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(aot_fpr_14));
    ctx.gpr[9] = (0u | 1u);
    aot_gpr_4 = (aot_gpr_4 | ctx.gpr[7]);
    aot_mem.aot_direct_store8(ctx.gpr[24] + static_cast<std::uint32_t>(53), static_cast<std::uint8_t>(ctx.gpr[9]));
    aot_mem.aot_direct_store8(ctx.gpr[24] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store32(ctx.gpr[24] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[24] + static_cast<std::uint32_t>(56))))));
    aot_mem.aot_direct_store32(ctx.gpr[24] + static_cast<std::uint32_t>(24), ctx.gpr[10]);
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-9));
    aot_gpr_6 = (aot_gpr_6 & 1u);
    aot_mem.aot_direct_store8(ctx.gpr[24] + static_cast<std::uint32_t>(54), static_cast<std::uint8_t>(ctx.gpr[11]));
    aot_gpr_4 = (aot_gpr_4 & ctx.gpr[7]);
    aot_gpr_6 = (aot_gpr_6 << 3u);
    aot_mem.aot_direct_store8(ctx.gpr[24] + static_cast<std::uint32_t>(55), static_cast<std::uint8_t>(ctx.gpr[8]));
    aot_gpr_4 = (aot_gpr_4 | aot_gpr_6);
    aot_mem.aot_direct_store8(ctx.gpr[24] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[24] + static_cast<std::uint32_t>(56))))));
    aot_gpr_6 = (0u + static_cast<std::uint32_t>(-33));
    aot_gpr_5 = (aot_gpr_5 & 1u);
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_6);
    aot_gpr_5 = (aot_gpr_5 << 5u);
    aot_gpr_4 = (aot_gpr_4 | aot_gpr_5);
    aot_mem.aot_direct_store8(ctx.gpr[24] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store32(ctx.gpr[24] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(aot_fpr_15));
    goto L_08983EB8;
L_08983EB8:
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(32)));
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
L_08983EC4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_5 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_31);
    aot_gpr_31 = (0x08983EE8u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    goto L_08983F38;
L_08983EE8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-16548));
      if (branch_taken) {
          goto L_08983EFC;
      }
      goto L_08983EF4;
    }
L_08983EF4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08983EFC;
      }
      goto L_08983EFC;
    }
L_08983EFC:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_31 = (0x08983F08u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0121_entry, 121u, 215u, 0x089E9130u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08983F08u) goto L_08983F08;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08983F08:
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[16] == 0u) {
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), 0u);
        goto L_08983F20;
    }
    goto L_08983F14;
L_08983F14:
    aot_gpr_31 = (0x08983F1Cu);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE2E4, 174u, 472u, 0x08ABE2E4u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 472u, 0x08ABE2E4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08983F1Cu) goto L_08983F1C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08983F1C:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), 0u);
    goto L_08983F20;
L_08983F20:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(12)));
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
L_08983F38:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-96));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(52), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    aot_gpr_4 = (2233u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-4560));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(40), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(72), ctx.gpr[22]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(76), ctx.gpr[23]);
    aot_gpr_6 = (ctx.gpr[28] + static_cast<std::uint32_t>(-16544));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[23] = (2232u << 16u);
    ctx.gpr[22] = (2232u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(56), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(64), ctx.gpr[20]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(80), ctx.gpr[30]);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[18] = (ctx.gpr[28] + static_cast<std::uint32_t>(-16548));
    ctx.gpr[30] = (0u | 59u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(44), aot_gpr_6);
    ctx.gpr[20] = (aot_gpr_5 | 0u);
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(-6800));
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(-6780));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(60), ctx.gpr[19]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(68), ctx.gpr[21]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(84), aot_gpr_31);
    aot_gpr_5 = (0u | 0u);
    goto L_08983FA4;
L_08983FA4:
    if (aot_gpr_4 != 0u) {
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
        goto L_08983FAC;
    }
    goto L_08983FAC;
L_08983FAC:
    aot_gpr_5 = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0096_entry, 96u, 55u, 0x089842D4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08983FB8;
    }
L_08983FB8:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (0u | 0u);
    ctx.gpr[21] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    if (aot_gpr_5 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
        goto L_08983FCC;
    }
    goto L_08983FCC;
L_08983FCC:
    aot_gpr_4 = (ctx.gpr[16] < aot_gpr_4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (ctx.gpr[23] | 0u);
      if (branch_taken) {
          goto L_08983FE4;
      }
      goto L_08983FD8;
    }
L_08983FD8:
    aot_gpr_5 = (0u | 153u);
    aot_gpr_31 = (0x08983FE4u);
    aot_gpr_6 = (ctx.gpr[22] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 924u, 0x08B576ECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08983FE4u) goto L_08983FE4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08983FE4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    aot_gpr_4 = (aot_gpr_5 + ctx.gpr[16]);
    ctx.gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_4 = (0u | 38u);
    ctx.gpr[19] = (ctx.gpr[19] & 255u);
    { const bool branch_taken = ctx.gpr[19] != aot_gpr_4;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0096_entry, 96u, 28u, 0x0898414Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0096_entry, 96u, 1u, 0x08984004u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
    }
}

#undef AOT_REGCACHE_SYNC_IN
#undef AOT_REGCACHE_SYNC_OUT

void recomp_unit_0095(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0095_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_95(Runtime &runtime) {
    runtime.register_generated_unit(95u, 0x08980000u, 16384u, &recomp_unit_0095, &recomp_unit_0095_entry);
    runtime.register_function(0x08980000u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980004u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898000Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898001Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980024u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980068u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980074u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980078u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980080u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898008Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980098u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089800A8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089800B0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089800B8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089800C0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089800F4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980100u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898013Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980148u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898015Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980164u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898018Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980194u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898019Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089801E8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089801F0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089801F8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980200u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898020Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980214u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898021Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980224u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898022Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980234u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980244u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980254u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898025Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980264u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980270u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898027Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980288u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980298u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089802A8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089802B0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089802C0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089802CCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089802D8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089802E0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089802F0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089802F8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980340u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898034Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980360u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898036Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980378u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898037Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980384u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898038Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980398u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089803A8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089803D0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980408u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980420u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980428u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980430u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980438u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980440u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980448u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980450u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980458u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980460u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980468u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980470u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980478u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980480u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980488u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980490u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980498u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898049Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089804A4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089804B0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089804B8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089804C0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089804CCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089804DCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089804FCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898050Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980520u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980550u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980558u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980560u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980568u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980580u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980590u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980598u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089805A0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089805A8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089805B0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089805B8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089805C4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089805CCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089805E4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089805ECu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089805F8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980600u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980608u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980620u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898062Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980634u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980640u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898064Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980654u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898065Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980668u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980688u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980694u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089806A4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089806B0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089806C4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089806DCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980708u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980740u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898075Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898076Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980774u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898077Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980784u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980788u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980790u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980798u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089807ACu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089807B4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089807ECu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898080Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980824u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898082Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980830u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980850u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898085Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980870u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980880u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980888u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980890u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898089Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089808A4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089808A8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089808D4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089808E4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089808F8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980900u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980928u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980938u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980940u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980954u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980958u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898096Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980974u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980988u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089809B0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089809C0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089809CCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089809DCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089809E4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980A04u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980A34u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980A64u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980A70u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980A7Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980A84u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980A94u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980A9Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980AACu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980AB8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980AC8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980AD0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980ADCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980AF0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980AF8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980B08u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980B18u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980B24u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980B28u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980B38u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980B4Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980B50u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980B58u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980B60u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980B70u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980B7Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980B88u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980B90u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980B9Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980BA4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980BB4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980BBCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980BD4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980BE0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980BECu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980BF4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980BFCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980C0Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980C18u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980C20u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980C2Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980C34u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980C40u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980C50u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980C5Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980C68u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980C70u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980C80u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980C8Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980C94u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980CA0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980CA8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980CB8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980CC4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980CCCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980CD8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980CE0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980CF8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980D04u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980D10u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980D18u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980D20u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980D2Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980D38u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980D40u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980D48u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980D54u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980D74u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980D8Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980D90u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980DB0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980DB8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980DCCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980DF4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980E10u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980E14u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980E20u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980E2Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980E3Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980E40u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980E68u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980E80u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980E94u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980EA8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980EACu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980EB0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980EB8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980ED4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980EECu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980F00u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980F14u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980F18u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980F1Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980F24u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980F4Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980F54u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980F58u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980F88u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980F98u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980FA8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980FD8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980FE8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980FF8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898102Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981044u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981048u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981050u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898105Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981090u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898109Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089810ACu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089810E0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089810E4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089810F0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089810FCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981104u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981124u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981194u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089811A4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089811A8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089811B4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089811B8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089811C4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089811C8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089811D0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089811D8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089811DCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089811E8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089811F4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981208u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898120Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981214u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981220u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981228u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981238u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898124Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898126Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981274u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898127Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981290u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089812A4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089812B4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089812B8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089812CCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089812D4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089812E0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981308u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981324u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898138Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981398u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089813DCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089813F0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089813F8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981400u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981418u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981428u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981434u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981450u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898145Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981464u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981468u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981470u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089814A0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089814A8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089814ACu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089814B8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981504u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981544u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898154Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981554u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898156Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898158Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981618u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898163Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981648u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089816ACu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089816C4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089816CCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089816E0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089816F4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898171Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898175Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981770u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981790u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089817A4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089817ACu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089817B4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089817BCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089817CCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089817E0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089817ECu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981804u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981810u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981818u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981820u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981828u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981830u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981844u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981868u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981880u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981888u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981898u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089818A8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089818ACu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089818B4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089818D8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089818E0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089818E4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898190Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981910u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981918u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981928u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981938u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981954u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981978u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981980u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981984u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089819ACu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089819B0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089819B8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089819D0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089819D4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089819DCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089819ECu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089819FCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981A14u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981A18u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981A20u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981A38u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981A3Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981A44u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981A54u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981A64u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981A7Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981A80u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981A88u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981AA0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981AA4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981AACu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981ABCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981ACCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981AE4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981AE8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981AF0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981B10u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981B38u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981B40u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981B44u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981B6Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981B74u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981B78u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981B80u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981B90u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981BA0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981BC0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981BE8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981BF0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981BF4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981C1Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981C24u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981C28u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981C30u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981C38u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981C40u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981C50u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981C58u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981C6Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981C78u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981C80u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981C88u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981CE8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981CF0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981CF8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981D58u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981D70u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981D78u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981D84u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981D90u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981D9Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981E2Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981E38u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981E78u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981E80u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981E90u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981EFCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981F04u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981F14u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981F1Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981F34u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981FA0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981FB8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981FC0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981FE0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981FE4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898203Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982044u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898204Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089820A8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089820B0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089820C8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089820DCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982190u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089821ECu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982208u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089822D8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089822ECu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898231Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982398u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089823A4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089823B0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089823BCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982438u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982450u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089824A4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089824ACu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089824B8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089824C4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089824DCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089824E4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982504u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982518u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898252Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982540u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982544u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982560u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982578u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898258Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089825DCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089825E4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089825F0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089825F8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898260Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898264Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982654u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982668u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982688u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898269Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089826B4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089826B8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089826C0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089826D8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982710u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982728u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982748u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982754u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898275Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982768u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982770u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898277Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982788u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982790u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982794u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898279Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089827C0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089827E0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089827E8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982800u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898280Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898286Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089828E8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982930u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982938u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898298Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982998u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089829A4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089829ACu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089829B8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089829C0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089829CCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089829D0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089829D8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089829F0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982AB8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982AC8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982AD0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982AE4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982AFCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982B08u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982B14u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982B20u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982B2Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982B38u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982B44u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982B5Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982B78u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982B88u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982B8Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982BA0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982BACu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982CE4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982CFCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982D14u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982D20u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982D2Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982D38u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982D80u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982DDCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982DE8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982E18u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982E20u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982E2Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982E38u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982E44u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982E50u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982E5Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982E68u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982E80u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982ED4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982EF0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982EFCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982F08u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982F14u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982F24u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982F38u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982F68u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982F70u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982F84u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982FB4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982FBCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982FD8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982FE8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982FFCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898301Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983054u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898305Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983074u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983088u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089830A8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089830B0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089830CCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089830DCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089831BCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089831F4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983208u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983224u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898322Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983238u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983244u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983250u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898325Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983268u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089832B0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983304u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898334Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983394u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898344Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983808u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983888u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089838C0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089838C8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983A50u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983A5Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983A68u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983A74u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983A80u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983A8Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983A98u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983AA4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983ABCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983AD0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983AD8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983AE8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983AF0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983AFCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983B08u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983B14u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983B20u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983B2Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983B38u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983B70u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983B9Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983C10u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983C18u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983C20u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983C28u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983C64u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983C7Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983C84u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983C8Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983CB0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983CC4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983CCCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983CE4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983CF4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983CFCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983D04u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983D10u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983D18u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983D20u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983D38u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983D48u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983D50u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983D58u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983DA8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983DCCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983DD4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983DF4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983E24u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983E38u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983E40u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983E48u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983EB8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983EC4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983EE8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983EF4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983EFCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983F08u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983F14u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983F1Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983F20u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983F38u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983FA4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983FACu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983FB8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983FCCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983FD8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983FE4u, &recomp_unit_0095, "recomp_unit_0095");
}
} // namespace psprecomp
