#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include "vcs_resident_regions.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
// PSPRECOMP_V811_COMPACT_DISPATCH: 64-slot occupancy masks + per-group base id.
static constexpr std::uint64_t kEntryMasks_recomp_unit_0148[64] = {
    0x2400001800001105ull, 0x224422AA12401000ull, 0x22140522440A0005ull, 0x17110A8080208291ull,
    0x2220104291222910ull, 0x05A0342105224455ull, 0x1208140000141008ull, 0x1144A74924009661ull,
    0x944A7492A5491084ull, 0x8091191151152A20ull, 0x44AB492942E22200ull, 0xA285C44290108010ull,
    0x14528A28B8884000ull, 0x280A2002E2212045ull, 0xA81040008042A014ull, 0x050AE220004A1052ull,
    0x2000808C71100090ull, 0x0802309848E22001ull, 0x24204024002280D0ull, 0x0000042000111525ull,
    0x0000000000210090ull, 0x5005000000001041ull, 0x8910A21221522141ull, 0x820AAA4881409102ull,
    0x000200048A448880ull, 0x1092085404800084ull, 0x2114400A04014884ull, 0x4885424910A80000ull,
    0x8840809122114912ull, 0x8229122201108A44ull, 0x8910829514522442ull, 0x2148910AA4488554ull,
    0x442A089122115028ull, 0x0D22448211148800ull, 0x4000A44885444408ull, 0x8052244280A44881ull,
    0x0420810524902020ull, 0x00290AA95428A440ull, 0x080000D471100008ull, 0x4000428400242410ull,
    0x94908A1209048280ull, 0x4451017110A85100ull, 0x2292049110000044ull, 0x80A0188100002222ull,
    0x1242584B09612000ull, 0x0002120001515020ull, 0x8A40000056500010ull, 0x909612C240080AA2ull,
    0x50000A4A12540804ull, 0xA28A200000000015ull, 0x910910102A000008ull, 0x9200509010408000ull,
    0x2592324C94120820ull, 0x2844840009000009ull, 0x4341C1588A022404ull, 0x1254950888840884ull,
    0x0284404000910910ull, 0x844840120C940849ull, 0x881102204952A842ull, 0x1555100000110002ull,
    0x480A018582405088ull, 0x04408811028080B0ull, 0x0040404150511022ull, 0x4150404081041081ull,
};
static constexpr std::uint16_t kEntryBases_recomp_unit_0148[64] = {
    1u, 9u, 23u, 37u, 53u, 68u, 87u, 96u, 117u, 140u, 159u, 180u, 196u, 213u, 229u, 241u,
    257u, 269u, 284u, 296u, 306u, 310u, 317u, 335u, 352u, 362u, 374u, 387u, 401u, 417u, 433u, 452u,
    472u, 489u, 504u, 518u, 534u, 546u, 564u, 575u, 585u, 601u, 618u, 630u, 641u, 658u, 668u, 679u,
    697u, 711u, 721u, 732u, 742u, 761u, 771u, 789u, 806u, 817u, 833u, 850u, 861u, 876u, 888u, 900u,
};
void recomp_unit_0148_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
// PSPRECOMP_AOT_REGCACHE_BEGIN
// PSPRECOMP_AOT_REGCACHE_META gprs=4,5,31,6,29,2 fprs=12,0,20,13 gpr_occ=4872 fpr_occ=87 gpr_total=7056 fpr_total=103
    std::uint32_t aot_gpr_4 = ctx.gpr[4];
    std::uint32_t aot_gpr_5 = ctx.gpr[5];
    std::uint32_t aot_gpr_31 = ctx.gpr[31];
    std::uint32_t aot_gpr_6 = ctx.gpr[6];
    std::uint32_t aot_gpr_29 = ctx.gpr[29];
    std::uint32_t aot_gpr_2 = ctx.gpr[2];
    float aot_fpr_12 = ctx.fpr[12];
    float aot_fpr_0 = ctx.fpr[0];
    float aot_fpr_20 = ctx.fpr[20];
    float aot_fpr_13 = ctx.fpr[13];
    bool aot_regcache_valid = true;
#define AOT_REGCACHE_SYNC_OUT() do { if (aot_regcache_valid) { ctx.gpr[4] = aot_gpr_4; ctx.gpr[5] = aot_gpr_5; ctx.gpr[31] = aot_gpr_31; ctx.gpr[6] = aot_gpr_6; ctx.gpr[29] = aot_gpr_29; ctx.gpr[2] = aot_gpr_2; ctx.fpr[12] = aot_fpr_12; ctx.fpr[0] = aot_fpr_0; ctx.fpr[20] = aot_fpr_20; ctx.fpr[13] = aot_fpr_13; } } while (false)
#define AOT_REGCACHE_SYNC_IN() do { if (aot_regcache_valid) { aot_gpr_4 = ctx.gpr[4]; aot_gpr_5 = ctx.gpr[5]; aot_gpr_31 = ctx.gpr[31]; aot_gpr_6 = ctx.gpr[6]; aot_gpr_29 = ctx.gpr[29]; aot_gpr_2 = ctx.gpr[2]; aot_fpr_12 = ctx.fpr[12]; aot_fpr_0 = ctx.fpr[0]; aot_fpr_20 = ctx.fpr[20]; aot_fpr_13 = ctx.fpr[13]; } } while (false)
// PSPRECOMP_AOT_REGCACHE_END
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_redispatch_rounds = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08A54004u;
        entry_id = 0u;
        if (entry_delta < 16380u && (entry_delta & 3u) == 0u) {
            const std::uint32_t entry_slot = entry_delta >> 2u;
            const std::uint32_t entry_group = entry_slot >> 6u;
            const std::uint64_t entry_mask = kEntryMasks_recomp_unit_0148[entry_group];
            const std::uint64_t entry_bit = 1ull << (entry_slot & 63u);
            if ((entry_mask & entry_bit) != 0u) {
                entry_id = static_cast<std::uint16_t>(
                    kEntryBases_recomp_unit_0148[entry_group] +
                    std::popcount(entry_mask & (entry_bit - 1ull)));
            }
        }
    }
    switch (entry_id) {
    case 1u: goto L_08A54004;
    case 2u: goto L_08A5400C;
    case 3u: goto L_08A54024;
    case 4u: goto L_08A54034;
    case 5u: goto L_08A54090;
    case 6u: goto L_08A54094;
    case 7u: goto L_08A540EC;
    case 8u: goto L_08A540F8;
    case 9u: goto L_08A54134;
    case 10u: goto L_08A5415C;
    case 11u: goto L_08A54168;
    case 12u: goto L_08A54174;
    case 13u: goto L_08A54188;
    case 14u: goto L_08A54190;
    case 15u: goto L_08A54198;
    case 16u: goto L_08A541A0;
    case 17u: goto L_08A541A8;
    case 18u: goto L_08A541B8;
    case 19u: goto L_08A541CC;
    case 20u: goto L_08A541DC;
    case 21u: goto L_08A541E8;
    case 22u: goto L_08A541F8;
    case 23u: goto L_08A54204;
    case 24u: goto L_08A5420C;
    case 25u: goto L_08A54248;
    case 26u: goto L_08A54250;
    case 27u: goto L_08A5426C;
    case 28u: goto L_08A5427C;
    case 29u: goto L_08A54288;
    case 30u: goto L_08A54298;
    case 31u: goto L_08A542A4;
    case 32u: goto L_08A542AC;
    case 33u: goto L_08A542CC;
    case 34u: goto L_08A542D4;
    case 35u: goto L_08A542E8;
    case 36u: goto L_08A542F8;
    case 37u: goto L_08A54304;
    case 38u: goto L_08A54314;
    case 39u: goto L_08A54320;
    case 40u: goto L_08A54328;
    case 41u: goto L_08A54340;
    case 42u: goto L_08A54358;
    case 43u: goto L_08A54380;
    case 44u: goto L_08A543A0;
    case 45u: goto L_08A543A8;
    case 46u: goto L_08A543B0;
    case 47u: goto L_08A543C4;
    case 48u: goto L_08A543D4;
    case 49u: goto L_08A543E4;
    case 50u: goto L_08A543E8;
    case 51u: goto L_08A543EC;
    case 52u: goto L_08A543F4;
    case 53u: goto L_08A54414;
    case 54u: goto L_08A54424;
    case 55u: goto L_08A54430;
    case 56u: goto L_08A54438;
    case 57u: goto L_08A54448;
    case 58u: goto L_08A54458;
    case 59u: goto L_08A54464;
    case 60u: goto L_08A54474;
    case 61u: goto L_08A54480;
    case 62u: goto L_08A54488;
    case 63u: goto L_08A5449C;
    case 64u: goto L_08A544B4;
    case 65u: goto L_08A544D8;
    case 66u: goto L_08A544E8;
    case 67u: goto L_08A544F8;
    case 68u: goto L_08A54504;
    case 69u: goto L_08A5450C;
    case 70u: goto L_08A54514;
    case 71u: goto L_08A5451C;
    case 72u: goto L_08A5452C;
    case 73u: goto L_08A5453C;
    case 74u: goto L_08A54548;
    case 75u: goto L_08A54558;
    case 76u: goto L_08A54564;
    case 77u: goto L_08A5456C;
    case 78u: goto L_08A54584;
    case 79u: goto L_08A54598;
    case 80u: goto L_08A545AC;
    case 81u: goto L_08A545B4;
    case 82u: goto L_08A545B8;
    case 83u: goto L_08A545D8;
    case 84u: goto L_08A545E0;
    case 85u: goto L_08A545E4;
    case 86u: goto L_08A545EC;
    case 87u: goto L_08A54610;
    case 88u: goto L_08A54634;
    case 89u: goto L_08A5464C;
    case 90u: goto L_08A54654;
    case 91u: goto L_08A546AC;
    case 92u: goto L_08A546B4;
    case 93u: goto L_08A546D0;
    case 94u: goto L_08A546E8;
    case 95u: goto L_08A546F4;
    case 96u: goto L_08A54704;
    case 97u: goto L_08A54718;
    case 98u: goto L_08A5471C;
    case 99u: goto L_08A54728;
    case 100u: goto L_08A5472C;
    case 101u: goto L_08A54734;
    case 102u: goto L_08A54740;
    case 103u: goto L_08A5476C;
    case 104u: goto L_08A54778;
    case 105u: goto L_08A54784;
    case 106u: goto L_08A54790;
    case 107u: goto L_08A5479C;
    case 108u: goto L_08A547A4;
    case 109u: goto L_08A547A8;
    case 110u: goto L_08A547AC;
    case 111u: goto L_08A547B8;
    case 112u: goto L_08A547C0;
    case 113u: goto L_08A547CC;
    case 114u: goto L_08A547DC;
    case 115u: goto L_08A547E4;
    case 116u: goto L_08A547F4;
    case 117u: goto L_08A5480C;
    case 118u: goto L_08A54820;
    case 119u: goto L_08A54834;
    case 120u: goto L_08A54844;
    case 121u: goto L_08A54850;
    case 122u: goto L_08A5485C;
    case 123u: goto L_08A54864;
    case 124u: goto L_08A5486C;
    case 125u: goto L_08A54878;
    case 126u: goto L_08A54880;
    case 127u: goto L_08A54888;
    case 128u: goto L_08A54894;
    case 129u: goto L_08A548A0;
    case 130u: goto L_08A548AC;
    case 131u: goto L_08A548B4;
    case 132u: goto L_08A548B8;
    case 133u: goto L_08A548BC;
    case 134u: goto L_08A548C8;
    case 135u: goto L_08A548D0;
    case 136u: goto L_08A548DC;
    case 137u: goto L_08A548EC;
    case 138u: goto L_08A548F4;
    case 139u: goto L_08A54900;
    case 140u: goto L_08A54918;
    case 141u: goto L_08A54928;
    case 142u: goto L_08A54930;
    case 143u: goto L_08A54938;
    case 144u: goto L_08A54944;
    case 145u: goto L_08A5494C;
    case 146u: goto L_08A54954;
    case 147u: goto L_08A54964;
    case 148u: goto L_08A54974;
    case 149u: goto L_08A5497C;
    case 150u: goto L_08A54984;
    case 151u: goto L_08A54994;
    case 152u: goto L_08A549A4;
    case 153u: goto L_08A549B0;
    case 154u: goto L_08A549B4;
    case 155u: goto L_08A549C4;
    case 156u: goto L_08A549D4;
    case 157u: goto L_08A549E0;
    case 158u: goto L_08A54A00;
    case 159u: goto L_08A54A28;
    case 160u: goto L_08A54A38;
    case 161u: goto L_08A54A48;
    case 162u: goto L_08A54A58;
    case 163u: goto L_08A54A5C;
    case 164u: goto L_08A54A60;
    case 165u: goto L_08A54A68;
    case 166u: goto L_08A54A7C;
    case 167u: goto L_08A54A84;
    case 168u: goto L_08A54A90;
    case 169u: goto L_08A54A98;
    case 170u: goto L_08A54AA4;
    case 171u: goto L_08A54AB0;
    case 172u: goto L_08A54ABC;
    case 173u: goto L_08A54AC4;
    case 174u: goto L_08A54AC8;
    case 175u: goto L_08A54AD0;
    case 176u: goto L_08A54AD8;
    case 177u: goto L_08A54AE0;
    case 178u: goto L_08A54AEC;
    case 179u: goto L_08A54AFC;
    case 180u: goto L_08A54B14;
    case 181u: goto L_08A54B40;
    case 182u: goto L_08A54B54;
    case 183u: goto L_08A54B74;
    case 184u: goto L_08A54B80;
    case 185u: goto L_08A54B88;
    case 186u: goto L_08A54B9C;
    case 187u: goto L_08A54BAC;
    case 188u: goto L_08A54BBC;
    case 189u: goto L_08A54BC0;
    case 190u: goto L_08A54BC4;
    case 191u: goto L_08A54BCC;
    case 192u: goto L_08A54BE0;
    case 193u: goto L_08A54BE8;
    case 194u: goto L_08A54BF8;
    case 195u: goto L_08A54C00;
    case 196u: goto L_08A54C3C;
    case 197u: goto L_08A54C50;
    case 198u: goto L_08A54C60;
    case 199u: goto L_08A54C70;
    case 200u: goto L_08A54C74;
    case 201u: goto L_08A54C78;
    case 202u: goto L_08A54C80;
    case 203u: goto L_08A54C90;
    case 204u: goto L_08A54C98;
    case 205u: goto L_08A54CA8;
    case 206u: goto L_08A54CB0;
    case 207u: goto L_08A54CC0;
    case 208u: goto L_08A54CC8;
    case 209u: goto L_08A54CD4;
    case 210u: goto L_08A54CDC;
    case 211u: goto L_08A54CEC;
    case 212u: goto L_08A54CF4;
    case 213u: goto L_08A54D04;
    case 214u: goto L_08A54D0C;
    case 215u: goto L_08A54D1C;
    case 216u: goto L_08A54D38;
    case 217u: goto L_08A54D44;
    case 218u: goto L_08A54D58;
    case 219u: goto L_08A54D68;
    case 220u: goto L_08A54D78;
    case 221u: goto L_08A54D7C;
    case 222u: goto L_08A54D80;
    case 223u: goto L_08A54D88;
    case 224u: goto L_08A54DB8;
    case 225u: goto L_08A54DC8;
    case 226u: goto L_08A54DD0;
    case 227u: goto L_08A54DF0;
    case 228u: goto L_08A54DF8;
    case 229u: goto L_08A54E0C;
    case 230u: goto L_08A54E14;
    case 231u: goto L_08A54E38;
    case 232u: goto L_08A54E40;
    case 233u: goto L_08A54E48;
    case 234u: goto L_08A54E5C;
    case 235u: goto L_08A54E80;
    case 236u: goto L_08A54EBC;
    case 237u: goto L_08A54ED4;
    case 238u: goto L_08A54EF0;
    case 239u: goto L_08A54EF8;
    case 240u: goto L_08A54F00;
    case 241u: goto L_08A54F08;
    case 242u: goto L_08A54F14;
    case 243u: goto L_08A54F1C;
    case 244u: goto L_08A54F34;
    case 245u: goto L_08A54F48;
    case 246u: goto L_08A54F50;
    case 247u: goto L_08A54F5C;
    case 248u: goto L_08A54F98;
    case 249u: goto L_08A54FA8;
    case 250u: goto L_08A54FB8;
    case 251u: goto L_08A54FBC;
    case 252u: goto L_08A54FC0;
    case 253u: goto L_08A54FC8;
    case 254u: goto L_08A54FD0;
    case 255u: goto L_08A54FE4;
    case 256u: goto L_08A54FEC;
    case 257u: goto L_08A55014;
    case 258u: goto L_08A55020;
    case 259u: goto L_08A55054;
    case 260u: goto L_08A55064;
    case 261u: goto L_08A55074;
    case 262u: goto L_08A55078;
    case 263u: goto L_08A5507C;
    case 264u: goto L_08A5508C;
    case 265u: goto L_08A55090;
    case 266u: goto L_08A550A0;
    case 267u: goto L_08A550C0;
    case 268u: goto L_08A550F8;
    case 269u: goto L_08A55104;
    case 270u: goto L_08A55138;
    case 271u: goto L_08A55148;
    case 272u: goto L_08A55158;
    case 273u: goto L_08A5515C;
    case 274u: goto L_08A55160;
    case 275u: goto L_08A55170;
    case 276u: goto L_08A5517C;
    case 277u: goto L_08A55190;
    case 278u: goto L_08A55194;
    case 279u: goto L_08A551A0;
    case 280u: goto L_08A551B4;
    case 281u: goto L_08A551B8;
    case 282u: goto L_08A551C8;
    case 283u: goto L_08A551F0;
    case 284u: goto L_08A55214;
    case 285u: goto L_08A5521C;
    case 286u: goto L_08A55220;
    case 287u: goto L_08A55240;
    case 288u: goto L_08A55248;
    case 289u: goto L_08A55258;
    case 290u: goto L_08A5528C;
    case 291u: goto L_08A55298;
    case 292u: goto L_08A552BC;
    case 293u: goto L_08A552D8;
    case 294u: goto L_08A552EC;
    case 295u: goto L_08A552F8;
    case 296u: goto L_08A55304;
    case 297u: goto L_08A5530C;
    case 298u: goto L_08A55318;
    case 299u: goto L_08A55324;
    case 300u: goto L_08A5532C;
    case 301u: goto L_08A55334;
    case 302u: goto L_08A55344;
    case 303u: goto L_08A55354;
    case 304u: goto L_08A55398;
    case 305u: goto L_08A553AC;
    case 306u: goto L_08A55414;
    case 307u: goto L_08A55420;
    case 308u: goto L_08A55444;
    case 309u: goto L_08A55458;
    case 310u: goto L_08A55504;
    case 311u: goto L_08A5551C;
    case 312u: goto L_08A55534;
    case 313u: goto L_08A555C4;
    case 314u: goto L_08A555CC;
    case 315u: goto L_08A555F4;
    case 316u: goto L_08A555FC;
    case 317u: goto L_08A55604;
    case 318u: goto L_08A5561C;
    case 319u: goto L_08A55624;
    case 320u: goto L_08A55638;
    case 321u: goto L_08A55648;
    case 322u: goto L_08A55654;
    case 323u: goto L_08A5565C;
    case 324u: goto L_08A55664;
    case 325u: goto L_08A55678;
    case 326u: goto L_08A55688;
    case 327u: goto L_08A55694;
    case 328u: goto L_08A556A8;
    case 329u: goto L_08A556B8;
    case 330u: goto L_08A556C0;
    case 331u: goto L_08A556D4;
    case 332u: goto L_08A556E4;
    case 333u: goto L_08A556F0;
    case 334u: goto L_08A55700;
    case 335u: goto L_08A55708;
    case 336u: goto L_08A55724;
    case 337u: goto L_08A55734;
    case 338u: goto L_08A55740;
    case 339u: goto L_08A5575C;
    case 340u: goto L_08A55764;
    case 341u: goto L_08A55780;
    case 342u: goto L_08A55790;
    case 343u: goto L_08A5579C;
    case 344u: goto L_08A557A8;
    case 345u: goto L_08A557B0;
    case 346u: goto L_08A557B8;
    case 347u: goto L_08A557C0;
    case 348u: goto L_08A557C8;
    case 349u: goto L_08A557D0;
    case 350u: goto L_08A557E8;
    case 351u: goto L_08A55800;
    case 352u: goto L_08A55820;
    case 353u: goto L_08A55830;
    case 354u: goto L_08A55840;
    case 355u: goto L_08A5584C;
    case 356u: goto L_08A5585C;
    case 357u: goto L_08A55868;
    case 358u: goto L_08A55870;
    case 359u: goto L_08A55880;
    case 360u: goto L_08A5588C;
    case 361u: goto L_08A558C8;
    case 362u: goto L_08A5590C;
    case 363u: goto L_08A55920;
    case 364u: goto L_08A55960;
    case 365u: goto L_08A5596C;
    case 366u: goto L_08A5598C;
    case 367u: goto L_08A55994;
    case 368u: goto L_08A5599C;
    case 369u: goto L_08A559B0;
    case 370u: goto L_08A559C8;
    case 371u: goto L_08A559D4;
    case 372u: goto L_08A559E0;
    case 373u: goto L_08A559F4;
    case 374u: goto L_08A55A0C;
    case 375u: goto L_08A55A20;
    case 376u: goto L_08A55A30;
    case 377u: goto L_08A55A3C;
    case 378u: goto L_08A55A44;
    case 379u: goto L_08A55A6C;
    case 380u: goto L_08A55A88;
    case 381u: goto L_08A55A90;
    case 382u: goto L_08A55ABC;
    case 383u: goto L_08A55ACC;
    case 384u: goto L_08A55AD4;
    case 385u: goto L_08A55AE4;
    case 386u: goto L_08A55AF8;
    case 387u: goto L_08A55B50;
    case 388u: goto L_08A55B58;
    case 389u: goto L_08A55B60;
    case 390u: goto L_08A55B74;
    case 391u: goto L_08A55B84;
    case 392u: goto L_08A55B90;
    case 393u: goto L_08A55B9C;
    case 394u: goto L_08A55BA8;
    case 395u: goto L_08A55BBC;
    case 396u: goto L_08A55BC4;
    case 397u: goto L_08A55BCC;
    case 398u: goto L_08A55BE0;
    case 399u: goto L_08A55BF0;
    case 400u: goto L_08A55BFC;
    case 401u: goto L_08A55C08;
    case 402u: goto L_08A55C14;
    case 403u: goto L_08A55C24;
    case 404u: goto L_08A55C30;
    case 405u: goto L_08A55C3C;
    case 406u: goto L_08A55C44;
    case 407u: goto L_08A55C54;
    case 408u: goto L_08A55C68;
    case 409u: goto L_08A55C78;
    case 410u: goto L_08A55C84;
    case 411u: goto L_08A55C94;
    case 412u: goto L_08A55CA0;
    case 413u: goto L_08A55CC0;
    case 414u: goto L_08A55CDC;
    case 415u: goto L_08A55CF0;
    case 416u: goto L_08A55D00;
    case 417u: goto L_08A55D0C;
    case 418u: goto L_08A55D1C;
    case 419u: goto L_08A55D28;
    case 420u: goto L_08A55D30;
    case 421u: goto L_08A55D40;
    case 422u: goto L_08A55D54;
    case 423u: goto L_08A55D64;
    case 424u: goto L_08A55D88;
    case 425u: goto L_08A55D98;
    case 426u: goto L_08A55DA8;
    case 427u: goto L_08A55DB4;
    case 428u: goto L_08A55DC4;
    case 429u: goto L_08A55DD0;
    case 430u: goto L_08A55DD8;
    case 431u: goto L_08A55DE8;
    case 432u: goto L_08A55E00;
    case 433u: goto L_08A55E08;
    case 434u: goto L_08A55E1C;
    case 435u: goto L_08A55E2C;
    case 436u: goto L_08A55E38;
    case 437u: goto L_08A55E48;
    case 438u: goto L_08A55E54;
    case 439u: goto L_08A55E5C;
    case 440u: goto L_08A55E6C;
    case 441u: goto L_08A55E74;
    case 442u: goto L_08A55E84;
    case 443u: goto L_08A55E8C;
    case 444u: goto L_08A55E94;
    case 445u: goto L_08A55EA0;
    case 446u: goto L_08A55EA8;
    case 447u: goto L_08A55EC0;
    case 448u: goto L_08A55ED4;
    case 449u: goto L_08A55EE4;
    case 450u: goto L_08A55EF0;
    case 451u: goto L_08A55F00;
    case 452u: goto L_08A55F0C;
    case 453u: goto L_08A55F14;
    case 454u: goto L_08A55F1C;
    case 455u: goto L_08A55F24;
    case 456u: goto L_08A55F2C;
    case 457u: goto L_08A55F40;
    case 458u: goto L_08A55F50;
    case 459u: goto L_08A55F5C;
    case 460u: goto L_08A55F6C;
    case 461u: goto L_08A55F78;
    case 462u: goto L_08A55F80;
    case 463u: goto L_08A55F88;
    case 464u: goto L_08A55F90;
    case 465u: goto L_08A55FA4;
    case 466u: goto L_08A55FB4;
    case 467u: goto L_08A55FC0;
    case 468u: goto L_08A55FD0;
    case 469u: goto L_08A55FDC;
    case 470u: goto L_08A55FE4;
    case 471u: goto L_08A55FF8;
    case 472u: goto L_08A56010;
    case 473u: goto L_08A56018;
    case 474u: goto L_08A56034;
    case 475u: goto L_08A5603C;
    case 476u: goto L_08A56044;
    case 477u: goto L_08A56054;
    case 478u: goto L_08A56068;
    case 479u: goto L_08A56078;
    case 480u: goto L_08A56084;
    case 481u: goto L_08A56094;
    case 482u: goto L_08A560A0;
    case 483u: goto L_08A560B0;
    case 484u: goto L_08A560C8;
    case 485u: goto L_08A560D0;
    case 486u: goto L_08A560D8;
    case 487u: goto L_08A560EC;
    case 488u: goto L_08A560FC;
    case 489u: goto L_08A56130;
    case 490u: goto L_08A56140;
    case 491u: goto L_08A5614C;
    case 492u: goto L_08A56154;
    case 493u: goto L_08A56164;
    case 494u: goto L_08A56174;
    case 495u: goto L_08A56188;
    case 496u: goto L_08A561A0;
    case 497u: goto L_08A561AC;
    case 498u: goto L_08A561BC;
    case 499u: goto L_08A561C8;
    case 500u: goto L_08A561D8;
    case 501u: goto L_08A561E4;
    case 502u: goto L_08A561EC;
    case 503u: goto L_08A561F0;
    case 504u: goto L_08A56210;
    case 505u: goto L_08A5622C;
    case 506u: goto L_08A5623C;
    case 507u: goto L_08A5624C;
    case 508u: goto L_08A5625C;
    case 509u: goto L_08A56264;
    case 510u: goto L_08A5626C;
    case 511u: goto L_08A56280;
    case 512u: goto L_08A56290;
    case 513u: goto L_08A5629C;
    case 514u: goto L_08A562AC;
    case 515u: goto L_08A562B8;
    case 516u: goto L_08A562C0;
    case 517u: goto L_08A562FC;
    case 518u: goto L_08A56304;
    case 519u: goto L_08A56320;
    case 520u: goto L_08A56330;
    case 521u: goto L_08A5633C;
    case 522u: goto L_08A5634C;
    case 523u: goto L_08A56358;
    case 524u: goto L_08A56360;
    case 525u: goto L_08A56380;
    case 526u: goto L_08A56388;
    case 527u: goto L_08A5639C;
    case 528u: goto L_08A563AC;
    case 529u: goto L_08A563B8;
    case 530u: goto L_08A563C8;
    case 531u: goto L_08A563D4;
    case 532u: goto L_08A563DC;
    case 533u: goto L_08A56400;
    case 534u: goto L_08A56418;
    case 535u: goto L_08A56438;
    case 536u: goto L_08A56454;
    case 537u: goto L_08A56460;
    case 538u: goto L_08A5646C;
    case 539u: goto L_08A56478;
    case 540u: goto L_08A56484;
    case 541u: goto L_08A5648C;
    case 542u: goto L_08A564A4;
    case 543u: goto L_08A564C0;
    case 544u: goto L_08A564D8;
    case 545u: goto L_08A564EC;
    case 546u: goto L_08A5651C;
    case 547u: goto L_08A5652C;
    case 548u: goto L_08A56538;
    case 549u: goto L_08A56540;
    case 550u: goto L_08A56550;
    case 551u: goto L_08A56558;
    case 552u: goto L_08A5656C;
    case 553u: goto L_08A56574;
    case 554u: goto L_08A5657C;
    case 555u: goto L_08A56584;
    case 556u: goto L_08A56590;
    case 557u: goto L_08A56598;
    case 558u: goto L_08A565A0;
    case 559u: goto L_08A565A8;
    case 560u: goto L_08A565B0;
    case 561u: goto L_08A565C4;
    case 562u: goto L_08A565D0;
    case 563u: goto L_08A565D8;
    case 564u: goto L_08A56610;
    case 565u: goto L_08A56654;
    case 566u: goto L_08A56664;
    case 567u: goto L_08A56674;
    case 568u: goto L_08A56678;
    case 569u: goto L_08A5667C;
    case 570u: goto L_08A5668C;
    case 571u: goto L_08A56694;
    case 572u: goto L_08A5669C;
    case 573u: goto L_08A566A0;
    case 574u: goto L_08A566F0;
    case 575u: goto L_08A56714;
    case 576u: goto L_08A5672C;
    case 577u: goto L_08A56738;
    case 578u: goto L_08A5674C;
    case 579u: goto L_08A56758;
    case 580u: goto L_08A5678C;
    case 581u: goto L_08A567A0;
    case 582u: goto L_08A567A8;
    case 583u: goto L_08A567BC;
    case 584u: goto L_08A567FC;
    case 585u: goto L_08A56820;
    case 586u: goto L_08A56828;
    case 587u: goto L_08A56840;
    case 588u: goto L_08A5684C;
    case 589u: goto L_08A56864;
    case 590u: goto L_08A56870;
    case 591u: goto L_08A56888;
    case 592u: goto L_08A56894;
    case 593u: goto L_08A568A8;
    case 594u: goto L_08A568B0;
    case 595u: goto L_08A568C0;
    case 596u: goto L_08A568D4;
    case 597u: goto L_08A568E0;
    case 598u: goto L_08A568EC;
    case 599u: goto L_08A568F4;
    case 600u: goto L_08A56900;
    case 601u: goto L_08A56924;
    case 602u: goto L_08A56934;
    case 603u: goto L_08A5693C;
    case 604u: goto L_08A56950;
    case 605u: goto L_08A56958;
    case 606u: goto L_08A56960;
    case 607u: goto L_08A56974;
    case 608u: goto L_08A56984;
    case 609u: goto L_08A56994;
    case 610u: goto L_08A56998;
    case 611u: goto L_08A5699C;
    case 612u: goto L_08A569A4;
    case 613u: goto L_08A569C4;
    case 614u: goto L_08A569D4;
    case 615u: goto L_08A569DC;
    case 616u: goto L_08A569EC;
    case 617u: goto L_08A569FC;
    case 618u: goto L_08A56A0C;
    case 619u: goto L_08A56A1C;
    case 620u: goto L_08A56A74;
    case 621u: goto L_08A56A84;
    case 622u: goto L_08A56A94;
    case 623u: goto L_08A56AA0;
    case 624u: goto L_08A56AAC;
    case 625u: goto L_08A56AC8;
    case 626u: goto L_08A56AD4;
    case 627u: goto L_08A56AE0;
    case 628u: goto L_08A56AE8;
    case 629u: goto L_08A56AF8;
    case 630u: goto L_08A56B08;
    case 631u: goto L_08A56B18;
    case 632u: goto L_08A56B28;
    case 633u: goto L_08A56B38;
    case 634u: goto L_08A56B84;
    case 635u: goto L_08A56BA0;
    case 636u: goto L_08A56BB0;
    case 637u: goto L_08A56BB4;
    case 638u: goto L_08A56BD8;
    case 639u: goto L_08A56BE0;
    case 640u: goto L_08A56C00;
    case 641u: goto L_08A56C38;
    case 642u: goto L_08A56C44;
    case 643u: goto L_08A56C58;
    case 644u: goto L_08A56C5C;
    case 645u: goto L_08A56C64;
    case 646u: goto L_08A56C70;
    case 647u: goto L_08A56C84;
    case 648u: goto L_08A56C88;
    case 649u: goto L_08A56C90;
    case 650u: goto L_08A56C9C;
    case 651u: goto L_08A56CB0;
    case 652u: goto L_08A56CB4;
    case 653u: goto L_08A56CBC;
    case 654u: goto L_08A56CC8;
    case 655u: goto L_08A56CDC;
    case 656u: goto L_08A56CE8;
    case 657u: goto L_08A56CF4;
    case 658u: goto L_08A56D18;
    case 659u: goto L_08A56D34;
    case 660u: goto L_08A56D3C;
    case 661u: goto L_08A56D44;
    case 662u: goto L_08A56D54;
    case 663u: goto L_08A56D5C;
    case 664u: goto L_08A56D64;
    case 665u: goto L_08A56DA8;
    case 666u: goto L_08A56DB4;
    case 667u: goto L_08A56DC8;
    case 668u: goto L_08A56E14;
    case 669u: goto L_08A56E54;
    case 670u: goto L_08A56E5C;
    case 671u: goto L_08A56E68;
    case 672u: goto L_08A56E6C;
    case 673u: goto L_08A56E74;
    case 674u: goto L_08A56E7C;
    case 675u: goto L_08A56EDC;
    case 676u: goto L_08A56EE8;
    case 677u: goto L_08A56EF0;
    case 678u: goto L_08A56F00;
    case 679u: goto L_08A56F08;
    case 680u: goto L_08A56F18;
    case 681u: goto L_08A56F20;
    case 682u: goto L_08A56F28;
    case 683u: goto L_08A56F30;
    case 684u: goto L_08A56F50;
    case 685u: goto L_08A56F7C;
    case 686u: goto L_08A56F88;
    case 687u: goto L_08A56F9C;
    case 688u: goto L_08A56FA0;
    case 689u: goto L_08A56FA8;
    case 690u: goto L_08A56FB4;
    case 691u: goto L_08A56FC8;
    case 692u: goto L_08A56FCC;
    case 693u: goto L_08A56FD4;
    case 694u: goto L_08A56FE0;
    case 695u: goto L_08A56FF4;
    case 696u: goto L_08A57000;
    case 697u: goto L_08A5700C;
    case 698u: goto L_08A57030;
    case 699u: goto L_08A5704C;
    case 700u: goto L_08A57054;
    case 701u: goto L_08A5705C;
    case 702u: goto L_08A57068;
    case 703u: goto L_08A57074;
    case 704u: goto L_08A57088;
    case 705u: goto L_08A57090;
    case 706u: goto L_08A5709C;
    case 707u: goto L_08A570A8;
    case 708u: goto L_08A570B0;
    case 709u: goto L_08A570F4;
    case 710u: goto L_08A570FC;
    case 711u: goto L_08A57104;
    case 712u: goto L_08A5710C;
    case 713u: goto L_08A57114;
    case 714u: goto L_08A571B8;
    case 715u: goto L_08A571C8;
    case 716u: goto L_08A571D0;
    case 717u: goto L_08A571E0;
    case 718u: goto L_08A571E8;
    case 719u: goto L_08A571F8;
    case 720u: goto L_08A57200;
    case 721u: goto L_08A57210;
    case 722u: goto L_08A57268;
    case 723u: goto L_08A57270;
    case 724u: goto L_08A57278;
    case 725u: goto L_08A57294;
    case 726u: goto L_08A572B4;
    case 727u: goto L_08A572C4;
    case 728u: goto L_08A572D0;
    case 729u: goto L_08A572E4;
    case 730u: goto L_08A572F4;
    case 731u: goto L_08A57300;
    case 732u: goto L_08A57340;
    case 733u: goto L_08A5735C;
    case 734u: goto L_08A57374;
    case 735u: goto L_08A57394;
    case 736u: goto L_08A573A0;
    case 737u: goto L_08A573B4;
    case 738u: goto L_08A573BC;
    case 739u: goto L_08A573E8;
    case 740u: goto L_08A573F4;
    case 741u: goto L_08A57400;
    case 742u: goto L_08A57418;
    case 743u: goto L_08A57430;
    case 744u: goto L_08A57448;
    case 745u: goto L_08A57454;
    case 746u: goto L_08A5746C;
    case 747u: goto L_08A57474;
    case 748u: goto L_08A57480;
    case 749u: goto L_08A5748C;
    case 750u: goto L_08A57490;
    case 751u: goto L_08A5749C;
    case 752u: goto L_08A574A8;
    case 753u: goto L_08A574B4;
    case 754u: goto L_08A574B8;
    case 755u: goto L_08A574C8;
    case 756u: goto L_08A574D4;
    case 757u: goto L_08A574E0;
    case 758u: goto L_08A574E4;
    case 759u: goto L_08A574EC;
    case 760u: goto L_08A574F8;
    case 761u: goto L_08A57504;
    case 762u: goto L_08A57510;
    case 763u: goto L_08A57564;
    case 764u: goto L_08A57570;
    case 765u: goto L_08A575AC;
    case 766u: goto L_08A575C0;
    case 767u: goto L_08A575CC;
    case 768u: goto L_08A575DC;
    case 769u: goto L_08A575F0;
    case 770u: goto L_08A575F8;
    case 771u: goto L_08A5760C;
    case 772u: goto L_08A5762C;
    case 773u: goto L_08A57638;
    case 774u: goto L_08A57648;
    case 775u: goto L_08A57668;
    case 776u: goto L_08A57670;
    case 777u: goto L_08A57680;
    case 778u: goto L_08A57690;
    case 779u: goto L_08A57694;
    case 780u: goto L_08A5769C;
    case 781u: goto L_08A576A4;
    case 782u: goto L_08A576BC;
    case 783u: goto L_08A576C0;
    case 784u: goto L_08A576C4;
    case 785u: goto L_08A576DC;
    case 786u: goto L_08A576E4;
    case 787u: goto L_08A576E8;
    case 788u: goto L_08A576FC;
    case 789u: goto L_08A5770C;
    case 790u: goto L_08A57720;
    case 791u: goto L_08A57730;
    case 792u: goto L_08A5774C;
    case 793u: goto L_08A57760;
    case 794u: goto L_08A57770;
    case 795u: goto L_08A57780;
    case 796u: goto L_08A57790;
    case 797u: goto L_08A577A4;
    case 798u: goto L_08A577AC;
    case 799u: goto L_08A577B4;
    case 800u: goto L_08A577C0;
    case 801u: goto L_08A577CC;
    case 802u: goto L_08A577D4;
    case 803u: goto L_08A577DC;
    case 804u: goto L_08A577E8;
    case 805u: goto L_08A577F4;
    case 806u: goto L_08A57814;
    case 807u: goto L_08A57824;
    case 808u: goto L_08A57830;
    case 809u: goto L_08A57844;
    case 810u: goto L_08A57854;
    case 811u: goto L_08A57860;
    case 812u: goto L_08A5789C;
    case 813u: goto L_08A578BC;
    case 814u: goto L_08A578CC;
    case 815u: goto L_08A578E0;
    case 816u: goto L_08A578E8;
    case 817u: goto L_08A57904;
    case 818u: goto L_08A57910;
    case 819u: goto L_08A5791C;
    case 820u: goto L_08A57930;
    case 821u: goto L_08A5794C;
    case 822u: goto L_08A57954;
    case 823u: goto L_08A57960;
    case 824u: goto L_08A5796C;
    case 825u: goto L_08A57970;
    case 826u: goto L_08A57988;
    case 827u: goto L_08A57994;
    case 828u: goto L_08A579BC;
    case 829u: goto L_08A579D0;
    case 830u: goto L_08A579DC;
    case 831u: goto L_08A579EC;
    case 832u: goto L_08A57A00;
    case 833u: goto L_08A57A08;
    case 834u: goto L_08A57A1C;
    case 835u: goto L_08A57A30;
    case 836u: goto L_08A57A38;
    case 837u: goto L_08A57A40;
    case 838u: goto L_08A57A48;
    case 839u: goto L_08A57A54;
    case 840u: goto L_08A57A5C;
    case 841u: goto L_08A57A64;
    case 842u: goto L_08A57A70;
    case 843u: goto L_08A57A7C;
    case 844u: goto L_08A57A98;
    case 845u: goto L_08A57AA8;
    case 846u: goto L_08A57AC4;
    case 847u: goto L_08A57AD4;
    case 848u: goto L_08A57AF0;
    case 849u: goto L_08A57B00;
    case 850u: goto L_08A57B08;
    case 851u: goto L_08A57B44;
    case 852u: goto L_08A57B54;
    case 853u: goto L_08A57BB4;
    case 854u: goto L_08A57BC4;
    case 855u: goto L_08A57BCC;
    case 856u: goto L_08A57BD4;
    case 857u: goto L_08A57BDC;
    case 858u: goto L_08A57BE4;
    case 859u: goto L_08A57BEC;
    case 860u: goto L_08A57BF4;
    case 861u: goto L_08A57C10;
    case 862u: goto L_08A57C20;
    case 863u: goto L_08A57C34;
    case 864u: goto L_08A57C3C;
    case 865u: goto L_08A57C5C;
    case 866u: goto L_08A57C68;
    case 867u: goto L_08A57C80;
    case 868u: goto L_08A57C84;
    case 869u: goto L_08A57C8C;
    case 870u: goto L_08A57CA0;
    case 871u: goto L_08A57CA4;
    case 872u: goto L_08A57CC8;
    case 873u: goto L_08A57CD0;
    case 874u: goto L_08A57CF0;
    case 875u: goto L_08A57CFC;
    case 876u: goto L_08A57D14;
    case 877u: goto L_08A57D18;
    case 878u: goto L_08A57D20;
    case 879u: goto L_08A57D40;
    case 880u: goto L_08A57D60;
    case 881u: goto L_08A57D68;
    case 882u: goto L_08A57D84;
    case 883u: goto L_08A57D94;
    case 884u: goto L_08A57DB0;
    case 885u: goto L_08A57DC0;
    case 886u: goto L_08A57DDC;
    case 887u: goto L_08A57DEC;
    case 888u: goto L_08A57E08;
    case 889u: goto L_08A57E18;
    case 890u: goto L_08A57E34;
    case 891u: goto L_08A57E44;
    case 892u: goto L_08A57E54;
    case 893u: goto L_08A57E5C;
    case 894u: goto L_08A57E74;
    case 895u: goto L_08A57E7C;
    case 896u: goto L_08A57E84;
    case 897u: goto L_08A57E9C;
    case 898u: goto L_08A57EBC;
    case 899u: goto L_08A57EDC;
    case 900u: goto L_08A57F04;
    case 901u: goto L_08A57F20;
    case 902u: goto L_08A57F34;
    case 903u: goto L_08A57F4C;
    case 904u: goto L_08A57F64;
    case 905u: goto L_08A57F80;
    case 906u: goto L_08A57F9C;
    case 907u: goto L_08A57FBC;
    case 908u: goto L_08A57FD4;
    case 909u: goto L_08A57FDC;
    case 910u: goto L_08A57FE4;
    case 911u: goto L_08A57FFC;
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
L_08A54004:
    aot_gpr_31 = (0x08A5400Cu);
    aot_gpr_4 = (0u | 0u);
    ctx.pc = 0x08B7359Cu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A5400C:
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-6096), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-6176)));
    aot_gpr_5 = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-6172)));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(4), aot_gpr_6);
    goto L_08A54024;
L_08A54024:
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A54034:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-64));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    { const std::uint32_t aot_run_words[3]{ctx.gpr[17], ctx.gpr[18], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(52), aot_run_words); }
    aot_gpr_4 = (0u << 4u);
    aot_gpr_5 = (0u | 1u);
    aot_gpr_6 = (0u + aot_gpr_4);
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (aot_gpr_6 << 3u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), 0u);
    aot_gpr_6 = (0u | 5u);
    aot_gpr_4 = (ctx.gpr[16] + aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(2100), aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(92), aot_gpr_6);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(2112));
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), aot_gpr_4);
    aot_gpr_4 = (0u | 0u);
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 7 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08A540EC;
      }
      goto L_08A54090;
    }
L_08A54090:
    aot_gpr_5 = (0u | 255u);
    goto L_08A54094;
L_08A54094:
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(aot_gpr_5));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr_6 = (aot_gpr_4 << 3u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_6);
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_5 = (ctx.gpr[7] + aot_gpr_5);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(16))))));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(18))))));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(10));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(20))))));
    aot_mem.aot_direct_store16(aot_gpr_5 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_6));
    aot_mem.aot_direct_store16(aot_gpr_5 + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[7]));
    aot_mem.aot_direct_store16(aot_gpr_5 + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[8]));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 7 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_5 = (0u | 255u);
      if (branch_taken) {
          goto L_08A54094;
      }
      goto L_08A540EC;
    }
L_08A540EC:
    ctx.gpr[17] = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr_31 = (0x08A540F8u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    goto L_08A54F5C;
L_08A540F8:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_2 + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_2 + static_cast<std::uint32_t>(2))))));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_2 + static_cast<std::uint32_t>(4))))));
    aot_mem.aot_direct_store16(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_4));
    aot_mem.aot_direct_store16(ctx.gpr[17] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(aot_gpr_5));
    aot_mem.aot_direct_store16(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(aot_gpr_6));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr_6 = (aot_gpr_4 << 3u);
    aot_gpr_6 = (aot_gpr_4 + aot_gpr_6);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    ctx.gpr[17] = (aot_gpr_4 + static_cast<std::uint32_t>(10));
    aot_gpr_31 = (0x08A54134u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    goto L_08A54F5C;
L_08A54134:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_2 + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_2 + static_cast<std::uint32_t>(2))))));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_2 + static_cast<std::uint32_t>(4))))));
    aot_mem.aot_direct_store16(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_4));
    aot_mem.aot_direct_store16(ctx.gpr[17] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(aot_gpr_5));
    aot_mem.aot_direct_store16(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(aot_gpr_6));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08A5415Cu);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(125));
    goto L_08A56758;
L_08A5415C:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(18))))));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08A541A8;
      }
      goto L_08A54168;
    }
L_08A54168:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(16))))));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08A541A8;
      }
      goto L_08A54174;
    }
L_08A54174:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr_5 = (2213u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(22960));
    { const bool branch_taken = aot_gpr_5 != aot_gpr_4;
      if (branch_taken) {
          goto L_08A541A8;
      }
      goto L_08A54188;
    }
L_08A54188:
    aot_gpr_31 = (0x08A54190u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    goto L_08A552D8;
L_08A54190:
    aot_gpr_31 = (0x08A54198u);
    aot_gpr_4 = (0u | 13620u);
    ctx.pc = 0x08B72F54u;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A54198:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_2) < 0;
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), aot_gpr_2);
      if (branch_taken) {
          goto L_08A541B8;
      }
      goto L_08A541A0;
    }
L_08A541A0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08A5420C;
      }
      goto L_08A541A8;
    }
L_08A541A8:
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3164), static_cast<std::uint8_t>(aot_gpr_4));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08A54340;
      }
      goto L_08A541B8;
    }
L_08A541B8:
    aot_gpr_4 = (2232u << 16u);
    ctx.gpr[18] = (aot_gpr_4 + static_cast<std::uint32_t>(7160));
    ctx.gpr[17] = (aot_gpr_29 + static_cast<std::uint32_t>(24));
    aot_gpr_31 = (0x08A541CCu);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58974, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A541CCu) goto L_08A541CC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A541CC:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08A541DCu);
    aot_gpr_6 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 283u, 0x08B653C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A541DCu) goto L_08A541DC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A541DC:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08A541E8u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    goto L_08A564A4;
L_08A541E8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(28)));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(5824));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_4 = (2236u << 16u);
      if (branch_taken) {
          goto L_08A54204;
      }
      goto L_08A541F8;
    }
L_08A541F8:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(28)));
    aot_gpr_31 = (0x08A54204u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(25856));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE8F4, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A54204u) goto L_08A54204;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A54204:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08A54340;
      }
      goto L_08A5420C;
    }
L_08A5420C:
    aot_gpr_6 = (2213u << 16u);
    ctx.gpr[8] = (aot_gpr_6 + static_cast<std::uint32_t>(15116));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[8] = (15u << 16u);
    ctx.gpr[9] = (31u << 16u);
    ctx.gpr[11] = (8u << 16u);
    aot_gpr_4 = (0u | 1u);
    aot_gpr_5 = (0u | 6u);
    aot_gpr_6 = (0u | 1u);
    ctx.gpr[7] = (0u | 4096u);
    ctx.gpr[10] = (0u | 3u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(16960));
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(-31616));
    aot_gpr_31 = (0x08A54248u);
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(-24288));
    ctx.pc = 0x08B72F84u;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A54248:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_2) >= 0;
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), aot_gpr_2);
      if (branch_taken) {
          goto L_08A542AC;
      }
      goto L_08A54250;
    }
L_08A54250:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    ctx.gpr[17] = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), aot_gpr_4);
    aot_gpr_4 = (2232u << 16u);
    ctx.gpr[18] = (aot_gpr_4 + static_cast<std::uint32_t>(7196));
    aot_gpr_31 = (0x08A5426Cu);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58974, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5426Cu) goto L_08A5426C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A5426C:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08A5427Cu);
    aot_gpr_6 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 283u, 0x08B653C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5427Cu) goto L_08A5427C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A5427C:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08A54288u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    goto L_08A564A4;
L_08A54288:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(36)));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(5824));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_4 = (2236u << 16u);
      if (branch_taken) {
          goto L_08A542A4;
      }
      goto L_08A54298;
    }
L_08A54298:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(36)));
    aot_gpr_31 = (0x08A542A4u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(25856));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE8F4, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A542A4u) goto L_08A542A4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A542A4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08A54340;
      }
      goto L_08A542AC;
    }
L_08A542AC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    ctx.gpr[10] = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr_5 = (0u | 16u);
    aot_gpr_6 = (0u | 8192u);
    ctx.gpr[7] = (0u | 16u);
    ctx.gpr[8] = (0u | 8192u);
    aot_gpr_31 = (0x08A542CCu);
    ctx.gpr[9] = (0u | 136u);
    ctx.pc = 0x08B72F74u;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A542CC:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_2) >= 0;
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), aot_gpr_2);
      if (branch_taken) {
          goto L_08A54328;
      }
      goto L_08A542D4;
    }
L_08A542D4:
    aot_gpr_4 = (2232u << 16u);
    ctx.gpr[18] = (aot_gpr_4 + static_cast<std::uint32_t>(7236));
    ctx.gpr[17] = (aot_gpr_29 + static_cast<std::uint32_t>(40));
    aot_gpr_31 = (0x08A542E8u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58974, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A542E8u) goto L_08A542E8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A542E8:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08A542F8u);
    aot_gpr_6 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 283u, 0x08B653C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A542F8u) goto L_08A542F8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A542F8:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08A54304u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    goto L_08A564A4;
L_08A54304:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(44)));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(5824));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_4 = (2236u << 16u);
      if (branch_taken) {
          goto L_08A54320;
      }
      goto L_08A54314;
    }
L_08A54314:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(44)));
    aot_gpr_31 = (0x08A54320u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(25856));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE8F4, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A54320u) goto L_08A54320;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A54320:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08A54340;
      }
      goto L_08A54328;
    }
L_08A54328:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-6152)));
    aot_gpr_5 = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-6148)));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(4), aot_gpr_6);
    aot_gpr_2 = (0u | 1u);
    goto L_08A54340;
L_08A54340:
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(48), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A54358:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    { const std::uint32_t aot_run_words[3]{ctx.gpr[17], ctx.gpr[18], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_run_words); }
    ctx.gpr[18] = (0u | 0u);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[18]) < 7 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08A54424;
      }
      goto L_08A54380;
    }
L_08A54380:
    aot_gpr_4 = (ctx.gpr[18] << 3u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr_4 = (ctx.gpr[18] + aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[18] + aot_gpr_4);
    ctx.gpr[17] = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(10));
      if (branch_taken) {
          goto L_08A543A8;
      }
      goto L_08A543A0;
    }
L_08A543A0:
    aot_gpr_31 = (0x08A543A8u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 452u, 0x08B65D8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A543A8u) goto L_08A543A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A543A8:
    aot_gpr_31 = (0x08A543B0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    goto L_08A54F5C;
L_08A543B0:
    aot_gpr_5 = (aot_gpr_2 | 0u);
    aot_gpr_6 = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_direct_load16(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[7] != aot_gpr_6;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_08A543E8;
      }
      goto L_08A543C4;
    }
L_08A543C4:
    aot_gpr_6 = (aot_mem.aot_direct_load16(ctx.gpr[17] + static_cast<std::uint32_t>(2)));
    ctx.gpr[7] = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(2)));
    if (aot_gpr_6 != ctx.gpr[7]) {
    aot_gpr_4 = (aot_gpr_4 & 255u);
        goto L_08A543EC;
    }
    goto L_08A543D4;
L_08A543D4:
    aot_gpr_6 = (aot_mem.aot_direct_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_6 != aot_gpr_5;
    aot_gpr_4 = (aot_gpr_4 & 255u);
      if (branch_taken) {
          goto L_08A543EC;
      }
      goto L_08A543E4;
    }
L_08A543E4:
    aot_gpr_4 = (0u | 1u);
    goto L_08A543E8;
L_08A543E8:
    aot_gpr_4 = (aot_gpr_4 & 255u);
    goto L_08A543EC;
L_08A543EC:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08A54414;
      }
      goto L_08A543F4;
    }
L_08A543F4:
    aot_gpr_4 = (ctx.gpr[18] << 3u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr_4 = (ctx.gpr[18] + aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[18] + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(18)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-7072), aot_gpr_4);
      if (branch_taken) {
          goto L_08A54424;
      }
      goto L_08A54414;
    }
L_08A54414:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[18]) < 7 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08A54380;
      }
      goto L_08A54424;
    }
L_08A54424:
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), 0u);
    aot_gpr_31 = (0x08A54430u);
    ctx.pc = 0x08B72FB4u;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A54430:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_2) >= 0;
      if (branch_taken) {
          goto L_08A54488;
      }
      goto L_08A54438;
    }
L_08A54438:
    aot_gpr_4 = (2232u << 16u);
    ctx.gpr[17] = (aot_gpr_4 + static_cast<std::uint32_t>(7268));
    aot_gpr_31 = (0x08A54448u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58974, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A54448u) goto L_08A54448;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A54448:
    aot_gpr_4 = (aot_gpr_29 | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08A54458u);
    aot_gpr_6 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 283u, 0x08B653C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A54458u) goto L_08A54458;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A54458:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08A54464u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    goto L_08A564A4;
L_08A54464:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(5824));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_4 = (2236u << 16u);
      if (branch_taken) {
          goto L_08A54480;
      }
      goto L_08A54474;
    }
L_08A54474:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_gpr_31 = (0x08A54480u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(25856));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE8F4, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A54480u) goto L_08A54480;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A54480:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08A5449C;
      }
      goto L_08A54488;
    }
L_08A54488:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-6168)));
    aot_gpr_5 = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-6164)));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(4), aot_gpr_6);
    goto L_08A5449C;
L_08A5449C:
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A544B4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    { const std::uint32_t aot_run_words[3]{ctx.gpr[16], ctx.gpr[17], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_run_words); }
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_gpr_4 = (ctx.gpr[16] + static_cast<std::uint32_t>(92));
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x08A544D8u);
    aot_gpr_6 = (0u | 1064u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B5814C, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[9], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A544D8u) goto L_08A544D8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A544D8:
    aot_gpr_4 = (ctx.gpr[16] + static_cast<std::uint32_t>(2100));
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x08A544E8u);
    aot_gpr_6 = (0u | 1064u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B5814C, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[9], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A544E8u) goto L_08A544E8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A544E8:
    aot_gpr_4 = (ctx.gpr[16] + static_cast<std::uint32_t>(1156));
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x08A544F8u);
    aot_gpr_6 = (0u | 938u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B5814C, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[9], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A544F8u) goto L_08A544F8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A544F8:
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), 0u);
    aot_gpr_31 = (0x08A54504u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    goto L_08A54ED4;
L_08A54504:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08A54584;
      }
      goto L_08A5450C;
    }
L_08A5450C:
    aot_gpr_31 = (0x08A54514u);
    ctx.pc = 0x08B72FB4u;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A54514:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_2) >= 0;
      if (branch_taken) {
          goto L_08A5456C;
      }
      goto L_08A5451C;
    }
L_08A5451C:
    aot_gpr_4 = (2232u << 16u);
    ctx.gpr[17] = (aot_gpr_4 + static_cast<std::uint32_t>(7300));
    aot_gpr_31 = (0x08A5452Cu);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58974, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5452Cu) goto L_08A5452C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A5452C:
    aot_gpr_4 = (aot_gpr_29 | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08A5453Cu);
    aot_gpr_6 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 283u, 0x08B653C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5453Cu) goto L_08A5453C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A5453C:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08A54548u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    goto L_08A564A4;
L_08A54548:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(5824));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_4 = (2236u << 16u);
      if (branch_taken) {
          goto L_08A54564;
      }
      goto L_08A54558;
    }
L_08A54558:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_gpr_31 = (0x08A54564u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(25856));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE8F4, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A54564u) goto L_08A54564;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A54564:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08A54598;
      }
      goto L_08A5456C;
    }
L_08A5456C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-6160)));
    aot_gpr_5 = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-6156)));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(4), aot_gpr_6);
      if (branch_taken) {
          goto L_08A54598;
      }
      goto L_08A54584;
    }
L_08A54584:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-6176)));
    aot_gpr_5 = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-6172)));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(4), aot_gpr_6);
    goto L_08A54598;
L_08A54598:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A545AC:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_5) >= 0;
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(92));
      if (branch_taken) {
          goto L_08A545B8;
      }
      goto L_08A545B4;
    }
L_08A545B4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(36)));
    goto L_08A545B8;
L_08A545B8:
    aot_gpr_4 = (aot_gpr_5 << 4u);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_5 = (aot_gpr_5 << 3u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_6 = (aot_gpr_6 + aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08A545E0;
      }
      goto L_08A545D8;
    }
L_08A545D8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (aot_gpr_6 + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08A545E4;
      }
      goto L_08A545E0;
    }
L_08A545E0:
    aot_gpr_2 = (0u | 0u);
    goto L_08A545E4;
L_08A545E4:
    jump_target = aot_gpr_31;
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A545EC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    { const std::uint32_t aot_run_words[3]{ctx.gpr[18], ctx.gpr[19], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words); }
    aot_gpr_31 = (0x08A54610u);
    ctx.gpr[16] = (aot_gpr_5 | 0u);
    goto L_08A56714;
L_08A54610:
    aot_gpr_4 = (ctx.gpr[16] << 4u);
    aot_gpr_5 = (ctx.gpr[16] + aot_gpr_4);
    aot_gpr_5 = (aot_gpr_5 << 3u);
    ctx.gpr[19] = (aot_gpr_4 + aot_gpr_5);
    ctx.gpr[19] = (ctx.gpr[17] + ctx.gpr[19]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(92)));
    aot_gpr_5 = (0u | 2u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08A546AC;
      }
      goto L_08A54634;
    }
L_08A54634:
    ctx.gpr[18] = (ctx.gpr[19] + static_cast<std::uint32_t>(2104));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(84)));
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_6 = (0u | 0u);
    aot_gpr_31 = (0x08A5464Cu);
    ctx.gpr[7] = (0u | 0u);
    ctx.pc = 0x08B72F64u;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A5464C:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_2) < 0;
      if (branch_taken) {
          goto L_08A546AC;
      }
      goto L_08A54654;
    }
L_08A54654:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[18] + static_cast<std::uint32_t>(1))))));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[18] + static_cast<std::uint32_t>(2))))));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[18] + static_cast<std::uint32_t>(3))))));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[18] + static_cast<std::uint32_t>(4))))));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(aot_gpr_6));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[18] + static_cast<std::uint32_t>(5))))));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(aot_gpr_6));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(2))))));
    aot_gpr_5 = (ctx.gpr[17] + static_cast<std::uint32_t>(28));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(4))))));
    aot_mem.aot_direct_store16(aot_gpr_5 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_4));
    aot_mem.aot_direct_store16(aot_gpr_5 + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(aot_gpr_6));
    aot_mem.aot_direct_store16(aot_gpr_5 + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[7]));
    aot_gpr_4 = (0u | 4u);
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(2100), aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    goto L_08A546AC;
L_08A546AC:
    aot_gpr_31 = (0x08A546B4u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    goto L_08A56738;
L_08A546B4:
    { std::uint32_t aot_run_words[5]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_run_words);
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
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A546D0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(36)));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = aot_gpr_6 == aot_gpr_5;
      if (branch_taken) {
          goto L_08A5471C;
      }
      goto L_08A546E8;
    }
L_08A546E8:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_31 = (0x08A546F4u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    goto L_08A56418;
L_08A546F4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(3164)));
    { const bool branch_taken = aot_gpr_6 != 0u;
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A54718;
      }
      goto L_08A54704;
    }
L_08A54704:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-6144)));
    ctx.gpr[7] = (aot_gpr_4 + static_cast<std::uint32_t>(16));
    ctx.gpr[8] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-6140)));
    aot_mem.aot_direct_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_mem.aot_direct_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), ctx.gpr[8]);
    goto L_08A54718;
L_08A54718:
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(36), aot_gpr_5);
    goto L_08A5471C;
L_08A5471C:
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(3164)));
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08A5472C;
      }
      goto L_08A54728;
    }
L_08A54728:
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(3164), static_cast<std::uint8_t>(0u));
    goto L_08A5472C;
L_08A5472C:
    aot_gpr_31 = (0x08A54734u);
    goto L_08A56210;
L_08A54734:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A54740:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_6 | 0u);
    ctx.gpr[16] = (aot_gpr_5 | 0u);
    { const std::uint32_t aot_run_words[4]{ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_run_words); }
    aot_gpr_31 = (0x08A5476Cu);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 259u, 0x08B65214u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5476Cu) goto L_08A5476C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A5476C:
    ctx.gpr[18] = (aot_gpr_2 | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) > 0;
      if (branch_taken) {
          goto L_08A547E4;
      }
      goto L_08A54778;
    }
L_08A54778:
    ctx.gpr[17] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.gpr[19] = (ctx.gpr[28] + static_cast<std::uint32_t>(-6092));
      if (branch_taken) {
          goto L_08A547AC;
      }
      goto L_08A54784;
    }
L_08A54784:
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_31 = (0x08A54790u);
    aot_gpr_4 = (0u | 2452u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A54790u) goto L_08A54790;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A54790:
    ctx.gpr[18] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
      if (branch_taken) {
          goto L_08A547A8;
      }
      goto L_08A5479C;
    }
L_08A5479C:
    aot_gpr_31 = (0x08A547A4u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A547A4u) goto L_08A547A4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A547A4:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    goto L_08A547A8;
L_08A547A8:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    goto L_08A547AC;
L_08A547AC:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08A547B8u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A547B8u) goto L_08A547B8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A547B8:
    aot_gpr_31 = (0x08A547C0u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 309u, 0x089F5AC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A547C0u) goto L_08A547C0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A547C0:
    ctx.gpr[17] = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x08A547CCu);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58974, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A547CCu) goto L_08A547CC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A547CC:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08A547DCu);
    aot_gpr_6 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 283u, 0x08B653C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A547DCu) goto L_08A547DC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A547DC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08A549E0;
      }
      goto L_08A547E4;
    }
L_08A547E4:
    aot_gpr_4 = (ctx.gpr[18] + static_cast<std::uint32_t>(2));
    ctx.gpr[19] = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08A547F4u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_4);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 468u, 0x08ABE29Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A547F4u) goto L_08A547F4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A547F4:
    ctx.gpr[17] = (aot_gpr_2 | 0u);
    aot_gpr_6 = (ctx.gpr[18] + ctx.gpr[18]);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08A5480Cu);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B5814C, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[9], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5480Cu) goto L_08A5480C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A5480C:
    aot_gpr_5 = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_5);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08A54820u);
    aot_gpr_6 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 237u, 0x08B65088u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A54820u) goto L_08A54820;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A54820:
    ctx.gpr[18] = (aot_gpr_2 | 0u);
    aot_gpr_4 = (0u | 0u);
    aot_gpr_5 = (0u | 0u);
    ctx.gpr[7] = (0u | 32u);
    aot_gpr_6 = (ctx.gpr[17] | 0u);
    goto L_08A54834;
L_08A54834:
    ctx.gpr[8] = (0u | 8u);
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    if (ctx.gpr[9] != 0u) {
    ctx.gpr[8] = (ctx.gpr[18] | 0u);
        goto L_08A54844;
    }
    goto L_08A54844;
L_08A54844:
    ctx.gpr[8] = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
      if (branch_taken) {
          goto L_08A54878;
      }
      goto L_08A54850;
    }
L_08A54850:
    ctx.gpr[8] = (aot_mem.aot_direct_load16(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[7];
      if (branch_taken) {
          goto L_08A5486C;
      }
      goto L_08A5485C;
    }
L_08A5485C:
    { const bool branch_taken = ctx.gpr[8] == 0u;
      if (branch_taken) {
          goto L_08A5486C;
      }
      goto L_08A54864;
    }
L_08A54864:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (0u | 1u);
      if (branch_taken) {
          goto L_08A54878;
      }
      goto L_08A5486C;
    }
L_08A5486C:
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08A54834;
      }
      goto L_08A54878;
    }
L_08A54878:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08A548F4;
      }
      goto L_08A54880;
    }
L_08A54880:
    aot_gpr_31 = (0x08A54888u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE2E4, 174u, 472u, 0x08ABE2E4u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 472u, 0x08ABE2E4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A54888u) goto L_08A54888;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A54888:
    ctx.gpr[18] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    { const bool branch_taken = ctx.gpr[18] != 0u;
    ctx.gpr[17] = (ctx.gpr[28] + static_cast<std::uint32_t>(-6092));
      if (branch_taken) {
          goto L_08A548BC;
      }
      goto L_08A54894;
    }
L_08A54894:
    ctx.gpr[18] = (0u | 0u);
    aot_gpr_31 = (0x08A548A0u);
    aot_gpr_4 = (0u | 2452u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A548A0u) goto L_08A548A0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A548A0:
    ctx.gpr[19] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
      if (branch_taken) {
          goto L_08A548B8;
      }
      goto L_08A548AC;
    }
L_08A548AC:
    aot_gpr_31 = (0x08A548B4u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A548B4u) goto L_08A548B4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A548B4:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_08A548B8;
L_08A548B8:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[18]);
    goto L_08A548BC;
L_08A548BC:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08A548C8u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A548C8u) goto L_08A548C8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A548C8:
    aot_gpr_31 = (0x08A548D0u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 309u, 0x089F5AC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A548D0u) goto L_08A548D0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A548D0:
    ctx.gpr[17] = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x08A548DCu);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58974, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A548DCu) goto L_08A548DC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A548DC:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08A548ECu);
    aot_gpr_6 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 283u, 0x08B653C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A548ECu) goto L_08A548EC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A548EC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08A549E0;
      }
      goto L_08A548F4;
    }
L_08A548F4:
    aot_gpr_4 = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr_31 = (0x08A54900u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_4);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 468u, 0x08ABE29Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A54900u) goto L_08A54900;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A54900:
    ctx.gpr[19] = (aot_gpr_2 | 0u);
    aot_gpr_6 = (ctx.gpr[18] + ctx.gpr[18]);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(2));
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x08A54918u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B5814C, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[9], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A54918u) goto L_08A54918;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A54918:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08A54928u);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 328u, 0x089F5BD4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A54928u) goto L_08A54928;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A54928:
    aot_gpr_31 = (0x08A54930u);
    aot_gpr_4 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C498, 194u, 60u, 0x08B0C498u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 60u, 0x08B0C498u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A54930u) goto L_08A54930;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A54930:
    aot_gpr_31 = (0x08A54938u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0194_entry, 194u, 96u, 0x08B0C748u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A54938u) goto L_08A54938;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A54938:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x08A54944u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 283u, 0x08AFD8D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A54944u) goto L_08A54944;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A54944:
    aot_gpr_31 = (0x08A5494Cu);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 332u, 0x089F5C38u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5494Cu) goto L_08A5494C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A5494C:
    aot_gpr_31 = (0x08A54954u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 309u, 0x089F5AC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A54954u) goto L_08A54954;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A54954:
    ctx.gpr[20] = (aot_gpr_2 | 0u);
    ctx.gpr[18] = (aot_gpr_29 + static_cast<std::uint32_t>(4));
    aot_gpr_31 = (0x08A54964u);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58974, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A54964u) goto L_08A54964;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A54964:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x08A54974u);
    aot_gpr_6 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 283u, 0x08B653C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A54974u) goto L_08A54974;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A54974:
    aot_gpr_31 = (0x08A5497Cu);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE2E4, 174u, 472u, 0x08ABE2E4u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 472u, 0x08ABE2E4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5497Cu) goto L_08A5497C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A5497C:
    aot_gpr_31 = (0x08A54984u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE2E4, 174u, 472u, 0x08ABE2E4u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 472u, 0x08ABE2E4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A54984u) goto L_08A54984;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A54984:
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (ctx.gpr[17] < static_cast<std::uint32_t>(9) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08A549B4;
      }
      goto L_08A54994;
    }
L_08A54994:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (0u | 8u);
    aot_gpr_31 = (0x08A549A4u);
    aot_gpr_6 = (0u | 32u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 272u, 0x08B652B8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A549A4u) goto L_08A549A4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A549A4:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-6084));
    aot_gpr_31 = (0x08A549B0u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 737u, 0x08B670D0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A549B0u) goto L_08A549B0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A549B0:
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    goto L_08A549B4;
L_08A549B4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08A549C4u);
    aot_gpr_6 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 283u, 0x08B653C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A549C4u) goto L_08A549C4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A549C4:
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(5824));
    { const bool branch_taken = ctx.gpr[16] == aot_gpr_4;
    aot_gpr_4 = (2236u << 16u);
      if (branch_taken) {
          goto L_08A549E0;
      }
      goto L_08A549D4;
    }
L_08A549D4:
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08A549E0u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(25856));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE8F4, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A549E0u) goto L_08A549E0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A549E0:
    { std::uint32_t aot_run_words[6]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      ctx.gpr[20] = aot_run_words[4];
      aot_gpr_31 = aot_run_words[5];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A54A00:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_5 | 0u);
    { const std::uint32_t aot_run_words[3]{ctx.gpr[17], ctx.gpr[18], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_run_words); }
    ctx.gpr[7] = (aot_gpr_4 | 0u);
    aot_gpr_5 = (0u | 0u);
    ctx.gpr[11] = (aot_mem.aot_direct_load16(aot_gpr_6 + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (ctx.gpr[7] + static_cast<std::uint32_t>(1156));
    goto L_08A54A28;
L_08A54A28:
    ctx.gpr[9] = (ctx.gpr[8] | 0u);
    aot_gpr_2 = (aot_mem.aot_direct_load16(ctx.gpr[9] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr_2 != ctx.gpr[11];
    ctx.gpr[10] = (0u | 0u);
      if (branch_taken) {
          goto L_08A54A5C;
      }
      goto L_08A54A38;
    }
L_08A54A38:
    aot_gpr_2 = (aot_mem.aot_direct_load16(ctx.gpr[9] + static_cast<std::uint32_t>(2)));
    ctx.gpr[3] = (aot_mem.aot_direct_load16(aot_gpr_6 + static_cast<std::uint32_t>(2)));
    if (aot_gpr_2 != ctx.gpr[3]) {
    ctx.gpr[9] = (ctx.gpr[10] & 255u);
        goto L_08A54A60;
    }
    goto L_08A54A48;
L_08A54A48:
    ctx.gpr[9] = (aot_mem.aot_direct_load16(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    aot_gpr_2 = (aot_mem.aot_direct_load16(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[9] != aot_gpr_2;
    ctx.gpr[9] = (ctx.gpr[10] & 255u);
      if (branch_taken) {
          goto L_08A54A60;
      }
      goto L_08A54A58;
    }
L_08A54A58:
    ctx.gpr[10] = (0u | 1u);
    goto L_08A54A5C;
L_08A54A5C:
    ctx.gpr[9] = (ctx.gpr[10] & 255u);
    goto L_08A54A60;
L_08A54A60:
    { const bool branch_taken = ctx.gpr[9] != 0u;
      if (branch_taken) {
          goto L_08A54A84;
      }
      goto L_08A54A68;
    }
L_08A54A68:
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(134));
    ctx.gpr[9] = (static_cast<std::int32_t>(aot_gpr_5) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(134));
      if (branch_taken) {
          goto L_08A54A28;
      }
      goto L_08A54A7C;
    }
L_08A54A7C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08A54A98;
      }
      goto L_08A54A84;
    }
L_08A54A84:
    aot_gpr_6 = (ctx.gpr[7] + static_cast<std::uint32_t>(1162));
    aot_gpr_31 = (0x08A54A90u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    goto L_08A54740;
L_08A54A90:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08A54AFC;
      }
      goto L_08A54A98;
    }
L_08A54A98:
    ctx.gpr[17] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    { const bool branch_taken = ctx.gpr[17] != 0u;
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-6092));
      if (branch_taken) {
          goto L_08A54AD0;
      }
      goto L_08A54AA4;
    }
L_08A54AA4:
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_31 = (0x08A54AB0u);
    aot_gpr_4 = (0u | 2452u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A54AB0u) goto L_08A54AB0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A54AB0:
    ctx.gpr[18] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
      if (branch_taken) {
          goto L_08A54AC8;
      }
      goto L_08A54ABC;
    }
L_08A54ABC:
    aot_gpr_31 = (0x08A54AC4u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A54AC4u) goto L_08A54AC4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A54AC4:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    goto L_08A54AC8;
L_08A54AC8:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-6092));
    goto L_08A54AD0;
L_08A54AD0:
    aot_gpr_31 = (0x08A54AD8u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A54AD8u) goto L_08A54AD8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A54AD8:
    aot_gpr_31 = (0x08A54AE0u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 309u, 0x089F5AC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A54AE0u) goto L_08A54AE0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A54AE0:
    ctx.gpr[17] = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x08A54AECu);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58974, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A54AECu) goto L_08A54AEC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A54AEC:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08A54AFCu);
    aot_gpr_6 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 283u, 0x08B653C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A54AFCu) goto L_08A54AFC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A54AFC:
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
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
L_08A54B14:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-64));
    { const std::uint32_t aot_run_words[3]{ctx.gpr[16], ctx.gpr[17], ctx.gpr[18]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_run_words); }
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    ctx.gpr[17] = (aot_gpr_5 | 0u);
    ctx.gpr[18] = (aot_gpr_6 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(48), aot_gpr_31);
    aot_gpr_31 = (0x08A54B40u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20934, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A54B40u) goto L_08A54B40;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A54B40:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-6068)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-6072)));
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x08A54B54u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B60E5C, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, ctx.gpr[3], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[9], ctx.gpr[10], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A54B54u) goto L_08A54B54;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A54B54:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    aot_gpr_4 = (aot_gpr_2 >> 31u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    aot_gpr_4 = (ctx.gpr[1] | aot_gpr_4);
    ctx.gpr[19] = (aot_gpr_4 | 0u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    aot_gpr_4 = (0u | 0u);
    aot_gpr_6 = (aot_gpr_5 + static_cast<std::uint32_t>(1156));
    goto L_08A54B74;
L_08A54B74:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(1162))))));
    { const bool branch_taken = ctx.gpr[7] != 0u;
      if (branch_taken) {
          goto L_08A54B88;
      }
      goto L_08A54B80;
    }
L_08A54B80:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08A54BCC;
      }
      goto L_08A54B88;
    }
L_08A54B88:
    ctx.gpr[7] = (aot_gpr_6 | 0u);
    ctx.gpr[9] = (aot_mem.aot_direct_load16(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.gpr[10] = (aot_mem.aot_direct_load16(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[10];
    ctx.gpr[8] = (0u | 0u);
      if (branch_taken) {
          goto L_08A54BC0;
      }
      goto L_08A54B9C;
    }
L_08A54B9C:
    ctx.gpr[9] = (aot_mem.aot_direct_load16(ctx.gpr[7] + static_cast<std::uint32_t>(2)));
    ctx.gpr[10] = (aot_mem.aot_direct_load16(ctx.gpr[18] + static_cast<std::uint32_t>(2)));
    if (ctx.gpr[9] != ctx.gpr[10]) {
    ctx.gpr[7] = (ctx.gpr[8] & 255u);
        goto L_08A54BC4;
    }
    goto L_08A54BAC;
L_08A54BAC:
    ctx.gpr[7] = (aot_mem.aot_direct_load16(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (aot_mem.aot_direct_load16(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[9];
    ctx.gpr[7] = (ctx.gpr[8] & 255u);
      if (branch_taken) {
          goto L_08A54BC4;
      }
      goto L_08A54BBC;
    }
L_08A54BBC:
    ctx.gpr[8] = (0u | 1u);
    goto L_08A54BC0;
L_08A54BC0:
    ctx.gpr[7] = (ctx.gpr[8] & 255u);
    goto L_08A54BC4;
L_08A54BC4:
    { const bool branch_taken = ctx.gpr[7] != 0u;
      if (branch_taken) {
          goto L_08A54BE8;
      }
      goto L_08A54BCC;
    }
L_08A54BCC:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(134));
    ctx.gpr[7] = (static_cast<std::int32_t>(aot_gpr_4) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(134));
      if (branch_taken) {
          goto L_08A54B74;
      }
      goto L_08A54BE0;
    }
L_08A54BE0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (ctx.gpr[19] << 6u);
      if (branch_taken) {
          goto L_08A54C00;
      }
      goto L_08A54BE8;
    }
L_08A54BE8:
    aot_gpr_6 = (aot_gpr_5 + static_cast<std::uint32_t>(1162));
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08A54BF8u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    goto L_08A54740;
L_08A54BF8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08A54D1C;
      }
      goto L_08A54C00;
    }
L_08A54C00:
    aot_gpr_4 = (ctx.gpr[19] + aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[19] + aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[19] + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_4);
    ctx.gpr[19] = (ctx.gpr[16] + aot_gpr_4);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[18] + static_cast<std::uint32_t>(2))))));
    aot_gpr_5 = (ctx.gpr[19] + static_cast<std::uint32_t>(1156));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[18] + static_cast<std::uint32_t>(4))))));
    aot_mem.aot_direct_store16(aot_gpr_5 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_4));
    aot_mem.aot_direct_store16(aot_gpr_5 + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(aot_gpr_6));
    aot_mem.aot_direct_store16(aot_gpr_5 + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1162));
    aot_gpr_31 = (0x08A54C3Cu);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    goto L_08A54F5C;
L_08A54C3C:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_6 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_direct_load16(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[7] != aot_gpr_6;
    aot_gpr_5 = (0u | 0u);
      if (branch_taken) {
          goto L_08A54C74;
      }
      goto L_08A54C50;
    }
L_08A54C50:
    aot_gpr_6 = (aot_mem.aot_direct_load16(ctx.gpr[18] + static_cast<std::uint32_t>(2)));
    ctx.gpr[7] = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(2)));
    if (aot_gpr_6 != ctx.gpr[7]) {
    aot_gpr_4 = (aot_gpr_5 & 255u);
        goto L_08A54C78;
    }
    goto L_08A54C60;
L_08A54C60:
    aot_gpr_6 = (aot_mem.aot_direct_load16(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_6 != aot_gpr_4;
    aot_gpr_4 = (aot_gpr_5 & 255u);
      if (branch_taken) {
          goto L_08A54C78;
      }
      goto L_08A54C70;
    }
L_08A54C70:
    aot_gpr_5 = (0u | 1u);
    goto L_08A54C74;
L_08A54C74:
    aot_gpr_4 = (aot_gpr_5 & 255u);
    goto L_08A54C78;
L_08A54C78:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08A54CC8;
      }
      goto L_08A54C80;
    }
L_08A54C80:
    aot_gpr_4 = (0u | 1u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x08A54C90u);
    aot_gpr_6 = (0u | 128u);
    ctx.pc = 0x08B730A4u;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A54C90:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_2) >= 0;
      if (branch_taken) {
          goto L_08A54D0C;
      }
      goto L_08A54C98;
    }
L_08A54C98:
    aot_mem.aot_direct_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-6080));
    aot_gpr_31 = (0x08A54CA8u);
    aot_gpr_4 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A54CA8u) goto L_08A54CA8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A54CA8:
    aot_gpr_31 = (0x08A54CB0u);
    aot_gpr_4 = (aot_gpr_29 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58974, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A54CB0u) goto L_08A54CB0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A54CB0:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    aot_gpr_31 = (0x08A54CC0u);
    aot_gpr_6 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 283u, 0x08B653C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A54CC0u) goto L_08A54CC0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A54CC0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08A54D1C;
      }
      goto L_08A54CC8;
    }
L_08A54CC8:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08A54CD4u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    ctx.pc = 0x08B72FCCu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A54CD4:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_2) >= 0;
      if (branch_taken) {
          goto L_08A54D0C;
      }
      goto L_08A54CDC;
    }
L_08A54CDC:
    aot_mem.aot_direct_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-6080));
    aot_gpr_31 = (0x08A54CECu);
    aot_gpr_4 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A54CECu) goto L_08A54CEC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A54CEC:
    aot_gpr_31 = (0x08A54CF4u);
    aot_gpr_4 = (aot_gpr_29 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58974, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A54CF4u) goto L_08A54CF4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A54CF4:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    aot_gpr_31 = (0x08A54D04u);
    aot_gpr_6 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 283u, 0x08B653C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A54D04u) goto L_08A54D04;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A54D04:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08A54D1C;
      }
      goto L_08A54D0C;
    }
L_08A54D0C:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08A54D1Cu);
    aot_gpr_6 = (ctx.gpr[19] | 0u);
    goto L_08A54740;
L_08A54D1C:
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
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A54D38:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_6 = (0u | 0u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1156));
    goto L_08A54D44;
L_08A54D44:
    ctx.gpr[8] = (aot_gpr_4 | 0u);
    ctx.gpr[9] = (aot_mem.aot_direct_load16(ctx.gpr[8] + static_cast<std::uint32_t>(4)));
    ctx.gpr[10] = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[10];
    ctx.gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_08A54D7C;
      }
      goto L_08A54D58;
    }
L_08A54D58:
    ctx.gpr[9] = (aot_mem.aot_direct_load16(ctx.gpr[8] + static_cast<std::uint32_t>(2)));
    ctx.gpr[10] = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(2)));
    if (ctx.gpr[9] != ctx.gpr[10]) {
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
        goto L_08A54D80;
    }
    goto L_08A54D68;
L_08A54D68:
    ctx.gpr[8] = (aot_mem.aot_direct_load16(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[9];
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
      if (branch_taken) {
          goto L_08A54D80;
      }
      goto L_08A54D78;
    }
L_08A54D78:
    ctx.gpr[7] = (0u | 1u);
    goto L_08A54D7C;
L_08A54D7C:
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    goto L_08A54D80;
L_08A54D80:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[7] = (0u | 255u);
      if (branch_taken) {
          goto L_08A54DB8;
      }
      goto L_08A54D88;
    }
L_08A54D88:
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(0))))));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(2))))));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(4))))));
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[8]));
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[9]));
    goto L_08A54DB8;
L_08A54DB8:
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (static_cast<std::int32_t>(aot_gpr_6) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(134));
      if (branch_taken) {
          goto L_08A54D44;
      }
      goto L_08A54DC8;
    }
L_08A54DC8:
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A54DD0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    { const bool branch_taken = aot_gpr_6 != 0u;
    ctx.gpr[16] = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_08A54E0C;
      }
      goto L_08A54DF0;
    }
L_08A54DF0:
    aot_gpr_31 = (0x08A54DF8u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    goto L_08A56714;
L_08A54DF8:
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    aot_gpr_4 = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 17u);
      if (branch_taken) {
          goto L_08A54E14;
      }
      goto L_08A54E0C;
    }
L_08A54E0C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08A54E48;
      }
      goto L_08A54E14;
    }
L_08A54E14:
    ctx.gpr[7] = (aot_gpr_5 + aot_gpr_4);
    ctx.gpr[8] = (aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.gpr[9] = (aot_gpr_6 + aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    aot_mem.aot_direct_store32(ctx.gpr[9] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08A54E14;
      }
      goto L_08A54E38;
    }
L_08A54E38:
    aot_gpr_31 = (0x08A54E40u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    goto L_08A56738;
L_08A54E40:
    aot_gpr_31 = (0x08A54E48u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    goto L_08A56900;
L_08A54E48:
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
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A54E5C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[16] = (aot_gpr_6 | 0u);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_31);
    aot_gpr_31 = (0x08A54E80u);
    ctx.gpr[18] = (aot_gpr_5 | 0u);
    goto L_08A56714;
L_08A54E80:
    aot_gpr_4 = (ctx.gpr[18] << 3u);
    aot_gpr_4 = (ctx.gpr[18] + aot_gpr_4);
    aot_gpr_5 = (ctx.gpr[16] + static_cast<std::uint32_t>(10));
    aot_gpr_4 = (ctx.gpr[18] + aot_gpr_4);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.gpr[7] = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(6)));
    aot_gpr_6 = (aot_gpr_6 + aot_gpr_4);
    aot_mem.aot_direct_store16(aot_gpr_6 + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(ctx.gpr[7]));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_gpr_6 + aot_gpr_4);
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(aot_gpr_5));
    aot_gpr_31 = (0x08A54EBCu);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    goto L_08A56738;
L_08A54EBC:
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
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
L_08A54ED4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(88)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) <= 0;
      if (branch_taken) {
          goto L_08A54EF8;
      }
      goto L_08A54EF0;
    }
L_08A54EF0:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), aot_gpr_4);
    goto L_08A54EF8;
L_08A54EF8:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08A54F1C;
      }
      goto L_08A54F00;
    }
L_08A54F00:
    aot_gpr_31 = (0x08A54F08u);
    ctx.pc = 0x08B72F34u;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A54F08:
    aot_gpr_4 = (0u | 1u);
    { const bool branch_taken = aot_gpr_2 == aot_gpr_4;
      if (branch_taken) {
          goto L_08A54F1C;
      }
      goto L_08A54F14;
    }
L_08A54F14:
    aot_gpr_4 = (0u | 20u);
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), aot_gpr_4);
    goto L_08A54F1C;
L_08A54F1C:
    aot_gpr_2 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(88)));
    aot_gpr_2 = (aot_gpr_2 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A54F34:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-6096)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08A54F50;
      }
      goto L_08A54F48;
    }
L_08A54F48:
    aot_gpr_31 = (0x08A54F50u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(3166));
    ctx.pc = 0x08B7305Cu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A54F50:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A54F5C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_5 = (0u | 255u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(aot_gpr_5));
    ctx.gpr[16] = (aot_gpr_4 + static_cast<std::uint32_t>(3166));
    aot_gpr_6 = (aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_31);
    { const bool branch_taken = aot_gpr_6 != ctx.gpr[7];
    aot_gpr_5 = (0u | 0u);
      if (branch_taken) {
          goto L_08A54FBC;
      }
      goto L_08A54F98;
    }
L_08A54F98:
    aot_gpr_6 = (aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(2)));
    ctx.gpr[7] = (aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(2)));
    if (aot_gpr_6 != ctx.gpr[7]) {
    aot_gpr_5 = (aot_gpr_5 & 255u);
        goto L_08A54FC0;
    }
    goto L_08A54FA8;
L_08A54FA8:
    aot_gpr_6 = (aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_6 != ctx.gpr[7];
    aot_gpr_5 = (aot_gpr_5 & 255u);
      if (branch_taken) {
          goto L_08A54FC0;
      }
      goto L_08A54FB8;
    }
L_08A54FB8:
    aot_gpr_5 = (0u | 1u);
    goto L_08A54FBC;
L_08A54FBC:
    aot_gpr_5 = (aot_gpr_5 & 255u);
    goto L_08A54FC0;
L_08A54FC0:
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08A54FD0;
      }
      goto L_08A54FC8;
    }
L_08A54FC8:
    aot_gpr_31 = (0x08A54FD0u);
    goto L_08A54F34;
L_08A54FD0:
    aot_gpr_2 = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(12)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A54FE4:
    jump_target = aot_gpr_31;
    aot_gpr_2 = (aot_gpr_4 + static_cast<std::uint32_t>(3172));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A54FEC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    { const std::uint32_t aot_run_words[4]{ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_run_words); }
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[17] = (0u | 0u);
    goto L_08A55014;
L_08A55014:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08A55020u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1));
    goto L_08A545AC;
L_08A55020:
    aot_gpr_4 = (0u | 255u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_5 = (aot_gpr_2 + static_cast<std::uint32_t>(10));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_5 = (aot_gpr_5 + ctx.gpr[17]);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_6 = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr_6 != ctx.gpr[7];
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_08A55078;
      }
      goto L_08A55054;
    }
L_08A55054:
    aot_gpr_6 = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(2)));
    ctx.gpr[7] = (aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(2)));
    if (aot_gpr_6 != ctx.gpr[7]) {
    aot_gpr_4 = (aot_gpr_4 & 255u);
        goto L_08A5507C;
    }
    goto L_08A55064;
L_08A55064:
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_5 != aot_gpr_6;
    aot_gpr_4 = (aot_gpr_4 & 255u);
      if (branch_taken) {
          goto L_08A5507C;
      }
      goto L_08A55074;
    }
L_08A55074:
    aot_gpr_4 = (0u | 1u);
    goto L_08A55078;
L_08A55078:
    aot_gpr_4 = (aot_gpr_4 & 255u);
    goto L_08A5507C;
L_08A5507C:
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08A55090;
      }
      goto L_08A5508C;
    }
L_08A5508C:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_08A55090;
L_08A55090:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[18]) < 7 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(10));
      if (branch_taken) {
          goto L_08A55014;
      }
      goto L_08A550A0;
    }
L_08A550A0:
    aot_gpr_2 = (ctx.gpr[19] | 0u);
    { std::uint32_t aot_run_words[5]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_run_words);
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
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A550C0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    { const std::uint32_t aot_run_words[6]{ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_run_words); }
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[18] = (0u | 0u);
    goto L_08A550F8;
L_08A550F8:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08A55104u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1));
    goto L_08A545AC;
L_08A55104:
    aot_gpr_4 = (0u | 255u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_5 = (aot_gpr_2 + static_cast<std::uint32_t>(10));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_5 = (aot_gpr_5 + ctx.gpr[18]);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_6 = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr_6 != ctx.gpr[7];
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_08A5515C;
      }
      goto L_08A55138;
    }
L_08A55138:
    aot_gpr_6 = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(2)));
    ctx.gpr[7] = (aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(2)));
    if (aot_gpr_6 != ctx.gpr[7]) {
    aot_gpr_4 = (aot_gpr_4 & 255u);
        goto L_08A55160;
    }
    goto L_08A55148;
L_08A55148:
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_5 != aot_gpr_6;
    aot_gpr_4 = (aot_gpr_4 & 255u);
      if (branch_taken) {
          goto L_08A55160;
      }
      goto L_08A55158;
    }
L_08A55158:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    goto L_08A5515C;
L_08A5515C:
    aot_gpr_4 = (aot_gpr_4 & 255u);
    goto L_08A55160;
L_08A55160:
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08A551B8;
      }
      goto L_08A55170;
    }
L_08A55170:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08A5517Cu);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1));
    goto L_08A545AC;
L_08A5517C:
    aot_gpr_4 = (aot_gpr_2 + static_cast<std::uint32_t>(10));
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[18]);
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08A55194;
      }
      goto L_08A55190;
    }
L_08A55190:
    ctx.gpr[21] = (ctx.gpr[17] | 0u);
    goto L_08A55194;
L_08A55194:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08A551A0u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1));
    goto L_08A545AC;
L_08A551A0:
    aot_gpr_4 = (aot_gpr_2 + static_cast<std::uint32_t>(10));
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[18]);
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[17];
      if (branch_taken) {
          goto L_08A551B8;
      }
      goto L_08A551B4;
    }
L_08A551B4:
    ctx.gpr[20] = (ctx.gpr[17] | 0u);
    goto L_08A551B8;
L_08A551B8:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[19]) < 7 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(10));
      if (branch_taken) {
          goto L_08A550F8;
      }
      goto L_08A551C8;
    }
L_08A551C8:
    aot_gpr_2 = (ctx.gpr[20] + ctx.gpr[21]);
    { std::uint32_t aot_run_words[7]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      ctx.gpr[20] = aot_run_words[4];
      ctx.gpr[21] = aot_run_words[5];
      aot_gpr_31 = aot_run_words[6];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A551F0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(12)));
    { const std::uint32_t aot_run_words[5]{ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    { const bool branch_taken = aot_gpr_5 != 0u;
    ctx.gpr[16] = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08A5521C;
      }
      goto L_08A55214;
    }
L_08A55214:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08A552BC;
      }
      goto L_08A5521C;
    }
L_08A5521C:
    aot_gpr_4 = (0u | 0u);
    goto L_08A55220;
L_08A55220:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(114), static_cast<std::uint8_t>(aot_gpr_6));
    aot_gpr_4 = (aot_gpr_6 | 0u);
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 6 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_08A55220;
      }
      goto L_08A55240;
    }
L_08A55240:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[17] = (0u | 5u);
    goto L_08A55248;
L_08A55248:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[18]);
    aot_gpr_31 = (0x08A55258u);
    ctx.gpr[19] = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(114)));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20934, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A55258u) goto L_08A55258;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A55258:
    { const std::uint32_t dividend = aot_gpr_2; const std::uint32_t divisor = ctx.gpr[17]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr_5 = (aot_gpr_4 + ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr_6 = (static_cast<std::int32_t>(ctx.gpr[18]) < 6 ? 1u : 0u);
    ctx.gpr[7] = (ctx.hi);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[7]);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(114)));
    aot_mem.aot_direct_store8(aot_gpr_5 + static_cast<std::uint32_t>(114), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[7]);
    { const bool branch_taken = aot_gpr_6 != 0u;
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(114), static_cast<std::uint8_t>(ctx.gpr[19]));
      if (branch_taken) {
          goto L_08A55248;
      }
      goto L_08A5528C;
    }
L_08A5528C:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    goto L_08A55298;
L_08A55298:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[7] = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_6 = (aot_gpr_6 + aot_gpr_5);
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_6 + static_cast<std::uint32_t>(114)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_6));
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_5) < 8 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 != 0u;
      if (branch_taken) {
          goto L_08A55298;
      }
      goto L_08A552BC;
    }
L_08A552BC:
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
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A552D8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(84)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_5) < 0;
      if (branch_taken) {
          goto L_08A55318;
      }
      goto L_08A552EC;
    }
L_08A552EC:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_31 = (0x08A552F8u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    ctx.pc = 0x08B72F5Cu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A552F8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (0x08A55304u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(84)));
    ctx.pc = 0x08B72F94u;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A55304:
    aot_gpr_31 = (0x08A5530Cu);
    ctx.pc = 0x08B72F6Cu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A5530C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(84), aot_gpr_5);
    goto L_08A55318;
L_08A55318:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A55324:
    jump_target = aot_gpr_31;
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(3184), static_cast<std::uint8_t>(aot_gpr_5));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A5532C:
    jump_target = aot_gpr_31;
    aot_gpr_2 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(3184)));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A55334:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x08A55344u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0197_entry, 197u, 766u, 0x08B1B3B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A55344u) goto L_08A55344;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A55344:
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-6096), static_cast<std::uint8_t>(0u));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A55354:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_gpr_4 = (0u | 255u);
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(13), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(14), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(15), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(aot_gpr_4));
    ctx.gpr[7] = (2213u << 16u);
    aot_gpr_4 = (ctx.gpr[16] + static_cast<std::uint32_t>(22));
    aot_gpr_5 = (0u | 7u);
    aot_gpr_6 = (0u | 10u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    aot_gpr_31 = (0x08A55398u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(15300));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0215_entry, 215u, 158u, 0x08B60C7Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A55398u) goto L_08A55398;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A55398:
    aot_gpr_2 = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A553AC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-144));
    aot_gpr_5 = (0u | 255u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(136), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(1))))));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(2))))));
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(3))))));
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(4))))));
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(aot_gpr_6));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(5))))));
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(aot_gpr_6));
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(6));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(140), aot_gpr_31);
    aot_gpr_31 = (0x08A55414u);
    aot_gpr_5 = (0u | 128u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0215_entry, 215u, 94u, 0x08B60818u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A55414u) goto L_08A55414;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A55414:
    aot_gpr_6 = (ctx.gpr[16] + static_cast<std::uint32_t>(6));
    aot_gpr_5 = (0u | 0u);
    aot_gpr_4 = (0u | 64u);
    goto L_08A55420;
L_08A55420:
    ctx.gpr[7] = (aot_gpr_29 + aot_gpr_5);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[7] + static_cast<std::uint32_t>(6))))));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[7] + static_cast<std::uint32_t>(7))))));
    ctx.gpr[9] = (aot_gpr_6 + aot_gpr_5);
    aot_mem.aot_direct_store8(ctx.gpr[9] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    aot_mem.aot_direct_store8(ctx.gpr[9] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08A55420;
      }
      goto L_08A55444;
    }
L_08A55444:
    aot_gpr_2 = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(136)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(140)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A55458:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    { const std::uint32_t aot_run_words[5]{ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_run_words); }
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_gpr_4 = (2235u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-25860));
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), aot_gpr_4);
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-6064)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-6060)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_6);
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), 0u);
    ctx.gpr[17] = (0u | 255u);
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(29), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(30), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(31), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(33), static_cast<std::uint8_t>(ctx.gpr[17]));
    ctx.gpr[18] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), 0u);
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    { const std::uint32_t aot_run_words[3]{0u, 0u, 0u};
      aot_mem.aot_direct_store32_block(ctx.gpr[16] + static_cast<std::uint32_t>(64), aot_run_words); }
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(5824));
    { const std::uint32_t aot_run_words[4]{aot_gpr_4, ctx.gpr[18], ctx.gpr[18], 0u};
      aot_mem.aot_direct_store32_block(ctx.gpr[16] + static_cast<std::uint32_t>(76), aot_run_words); }
    aot_gpr_4 = (ctx.gpr[16] + static_cast<std::uint32_t>(92));
    aot_gpr_5 = (2213u << 16u);
    ctx.gpr[19] = (aot_gpr_5 + static_cast<std::uint32_t>(21332));
    aot_gpr_5 = (0u | 7u);
    aot_gpr_6 = (0u | 152u);
    aot_gpr_31 = (0x08A55504u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0215_entry, 215u, 158u, 0x08B60C7Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A55504u) goto L_08A55504;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A55504:
    aot_gpr_4 = (ctx.gpr[16] + static_cast<std::uint32_t>(1156));
    ctx.gpr[7] = (2213u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(21420));
    aot_gpr_5 = (0u | 7u);
    aot_gpr_31 = (0x08A5551Cu);
    aot_gpr_6 = (0u | 134u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0215_entry, 215u, 158u, 0x08B60C7Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5551Cu) goto L_08A5551C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A5551C:
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2096), ctx.gpr[18]);
    aot_gpr_4 = (ctx.gpr[16] + static_cast<std::uint32_t>(2100));
    aot_gpr_5 = (0u | 7u);
    aot_gpr_6 = (0u | 152u);
    aot_gpr_31 = (0x08A55534u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0215_entry, 215u, 158u, 0x08B60C7Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A55534u) goto L_08A55534;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A55534:
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3166), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3167), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3168), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3169), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3170), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3171), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3172), ctx.gpr[18]);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3176), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3177), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3178), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3179), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3180), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3181), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_gpr_4 = (ctx.gpr[16] + static_cast<std::uint32_t>(3176));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(2))))));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(4))))));
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_5));
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(aot_gpr_6));
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[7]));
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store16(ctx.gpr[16] + static_cast<std::uint32_t>(3182), static_cast<std::uint16_t>(aot_gpr_4));
    aot_gpr_2 = (ctx.gpr[16] | 0u);
    { std::uint32_t aot_run_words[5]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_run_words);
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
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A555C4:
    jump_target = aot_gpr_31;
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A555CC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), 0u);
    { const std::uint32_t aot_run_words[3]{ctx.gpr[17], ctx.gpr[18], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_run_words); }
    aot_gpr_31 = (0x08A555F4u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    ctx.pc = 0x08B7346Cu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A555F4:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_2) < 0;
      if (branch_taken) {
          goto L_08A557E8;
      }
      goto L_08A555FC;
    }
L_08A555FC:
    aot_gpr_31 = (0x08A55604u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.pc = 0x08B7349Cu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A55604:
    aot_gpr_5 = (0u | 32u);
    aot_gpr_6 = (0u | 0u);
    ctx.gpr[7] = (0u | 16u);
    ctx.gpr[8] = (0u | 0u);
    aot_gpr_31 = (0x08A5561Cu);
    aot_gpr_4 = (2u << 16u);
    ctx.pc = 0x08B7306Cu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A5561C:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_2) >= 0;
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), aot_gpr_2);
      if (branch_taken) {
          goto L_08A55654;
      }
      goto L_08A55624;
    }
L_08A55624:
    aot_gpr_4 = (2232u << 16u);
    ctx.gpr[18] = (aot_gpr_4 + static_cast<std::uint32_t>(7332));
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(72));
    aot_gpr_31 = (0x08A55638u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58974, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A55638u) goto L_08A55638;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A55638:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08A55648u);
    aot_gpr_6 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 319u, 0x08B655B8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A55648u) goto L_08A55648;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A55648:
    ctx.gpr[18] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08A557C8;
      }
      goto L_08A55654;
    }
L_08A55654:
    aot_gpr_31 = (0x08A5565Cu);
    ctx.pc = 0x08B7304Cu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A5565C:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_2) >= 0;
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), aot_gpr_2);
      if (branch_taken) {
          goto L_08A55694;
      }
      goto L_08A55664;
    }
L_08A55664:
    aot_gpr_4 = (2232u << 16u);
    ctx.gpr[18] = (aot_gpr_4 + static_cast<std::uint32_t>(7368));
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(72));
    aot_gpr_31 = (0x08A55678u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58974, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A55678u) goto L_08A55678;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A55678:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08A55688u);
    aot_gpr_6 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 319u, 0x08B655B8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A55688u) goto L_08A55688;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A55688:
    ctx.gpr[18] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08A557C0;
      }
      goto L_08A55694;
    }
L_08A55694:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(8));
    aot_gpr_31 = (0x08A556A8u);
    aot_gpr_6 = (0u | 9u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A556A8u) goto L_08A556A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A556A8:
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (0u | 6144u);
    aot_gpr_31 = (0x08A556B8u);
    aot_gpr_5 = (0u | 48u);
    ctx.pc = 0x08B72FDCu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A556B8:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_2) >= 0;
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), aot_gpr_2);
      if (branch_taken) {
          goto L_08A556F0;
      }
      goto L_08A556C0;
    }
L_08A556C0:
    aot_gpr_4 = (2232u << 16u);
    ctx.gpr[18] = (aot_gpr_4 + static_cast<std::uint32_t>(7412));
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(72));
    aot_gpr_31 = (0x08A556D4u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58974, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A556D4u) goto L_08A556D4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A556D4:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08A556E4u);
    aot_gpr_6 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 319u, 0x08B655B8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A556E4u) goto L_08A556E4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A556E4:
    ctx.gpr[18] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08A557B8;
      }
      goto L_08A556F0;
    }
L_08A556F0:
    aot_gpr_4 = (2213u << 16u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08A55700u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(14952));
    ctx.pc = 0x08B72FACu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A55700:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_2) >= 0;
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(80), aot_gpr_2);
      if (branch_taken) {
          goto L_08A55740;
      }
      goto L_08A55708;
    }
L_08A55708:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(72));
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), aot_gpr_4);
    aot_gpr_4 = (2232u << 16u);
    ctx.gpr[18] = (aot_gpr_4 + static_cast<std::uint32_t>(7472));
    aot_gpr_31 = (0x08A55724u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58974, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A55724u) goto L_08A55724;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A55724:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08A55734u);
    aot_gpr_6 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 319u, 0x08B655B8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A55734u) goto L_08A55734;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A55734:
    ctx.gpr[18] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08A557B0;
      }
      goto L_08A55740;
    }
L_08A55740:
    aot_gpr_4 = (2232u << 16u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_6 = (0u | 1u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    aot_gpr_31 = (0x08A5575Cu);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(7528));
    ctx.pc = 0x08B7341Cu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A5575C:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_2) >= 0;
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2096), aot_gpr_2);
      if (branch_taken) {
          goto L_08A5579C;
      }
      goto L_08A55764;
    }
L_08A55764:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2096)));
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(72));
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), aot_gpr_4);
    aot_gpr_4 = (2232u << 16u);
    ctx.gpr[18] = (aot_gpr_4 + static_cast<std::uint32_t>(7548));
    aot_gpr_31 = (0x08A55780u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58974, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A55780u) goto L_08A55780;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A55780:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08A55790u);
    aot_gpr_6 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 319u, 0x08B655B8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A55790u) goto L_08A55790;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A55790:
    ctx.gpr[18] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08A557B0;
      }
      goto L_08A5579C;
    }
L_08A5579C:
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), 0u);
    aot_gpr_31 = (0x08A557A8u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    goto L_08A560B0;
L_08A557A8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08A557E8;
      }
      goto L_08A557B0;
    }
L_08A557B0:
    aot_gpr_31 = (0x08A557B8u);
    ctx.pc = 0x08B72FD4u;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A557B8:
    aot_gpr_31 = (0x08A557C0u);
    ctx.pc = 0x08B7302Cu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A557C0:
    aot_gpr_31 = (0x08A557C8u);
    ctx.pc = 0x08B73064u;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A557C8:
    aot_gpr_31 = (0x08A557D0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0197_entry, 197u, 766u, 0x08B1B3B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A557D0u) goto L_08A557D0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A557D0:
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-6096), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(ctx.gpr[18]));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-6176)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-6172)));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), aot_gpr_5);
    goto L_08A557E8;
L_08A557E8:
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A55800:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    { const std::uint32_t aot_run_words[3]{ctx.gpr[16], ctx.gpr[17], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(28), aot_run_words); }
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(68)));
    aot_gpr_5 = (aot_gpr_5 & 1u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    ctx.gpr[16] = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08A55870;
      }
      goto L_08A55820;
    }
L_08A55820:
    aot_gpr_4 = (2232u << 16u);
    ctx.gpr[17] = (aot_gpr_4 + static_cast<std::uint32_t>(7580));
    aot_gpr_31 = (0x08A55830u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58974, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A55830u) goto L_08A55830;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A55830:
    aot_gpr_4 = (aot_gpr_29 | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08A55840u);
    aot_gpr_6 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 283u, 0x08B653C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A55840u) goto L_08A55840;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A55840:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08A5584Cu);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    goto L_08A564A4;
L_08A5584C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(5824));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_4 = (2236u << 16u);
      if (branch_taken) {
          goto L_08A55868;
      }
      goto L_08A5585C;
    }
L_08A5585C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_gpr_31 = (0x08A55868u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(25856));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE8F4, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A55868u) goto L_08A55868;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A55868:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08A5599C;
      }
      goto L_08A55870;
    }
L_08A55870:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    aot_gpr_4 = (aot_gpr_4 & 2u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08A5599C;
      }
      goto L_08A55880;
    }
L_08A55880:
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    ctx.gpr[8] = (0u | 0u);
    aot_gpr_6 = (ctx.gpr[7] + static_cast<std::uint32_t>(104));
    goto L_08A5588C;
L_08A5588C:
    aot_gpr_4 = (0u | 255u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(14), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(15), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(14))))));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(16))))));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(18))))));
    aot_mem.aot_direct_store16(aot_gpr_6 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_4));
    aot_mem.aot_direct_store16(aot_gpr_6 + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(aot_gpr_5));
    aot_mem.aot_direct_store16(aot_gpr_6 + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[9]));
    aot_gpr_5 = (0u | 0u);
    aot_gpr_4 = (ctx.gpr[7] + static_cast<std::uint32_t>(114));
    goto L_08A558C8;
L_08A558C8:
    ctx.gpr[9] = (0u | 255u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[9]));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(ctx.gpr[9]));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(ctx.gpr[9]));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(ctx.gpr[9]));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[9]));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(20))))));
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(22))))));
    ctx.gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(24))))));
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[9]));
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[10]));
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[11]));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (static_cast<std::int32_t>(aot_gpr_5) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(10));
      if (branch_taken) {
          goto L_08A558C8;
      }
      goto L_08A5590C;
    }
L_08A5590C:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(152));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[8]) < 7 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(152));
      if (branch_taken) {
          goto L_08A5588C;
      }
      goto L_08A55920;
    }
L_08A55920:
    aot_gpr_4 = (0u | 255u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(13), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(8))))));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(10))))));
    aot_gpr_5 = (ctx.gpr[16] + static_cast<std::uint32_t>(28));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(12))))));
    aot_mem.aot_direct_store16(aot_gpr_5 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_4));
    aot_mem.aot_direct_store16(aot_gpr_5 + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(aot_gpr_6));
    aot_mem.aot_direct_store16(aot_gpr_5 + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[7]));
    aot_gpr_31 = (0x08A55960u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    goto L_08A54F34;
L_08A55960:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3164)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08A55994;
      }
      goto L_08A5596C;
    }
L_08A5596C:
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3164), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-6144)));
    aot_gpr_5 = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-6140)));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(4), aot_gpr_6);
    aot_gpr_31 = (0x08A5598Cu);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    goto L_08A54034;
L_08A5598C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08A5599C;
      }
      goto L_08A55994;
    }
L_08A55994:
    aot_gpr_31 = (0x08A5599Cu);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    goto L_08A56210;
L_08A5599C:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(28), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A559B0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_31);
    ctx.gpr[8] = (0u | 0u);
    aot_gpr_6 = (0u | 5u);
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(16));
    ctx.gpr[7] = (aot_gpr_4 | 0u);
    goto L_08A559C8;
L_08A559C8:
    ctx.gpr[9] = (aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(92)));
    { const bool branch_taken = ctx.gpr[9] != aot_gpr_6;
      if (branch_taken) {
          goto L_08A55A20;
      }
      goto L_08A559D4;
    }
L_08A559D4:
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[8];
      if (branch_taken) {
          goto L_08A559F4;
      }
      goto L_08A559E0;
    }
L_08A559E0:
    ctx.gpr[9] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-6104)));
    ctx.gpr[10] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-6100)));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(4), ctx.gpr[10]);
      if (branch_taken) {
          goto L_08A55A20;
      }
      goto L_08A559F4;
    }
L_08A559F4:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[8]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_gpr_31 = (0x08A55A0Cu);
    aot_gpr_5 = (ctx.gpr[8] | 0u);
    goto L_08A56418;
L_08A55A0C:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_gpr_4 = aot_run_words[0];
      aot_gpr_5 = aot_run_words[1];
      ctx.gpr[7] = aot_run_words[2];
    }
    aot_gpr_6 = (0u | 5u);
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(12)));
    goto L_08A55A20;
L_08A55A20:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[8]) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(152));
      if (branch_taken) {
          goto L_08A559C8;
      }
      goto L_08A55A30;
    }
L_08A55A30:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A55A3C:
    jump_target = aot_gpr_31;
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A55A44:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(36)));
    aot_gpr_6 = (aot_gpr_5 << 4u);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_5 = (aot_gpr_5 << 3u);
    aot_gpr_5 = (aot_gpr_6 + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(92)));
    aot_gpr_6 = (0u | 5u);
    { const bool branch_taken = aot_gpr_5 == aot_gpr_6;
      if (branch_taken) {
          goto L_08A55A88;
      }
      goto L_08A55A6C;
    }
L_08A55A6C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-6144)));
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(16));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-6140)));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(36), aot_gpr_5);
    goto L_08A55A88;
L_08A55A88:
    jump_target = aot_gpr_31;
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A55A90:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-80));
    { const std::uint32_t aot_run_words[6]{ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(52), aot_run_words); }
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(68)));
    aot_gpr_5 = (aot_gpr_5 & 4u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    ctx.gpr[16] = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08A55C44;
      }
      goto L_08A55ABC;
    }
L_08A55ABC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    aot_gpr_31 = (0x08A55ACCu);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    ctx.pc = 0x08B73074u;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A55ACC:
    aot_gpr_31 = (0x08A55AD4u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58974, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A55AD4u) goto L_08A55AD4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A55AD4:
    aot_gpr_4 = (aot_gpr_29 | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08A55AE4u);
    aot_gpr_6 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 283u, 0x08B653C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A55AE4u) goto L_08A55AE4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A55AE4:
    ctx.gpr[19] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x08A55AF8u);
    aot_gpr_6 = (0u | 8u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B5814C, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[9], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A55AF8u) goto L_08A55AF8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A55AF8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(125))))));
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(126))))));
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(49), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(127))))));
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(50), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(128))))));
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(51), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(129))))));
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(130))))));
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(53), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(131))))));
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(54), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(132))))));
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(55), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[18] = (ctx.gpr[28] + static_cast<std::uint32_t>(5824));
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08A55BBC;
      }
      goto L_08A55B50;
    }
L_08A55B50:
    aot_gpr_31 = (0x08A55B58u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    ctx.pc = 0x08B72FE4u;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A55B58:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_2) >= 0;
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), aot_gpr_2);
      if (branch_taken) {
          goto L_08A55BA8;
      }
      goto L_08A55B60;
    }
L_08A55B60:
    aot_gpr_4 = (2232u << 16u);
    ctx.gpr[20] = (aot_gpr_4 + static_cast<std::uint32_t>(7608));
    ctx.gpr[19] = (aot_gpr_29 + static_cast<std::uint32_t>(8));
    aot_gpr_31 = (0x08A55B74u);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58974, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A55B74u) goto L_08A55B74;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A55B74:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x08A55B84u);
    aot_gpr_6 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 283u, 0x08B653C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A55B84u) goto L_08A55B84;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A55B84:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08A55B90u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    goto L_08A564A4;
L_08A55B90:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[18];
    aot_gpr_4 = (2236u << 16u);
      if (branch_taken) {
          goto L_08A55BA8;
      }
      goto L_08A55B9C;
    }
L_08A55B9C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(12)));
    aot_gpr_31 = (0x08A55BA8u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(25856));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE8F4, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A55BA8u) goto L_08A55BA8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A55BA8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-6128)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-6124)));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), aot_gpr_5);
      if (branch_taken) {
          goto L_08A55C24;
      }
      goto L_08A55BBC;
    }
L_08A55BBC:
    aot_gpr_31 = (0x08A55BC4u);
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), 0u);
    ctx.pc = 0x08B72F9Cu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A55BC4:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_2) >= 0;
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), aot_gpr_2);
      if (branch_taken) {
          goto L_08A55C14;
      }
      goto L_08A55BCC;
    }
L_08A55BCC:
    aot_gpr_4 = (2232u << 16u);
    ctx.gpr[20] = (aot_gpr_4 + static_cast<std::uint32_t>(7636));
    ctx.gpr[19] = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    aot_gpr_31 = (0x08A55BE0u);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58974, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A55BE0u) goto L_08A55BE0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A55BE0:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x08A55BF0u);
    aot_gpr_6 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 283u, 0x08B653C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A55BF0u) goto L_08A55BF0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A55BF0:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08A55BFCu);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    goto L_08A564A4;
L_08A55BFC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[18];
    aot_gpr_4 = (2236u << 16u);
      if (branch_taken) {
          goto L_08A55C14;
      }
      goto L_08A55C08;
    }
L_08A55C08:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    aot_gpr_31 = (0x08A55C14u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(25856));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE8F4, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A55C14u) goto L_08A55C14;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A55C14:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-6120)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-6116)));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), aot_gpr_5);
    goto L_08A55C24;
L_08A55C24:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[18];
    aot_gpr_4 = (2236u << 16u);
      if (branch_taken) {
          goto L_08A55C3C;
      }
      goto L_08A55C30;
    }
L_08A55C30:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_gpr_31 = (0x08A55C3Cu);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(25856));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE8F4, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A55C3Cu) goto L_08A55C3C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A55C3C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08A55CA0;
      }
      goto L_08A55C44;
    }
L_08A55C44:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    aot_gpr_4 = (aot_gpr_4 & 1u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08A55CA0;
      }
      goto L_08A55C54;
    }
L_08A55C54:
    aot_gpr_4 = (2232u << 16u);
    ctx.gpr[18] = (aot_gpr_4 + static_cast<std::uint32_t>(7268));
    ctx.gpr[17] = (aot_gpr_29 + static_cast<std::uint32_t>(24));
    aot_gpr_31 = (0x08A55C68u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58974, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A55C68u) goto L_08A55C68;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A55C68:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08A55C78u);
    aot_gpr_6 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 283u, 0x08B653C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A55C78u) goto L_08A55C78;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A55C78:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08A55C84u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    goto L_08A564A4;
L_08A55C84:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(28)));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(5824));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_4 = (2236u << 16u);
      if (branch_taken) {
          goto L_08A55CA0;
      }
      goto L_08A55C94;
    }
L_08A55C94:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(28)));
    aot_gpr_31 = (0x08A55CA0u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(25856));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE8F4, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A55CA0u) goto L_08A55CA0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A55CA0:
    { std::uint32_t aot_run_words[6]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(52), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      ctx.gpr[20] = aot_run_words[4];
      aot_gpr_31 = aot_run_words[5];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A55CC0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_31);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(68)));
    aot_gpr_5 = (aot_gpr_5 & 1u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08A55D30;
      }
      goto L_08A55CDC;
    }
L_08A55CDC:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_4);
    aot_gpr_4 = (2232u << 16u);
    ctx.gpr[16] = (aot_gpr_4 + static_cast<std::uint32_t>(7672));
    aot_gpr_31 = (0x08A55CF0u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58974, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A55CF0u) goto L_08A55CF0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A55CF0:
    aot_gpr_4 = (aot_gpr_29 | 0u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08A55D00u);
    aot_gpr_6 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 283u, 0x08B653C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A55D00u) goto L_08A55D00;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A55D00:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    aot_gpr_31 = (0x08A55D0Cu);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    goto L_08A564A4;
L_08A55D0C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(5824));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_4 = (2236u << 16u);
      if (branch_taken) {
          goto L_08A55D28;
      }
      goto L_08A55D1C;
    }
L_08A55D1C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_gpr_31 = (0x08A55D28u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(25856));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE8F4, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A55D28u) goto L_08A55D28;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A55D28:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08A55D54;
      }
      goto L_08A55D30;
    }
L_08A55D30:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(68)));
    aot_gpr_5 = (aot_gpr_5 & 2u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08A55D54;
      }
      goto L_08A55D40;
    }
L_08A55D40:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-6112)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(16));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-6108)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_6);
    goto L_08A55D54;
L_08A55D54:
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(12)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A55D64:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-736));
    { const std::uint32_t aot_run_words[4]{ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(716), aot_run_words); }
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(68)));
    aot_gpr_5 = (aot_gpr_5 & 1u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    ctx.gpr[16] = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08A55DD8;
      }
      goto L_08A55D88;
    }
L_08A55D88:
    aot_gpr_4 = (2232u << 16u);
    ctx.gpr[17] = (aot_gpr_4 + static_cast<std::uint32_t>(7700));
    aot_gpr_31 = (0x08A55D98u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58974, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A55D98u) goto L_08A55D98;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A55D98:
    aot_gpr_4 = (aot_gpr_29 | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08A55DA8u);
    aot_gpr_6 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 283u, 0x08B653C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A55DA8u) goto L_08A55DA8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A55DA8:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08A55DB4u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    goto L_08A564A4;
L_08A55DB4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(5824));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_4 = (2236u << 16u);
      if (branch_taken) {
          goto L_08A55DD0;
      }
      goto L_08A55DC4;
    }
L_08A55DC4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_gpr_31 = (0x08A55DD0u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(25856));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE8F4, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A55DD0u) goto L_08A55DD0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A55DD0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08A55FF8;
      }
      goto L_08A55DD8;
    }
L_08A55DD8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    aot_gpr_4 = (aot_gpr_4 & 8u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08A55FF8;
      }
      goto L_08A55DE8;
    }
L_08A55DE8:
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), 0u);
    aot_gpr_4 = (0u | 672u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(680), aot_gpr_4);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(680));
    aot_gpr_31 = (0x08A55E00u);
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(8));
    ctx.pc = 0x08B72FC4u;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A55E00:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_2) >= 0;
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), aot_gpr_2);
      if (branch_taken) {
          goto L_08A55E5C;
      }
      goto L_08A55E08;
    }
L_08A55E08:
    aot_gpr_4 = (2232u << 16u);
    ctx.gpr[18] = (aot_gpr_4 + static_cast<std::uint32_t>(7732));
    ctx.gpr[17] = (aot_gpr_29 + static_cast<std::uint32_t>(684));
    aot_gpr_31 = (0x08A55E1Cu);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58974, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A55E1Cu) goto L_08A55E1C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A55E1C:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08A55E2Cu);
    aot_gpr_6 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 283u, 0x08B653C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A55E2Cu) goto L_08A55E2C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A55E2C:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08A55E38u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    goto L_08A564A4;
L_08A55E38:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(688)));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(5824));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_4 = (2236u << 16u);
      if (branch_taken) {
          goto L_08A55E54;
      }
      goto L_08A55E48;
    }
L_08A55E48:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(688)));
    aot_gpr_31 = (0x08A55E54u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(25856));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE8F4, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A55E54u) goto L_08A55E54;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A55E54:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08A55FF8;
      }
      goto L_08A55E5C;
    }
L_08A55E5C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(680)));
    ctx.gpr[17] = (0u | 0u);
    if (aot_gpr_4 != 0u) {
    ctx.gpr[17] = (aot_gpr_29 + static_cast<std::uint32_t>(8));
        goto L_08A55E6C;
    }
    goto L_08A55E6C;
L_08A55E6C:
    { const bool branch_taken = ctx.gpr[17] == 0u;
      if (branch_taken) {
          goto L_08A55EA0;
      }
      goto L_08A55E74;
    }
L_08A55E74:
    aot_gpr_4 = (ctx.gpr[17] + static_cast<std::uint32_t>(8));
    aot_gpr_5 = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    aot_gpr_31 = (0x08A55E84u);
    aot_gpr_6 = (0u | 8u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58100, 213u, 23u, 0x08B58100u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[9], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 23u, 0x08B58100u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A55E84u) goto L_08A55E84;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A55E84:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_08A55E94;
      }
      goto L_08A55E8C;
    }
L_08A55E8C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08A55EA0;
      }
      goto L_08A55E94;
    }
L_08A55E94:
    ctx.gpr[17] = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[17] != 0u;
      if (branch_taken) {
          goto L_08A55E74;
      }
      goto L_08A55EA0;
    }
L_08A55EA0:
    { const bool branch_taken = ctx.gpr[17] != 0u;
      if (branch_taken) {
          goto L_08A55F80;
      }
      goto L_08A55EA8;
    }
L_08A55EA8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), aot_gpr_4);
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 11 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08A55F1C;
      }
      goto L_08A55EC0;
    }
L_08A55EC0:
    aot_gpr_4 = (2232u << 16u);
    ctx.gpr[18] = (aot_gpr_4 + static_cast<std::uint32_t>(7764));
    ctx.gpr[17] = (aot_gpr_29 + static_cast<std::uint32_t>(692));
    aot_gpr_31 = (0x08A55ED4u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58974, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A55ED4u) goto L_08A55ED4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A55ED4:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08A55EE4u);
    aot_gpr_6 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 283u, 0x08B653C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A55EE4u) goto L_08A55EE4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A55EE4:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08A55EF0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    goto L_08A564A4;
L_08A55EF0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(696)));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(5824));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_4 = (2236u << 16u);
      if (branch_taken) {
          goto L_08A55F0C;
      }
      goto L_08A55F00;
    }
L_08A55F00:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(696)));
    aot_gpr_31 = (0x08A55F0Cu);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(25856));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE8F4, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A55F0Cu) goto L_08A55F0C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A55F0C:
    aot_gpr_31 = (0x08A55F14u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0147_entry, 147u, 764u, 0x08A53F2Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A55F14u) goto L_08A55F14;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A55F14:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08A55FF8;
      }
      goto L_08A55F1C;
    }
L_08A55F1C:
    aot_gpr_31 = (0x08A55F24u);
    ctx.pc = 0x08B72F9Cu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A55F24:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_2) >= 0;
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), aot_gpr_2);
      if (branch_taken) {
          goto L_08A55F78;
      }
      goto L_08A55F2C;
    }
L_08A55F2C:
    aot_gpr_4 = (2232u << 16u);
    ctx.gpr[18] = (aot_gpr_4 + static_cast<std::uint32_t>(7636));
    ctx.gpr[17] = (aot_gpr_29 + static_cast<std::uint32_t>(700));
    aot_gpr_31 = (0x08A55F40u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58974, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A55F40u) goto L_08A55F40;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A55F40:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08A55F50u);
    aot_gpr_6 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 283u, 0x08B653C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A55F50u) goto L_08A55F50;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A55F50:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08A55F5Cu);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    goto L_08A564A4;
L_08A55F5C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(704)));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(5824));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_4 = (2236u << 16u);
      if (branch_taken) {
          goto L_08A55F78;
      }
      goto L_08A55F6C;
    }
L_08A55F6C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(704)));
    aot_gpr_31 = (0x08A55F78u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(25856));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE8F4, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A55F78u) goto L_08A55F78;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A55F78:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08A55FF8;
      }
      goto L_08A55F80;
    }
L_08A55F80:
    aot_gpr_31 = (0x08A55F88u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    ctx.pc = 0x08B72FBCu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A55F88:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_2) >= 0;
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), aot_gpr_2);
      if (branch_taken) {
          goto L_08A55FE4;
      }
      goto L_08A55F90;
    }
L_08A55F90:
    aot_gpr_4 = (2232u << 16u);
    ctx.gpr[18] = (aot_gpr_4 + static_cast<std::uint32_t>(7800));
    ctx.gpr[17] = (aot_gpr_29 + static_cast<std::uint32_t>(708));
    aot_gpr_31 = (0x08A55FA4u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58974, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A55FA4u) goto L_08A55FA4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A55FA4:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08A55FB4u);
    aot_gpr_6 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 283u, 0x08B653C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A55FB4u) goto L_08A55FB4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A55FB4:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08A55FC0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    goto L_08A564A4;
L_08A55FC0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(712)));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(5824));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_4 = (2236u << 16u);
      if (branch_taken) {
          goto L_08A55FDC;
      }
      goto L_08A55FD0;
    }
L_08A55FD0:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(712)));
    aot_gpr_31 = (0x08A55FDCu);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(25856));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE8F4, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A55FDCu) goto L_08A55FDC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A55FDC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08A55FF8;
      }
      goto L_08A55FE4;
    }
L_08A55FE4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-6128)));
    aot_gpr_5 = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-6124)));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(4), aot_gpr_6);
    goto L_08A55FF8;
L_08A55FF8:
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(716), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(736));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A56010:
    jump_target = aot_gpr_31;
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A56018:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_31);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(68)));
    aot_gpr_5 = (aot_gpr_5 & 4u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08A56044;
      }
      goto L_08A56034;
    }
L_08A56034:
    aot_gpr_31 = (0x08A5603Cu);
    goto L_08A560B0;
L_08A5603C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08A560A0;
      }
      goto L_08A56044;
    }
L_08A56044:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(68)));
    aot_gpr_5 = (aot_gpr_5 & 1u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08A560A0;
      }
      goto L_08A56054;
    }
L_08A56054:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_4);
    aot_gpr_4 = (2232u << 16u);
    ctx.gpr[16] = (aot_gpr_4 + static_cast<std::uint32_t>(7268));
    aot_gpr_31 = (0x08A56068u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58974, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A56068u) goto L_08A56068;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A56068:
    aot_gpr_4 = (aot_gpr_29 | 0u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08A56078u);
    aot_gpr_6 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 283u, 0x08B653C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A56078u) goto L_08A56078;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A56078:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    aot_gpr_31 = (0x08A56084u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    goto L_08A564A4;
L_08A56084:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(5824));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_5 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08A560A0;
      }
      goto L_08A56094;
    }
L_08A56094:
    aot_gpr_4 = (2236u << 16u);
    aot_gpr_31 = (0x08A560A0u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(25856));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE8F4, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A560A0u) goto L_08A560A0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A560A0:
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(12)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A560B0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    aot_gpr_31 = (0x08A560C8u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    goto L_08A560FC;
L_08A560C8:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_08A560D8;
      }
      goto L_08A560D0;
    }
L_08A560D0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08A560EC;
      }
      goto L_08A560D8;
    }
L_08A560D8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-6136)));
    aot_gpr_5 = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-6132)));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(4), aot_gpr_6);
    goto L_08A560EC;
L_08A560EC:
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A560FC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    { const std::uint32_t aot_run_words[6]{ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_run_words); }
    ctx.gpr[16] = (aot_gpr_5 | 0u);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_29 | 0u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x08A56130u);
    aot_gpr_6 = (0u | 8u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B5814C, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[9], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A56130u) goto L_08A56130;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A56130:
    aot_gpr_4 = (aot_gpr_29 | 0u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08A56140u);
    aot_gpr_6 = (0u | 8u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A56140u) goto L_08A56140;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A56140:
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), 0u);
    aot_gpr_31 = (0x08A5614Cu);
    aot_gpr_4 = (aot_gpr_29 | 0u);
    ctx.pc = 0x08B72FA4u;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A5614C:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_2) >= 0;
      if (branch_taken) {
          goto L_08A561EC;
      }
      goto L_08A56154;
    }
L_08A56154:
    aot_gpr_4 = (2232u << 16u);
    ctx.gpr[18] = (aot_gpr_4 + static_cast<std::uint32_t>(7828));
    aot_gpr_31 = (0x08A56164u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58974, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A56164u) goto L_08A56164;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A56164:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08A56174u);
    aot_gpr_6 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 283u, 0x08B653C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A56174u) goto L_08A56174;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A56174:
    ctx.gpr[19] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (aot_gpr_29 + static_cast<std::uint32_t>(8));
    ctx.gpr[20] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    aot_gpr_31 = (0x08A56188u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58974, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A56188u) goto L_08A56188;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A56188:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    aot_gpr_6 = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08A561A0u);
    ctx.gpr[8] = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0217_entry, 217u, 7u, 0x08B6804Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A561A0u) goto L_08A561A0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A561A0:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08A561ACu);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    goto L_08A564A4;
L_08A561AC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(12)));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(5824));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_4 = (2236u << 16u);
      if (branch_taken) {
          goto L_08A561C8;
      }
      goto L_08A561BC;
    }
L_08A561BC:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(12)));
    aot_gpr_31 = (0x08A561C8u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(25856));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE8F4, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A561C8u) goto L_08A561C8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A561C8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(5824));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_4 = (2236u << 16u);
      if (branch_taken) {
          goto L_08A561E4;
      }
      goto L_08A561D8;
    }
L_08A561D8:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    aot_gpr_31 = (0x08A561E4u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(25856));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE8F4, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A561E4u) goto L_08A561E4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A561E4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08A561F0;
      }
      goto L_08A561EC;
    }
L_08A561EC:
    aot_gpr_2 = (0u | 1u);
    goto L_08A561F0;
L_08A561F0:
    { std::uint32_t aot_run_words[6]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      ctx.gpr[20] = aot_run_words[4];
      aot_gpr_31 = aot_run_words[5];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A56210:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-64));
    { const std::uint32_t aot_run_words[4]{ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(40), aot_run_words); }
    aot_gpr_31 = (0x08A5622Cu);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    goto L_08A552D8;
L_08A5622C:
    aot_gpr_4 = (ctx.gpr[16] + static_cast<std::uint32_t>(92));
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x08A5623Cu);
    aot_gpr_6 = (0u | 1064u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B5814C, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[9], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5623Cu) goto L_08A5623C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A5623C:
    aot_gpr_4 = (ctx.gpr[16] + static_cast<std::uint32_t>(2100));
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x08A5624Cu);
    aot_gpr_6 = (0u | 1064u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B5814C, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[9], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5624Cu) goto L_08A5624C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A5624C:
    aot_gpr_4 = (ctx.gpr[16] + static_cast<std::uint32_t>(1156));
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x08A5625Cu);
    aot_gpr_6 = (0u | 938u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B5814C, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[9], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5625Cu) goto L_08A5625C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A5625C:
    aot_gpr_31 = (0x08A56264u);
    aot_gpr_4 = (0u | 13620u);
    ctx.pc = 0x08B72F54u;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A56264:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_2) >= 0;
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), aot_gpr_2);
      if (branch_taken) {
          goto L_08A562C0;
      }
      goto L_08A5626C;
    }
L_08A5626C:
    aot_gpr_4 = (2232u << 16u);
    ctx.gpr[18] = (aot_gpr_4 + static_cast<std::uint32_t>(7160));
    ctx.gpr[17] = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    aot_gpr_31 = (0x08A56280u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58974, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A56280u) goto L_08A56280;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A56280:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08A56290u);
    aot_gpr_6 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 283u, 0x08B653C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A56290u) goto L_08A56290;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A56290:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08A5629Cu);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    goto L_08A564A4;
L_08A5629C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(5824));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_4 = (2236u << 16u);
      if (branch_taken) {
          goto L_08A562B8;
      }
      goto L_08A562AC;
    }
L_08A562AC:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    aot_gpr_31 = (0x08A562B8u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(25856));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE8F4, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A562B8u) goto L_08A562B8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A562B8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08A56400;
      }
      goto L_08A562C0;
    }
L_08A562C0:
    aot_gpr_6 = (2213u << 16u);
    ctx.gpr[8] = (aot_gpr_6 + static_cast<std::uint32_t>(14992));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[8] = (15u << 16u);
    ctx.gpr[9] = (31u << 16u);
    ctx.gpr[11] = (8u << 16u);
    aot_gpr_4 = (0u | 2u);
    aot_gpr_5 = (0u | 6u);
    aot_gpr_6 = (0u | 1u);
    ctx.gpr[7] = (0u | 4096u);
    ctx.gpr[10] = (0u | 3u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(16960));
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(-31616));
    aot_gpr_31 = (0x08A562FCu);
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(-24288));
    ctx.pc = 0x08B72F84u;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A562FC:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_2) >= 0;
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), aot_gpr_2);
      if (branch_taken) {
          goto L_08A56360;
      }
      goto L_08A56304;
    }
L_08A56304:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    ctx.gpr[17] = (aot_gpr_29 + static_cast<std::uint32_t>(24));
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), aot_gpr_4);
    aot_gpr_4 = (2232u << 16u);
    ctx.gpr[18] = (aot_gpr_4 + static_cast<std::uint32_t>(7196));
    aot_gpr_31 = (0x08A56320u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58974, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A56320u) goto L_08A56320;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A56320:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08A56330u);
    aot_gpr_6 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 283u, 0x08B653C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A56330u) goto L_08A56330;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A56330:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08A5633Cu);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    goto L_08A564A4;
L_08A5633C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(28)));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(5824));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_4 = (2236u << 16u);
      if (branch_taken) {
          goto L_08A56358;
      }
      goto L_08A5634C;
    }
L_08A5634C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(28)));
    aot_gpr_31 = (0x08A56358u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(25856));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE8F4, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A56358u) goto L_08A56358;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A56358:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08A56400;
      }
      goto L_08A56360;
    }
L_08A56360:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    aot_gpr_5 = (0u | 16u);
    aot_gpr_6 = (0u | 8192u);
    ctx.gpr[7] = (0u | 16u);
    ctx.gpr[8] = (0u | 8192u);
    ctx.gpr[9] = (0u | 0u);
    aot_gpr_31 = (0x08A56380u);
    ctx.gpr[10] = (0u | 0u);
    ctx.pc = 0x08B72F74u;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A56380:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_2) >= 0;
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), aot_gpr_2);
      if (branch_taken) {
          goto L_08A563DC;
      }
      goto L_08A56388;
    }
L_08A56388:
    aot_gpr_4 = (2232u << 16u);
    ctx.gpr[18] = (aot_gpr_4 + static_cast<std::uint32_t>(7236));
    ctx.gpr[17] = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    aot_gpr_31 = (0x08A5639Cu);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58974, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5639Cu) goto L_08A5639C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A5639C:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08A563ACu);
    aot_gpr_6 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 283u, 0x08B653C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A563ACu) goto L_08A563AC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A563AC:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08A563B8u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    goto L_08A564A4;
L_08A563B8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(36)));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(5824));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_4 = (2236u << 16u);
      if (branch_taken) {
          goto L_08A563D4;
      }
      goto L_08A563C8;
    }
L_08A563C8:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(36)));
    aot_gpr_31 = (0x08A563D4u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(25856));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE8F4, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A563D4u) goto L_08A563D4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A563D4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08A56400;
      }
      goto L_08A563DC;
    }
L_08A563DC:
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-6144)));
    aot_gpr_5 = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-6140)));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(4), aot_gpr_6);
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), aot_gpr_4);
    aot_gpr_2 = (0u | 1u);
    goto L_08A56400;
L_08A56400:
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(40), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A56418:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_31);
    aot_gpr_31 = (0x08A56438u);
    ctx.gpr[16] = (aot_gpr_5 | 0u);
    goto L_08A56714;
L_08A56438:
    aot_gpr_4 = (ctx.gpr[16] << 4u);
    aot_gpr_5 = (ctx.gpr[16] + aot_gpr_4);
    aot_gpr_5 = (aot_gpr_5 << 3u);
    aot_gpr_6 = (aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[18] = (aot_gpr_4 + aot_gpr_5);
    { const bool branch_taken = aot_gpr_6 == 0u;
    ctx.gpr[18] = (ctx.gpr[17] + ctx.gpr[18]);
      if (branch_taken) {
          goto L_08A5646C;
      }
      goto L_08A56454;
    }
L_08A56454:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[16];
      if (branch_taken) {
          goto L_08A5646C;
      }
      goto L_08A56460;
    }
L_08A56460:
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(2100), 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(92), 0u);
      if (branch_taken) {
          goto L_08A56484;
      }
      goto L_08A5646C;
    }
L_08A5646C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(84)));
    aot_gpr_31 = (0x08A56478u);
    aot_gpr_5 = (ctx.gpr[18] + static_cast<std::uint32_t>(2104));
    ctx.pc = 0x08B72F8Cu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A56478:
    aot_gpr_4 = (0u | 2u);
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(2100), aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(92), aot_gpr_4);
    goto L_08A56484;
L_08A56484:
    aot_gpr_31 = (0x08A5648Cu);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    goto L_08A56738;
L_08A5648C:
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
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
L_08A564A4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    aot_gpr_31 = (0x08A564C0u);
    ctx.gpr[17] = (aot_gpr_5 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0147_entry, 147u, 764u, 0x08A53F2Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A564C0u) goto L_08A564C0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A564C0:
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (0x08A564D8u);
    aot_gpr_4 = (ctx.gpr[16] + static_cast<std::uint32_t>(72));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 319u, 0x08B655B8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A564D8u) goto L_08A564D8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A564D8:
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
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A564EC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-176));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(140), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(144), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    ctx.gpr[16] = (aot_gpr_5 | 0u);
    { const std::uint32_t aot_run_words[5]{ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(148), aot_run_words); }
    aot_gpr_31 = (0x08A5651Cu);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    goto L_08A56714;
L_08A5651C:
    ctx.gpr[20] = (ctx.gpr[17] | 0u);
    ctx.gpr[18] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[19] = (ctx.gpr[20] + static_cast<std::uint32_t>(2104));
    goto L_08A5652C;
L_08A5652C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(2100)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08A56540;
      }
      goto L_08A56538;
    }
L_08A56538:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[21] | 0u);
      if (branch_taken) {
          goto L_08A56558;
      }
      goto L_08A56540;
    }
L_08A56540:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08A56550u);
    aot_gpr_6 = (0u | 6u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58100, 213u, 23u, 0x08B58100u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[9], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 23u, 0x08B58100u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A56550u) goto L_08A56550;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A56550:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08A56574;
      }
      goto L_08A56558;
    }
L_08A56558:
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(152));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[21]) < 7 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(152));
      if (branch_taken) {
          goto L_08A5652C;
      }
      goto L_08A5656C;
    }
L_08A5656C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08A5657C;
      }
      goto L_08A56574;
    }
L_08A56574:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (ctx.gpr[21] | 0u);
      if (branch_taken) {
          goto L_08A566F0;
      }
      goto L_08A5657C;
    }
L_08A5657C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) < 0;
      if (branch_taken) {
          goto L_08A56598;
      }
      goto L_08A56584;
    }
L_08A56584:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[17] + static_cast<std::uint32_t>(18))))));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08A565C4;
      }
      goto L_08A56590;
    }
L_08A56590:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[17] + static_cast<std::uint32_t>(16))))));
      if (branch_taken) {
          goto L_08A565A8;
      }
      goto L_08A56598;
    }
L_08A56598:
    aot_gpr_31 = (0x08A565A0u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    goto L_08A56738;
L_08A565A0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A566F0;
      }
      goto L_08A565A8;
    }
L_08A565A8:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08A565C4;
      }
      goto L_08A565B0;
    }
L_08A565B0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    aot_gpr_5 = (2213u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(21964));
    { const bool branch_taken = aot_gpr_5 == aot_gpr_4;
    aot_gpr_4 = (ctx.gpr[18] << 4u);
      if (branch_taken) {
          goto L_08A566A0;
      }
      goto L_08A565C4;
    }
L_08A565C4:
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(12));
    aot_gpr_31 = (0x08A565D0u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    ctx.pc = 0x08B72FCCu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A565D0:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_2) >= 0;
      if (branch_taken) {
          goto L_08A5669C;
      }
      goto L_08A565D8;
    }
L_08A565D8:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1))))));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2))))));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3))))));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(4))))));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(aot_gpr_6));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(5))))));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(aot_gpr_6));
    aot_gpr_31 = (0x08A56610u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    goto L_08A54F5C;
L_08A56610:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_2 + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_2 + static_cast<std::uint32_t>(1))))));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_2 + static_cast<std::uint32_t>(2))))));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_2 + static_cast<std::uint32_t>(3))))));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(7), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_2 + static_cast<std::uint32_t>(4))))));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(aot_gpr_6));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_2 + static_cast<std::uint32_t>(5))))));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(aot_gpr_6));
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(6));
    aot_gpr_6 = (aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr_6 != ctx.gpr[7];
    aot_gpr_5 = (0u | 0u);
      if (branch_taken) {
          goto L_08A56678;
      }
      goto L_08A56654;
    }
L_08A56654:
    aot_gpr_6 = (aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(2)));
    ctx.gpr[7] = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(2)));
    if (aot_gpr_6 != ctx.gpr[7]) {
    aot_gpr_4 = (aot_gpr_5 & 255u);
        goto L_08A5667C;
    }
    goto L_08A56664;
L_08A56664:
    aot_gpr_6 = (aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_6 != aot_gpr_4;
    aot_gpr_4 = (aot_gpr_5 & 255u);
      if (branch_taken) {
          goto L_08A5667C;
      }
      goto L_08A56674;
    }
L_08A56674:
    aot_gpr_5 = (0u | 1u);
    goto L_08A56678;
L_08A56678:
    aot_gpr_4 = (aot_gpr_5 & 255u);
    goto L_08A5667C;
L_08A5667C:
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08A5669C;
      }
      goto L_08A5668C;
    }
L_08A5668C:
    aot_gpr_31 = (0x08A56694u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    goto L_08A56738;
L_08A56694:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A566F0;
      }
      goto L_08A5669C;
    }
L_08A5669C:
    aot_gpr_4 = (ctx.gpr[18] << 4u);
    goto L_08A566A0;
L_08A566A0:
    aot_gpr_5 = (ctx.gpr[18] + aot_gpr_4);
    aot_gpr_5 = (aot_gpr_5 << 3u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_6 = (0u | 1u);
    aot_gpr_4 = (ctx.gpr[17] + aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(2100), aot_gpr_6);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1))))));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(2104));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2))))));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3))))));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(aot_gpr_6));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(4))))));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(5))))));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr_6));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_gpr_2 = (ctx.gpr[18] | 0u);
    goto L_08A566F0;
L_08A566F0:
    { std::uint32_t aot_run_words[7]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(140), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      ctx.gpr[20] = aot_run_words[4];
      ctx.gpr[21] = aot_run_words[5];
      aot_gpr_31 = aot_run_words[6];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(176));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A56714:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(2096)));
    aot_gpr_5 = (0u | 1u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x08A5672Cu);
    aot_gpr_6 = (0u | 0u);
    ctx.pc = 0x08B734BCu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A5672C:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A56738:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(2096)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x08A5674Cu);
    aot_gpr_5 = (0u | 1u);
    ctx.pc = 0x08B734A4u;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A5674C:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A56758:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_5 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (0u | 0u);
    { const std::uint32_t aot_run_words[6]{ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_run_words); }
    aot_gpr_31 = (0x08A5678Cu);
    aot_gpr_6 = (0u | 8u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B5814C, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[9], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5678Cu) goto L_08A5678C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A5678C:
    ctx.gpr[19] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-6052)));
    ctx.gpr[18] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-6056)));
    ctx.gpr[21] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-6044)));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[20] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-6048)));
    goto L_08A567A0;
L_08A567A0:
    aot_gpr_31 = (0x08A567A8u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20934, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A567A8u) goto L_08A567A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A567A8:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_5 = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x08A567BCu);
    aot_gpr_6 = (ctx.gpr[18] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B60E5C, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, ctx.gpr[3], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[9], ctx.gpr[10], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A567BCu) goto L_08A567BC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A567BC:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    aot_gpr_4 = (aot_gpr_2 >> 31u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    aot_gpr_4 = (ctx.gpr[1] | aot_gpr_4);
    aot_gpr_6 = (aot_gpr_4 + ctx.gpr[20]);
    ctx.gpr[7] = (aot_gpr_6 < ctx.gpr[20] ? 1u : 0u);
    aot_gpr_4 = (ctx.gpr[7] + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_4 + ctx.gpr[21]);
    aot_gpr_4 = (aot_gpr_6 | 0u);
    aot_gpr_6 = (ctx.gpr[16] + ctx.gpr[17]);
    aot_gpr_4 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store8(aot_gpr_6 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_4));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (ctx.gpr[17] < static_cast<std::uint32_t>(8) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08A567A0;
      }
      goto L_08A567FC;
    }
L_08A567FC:
    { std::uint32_t aot_run_words[7]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      ctx.gpr[20] = aot_run_words[4];
      ctx.gpr[21] = aot_run_words[5];
      aot_gpr_31 = aot_run_words[6];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A56820:
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_08A56840;
      }
      goto L_08A56828;
    }
L_08A56828:
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(64), aot_gpr_6);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(68));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_5 | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
      if (branch_taken) {
          goto L_08A568A8;
      }
      goto L_08A56840;
    }
L_08A56840:
    aot_gpr_6 = (0u | 1u);
    { const bool branch_taken = aot_gpr_5 != aot_gpr_6;
      if (branch_taken) {
          goto L_08A56864;
      }
      goto L_08A5684C;
    }
L_08A5684C:
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(64), 0u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(68));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_5 | 2u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
      if (branch_taken) {
          goto L_08A568A8;
      }
      goto L_08A56864;
    }
L_08A56864:
    aot_gpr_6 = (0u | 2u);
    { const bool branch_taken = aot_gpr_5 != aot_gpr_6;
      if (branch_taken) {
          goto L_08A56888;
      }
      goto L_08A56870;
    }
L_08A56870:
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(64), 0u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(68));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_5 | 4u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
      if (branch_taken) {
          goto L_08A568A8;
      }
      goto L_08A56888;
    }
L_08A56888:
    aot_gpr_6 = (0u | 3u);
    { const bool branch_taken = aot_gpr_5 != aot_gpr_6;
      if (branch_taken) {
          goto L_08A568A8;
      }
      goto L_08A56894;
    }
L_08A56894:
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(64), 0u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(68));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_5 | 8u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    goto L_08A568A8;
L_08A568A8:
    jump_target = aot_gpr_31;
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A568B0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08A568F4;
      }
      goto L_08A568C0;
    }
L_08A568C0:
    aot_gpr_6 = (2235u << 16u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-25876));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_6);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(5868), 0u);
      if (branch_taken) {
          goto L_08A568E0;
      }
      goto L_08A568D4;
    }
L_08A568D4:
    aot_gpr_6 = (2235u << 16u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-28772));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_6);
    goto L_08A568E0;
L_08A568E0:
    aot_gpr_5 = (aot_gpr_5 & 1u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08A568F4;
      }
      goto L_08A568EC;
    }
L_08A568EC:
    aot_gpr_31 = (0x08A568F4u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE2C0, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A568F4u) goto L_08A568F4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A568F4:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A56900:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    { const std::uint32_t aot_run_words[6]{ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_gpr_31 = (0x08A56924u);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    goto L_08A56714;
L_08A56924:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[20] = (2237u << 16u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-28736));
      if (branch_taken) {
          goto L_08A56AE8;
      }
      goto L_08A56934;
    }
L_08A56934:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[18] = (0u | 0u);
    goto L_08A5693C;
L_08A5693C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    ctx.gpr[19] = (aot_gpr_4 + ctx.gpr[18]);
    { const bool branch_taken = aot_gpr_5 != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(10));
      if (branch_taken) {
          goto L_08A56958;
      }
      goto L_08A56950;
    }
L_08A56950:
    aot_gpr_31 = (0x08A56958u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 452u, 0x08B65D8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A56958u) goto L_08A56958;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A56958:
    aot_gpr_31 = (0x08A56960u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    goto L_08A54F5C;
L_08A56960:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_6 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_direct_load16(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[7] != aot_gpr_6;
    aot_gpr_5 = (0u | 0u);
      if (branch_taken) {
          goto L_08A56998;
      }
      goto L_08A56974;
    }
L_08A56974:
    aot_gpr_6 = (aot_mem.aot_direct_load16(ctx.gpr[19] + static_cast<std::uint32_t>(2)));
    ctx.gpr[7] = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(2)));
    if (aot_gpr_6 != ctx.gpr[7]) {
    aot_gpr_4 = (aot_gpr_5 & 255u);
        goto L_08A5699C;
    }
    goto L_08A56984;
L_08A56984:
    aot_gpr_6 = (aot_mem.aot_direct_load16(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_6 != aot_gpr_4;
    aot_gpr_4 = (aot_gpr_5 & 255u);
      if (branch_taken) {
          goto L_08A5699C;
      }
      goto L_08A56994;
    }
L_08A56994:
    aot_gpr_5 = (0u | 1u);
    goto L_08A56998;
L_08A56998:
    aot_gpr_4 = (aot_gpr_5 & 255u);
    goto L_08A5699C;
L_08A5699C:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08A569C4;
      }
      goto L_08A569A4;
    }
L_08A569A4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-7072)));
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[18]);
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(aot_gpr_5));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-7076)));
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[18]);
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(aot_gpr_5));
    goto L_08A569C4;
L_08A569C4:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[17]) < 7 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(10));
      if (branch_taken) {
          goto L_08A5693C;
      }
      goto L_08A569D4;
    }
L_08A569D4:
    aot_gpr_31 = (0x08A569DCu);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ADC754, 182u, 141u, 0x08ADC754u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0182_entry, 182u, 141u, 0x08ADC754u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A569DCu) goto L_08A569DC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A569DC:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x08A569ECu);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(84), aot_gpr_2);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ADC734, 182u, 137u, 0x08ADC734u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0182_entry, 182u, 137u, 0x08ADC734u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A569ECu) goto L_08A569EC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A569EC:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x08A569FCu);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(80), aot_gpr_2);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 143u, 0x08ADC764u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A569FCu) goto L_08A569FC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A569FC:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x08A56A0Cu);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(88), aot_gpr_2);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ADC784, 182u, 147u, 0x08ADC784u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0182_entry, 182u, 147u, 0x08ADC784u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A56A0Cu) goto L_08A56A0C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A56A0C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x08A56A1Cu);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(92), aot_gpr_2);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 145u, 0x08ADC774u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A56A1Cu) goto L_08A56A1C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A56A1C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(100), aot_gpr_2);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(48)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(104), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[20] + static_cast<std::uint32_t>(52)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr_6 = (0u | 1u);
    aot_mem.aot_direct_store8(aot_gpr_5 + static_cast<std::uint32_t>(108), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[20] + static_cast<std::uint32_t>(54)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_direct_store16(aot_gpr_5 + static_cast<std::uint32_t>(110), static_cast<std::uint16_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(122), static_cast<std::uint8_t>(aot_gpr_6));
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[20] + static_cast<std::uint32_t>(36)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_direct_store8(aot_gpr_5 + static_cast<std::uint32_t>(112), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[20] + static_cast<std::uint32_t>(37)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x08A56A74u);
    aot_mem.aot_direct_store8(aot_gpr_6 + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(aot_gpr_5));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 149u, 0x08ADC794u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A56A74u) goto L_08A56A74;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A56A74:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x08A56A84u);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(96), aot_gpr_2);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 151u, 0x08ADC7A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A56A84u) goto L_08A56A84;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A56A84:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x08A56A94u);
    aot_mem.aot_direct_store8(aot_gpr_5 + static_cast<std::uint32_t>(123), static_cast<std::uint8_t>(aot_gpr_2));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 153u, 0x08ADC7B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A56A94u) goto L_08A56A94;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A56A94:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (0u | 0u);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(124), static_cast<std::uint8_t>(aot_gpr_2));
    goto L_08A56AA0;
L_08A56AA0:
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x08A56AACu);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 396u, 0x08ADD774u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A56AACu) goto L_08A56AAC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A56AAC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[17]);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(114), static_cast<std::uint8_t>(aot_gpr_2));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[17]) < 6 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08A56AA0;
      }
      goto L_08A56AC8;
    }
L_08A56AC8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) < 0;
      if (branch_taken) {
          goto L_08A56BD8;
      }
      goto L_08A56AD4;
    }
L_08A56AD4:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr_31 = (0x08A56AE0u);
    aot_gpr_5 = (0u | 136u);
    ctx.pc = 0x08B72F7Cu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A56AE0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08A56BD8;
      }
      goto L_08A56AE8;
    }
L_08A56AE8:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x08A56AF8u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(84)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 138u, 0x08ADC73Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A56AF8u) goto L_08A56AF8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A56AF8:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x08A56B08u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(80)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 136u, 0x08ADC72Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A56B08u) goto L_08A56B08;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A56B08:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x08A56B18u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(88)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 142u, 0x08ADC75Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A56B18u) goto L_08A56B18;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A56B18:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x08A56B28u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(92)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 146u, 0x08ADC77Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A56B28u) goto L_08A56B28;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A56B28:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x08A56B38u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(100)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 144u, 0x08ADC76Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A56B38u) goto L_08A56B38;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A56B38:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(104)));
    aot_mem.aot_direct_store32(ctx.gpr[20] + static_cast<std::uint32_t>(48), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(108)));
    aot_mem.aot_direct_store8(ctx.gpr[20] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(110)));
    aot_mem.aot_direct_store16(ctx.gpr[20] + static_cast<std::uint32_t>(54), static_cast<std::uint16_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(112)));
    aot_mem.aot_direct_store8(ctx.gpr[20] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(113)));
    aot_mem.aot_direct_store8(ctx.gpr[20] + static_cast<std::uint32_t>(37), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x08A56B84u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(96)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 148u, 0x08ADC78Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A56B84u) goto L_08A56B84;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A56B84:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(122)));
    aot_mem.aot_direct_store8(ctx.gpr[20] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x08A56BA0u);
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(123)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 150u, 0x08ADC79Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A56BA0u) goto L_08A56BA0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A56BA0:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x08A56BB0u);
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(124)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 152u, 0x08ADC7ACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A56BB0u) goto L_08A56BB0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A56BB0:
    aot_gpr_4 = (0u | 0u);
    goto L_08A56BB4;
L_08A56BB4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr_6 = (aot_gpr_4 + ctx.gpr[20]);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(114)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store8(aot_gpr_6 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 8 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_08A56BB4;
      }
      goto L_08A56BD8;
    }
L_08A56BD8:
    aot_gpr_31 = (0x08A56BE0u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    goto L_08A56738;
L_08A56BE0:
    { std::uint32_t aot_run_words[6]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
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
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A56C00:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(18))))));
    { const std::uint32_t aot_run_words[4]{ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_run_words); }
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    ctx.gpr[17] = (aot_gpr_6 | 0u);
    ctx.gpr[18] = (ctx.gpr[7] | 0u);
    ctx.gpr[19] = (ctx.gpr[8] | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(40), aot_gpr_31);
    { const bool branch_taken = aot_gpr_5 != 0u;
    ctx.gpr[20] = (ctx.gpr[9] | 0u);
      if (branch_taken) {
          goto L_08A56C58;
      }
      goto L_08A56C38;
    }
L_08A56C38:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(16))))));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(18))))));
        goto L_08A56C5C;
    }
    goto L_08A56C44;
L_08A56C44:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr_5 = (2213u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(23184));
    { const bool branch_taken = aot_gpr_5 == aot_gpr_4;
      if (branch_taken) {
          goto L_08A56D3C;
      }
      goto L_08A56C58;
    }
L_08A56C58:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(18))))));
    goto L_08A56C5C;
L_08A56C5C:
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(18))))));
        goto L_08A56C88;
    }
    goto L_08A56C64;
L_08A56C64:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(16))))));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(18))))));
        goto L_08A56C88;
    }
    goto L_08A56C70;
L_08A56C70:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr_5 = (2213u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(23744));
    { const bool branch_taken = aot_gpr_5 == aot_gpr_4;
      if (branch_taken) {
          goto L_08A56D3C;
      }
      goto L_08A56C84;
    }
L_08A56C84:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(18))))));
    goto L_08A56C88;
L_08A56C88:
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(18))))));
        goto L_08A56CB4;
    }
    goto L_08A56C90;
L_08A56C90:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(16))))));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(18))))));
        goto L_08A56CB4;
    }
    goto L_08A56C9C;
L_08A56C9C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr_5 = (2213u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(23908));
    { const bool branch_taken = aot_gpr_5 == aot_gpr_4;
      if (branch_taken) {
          goto L_08A56D3C;
      }
      goto L_08A56CB0;
    }
L_08A56CB0:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(18))))));
    goto L_08A56CB4;
L_08A56CB4:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08A56CDC;
      }
      goto L_08A56CBC;
    }
L_08A56CBC:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(16))))));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08A56CDC;
      }
      goto L_08A56CC8;
    }
L_08A56CC8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr_5 = (2213u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(24592));
    { const bool branch_taken = aot_gpr_5 == aot_gpr_4;
      if (branch_taken) {
          goto L_08A56D3C;
      }
      goto L_08A56CDC;
    }
L_08A56CDC:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08A56CE8u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    goto L_08A564EC;
L_08A56CE8:
    aot_gpr_5 = (aot_gpr_2 | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_5) < 0;
      if (branch_taken) {
          goto L_08A56D34;
      }
      goto L_08A56CF4;
    }
L_08A56CF4:
    aot_gpr_4 = (aot_gpr_5 << 4u);
    aot_gpr_6 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_6 = (aot_gpr_6 << 3u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    aot_gpr_4 = (ctx.gpr[16] + aot_gpr_4);
    aot_gpr_6 = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    aot_gpr_6 = (aot_gpr_6 < static_cast<std::uint32_t>(10) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(2100));
      if (branch_taken) {
          goto L_08A56F28;
      }
      goto L_08A56D18;
    }
L_08A56D18:
    aot_gpr_6 = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    aot_gpr_6 = (aot_gpr_6 << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_6);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(7856)));
    jump_target = ctx.gpr[1];
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A56D34:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08A56F30;
      }
      goto L_08A56D3C;
    }
L_08A56D3C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08A56F30;
      }
      goto L_08A56D44;
    }
L_08A56D44:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (0u | 5u);
    { const bool branch_taken = aot_gpr_5 != aot_gpr_6;
    aot_gpr_5 = (0u | 2u);
      if (branch_taken) {
          goto L_08A56D64;
      }
      goto L_08A56D54;
    }
L_08A56D54:
    aot_gpr_31 = (0x08A56D5Cu);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    goto L_08A56738;
L_08A56D5C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08A56F30;
      }
      goto L_08A56D64;
    }
L_08A56D64:
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[18] + static_cast<std::uint32_t>(1))))));
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[18] + static_cast<std::uint32_t>(2))))));
    aot_mem.aot_direct_store8(aot_gpr_6 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[18] + static_cast<std::uint32_t>(3))))));
    aot_mem.aot_direct_store8(aot_gpr_6 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[18] + static_cast<std::uint32_t>(4))))));
    aot_mem.aot_direct_store8(aot_gpr_6 + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[18] + static_cast<std::uint32_t>(5))))));
    aot_mem.aot_direct_store8(aot_gpr_6 + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store8(aot_gpr_6 + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_direct_store8(aot_gpr_6 + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[8]));
    aot_gpr_5 = (0u | 136u);
    { const bool branch_taken = ctx.gpr[19] != aot_gpr_5;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(148), 0u);
      if (branch_taken) {
          goto L_08A56E14;
      }
      goto L_08A56DA8;
    }
L_08A56DA8:
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[20]);
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[19];
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08A56DC8;
      }
      goto L_08A56DB4;
    }
L_08A56DB4:
    aot_gpr_6 = (aot_mem.aot_direct_load8(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store8(aot_gpr_5 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_6));
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[19];
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A56DB4;
      }
      goto L_08A56DC8;
    }
L_08A56DC8:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[18] + static_cast<std::uint32_t>(1))))));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[18] + static_cast<std::uint32_t>(2))))));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[18] + static_cast<std::uint32_t>(3))))));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(13), static_cast<std::uint8_t>(aot_gpr_6));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[18] + static_cast<std::uint32_t>(4))))));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(14), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[18] + static_cast<std::uint32_t>(5))))));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(15), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(aot_gpr_6));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(12))))));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(14))))));
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(12));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(16))))));
    aot_mem.aot_direct_store16(aot_gpr_6 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_5));
    aot_mem.aot_direct_store16(aot_gpr_6 + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[7]));
    aot_mem.aot_direct_store16(aot_gpr_6 + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[8]));
    goto L_08A56E14;
L_08A56E14:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(1))))));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(2))))));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(3))))));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(aot_gpr_6));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(4))))));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(5))))));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr_6));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08A56E54u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    goto L_08A54D38;
L_08A56E54:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08A56D54;
      }
      goto L_08A56E5C;
    }
L_08A56E5C:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = aot_gpr_5 != aot_gpr_6;
      if (branch_taken) {
          goto L_08A56E6C;
      }
      goto L_08A56E68;
    }
L_08A56E68:
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), 0u);
    goto L_08A56E6C;
L_08A56E6C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08A56D54;
      }
      goto L_08A56E74;
    }
L_08A56E74:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08A56D54;
      }
      goto L_08A56E7C;
    }
L_08A56E7C:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[18] + static_cast<std::uint32_t>(1))))));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[18] + static_cast<std::uint32_t>(2))))));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[18] + static_cast<std::uint32_t>(3))))));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(7), static_cast<std::uint8_t>(aot_gpr_6));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[18] + static_cast<std::uint32_t>(4))))));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[18] + static_cast<std::uint32_t>(5))))));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(aot_gpr_6));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(6))))));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(8))))));
    aot_gpr_6 = (ctx.gpr[16] + static_cast<std::uint32_t>(28));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(10))))));
    aot_mem.aot_direct_store16(aot_gpr_6 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_5));
    aot_mem.aot_direct_store16(aot_gpr_6 + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[7]));
    aot_mem.aot_direct_store16(aot_gpr_6 + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[8]));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(12));
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), aot_gpr_5);
    aot_gpr_5 = (0u | 5u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
      if (branch_taken) {
          goto L_08A56D54;
      }
      goto L_08A56EDC;
    }
L_08A56EDC:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = aot_gpr_5 != aot_gpr_6;
      if (branch_taken) {
          goto L_08A56EF0;
      }
      goto L_08A56EE8;
    }
L_08A56EE8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          goto L_08A56D54;
      }
      goto L_08A56EF0;
    }
L_08A56EF0:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (0u | 5u);
    { const bool branch_taken = aot_gpr_6 != ctx.gpr[7];
      if (branch_taken) {
          goto L_08A56F08;
      }
      goto L_08A56F00;
    }
L_08A56F00:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08A56D54;
      }
      goto L_08A56F08;
    }
L_08A56F08:
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = aot_gpr_5 == aot_gpr_4;
      if (branch_taken) {
          goto L_08A56F20;
      }
      goto L_08A56F18;
    }
L_08A56F18:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08A56D54;
      }
      goto L_08A56F20;
    }
L_08A56F20:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08A56D54;
      }
      goto L_08A56F28;
    }
L_08A56F28:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08A56D54;
      }
      goto L_08A56F30;
    }
L_08A56F30:
    { std::uint32_t aot_run_words[6]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      ctx.gpr[20] = aot_run_words[4];
      aot_gpr_31 = aot_run_words[5];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A56F50:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(18))))));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    ctx.gpr[18] = (aot_gpr_4 | 0u);
    ctx.gpr[17] = (aot_gpr_6 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(36), aot_gpr_31);
    { const bool branch_taken = aot_gpr_5 != 0u;
    ctx.gpr[16] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08A56F9C;
      }
      goto L_08A56F7C;
    }
L_08A56F7C:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[18] + static_cast<std::uint32_t>(16))))));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[18] + static_cast<std::uint32_t>(18))))));
        goto L_08A56FA0;
    }
    goto L_08A56F88;
L_08A56F88:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    aot_gpr_5 = (2213u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(23184));
    { const bool branch_taken = aot_gpr_5 == aot_gpr_4;
      if (branch_taken) {
          goto L_08A57054;
      }
      goto L_08A56F9C;
    }
L_08A56F9C:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[18] + static_cast<std::uint32_t>(18))))));
    goto L_08A56FA0;
L_08A56FA0:
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[18] + static_cast<std::uint32_t>(18))))));
        goto L_08A56FCC;
    }
    goto L_08A56FA8;
L_08A56FA8:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[18] + static_cast<std::uint32_t>(16))))));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[18] + static_cast<std::uint32_t>(18))))));
        goto L_08A56FCC;
    }
    goto L_08A56FB4;
L_08A56FB4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    aot_gpr_5 = (2213u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(23744));
    { const bool branch_taken = aot_gpr_5 == aot_gpr_4;
      if (branch_taken) {
          goto L_08A57054;
      }
      goto L_08A56FC8;
    }
L_08A56FC8:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[18] + static_cast<std::uint32_t>(18))))));
    goto L_08A56FCC;
L_08A56FCC:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08A56FF4;
      }
      goto L_08A56FD4;
    }
L_08A56FD4:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[18] + static_cast<std::uint32_t>(16))))));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08A56FF4;
      }
      goto L_08A56FE0;
    }
L_08A56FE0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    aot_gpr_5 = (2213u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(24592));
    { const bool branch_taken = aot_gpr_5 == aot_gpr_4;
      if (branch_taken) {
          goto L_08A57054;
      }
      goto L_08A56FF4;
    }
L_08A56FF4:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08A57000u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    goto L_08A564EC;
L_08A57000:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) < 0;
      if (branch_taken) {
          goto L_08A5704C;
      }
      goto L_08A5700C;
    }
L_08A5700C:
    aot_gpr_5 = (aot_gpr_4 << 4u);
    aot_gpr_6 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_6 = (aot_gpr_6 << 3u);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    ctx.gpr[19] = (ctx.gpr[18] + aot_gpr_5);
    aot_gpr_5 = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    aot_gpr_5 = (aot_gpr_5 < static_cast<std::uint32_t>(10) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(2100));
      if (branch_taken) {
          goto L_08A57104;
      }
      goto L_08A57030;
    }
L_08A57030:
    aot_gpr_5 = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    aot_gpr_5 = (aot_gpr_5 << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_5);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(7896)));
    jump_target = ctx.gpr[1];
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A5704C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08A57278;
      }
      goto L_08A57054;
    }
L_08A57054:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08A57278;
      }
      goto L_08A5705C;
    }
L_08A5705C:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[18] + static_cast<std::uint32_t>(18))))));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08A5709C;
      }
      goto L_08A57068;
    }
L_08A57068:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[18] + static_cast<std::uint32_t>(16))))));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08A5709C;
      }
      goto L_08A57074;
    }
L_08A57074:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    aot_gpr_5 = (2213u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(23100));
    { const bool branch_taken = aot_gpr_5 != aot_gpr_4;
      if (branch_taken) {
          goto L_08A5709C;
      }
      goto L_08A57088;
    }
L_08A57088:
    aot_gpr_31 = (0x08A57090u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    goto L_08A54FEC;
L_08A57090:
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_2) < 7 ? 1u : 0u);
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
        goto L_08A570B0;
    }
    goto L_08A5709C;
L_08A5709C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(84)));
    aot_gpr_31 = (0x08A570A8u);
    aot_gpr_5 = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
    ctx.pc = 0x08B72F8Cu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A570A8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08A57104;
      }
      goto L_08A570B0;
    }
L_08A570B0:
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1))))));
    aot_gpr_5 = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2))))));
    aot_mem.aot_direct_store8(aot_gpr_5 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3))))));
    aot_mem.aot_direct_store8(aot_gpr_5 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(aot_gpr_6));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(4))))));
    aot_mem.aot_direct_store8(aot_gpr_5 + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(5))))));
    aot_mem.aot_direct_store8(aot_gpr_5 + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(aot_gpr_5 + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr_6));
    aot_mem.aot_direct_store8(aot_gpr_5 + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(84)));
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    aot_gpr_6 = (0u | 0u);
    aot_gpr_31 = (0x08A570F4u);
    ctx.gpr[7] = (0u | 0u);
    ctx.pc = 0x08B72F64u;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A570F4:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_2) < 0;
      if (branch_taken) {
          goto L_08A57104;
      }
      goto L_08A570FC;
    }
L_08A570FC:
    aot_gpr_4 = (0u | 3u);
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), aot_gpr_4);
    goto L_08A57104;
L_08A57104:
    aot_gpr_31 = (0x08A5710Cu);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    goto L_08A56738;
L_08A5710C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08A57278;
      }
      goto L_08A57114;
    }
L_08A57114:
    aot_gpr_5 = (0u | 5u);
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1))))));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2))))));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3))))));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(aot_gpr_6));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(4))))));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(5))))));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr_6));
    aot_gpr_5 = (aot_gpr_4 << 3u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_5);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_6 + aot_gpr_4);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(2))))));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(10));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(4))))));
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_5));
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(aot_gpr_6));
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[7]));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1))))));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2))))));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3))))));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(7), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(4))))));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(aot_gpr_6));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(5))))));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(aot_gpr_6));
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(6));
    aot_gpr_31 = (0x08A571B8u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    goto L_08A54D38;
L_08A571B8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(84)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    aot_gpr_31 = (0x08A571C8u);
    aot_gpr_5 = (0u | 136u);
    ctx.pc = 0x08B72F7Cu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A571C8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08A57104;
      }
      goto L_08A571D0;
    }
L_08A571D0:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (0u | 3u);
    { const bool branch_taken = aot_gpr_5 != aot_gpr_6;
      if (branch_taken) {
          goto L_08A571E8;
      }
      goto L_08A571E0;
    }
L_08A571E0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          goto L_08A57104;
      }
      goto L_08A571E8;
    }
L_08A571E8:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (0u | 6u);
    { const bool branch_taken = aot_gpr_5 != aot_gpr_6;
      if (branch_taken) {
          goto L_08A57200;
      }
      goto L_08A571F8;
    }
L_08A571F8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08A57104;
      }
      goto L_08A57200;
    }
L_08A57200:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (0u | 5u);
    { const bool branch_taken = aot_gpr_5 != aot_gpr_6;
    aot_gpr_5 = (0u | 255u);
      if (branch_taken) {
          goto L_08A57268;
      }
      goto L_08A57210;
    }
L_08A57210:
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(13), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(14), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(15), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(aot_gpr_5));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    aot_gpr_6 = (aot_gpr_4 << 3u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_6);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(12))))));
    aot_gpr_4 = (ctx.gpr[7] + aot_gpr_4);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(14))))));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(10));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(16))))));
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_5));
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(aot_gpr_6));
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[7]));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(84)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    aot_gpr_31 = (0x08A57268u);
    aot_gpr_5 = (0u | 136u);
    ctx.pc = 0x08B72F7Cu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A57268:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          goto L_08A57104;
      }
      goto L_08A57270;
    }
L_08A57270:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08A57104;
      }
      goto L_08A57278;
    }
L_08A57278:
    { std::uint32_t aot_run_words[5]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      aot_gpr_31 = aot_run_words[4];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A57294:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[16] = (aot_gpr_5 | 0u);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    aot_gpr_31 = (0x08A572B4u);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 555u, 0x088079D0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A572B4u) goto L_08A572B4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A572B4:
    aot_mem.aot_direct_store16(aot_gpr_2 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[16]));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-5916));
    aot_gpr_31 = (0x08A572C4u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 249u, 0x0889D344u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A572C4u) goto L_08A572C4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A572C4:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08A572D0u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-2));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 492u, 0x08807510u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A572D0u) goto L_08A572D0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A572D0:
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
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A572E4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x08A572F4u);
    aot_gpr_6 = (ctx.gpr[28] + static_cast<std::uint32_t>(-5916));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 252u, 0x0889D374u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A572F4u) goto L_08A572F4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A572F4:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A57300:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-128));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(88), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    { const std::uint32_t aot_run_words[9]{ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], ctx.gpr[23], ctx.gpr[30], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(92), aot_run_words); }
    aot_gpr_31 = (0x08A57340u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806A88, 0u, 360u, 0x08806A88u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 360u, 0x08806A88u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A57340u) goto L_08A57340;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A57340:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_0));
    aot_gpr_4 = (aot_gpr_29 | 0u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    aot_gpr_6 = (0u | 2u);
    ctx.gpr[7] = (0u | 1u);
    aot_gpr_31 = (0x08A5735Cu);
    ctx.gpr[30] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0075_entry, 75u, 315u, 0x08931AF4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5735Cu) goto L_08A5735C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A5735C:
    ctx.gpr[23] = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    aot_gpr_4 = (ctx.gpr[23] | 0u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    aot_gpr_6 = (0u | 3u);
    aot_gpr_31 = (0x08A57374u);
    ctx.gpr[7] = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0075_entry, 75u, 315u, 0x08931AF4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A57374u) goto L_08A57374;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A57374:
    aot_gpr_4 = (16608u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[22] = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_31 = (0x08A57394u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806634, 0u, 302u, 0x08806634u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 302u, 0x08806634u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A57394u) goto L_08A57394;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A57394:
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_2) < 4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08A573BC;
      }
      goto L_08A573A0;
    }
L_08A573A0:
    ctx.gpr[17] = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08A573B4u);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0075_entry, 75u, 406u, 0x08932014u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A573B4u) goto L_08A573B4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A573B4:
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
      const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    goto L_08A573BC;
L_08A573BC:
    aot_fpr_20 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(32)));
    aot_gpr_4 = (16224u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[21] = (0u | 0u);
    { const float fs = aot_fpr_20; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_20 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_20 = fs * ft; }
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[17] = (0u | 255u);
    aot_gpr_31 = (0x08A573E8u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806634, 0u, 302u, 0x08806634u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 302u, 0x08806634u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A573E8u) goto L_08A573E8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A573E8:
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_2) < 5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08A57454;
      }
      goto L_08A573F4;
    }
L_08A573F4:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08A57400u);
    aot_gpr_5 = (0u | 5u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806A88, 0u, 360u, 0x08806A88u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 360u, 0x08806A88u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A57400u) goto L_08A57400;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A57400:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_0));
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (0u | 6u);
    ctx.gpr[20] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_31 = (0x08A57418u);
    ctx.gpr[20] = (ctx.gpr[20] & 255u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806A88, 0u, 360u, 0x08806A88u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 360u, 0x08806A88u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A57418u) goto L_08A57418;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A57418:
    aot_fpr_13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_0));
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (0u | 7u);
    ctx.gpr[19] = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_gpr_31 = (0x08A57430u);
    ctx.gpr[19] = (ctx.gpr[19] & 255u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806A88, 0u, 360u, 0x08806A88u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 360u, 0x08806A88u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A57430u) goto L_08A57430;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A57430:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_0));
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (0u | 8u);
    ctx.gpr[18] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_31 = (0x08A57448u);
    ctx.gpr[18] = (ctx.gpr[18] & 255u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806A88, 0u, 360u, 0x08806A88u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 360u, 0x08806A88u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A57448u) goto L_08A57448;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A57448:
    aot_fpr_13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_0));
    ctx.gpr[17] = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    ctx.gpr[17] = (ctx.gpr[17] & 255u);
    goto L_08A57454;
L_08A57454:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    aot_gpr_6 = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08A5746Cu);
    ctx.gpr[8] = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08A3550C, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5746Cu) goto L_08A5746C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A5746C:
    aot_gpr_31 = (0x08A57474u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806634, 0u, 302u, 0x08806634u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 302u, 0x08806634u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A57474u) goto L_08A57474;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A57474:
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_2) < 9 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08A57490;
      }
      goto L_08A57480;
    }
L_08A57480:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08A5748Cu);
    aot_gpr_5 = (0u | 9u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806A88, 0u, 360u, 0x08806A88u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 360u, 0x08806A88u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5748Cu) goto L_08A5748C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A5748C:
    aot_fpr_20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_0));
    goto L_08A57490;
L_08A57490:
    ctx.fpr[22] = std::bit_cast<float>(0u);
    aot_gpr_31 = (0x08A5749Cu);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806634, 0u, 302u, 0x08806634u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 302u, 0x08806634u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5749Cu) goto L_08A5749C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A5749C:
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_2) < 10 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08A574B8;
      }
      goto L_08A574A8;
    }
L_08A574A8:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08A574B4u);
    aot_gpr_5 = (0u | 10u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806A88, 0u, 360u, 0x08806A88u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 360u, 0x08806A88u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A574B4u) goto L_08A574B4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A574B4:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_0));
    goto L_08A574B8;
L_08A574B8:
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08A574C8u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806634, 0u, 302u, 0x08806634u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 302u, 0x08806634u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A574C8u) goto L_08A574C8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A574C8:
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_2) < 11 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08A574E4;
      }
      goto L_08A574D4;
    }
L_08A574D4:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08A574E0u);
    aot_gpr_5 = (0u | 11u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806AE0, 0u, 368u, 0x08806AE0u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 368u, 0x08806AE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A574E0u) goto L_08A574E0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A574E0:
    ctx.gpr[17] = (0u < aot_gpr_2 ? 1u : 0u);
    goto L_08A574E4;
L_08A574E4:
    aot_gpr_31 = (0x08A574ECu);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806634, 0u, 302u, 0x08806634u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 302u, 0x08806634u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A574ECu) goto L_08A574EC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A574EC:
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_2) < 12 ? 1u : 0u);
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(51)));
        goto L_08A57510;
    }
    goto L_08A574F8;
L_08A574F8:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08A57504u);
    aot_gpr_5 = (0u | 12u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806A88, 0u, 360u, 0x08806A88u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 360u, 0x08806A88u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A57504u) goto L_08A57504;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A57504:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_0));
    ctx.gpr[21] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(51)));
    goto L_08A57510;
L_08A57510:
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(50)));
    aot_gpr_4 = (aot_gpr_4 << 24u);
    aot_gpr_5 = (aot_gpr_5 << 16u);
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(49)));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_gpr_5 = (aot_gpr_6 << 8u);
    ctx.gpr[9] = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(48)));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    ctx.gpr[9] = (aot_gpr_4 + ctx.gpr[9]);
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    aot_gpr_5 = (ctx.gpr[30] | 0u);
    aot_gpr_6 = (aot_gpr_29 | 0u);
    ctx.gpr[7] = (ctx.gpr[23] | 0u);
    ctx.gpr[8] = (ctx.gpr[22] | 0u);
    ctx.gpr[10] = (ctx.gpr[17] | 0u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(176));
    aot_gpr_31 = (0x08A57564u);
    ctx.gpr[11] = (ctx.gpr[21] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0156_entry, 156u, 502u, 0x08A765B8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A57564u) goto L_08A57564;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A57564:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08A57570u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    goto L_08A57294;
L_08A57570:
    aot_gpr_2 = (ctx.gpr[18] | 0u);
    { std::uint32_t aot_run_words[12]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(80), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      ctx.fpr[22] = std::bit_cast<float>(aot_run_words[1]);
      ctx.gpr[16] = aot_run_words[2];
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
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A575AC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    aot_gpr_31 = (0x08A575C0u);
    aot_gpr_5 = (0u | 1u);
    goto L_08A572E4;
L_08A575C0:
    ctx.gpr[16] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
      if (branch_taken) {
          goto L_08A575F8;
      }
      goto L_08A575CC;
    }
L_08A575CC:
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (0u | 65535u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_08A575F8;
      }
      goto L_08A575DC;
    }
L_08A575DC:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    aot_gpr_31 = (0x08A575F0u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(176));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0156_entry, 156u, 550u, 0x08A76A38u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A575F0u) goto L_08A575F0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A575F0:
    aot_gpr_4 = (0u | 65535u);
    aot_mem.aot_direct_store16(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_4));
    goto L_08A575F8;
L_08A575F8:
    aot_gpr_2 = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A5760C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    ctx.gpr[17] = (0u | 1u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), aot_gpr_31);
    aot_gpr_31 = (0x08A5762Cu);
    aot_gpr_5 = (0u | 1u);
    goto L_08A572E4;
L_08A5762C:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08A576E4;
      }
      goto L_08A57638;
    }
L_08A57638:
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (0u | 65535u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_5 = (2237u << 16u);
      if (branch_taken) {
          goto L_08A576E4;
      }
      goto L_08A57648;
    }
L_08A57648:
    aot_gpr_6 = (aot_gpr_5 + static_cast<std::uint32_t>(-28736));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(180)));
    ctx.gpr[7] = (aot_gpr_4 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_4 = (aot_gpr_5 + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08A5769C;
      }
      goto L_08A57668;
    }
L_08A57668:
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(0u));
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
    goto L_08A57670;
L_08A57670:
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    if (ctx.gpr[8] != 0u) {
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(12));
        goto L_08A57690;
    }
    goto L_08A57680;
L_08A57680:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 + static_cast<std::uint32_t>(8));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A57694;
      }
      goto L_08A57690;
    }
L_08A57690:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    goto L_08A57694;
L_08A57694:
    if (aot_gpr_4 != 0u) {
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
        goto L_08A57670;
    }
    goto L_08A5769C;
L_08A5769C:
    if (aot_gpr_5 == aot_gpr_6) {
    aot_gpr_5 = (aot_gpr_6 | 0u);
        goto L_08A576C0;
    }
    goto L_08A576A4;
L_08A576A4:
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(16)));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    if (aot_gpr_4 == 0u) {
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_5);
        goto L_08A576C4;
    }
    goto L_08A576BC;
L_08A576BC:
    aot_gpr_5 = (aot_gpr_6 | 0u);
    goto L_08A576C0;
L_08A576C0:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_5);
    goto L_08A576C4;
L_08A576C4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08A576DCu);
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(24)));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08807098, 0u, 451u, 0x08807098u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 451u, 0x08807098u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A576DCu) goto L_08A576DC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A576DC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08A576E8;
      }
      goto L_08A576E4;
    }
L_08A576E4:
    aot_gpr_2 = (0u | 0u);
    goto L_08A576E8;
L_08A576E8:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A576FC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x08A5770Cu);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806AE0, 0u, 368u, 0x08806AE0u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 368u, 0x08806AE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5770Cu) goto L_08A5770C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A5770C:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    aot_gpr_5 = (0u < aot_gpr_2 ? 1u : 0u);
    aot_gpr_31 = (0x08A57720u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(176));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0156_entry, 156u, 592u, 0x08A76D5Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A57720u) goto L_08A57720;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A57720:
    aot_gpr_2 = (0u | 0u);
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A57730:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_29 | 0u);
    aot_gpr_6 = (0u | 1u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_31);
    aot_gpr_31 = (0x08A5774Cu);
    ctx.gpr[7] = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0075_entry, 75u, 315u, 0x08931AF4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5774Cu) goto L_08A5774C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A5774C:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_fpr_12 = std::bit_cast<float>(aot_run_words[0]);
      aot_fpr_13 = std::bit_cast<float>(aot_run_words[1]);
      ctx.fpr[14] = std::bit_cast<float>(aot_run_words[2]);
    }
    aot_gpr_31 = (0x08A57760u);
    aot_gpr_4 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0030_entry, 30u, 236u, 0x0887CCD4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A57760u) goto L_08A57760;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A57760:
    aot_gpr_2 = (0u | 0u);
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A57770:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x08A57780u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0030_entry, 30u, 241u, 0x0887CD60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A57780u) goto L_08A57780;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A57780:
    aot_gpr_2 = (0u | 0u);
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A57790:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_5 = (2232u << 16u);
      if (branch_taken) {
          goto L_08A577B4;
      }
      goto L_08A577A4;
    }
L_08A577A4:
    aot_gpr_31 = (0x08A577ACu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 755u, 0x08B67230u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A577ACu) goto L_08A577AC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A577AC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    aot_gpr_5 = (2232u << 16u);
    goto L_08A577B4;
L_08A577B4:
    aot_gpr_6 = (ctx.gpr[28] + static_cast<std::uint32_t>(-5916));
    aot_gpr_31 = (0x08A577C0u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(7936));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0032_entry, 32u, 270u, 0x08885284u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A577C0u) goto L_08A577C0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A577C0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_5 = (2232u << 16u);
      if (branch_taken) {
          goto L_08A577DC;
      }
      goto L_08A577CC;
    }
L_08A577CC:
    aot_gpr_31 = (0x08A577D4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 755u, 0x08B67230u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A577D4u) goto L_08A577D4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A577D4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    aot_gpr_5 = (2232u << 16u);
    goto L_08A577DC;
L_08A577DC:
    aot_gpr_6 = (0u | 0u);
    aot_gpr_31 = (0x08A577E8u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(8028));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0032_entry, 32u, 266u, 0x08885220u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A577E8u) goto L_08A577E8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A577E8:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A577F4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[16] = (aot_gpr_5 | 0u);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    aot_gpr_31 = (0x08A57814u);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 555u, 0x088079D0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A57814u) goto L_08A57814;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A57814:
    aot_mem.aot_direct_store16(aot_gpr_2 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[16]));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-5904));
    aot_gpr_31 = (0x08A57824u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 249u, 0x0889D344u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A57824u) goto L_08A57824;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A57824:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08A57830u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-2));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 492u, 0x08807510u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A57830u) goto L_08A57830;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A57830:
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
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A57844:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x08A57854u);
    aot_gpr_6 = (ctx.gpr[28] + static_cast<std::uint32_t>(-5904));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 252u, 0x0889D374u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A57854u) goto L_08A57854;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A57854:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A57860:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-80));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(52), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(68), ctx.gpr[20]);
    ctx.gpr[20] = (0u | 1u);
    aot_gpr_4 = (aot_gpr_29 | 0u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    aot_gpr_6 = (0u | 1u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(aot_fpr_20));
    { const std::uint32_t aot_run_words[3]{ctx.gpr[17], ctx.gpr[18], ctx.gpr[19]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(56), aot_run_words); }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(72), aot_gpr_31);
    aot_gpr_31 = (0x08A5789Cu);
    ctx.gpr[7] = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0075_entry, 75u, 315u, 0x08931AF4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5789Cu) goto L_08A5789C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A5789C:
    aot_gpr_4 = (16608u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[19] = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_31 = (0x08A578BCu);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806634, 0u, 302u, 0x08806634u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 302u, 0x08806634u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A578BCu) goto L_08A578BC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A578BC:
    ctx.gpr[17] = (2237u << 16u);
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_2) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-28736));
      if (branch_taken) {
          goto L_08A578E8;
      }
      goto L_08A578CC;
    }
L_08A578CC:
    ctx.gpr[18] = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08A578E0u);
    aot_gpr_6 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0075_entry, 75u, 406u, 0x08932014u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A578E0u) goto L_08A578E0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A578E0:
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    goto L_08A578E8;
L_08A578E8:
    aot_fpr_20 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    aot_gpr_4 = (16224u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[18] = (255u << 16u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08A57904u);
    { const float fs = aot_fpr_20; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_20 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_20 = fs * ft; }
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806634, 0u, 302u, 0x08806634u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 302u, 0x08806634u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A57904u) goto L_08A57904;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A57904:
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_2) < 3 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08A5794C;
      }
      goto L_08A57910;
    }
L_08A57910:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08A5791Cu);
    aot_gpr_5 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806A88, 0u, 360u, 0x08806A88u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 360u, 0x08806A88u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5791Cu) goto L_08A5791C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A5791C:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_0));
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_31 = (0x08A57930u);
    aot_gpr_5 = (aot_gpr_5 & 65535u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 155u, 0x08ADC7D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A57930u) goto L_08A57930;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A57930:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_2 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_2 + static_cast<std::uint32_t>(1)));
    aot_gpr_4 = (aot_gpr_4 << 16u);
    aot_gpr_5 = (aot_gpr_5 << 8u);
    ctx.gpr[18] = (aot_mem.aot_direct_load8(aot_gpr_2 + static_cast<std::uint32_t>(2)));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    ctx.gpr[18] = (aot_gpr_4 + ctx.gpr[18]);
    goto L_08A5794C;
L_08A5794C:
    aot_gpr_31 = (0x08A57954u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806634, 0u, 302u, 0x08806634u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 302u, 0x08806634u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A57954u) goto L_08A57954;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A57954:
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_2) < 4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08A57970;
      }
      goto L_08A57960;
    }
L_08A57960:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08A5796Cu);
    aot_gpr_5 = (0u | 4u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806A88, 0u, 360u, 0x08806A88u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 360u, 0x08806A88u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A5796Cu) goto L_08A5796C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A5796C:
    aot_fpr_20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_0));
    goto L_08A57970;
L_08A57970:
    aot_gpr_4 = (ctx.gpr[17] + static_cast<std::uint32_t>(208));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_5 = (aot_gpr_29 | 0u);
    aot_gpr_6 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x08A57988u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0079_entry, 79u, 171u, 0x089414D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A57988u) goto L_08A57988;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A57988:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08A57994u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    goto L_08A577F4;
L_08A57994:
    aot_gpr_2 = (ctx.gpr[20] | 0u);
    { std::uint32_t aot_run_words[7]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(48), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      ctx.gpr[16] = aot_run_words[1];
      ctx.gpr[17] = aot_run_words[2];
      ctx.gpr[18] = aot_run_words[3];
      ctx.gpr[19] = aot_run_words[4];
      ctx.gpr[20] = aot_run_words[5];
      aot_gpr_31 = aot_run_words[6];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A579BC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    aot_gpr_31 = (0x08A579D0u);
    aot_gpr_5 = (0u | 1u);
    goto L_08A57844;
L_08A579D0:
    ctx.gpr[16] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
      if (branch_taken) {
          goto L_08A57A08;
      }
      goto L_08A579DC;
    }
L_08A579DC:
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (0u | 65535u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_08A57A08;
      }
      goto L_08A579EC;
    }
L_08A579EC:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    aot_gpr_31 = (0x08A57A00u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(208));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0079_entry, 79u, 197u, 0x089416B0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A57A00u) goto L_08A57A00;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A57A00:
    aot_gpr_4 = (0u | 65535u);
    aot_mem.aot_direct_store16(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_4));
    goto L_08A57A08;
L_08A57A08:
    aot_gpr_2 = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A57A1C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-5952));
      if (branch_taken) {
          goto L_08A57A40;
      }
      goto L_08A57A30;
    }
L_08A57A30:
    aot_gpr_31 = (0x08A57A38u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 755u, 0x08B67230u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A57A38u) goto L_08A57A38;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A57A38:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-5952));
    goto L_08A57A40;
L_08A57A40:
    aot_gpr_31 = (0x08A57A48u);
    aot_gpr_6 = (ctx.gpr[28] + static_cast<std::uint32_t>(-5904));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0032_entry, 32u, 270u, 0x08885284u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A57A48u) goto L_08A57A48;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A57A48:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_5 = (2232u << 16u);
      if (branch_taken) {
          goto L_08A57A64;
      }
      goto L_08A57A54;
    }
L_08A57A54:
    aot_gpr_31 = (0x08A57A5Cu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 755u, 0x08B67230u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A57A5Cu) goto L_08A57A5C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A57A5C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    aot_gpr_5 = (2232u << 16u);
    goto L_08A57A64;
L_08A57A64:
    aot_gpr_6 = (0u | 0u);
    aot_gpr_31 = (0x08A57A70u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(8084));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0032_entry, 32u, 266u, 0x08885220u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A57A70u) goto L_08A57A70;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A57A70:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A57A7C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    ctx.gpr[7] = (2236u << 16u);
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(16));
    aot_gpr_6 = (0u | 6u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x08A57A98u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(29704));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A57A98u) goto L_08A57A98;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A57A98:
    aot_gpr_2 = (0u | 0u);
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A57AA8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    ctx.gpr[7] = (2236u << 16u);
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(16));
    aot_gpr_6 = (0u | 1u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x08A57AC4u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(29704));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A57AC4u) goto L_08A57AC4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A57AC4:
    aot_gpr_2 = (0u | 0u);
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A57AD4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    ctx.gpr[7] = (2236u << 16u);
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(16));
    aot_gpr_6 = (0u | 1u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x08A57AF0u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(29704));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A57AF0u) goto L_08A57AF0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A57AF0:
    aot_gpr_2 = (0u | 0u);
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A57B00:
    jump_target = aot_gpr_31;
    aot_gpr_2 = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A57B08:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_6 = (2236u << 16u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(32304));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(1360)));
    ctx.gpr[8] = (2236u << 16u);
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(1364)));
    aot_mem.aot_direct_store32(ctx.gpr[8] + static_cast<std::uint32_t>(29704), ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[8] + static_cast<std::uint32_t>(29704));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(1368)));
    aot_mem.aot_direct_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), ctx.gpr[9]);
    aot_mem.aot_direct_store32(ctx.gpr[7] + static_cast<std::uint32_t>(8), aot_gpr_6);
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x08A57B44u);
    aot_gpr_6 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08862890, 23u, 431u, 0x08862890u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[9], ctx.gpr[10], ctx.gpr[11], ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[28], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0023_entry, 23u, 431u, 0x08862890u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A57B44u) goto L_08A57B44;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A57B44:
    aot_gpr_2 = (0u | 0u);
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A57B54:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_5 = (2236u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(32304));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(1360)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(1344)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(1364)));
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(1348)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(1368)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(1352)));
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[15];
    aot_fpr_13 = ctx.fpr[16] + ctx.fpr[17];
    aot_gpr_6 = (2236u << 16u);
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(29704), aot_gpr_5);
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(29704));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(4), aot_gpr_5);
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    aot_gpr_31 = (0x08A57BB4u);
    aot_gpr_6 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08862890, 23u, 431u, 0x08862890u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[9], ctx.gpr[10], ctx.gpr[11], ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[28], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0023_entry, 23u, 431u, 0x08862890u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A57BB4u) goto L_08A57BB4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A57BB4:
    aot_gpr_2 = (0u | 0u);
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A57BC4:
    jump_target = aot_gpr_31;
    aot_gpr_2 = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A57BCC:
    jump_target = aot_gpr_31;
    aot_gpr_2 = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A57BD4:
    jump_target = aot_gpr_31;
    aot_gpr_2 = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A57BDC:
    jump_target = aot_gpr_31;
    aot_gpr_2 = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A57BE4:
    jump_target = aot_gpr_31;
    aot_gpr_2 = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A57BEC:
    jump_target = aot_gpr_31;
    aot_gpr_2 = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A57BF4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    ctx.gpr[7] = (2236u << 16u);
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(16));
    aot_gpr_6 = (0u | 1u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x08A57C10u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(29704));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A57C10u) goto L_08A57C10;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A57C10:
    aot_gpr_2 = (0u | 0u);
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A57C20:
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(524)));
    ctx.gpr[7] = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(518)));
    aot_gpr_6 = (0u < aot_gpr_5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    aot_gpr_6 = (0u < aot_gpr_6 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A57C3C;
      }
      goto L_08A57C34;
    }
L_08A57C34:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(aot_gpr_6));
      if (branch_taken) {
          goto L_08A57C84;
      }
      goto L_08A57C3C;
    }
L_08A57C3C:
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(518));
    ctx.gpr[7] = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store16(aot_gpr_5 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[8]));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(521)));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[7]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A57C68;
      }
      goto L_08A57C5C;
    }
L_08A57C5C:
    aot_gpr_5 = (aot_gpr_6 & aot_gpr_5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(aot_gpr_5));
      if (branch_taken) {
          goto L_08A57C84;
      }
      goto L_08A57C68;
    }
L_08A57C68:
    aot_gpr_5 = (aot_gpr_6 | aot_gpr_5);
    aot_gpr_6 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(518)));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_6) < 21 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08A57C84;
      }
      goto L_08A57C80;
    }
L_08A57C80:
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_08A57C84;
L_08A57C84:
    jump_target = aot_gpr_31;
    aot_gpr_2 = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A57C8C:
    aot_gpr_6 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(4188)));
    ctx.gpr[7] = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    aot_gpr_6 = (aot_gpr_6 | ctx.gpr[7]);
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_gpr_5 = (0u | 0u);
      if (branch_taken) {
          goto L_08A57CA4;
      }
      goto L_08A57CA0;
    }
L_08A57CA0:
    aot_gpr_5 = (0u | 1u);
    goto L_08A57CA4;
L_08A57CA4:
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(524)));
    aot_gpr_5 = (aot_gpr_5 & 255u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    aot_gpr_6 = (0u < aot_gpr_6 ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 ^ aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(518)));
    { const bool branch_taken = aot_gpr_6 != 0u;
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A57CD0;
      }
      goto L_08A57CC8;
    }
L_08A57CC8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(aot_gpr_5));
      if (branch_taken) {
          goto L_08A57D18;
      }
      goto L_08A57CD0;
    }
L_08A57CD0:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(518));
    ctx.gpr[7] = (aot_mem.aot_direct_load16(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store16(aot_gpr_6 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[8]));
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(521)));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[7]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    aot_gpr_6 = (0u < aot_gpr_6 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A57CFC;
      }
      goto L_08A57CF0;
    }
L_08A57CF0:
    aot_gpr_5 = (aot_gpr_5 & aot_gpr_6);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(aot_gpr_5));
      if (branch_taken) {
          goto L_08A57D18;
      }
      goto L_08A57CFC;
    }
L_08A57CFC:
    aot_gpr_5 = (aot_gpr_5 | aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(518)));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_6) < 21 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08A57D18;
      }
      goto L_08A57D14;
    }
L_08A57D14:
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_08A57D18;
L_08A57D18:
    jump_target = aot_gpr_31;
    aot_gpr_2 = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A57D20:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(16));
    aot_gpr_6 = (0u | 1u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    aot_gpr_31 = (0x08A57D40u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A57D40u) goto L_08A57D40;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A57D40:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_2 = (0u | 0u);
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(4188), static_cast<std::uint8_t>(aot_gpr_4));
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A57D60:
    jump_target = aot_gpr_31;
    aot_gpr_2 = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A57D68:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    ctx.gpr[7] = (2236u << 16u);
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(16));
    aot_gpr_6 = (0u | 10u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x08A57D84u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(29704));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A57D84u) goto L_08A57D84;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A57D84:
    aot_gpr_2 = (0u | 0u);
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A57D94:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    ctx.gpr[7] = (2236u << 16u);
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(16));
    aot_gpr_6 = (0u | 6u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x08A57DB0u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(29704));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A57DB0u) goto L_08A57DB0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A57DB0:
    aot_gpr_2 = (0u | 0u);
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A57DC0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    ctx.gpr[7] = (2236u << 16u);
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(16));
    aot_gpr_6 = (0u | 1u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x08A57DDCu);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(29704));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A57DDCu) goto L_08A57DDC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A57DDC:
    aot_gpr_2 = (0u | 0u);
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A57DEC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    ctx.gpr[7] = (2236u << 16u);
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(16));
    aot_gpr_6 = (0u | 1u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x08A57E08u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(29704));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A57E08u) goto L_08A57E08;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A57E08:
    aot_gpr_2 = (0u | 0u);
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A57E18:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    ctx.gpr[7] = (2236u << 16u);
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(16));
    aot_gpr_6 = (0u | 1u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x08A57E34u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(29704));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A57E34u) goto L_08A57E34;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A57E34:
    aot_gpr_2 = (0u | 0u);
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A57E44:
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(4215), static_cast<std::uint8_t>(aot_gpr_4));
    jump_target = aot_gpr_31;
    aot_gpr_2 = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A57E54:
    jump_target = aot_gpr_31;
    aot_gpr_2 = (aot_gpr_4 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A57E5C:
    aot_fpr_0 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_fpr_12 = std::bit_cast<float>(0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_0 < aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08A57E7C;
      }
      goto L_08A57E74;
    }
L_08A57E74:
    { const bool branch_taken = 0u == 0u;
    aot_fpr_0 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_0) ^ 0x80000000u);
      if (branch_taken) {
          goto L_08A57E7C;
      }
      goto L_08A57E7C;
    }
L_08A57E7C:
    jump_target = aot_gpr_31;
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A57E84:
    { const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr_6 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    ctx.execute_vfpu_cross_quat_ct<0u, 1u, 2u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    jump_target = aot_gpr_31;
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A57E9C:
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
    { const std::uint32_t vfpu_address = aot_gpr_6 + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    jump_target = aot_gpr_31;
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A57EBC:
    { const std::uint32_t vfpu_address = aot_gpr_6 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr_6 + static_cast<std::uint32_t>(16);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr_6 + static_cast<std::uint32_t>(32);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<8u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vtfm_ct<0u, 4u, 8u, 3u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    jump_target = aot_gpr_31;
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A57EDC:
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
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A57F04:
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    aot_gpr_4 = (ctx.vfpu_scalar_bits_ct<28u>());
    aot_fpr_0 = std::bit_cast<float>(aot_gpr_4);
    jump_target = aot_gpr_31;
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A57F20:
    { const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_unary_ct<0u, 0u, 3u, 2u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    jump_target = aot_gpr_31;
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A57F34:
    { const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr_6 + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    jump_target = aot_gpr_31;
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A57F4C:
    { const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr_6 + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    jump_target = aot_gpr_31;
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A57F64:
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.set_vfpu_scalar_bits_ct<28u>(aot_gpr_6);
    { const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
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
    jump_target = aot_gpr_31;
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A57F80:
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.set_vfpu_scalar_bits_ct<28u>(aot_gpr_6);
    { const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
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
    jump_target = aot_gpr_31;
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A57F9C:
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.set_vfpu_scalar_bits_ct<28u>(aot_gpr_6);
    ctx.execute_vfpu_unary_ct<28u, 28u, 1u, 16u>();
    { const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
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
    jump_target = aot_gpr_31;
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A57FBC:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_fpr_0 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_0)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08A57FDC;
      }
      goto L_08A57FD4;
    }
L_08A57FD4:
    { const bool branch_taken = 0u == 0u;
    aot_fpr_0 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_08A57FDC;
      }
      goto L_08A57FDC;
    }
L_08A57FDC:
    jump_target = aot_gpr_31;
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08A57FE4:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_fpr_0 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_0)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 1u, 0x08A58004u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08A57FFC;
    }
L_08A57FFC:
    { const bool branch_taken = 0u == 0u;
    aot_fpr_0 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 1u, 0x08A58004u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 1u, 0x08A58004u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
    }
}

#undef AOT_REGCACHE_SYNC_IN
#undef AOT_REGCACHE_SYNC_OUT

void recomp_unit_0148(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0148_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_148(Runtime &runtime) {
    runtime.register_generated_unit(148u, 0x08A54000u, 16384u, &recomp_unit_0148, &recomp_unit_0148_entry);
    // PSPRECOMP_V812_COMPACT_REGISTRATION: same entry set, looped once in Runtime instead of source-expanded calls.
    runtime.register_generated_entry_mask(0x08A54004u, &recomp_unit_0148, "recomp_unit_0148",
                                          kEntryMasks_recomp_unit_0148, 64u);
}
} // namespace psprecomp
