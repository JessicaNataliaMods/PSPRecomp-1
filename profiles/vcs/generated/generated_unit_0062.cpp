#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include "vcs_resident_regions.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
// PSPRECOMP_V811_COMPACT_DISPATCH: 64-slot occupancy masks + per-group base id.
static constexpr std::uint64_t kEntryMasks_recomp_unit_0062[64] = {
    0x2508000848810921ull, 0x802851224AA29514ull, 0x892288A28A222208ull, 0x06A1492114201001ull,
    0x520804321250A101ull, 0x2404482441895951ull, 0xB4D3401094544809ull, 0x108A128088912481ull,
    0xA492892410249084ull, 0x0020492AA1200208ull, 0x0000114800000450ull, 0x222228C550A518A0ull,
    0x654A145521455211ull, 0x480A019090880400ull, 0x40500C50121040B0ull, 0x8058240500C04182ull,
    0x0244809004000420ull, 0x90205101224040A2ull, 0x8000080000000010ull, 0x0000001241020100ull,
    0x0000000000000000ull, 0x04AA02060A120000ull, 0x0040208480010410ull, 0x9128024512250024ull,
    0x4450008000408D28ull, 0x2242242242242240ull, 0xA492214924224224ull, 0x8891122244488908ull,
    0x2244488911222444ull, 0x8911222444889112ull, 0x4889112224448890ull, 0x2242244484484484ull,
    0x4889089112112112ull, 0x1122244484484484ull, 0x4491222444889112ull, 0x4889089089112224ull,
    0x4448891122244488ull, 0x2244488911211222ull, 0x2444889112224224ull, 0x0890452449122242ull,
    0x1120890448224112ull, 0x1122241090448224ull, 0x2422444889089112ull, 0x88A4921121122242ull,
    0x2244488911222444ull, 0x8911222444889112ull, 0x0400924912229248ull, 0x0001400100000000ull,
    0x8000812001000880ull, 0x2480144288000034ull, 0x0801040C00000002ull, 0x0000211400020000ull,
    0x12000108A0000445ull, 0x8018000000020004ull, 0x0111400008450000ull, 0x0001048000422800ull,
    0x0000000000000005ull, 0x4000001004102800ull, 0x009020120220122Aull, 0x2044048402410121ull,
    0x8404840241012101ull, 0x4081020408102404ull, 0x2040810204081020ull, 0x0000408102040810ull,
};
static constexpr std::uint16_t kEntryBases_recomp_unit_0062[64] = {
    1u, 14u, 34u, 52u, 67u, 83u, 102u, 123u, 139u, 157u, 170u, 177u, 197u, 220u, 232u, 246u,
    260u, 269u, 283u, 286u, 292u, 292u, 304u, 312u, 328u, 340u, 355u, 374u, 391u, 408u, 426u, 443u,
    459u, 476u, 492u, 510u, 527u, 544u, 561u, 578u, 595u, 610u, 625u, 642u, 660u, 677u, 695u, 711u,
    714u, 721u, 733u, 739u, 744u, 754u, 759u, 767u, 774u, 776u, 782u, 794u, 806u, 818u, 828u, 837u,
};
void recomp_unit_0062_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
// PSPRECOMP_AOT_REGCACHE_BEGIN
// PSPRECOMP_AOT_REGCACHE_META gprs=4,5,31,6,29,16 fprs=12,13,22,20 gpr_occ=5851 fpr_occ=575 gpr_total=7484 fpr_total=767
    std::uint32_t aot_gpr_4 = ctx.gpr[4];
    std::uint32_t aot_gpr_5 = ctx.gpr[5];
    std::uint32_t aot_gpr_31 = ctx.gpr[31];
    std::uint32_t aot_gpr_6 = ctx.gpr[6];
    std::uint32_t aot_gpr_29 = ctx.gpr[29];
    std::uint32_t aot_gpr_16 = ctx.gpr[16];
    float aot_fpr_12 = ctx.fpr[12];
    float aot_fpr_13 = ctx.fpr[13];
    float aot_fpr_22 = ctx.fpr[22];
    float aot_fpr_20 = ctx.fpr[20];
    bool aot_regcache_valid = true;
#define AOT_REGCACHE_SYNC_OUT() do { if (aot_regcache_valid) { ctx.gpr[4] = aot_gpr_4; ctx.gpr[5] = aot_gpr_5; ctx.gpr[31] = aot_gpr_31; ctx.gpr[6] = aot_gpr_6; ctx.gpr[29] = aot_gpr_29; ctx.gpr[16] = aot_gpr_16; ctx.fpr[12] = aot_fpr_12; ctx.fpr[13] = aot_fpr_13; ctx.fpr[22] = aot_fpr_22; ctx.fpr[20] = aot_fpr_20; } } while (false)
#define AOT_REGCACHE_SYNC_IN() do { if (aot_regcache_valid) { aot_gpr_4 = ctx.gpr[4]; aot_gpr_5 = ctx.gpr[5]; aot_gpr_31 = ctx.gpr[31]; aot_gpr_6 = ctx.gpr[6]; aot_gpr_29 = ctx.gpr[29]; aot_gpr_16 = ctx.gpr[16]; aot_fpr_12 = ctx.fpr[12]; aot_fpr_13 = ctx.fpr[13]; aot_fpr_22 = ctx.fpr[22]; aot_fpr_20 = ctx.fpr[20]; } } while (false)
// PSPRECOMP_AOT_REGCACHE_END
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_redispatch_rounds = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x088FC000u;
        entry_id = 0u;
        if (entry_delta < 16316u && (entry_delta & 3u) == 0u) {
            const std::uint32_t entry_slot = entry_delta >> 2u;
            const std::uint32_t entry_group = entry_slot >> 6u;
            const std::uint64_t entry_mask = kEntryMasks_recomp_unit_0062[entry_group];
            const std::uint64_t entry_bit = 1ull << (entry_slot & 63u);
            if ((entry_mask & entry_bit) != 0u) {
                entry_id = static_cast<std::uint16_t>(
                    kEntryBases_recomp_unit_0062[entry_group] +
                    std::popcount(entry_mask & (entry_bit - 1ull)));
            }
        }
    }
    switch (entry_id) {
    case 1u: goto L_088FC000;
    case 2u: goto L_088FC014;
    case 3u: goto L_088FC020;
    case 4u: goto L_088FC02C;
    case 5u: goto L_088FC040;
    case 6u: goto L_088FC05C;
    case 7u: goto L_088FC06C;
    case 8u: goto L_088FC078;
    case 9u: goto L_088FC08C;
    case 10u: goto L_088FC0CC;
    case 11u: goto L_088FC0E0;
    case 12u: goto L_088FC0E8;
    case 13u: goto L_088FC0F4;
    case 14u: goto L_088FC108;
    case 15u: goto L_088FC110;
    case 16u: goto L_088FC120;
    case 17u: goto L_088FC128;
    case 18u: goto L_088FC130;
    case 19u: goto L_088FC13C;
    case 20u: goto L_088FC144;
    case 21u: goto L_088FC154;
    case 22u: goto L_088FC15C;
    case 23u: goto L_088FC164;
    case 24u: goto L_088FC16C;
    case 25u: goto L_088FC178;
    case 26u: goto L_088FC184;
    case 27u: goto L_088FC194;
    case 28u: goto L_088FC1A0;
    case 29u: goto L_088FC1B0;
    case 30u: goto L_088FC1B8;
    case 31u: goto L_088FC1CC;
    case 32u: goto L_088FC1D4;
    case 33u: goto L_088FC1FC;
    case 34u: goto L_088FC20C;
    case 35u: goto L_088FC224;
    case 36u: goto L_088FC234;
    case 37u: goto L_088FC244;
    case 38u: goto L_088FC254;
    case 39u: goto L_088FC264;
    case 40u: goto L_088FC26C;
    case 41u: goto L_088FC27C;
    case 42u: goto L_088FC284;
    case 43u: goto L_088FC294;
    case 44u: goto L_088FC29C;
    case 45u: goto L_088FC2AC;
    case 46u: goto L_088FC2BC;
    case 47u: goto L_088FC2C4;
    case 48u: goto L_088FC2D4;
    case 49u: goto L_088FC2E0;
    case 50u: goto L_088FC2EC;
    case 51u: goto L_088FC2FC;
    case 52u: goto L_088FC300;
    case 53u: goto L_088FC330;
    case 54u: goto L_088FC354;
    case 55u: goto L_088FC368;
    case 56u: goto L_088FC370;
    case 57u: goto L_088FC380;
    case 58u: goto L_088FC394;
    case 59u: goto L_088FC3A0;
    case 60u: goto L_088FC3AC;
    case 61u: goto L_088FC3B8;
    case 62u: goto L_088FC3C0;
    case 63u: goto L_088FC3D4;
    case 64u: goto L_088FC3DC;
    case 65u: goto L_088FC3E4;
    case 66u: goto L_088FC3E8;
    case 67u: goto L_088FC400;
    case 68u: goto L_088FC420;
    case 69u: goto L_088FC434;
    case 70u: goto L_088FC43C;
    case 71u: goto L_088FC450;
    case 72u: goto L_088FC458;
    case 73u: goto L_088FC464;
    case 74u: goto L_088FC470;
    case 75u: goto L_088FC484;
    case 76u: goto L_088FC490;
    case 77u: goto L_088FC494;
    case 78u: goto L_088FC4A8;
    case 79u: goto L_088FC4CC;
    case 80u: goto L_088FC4E4;
    case 81u: goto L_088FC4F0;
    case 82u: goto L_088FC4F8;
    case 83u: goto L_088FC500;
    case 84u: goto L_088FC510;
    case 85u: goto L_088FC518;
    case 86u: goto L_088FC520;
    case 87u: goto L_088FC52C;
    case 88u: goto L_088FC530;
    case 89u: goto L_088FC538;
    case 90u: goto L_088FC540;
    case 91u: goto L_088FC54C;
    case 92u: goto L_088FC55C;
    case 93u: goto L_088FC560;
    case 94u: goto L_088FC578;
    case 95u: goto L_088FC588;
    case 96u: goto L_088FC594;
    case 97u: goto L_088FC5AC;
    case 98u: goto L_088FC5B8;
    case 99u: goto L_088FC5C8;
    case 100u: goto L_088FC5E8;
    case 101u: goto L_088FC5F4;
    case 102u: goto L_088FC600;
    case 103u: goto L_088FC60C;
    case 104u: goto L_088FC62C;
    case 105u: goto L_088FC638;
    case 106u: goto L_088FC648;
    case 107u: goto L_088FC650;
    case 108u: goto L_088FC658;
    case 109u: goto L_088FC668;
    case 110u: goto L_088FC670;
    case 111u: goto L_088FC67C;
    case 112u: goto L_088FC690;
    case 113u: goto L_088FC6B8;
    case 114u: goto L_088FC6C0;
    case 115u: goto L_088FC6C4;
    case 116u: goto L_088FC6D0;
    case 117u: goto L_088FC6D8;
    case 118u: goto L_088FC6DC;
    case 119u: goto L_088FC6E8;
    case 120u: goto L_088FC6F0;
    case 121u: goto L_088FC6F4;
    case 122u: goto L_088FC6FC;
    case 123u: goto L_088FC700;
    case 124u: goto L_088FC71C;
    case 125u: goto L_088FC728;
    case 126u: goto L_088FC734;
    case 127u: goto L_088FC740;
    case 128u: goto L_088FC750;
    case 129u: goto L_088FC75C;
    case 130u: goto L_088FC76C;
    case 131u: goto L_088FC77C;
    case 132u: goto L_088FC79C;
    case 133u: goto L_088FC7A4;
    case 134u: goto L_088FC7B0;
    case 135u: goto L_088FC7C4;
    case 136u: goto L_088FC7CC;
    case 137u: goto L_088FC7DC;
    case 138u: goto L_088FC7F0;
    case 139u: goto L_088FC808;
    case 140u: goto L_088FC81C;
    case 141u: goto L_088FC830;
    case 142u: goto L_088FC83C;
    case 143u: goto L_088FC848;
    case 144u: goto L_088FC854;
    case 145u: goto L_088FC870;
    case 146u: goto L_088FC888;
    case 147u: goto L_088FC894;
    case 148u: goto L_088FC8A0;
    case 149u: goto L_088FC8AC;
    case 150u: goto L_088FC8BC;
    case 151u: goto L_088FC8C4;
    case 152u: goto L_088FC8D0;
    case 153u: goto L_088FC8DC;
    case 154u: goto L_088FC8E8;
    case 155u: goto L_088FC8F4;
    case 156u: goto L_088FC8FC;
    case 157u: goto L_088FC90C;
    case 158u: goto L_088FC924;
    case 159u: goto L_088FC954;
    case 160u: goto L_088FC960;
    case 161u: goto L_088FC974;
    case 162u: goto L_088FC97C;
    case 163u: goto L_088FC984;
    case 164u: goto L_088FC98C;
    case 165u: goto L_088FC994;
    case 166u: goto L_088FC9A0;
    case 167u: goto L_088FC9AC;
    case 168u: goto L_088FC9B8;
    case 169u: goto L_088FC9D4;
    case 170u: goto L_088FCA10;
    case 171u: goto L_088FCA18;
    case 172u: goto L_088FCA28;
    case 173u: goto L_088FCA8C;
    case 174u: goto L_088FCA98;
    case 175u: goto L_088FCAA0;
    case 176u: goto L_088FCAB0;
    case 177u: goto L_088FCB14;
    case 178u: goto L_088FCB1C;
    case 179u: goto L_088FCB2C;
    case 180u: goto L_088FCB30;
    case 181u: goto L_088FCB40;
    case 182u: goto L_088FCB48;
    case 183u: goto L_088FCB54;
    case 184u: goto L_088FCB5C;
    case 185u: goto L_088FCB70;
    case 186u: goto L_088FCB78;
    case 187u: goto L_088FCB80;
    case 188u: goto L_088FCB88;
    case 189u: goto L_088FCB98;
    case 190u: goto L_088FCB9C;
    case 191u: goto L_088FCBAC;
    case 192u: goto L_088FCBB4;
    case 193u: goto L_088FCBC4;
    case 194u: goto L_088FCBD4;
    case 195u: goto L_088FCBE4;
    case 196u: goto L_088FCBF4;
    case 197u: goto L_088FCC00;
    case 198u: goto L_088FCC10;
    case 199u: goto L_088FCC24;
    case 200u: goto L_088FCC30;
    case 201u: goto L_088FCC38;
    case 202u: goto L_088FCC40;
    case 203u: goto L_088FCC48;
    case 204u: goto L_088FCC58;
    case 205u: goto L_088FCC60;
    case 206u: goto L_088FCC74;
    case 207u: goto L_088FCC80;
    case 208u: goto L_088FCC88;
    case 209u: goto L_088FCC90;
    case 210u: goto L_088FCC98;
    case 211u: goto L_088FCCA8;
    case 212u: goto L_088FCCB0;
    case 213u: goto L_088FCCC4;
    case 214u: goto L_088FCCCC;
    case 215u: goto L_088FCCD8;
    case 216u: goto L_088FCCE0;
    case 217u: goto L_088FCCE8;
    case 218u: goto L_088FCCF4;
    case 219u: goto L_088FCCF8;
    case 220u: goto L_088FCD28;
    case 221u: goto L_088FCD4C;
    case 222u: goto L_088FCD5C;
    case 223u: goto L_088FCD70;
    case 224u: goto L_088FCD7C;
    case 225u: goto L_088FCD90;
    case 226u: goto L_088FCD9C;
    case 227u: goto L_088FCDA0;
    case 228u: goto L_088FCDC4;
    case 229u: goto L_088FCDCC;
    case 230u: goto L_088FCDEC;
    case 231u: goto L_088FCDF8;
    case 232u: goto L_088FCE10;
    case 233u: goto L_088FCE14;
    case 234u: goto L_088FCE1C;
    case 235u: goto L_088FCE38;
    case 236u: goto L_088FCE50;
    case 237u: goto L_088FCE64;
    case 238u: goto L_088FCE70;
    case 239u: goto L_088FCE90;
    case 240u: goto L_088FCE98;
    case 241u: goto L_088FCEA8;
    case 242u: goto L_088FCEAC;
    case 243u: goto L_088FCED0;
    case 244u: goto L_088FCED8;
    case 245u: goto L_088FCEF8;
    case 246u: goto L_088FCF04;
    case 247u: goto L_088FCF1C;
    case 248u: goto L_088FCF20;
    case 249u: goto L_088FCF38;
    case 250u: goto L_088FCF58;
    case 251u: goto L_088FCF5C;
    case 252u: goto L_088FCF80;
    case 253u: goto L_088FCF88;
    case 254u: goto L_088FCFA8;
    case 255u: goto L_088FCFB4;
    case 256u: goto L_088FCFCC;
    case 257u: goto L_088FCFD0;
    case 258u: goto L_088FCFD8;
    case 259u: goto L_088FCFFC;
    case 260u: goto L_088FD014;
    case 261u: goto L_088FD028;
    case 262u: goto L_088FD068;
    case 263u: goto L_088FD090;
    case 264u: goto L_088FD09C;
    case 265u: goto L_088FD0BC;
    case 266u: goto L_088FD0C8;
    case 267u: goto L_088FD0D8;
    case 268u: goto L_088FD0E4;
    case 269u: goto L_088FD104;
    case 270u: goto L_088FD114;
    case 271u: goto L_088FD11C;
    case 272u: goto L_088FD138;
    case 273u: goto L_088FD158;
    case 274u: goto L_088FD164;
    case 275u: goto L_088FD174;
    case 276u: goto L_088FD180;
    case 277u: goto L_088FD1A0;
    case 278u: goto L_088FD1B0;
    case 279u: goto L_088FD1B8;
    case 280u: goto L_088FD1D4;
    case 281u: goto L_088FD1F0;
    case 282u: goto L_088FD1FC;
    case 283u: goto L_088FD210;
    case 284u: goto L_088FD2AC;
    case 285u: goto L_088FD2FC;
    case 286u: goto L_088FD320;
    case 287u: goto L_088FD344;
    case 288u: goto L_088FD360;
    case 289u: goto L_088FD378;
    case 290u: goto L_088FD384;
    case 291u: goto L_088FD390;
    case 292u: goto L_088FD544;
    case 293u: goto L_088FD550;
    case 294u: goto L_088FD564;
    case 295u: goto L_088FD56C;
    case 296u: goto L_088FD584;
    case 297u: goto L_088FD588;
    case 298u: goto L_088FD5A4;
    case 299u: goto L_088FD5C4;
    case 300u: goto L_088FD5CC;
    case 301u: goto L_088FD5D4;
    case 302u: goto L_088FD5DC;
    case 303u: goto L_088FD5E8;
    case 304u: goto L_088FD610;
    case 305u: goto L_088FD628;
    case 306u: goto L_088FD640;
    case 307u: goto L_088FD67C;
    case 308u: goto L_088FD688;
    case 309u: goto L_088FD69C;
    case 310u: goto L_088FD6B4;
    case 311u: goto L_088FD6D8;
    case 312u: goto L_088FD708;
    case 313u: goto L_088FD714;
    case 314u: goto L_088FD740;
    case 315u: goto L_088FD748;
    case 316u: goto L_088FD754;
    case 317u: goto L_088FD764;
    case 318u: goto L_088FD770;
    case 319u: goto L_088FD780;
    case 320u: goto L_088FD788;
    case 321u: goto L_088FD798;
    case 322u: goto L_088FD7A4;
    case 323u: goto L_088FD7CC;
    case 324u: goto L_088FD7D4;
    case 325u: goto L_088FD7E0;
    case 326u: goto L_088FD7F0;
    case 327u: goto L_088FD7FC;
    case 328u: goto L_088FD80C;
    case 329u: goto L_088FD814;
    case 330u: goto L_088FD820;
    case 331u: goto L_088FD828;
    case 332u: goto L_088FD82C;
    case 333u: goto L_088FD83C;
    case 334u: goto L_088FD858;
    case 335u: goto L_088FD89C;
    case 336u: goto L_088FD8D0;
    case 337u: goto L_088FD8D8;
    case 338u: goto L_088FD8E8;
    case 339u: goto L_088FD8F8;
    case 340u: goto L_088FD918;
    case 341u: goto L_088FD924;
    case 342u: goto L_088FD934;
    case 343u: goto L_088FD948;
    case 344u: goto L_088FD954;
    case 345u: goto L_088FD964;
    case 346u: goto L_088FD978;
    case 347u: goto L_088FD984;
    case 348u: goto L_088FD994;
    case 349u: goto L_088FD9A8;
    case 350u: goto L_088FD9B4;
    case 351u: goto L_088FD9C4;
    case 352u: goto L_088FD9D8;
    case 353u: goto L_088FD9E4;
    case 354u: goto L_088FD9F4;
    case 355u: goto L_088FDA08;
    case 356u: goto L_088FDA14;
    case 357u: goto L_088FDA24;
    case 358u: goto L_088FDA38;
    case 359u: goto L_088FDA44;
    case 360u: goto L_088FDA54;
    case 361u: goto L_088FDA68;
    case 362u: goto L_088FDA74;
    case 363u: goto L_088FDA80;
    case 364u: goto L_088FDA8C;
    case 365u: goto L_088FDA98;
    case 366u: goto L_088FDAA0;
    case 367u: goto L_088FDAB4;
    case 368u: goto L_088FDAC4;
    case 369u: goto L_088FDAD0;
    case 370u: goto L_088FDADC;
    case 371u: goto L_088FDAE8;
    case 372u: goto L_088FDAF4;
    case 373u: goto L_088FDAFC;
    case 374u: goto L_088FDB0C;
    case 375u: goto L_088FDB20;
    case 376u: goto L_088FDB2C;
    case 377u: goto L_088FDB3C;
    case 378u: goto L_088FDB4C;
    case 379u: goto L_088FDB58;
    case 380u: goto L_088FDB68;
    case 381u: goto L_088FDB78;
    case 382u: goto L_088FDB84;
    case 383u: goto L_088FDB94;
    case 384u: goto L_088FDBA4;
    case 385u: goto L_088FDBB0;
    case 386u: goto L_088FDBC0;
    case 387u: goto L_088FDBD0;
    case 388u: goto L_088FDBDC;
    case 389u: goto L_088FDBEC;
    case 390u: goto L_088FDBFC;
    case 391u: goto L_088FDC08;
    case 392u: goto L_088FDC18;
    case 393u: goto L_088FDC28;
    case 394u: goto L_088FDC34;
    case 395u: goto L_088FDC44;
    case 396u: goto L_088FDC54;
    case 397u: goto L_088FDC60;
    case 398u: goto L_088FDC70;
    case 399u: goto L_088FDC80;
    case 400u: goto L_088FDC8C;
    case 401u: goto L_088FDC9C;
    case 402u: goto L_088FDCAC;
    case 403u: goto L_088FDCB8;
    case 404u: goto L_088FDCC8;
    case 405u: goto L_088FDCD8;
    case 406u: goto L_088FDCE4;
    case 407u: goto L_088FDCF4;
    case 408u: goto L_088FDD04;
    case 409u: goto L_088FDD10;
    case 410u: goto L_088FDD20;
    case 411u: goto L_088FDD30;
    case 412u: goto L_088FDD3C;
    case 413u: goto L_088FDD4C;
    case 414u: goto L_088FDD5C;
    case 415u: goto L_088FDD68;
    case 416u: goto L_088FDD78;
    case 417u: goto L_088FDD88;
    case 418u: goto L_088FDD94;
    case 419u: goto L_088FDDA4;
    case 420u: goto L_088FDDB4;
    case 421u: goto L_088FDDC0;
    case 422u: goto L_088FDDD0;
    case 423u: goto L_088FDDE0;
    case 424u: goto L_088FDDEC;
    case 425u: goto L_088FDDFC;
    case 426u: goto L_088FDE10;
    case 427u: goto L_088FDE1C;
    case 428u: goto L_088FDE2C;
    case 429u: goto L_088FDE3C;
    case 430u: goto L_088FDE48;
    case 431u: goto L_088FDE58;
    case 432u: goto L_088FDE68;
    case 433u: goto L_088FDE74;
    case 434u: goto L_088FDE84;
    case 435u: goto L_088FDE94;
    case 436u: goto L_088FDEA0;
    case 437u: goto L_088FDEB0;
    case 438u: goto L_088FDEC0;
    case 439u: goto L_088FDECC;
    case 440u: goto L_088FDEDC;
    case 441u: goto L_088FDEEC;
    case 442u: goto L_088FDEF8;
    case 443u: goto L_088FDF08;
    case 444u: goto L_088FDF1C;
    case 445u: goto L_088FDF28;
    case 446u: goto L_088FDF38;
    case 447u: goto L_088FDF4C;
    case 448u: goto L_088FDF58;
    case 449u: goto L_088FDF68;
    case 450u: goto L_088FDF7C;
    case 451u: goto L_088FDF88;
    case 452u: goto L_088FDF98;
    case 453u: goto L_088FDFA8;
    case 454u: goto L_088FDFB4;
    case 455u: goto L_088FDFC4;
    case 456u: goto L_088FDFD8;
    case 457u: goto L_088FDFE4;
    case 458u: goto L_088FDFF4;
    case 459u: goto L_088FE004;
    case 460u: goto L_088FE010;
    case 461u: goto L_088FE020;
    case 462u: goto L_088FE034;
    case 463u: goto L_088FE040;
    case 464u: goto L_088FE050;
    case 465u: goto L_088FE064;
    case 466u: goto L_088FE070;
    case 467u: goto L_088FE080;
    case 468u: goto L_088FE090;
    case 469u: goto L_088FE09C;
    case 470u: goto L_088FE0AC;
    case 471u: goto L_088FE0C0;
    case 472u: goto L_088FE0CC;
    case 473u: goto L_088FE0DC;
    case 474u: goto L_088FE0EC;
    case 475u: goto L_088FE0F8;
    case 476u: goto L_088FE108;
    case 477u: goto L_088FE11C;
    case 478u: goto L_088FE128;
    case 479u: goto L_088FE138;
    case 480u: goto L_088FE14C;
    case 481u: goto L_088FE158;
    case 482u: goto L_088FE168;
    case 483u: goto L_088FE17C;
    case 484u: goto L_088FE188;
    case 485u: goto L_088FE198;
    case 486u: goto L_088FE1A8;
    case 487u: goto L_088FE1B4;
    case 488u: goto L_088FE1C4;
    case 489u: goto L_088FE1D4;
    case 490u: goto L_088FE1E0;
    case 491u: goto L_088FE1F0;
    case 492u: goto L_088FE204;
    case 493u: goto L_088FE210;
    case 494u: goto L_088FE220;
    case 495u: goto L_088FE230;
    case 496u: goto L_088FE23C;
    case 497u: goto L_088FE24C;
    case 498u: goto L_088FE25C;
    case 499u: goto L_088FE268;
    case 500u: goto L_088FE278;
    case 501u: goto L_088FE288;
    case 502u: goto L_088FE294;
    case 503u: goto L_088FE2A4;
    case 504u: goto L_088FE2B4;
    case 505u: goto L_088FE2C0;
    case 506u: goto L_088FE2D0;
    case 507u: goto L_088FE2DC;
    case 508u: goto L_088FE2E8;
    case 509u: goto L_088FE2F8;
    case 510u: goto L_088FE308;
    case 511u: goto L_088FE314;
    case 512u: goto L_088FE324;
    case 513u: goto L_088FE334;
    case 514u: goto L_088FE340;
    case 515u: goto L_088FE350;
    case 516u: goto L_088FE360;
    case 517u: goto L_088FE36C;
    case 518u: goto L_088FE37C;
    case 519u: goto L_088FE390;
    case 520u: goto L_088FE39C;
    case 521u: goto L_088FE3AC;
    case 522u: goto L_088FE3C0;
    case 523u: goto L_088FE3CC;
    case 524u: goto L_088FE3DC;
    case 525u: goto L_088FE3EC;
    case 526u: goto L_088FE3F8;
    case 527u: goto L_088FE40C;
    case 528u: goto L_088FE41C;
    case 529u: goto L_088FE428;
    case 530u: goto L_088FE438;
    case 531u: goto L_088FE448;
    case 532u: goto L_088FE454;
    case 533u: goto L_088FE464;
    case 534u: goto L_088FE474;
    case 535u: goto L_088FE480;
    case 536u: goto L_088FE490;
    case 537u: goto L_088FE4A0;
    case 538u: goto L_088FE4AC;
    case 539u: goto L_088FE4BC;
    case 540u: goto L_088FE4CC;
    case 541u: goto L_088FE4D8;
    case 542u: goto L_088FE4E8;
    case 543u: goto L_088FE4F8;
    case 544u: goto L_088FE504;
    case 545u: goto L_088FE514;
    case 546u: goto L_088FE524;
    case 547u: goto L_088FE530;
    case 548u: goto L_088FE540;
    case 549u: goto L_088FE554;
    case 550u: goto L_088FE560;
    case 551u: goto L_088FE570;
    case 552u: goto L_088FE580;
    case 553u: goto L_088FE58C;
    case 554u: goto L_088FE59C;
    case 555u: goto L_088FE5AC;
    case 556u: goto L_088FE5B8;
    case 557u: goto L_088FE5C8;
    case 558u: goto L_088FE5D8;
    case 559u: goto L_088FE5E4;
    case 560u: goto L_088FE5F4;
    case 561u: goto L_088FE608;
    case 562u: goto L_088FE614;
    case 563u: goto L_088FE624;
    case 564u: goto L_088FE638;
    case 565u: goto L_088FE644;
    case 566u: goto L_088FE654;
    case 567u: goto L_088FE664;
    case 568u: goto L_088FE670;
    case 569u: goto L_088FE680;
    case 570u: goto L_088FE690;
    case 571u: goto L_088FE69C;
    case 572u: goto L_088FE6AC;
    case 573u: goto L_088FE6BC;
    case 574u: goto L_088FE6C8;
    case 575u: goto L_088FE6D8;
    case 576u: goto L_088FE6E8;
    case 577u: goto L_088FE6F4;
    case 578u: goto L_088FE704;
    case 579u: goto L_088FE718;
    case 580u: goto L_088FE724;
    case 581u: goto L_088FE734;
    case 582u: goto L_088FE744;
    case 583u: goto L_088FE750;
    case 584u: goto L_088FE760;
    case 585u: goto L_088FE76C;
    case 586u: goto L_088FE778;
    case 587u: goto L_088FE788;
    case 588u: goto L_088FE794;
    case 589u: goto L_088FE7A0;
    case 590u: goto L_088FE7A8;
    case 591u: goto L_088FE7B8;
    case 592u: goto L_088FE7D0;
    case 593u: goto L_088FE7DC;
    case 594u: goto L_088FE7EC;
    case 595u: goto L_088FE804;
    case 596u: goto L_088FE810;
    case 597u: goto L_088FE820;
    case 598u: goto L_088FE838;
    case 599u: goto L_088FE844;
    case 600u: goto L_088FE854;
    case 601u: goto L_088FE86C;
    case 602u: goto L_088FE878;
    case 603u: goto L_088FE888;
    case 604u: goto L_088FE8A0;
    case 605u: goto L_088FE8AC;
    case 606u: goto L_088FE8BC;
    case 607u: goto L_088FE8D4;
    case 608u: goto L_088FE8E0;
    case 609u: goto L_088FE8F0;
    case 610u: goto L_088FE908;
    case 611u: goto L_088FE914;
    case 612u: goto L_088FE924;
    case 613u: goto L_088FE93C;
    case 614u: goto L_088FE948;
    case 615u: goto L_088FE958;
    case 616u: goto L_088FE970;
    case 617u: goto L_088FE97C;
    case 618u: goto L_088FE990;
    case 619u: goto L_088FE9A8;
    case 620u: goto L_088FE9B4;
    case 621u: goto L_088FE9C4;
    case 622u: goto L_088FE9D4;
    case 623u: goto L_088FE9E0;
    case 624u: goto L_088FE9F0;
    case 625u: goto L_088FEA04;
    case 626u: goto L_088FEA10;
    case 627u: goto L_088FEA20;
    case 628u: goto L_088FEA30;
    case 629u: goto L_088FEA3C;
    case 630u: goto L_088FEA4C;
    case 631u: goto L_088FEA60;
    case 632u: goto L_088FEA6C;
    case 633u: goto L_088FEA7C;
    case 634u: goto L_088FEA8C;
    case 635u: goto L_088FEA98;
    case 636u: goto L_088FEAA8;
    case 637u: goto L_088FEAB8;
    case 638u: goto L_088FEAC4;
    case 639u: goto L_088FEAD4;
    case 640u: goto L_088FEAE8;
    case 641u: goto L_088FEAF4;
    case 642u: goto L_088FEB04;
    case 643u: goto L_088FEB18;
    case 644u: goto L_088FEB24;
    case 645u: goto L_088FEB34;
    case 646u: goto L_088FEB44;
    case 647u: goto L_088FEB50;
    case 648u: goto L_088FEB60;
    case 649u: goto L_088FEB74;
    case 650u: goto L_088FEB80;
    case 651u: goto L_088FEB90;
    case 652u: goto L_088FEBA4;
    case 653u: goto L_088FEBB0;
    case 654u: goto L_088FEBBC;
    case 655u: goto L_088FEBC8;
    case 656u: goto L_088FEBD4;
    case 657u: goto L_088FEBDC;
    case 658u: goto L_088FEBEC;
    case 659u: goto L_088FEBFC;
    case 660u: goto L_088FEC08;
    case 661u: goto L_088FEC18;
    case 662u: goto L_088FEC28;
    case 663u: goto L_088FEC34;
    case 664u: goto L_088FEC44;
    case 665u: goto L_088FEC54;
    case 666u: goto L_088FEC60;
    case 667u: goto L_088FEC70;
    case 668u: goto L_088FEC80;
    case 669u: goto L_088FEC8C;
    case 670u: goto L_088FEC9C;
    case 671u: goto L_088FECAC;
    case 672u: goto L_088FECB8;
    case 673u: goto L_088FECC8;
    case 674u: goto L_088FECD8;
    case 675u: goto L_088FECE4;
    case 676u: goto L_088FECF4;
    case 677u: goto L_088FED04;
    case 678u: goto L_088FED10;
    case 679u: goto L_088FED20;
    case 680u: goto L_088FED30;
    case 681u: goto L_088FED3C;
    case 682u: goto L_088FED4C;
    case 683u: goto L_088FED5C;
    case 684u: goto L_088FED68;
    case 685u: goto L_088FED78;
    case 686u: goto L_088FED88;
    case 687u: goto L_088FED94;
    case 688u: goto L_088FEDA4;
    case 689u: goto L_088FEDB4;
    case 690u: goto L_088FEDC0;
    case 691u: goto L_088FEDD0;
    case 692u: goto L_088FEDE0;
    case 693u: goto L_088FEDEC;
    case 694u: goto L_088FEDFC;
    case 695u: goto L_088FEE0C;
    case 696u: goto L_088FEE18;
    case 697u: goto L_088FEE24;
    case 698u: goto L_088FEE30;
    case 699u: goto L_088FEE3C;
    case 700u: goto L_088FEE44;
    case 701u: goto L_088FEE54;
    case 702u: goto L_088FEE64;
    case 703u: goto L_088FEE70;
    case 704u: goto L_088FEE80;
    case 705u: goto L_088FEE8C;
    case 706u: goto L_088FEE98;
    case 707u: goto L_088FEEA4;
    case 708u: goto L_088FEEB0;
    case 709u: goto L_088FEEBC;
    case 710u: goto L_088FEEE8;
    case 711u: goto L_088FEF80;
    case 712u: goto L_088FEFB8;
    case 713u: goto L_088FEFC0;
    case 714u: goto L_088FF01C;
    case 715u: goto L_088FF02C;
    case 716u: goto L_088FF060;
    case 717u: goto L_088FF094;
    case 718u: goto L_088FF0A0;
    case 719u: goto L_088FF0BC;
    case 720u: goto L_088FF0FC;
    case 721u: goto L_088FF108;
    case 722u: goto L_088FF110;
    case 723u: goto L_088FF114;
    case 724u: goto L_088FF16C;
    case 725u: goto L_088FF17C;
    case 726u: goto L_088FF184;
    case 727u: goto L_088FF198;
    case 728u: goto L_088FF1A8;
    case 729u: goto L_088FF1B0;
    case 730u: goto L_088FF1DC;
    case 731u: goto L_088FF1E8;
    case 732u: goto L_088FF1F4;
    case 733u: goto L_088FF204;
    case 734u: goto L_088FF288;
    case 735u: goto L_088FF28C;
    case 736u: goto L_088FF2A8;
    case 737u: goto L_088FF2C0;
    case 738u: goto L_088FF2EC;
    case 739u: goto L_088FF344;
    case 740u: goto L_088FF388;
    case 741u: goto L_088FF390;
    case 742u: goto L_088FF3A0;
    case 743u: goto L_088FF3B4;
    case 744u: goto L_088FF400;
    case 745u: goto L_088FF408;
    case 746u: goto L_088FF418;
    case 747u: goto L_088FF428;
    case 748u: goto L_088FF474;
    case 749u: goto L_088FF47C;
    case 750u: goto L_088FF48C;
    case 751u: goto L_088FF4A0;
    case 752u: goto L_088FF4E4;
    case 753u: goto L_088FF4F0;
    case 754u: goto L_088FF508;
    case 755u: goto L_088FF544;
    case 756u: goto L_088FF5CC;
    case 757u: goto L_088FF5D0;
    case 758u: goto L_088FF5FC;
    case 759u: goto L_088FF640;
    case 760u: goto L_088FF648;
    case 761u: goto L_088FF658;
    case 762u: goto L_088FF66C;
    case 763u: goto L_088FF6B8;
    case 764u: goto L_088FF6C0;
    case 765u: goto L_088FF6D0;
    case 766u: goto L_088FF6E0;
    case 767u: goto L_088FF72C;
    case 768u: goto L_088FF734;
    case 769u: goto L_088FF744;
    case 770u: goto L_088FF758;
    case 771u: goto L_088FF79C;
    case 772u: goto L_088FF7A8;
    case 773u: goto L_088FF7C0;
    case 774u: goto L_088FF800;
    case 775u: goto L_088FF808;
    case 776u: goto L_088FF92C;
    case 777u: goto L_088FF934;
    case 778u: goto L_088FF950;
    case 779u: goto L_088FF968;
    case 780u: goto L_088FF990;
    case 781u: goto L_088FF9F8;
    case 782u: goto L_088FFA04;
    case 783u: goto L_088FFA0C;
    case 784u: goto L_088FFA14;
    case 785u: goto L_088FFA24;
    case 786u: goto L_088FFA30;
    case 787u: goto L_088FFA54;
    case 788u: goto L_088FFA64;
    case 789u: goto L_088FFA84;
    case 790u: goto L_088FFA90;
    case 791u: goto L_088FFAB4;
    case 792u: goto L_088FFAD0;
    case 793u: goto L_088FFADC;
    case 794u: goto L_088FFB00;
    case 795u: goto L_088FFB14;
    case 796u: goto L_088FFB20;
    case 797u: goto L_088FFB40;
    case 798u: goto L_088FFB58;
    case 799u: goto L_088FFB64;
    case 800u: goto L_088FFB88;
    case 801u: goto L_088FFB9C;
    case 802u: goto L_088FFBA8;
    case 803u: goto L_088FFBC8;
    case 804u: goto L_088FFBD8;
    case 805u: goto L_088FFBF4;
    case 806u: goto L_088FFC00;
    case 807u: goto L_088FFC20;
    case 808u: goto L_088FFC34;
    case 809u: goto L_088FFC40;
    case 810u: goto L_088FFC60;
    case 811u: goto L_088FFC78;
    case 812u: goto L_088FFC84;
    case 813u: goto L_088FFCA8;
    case 814u: goto L_088FFCBC;
    case 815u: goto L_088FFCC8;
    case 816u: goto L_088FFCE8;
    case 817u: goto L_088FFCFC;
    case 818u: goto L_088FFD08;
    case 819u: goto L_088FFD28;
    case 820u: goto L_088FFD34;
    case 821u: goto L_088FFD50;
    case 822u: goto L_088FFD6C;
    case 823u: goto L_088FFD88;
    case 824u: goto L_088FFDA4;
    case 825u: goto L_088FFDC0;
    case 826u: goto L_088FFDDC;
    case 827u: goto L_088FFDF8;
    case 828u: goto L_088FFE14;
    case 829u: goto L_088FFE30;
    case 830u: goto L_088FFE4C;
    case 831u: goto L_088FFE68;
    case 832u: goto L_088FFE84;
    case 833u: goto L_088FFEA0;
    case 834u: goto L_088FFEBC;
    case 835u: goto L_088FFED8;
    case 836u: goto L_088FFEF4;
    case 837u: goto L_088FFF10;
    case 838u: goto L_088FFF2C;
    case 839u: goto L_088FFF48;
    case 840u: goto L_088FFF64;
    case 841u: goto L_088FFF80;
    case 842u: goto L_088FFF9C;
    case 843u: goto L_088FFFB8;
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
L_088FC000:
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    aot_gpr_31 = (0x088FC014u);
    ctx.gpr[17] = (aot_gpr_6 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 430u, 0x08806E68u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FC014u) goto L_088FC014;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FC014:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FC020u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 430u, 0x08806E68u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FC020u) goto L_088FC020;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FC020:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FC02Cu);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-3));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 486u, 0x08807414u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FC02Cu) goto L_088FC02C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FC02C:
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
L_088FC040:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    aot_gpr_31 = (0x088FC05Cu);
    ctx.gpr[17] = (aot_gpr_6 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 430u, 0x08806E68u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FC05Cu) goto L_088FC05C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FC05C:
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[17]);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FC06Cu);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806DC0, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FC06Cu) goto L_088FC06C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FC06C:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FC078u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-3));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 486u, 0x08807414u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FC078u) goto L_088FC078;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FC078:
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
L_088FC08C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-144));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(104), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_6 = (ctx.gpr[28] + static_cast<std::uint32_t>(-22608));
    aot_gpr_5 = (0u | 2u);
    { const std::uint32_t aot_run_words[9]{ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], ctx.gpr[23], ctx.gpr[30], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(108), aot_run_words); }
    aot_gpr_31 = (0x088FC0CCu);
    ctx.gpr[7] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 284u, 0x0889D588u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FC0CCu) goto L_088FC0CC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FC0CC:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[18] = (0u | 1u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FC0E0u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0880692C, 0u, 337u, 0x0880692Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_16, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 337u, 0x0880692Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FC0E0u) goto L_088FC0E0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FC0E0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_088FC16C;
      }
      goto L_088FC0E8;
    }
L_088FC0E8:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FC0F4u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806A88, 0u, 360u, 0x08806A88u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 360u, 0x08806A88u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FC0F4u) goto L_088FC0F4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FC0F4:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_6 = (aot_gpr_29 | 0u);
    aot_gpr_31 = (0x088FC108u);
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0120_entry, 120u, 547u, 0x089E69E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FC108u) goto L_088FC108;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FC108:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_088FC15C;
      }
      goto L_088FC110;
    }
L_088FC110:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088FC120u);
    aot_gpr_6 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0120_entry, 120u, 622u, 0x089E6F54u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FC120u) goto L_088FC120;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FC120:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_088FC144;
      }
      goto L_088FC128;
    }
L_088FC128:
    aot_gpr_31 = (0x088FC130u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 462u, 0x08807220u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FC130u) goto L_088FC130;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FC130:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-22580));
      if (branch_taken) {
          goto L_088FC1D4;
      }
      goto L_088FC13C;
    }
L_088FC13C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088FC2FC;
      }
      goto L_088FC144;
    }
L_088FC144:
    aot_gpr_6 = (ctx.gpr[28] + static_cast<std::uint32_t>(-22596));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FC154u);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 201u, 0x0889CFFCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FC154u) goto L_088FC154;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FC154:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088FC300;
      }
      goto L_088FC15C;
    }
L_088FC15C:
    aot_gpr_31 = (0x088FC164u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 424u, 0x08806DA8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FC164u) goto L_088FC164;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FC164:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_088FC300;
      }
      goto L_088FC16C;
    }
L_088FC16C:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FC178u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806888, 0u, 324u, 0x08806888u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 324u, 0x08806888u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FC178u) goto L_088FC178;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FC178:
    aot_gpr_4 = (0u | 6u);
    { const bool branch_taken = ctx.gpr[2] != aot_gpr_4;
      if (branch_taken) {
          goto L_088FC1B8;
      }
      goto L_088FC184;
    }
L_088FC184:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-22600));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FC194u);
    aot_gpr_6 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 440u, 0x08806F24u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FC194u) goto L_088FC194;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FC194:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FC1A0u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 375u, 0x08806B2Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FC1A0u) goto L_088FC1A0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FC1A0:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FC1B0u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0880682C, 0u, 322u, 0x0880682Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_16, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 322u, 0x0880682Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FC1B0u) goto L_088FC1B0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FC1B0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088FC110;
      }
      goto L_088FC1B8;
    }
L_088FC1B8:
    aot_gpr_6 = (2232u << 16u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (0u | 1u);
    aot_gpr_31 = (0x088FC1CCu);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-14304));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 201u, 0x0889CFFCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FC1CCu) goto L_088FC1CC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FC1CC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088FC300;
      }
      goto L_088FC1D4;
    }
L_088FC1D4:
    aot_gpr_6 = (ctx.gpr[28] + static_cast<std::uint32_t>(-22572));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(100), aot_gpr_5);
    ctx.gpr[30] = (ctx.gpr[28] + static_cast<std::uint32_t>(-22560));
    ctx.gpr[23] = (ctx.gpr[28] + static_cast<std::uint32_t>(-22548));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(96), aot_gpr_6);
    ctx.gpr[22] = (ctx.gpr[28] + static_cast<std::uint32_t>(-22540));
    ctx.gpr[21] = (ctx.gpr[28] + static_cast<std::uint32_t>(-22528));
    ctx.gpr[20] = (ctx.gpr[28] + static_cast<std::uint32_t>(-22520));
    ctx.gpr[19] = (ctx.gpr[28] + static_cast<std::uint32_t>(-22512));
    ctx.gpr[18] = (ctx.gpr[28] + static_cast<std::uint32_t>(-22500));
    goto L_088FC1FC;
L_088FC1FC:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-83));
    aot_gpr_5 = (aot_gpr_4 < static_cast<std::uint32_t>(35) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_088FC2EC;
      }
      goto L_088FC20C;
    }
L_088FC20C:
    aot_gpr_4 = (aot_gpr_4 << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_4);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-14168)));
    jump_target = ctx.gpr[1];
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088FC224:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(100)));
    aot_gpr_31 = (0x088FC234u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0061_entry, 61u, 989u, 0x088FBFF8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FC234u) goto L_088FC234;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FC234:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(96)));
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    aot_gpr_31 = (0x088FC244u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0061_entry, 61u, 989u, 0x088FBFF8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FC244u) goto L_088FC244;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FC244:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(28)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FC254u);
    aot_gpr_5 = (ctx.gpr[30] | 0u);
    goto L_088FC040;
L_088FC254:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(12)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FC264u);
    aot_gpr_5 = (ctx.gpr[23] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0061_entry, 61u, 989u, 0x088FBFF8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FC264u) goto L_088FC264;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FC264:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088FC2EC;
      }
      goto L_088FC26C;
    }
L_088FC26C:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FC27Cu);
    aot_gpr_5 = (ctx.gpr[22] | 0u);
    goto L_088FC040;
L_088FC27C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088FC2EC;
      }
      goto L_088FC284;
    }
L_088FC284:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(24)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FC294u);
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    goto L_088FC040;
L_088FC294:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088FC2EC;
      }
      goto L_088FC29C;
    }
L_088FC29C:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FC2ACu);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0061_entry, 61u, 989u, 0x088FBFF8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FC2ACu) goto L_088FC2AC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FC2AC:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FC2BCu);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0061_entry, 61u, 989u, 0x088FBFF8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FC2BCu) goto L_088FC2BC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FC2BC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088FC2EC;
      }
      goto L_088FC2C4;
    }
L_088FC2C4:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x088FC2D4u);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FC2D4u) goto L_088FC2D4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FC2D4:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FC2E0u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-3));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0880682C, 0u, 322u, 0x0880682Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_16, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 322u, 0x0880682Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FC2E0u) goto L_088FC2E0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FC2E0:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FC2ECu);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-3));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 486u, 0x08807414u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FC2ECu) goto L_088FC2EC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FC2EC:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088FC1FC;
      }
      goto L_088FC2FC;
    }
L_088FC2FC:
    ctx.gpr[2] = (0u | 1u);
    goto L_088FC300;
L_088FC300:
    { std::uint32_t aot_run_words[10]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(104), aot_run_words);
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
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088FC330:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-112));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(96), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(104), ctx.gpr[18]);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    ctx.gpr[18] = (0u | 1u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(100), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(108), aot_gpr_31);
    aot_gpr_31 = (0x088FC354u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 294u, 0x0889D610u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FC354u) goto L_088FC354;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FC354:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_6 = (aot_gpr_29 | 0u);
    aot_gpr_31 = (0x088FC368u);
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0120_entry, 120u, 547u, 0x089E69E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FC368u) goto L_088FC368;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FC368:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_088FC3C0;
      }
      goto L_088FC370;
    }
L_088FC370:
    ctx.gpr[17] = (0u | 2u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FC380u);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 294u, 0x0889D610u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FC380u) goto L_088FC380;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FC380:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    aot_gpr_31 = (0x088FC394u);
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0120_entry, 120u, 563u, 0x089E6A94u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FC394u) goto L_088FC394;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FC394:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088FC3DC;
      }
      goto L_088FC3A0;
    }
L_088FC3A0:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_31 = (0x088FC3ACu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 430u, 0x08806E68u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FC3ACu) goto L_088FC3AC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FC3AC:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FC3B8u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-2));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0880682C, 0u, 322u, 0x0880682Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_16, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 322u, 0x0880682Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FC3B8u) goto L_088FC3B8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FC3B8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_088FC3E8;
      }
      goto L_088FC3C0;
    }
L_088FC3C0:
    aot_gpr_6 = (2232u << 16u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (0u | 1u);
    aot_gpr_31 = (0x088FC3D4u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-14276));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 201u, 0x0889CFFCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FC3D4u) goto L_088FC3D4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FC3D4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088FC3E8;
      }
      goto L_088FC3DC;
    }
L_088FC3DC:
    aot_gpr_31 = (0x088FC3E4u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 424u, 0x08806DA8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FC3E4u) goto L_088FC3E4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FC3E4:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
    goto L_088FC3E8;
L_088FC3E8:
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(96), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088FC400:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-112));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(96), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(100), ctx.gpr[17]);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    ctx.gpr[17] = (0u | 1u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(104), aot_gpr_31);
    aot_gpr_31 = (0x088FC420u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 294u, 0x0889D610u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FC420u) goto L_088FC420;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FC420:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_6 = (aot_gpr_29 | 0u);
    aot_gpr_31 = (0x088FC434u);
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0120_entry, 120u, 547u, 0x089E69E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FC434u) goto L_088FC434;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FC434:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_088FC458;
      }
      goto L_088FC43C;
    }
L_088FC43C:
    aot_gpr_6 = (2232u << 16u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (0u | 1u);
    aot_gpr_31 = (0x088FC450u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-14276));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 201u, 0x0889CFFCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FC450u) goto L_088FC450;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FC450:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088FC494;
      }
      goto L_088FC458;
    }
L_088FC458:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FC464u);
    aot_gpr_5 = (0u | 3u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 273u, 0x0889D4C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FC464u) goto L_088FC464;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FC464:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FC470u);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 294u, 0x0889D610u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FC470u) goto L_088FC470;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FC470:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    aot_gpr_31 = (0x088FC484u);
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0120_entry, 120u, 570u, 0x089E6B48u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FC484u) goto L_088FC484;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FC484:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FC490u);
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 430u, 0x08806E68u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FC490u) goto L_088FC490;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FC490:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    goto L_088FC494;
L_088FC494:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(96), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088FC4A8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_gpr_16 = (aot_gpr_5 | 0u);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_31);
    aot_gpr_31 = (0x088FC4CCu);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 294u, 0x0889D610u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FC4CCu) goto L_088FC4CC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FC4CC:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (0u | 1u);
    aot_gpr_6 = (0u | 6u);
    aot_gpr_31 = (0x088FC4E4u);
    ctx.gpr[18] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 269u, 0x0889D46Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FC4E4u) goto L_088FC4E4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FC4E4:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088FC4F0u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 331u, 0x088068E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FC4F0u) goto L_088FC4F0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FC4F0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_088FC518;
      }
      goto L_088FC4F8;
    }
L_088FC4F8:
    { const bool branch_taken = aot_gpr_16 == 0u;
    aot_gpr_4 = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_088FC520;
      }
      goto L_088FC500;
    }
L_088FC500:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (0u | 1u);
    aot_gpr_31 = (0x088FC510u);
    aot_gpr_6 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 571u, 0x08807B18u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FC510u) goto L_088FC510;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FC510:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088FC530;
      }
      goto L_088FC518;
    }
L_088FC518:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088FC560;
      }
      goto L_088FC520;
    }
L_088FC520:
    aot_gpr_5 = (0u | 1u);
    aot_gpr_31 = (0x088FC52Cu);
    aot_gpr_6 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 575u, 0x08807B78u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FC52Cu) goto L_088FC52C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FC52C:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    goto L_088FC530;
L_088FC530:
    { const bool branch_taken = ctx.gpr[18] != 0u;
      if (branch_taken) {
          goto L_088FC540;
      }
      goto L_088FC538;
    }
L_088FC538:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088FC560;
      }
      goto L_088FC540;
    }
L_088FC540:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088FC54Cu);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 430u, 0x08806E68u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FC54Cu) goto L_088FC54C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FC54C:
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(1));
    aot_gpr_5 = (0u - aot_gpr_16);
    aot_gpr_31 = (0x088FC55Cu);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 315u, 0x0880673Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FC55Cu) goto L_088FC55C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FC55C:
    ctx.gpr[2] = (aot_gpr_16 | 0u);
    goto L_088FC560;
L_088FC560:
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
L_088FC578:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x088FC588u);
    aot_gpr_5 = (0u | 1u);
    goto L_088FC4A8;
L_088FC588:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088FC594:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    aot_gpr_31 = (0x088FC5ACu);
    aot_gpr_5 = (0u | 3u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 273u, 0x0889D4C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FC5ACu) goto L_088FC5AC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FC5AC:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FC5B8u);
    aot_gpr_5 = (0u | 0u);
    goto L_088FC4A8;
L_088FC5B8:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088FC5C8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_gpr_16 = (aot_gpr_5 | 0u);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    aot_gpr_31 = (0x088FC5E8u);
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-22704));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 452u, 0x088070BCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FC5E8u) goto L_088FC5E8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FC5E8:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088FC5F4u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-10000));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 456u, 0x08807148u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FC5F4u) goto L_088FC5F4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FC5F4:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088FC600u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806888, 0u, 324u, 0x08806888u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 324u, 0x08806888u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FC600u) goto L_088FC600;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FC600:
    aot_gpr_4 = (0u | 6u);
    { const bool branch_taken = ctx.gpr[2] != aot_gpr_4;
      if (branch_taken) {
          goto L_088FC670;
      }
      goto L_088FC60C;
    }
L_088FC60C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (2232u << 16u);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-14256));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (0x088FC62Cu);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 430u, 0x08806E68u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FC62Cu) goto L_088FC62C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FC62C:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_16) < 0;
      if (branch_taken) {
          goto L_088FC650;
      }
      goto L_088FC638;
    }
L_088FC638:
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_16);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088FC648u);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806DC0, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FC648u) goto L_088FC648;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FC648:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088FC658;
      }
      goto L_088FC650;
    }
L_088FC650:
    aot_gpr_31 = (0x088FC658u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 424u, 0x08806DA8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FC658u) goto L_088FC658;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FC658:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (0u | 2u);
    aot_gpr_31 = (0x088FC668u);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 508u, 0x08807644u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FC668u) goto L_088FC668;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FC668:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088FC67C;
      }
      goto L_088FC670;
    }
L_088FC670:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088FC67Cu);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-2));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806654, 0u, 303u, 0x08806654u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 303u, 0x08806654u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FC67Cu) goto L_088FC67C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FC67C:
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
L_088FC690:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    { const std::uint32_t aot_run_words[3]{aot_gpr_16, ctx.gpr[17], ctx.gpr[18]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_gpr_16 = (aot_gpr_5 | 0u);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    ctx.gpr[18] = (0u | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_31);
    aot_gpr_31 = (0x088FC6B8u);
    aot_gpr_5 = (0u | 99u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 50u, 0x08B58294u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FC6B8u) goto L_088FC6B8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FC6B8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_088FC6C4;
      }
      goto L_088FC6C0;
    }
L_088FC6C0:
    ctx.gpr[18] = (0u | 1u);
    goto L_088FC6C4;
L_088FC6C4:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088FC6D0u);
    aot_gpr_5 = (0u | 114u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 50u, 0x08B58294u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FC6D0u) goto L_088FC6D0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FC6D0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_088FC6DC;
      }
      goto L_088FC6D8;
    }
L_088FC6D8:
    ctx.gpr[18] = (ctx.gpr[18] | 2u);
    goto L_088FC6DC;
L_088FC6DC:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088FC6E8u);
    aot_gpr_5 = (0u | 108u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 50u, 0x08B58294u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FC6E8u) goto L_088FC6E8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FC6E8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_088FC6F4;
      }
      goto L_088FC6F0;
    }
L_088FC6F0:
    ctx.gpr[18] = (ctx.gpr[18] | 4u);
    goto L_088FC6F4;
L_088FC6F4:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_16) <= 0;
      if (branch_taken) {
          goto L_088FC700;
      }
      goto L_088FC6FC;
    }
L_088FC6FC:
    ctx.gpr[18] = (ctx.gpr[18] | 8u);
    goto L_088FC700;
L_088FC700:
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
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088FC71C:
    ctx.gpr[7] = (aot_gpr_4 & 1u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    aot_gpr_6 = (0u | 0u);
      if (branch_taken) {
          goto L_088FC734;
      }
      goto L_088FC728;
    }
L_088FC728:
    ctx.gpr[7] = (0u | 99u);
    aot_gpr_6 = (0u | 1u);
    aot_mem.aot_direct_store8(aot_gpr_5 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    goto L_088FC734;
L_088FC734:
    ctx.gpr[7] = (aot_gpr_4 & 2u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
      if (branch_taken) {
          goto L_088FC750;
      }
      goto L_088FC740;
    }
L_088FC740:
    ctx.gpr[7] = (0u | 114u);
    ctx.gpr[8] = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store8(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    goto L_088FC750;
L_088FC750:
    aot_gpr_4 = (aot_gpr_4 & 4u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088FC76C;
      }
      goto L_088FC75C;
    }
L_088FC75C:
    aot_gpr_4 = (0u | 108u);
    ctx.gpr[7] = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_088FC76C;
L_088FC76C:
    aot_gpr_4 = (aot_gpr_6 + aot_gpr_5);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    jump_target = aot_gpr_31;
    ctx.gpr[2] = (aot_gpr_5 | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088FC77C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    { const std::uint32_t aot_run_words[3]{ctx.gpr[17], ctx.gpr[18], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_run_words); }
    aot_gpr_31 = (0x088FC79Cu);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806888, 0u, 324u, 0x08806888u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 324u, 0x08806888u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FC79Cu) goto L_088FC79C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FC79C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) > 0;
      if (branch_taken) {
          goto L_088FC7CC;
      }
      goto L_088FC7A4;
    }
L_088FC7A4:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FC7B0u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806654, 0u, 303u, 0x08806654u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 303u, 0x08806654u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FC7B0u) goto L_088FC7B0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FC7B0:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_6 = (0u | 0u);
    aot_gpr_31 = (0x088FC7C4u);
    ctx.gpr[7] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0120_entry, 120u, 540u, 0x089E699Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FC7C4u) goto L_088FC7C4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FC7C4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088FC830;
      }
      goto L_088FC7CC;
    }
L_088FC7CC:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (0u | 2u);
    aot_gpr_31 = (0x088FC7DCu);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 277u, 0x0889D50Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FC7DCu) goto L_088FC7DC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FC7DC:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    aot_fpr_12 = std::bit_cast<float>(0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FC7F0u);
    aot_gpr_5 = (0u | 3u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 300u, 0x0889D684u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FC7F0u) goto L_088FC7F0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FC7F0:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (0u | 1u);
    aot_gpr_6 = (0u | 6u);
    aot_gpr_31 = (0x088FC808u);
    ctx.gpr[18] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 269u, 0x0889D46Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FC808u) goto L_088FC808;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FC808:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_6 = (2192u << 16u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x088FC81Cu);
    ctx.gpr[17] = (aot_gpr_6 + static_cast<std::uint32_t>(-14904));
    goto L_088FC690;
L_088FC81C:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_6 = (ctx.gpr[2] | 0u);
    aot_gpr_31 = (0x088FC830u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0120_entry, 120u, 540u, 0x089E699Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FC830u) goto L_088FC830;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FC830:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-22704));
    aot_gpr_31 = (0x088FC83Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 452u, 0x088070BCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FC83Cu) goto L_088FC83C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FC83C:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FC848u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0880682C, 0u, 322u, 0x0880682Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_16, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 322u, 0x0880682Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FC848u) goto L_088FC848;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FC848:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FC854u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-10000));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 486u, 0x08807414u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FC854u) goto L_088FC854;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FC854:
    ctx.gpr[2] = (0u | 0u);
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
L_088FC870:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    { const std::uint32_t aot_run_words[3]{aot_gpr_16, ctx.gpr[17], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_run_words); }
    aot_gpr_31 = (0x088FC888u);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0120_entry, 120u, 545u, 0x089E69D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FC888u) goto L_088FC888;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FC888:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    aot_gpr_31 = (0x088FC894u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0120_entry, 120u, 544u, 0x089E69D0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FC894u) goto L_088FC894;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FC894:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_5 = (2192u << 16u);
      if (branch_taken) {
          goto L_088FC8C4;
      }
      goto L_088FC8A0;
    }
L_088FC8A0:
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-14904));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_088FC8C4;
      }
      goto L_088FC8AC;
    }
L_088FC8AC:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-22448));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FC8BCu);
    aot_gpr_6 = (0u | 13u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FC8BCu) goto L_088FC8BC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FC8BC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088FC8DC;
      }
      goto L_088FC8C4;
    }
L_088FC8C4:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-22704));
    aot_gpr_31 = (0x088FC8D0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 452u, 0x088070BCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FC8D0u) goto L_088FC8D0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FC8D0:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FC8DCu);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-10000));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 456u, 0x08807148u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FC8DCu) goto L_088FC8DC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FC8DC:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088FC8E8u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    goto L_088FC71C;
L_088FC8E8:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FC8F4u);
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 430u, 0x08806E68u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FC8F4u) goto L_088FC8F4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FC8F4:
    aot_gpr_31 = (0x088FC8FCu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0120_entry, 120u, 546u, 0x089E69E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FC8FCu) goto L_088FC8FC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FC8FC:
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[2]);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FC90Cu);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806DC0, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FC90Cu) goto L_088FC90C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FC90C:
    ctx.gpr[2] = (0u | 3u);
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088FC924:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-272));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(252), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(260), ctx.gpr[18]);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    ctx.gpr[18] = (2234u << 16u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(15532)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(256), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(264), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[28] + static_cast<std::uint32_t>(-22432));
    ctx.gpr[17] = (ctx.gpr[28] + static_cast<std::uint32_t>(-22420));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(268), aot_gpr_31);
    goto L_088FC954;
L_088FC954:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_31 = (0x088FC960u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 427u, 0x08B55960u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FC960u) goto L_088FC960;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FC960:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(15532)));
    aot_gpr_4 = (aot_gpr_29 | 0u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    aot_gpr_31 = (0x088FC974u);
    aot_gpr_5 = (0u | 250u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 401u, 0x08B556B8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FC974u) goto L_088FC974;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FC974:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    aot_gpr_4 = (aot_gpr_29 | 0u);
      if (branch_taken) {
          goto L_088FC98C;
      }
      goto L_088FC97C;
    }
L_088FC97C:
    aot_gpr_31 = (0x088FC984u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 56u, 0x08B582CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FC984u) goto L_088FC984;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FC984:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_088FC994;
      }
      goto L_088FC98C;
    }
L_088FC98C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088FC9B8;
      }
      goto L_088FC994;
    }
L_088FC994:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FC9A0u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 538u, 0x0889E534u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FC9A0u) goto L_088FC9A0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FC9A0:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FC9ACu);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806654, 0u, 303u, 0x08806654u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 303u, 0x08806654u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FC9ACu) goto L_088FC9AC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FC9AC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(15532)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_088FC954;
      }
      goto L_088FC9B8;
    }
L_088FC9B8:
    { std::uint32_t aot_run_words[5]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(252), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      aot_gpr_31 = aot_run_words[4];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(272));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088FC9D4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-176));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(128), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(136), ctx.gpr[19]);
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[19] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(124), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(132), ctx.gpr[18]);
    { const std::uint32_t aot_run_words[6]{ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], ctx.gpr[23], ctx.gpr[30], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(140), aot_run_words); }
    aot_gpr_31 = (0x088FCA10u);
    aot_gpr_16 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806634, 0u, 302u, 0x08806634u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 302u, 0x08806634u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FCA10u) goto L_088FCA10;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FCA10:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_088FCA8C;
      }
      goto L_088FCA18;
    }
L_088FCA18:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-22412));
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x088FCA28u);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FCA28u) goto L_088FCA28;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FCA28:
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-22404));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-22396));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(120), aot_gpr_4);
    aot_gpr_6 = (ctx.gpr[28] + static_cast<std::uint32_t>(-22392));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(116), aot_gpr_5);
    ctx.gpr[7] = (ctx.gpr[28] + static_cast<std::uint32_t>(-22388));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(112), aot_gpr_6);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-22384));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(108), ctx.gpr[7]);
    aot_gpr_6 = (2232u << 16u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-14216));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(104), aot_gpr_4);
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-22380));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(100), aot_gpr_6);
    aot_gpr_4 = (2232u << 16u);
    ctx.gpr[21] = (2232u << 16u);
    ctx.gpr[18] = (0u | 2u);
    ctx.gpr[20] = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    ctx.gpr[30] = (0u | 67u);
    ctx.gpr[23] = (0u | 116u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(96), aot_gpr_5);
    ctx.gpr[22] = (ctx.gpr[28] + static_cast<std::uint32_t>(-22364));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-14236));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-14196));
      if (branch_taken) {
          goto L_088FCB1C;
      }
      goto L_088FCA8C;
    }
L_088FCA8C:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x088FCA98u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 344u, 0x08806984u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FCA98u) goto L_088FCA98;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FCA98:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_088FCB14;
      }
      goto L_088FCAA0;
    }
L_088FCAA0:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-22408));
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x088FCAB0u);
    aot_gpr_6 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FCAB0u) goto L_088FCAB0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FCAB0:
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-22404));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-22396));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(120), aot_gpr_4);
    aot_gpr_6 = (ctx.gpr[28] + static_cast<std::uint32_t>(-22392));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(116), aot_gpr_5);
    ctx.gpr[7] = (ctx.gpr[28] + static_cast<std::uint32_t>(-22388));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(112), aot_gpr_6);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-22384));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(108), ctx.gpr[7]);
    aot_gpr_6 = (2232u << 16u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-14216));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(104), aot_gpr_4);
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-22380));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(100), aot_gpr_6);
    aot_gpr_4 = (2232u << 16u);
    ctx.gpr[21] = (2232u << 16u);
    ctx.gpr[18] = (0u | 2u);
    ctx.gpr[20] = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    ctx.gpr[30] = (0u | 67u);
    ctx.gpr[23] = (0u | 116u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(96), aot_gpr_5);
    ctx.gpr[22] = (ctx.gpr[28] + static_cast<std::uint32_t>(-22364));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-14236));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-14196));
      if (branch_taken) {
          goto L_088FCB1C;
      }
      goto L_088FCB14;
    }
L_088FCB14:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_088FCCF8;
      }
      goto L_088FCB1C;
    }
L_088FCB1C:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x088FCB2Cu);
    aot_gpr_6 = (0u | 16u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FCB2Cu) goto L_088FCB2C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FCB2C:
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    goto L_088FCB30;
L_088FCB30:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x088FCB40u);
    aot_gpr_6 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0120_entry, 120u, 547u, 0x089E69E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FCB40u) goto L_088FCB40;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FCB40:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_088FCCE0;
      }
      goto L_088FCB48;
    }
L_088FCB48:
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[18]) < 13 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088FCBC4;
      }
      goto L_088FCB54;
    }
L_088FCB54:
    { const bool branch_taken = aot_gpr_16 == 0u;
      if (branch_taken) {
          goto L_088FCBC4;
      }
      goto L_088FCB5C;
    }
L_088FCB5C:
    aot_gpr_16 = (ctx.gpr[18] + static_cast<std::uint32_t>(10));
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FCB70u);
    aot_gpr_6 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0120_entry, 120u, 547u, 0x089E69E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FCB70u) goto L_088FCB70;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FCB70:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_088FCB88;
      }
      goto L_088FCB78;
    }
L_088FCB78:
    ctx.gpr[17] = (ctx.gpr[18] + static_cast<std::uint32_t>(-1));
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_088FCB80;
L_088FCB80:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_16 = (0u | 0u);
      if (branch_taken) {
          goto L_088FCCD8;
      }
      goto L_088FCB88;
    }
L_088FCB88:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(120)));
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x088FCB98u);
    aot_gpr_6 = (0u | 5u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FCB98u) goto L_088FCB98;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FCB98:
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_088FCB9C;
L_088FCB9C:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FCBACu);
    aot_gpr_6 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0120_entry, 120u, 547u, 0x089E69E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FCBACu) goto L_088FCBAC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FCBAC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_088FCB80;
      }
      goto L_088FCBB4;
    }
L_088FCBB4:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_16 = (ctx.gpr[17] + static_cast<std::uint32_t>(10));
      if (branch_taken) {
          goto L_088FCB9C;
      }
      goto L_088FCBC4;
    }
L_088FCBC4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(116)));
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x088FCBD4u);
    aot_gpr_6 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FCBD4u) goto L_088FCBD4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FCBD4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(112)));
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x088FCBE4u);
    aot_gpr_6 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0120_entry, 120u, 622u, 0x089E6F54u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FCBE4u) goto L_088FCBE4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FCBE4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(108)));
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x088FCBF4u);
    aot_gpr_6 = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 440u, 0x08806F24u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FCBF4u) goto L_088FCBF4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FCBF4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) <= 0;
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088FCC10;
      }
      goto L_088FCC00;
    }
L_088FCC00:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(104)));
    aot_gpr_31 = (0x088FCC10u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 440u, 0x08806F24u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FCC10u) goto L_088FCC10;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FCC10:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 104 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 108 ? 1u : 0u);
      if (branch_taken) {
          goto L_088FCC38;
      }
      goto L_088FCC24;
    }
L_088FCC24:
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 102 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088FCC60;
      }
      goto L_088FCC30;
    }
L_088FCC30:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088FCC48;
      }
      goto L_088FCC38;
    }
L_088FCC38:
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 110 ? 1u : 0u);
      if (branch_taken) {
          goto L_088FCC60;
      }
      goto L_088FCC40;
    }
L_088FCC40:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088FCC60;
      }
      goto L_088FCC48;
    }
L_088FCC48:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(100)));
    aot_gpr_31 = (0x088FCC58u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 440u, 0x08806F24u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FCC58u) goto L_088FCC58;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FCC58:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088FCCC4;
      }
      goto L_088FCC60;
    }
L_088FCC60:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(12)));
    aot_gpr_5 = (0u | 109u);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_088FCC88;
      }
      goto L_088FCC74;
    }
L_088FCC74:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(96)));
    aot_gpr_31 = (0x088FCC80u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 440u, 0x08806F24u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FCC80u) goto L_088FCC80;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FCC80:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088FCCC4;
      }
      goto L_088FCC88;
    }
L_088FCC88:
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[30];
      if (branch_taken) {
          goto L_088FCC98;
      }
      goto L_088FCC90;
    }
L_088FCC90:
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[23];
      if (branch_taken) {
          goto L_088FCCB0;
      }
      goto L_088FCC98;
    }
L_088FCC98:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_5 = (ctx.gpr[22] | 0u);
    aot_gpr_31 = (0x088FCCA8u);
    aot_gpr_6 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FCCA8u) goto L_088FCCA8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FCCA8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088FCCC4;
      }
      goto L_088FCCB0;
    }
L_088FCCB0:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(28)));
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    aot_gpr_31 = (0x088FCCC4u);
    aot_gpr_6 = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 440u, 0x08806F24u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FCCC4u) goto L_088FCCC4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FCCC4:
    aot_gpr_31 = (0x088FCCCCu);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806634, 0u, 302u, 0x08806634u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 302u, 0x08806634u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FCCCCu) goto L_088FCCCC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FCCCC:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x088FCCD8u);
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 546u, 0x08807904u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FCCD8u) goto L_088FCCD8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FCCD8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_088FCB30;
      }
      goto L_088FCCE0;
    }
L_088FCCE0:
    aot_gpr_31 = (0x088FCCE8u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806634, 0u, 302u, 0x08806634u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 302u, 0x08806634u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FCCE8u) goto L_088FCCE8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FCCE8:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x088FCCF4u);
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 546u, 0x08807904u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FCCF4u) goto L_088FCCF4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FCCF4:
    ctx.gpr[2] = (0u | 1u);
    goto L_088FCCF8;
L_088FCCF8:
    { std::uint32_t aot_run_words[10]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(124), aot_run_words);
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
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(176));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088FCD28:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_6 = (2232u << 16u);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-22628));
    ctx.gpr[7] = (0u | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    aot_gpr_31 = (0x088FCD4Cu);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-14384));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 328u, 0x0889D80Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FCD4Cu) goto L_088FCD4C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FCD4C:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-22360));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FCD5Cu);
    aot_gpr_6 = (0u | 10u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FCD5Cu) goto L_088FCD5C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FCD5C:
    aot_gpr_5 = (2192u << 16u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_6 = (0u | 0u);
    aot_gpr_31 = (0x088FCD70u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-13868));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 444u, 0x08806FA8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FCD70u) goto L_088FCD70;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FCD70:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FCD7Cu);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-10001));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088073CC, 0u, 483u, 0x088073CCu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_16, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FCD7Cu) goto L_088FCD7C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FCD7C:
    ctx.gpr[2] = (0u | 1u);
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088FCD90:
    aot_gpr_6 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_gpr_5 = (0u | 0u);
      if (branch_taken) {
          goto L_088FCDA0;
      }
      goto L_088FCD9C;
    }
L_088FCD9C:
    aot_gpr_5 = (0u | 1u);
    goto L_088FCDA0;
L_088FCDA0:
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
          goto L_088FCDCC;
      }
      goto L_088FCDC4;
    }
L_088FCDC4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(aot_gpr_5));
      if (branch_taken) {
          goto L_088FCE14;
      }
      goto L_088FCDCC;
    }
L_088FCDCC:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(518));
    ctx.gpr[7] = (aot_mem.aot_direct_load16(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store16(aot_gpr_6 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[8]));
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(521)));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[7]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    aot_gpr_6 = (0u < aot_gpr_6 ? 1u : 0u);
      if (branch_taken) {
          goto L_088FCDF8;
      }
      goto L_088FCDEC;
    }
L_088FCDEC:
    aot_gpr_5 = (aot_gpr_5 & aot_gpr_6);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(aot_gpr_5));
      if (branch_taken) {
          goto L_088FCE14;
      }
      goto L_088FCDF8;
    }
L_088FCDF8:
    aot_gpr_5 = (aot_gpr_5 | aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(518)));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_6) < 21 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_088FCE14;
      }
      goto L_088FCE10;
    }
L_088FCE10:
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_088FCE14;
L_088FCE14:
    jump_target = aot_gpr_31;
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088FCE1C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (2237u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    aot_gpr_31 = (0x088FCE38u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ADC734, 182u, 137u, 0x08ADC734u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0182_entry, 182u, 137u, 0x08ADC734u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FCE38u) goto L_088FCE38;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FCE38:
    aot_gpr_4 = (2236u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(29704), ctx.gpr[2]);
    aot_gpr_5 = (aot_gpr_16 + static_cast<std::uint32_t>(16));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FCE50u);
    aot_gpr_6 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08862890, 23u, 431u, 0x08862890u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[9], ctx.gpr[10], ctx.gpr[11], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[28], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0023_entry, 23u, 431u, 0x08862890u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FCE50u) goto L_088FCE50;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FCE50:
    ctx.gpr[2] = (0u | 0u);
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088FCE64:
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-29156), static_cast<std::uint8_t>(0u));
    jump_target = aot_gpr_31;
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088FCE70:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (0u | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_16 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_088FCE98;
      }
      goto L_088FCE90;
    }
L_088FCE90:
    aot_gpr_31 = (0x088FCE98u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 452u, 0x08B65D8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FCE98u) goto L_088FCE98;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FCE98:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088FCEAC;
      }
      goto L_088FCEA8;
    }
L_088FCEA8:
    ctx.gpr[17] = (0u | 1u);
    goto L_088FCEAC;
L_088FCEAC:
    aot_gpr_4 = (0u < ctx.gpr[17] ? 1u : 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(524)));
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
    ctx.gpr[17] = (aot_gpr_4 ^ aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(518)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[17] = (0u < ctx.gpr[17] ? 1u : 0u);
      if (branch_taken) {
          goto L_088FCED8;
      }
      goto L_088FCED0;
    }
L_088FCED0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[17]));
      if (branch_taken) {
          goto L_088FCF20;
      }
      goto L_088FCED8;
    }
L_088FCED8:
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(518));
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_6));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(521)));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_5) < 9 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
      if (branch_taken) {
          goto L_088FCF04;
      }
      goto L_088FCEF8;
    }
L_088FCEF8:
    aot_gpr_4 = (ctx.gpr[17] & aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_088FCF20;
      }
      goto L_088FCF04;
    }
L_088FCF04:
    aot_gpr_4 = (ctx.gpr[17] | aot_gpr_4);
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(518)));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_5) < 21 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088FCF20;
      }
      goto L_088FCF1C;
    }
L_088FCF1C:
    aot_mem.aot_direct_store16(aot_gpr_16 + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_088FCF20;
L_088FCF20:
    ctx.gpr[2] = (0u | 0u);
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
L_088FCF38:
    aot_gpr_5 = (2237u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-28736));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(48)));
    aot_gpr_6 = (aot_gpr_6 & 2u);
    aot_gpr_6 = (0u < aot_gpr_6 ? 1u : 0u);
    aot_gpr_6 = (aot_gpr_6 & 255u);
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_gpr_5 = (0u | 0u);
      if (branch_taken) {
          goto L_088FCF5C;
      }
      goto L_088FCF58;
    }
L_088FCF58:
    aot_gpr_5 = (0u | 1u);
    goto L_088FCF5C;
L_088FCF5C:
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
          goto L_088FCF88;
      }
      goto L_088FCF80;
    }
L_088FCF80:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(aot_gpr_5));
      if (branch_taken) {
          goto L_088FCFD0;
      }
      goto L_088FCF88;
    }
L_088FCF88:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(518));
    ctx.gpr[7] = (aot_mem.aot_direct_load16(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store16(aot_gpr_6 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[8]));
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(521)));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[7]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    aot_gpr_6 = (0u < aot_gpr_6 ? 1u : 0u);
      if (branch_taken) {
          goto L_088FCFB4;
      }
      goto L_088FCFA8;
    }
L_088FCFA8:
    aot_gpr_5 = (aot_gpr_5 & aot_gpr_6);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(aot_gpr_5));
      if (branch_taken) {
          goto L_088FCFD0;
      }
      goto L_088FCFB4;
    }
L_088FCFB4:
    aot_gpr_5 = (aot_gpr_5 | aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(518)));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_6) < 21 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_088FCFD0;
      }
      goto L_088FCFCC;
    }
L_088FCFCC:
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_088FCFD0;
L_088FCFD0:
    jump_target = aot_gpr_31;
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088FCFD8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(100)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    aot_gpr_31 = (0x088FCFFCu);
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(52)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 101u, 0x08ADC560u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FCFFCu) goto L_088FCFFC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FCFFC:
    aot_gpr_4 = (2236u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(29704), ctx.gpr[2]);
    aot_gpr_5 = (aot_gpr_16 + static_cast<std::uint32_t>(16));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FD014u);
    aot_gpr_6 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08862890, 23u, 431u, 0x08862890u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[9], ctx.gpr[10], ctx.gpr[11], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[28], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0023_entry, 23u, 431u, 0x08862890u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FD014u) goto L_088FD014;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FD014:
    ctx.gpr[2] = (0u | 0u);
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088FD028:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store_word_left(aot_gpr_4 + static_cast<std::uint32_t>(3), aot_gpr_6);
    aot_mem.aot_direct_store_word_right(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    ctx.gpr[7] = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store_word_left(ctx.gpr[7] + static_cast<std::uint32_t>(3), aot_gpr_6);
    aot_mem.aot_direct_store_word_right(ctx.gpr[7] + static_cast<std::uint32_t>(0), aot_gpr_6);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(8));
    aot_mem.aot_direct_store_word_left(aot_gpr_6 + static_cast<std::uint32_t>(3), aot_gpr_5);
    aot_mem.aot_direct_store_word_right(aot_gpr_6 + static_cast<std::uint32_t>(0), aot_gpr_5);
    jump_target = aot_gpr_31;
    ctx.gpr[2] = (aot_gpr_4 | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088FD068:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[8] & 255u);
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(32))))));
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_31);
    jump_target = ctx.gpr[8];
    aot_gpr_31 = (0x088FD090u);
    aot_gpr_6 = (ctx.gpr[9] | 0u);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FD090u) goto L_088FD090;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FD090:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088FD09C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    { const std::uint32_t aot_run_words[4]{std::bit_cast<std::uint32_t>(aot_fpr_20), aot_gpr_16, ctx.gpr[17], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_31 = (0x088FD0BCu);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 294u, 0x0889D610u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FD0BCu) goto L_088FD0BC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FD0BC:
    aot_fpr_20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_gpr_31 = (0x088FD0C8u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806634, 0u, 302u, 0x08806634u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 302u, 0x08806634u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FD0C8u) goto L_088FD0C8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FD0C8:
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[2]) < 2 ? 1u : 0u);
    ctx.gpr[17] = (2236u << 16u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(32304));
      if (branch_taken) {
          goto L_088FD104;
      }
      goto L_088FD0D8;
    }
L_088FD0D8:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FD0E4u);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0075_entry, 75u, 355u, 0x08931D08u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FD0E4u) goto L_088FD0E4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FD0E4:
    aot_gpr_5 = (ctx.gpr[2] >> 24u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    aot_gpr_6 = (ctx.gpr[2] >> 16u);
    aot_gpr_6 = (aot_gpr_6 & 255u);
    ctx.gpr[7] = (ctx.gpr[2] >> 8u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    aot_gpr_31 = (0x088FD104u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0134_entry, 134u, 156u, 0x08A1CF7Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FD104u) goto L_088FD104;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FD104:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x088FD114u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0134_entry, 134u, 4u, 0x08A1C044u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FD114u) goto L_088FD114;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FD114:
    aot_gpr_31 = (0x088FD11Cu);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0134_entry, 134u, 91u, 0x08A1C8D0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FD11Cu) goto L_088FD11C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FD11C:
    ctx.gpr[2] = (0u | 0u);
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
L_088FD138:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    { const std::uint32_t aot_run_words[4]{std::bit_cast<std::uint32_t>(aot_fpr_20), aot_gpr_16, ctx.gpr[17], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_31 = (0x088FD158u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 294u, 0x0889D610u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FD158u) goto L_088FD158;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FD158:
    aot_fpr_20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_gpr_31 = (0x088FD164u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806634, 0u, 302u, 0x08806634u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 302u, 0x08806634u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FD164u) goto L_088FD164;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FD164:
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[2]) < 2 ? 1u : 0u);
    ctx.gpr[17] = (2236u << 16u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(32304));
      if (branch_taken) {
          goto L_088FD1A0;
      }
      goto L_088FD174;
    }
L_088FD174:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FD180u);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0075_entry, 75u, 355u, 0x08931D08u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FD180u) goto L_088FD180;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FD180:
    aot_gpr_5 = (ctx.gpr[2] >> 24u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    aot_gpr_6 = (ctx.gpr[2] >> 16u);
    aot_gpr_6 = (aot_gpr_6 & 255u);
    ctx.gpr[7] = (ctx.gpr[2] >> 8u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    aot_gpr_31 = (0x088FD1A0u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0134_entry, 134u, 156u, 0x08A1CF7Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FD1A0u) goto L_088FD1A0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FD1A0:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x088FD1B0u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0134_entry, 134u, 4u, 0x08A1C044u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FD1B0u) goto L_088FD1B0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FD1B0:
    aot_gpr_31 = (0x088FD1B8u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0134_entry, 134u, 91u, 0x08A1C8D0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FD1B8u) goto L_088FD1B8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FD1B8:
    ctx.gpr[2] = (0u | 0u);
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
L_088FD1D4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (2236u << 16u);
    aot_gpr_31 = (0x088FD1F0u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(32304));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0134_entry, 134u, 53u, 0x08A1C640u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FD1F0u) goto L_088FD1F0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FD1F0:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FD1FCu);
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08807098, 0u, 451u, 0x08807098u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 451u, 0x08807098u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FD1FCu) goto L_088FD1FC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FD1FC:
    ctx.gpr[2] = (0u | 1u);
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088FD210:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-64));
    { const std::uint32_t aot_run_words[7]{aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_run_words); }
    aot_gpr_16 = (0u | 0u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[18] = (0u | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(64), aot_gpr_6);
    ctx.gpr[19] = (aot_gpr_4 | 0u);
    aot_gpr_4 = (2236u << 16u);
    ctx.gpr[20] = (aot_gpr_4 + static_cast<std::uint32_t>(32304));
    aot_gpr_4 = (ctx.gpr[19] + static_cast<std::uint32_t>(3));
    aot_gpr_5 = (aot_mem.aot_direct_load_word_left(aot_gpr_4 + static_cast<std::uint32_t>(3), aot_gpr_5));
    aot_gpr_5 = (aot_mem.aot_direct_load_word_right(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_4 = (ctx.gpr[19] + static_cast<std::uint32_t>(7));
    aot_gpr_5 = (aot_mem.aot_direct_load_word_left(aot_gpr_4 + static_cast<std::uint32_t>(3), aot_gpr_5));
    aot_gpr_5 = (aot_mem.aot_direct_load_word_right(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_4 = (ctx.gpr[19] + static_cast<std::uint32_t>(11));
    aot_gpr_5 = (aot_mem.aot_direct_load_word_left(aot_gpr_4 + static_cast<std::uint32_t>(3), aot_gpr_5));
    aot_gpr_5 = (aot_mem.aot_direct_load_word_right(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5));
    ctx.fpr[14] = std::bit_cast<float>(aot_gpr_5);
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_12), std::bit_cast<std::uint32_t>(aot_fpr_13), std::bit_cast<std::uint32_t>(ctx.fpr[14])};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_fpr_12 = std::bit_cast<float>(0u);
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_12), std::bit_cast<std::uint32_t>(aot_fpr_12), std::bit_cast<std::uint32_t>(aot_fpr_12)};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words); }
    ctx.gpr[21] = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    aot_gpr_31 = (0x088FD2ACu);
    aot_gpr_6 = (ctx.gpr[21] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0134_entry, 134u, 155u, 0x08A1CF5Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FD2ACu) goto L_088FD2AC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FD2AC:
    aot_gpr_4 = (ctx.gpr[19] + static_cast<std::uint32_t>(15));
    ctx.gpr[18] = (aot_mem.aot_direct_load_word_left(aot_gpr_4 + static_cast<std::uint32_t>(3), ctx.gpr[18]));
    ctx.gpr[18] = (aot_mem.aot_direct_load_word_right(aot_gpr_4 + static_cast<std::uint32_t>(0), ctx.gpr[18]));
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[18]);
    aot_gpr_4 = (ctx.gpr[19] + static_cast<std::uint32_t>(19));
    ctx.gpr[17] = (aot_mem.aot_direct_load_word_left(aot_gpr_4 + static_cast<std::uint32_t>(3), ctx.gpr[17]));
    ctx.gpr[17] = (aot_mem.aot_direct_load_word_right(aot_gpr_4 + static_cast<std::uint32_t>(0), ctx.gpr[17]));
    aot_fpr_13 = std::bit_cast<float>(ctx.gpr[17]);
    aot_gpr_4 = (ctx.gpr[19] + static_cast<std::uint32_t>(23));
    aot_gpr_16 = (aot_mem.aot_direct_load_word_left(aot_gpr_4 + static_cast<std::uint32_t>(3), aot_gpr_16));
    aot_gpr_16 = (aot_mem.aot_direct_load_word_right(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_16));
    ctx.fpr[14] = std::bit_cast<float>(aot_gpr_16);
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_12), std::bit_cast<std::uint32_t>(aot_fpr_13), std::bit_cast<std::uint32_t>(ctx.fpr[14])};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words); }
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    aot_gpr_6 = (0u | 1u);
    aot_gpr_31 = (0x088FD2FCu);
    ctx.gpr[7] = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0134_entry, 134u, 261u, 0x08A1D580u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FD2FCu) goto L_088FD2FC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FD2FC:
    { std::uint32_t aot_run_words[7]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      ctx.gpr[20] = aot_run_words[4];
      ctx.gpr[21] = aot_run_words[5];
      aot_gpr_31 = aot_run_words[6];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088FD320:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-160));
    { const std::uint32_t aot_run_words[5]{aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(132), aot_run_words); }
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_31 = (0x088FD344u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806634, 0u, 302u, 0x08806634u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 302u, 0x08806634u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FD344u) goto L_088FD344;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FD344:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[18] = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    aot_gpr_6 = (0u | 1u);
    aot_gpr_31 = (0x088FD360u);
    ctx.gpr[7] = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0075_entry, 75u, 315u, 0x08931AF4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FD360u) goto L_088FD360;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FD360:
    ctx.gpr[19] = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    aot_gpr_6 = (0u | 2u);
    aot_gpr_31 = (0x088FD378u);
    ctx.gpr[7] = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0075_entry, 75u, 315u, 0x08931AF4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FD378u) goto L_088FD378;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FD378:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    aot_gpr_31 = (0x088FD384u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    goto L_088FD028;
L_088FD384:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(28));
    aot_gpr_31 = (0x088FD390u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    goto L_088FD028;
L_088FD390:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(16))))));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(17))))));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(18))))));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(107), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(108), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(109), static_cast<std::uint8_t>(aot_gpr_6));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(19))))));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(20))))));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(21))))));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(110), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(111), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(112), static_cast<std::uint8_t>(aot_gpr_6));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(22))))));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(23))))));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(24))))));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(114), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(115), static_cast<std::uint8_t>(aot_gpr_6));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(25))))));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(26))))));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(27))))));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(116), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(117), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(118), static_cast<std::uint8_t>(aot_gpr_6));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(28))))));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(29))))));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(30))))));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(119), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(120), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(121), static_cast<std::uint8_t>(aot_gpr_6));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(31))))));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(32))))));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(33))))));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(122), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(123), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(124), static_cast<std::uint8_t>(aot_gpr_6));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(34))))));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(35))))));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(36))))));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(125), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(126), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(127), static_cast<std::uint8_t>(aot_gpr_6));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(37))))));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(38))))));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(39))))));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(128), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(129), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(130), static_cast<std::uint8_t>(aot_gpr_6));
    aot_gpr_4 = (0u | 27u);
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(80), static_cast<std::uint16_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(8748)));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(82), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(83));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(107))))));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(108))))));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(aot_gpr_5));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 8u));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(110))))));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(111))))));
    aot_mem.aot_direct_store8(aot_gpr_5 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_6));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(112))))));
    aot_mem.aot_direct_store8(aot_gpr_5 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(aot_gpr_6));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_6) >> 8u));
    aot_mem.aot_direct_store8(aot_gpr_5 + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(114))))));
    aot_mem.aot_direct_store8(aot_gpr_5 + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(aot_gpr_6));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(8));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(115))))));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(116))))));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(aot_gpr_5));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 8u));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(118))))));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(95));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(119))))));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(120))))));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(aot_gpr_5));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 8u));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(122))))));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(123))))));
    aot_mem.aot_direct_store8(aot_gpr_5 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_6));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(124))))));
    aot_mem.aot_direct_store8(aot_gpr_5 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(aot_gpr_6));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_6) >> 8u));
    aot_mem.aot_direct_store8(aot_gpr_5 + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(126))))));
    aot_mem.aot_direct_store8(aot_gpr_5 + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(aot_gpr_6));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(8));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(127))))));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(128))))));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(aot_gpr_5));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 8u));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(130))))));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[17]) < 3 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088FD56C;
      }
      goto L_088FD544;
    }
L_088FD544:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FD550u);
    aot_gpr_5 = (0u | 3u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0196_entry, 196u, 276u, 0x08B15624u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FD550u) goto L_088FD550;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FD550:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(80));
    aot_gpr_31 = (0x088FD564u);
    aot_gpr_6 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 189u, 0x08ADCA34u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FD564u) goto L_088FD564;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FD564:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088FD588;
      }
      goto L_088FD56C;
    }
L_088FD56C:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(80));
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(40), static_cast<std::uint16_t>(0u));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(40))))));
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x088FD584u);
    ctx.gpr[7] = (0u | 0u);
    goto L_088FD210;
L_088FD584:
    ctx.gpr[2] = (0u | 1u);
    goto L_088FD588;
L_088FD588:
    { std::uint32_t aot_run_words[5]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(132), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      aot_gpr_31 = aot_run_words[4];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088FD5A4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_6);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(3))))));
    aot_gpr_5 = (aot_gpr_4 & 1u);
    aot_gpr_4 = (2236u << 16u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(32304));
      if (branch_taken) {
          goto L_088FD5D4;
      }
      goto L_088FD5C4;
    }
L_088FD5C4:
    aot_gpr_31 = (0x088FD5CCu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0134_entry, 134u, 125u, 0x08A1CC44u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FD5CCu) goto L_088FD5CC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FD5CC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088FD5DC;
      }
      goto L_088FD5D4;
    }
L_088FD5D4:
    aot_gpr_31 = (0x088FD5DCu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0134_entry, 134u, 110u, 0x08A1CA0Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FD5DCu) goto L_088FD5DC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FD5DC:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088FD5E8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    { const std::uint32_t aot_run_words[6]{aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_run_words); }
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_31 = (0x088FD610u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806634, 0u, 302u, 0x08806634u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 302u, 0x08806634u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FD610u) goto L_088FD610;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FD610:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[18] = (0u | 1u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FD628u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806A88, 0u, 360u, 0x08806A88u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 360u, 0x08806A88u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FD628u) goto L_088FD628;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FD628:
    aot_fpr_12 = std::bit_cast<float>(0u);
    ctx.gpr[17] = (aot_gpr_29 + static_cast<std::uint32_t>(18));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(ctx.fpr[0]) || std::isnan(aot_fpr_12)) && ctx.fpr[0] == aot_fpr_12)) ? 0x00800000u : 0u);
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    ctx.gpr[19] = (ctx.gpr[18] | 0u);
        goto L_088FD640;
    }
    goto L_088FD640;
L_088FD640:
    aot_gpr_4 = (ctx.gpr[19] & 255u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_gpr_5 = (0u | 4u);
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(aot_gpr_5));
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(8749)));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(21))))));
    aot_gpr_6 = (0u + static_cast<std::uint32_t>(-2));
    aot_gpr_5 = (aot_gpr_5 & aot_gpr_6);
    aot_gpr_4 = (aot_gpr_4 & 1u);
    aot_gpr_4 = (aot_gpr_5 | aot_gpr_4);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[20]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088FD69C;
      }
      goto L_088FD67C;
    }
L_088FD67C:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FD688u);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0196_entry, 196u, 276u, 0x08B15624u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FD688u) goto L_088FD688;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FD688:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088FD69Cu);
    aot_gpr_6 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 189u, 0x08ADCA34u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FD69Cu) goto L_088FD69C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FD69C:
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(0u));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(16))))));
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x088FD6B4u);
    ctx.gpr[7] = (0u | 0u);
    goto L_088FD5A4;
L_088FD6B4:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
    { std::uint32_t aot_run_words[6]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
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
L_088FD6D8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    { const std::uint32_t aot_run_words[5]{aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_run_words); }
    aot_gpr_16 = (2237u << 16u);
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(-28736));
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(8748))))));
    ctx.gpr[18] = (0u | 0u);
    aot_gpr_31 = (0x088FD708u);
    aot_gpr_4 = (0u | 12u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FD708u) goto L_088FD708;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FD708:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[19] = (aot_gpr_29 + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_088FD740;
      }
      goto L_088FD714;
    }
L_088FD714:
    aot_gpr_5 = (2235u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-27364));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), 0u);
    aot_gpr_5 = (2235u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-27348));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_gpr_5 = (2192u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-11760));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), aot_gpr_5);
    ctx.gpr[18] = (aot_gpr_4 | 0u);
    goto L_088FD740;
L_088FD740:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), ctx.gpr[18]);
      if (branch_taken) {
          goto L_088FD754;
      }
      goto L_088FD748;
    }
L_088FD748:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), aot_gpr_4);
    goto L_088FD754;
L_088FD754:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088FD764u);
    aot_gpr_6 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 340u, 0x08ADD3DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FD764u) goto L_088FD764;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FD764:
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
      if (branch_taken) {
          goto L_088FD788;
      }
      goto L_088FD770;
    }
L_088FD770:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), aot_gpr_4);
      if (branch_taken) {
          goto L_088FD788;
      }
      goto L_088FD780;
    }
L_088FD780:
    aot_gpr_31 = (0x088FD788u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE2C0, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FD788u) goto L_088FD788;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FD788:
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(8749))))));
    ctx.gpr[18] = (0u | 0u);
    aot_gpr_31 = (0x088FD798u);
    aot_gpr_4 = (0u | 12u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FD798u) goto L_088FD798;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FD798:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_5 = (2235u << 16u);
      if (branch_taken) {
          goto L_088FD7CC;
      }
      goto L_088FD7A4;
    }
L_088FD7A4:
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-27364));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), 0u);
    aot_gpr_5 = (2235u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-27348));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_gpr_5 = (2192u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-10844));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), aot_gpr_5);
    ctx.gpr[18] = (aot_gpr_4 | 0u);
    goto L_088FD7CC;
L_088FD7CC:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), ctx.gpr[18]);
      if (branch_taken) {
          goto L_088FD7E0;
      }
      goto L_088FD7D4;
    }
L_088FD7D4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), aot_gpr_4);
    goto L_088FD7E0;
L_088FD7E0:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088FD7F0u);
    aot_gpr_6 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 340u, 0x08ADD3DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FD7F0u) goto L_088FD7F0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FD7F0:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr_16 == 0u;
      if (branch_taken) {
          goto L_088FD814;
      }
      goto L_088FD7FC;
    }
L_088FD7FC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(0), aot_gpr_4);
      if (branch_taken) {
          goto L_088FD814;
      }
      goto L_088FD80C;
    }
L_088FD80C:
    aot_gpr_31 = (0x088FD814u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE2C0, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FD814u) goto L_088FD814;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FD814:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
        goto L_088FD82C;
    }
    goto L_088FD820;
L_088FD820:
    aot_gpr_31 = (0x088FD828u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 755u, 0x08B67230u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FD828u) goto L_088FD828;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FD828:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    goto L_088FD82C;
L_088FD82C:
    aot_gpr_5 = (2232u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-14024));
    aot_gpr_31 = (0x088FD83Cu);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0032_entry, 32u, 266u, 0x08885220u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FD83Cu) goto L_088FD83C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FD83C:
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
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088FD858:
    aot_gpr_4 = (0u | 21u);
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(8748), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-22240));
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(8748)));
    aot_gpr_5 = (aot_gpr_5 << 2u);
    aot_gpr_6 = (2237u << 16u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-30144));
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_4 = (0u | 22u);
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(8749), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-22224));
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(8749)));
    aot_gpr_5 = (aot_gpr_5 << 2u);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    jump_target = aot_gpr_31;
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_4);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088FD89C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    { const std::uint32_t aot_run_words[9]{std::bit_cast<std::uint32_t>(aot_fpr_20), std::bit_cast<std::uint32_t>(aot_fpr_22), std::bit_cast<std::uint32_t>(ctx.fpr[24]), aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088FD8D8;
      }
      goto L_088FD8D0;
    }
L_088FD8D0:
    aot_gpr_31 = (0x088FD8D8u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 755u, 0x08B67230u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FD8D8u) goto L_088FD8D8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FD8D8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
    aot_gpr_31 = (0x088FD8E8u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 462u, 0x08807220u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FD8E8u) goto L_088FD8E8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FD8E8:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-22192));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FD8F8u);
    aot_gpr_6 = (0u | 3u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FD8F8u) goto L_088FD8F8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FD8F8:
    aot_gpr_5 = (17279u << 16u);
    aot_fpr_20 = std::bit_cast<float>(0u);
    aot_fpr_22 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_22));
    aot_gpr_31 = (0x088FD918u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0075_entry, 75u, 305u, 0x08931A34u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FD918u) goto L_088FD918;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FD918:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FD924u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-3));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088073CC, 0u, 483u, 0x088073CCu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_16, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FD924u) goto L_088FD924;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FD924:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-22188));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FD934u);
    aot_gpr_6 = (0u | 5u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FD934u) goto L_088FD934;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FD934:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_22));
    aot_gpr_31 = (0x088FD948u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0075_entry, 75u, 305u, 0x08931A34u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FD948u) goto L_088FD948;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FD948:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FD954u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-3));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088073CC, 0u, 483u, 0x088073CCu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_16, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FD954u) goto L_088FD954;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FD954:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-22180));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FD964u);
    aot_gpr_6 = (0u | 6u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FD964u) goto L_088FD964;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FD964:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_22));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_22));
    aot_gpr_31 = (0x088FD978u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0075_entry, 75u, 305u, 0x08931A34u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FD978u) goto L_088FD978;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FD978:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FD984u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-3));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088073CC, 0u, 483u, 0x088073CCu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_16, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FD984u) goto L_088FD984;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FD984:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-22172));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FD994u);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FD994u) goto L_088FD994;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FD994:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x088FD9A8u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_22));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0075_entry, 75u, 305u, 0x08931A34u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FD9A8u) goto L_088FD9A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FD9A8:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FD9B4u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-3));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088073CC, 0u, 483u, 0x088073CCu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_16, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FD9B4u) goto L_088FD9B4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FD9B4:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-22164));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FD9C4u);
    aot_gpr_6 = (0u | 6u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FD9C4u) goto L_088FD9C4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FD9C4:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_22));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x088FD9D8u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_22));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0075_entry, 75u, 305u, 0x08931A34u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FD9D8u) goto L_088FD9D8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FD9D8:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FD9E4u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-3));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088073CC, 0u, 483u, 0x088073CCu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_16, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FD9E4u) goto L_088FD9E4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FD9E4:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-22156));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FD9F4u);
    aot_gpr_6 = (0u | 7u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FD9F4u) goto L_088FD9F4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FD9F4:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_22));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x088FDA08u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_22));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0075_entry, 75u, 305u, 0x08931A34u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FDA08u) goto L_088FDA08;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FDA08:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FDA14u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-3));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088073CC, 0u, 483u, 0x088073CCu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_16, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FDA14u) goto L_088FDA14;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FDA14:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-22148));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FDA24u);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FDA24u) goto L_088FDA24;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FDA24:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_22));
    aot_gpr_31 = (0x088FDA38u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_22));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0075_entry, 75u, 305u, 0x08931A34u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FDA38u) goto L_088FDA38;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FDA38:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FDA44u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-3));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088073CC, 0u, 483u, 0x088073CCu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_16, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FDA44u) goto L_088FDA44;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FDA44:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-22140));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FDA54u);
    aot_gpr_6 = (0u | 5u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FDA54u) goto L_088FDA54;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FDA54:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_22));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_22));
    aot_gpr_31 = (0x088FDA68u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_22));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0075_entry, 75u, 305u, 0x08931A34u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FDA68u) goto L_088FDA68;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FDA68:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FDA74u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-3));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088073CC, 0u, 483u, 0x088073CCu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_16, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FDA74u) goto L_088FDA74;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FDA74:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-22132));
    aot_gpr_31 = (0x088FDA80u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 430u, 0x08806E68u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FDA80u) goto L_088FDA80;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FDA80:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FDA8Cu);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-2));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 315u, 0x0880673Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FDA8Cu) goto L_088FDA8C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FDA8C:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FDA98u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-10001));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088073CC, 0u, 483u, 0x088073CCu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_16, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FDA98u) goto L_088FDA98;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FDA98:
    aot_gpr_31 = (0x088FDAA0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 462u, 0x08807220u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FDAA0u) goto L_088FDAA0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FDAA0:
    ctx.gpr[17] = (ctx.gpr[28] + static_cast<std::uint32_t>(-22124));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088FDAB4u);
    aot_gpr_6 = (0u | 15u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FDAB4u) goto L_088FDAB4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FDAB4:
    aot_gpr_5 = (16896u << 16u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FDAC4u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806DC0, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FDAC4u) goto L_088FDAC4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FDAC4:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FDAD0u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-3));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088073CC, 0u, 483u, 0x088073CCu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_16, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FDAD0u) goto L_088FDAD0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FDAD0:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-22108));
    aot_gpr_31 = (0x088FDADCu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 430u, 0x08806E68u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FDADCu) goto L_088FDADC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FDADC:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FDAE8u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-2));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 315u, 0x0880673Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FDAE8u) goto L_088FDAE8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FDAE8:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FDAF4u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-10001));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088073CC, 0u, 483u, 0x088073CCu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_16, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FDAF4u) goto L_088FDAF4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FDAF4:
    aot_gpr_31 = (0x088FDAFCu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 462u, 0x08807220u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FDAFCu) goto L_088FDAFC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FDAFC:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-22100));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FDB0Cu);
    aot_gpr_6 = (0u | 6u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FDB0Cu) goto L_088FDB0C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FDB0C:
    aot_gpr_5 = (50283u << 16u);
    aot_gpr_5 = (aot_gpr_5 | 16384u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FDB20u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806DC0, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FDB20u) goto L_088FDB20;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FDB20:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FDB2Cu);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-3));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088073CC, 0u, 483u, 0x088073CCu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_16, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FDB2Cu) goto L_088FDB2C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FDB2C:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-22092));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FDB3Cu);
    aot_gpr_6 = (0u | 11u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FDB3Cu) goto L_088FDB3C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FDB3C:
    aot_gpr_5 = (17224u << 16u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FDB4Cu);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806DC0, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FDB4Cu) goto L_088FDB4C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FDB4C:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FDB58u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-3));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088073CC, 0u, 483u, 0x088073CCu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_16, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FDB58u) goto L_088FDB58;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FDB58:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-22080));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FDB68u);
    aot_gpr_6 = (0u | 5u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FDB68u) goto L_088FDB68;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FDB68:
    aot_gpr_5 = (17223u << 16u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FDB78u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806DC0, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FDB78u) goto L_088FDB78;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FDB78:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FDB84u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-3));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088073CC, 0u, 483u, 0x088073CCu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_16, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FDB84u) goto L_088FDB84;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FDB84:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-22072));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FDB94u);
    aot_gpr_6 = (0u | 7u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FDB94u) goto L_088FDB94;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FDB94:
    aot_gpr_5 = (17278u << 16u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FDBA4u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806DC0, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FDBA4u) goto L_088FDBA4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FDBA4:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FDBB0u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-3));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088073CC, 0u, 483u, 0x088073CCu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_16, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FDBB0u) goto L_088FDBB0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FDBB0:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-22064));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FDBC0u);
    aot_gpr_6 = (0u | 9u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FDBC0u) goto L_088FDBC0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FDBC0:
    aot_gpr_5 = (17200u << 16u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FDBD0u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806DC0, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FDBD0u) goto L_088FDBD0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FDBD0:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FDBDCu);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-3));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088073CC, 0u, 483u, 0x088073CCu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_16, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FDBDCu) goto L_088FDBDC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FDBDC:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-22052));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FDBECu);
    aot_gpr_6 = (0u | 8u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FDBECu) goto L_088FDBEC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FDBEC:
    aot_gpr_5 = (17235u << 16u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FDBFCu);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806DC0, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FDBFCu) goto L_088FDBFC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FDBFC:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FDC08u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-3));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088073CC, 0u, 483u, 0x088073CCu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_16, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FDC08u) goto L_088FDC08;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FDC08:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-22040));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FDC18u);
    aot_gpr_6 = (0u | 7u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FDC18u) goto L_088FDC18;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FDC18:
    aot_gpr_5 = (17233u << 16u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FDC28u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806DC0, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FDC28u) goto L_088FDC28;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FDC28:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FDC34u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-3));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088073CC, 0u, 483u, 0x088073CCu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_16, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FDC34u) goto L_088FDC34;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FDC34:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-22032));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FDC44u);
    aot_gpr_6 = (0u | 6u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FDC44u) goto L_088FDC44;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FDC44:
    aot_gpr_5 = (17225u << 16u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FDC54u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806DC0, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FDC54u) goto L_088FDC54;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FDC54:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FDC60u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-3));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088073CC, 0u, 483u, 0x088073CCu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_16, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FDC60u) goto L_088FDC60;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FDC60:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-22024));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FDC70u);
    aot_gpr_6 = (0u | 8u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FDC70u) goto L_088FDC70;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FDC70:
    aot_gpr_5 = (17287u << 16u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FDC80u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806DC0, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FDC80u) goto L_088FDC80;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FDC80:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FDC8Cu);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-3));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088073CC, 0u, 483u, 0x088073CCu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_16, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FDC8Cu) goto L_088FDC8C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FDC8C:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-22012));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FDC9Cu);
    aot_gpr_6 = (0u | 6u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FDC9Cu) goto L_088FDC9C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FDC9C:
    aot_gpr_5 = (17201u << 16u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FDCACu);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806DC0, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FDCACu) goto L_088FDCAC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FDCAC:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FDCB8u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-3));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088073CC, 0u, 483u, 0x088073CCu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_16, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FDCB8u) goto L_088FDCB8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FDCB8:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-22004));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FDCC8u);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FDCC8u) goto L_088FDCC8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FDCC8:
    aot_gpr_5 = (17234u << 16u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FDCD8u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806DC0, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FDCD8u) goto L_088FDCD8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FDCD8:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FDCE4u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-3));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088073CC, 0u, 483u, 0x088073CCu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_16, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FDCE4u) goto L_088FDCE4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FDCE4:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-21996));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FDCF4u);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FDCF4u) goto L_088FDCF4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FDCF4:
    aot_gpr_5 = (17262u << 16u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FDD04u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806DC0, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FDD04u) goto L_088FDD04;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FDD04:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FDD10u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-3));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088073CC, 0u, 483u, 0x088073CCu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_16, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FDD10u) goto L_088FDD10;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FDD10:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-21988));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FDD20u);
    aot_gpr_6 = (0u | 7u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FDD20u) goto L_088FDD20;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FDD20:
    aot_gpr_5 = (50288u << 16u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FDD30u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806DC0, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FDD30u) goto L_088FDD30;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FDD30:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FDD3Cu);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-3));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088073CC, 0u, 483u, 0x088073CCu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_16, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FDD3Cu) goto L_088FDD3C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FDD3C:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-21980));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FDD4Cu);
    aot_gpr_6 = (0u | 8u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FDD4Cu) goto L_088FDD4C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FDD4C:
    aot_gpr_5 = (17247u << 16u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FDD5Cu);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806DC0, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FDD5Cu) goto L_088FDD5C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FDD5C:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FDD68u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-3));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088073CC, 0u, 483u, 0x088073CCu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_16, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FDD68u) goto L_088FDD68;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FDD68:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-21968));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FDD78u);
    aot_gpr_6 = (0u | 9u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FDD78u) goto L_088FDD78;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FDD78:
    aot_gpr_5 = (17216u << 16u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FDD88u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806DC0, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FDD88u) goto L_088FDD88;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FDD88:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FDD94u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-3));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088073CC, 0u, 483u, 0x088073CCu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_16, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FDD94u) goto L_088FDD94;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FDD94:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-21956));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FDDA4u);
    aot_gpr_6 = (0u | 6u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FDDA4u) goto L_088FDDA4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FDDA4:
    aot_gpr_5 = (17241u << 16u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FDDB4u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806DC0, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FDDB4u) goto L_088FDDB4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FDDB4:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FDDC0u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-3));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088073CC, 0u, 483u, 0x088073CCu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_16, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FDDC0u) goto L_088FDDC0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FDDC0:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-21948));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FDDD0u);
    aot_gpr_6 = (0u | 6u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FDDD0u) goto L_088FDDD0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FDDD0:
    aot_gpr_5 = (17204u << 16u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FDDE0u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806DC0, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FDDE0u) goto L_088FDDE0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FDDE0:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FDDECu);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-3));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088073CC, 0u, 483u, 0x088073CCu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_16, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FDDECu) goto L_088FDDEC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FDDEC:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-21940));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FDDFCu);
    aot_gpr_6 = (0u | 6u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FDDFCu) goto L_088FDDFC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FDDFC:
    aot_gpr_5 = (50289u << 16u);
    aot_gpr_5 = (aot_gpr_5 | 16384u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FDE10u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806DC0, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FDE10u) goto L_088FDE10;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FDE10:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FDE1Cu);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-3));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088073CC, 0u, 483u, 0x088073CCu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_16, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FDE1Cu) goto L_088FDE1C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FDE1C:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-21932));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FDE2Cu);
    aot_gpr_6 = (0u | 9u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FDE2Cu) goto L_088FDE2C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FDE2C:
    aot_gpr_5 = (17264u << 16u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FDE3Cu);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806DC0, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FDE3Cu) goto L_088FDE3C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FDE3C:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FDE48u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-3));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088073CC, 0u, 483u, 0x088073CCu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_16, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FDE48u) goto L_088FDE48;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FDE48:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-21920));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FDE58u);
    aot_gpr_6 = (0u | 7u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FDE58u) goto L_088FDE58;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FDE58:
    aot_gpr_5 = (17199u << 16u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FDE68u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806DC0, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FDE68u) goto L_088FDE68;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FDE68:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FDE74u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-3));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088073CC, 0u, 483u, 0x088073CCu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_16, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FDE74u) goto L_088FDE74;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FDE74:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-21912));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FDE84u);
    aot_gpr_6 = (0u | 6u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FDE84u) goto L_088FDE84;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FDE84:
    aot_gpr_5 = (17207u << 16u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FDE94u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806DC0, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FDE94u) goto L_088FDE94;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FDE94:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FDEA0u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-3));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088073CC, 0u, 483u, 0x088073CCu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_16, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FDEA0u) goto L_088FDEA0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FDEA0:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-21904));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FDEB0u);
    aot_gpr_6 = (0u | 8u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FDEB0u) goto L_088FDEB0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FDEB0:
    aot_gpr_5 = (17230u << 16u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FDEC0u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806DC0, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FDEC0u) goto L_088FDEC0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FDEC0:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FDECCu);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-3));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088073CC, 0u, 483u, 0x088073CCu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_16, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FDECCu) goto L_088FDECC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FDECC:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-21892));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FDEDCu);
    aot_gpr_6 = (0u | 5u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FDEDCu) goto L_088FDEDC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FDEDC:
    aot_gpr_5 = (17248u << 16u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FDEECu);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806DC0, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FDEECu) goto L_088FDEEC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FDEEC:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FDEF8u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-3));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088073CC, 0u, 483u, 0x088073CCu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_16, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FDEF8u) goto L_088FDEF8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FDEF8:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-21884));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FDF08u);
    aot_gpr_6 = (0u | 7u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FDF08u) goto L_088FDF08;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FDF08:
    aot_gpr_5 = (50286u << 16u);
    aot_gpr_5 = (aot_gpr_5 | 32768u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FDF1Cu);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806DC0, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FDF1Cu) goto L_088FDF1C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FDF1C:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FDF28u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-3));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088073CC, 0u, 483u, 0x088073CCu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_16, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FDF28u) goto L_088FDF28;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FDF28:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-21876));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FDF38u);
    aot_gpr_6 = (0u | 7u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FDF38u) goto L_088FDF38;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FDF38:
    aot_gpr_5 = (50285u << 16u);
    aot_gpr_5 = (aot_gpr_5 | 49152u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FDF4Cu);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806DC0, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FDF4Cu) goto L_088FDF4C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FDF4C:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FDF58u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-3));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088073CC, 0u, 483u, 0x088073CCu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_16, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FDF58u) goto L_088FDF58;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FDF58:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-21868));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FDF68u);
    aot_gpr_6 = (0u | 5u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FDF68u) goto L_088FDF68;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FDF68:
    aot_gpr_5 = (50288u << 16u);
    aot_gpr_5 = (aot_gpr_5 | 16384u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FDF7Cu);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806DC0, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FDF7Cu) goto L_088FDF7C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FDF7C:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FDF88u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-3));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088073CC, 0u, 483u, 0x088073CCu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_16, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FDF88u) goto L_088FDF88;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FDF88:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-21860));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FDF98u);
    aot_gpr_6 = (0u | 6u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FDF98u) goto L_088FDF98;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FDF98:
    aot_gpr_5 = (50283u << 16u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FDFA8u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806DC0, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FDFA8u) goto L_088FDFA8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FDFA8:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FDFB4u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-3));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088073CC, 0u, 483u, 0x088073CCu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_16, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FDFB4u) goto L_088FDFB4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FDFB4:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-21852));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FDFC4u);
    aot_gpr_6 = (0u | 7u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FDFC4u) goto L_088FDFC4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FDFC4:
    aot_gpr_5 = (50282u << 16u);
    aot_gpr_5 = (aot_gpr_5 | 32768u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FDFD8u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806DC0, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FDFD8u) goto L_088FDFD8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FDFD8:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FDFE4u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-3));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088073CC, 0u, 483u, 0x088073CCu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_16, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FDFE4u) goto L_088FDFE4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FDFE4:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-21844));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FDFF4u);
    aot_gpr_6 = (0u | 10u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FDFF4u) goto L_088FDFF4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FDFF4:
    aot_gpr_5 = (50282u << 16u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FE004u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806DC0, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FE004u) goto L_088FE004;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FE004:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FE010u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-3));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088073CC, 0u, 483u, 0x088073CCu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_16, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FE010u) goto L_088FE010;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FE010:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-21832));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FE020u);
    aot_gpr_6 = (0u | 5u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FE020u) goto L_088FE020;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FE020:
    aot_gpr_5 = (50284u << 16u);
    aot_gpr_5 = (aot_gpr_5 | 49152u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FE034u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806DC0, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FE034u) goto L_088FE034;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FE034:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FE040u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-3));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088073CC, 0u, 483u, 0x088073CCu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_16, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FE040u) goto L_088FE040;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FE040:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-21824));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FE050u);
    aot_gpr_6 = (0u | 7u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FE050u) goto L_088FE050;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FE050:
    aot_gpr_5 = (50284u << 16u);
    aot_gpr_5 = (aot_gpr_5 | 16384u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FE064u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806DC0, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FE064u) goto L_088FE064;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FE064:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FE070u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-3));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088073CC, 0u, 483u, 0x088073CCu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_16, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FE070u) goto L_088FE070;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FE070:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-21816));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FE080u);
    aot_gpr_6 = (0u | 6u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FE080u) goto L_088FE080;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FE080:
    aot_gpr_5 = (17267u << 16u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FE090u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806DC0, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FE090u) goto L_088FE090;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FE090:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FE09Cu);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-3));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088073CC, 0u, 483u, 0x088073CCu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_16, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FE09Cu) goto L_088FE09C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FE09C:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-21808));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FE0ACu);
    aot_gpr_6 = (0u | 6u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FE0ACu) goto L_088FE0AC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FE0AC:
    aot_gpr_5 = (50283u << 16u);
    aot_gpr_5 = (aot_gpr_5 | 32768u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FE0C0u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806DC0, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FE0C0u) goto L_088FE0C0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FE0C0:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FE0CCu);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-3));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088073CC, 0u, 483u, 0x088073CCu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_16, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FE0CCu) goto L_088FE0CC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FE0CC:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-21800));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FE0DCu);
    aot_gpr_6 = (0u | 7u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FE0DCu) goto L_088FE0DC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FE0DC:
    aot_gpr_5 = (50284u << 16u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FE0ECu);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806DC0, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FE0ECu) goto L_088FE0EC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FE0EC:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FE0F8u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-3));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088073CC, 0u, 483u, 0x088073CCu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_16, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FE0F8u) goto L_088FE0F8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FE0F8:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-21792));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FE108u);
    aot_gpr_6 = (0u | 6u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FE108u) goto L_088FE108;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FE108:
    aot_gpr_5 = (50285u << 16u);
    aot_gpr_5 = (aot_gpr_5 | 16384u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FE11Cu);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806DC0, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FE11Cu) goto L_088FE11C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FE11C:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FE128u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-3));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088073CC, 0u, 483u, 0x088073CCu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_16, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FE128u) goto L_088FE128;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FE128:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-21784));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FE138u);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FE138u) goto L_088FE138;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FE138:
    aot_gpr_5 = (50284u << 16u);
    aot_gpr_5 = (aot_gpr_5 | 32768u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FE14Cu);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806DC0, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FE14Cu) goto L_088FE14C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FE14C:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FE158u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-3));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088073CC, 0u, 483u, 0x088073CCu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_16, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FE158u) goto L_088FE158;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FE158:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-21776));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FE168u);
    aot_gpr_6 = (0u | 6u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FE168u) goto L_088FE168;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FE168:
    aot_gpr_5 = (50286u << 16u);
    aot_gpr_5 = (aot_gpr_5 | 16384u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FE17Cu);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806DC0, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FE17Cu) goto L_088FE17C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FE17C:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FE188u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-3));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088073CC, 0u, 483u, 0x088073CCu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_16, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FE188u) goto L_088FE188;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FE188:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-21768));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FE198u);
    aot_gpr_6 = (0u | 8u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FE198u) goto L_088FE198;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FE198:
    aot_gpr_5 = (50286u << 16u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FE1A8u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806DC0, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FE1A8u) goto L_088FE1A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FE1A8:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FE1B4u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-3));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088073CC, 0u, 483u, 0x088073CCu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_16, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FE1B4u) goto L_088FE1B4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FE1B4:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-21756));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FE1C4u);
    aot_gpr_6 = (0u | 7u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FE1C4u) goto L_088FE1C4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FE1C4:
    aot_gpr_5 = (50285u << 16u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FE1D4u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806DC0, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FE1D4u) goto L_088FE1D4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FE1D4:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FE1E0u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-3));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088073CC, 0u, 483u, 0x088073CCu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_16, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FE1E0u) goto L_088FE1E0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FE1E0:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-21748));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FE1F0u);
    aot_gpr_6 = (0u | 5u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FE1F0u) goto L_088FE1F0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FE1F0:
    aot_gpr_5 = (17255u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FE204u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806DC0, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FE204u) goto L_088FE204;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FE204:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FE210u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-3));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088073CC, 0u, 483u, 0x088073CCu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_16, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FE210u) goto L_088FE210;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FE210:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-21740));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FE220u);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FE220u) goto L_088FE220;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FE220:
    aot_gpr_5 = (17236u << 16u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FE230u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806DC0, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FE230u) goto L_088FE230;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FE230:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FE23Cu);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-3));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088073CC, 0u, 483u, 0x088073CCu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_16, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FE23Cu) goto L_088FE23C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FE23C:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-21732));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FE24Cu);
    aot_gpr_6 = (0u | 5u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FE24Cu) goto L_088FE24C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FE24C:
    aot_gpr_5 = (17253u << 16u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FE25Cu);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806DC0, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FE25Cu) goto L_088FE25C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FE25C:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FE268u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-3));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088073CC, 0u, 483u, 0x088073CCu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_16, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FE268u) goto L_088FE268;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FE268:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-21724));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FE278u);
    aot_gpr_6 = (0u | 6u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FE278u) goto L_088FE278;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FE278:
    aot_gpr_5 = (17256u << 16u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FE288u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806DC0, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FE288u) goto L_088FE288;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FE288:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FE294u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-3));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088073CC, 0u, 483u, 0x088073CCu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_16, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FE294u) goto L_088FE294;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FE294:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-21716));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FE2A4u);
    aot_gpr_6 = (0u | 8u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FE2A4u) goto L_088FE2A4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FE2A4:
    aot_gpr_5 = (17229u << 16u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FE2B4u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806DC0, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FE2B4u) goto L_088FE2B4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FE2B4:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FE2C0u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-3));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088073CC, 0u, 483u, 0x088073CCu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_16, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FE2C0u) goto L_088FE2C0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FE2C0:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-21704));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FE2D0u);
    aot_gpr_6 = (0u | 6u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FE2D0u) goto L_088FE2D0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FE2D0:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FE2DCu);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806DC0, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FE2DCu) goto L_088FE2DC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FE2DC:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FE2E8u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-3));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088073CC, 0u, 483u, 0x088073CCu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_16, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FE2E8u) goto L_088FE2E8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FE2E8:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-21696));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FE2F8u);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FE2F8u) goto L_088FE2F8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FE2F8:
    aot_gpr_5 = (17252u << 16u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FE308u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806DC0, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FE308u) goto L_088FE308;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FE308:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FE314u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-3));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088073CC, 0u, 483u, 0x088073CCu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_16, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FE314u) goto L_088FE314;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FE314:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-21688));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FE324u);
    aot_gpr_6 = (0u | 6u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FE324u) goto L_088FE324;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FE324:
    aot_gpr_5 = (17257u << 16u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FE334u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806DC0, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FE334u) goto L_088FE334;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FE334:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FE340u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-3));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088073CC, 0u, 483u, 0x088073CCu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_16, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FE340u) goto L_088FE340;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FE340:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-21680));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FE350u);
    aot_gpr_6 = (0u | 9u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FE350u) goto L_088FE350;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FE350:
    aot_gpr_5 = (17281u << 16u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FE360u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806DC0, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FE360u) goto L_088FE360;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FE360:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FE36Cu);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-3));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088073CC, 0u, 483u, 0x088073CCu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_16, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FE36Cu) goto L_088FE36C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FE36C:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-21668));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FE37Cu);
    aot_gpr_6 = (0u | 6u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FE37Cu) goto L_088FE37C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FE37C:
    aot_gpr_5 = (17289u << 16u);
    aot_gpr_5 = (aot_gpr_5 | 32768u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FE390u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806DC0, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FE390u) goto L_088FE390;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FE390:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FE39Cu);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-3));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088073CC, 0u, 483u, 0x088073CCu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_16, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FE39Cu) goto L_088FE39C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FE39C:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-21660));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FE3ACu);
    aot_gpr_6 = (0u | 8u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FE3ACu) goto L_088FE3AC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FE3AC:
    aot_gpr_5 = (17282u << 16u);
    aot_gpr_5 = (aot_gpr_5 | 32768u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FE3C0u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806DC0, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FE3C0u) goto L_088FE3C0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FE3C0:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FE3CCu);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-3));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088073CC, 0u, 483u, 0x088073CCu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_16, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FE3CCu) goto L_088FE3CC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FE3CC:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-21648));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FE3DCu);
    aot_gpr_6 = (0u | 10u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FE3DCu) goto L_088FE3DC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FE3DC:
    aot_gpr_5 = (17217u << 16u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FE3ECu);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806DC0, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FE3ECu) goto L_088FE3EC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FE3EC:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FE3F8u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-3));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088073CC, 0u, 483u, 0x088073CCu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_16, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FE3F8u) goto L_088FE3F8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FE3F8:
    ctx.gpr[18] = (ctx.gpr[28] + static_cast<std::uint32_t>(-21636));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x088FE40Cu);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FE40Cu) goto L_088FE40C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FE40C:
    aot_gpr_5 = (17270u << 16u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FE41Cu);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806DC0, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FE41Cu) goto L_088FE41C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FE41C:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FE428u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-3));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088073CC, 0u, 483u, 0x088073CCu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_16, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FE428u) goto L_088FE428;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FE428:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-21628));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FE438u);
    aot_gpr_6 = (0u | 6u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FE438u) goto L_088FE438;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FE438:
    aot_gpr_5 = (17221u << 16u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FE448u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806DC0, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FE448u) goto L_088FE448;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FE448:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FE454u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-3));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088073CC, 0u, 483u, 0x088073CCu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_16, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FE454u) goto L_088FE454;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FE454:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-21620));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FE464u);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FE464u) goto L_088FE464;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FE464:
    aot_gpr_5 = (17210u << 16u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FE474u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806DC0, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FE474u) goto L_088FE474;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FE474:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FE480u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-3));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088073CC, 0u, 483u, 0x088073CCu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_16, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FE480u) goto L_088FE480;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FE480:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-21612));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FE490u);
    aot_gpr_6 = (0u | 9u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FE490u) goto L_088FE490;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FE490:
    aot_gpr_5 = (17251u << 16u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FE4A0u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806DC0, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FE4A0u) goto L_088FE4A0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FE4A0:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FE4ACu);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-3));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088073CC, 0u, 483u, 0x088073CCu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_16, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FE4ACu) goto L_088FE4AC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FE4AC:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-21600));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FE4BCu);
    aot_gpr_6 = (0u | 6u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FE4BCu) goto L_088FE4BC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FE4BC:
    aot_gpr_5 = (17231u << 16u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FE4CCu);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806DC0, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FE4CCu) goto L_088FE4CC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FE4CC:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FE4D8u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-3));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088073CC, 0u, 483u, 0x088073CCu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_16, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FE4D8u) goto L_088FE4D8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FE4D8:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-21592));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FE4E8u);
    aot_gpr_6 = (0u | 8u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FE4E8u) goto L_088FE4E8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FE4E8:
    aot_gpr_5 = (17258u << 16u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FE4F8u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806DC0, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FE4F8u) goto L_088FE4F8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FE4F8:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FE504u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-3));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088073CC, 0u, 483u, 0x088073CCu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_16, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FE504u) goto L_088FE504;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FE504:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-21580));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FE514u);
    aot_gpr_6 = (0u | 9u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FE514u) goto L_088FE514;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FE514:
    aot_gpr_5 = (17218u << 16u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FE524u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806DC0, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FE524u) goto L_088FE524;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FE524:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FE530u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-3));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088073CC, 0u, 483u, 0x088073CCu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_16, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FE530u) goto L_088FE530;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FE530:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-21568));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FE540u);
    aot_gpr_6 = (0u | 6u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FE540u) goto L_088FE540;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FE540:
    aot_gpr_5 = (17280u << 16u);
    aot_gpr_5 = (aot_gpr_5 | 32768u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FE554u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806DC0, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FE554u) goto L_088FE554;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FE554:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FE560u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-3));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088073CC, 0u, 483u, 0x088073CCu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_16, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FE560u) goto L_088FE560;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FE560:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-21560));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FE570u);
    aot_gpr_6 = (0u | 8u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FE570u) goto L_088FE570;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FE570:
    aot_gpr_5 = (17291u << 16u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FE580u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806DC0, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FE580u) goto L_088FE580;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FE580:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FE58Cu);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-3));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088073CC, 0u, 483u, 0x088073CCu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_16, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FE58Cu) goto L_088FE58C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FE58C:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-21548));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FE59Cu);
    aot_gpr_6 = (0u | 6u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FE59Cu) goto L_088FE59C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FE59C:
    aot_gpr_5 = (17266u << 16u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FE5ACu);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806DC0, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FE5ACu) goto L_088FE5AC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FE5AC:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FE5B8u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-3));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088073CC, 0u, 483u, 0x088073CCu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_16, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FE5B8u) goto L_088FE5B8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FE5B8:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-21540));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FE5C8u);
    aot_gpr_6 = (0u | 5u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FE5C8u) goto L_088FE5C8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FE5C8:
    aot_gpr_5 = (17208u << 16u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FE5D8u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806DC0, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FE5D8u) goto L_088FE5D8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FE5D8:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FE5E4u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-3));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088073CC, 0u, 483u, 0x088073CCu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_16, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FE5E4u) goto L_088FE5E4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FE5E4:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-21532));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FE5F4u);
    aot_gpr_6 = (0u | 6u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FE5F4u) goto L_088FE5F4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FE5F4:
    aot_gpr_5 = (17284u << 16u);
    aot_gpr_5 = (aot_gpr_5 | 32768u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FE608u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806DC0, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FE608u) goto L_088FE608;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FE608:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FE614u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-3));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088073CC, 0u, 483u, 0x088073CCu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_16, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FE614u) goto L_088FE614;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FE614:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-21524));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FE624u);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FE624u) goto L_088FE624;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FE624:
    aot_gpr_5 = (17281u << 16u);
    aot_gpr_5 = (aot_gpr_5 | 32768u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FE638u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806DC0, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FE638u) goto L_088FE638;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FE638:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FE644u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-3));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088073CC, 0u, 483u, 0x088073CCu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_16, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FE644u) goto L_088FE644;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FE644:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-21516));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FE654u);
    aot_gpr_6 = (0u | 5u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FE654u) goto L_088FE654;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FE654:
    aot_gpr_5 = (17271u << 16u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FE664u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806DC0, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FE664u) goto L_088FE664;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FE664:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FE670u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-3));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088073CC, 0u, 483u, 0x088073CCu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_16, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FE670u) goto L_088FE670;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FE670:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-21508));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FE680u);
    aot_gpr_6 = (0u | 7u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FE680u) goto L_088FE680;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FE680:
    aot_gpr_5 = (17215u << 16u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FE690u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806DC0, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FE690u) goto L_088FE690;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FE690:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FE69Cu);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-3));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088073CC, 0u, 483u, 0x088073CCu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_16, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FE69Cu) goto L_088FE69C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FE69C:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-21500));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FE6ACu);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FE6ACu) goto L_088FE6AC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FE6AC:
    aot_gpr_5 = (17254u << 16u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FE6BCu);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806DC0, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FE6BCu) goto L_088FE6BC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FE6BC:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FE6C8u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-3));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088073CC, 0u, 483u, 0x088073CCu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_16, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FE6C8u) goto L_088FE6C8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FE6C8:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-21492));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FE6D8u);
    aot_gpr_6 = (0u | 10u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FE6D8u) goto L_088FE6D8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FE6D8:
    aot_gpr_5 = (17222u << 16u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FE6E8u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806DC0, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FE6E8u) goto L_088FE6E8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FE6E8:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FE6F4u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-3));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088073CC, 0u, 483u, 0x088073CCu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_16, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FE6F4u) goto L_088FE6F4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FE6F4:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-21480));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FE704u);
    aot_gpr_6 = (0u | 10u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FE704u) goto L_088FE704;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FE704:
    aot_gpr_5 = (17283u << 16u);
    aot_gpr_5 = (aot_gpr_5 | 32768u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FE718u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806DC0, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FE718u) goto L_088FE718;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FE718:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FE724u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-3));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088073CC, 0u, 483u, 0x088073CCu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_16, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FE724u) goto L_088FE724;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FE724:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-21468));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FE734u);
    aot_gpr_6 = (0u | 7u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FE734u) goto L_088FE734;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FE734:
    aot_gpr_5 = (17239u << 16u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FE744u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806DC0, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FE744u) goto L_088FE744;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FE744:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FE750u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-3));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088073CC, 0u, 483u, 0x088073CCu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_16, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FE750u) goto L_088FE750;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FE750:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-21460));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FE760u);
    aot_gpr_6 = (0u | 8u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FE760u) goto L_088FE760;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FE760:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FE76Cu);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_22));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806DC0, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FE76Cu) goto L_088FE76C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FE76C:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FE778u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-3));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088073CC, 0u, 483u, 0x088073CCu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_16, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FE778u) goto L_088FE778;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FE778:
    ctx.gpr[19] = (ctx.gpr[28] + static_cast<std::uint32_t>(-21448));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FE788u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 430u, 0x08806E68u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FE788u) goto L_088FE788;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FE788:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FE794u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-2));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 315u, 0x0880673Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FE794u) goto L_088FE794;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FE794:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FE7A0u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-10001));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088073CC, 0u, 483u, 0x088073CCu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_16, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FE7A0u) goto L_088FE7A0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FE7A0:
    aot_gpr_31 = (0x088FE7A8u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 462u, 0x08807220u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FE7A8u) goto L_088FE7A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FE7A8:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-21444));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FE7B8u);
    aot_gpr_6 = (0u | 6u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FE7B8u) goto L_088FE7B8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FE7B8:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(104)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(162)));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_31 = (0x088FE7D0u);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806DC0, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FE7D0u) goto L_088FE7D0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FE7D0:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FE7DCu);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-3));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088073CC, 0u, 483u, 0x088073CCu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_16, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FE7DCu) goto L_088FE7DC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FE7DC:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-21436));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FE7ECu);
    aot_gpr_6 = (0u | 6u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FE7ECu) goto L_088FE7EC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FE7EC:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(104)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(158)));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_31 = (0x088FE804u);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806DC0, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FE804u) goto L_088FE804;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FE804:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FE810u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-3));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088073CC, 0u, 483u, 0x088073CCu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_16, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FE810u) goto L_088FE810;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FE810:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-21428));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FE820u);
    aot_gpr_6 = (0u | 10u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FE820u) goto L_088FE820;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FE820:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(104)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(168)));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_31 = (0x088FE838u);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806DC0, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FE838u) goto L_088FE838;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FE838:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FE844u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-3));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088073CC, 0u, 483u, 0x088073CCu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_16, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FE844u) goto L_088FE844;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FE844:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-21416));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FE854u);
    aot_gpr_6 = (0u | 10u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FE854u) goto L_088FE854;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FE854:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(104)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(146)));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_31 = (0x088FE86Cu);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806DC0, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FE86Cu) goto L_088FE86C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FE86C:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FE878u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-3));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088073CC, 0u, 483u, 0x088073CCu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_16, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FE878u) goto L_088FE878;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FE878:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-21404));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FE888u);
    aot_gpr_6 = (0u | 11u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FE888u) goto L_088FE888;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FE888:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(104)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(148)));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_31 = (0x088FE8A0u);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806DC0, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FE8A0u) goto L_088FE8A0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FE8A0:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FE8ACu);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-3));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088073CC, 0u, 483u, 0x088073CCu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_16, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FE8ACu) goto L_088FE8AC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FE8AC:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-21392));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FE8BCu);
    aot_gpr_6 = (0u | 9u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FE8BCu) goto L_088FE8BC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FE8BC:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(104)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(150)));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_31 = (0x088FE8D4u);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806DC0, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FE8D4u) goto L_088FE8D4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FE8D4:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FE8E0u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-3));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088073CC, 0u, 483u, 0x088073CCu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_16, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FE8E0u) goto L_088FE8E0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FE8E0:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-21380));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FE8F0u);
    aot_gpr_6 = (0u | 8u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FE8F0u) goto L_088FE8F0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FE8F0:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(104)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(152)));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_31 = (0x088FE908u);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806DC0, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FE908u) goto L_088FE908;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FE908:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FE914u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-3));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088073CC, 0u, 483u, 0x088073CCu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_16, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FE914u) goto L_088FE914;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FE914:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-21368));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FE924u);
    aot_gpr_6 = (0u | 7u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FE924u) goto L_088FE924;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FE924:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(104)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(154)));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_31 = (0x088FE93Cu);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806DC0, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FE93Cu) goto L_088FE93C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FE93C:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FE948u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-3));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088073CC, 0u, 483u, 0x088073CCu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_16, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FE948u) goto L_088FE948;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FE948:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-21360));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FE958u);
    aot_gpr_6 = (0u | 8u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FE958u) goto L_088FE958;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FE958:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(104)));
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(132)));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FE970u);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806DC0, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FE970u) goto L_088FE970;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FE970:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FE97Cu);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-3));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088073CC, 0u, 483u, 0x088073CCu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_16, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FE97Cu) goto L_088FE97C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FE97C:
    ctx.gpr[20] = (ctx.gpr[28] + static_cast<std::uint32_t>(-21348));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x088FE990u);
    aot_gpr_6 = (0u | 9u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FE990u) goto L_088FE990;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FE990:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(104)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(132)));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_31 = (0x088FE9A8u);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806DC0, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FE9A8u) goto L_088FE9A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FE9A8:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FE9B4u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-3));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088073CC, 0u, 483u, 0x088073CCu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_16, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FE9B4u) goto L_088FE9B4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FE9B4:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-21336));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FE9C4u);
    aot_gpr_6 = (0u | 3u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FE9C4u) goto L_088FE9C4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FE9C4:
    aot_gpr_5 = (17320u << 16u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FE9D4u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806DC0, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FE9D4u) goto L_088FE9D4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FE9D4:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FE9E0u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-3));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088073CC, 0u, 483u, 0x088073CCu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_16, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FE9E0u) goto L_088FE9E0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FE9E0:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-21332));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FE9F0u);
    aot_gpr_6 = (0u | 8u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FE9F0u) goto L_088FE9F0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FE9F0:
    aot_gpr_5 = (17322u << 16u);
    aot_gpr_5 = (aot_gpr_5 | 32768u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FEA04u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806DC0, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FEA04u) goto L_088FEA04;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FEA04:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FEA10u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-3));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088073CC, 0u, 483u, 0x088073CCu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_16, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FEA10u) goto L_088FEA10;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FEA10:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-21320));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FEA20u);
    aot_gpr_6 = (0u | 7u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FEA20u) goto L_088FEA20;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FEA20:
    aot_gpr_5 = (17323u << 16u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FEA30u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806DC0, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FEA30u) goto L_088FEA30;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FEA30:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FEA3Cu);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-3));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088073CC, 0u, 483u, 0x088073CCu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_16, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FEA3Cu) goto L_088FEA3C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FEA3C:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-21312));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FEA4Cu);
    aot_gpr_6 = (0u | 11u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FEA4Cu) goto L_088FEA4C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FEA4C:
    aot_gpr_5 = (17333u << 16u);
    aot_gpr_5 = (aot_gpr_5 | 32768u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FEA60u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806DC0, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FEA60u) goto L_088FEA60;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FEA60:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FEA6Cu);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-3));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088073CC, 0u, 483u, 0x088073CCu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_16, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FEA6Cu) goto L_088FEA6C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FEA6C:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-21300));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FEA7Cu);
    aot_gpr_6 = (0u | 7u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FEA7Cu) goto L_088FEA7C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FEA7C:
    aot_gpr_5 = (17324u << 16u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FEA8Cu);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806DC0, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FEA8Cu) goto L_088FEA8C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FEA8C:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FEA98u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-3));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088073CC, 0u, 483u, 0x088073CCu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_16, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FEA98u) goto L_088FEA98;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FEA98:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-21292));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FEAA8u);
    aot_gpr_6 = (0u | 7u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FEAA8u) goto L_088FEAA8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FEAA8:
    aot_gpr_5 = (17325u << 16u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FEAB8u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806DC0, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FEAB8u) goto L_088FEAB8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FEAB8:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FEAC4u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-3));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088073CC, 0u, 483u, 0x088073CCu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_16, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FEAC4u) goto L_088FEAC4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FEAC4:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-21284));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FEAD4u);
    aot_gpr_6 = (0u | 7u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FEAD4u) goto L_088FEAD4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FEAD4:
    aot_gpr_5 = (17326u << 16u);
    aot_gpr_5 = (aot_gpr_5 | 32768u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FEAE8u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806DC0, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FEAE8u) goto L_088FEAE8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FEAE8:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FEAF4u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-3));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088073CC, 0u, 483u, 0x088073CCu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_16, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FEAF4u) goto L_088FEAF4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FEAF4:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-21276));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FEB04u);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FEB04u) goto L_088FEB04;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FEB04:
    aot_gpr_5 = (17328u << 16u);
    aot_gpr_5 = (aot_gpr_5 | 32768u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FEB18u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806DC0, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FEB18u) goto L_088FEB18;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FEB18:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FEB24u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-3));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088073CC, 0u, 483u, 0x088073CCu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_16, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FEB24u) goto L_088FEB24;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FEB24:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-21268));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FEB34u);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FEB34u) goto L_088FEB34;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FEB34:
    aot_gpr_5 = (17326u << 16u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FEB44u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806DC0, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FEB44u) goto L_088FEB44;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FEB44:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FEB50u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-3));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088073CC, 0u, 483u, 0x088073CCu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_16, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FEB50u) goto L_088FEB50;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FEB50:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088FEB60u);
    aot_gpr_6 = (0u | 15u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FEB60u) goto L_088FEB60;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FEB60:
    aot_gpr_5 = (17331u << 16u);
    aot_gpr_5 = (aot_gpr_5 | 32768u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FEB74u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806DC0, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FEB74u) goto L_088FEB74;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FEB74:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FEB80u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-3));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088073CC, 0u, 483u, 0x088073CCu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_16, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FEB80u) goto L_088FEB80;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FEB80:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-21260));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FEB90u);
    aot_gpr_6 = (0u | 6u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FEB90u) goto L_088FEB90;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FEB90:
    aot_gpr_5 = (17330u << 16u);
    aot_gpr_5 = (aot_gpr_5 | 32768u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FEBA4u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806DC0, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FEBA4u) goto L_088FEBA4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FEBA4:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FEBB0u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-3));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088073CC, 0u, 483u, 0x088073CCu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_16, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FEBB0u) goto L_088FEBB0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FEBB0:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-21252));
    aot_gpr_31 = (0x088FEBBCu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 430u, 0x08806E68u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FEBBCu) goto L_088FEBBC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FEBBC:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FEBC8u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-2));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 315u, 0x0880673Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FEBC8u) goto L_088FEBC8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FEBC8:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FEBD4u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-10001));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088073CC, 0u, 483u, 0x088073CCu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_16, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FEBD4u) goto L_088FEBD4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FEBD4:
    aot_gpr_31 = (0x088FEBDCu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 462u, 0x08807220u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FEBDCu) goto L_088FEBDC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FEBDC:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-21244));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FEBECu);
    aot_gpr_6 = (0u | 7u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FEBECu) goto L_088FEBEC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FEBEC:
    aot_gpr_5 = (16704u << 16u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FEBFCu);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806DC0, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FEBFCu) goto L_088FEBFC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FEBFC:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FEC08u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-3));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088073CC, 0u, 483u, 0x088073CCu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_16, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FEC08u) goto L_088FEC08;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FEC08:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-21236));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FEC18u);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FEC18u) goto L_088FEC18;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FEC18:
    aot_gpr_5 = (16720u << 16u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FEC28u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806DC0, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FEC28u) goto L_088FEC28;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FEC28:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FEC34u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-3));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088073CC, 0u, 483u, 0x088073CCu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_16, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FEC34u) goto L_088FEC34;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FEC34:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-21228));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FEC44u);
    aot_gpr_6 = (0u | 10u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FEC44u) goto L_088FEC44;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FEC44:
    aot_gpr_5 = (16736u << 16u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FEC54u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806DC0, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FEC54u) goto L_088FEC54;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FEC54:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FEC60u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-3));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088073CC, 0u, 483u, 0x088073CCu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_16, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FEC60u) goto L_088FEC60;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FEC60:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-21216));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FEC70u);
    aot_gpr_6 = (0u | 6u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FEC70u) goto L_088FEC70;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FEC70:
    aot_gpr_5 = (16752u << 16u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FEC80u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806DC0, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FEC80u) goto L_088FEC80;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FEC80:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FEC8Cu);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-3));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088073CC, 0u, 483u, 0x088073CCu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_16, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FEC8Cu) goto L_088FEC8C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FEC8C:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-21208));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FEC9Cu);
    aot_gpr_6 = (0u | 9u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FEC9Cu) goto L_088FEC9C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FEC9C:
    aot_gpr_5 = (16768u << 16u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FECACu);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806DC0, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FECACu) goto L_088FECAC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FECAC:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FECB8u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-3));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088073CC, 0u, 483u, 0x088073CCu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_16, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FECB8u) goto L_088FECB8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FECB8:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x088FECC8u);
    aot_gpr_6 = (0u | 3u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FECC8u) goto L_088FECC8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FECC8:
    aot_gpr_5 = (16776u << 16u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FECD8u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806DC0, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FECD8u) goto L_088FECD8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FECD8:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FECE4u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-3));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088073CC, 0u, 483u, 0x088073CCu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_16, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FECE4u) goto L_088FECE4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FECE4:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x088FECF4u);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FECF4u) goto L_088FECF4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FECF4:
    aot_gpr_5 = (16784u << 16u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FED04u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806DC0, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FED04u) goto L_088FED04;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FED04:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FED10u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-3));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088073CC, 0u, 483u, 0x088073CCu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_16, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FED10u) goto L_088FED10;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FED10:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-21196));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FED20u);
    aot_gpr_6 = (0u | 9u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FED20u) goto L_088FED20;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FED20:
    aot_gpr_5 = (16792u << 16u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FED30u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806DC0, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FED30u) goto L_088FED30;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FED30:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FED3Cu);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-3));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088073CC, 0u, 483u, 0x088073CCu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_16, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FED3Cu) goto L_088FED3C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FED3C:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-21184));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FED4Cu);
    aot_gpr_6 = (0u | 12u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FED4Cu) goto L_088FED4C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FED4C:
    aot_gpr_5 = (16800u << 16u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FED5Cu);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806DC0, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FED5Cu) goto L_088FED5C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FED5C:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FED68u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-3));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088073CC, 0u, 483u, 0x088073CCu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_16, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FED68u) goto L_088FED68;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FED68:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x088FED78u);
    aot_gpr_6 = (0u | 9u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FED78u) goto L_088FED78;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FED78:
    aot_gpr_5 = (16972u << 16u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FED88u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806DC0, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FED88u) goto L_088FED88;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FED88:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FED94u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-3));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088073CC, 0u, 483u, 0x088073CCu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_16, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FED94u) goto L_088FED94;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FED94:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-21168));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FEDA4u);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FEDA4u) goto L_088FEDA4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FEDA4:
    aot_gpr_5 = (16976u << 16u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FEDB4u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806DC0, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FEDB4u) goto L_088FEDB4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FEDB4:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FEDC0u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-3));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088073CC, 0u, 483u, 0x088073CCu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_16, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FEDC0u) goto L_088FEDC0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FEDC0:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-21160));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FEDD0u);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FEDD0u) goto L_088FEDD0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FEDD0:
    aot_gpr_5 = (16980u << 16u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FEDE0u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806DC0, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FEDE0u) goto L_088FEDE0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FEDE0:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FEDECu);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-3));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088073CC, 0u, 483u, 0x088073CCu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_16, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FEDECu) goto L_088FEDEC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FEDEC:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-21152));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FEDFCu);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FEDFCu) goto L_088FEDFC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FEDFC:
    aot_gpr_5 = (16984u << 16u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FEE0Cu);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806DC0, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FEE0Cu) goto L_088FEE0C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FEE0C:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FEE18u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-3));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088073CC, 0u, 483u, 0x088073CCu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_16, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FEE18u) goto L_088FEE18;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FEE18:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-21144));
    aot_gpr_31 = (0x088FEE24u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 430u, 0x08806E68u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FEE24u) goto L_088FEE24;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FEE24:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FEE30u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-2));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 315u, 0x0880673Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FEE30u) goto L_088FEE30;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FEE30:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FEE3Cu);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-10001));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088073CC, 0u, 483u, 0x088073CCu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_16, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FEE3Cu) goto L_088FEE3C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FEE3C:
    aot_gpr_31 = (0x088FEE44u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 462u, 0x08807220u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FEE44u) goto L_088FEE44;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FEE44:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-21132));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FEE54u);
    aot_gpr_6 = (0u | 3u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FEE54u) goto L_088FEE54;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FEE54:
    aot_gpr_5 = (16256u << 16u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FEE64u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806DC0, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FEE64u) goto L_088FEE64;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FEE64:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FEE70u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-3));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088073CC, 0u, 483u, 0x088073CCu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_16, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FEE70u) goto L_088FEE70;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FEE70:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-21128));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FEE80u);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FEE80u) goto L_088FEE80;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FEE80:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FEE8Cu);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806DC0, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FEE8Cu) goto L_088FEE8C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FEE8C:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FEE98u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-3));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088073CC, 0u, 483u, 0x088073CCu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_16, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FEE98u) goto L_088FEE98;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FEE98:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-21120));
    aot_gpr_31 = (0x088FEEA4u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 430u, 0x08806E68u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FEEA4u) goto L_088FEEA4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FEEA4:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FEEB0u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-2));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 315u, 0x0880673Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FEEB0u) goto L_088FEEB0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FEEB0:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088FEEBCu);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-10001));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088073CC, 0u, 483u, 0x088073CCu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_16, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FEEBCu) goto L_088FEEBC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FEEBC:
    { std::uint32_t aot_run_words[9]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      aot_fpr_22 = std::bit_cast<float>(aot_run_words[1]);
      ctx.fpr[24] = std::bit_cast<float>(aot_run_words[2]);
      aot_gpr_16 = aot_run_words[3];
      ctx.gpr[17] = aot_run_words[4];
      ctx.gpr[18] = aot_run_words[5];
      ctx.gpr[19] = aot_run_words[6];
      ctx.gpr[20] = aot_run_words[7];
      aot_gpr_31 = aot_run_words[8];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088FEEE8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-192));
    { const std::uint32_t aot_run_words[11]{std::bit_cast<std::uint32_t>(aot_fpr_20), aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], ctx.gpr[23], ctx.gpr[30], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(148), aot_run_words); }
    aot_fpr_20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_13));
    ctx.gpr[23] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(192)));
    { const std::uint32_t vfpu_address = aot_gpr_6 + static_cast<std::uint32_t>(0);
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
    ctx.gpr[21] = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
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
    aot_gpr_6 = (ctx.vfpu_scalar_bits_ct<28u>());
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_6);
    aot_fpr_12 = aot_fpr_13 / aot_fpr_12;
    aot_gpr_6 = (16256u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_6);
    ctx.gpr[22] = (aot_gpr_5 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(144), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(140), ctx.gpr[7]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(136), ctx.gpr[8]);
    ctx.gpr[30] = (ctx.gpr[11] | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(132), ctx.gpr[9]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(128), ctx.gpr[10]);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 <= aot_fpr_12)) ? 0x00800000u : 0u);
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_13));
        goto L_088FEF80;
    }
    goto L_088FEF80;
L_088FEF80:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    ctx.gpr[20] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_13 = std::bit_cast<float>(ctx.gpr[20]);
    aot_fpr_13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_13)));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    ctx.set_vfpu_scalar_bits_ct<1u>(aot_gpr_4);
    ctx.execute_vfpu_unary_ct<1u, 1u, 1u, 16u>();
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_16 = (0u | 0u);
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_16) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[19] = (aot_gpr_29 + static_cast<std::uint32_t>(64));
      if (branch_taken) {
          goto L_088FF02C;
      }
      goto L_088FEFB8;
    }
L_088FEFB8:
    ctx.gpr[18] = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    ctx.gpr[17] = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    goto L_088FEFC0;
L_088FEFC0:
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_16);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.set_vfpu_scalar_bits_ct<28u>(aot_gpr_4);
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(144)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(140)));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(136)));
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(132)));
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(128)));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    ctx.gpr[10] = (ctx.gpr[30] | 0u);
    aot_gpr_31 = (0x088FF01Cu);
    ctx.gpr[11] = (ctx.gpr[23] | 0u);
    goto L_088FF060;
L_088FF01C:
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_16) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088FEFC0;
      }
      goto L_088FF02C;
    }
L_088FF02C:
    { std::uint32_t aot_run_words[11]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(148), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      aot_gpr_16 = aot_run_words[1];
      ctx.gpr[17] = aot_run_words[2];
      ctx.gpr[18] = aot_run_words[3];
      ctx.gpr[19] = aot_run_words[4];
      ctx.gpr[20] = aot_run_words[5];
      ctx.gpr[21] = aot_run_words[6];
      ctx.gpr[22] = aot_run_words[7];
      ctx.gpr[23] = aot_run_words[8];
      ctx.gpr[30] = aot_run_words[9];
      aot_gpr_31 = aot_run_words[10];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(192));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088FF060:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    ctx.gpr[2] = (ctx.gpr[11] | 0u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    ctx.gpr[11] = (ctx.gpr[10] | 0u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(0u));
    ctx.gpr[10] = (ctx.gpr[9] | 0u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(0u));
    ctx.gpr[9] = (ctx.gpr[8] | 0u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(0u));
    ctx.gpr[8] = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_gpr_31);
    aot_gpr_31 = (0x088FF094u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0063_entry, 63u, 90u, 0x0890043Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FF094u) goto L_088FF094;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FF094:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088FF0A0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_16);
    aot_gpr_16 = (2233u << 16u);
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(-4496));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_gpr_31);
    aot_gpr_31 = (0x088FF0BCu);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(8816));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0175_entry, 175u, 704u, 0x08AC2F70u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FF0BCu) goto L_088FF0BC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FF0BC:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8812), aot_gpr_16);
    aot_fpr_13 = std::bit_cast<float>(0u);
    aot_gpr_6 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (aot_gpr_16 + static_cast<std::uint32_t>(80));
    ctx.gpr[8] = (0u | 0u);
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(16));
    aot_gpr_5 = (ctx.gpr[8] + aot_gpr_5);
    aot_gpr_16 = (ctx.gpr[8] + aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_13));
    ctx.gpr[8] = (15948u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(aot_fpr_13));
    ctx.gpr[8] = (ctx.gpr[8] | 52429u);
    ctx.gpr[7] = (0u | 0u);
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[8]);
    aot_gpr_4 = (0u | 255u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(aot_fpr_13));
    goto L_088FF0FC;
L_088FF0FC:
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < 749 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
      if (branch_taken) {
          goto L_088FF110;
      }
      goto L_088FF108;
    }
L_088FF108:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(72), 0u);
      if (branch_taken) {
          goto L_088FF114;
      }
      goto L_088FF110;
    }
L_088FF110:
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(72), aot_gpr_5);
    goto L_088FF114;
L_088FF114:
    { const std::uint32_t vfpu_address = aot_gpr_29 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_6 + static_cast<std::uint32_t>(0);
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_16 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(32), 0u);
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(36), 0u);
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_mem.aot_direct_store8(aot_gpr_6 + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store16(aot_gpr_6 + static_cast<std::uint32_t>(56), static_cast<std::uint16_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_6 + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store16(aot_gpr_6 + static_cast<std::uint32_t>(58), static_cast<std::uint16_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_6 + static_cast<std::uint32_t>(66), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store16(aot_gpr_6 + static_cast<std::uint32_t>(60), static_cast<std::uint16_t>(0u));
    aot_mem.aot_direct_store16(aot_gpr_6 + static_cast<std::uint32_t>(64), static_cast<std::uint16_t>(0u));
    aot_mem.aot_direct_store16(aot_gpr_6 + static_cast<std::uint32_t>(62), static_cast<std::uint16_t>(0u));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(80));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(80));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < 750 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(80));
      if (branch_taken) {
          goto L_088FF0FC;
      }
      goto L_088FF16C;
    }
L_088FF16C:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088FF17C:
    { const bool branch_taken = aot_gpr_5 == 0u;
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(72)));
      if (branch_taken) {
          goto L_088FF198;
      }
      goto L_088FF184;
    }
L_088FF184:
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(72), ctx.gpr[7]);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8812)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(72), aot_gpr_5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8812), aot_gpr_4);
      if (branch_taken) {
          goto L_088FF1A8;
      }
      goto L_088FF198;
    }
L_088FF198:
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(128), ctx.gpr[7]);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8812)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(72), aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8812), aot_gpr_4);
    goto L_088FF1A8;
L_088FF1A8:
    jump_target = aot_gpr_31;
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088FF1B0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_5 = (aot_gpr_4 << 7u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8816)));
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_16 = (aot_gpr_16 + aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(128)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088FF1F4;
      }
      goto L_088FF1DC;
    }
L_088FF1DC:
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x088FF1E8u);
    aot_gpr_6 = (aot_gpr_16 | 0u);
    goto L_088FF17C;
L_088FF1E8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(128)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088FF1DC;
      }
      goto L_088FF1F4;
    }
L_088FF1F4:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088FF204:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-160));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(0u));
    aot_gpr_5 = (0u | 240u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_fpr_20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (16256u << 16u);
    aot_gpr_6 = (0u | 255u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    { const std::uint32_t aot_run_words[3]{aot_gpr_16, ctx.gpr[17], ctx.gpr[18]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(128), aot_run_words); }
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_20 < aot_fpr_12)) ? 0x00800000u : 0u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(aot_gpr_6));
    aot_gpr_16 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    ctx.gpr[17] = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    ctx.gpr[18] = (aot_gpr_4 | 0u);
    { const std::uint32_t aot_run_words[5]{std::bit_cast<std::uint32_t>(aot_fpr_22), std::bit_cast<std::uint32_t>(ctx.fpr[24]), std::bit_cast<std::uint32_t>(ctx.fpr[26]), std::bit_cast<std::uint32_t>(ctx.fpr[28]), std::bit_cast<std::uint32_t>(ctx.fpr[30])};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(108), aot_run_words); }
    { const std::uint32_t aot_run_words[4]{ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(140), aot_run_words); }
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(aot_fpr_13));
      if (branch_taken) {
          goto L_088FF28C;
      }
      goto L_088FF288;
    }
L_088FF288:
    aot_fpr_20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_088FF28C;
L_088FF28C:
    aot_gpr_4 = (48844u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    aot_fpr_22 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (16076u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    aot_gpr_31 = (0x088FF2A8u);
    ctx.fpr[24] = std::bit_cast<float>(aot_gpr_4);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20998, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FF2A8u) goto L_088FF2A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FF2A8:
    aot_fpr_12 = ctx.fpr[24] - aot_fpr_22;
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = aot_fpr_22 + aot_fpr_12;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_31 = (0x088FF2C0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20998, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FF2C0u) goto L_088FF2C0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FF2C0:
    aot_fpr_12 = ctx.fpr[24] - aot_fpr_22;
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = aot_fpr_22 + aot_fpr_12;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (15820u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    ctx.fpr[26] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (16025u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 39322u);
    aot_gpr_31 = (0x088FF2ECu);
    ctx.fpr[24] = std::bit_cast<float>(aot_gpr_4);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20998, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FF2ECu) goto L_088FF2EC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FF2EC:
    aot_fpr_12 = ctx.fpr[24] - ctx.fpr[26];
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = ctx.fpr[26] + aot_fpr_12;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (16384u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.set_vfpu_scalar_bits_ct<1u>(aot_gpr_4);
    { const std::uint32_t vfpu_address = aot_gpr_16 + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = aot_gpr_16 + static_cast<std::uint32_t>(0);
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (16512u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_20; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    ctx.gpr[18] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[19] = (0u | 0u);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (48291u << 16u);
      if (branch_taken) {
          goto L_088FF508;
      }
      goto L_088FF344;
    }
L_088FF344:
    aot_gpr_4 = (aot_gpr_4 | 55050u);
    aot_fpr_22 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (15523u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 55050u);
    ctx.fpr[30] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (48419u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 55050u);
    ctx.fpr[24] = std::bit_cast<float>(0u);
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[20] = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    aot_gpr_4 = (15651u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 55050u);
    ctx.fpr[26] = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[21] = (aot_gpr_29 + static_cast<std::uint32_t>(20));
    aot_gpr_4 = (15759u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 23593u);
    ctx.fpr[28] = std::bit_cast<float>(aot_gpr_4);
    goto L_088FF388;
L_088FF388:
    aot_gpr_31 = (0x088FF390u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20998, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FF390u) goto L_088FF390;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FF390:
    aot_fpr_12 = ctx.fpr[30] - aot_fpr_22;
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_31 = (0x088FF3A0u);
    ctx.fpr[28] = aot_fpr_22 + aot_fpr_12;
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20998, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FF3A0u) goto L_088FF3A0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FF3A0:
    aot_fpr_13 = ctx.fpr[30] - aot_fpr_22;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    { const float fs = aot_fpr_13; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_gpr_31 = (0x088FF3B4u);
    ctx.fpr[30] = aot_fpr_22 + aot_fpr_13;
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20998, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FF3B4u) goto L_088FF3B4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FF3B4:
    ctx.fpr[14] = ctx.fpr[24] - aot_fpr_22;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_gpr_4 = (0u | 42u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(80)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(aot_fpr_22));
    aot_gpr_6 = (ctx.gpr[20] | 0u);
    aot_fpr_13 = aot_fpr_22 + ctx.fpr[14];
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (ctx.gpr[21] | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(aot_fpr_13));
    ctx.gpr[11] = (0u | 0u);
    aot_gpr_31 = (0x088FF400u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0063_entry, 63u, 90u, 0x0890043Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FF400u) goto L_088FF400;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FF400:
    aot_gpr_31 = (0x088FF408u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20998, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FF408u) goto L_088FF408;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FF408:
    aot_fpr_12 = ctx.fpr[26] - aot_fpr_20;
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_31 = (0x088FF418u);
    aot_fpr_22 = aot_fpr_20 + aot_fpr_12;
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20998, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FF418u) goto L_088FF418;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FF418:
    aot_fpr_13 = ctx.fpr[26] - aot_fpr_20;
    { const float fs = aot_fpr_13; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_gpr_31 = (0x088FF428u);
    ctx.fpr[30] = aot_fpr_20 + aot_fpr_13;
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20998, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FF428u) goto L_088FF428;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FF428:
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(84)));
    ctx.fpr[14] = ctx.fpr[28] - ctx.fpr[24];
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(aot_fpr_22));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_fpr_22 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(96)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    aot_gpr_4 = (0u | 42u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_22));
    aot_gpr_6 = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (0u | 0u);
    aot_fpr_13 = ctx.fpr[24] + ctx.fpr[14];
    ctx.gpr[8] = (ctx.gpr[21] | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_gpr_31 = (0x088FF474u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0063_entry, 63u, 90u, 0x0890043Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FF474u) goto L_088FF474;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FF474:
    aot_gpr_31 = (0x088FF47Cu);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20998, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FF47Cu) goto L_088FF47C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FF47C:
    aot_fpr_12 = ctx.fpr[26] - aot_fpr_20;
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_31 = (0x088FF48Cu);
    ctx.fpr[30] = aot_fpr_20 + aot_fpr_12;
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20998, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FF48Cu) goto L_088FF48C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FF48C:
    aot_fpr_13 = ctx.fpr[26] - aot_fpr_20;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    { const float fs = aot_fpr_13; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_gpr_31 = (0x088FF4A0u);
    ctx.fpr[26] = aot_fpr_20 + aot_fpr_13;
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20998, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FF4A0u) goto L_088FF4A0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FF4A0:
    ctx.fpr[14] = ctx.fpr[28] - ctx.fpr[24];
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_gpr_4 = (0u | 42u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_22));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_6 = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (ctx.gpr[21] | 0u);
    aot_fpr_13 = ctx.fpr[24] + ctx.fpr[14];
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_gpr_31 = (0x088FF4E4u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0063_entry, 63u, 90u, 0x0890043Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FF4E4u) goto L_088FF4E4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FF4E4:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088FF4F0u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08A931B8, 163u, 0x08A931B8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FF4F0u) goto L_088FF4F0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FF4F0:
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(88)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    aot_fpr_22 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(92)));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(100)));
      if (branch_taken) {
          goto L_088FF388;
      }
      goto L_088FF508;
    }
L_088FF508:
    { std::uint32_t aot_run_words[13]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(104), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      aot_fpr_22 = std::bit_cast<float>(aot_run_words[1]);
      ctx.fpr[24] = std::bit_cast<float>(aot_run_words[2]);
      ctx.fpr[26] = std::bit_cast<float>(aot_run_words[3]);
      ctx.fpr[28] = std::bit_cast<float>(aot_run_words[4]);
      ctx.fpr[30] = std::bit_cast<float>(aot_run_words[5]);
      aot_gpr_16 = aot_run_words[6];
      ctx.gpr[17] = aot_run_words[7];
      ctx.gpr[18] = aot_run_words[8];
      ctx.gpr[19] = aot_run_words[9];
      ctx.gpr[20] = aot_run_words[10];
      ctx.gpr[21] = aot_run_words[11];
      aot_gpr_31 = aot_run_words[12];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088FF544:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-144));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(116), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_6 | 0u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(0u));
    aot_gpr_6 = (0u | 240u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(aot_gpr_6));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(aot_gpr_6));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(aot_gpr_6));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_gpr_6 = (16256u << 16u);
    ctx.gpr[7] = (0u | 255u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(112), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(120), ctx.gpr[18]);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(27), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[18] = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    aot_gpr_16 = (aot_gpr_4 | 0u);
    { const std::uint32_t aot_run_words[6]{std::bit_cast<std::uint32_t>(aot_fpr_20), std::bit_cast<std::uint32_t>(aot_fpr_22), std::bit_cast<std::uint32_t>(ctx.fpr[24]), std::bit_cast<std::uint32_t>(ctx.fpr[26]), std::bit_cast<std::uint32_t>(ctx.fpr[28]), std::bit_cast<std::uint32_t>(ctx.fpr[30])};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(88), aot_run_words); }
    { const std::uint32_t aot_run_words[5]{ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(124), aot_run_words); }
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
      if (branch_taken) {
          goto L_088FF5D0;
      }
      goto L_088FF5CC;
    }
L_088FF5CC:
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_13));
    goto L_088FF5D0;
L_088FF5D0:
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
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (16512u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    ctx.gpr[19] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[20] = (0u | 0u);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (48291u << 16u);
      if (branch_taken) {
          goto L_088FF7C0;
      }
      goto L_088FF5FC;
    }
L_088FF5FC:
    aot_gpr_4 = (aot_gpr_4 | 55050u);
    aot_fpr_22 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (15523u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 55050u);
    ctx.fpr[30] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (48419u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 55050u);
    ctx.fpr[24] = std::bit_cast<float>(0u);
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[21] = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    aot_gpr_4 = (15651u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 55050u);
    ctx.fpr[26] = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[22] = (aot_gpr_29 + static_cast<std::uint32_t>(24));
    aot_gpr_4 = (15759u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 23593u);
    ctx.fpr[28] = std::bit_cast<float>(aot_gpr_4);
    goto L_088FF640;
L_088FF640:
    aot_gpr_31 = (0x088FF648u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20998, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FF648u) goto L_088FF648;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FF648:
    aot_fpr_12 = ctx.fpr[30] - aot_fpr_22;
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_31 = (0x088FF658u);
    ctx.fpr[28] = aot_fpr_22 + aot_fpr_12;
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20998, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FF658u) goto L_088FF658;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FF658:
    aot_fpr_13 = ctx.fpr[30] - aot_fpr_22;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    { const float fs = aot_fpr_13; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_gpr_31 = (0x088FF66Cu);
    ctx.fpr[30] = aot_fpr_22 + aot_fpr_13;
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20998, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FF66Cu) goto L_088FF66C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FF66C:
    ctx.fpr[14] = ctx.fpr[24] - aot_fpr_22;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(64)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(aot_fpr_22));
    aot_gpr_6 = (ctx.gpr[21] | 0u);
    aot_fpr_13 = aot_fpr_22 + ctx.fpr[14];
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (ctx.gpr[22] | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(aot_fpr_13));
    ctx.gpr[11] = (0u | 0u);
    aot_gpr_31 = (0x088FF6B8u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0063_entry, 63u, 90u, 0x0890043Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FF6B8u) goto L_088FF6B8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FF6B8:
    aot_gpr_31 = (0x088FF6C0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20998, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FF6C0u) goto L_088FF6C0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FF6C0:
    aot_fpr_12 = ctx.fpr[26] - aot_fpr_20;
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_31 = (0x088FF6D0u);
    aot_fpr_22 = aot_fpr_20 + aot_fpr_12;
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20998, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FF6D0u) goto L_088FF6D0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FF6D0:
    aot_fpr_13 = ctx.fpr[26] - aot_fpr_20;
    { const float fs = aot_fpr_13; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_gpr_31 = (0x088FF6E0u);
    ctx.fpr[30] = aot_fpr_20 + aot_fpr_13;
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20998, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FF6E0u) goto L_088FF6E0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FF6E0:
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(68)));
    ctx.fpr[14] = ctx.fpr[28] - ctx.fpr[24];
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(aot_fpr_22));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_fpr_22 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(80)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_22));
    aot_gpr_6 = (ctx.gpr[21] | 0u);
    ctx.gpr[7] = (0u | 0u);
    aot_fpr_13 = ctx.fpr[24] + ctx.fpr[14];
    ctx.gpr[8] = (ctx.gpr[22] | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_gpr_31 = (0x088FF72Cu);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0063_entry, 63u, 90u, 0x0890043Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FF72Cu) goto L_088FF72C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FF72C:
    aot_gpr_31 = (0x088FF734u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20998, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FF734u) goto L_088FF734;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FF734:
    aot_fpr_12 = ctx.fpr[26] - aot_fpr_20;
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_31 = (0x088FF744u);
    ctx.fpr[30] = aot_fpr_20 + aot_fpr_12;
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20998, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FF744u) goto L_088FF744;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FF744:
    aot_fpr_13 = ctx.fpr[26] - aot_fpr_20;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    { const float fs = aot_fpr_13; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_gpr_31 = (0x088FF758u);
    ctx.fpr[26] = aot_fpr_20 + aot_fpr_13;
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20998, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FF758u) goto L_088FF758;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FF758:
    ctx.fpr[14] = ctx.fpr[28] - ctx.fpr[24];
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_22));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_6 = (ctx.gpr[21] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (ctx.gpr[22] | 0u);
    aot_fpr_13 = ctx.fpr[24] + ctx.fpr[14];
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_gpr_31 = (0x088FF79Cu);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0063_entry, 63u, 90u, 0x0890043Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FF79Cu) goto L_088FF79C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FF79C:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x088FF7A8u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08A931B8, 163u, 0x08A931B8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FF7A8u) goto L_088FF7A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FF7A8:
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(72)));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    aot_fpr_22 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(76)));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(84)));
      if (branch_taken) {
          goto L_088FF640;
      }
      goto L_088FF7C0;
    }
L_088FF7C0:
    { std::uint32_t aot_run_words[14]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(88), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      aot_fpr_22 = std::bit_cast<float>(aot_run_words[1]);
      ctx.fpr[24] = std::bit_cast<float>(aot_run_words[2]);
      ctx.fpr[26] = std::bit_cast<float>(aot_run_words[3]);
      ctx.fpr[28] = std::bit_cast<float>(aot_run_words[4]);
      ctx.fpr[30] = std::bit_cast<float>(aot_run_words[5]);
      aot_gpr_16 = aot_run_words[6];
      ctx.gpr[17] = aot_run_words[7];
      ctx.gpr[18] = aot_run_words[8];
      ctx.gpr[19] = aot_run_words[9];
      ctx.gpr[20] = aot_run_words[10];
      ctx.gpr[21] = aot_run_words[11];
      ctx.gpr[22] = aot_run_words[12];
      aot_gpr_31 = aot_run_words[13];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088FF800:
    jump_target = aot_gpr_31;
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088FF808:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-144));
    aot_gpr_4 = (2234u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-9997));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), aot_gpr_4);
    aot_gpr_4 = (2234u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-9957));
    aot_gpr_5 = (2236u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_gpr_4);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-20484));
    aot_gpr_4 = (2234u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-9773));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(36), aot_gpr_4);
    aot_gpr_4 = (2234u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-9893));
    aot_gpr_5 = (2236u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-20464));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(44), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(40), aot_gpr_5);
    aot_gpr_4 = (2234u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-9821));
    aot_gpr_5 = (2234u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-9917));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(92), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(96), aot_gpr_5);
    aot_gpr_4 = (2234u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-9737));
    aot_gpr_5 = (2234u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-9697));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_gpr_4);
    aot_gpr_4 = (2236u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-20416));
    aot_gpr_5 = (2236u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-20384));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_4);
    aot_gpr_4 = (2234u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-9617));
    aot_gpr_5 = (2234u << 16u);
    { const std::uint32_t aot_run_words[9]{aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], ctx.gpr[23], ctx.gpr[30]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(100), aot_run_words); }
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-9561));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_4);
    aot_gpr_16 = (2247u << 16u);
    ctx.gpr[18] = (2247u << 16u);
    ctx.gpr[17] = (2247u << 16u);
    ctx.gpr[22] = (2234u << 16u);
    ctx.gpr[19] = (2236u << 16u);
    ctx.gpr[20] = (2236u << 16u);
    ctx.gpr[30] = (2236u << 16u);
    ctx.gpr[23] = (2236u << 16u);
    ctx.gpr[21] = (2236u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(-12400));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-12320));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-8224));
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(-10032));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-20584));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-20564));
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(-20544));
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(-20524));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-20440));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(136), aot_gpr_31);
    aot_gpr_31 = (0x088FF92Cu);
    goto L_088FF0A0;
L_088FF92C:
    aot_gpr_31 = (0x088FF934u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0079_entry, 79u, 271u, 0x08941C80u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FF934u) goto L_088FF934;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FF934:
    aot_gpr_4 = (15820u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[12] = (0u | 0u);
    aot_gpr_4 = (49024u << 16u);
    ctx.gpr[3] = (aot_gpr_16 | 0u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    goto L_088FF950;
L_088FF950:
    aot_mem.aot_direct_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[12] = (ctx.gpr[12] + static_cast<std::uint32_t>(1));
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[12]) < 20 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[3] = (ctx.gpr[3] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088FF950;
      }
      goto L_088FF968;
    }
L_088FF968:
    aot_gpr_4 = (16457u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 4059u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[11] = (0u | 0u);
    aot_gpr_4 = (16052u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[3] = (ctx.gpr[18] | 0u);
    aot_gpr_4 = (17204u << 16u);
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    ctx.fpr[14] = std::bit_cast<float>(aot_gpr_4);
    goto L_088FF990;
L_088FF990:
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[11]);
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    { const float fs = ctx.fpr[15]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    { const float fs = ctx.fpr[15]; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[15] = ctx.fpr[15] / ctx.fpr[14];
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_gpr_4);
    { const float vfpu_constant = std::bit_cast<float>(0x3F22F983u);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    ctx.execute_vfpu_vec3_ct<64u, 0u, 32u, 1u, 2u>();
    ctx.execute_vfpu_unary_ct<1u, 64u, 1u, 18u>();
    aot_gpr_4 = (ctx.vfpu_scalar_bits_ct<1u>());
    ctx.fpr[16] = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_gpr_4);
    { const float vfpu_constant = std::bit_cast<float>(0x3F22F983u);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    ctx.execute_vfpu_vec3_ct<64u, 0u, 32u, 1u, 2u>();
    ctx.execute_vfpu_unary_ct<1u, 64u, 1u, 19u>();
    aot_gpr_4 = (ctx.vfpu_scalar_bits_ct<1u>());
    ctx.fpr[16] = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(1));
    ctx.gpr[3] = (ctx.gpr[3] + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[11]) < 1024 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088FF990;
      }
      goto L_088FF9F8;
    }
L_088FF9F8:
    ctx.gpr[17] = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x088FFA04u);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-21084));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0170_entry, 170u, 584u, 0x08AAECA4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FFA04u) goto L_088FFA04;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FFA04:
    aot_gpr_31 = (0x088FFA0Cu);
    aot_gpr_16 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0170_entry, 170u, 640u, 0x08AAEFC8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FFA0Cu) goto L_088FFA0C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FFA0C:
    aot_gpr_31 = (0x088FFA14u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0170_entry, 170u, 632u, 0x08AAEF5Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FFA14u) goto L_088FFA14;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FFA14:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[18] = (ctx.gpr[18] + ctx.gpr[22]);
    aot_gpr_16 = (ctx.gpr[20] | 0u);
    goto L_088FFA24;
L_088FFA24:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x088FFA30u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0152_entry, 152u, 398u, 0x08A65C4Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FFA30u) goto L_088FFA30;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FFA30:
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(0), aot_gpr_4);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(7));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[19]) < 5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088FFA24;
      }
      goto L_088FFA54;
    }
L_088FFA54:
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(28)));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-21072));
    aot_gpr_31 = (0x088FFA64u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0152_entry, 152u, 398u, 0x08A65C4Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FFA64u) goto L_088FFA64;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FFA64:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(6124), ctx.gpr[2]);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8756), aot_gpr_4);
    aot_gpr_4 = (0u | 0u);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[18] = (aot_gpr_4 + ctx.gpr[18]);
    ctx.gpr[17] = (ctx.gpr[30] | 0u);
    aot_gpr_16 = (ctx.gpr[23] | 0u);
    goto L_088FFA84;
L_088FFA84:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x088FFA90u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0152_entry, 152u, 398u, 0x08A65C4Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FFA90u) goto L_088FFA90;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FFA90:
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(0), aot_gpr_4);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(8));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[19]) < 5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088FFA84;
      }
      goto L_088FFAB4;
    }
L_088FFAB4:
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(32)));
    aot_gpr_4 = (0u | 0u);
    ctx.gpr[22] = (2236u << 16u);
    ctx.gpr[19] = (0u | 0u);
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (aot_gpr_4 + ctx.gpr[18]);
    ctx.gpr[17] = (ctx.gpr[22] + static_cast<std::uint32_t>(-20504));
    goto L_088FFAD0;
L_088FFAD0:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x088FFADCu);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0152_entry, 152u, 398u, 0x08A65C4Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FFADCu) goto L_088FFADC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FFADC:
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(0), aot_gpr_4);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(8));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[19]) < 5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088FFAD0;
      }
      goto L_088FFB00;
    }
L_088FFB00:
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(36)));
    aot_gpr_4 = (0u | 0u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[17] = (aot_gpr_4 + ctx.gpr[17]);
    aot_gpr_16 = (ctx.gpr[28] | 0u);
    goto L_088FFB14;
L_088FFB14:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088FFB20u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0152_entry, 152u, 398u, 0x08A65C4Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FFB20u) goto L_088FFB20;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FFB20:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(6172), ctx.gpr[2]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(6184), aot_gpr_4);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(12));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[18]) < 3 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088FFB14;
      }
      goto L_088FFB40;
    }
L_088FFB40:
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(44)));
    aot_gpr_4 = (0u | 0u);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(40)));
    ctx.gpr[18] = (aot_gpr_4 + ctx.gpr[18]);
    aot_gpr_16 = (ctx.gpr[21] | 0u);
    goto L_088FFB58;
L_088FFB58:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x088FFB64u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0152_entry, 152u, 398u, 0x08A65C4Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FFB64u) goto L_088FFB64;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FFB64:
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(0), aot_gpr_4);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(12));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[19]) < 6 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088FFB58;
      }
      goto L_088FFB88;
    }
L_088FFB88:
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(92)));
    aot_gpr_4 = (0u | 0u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[17] = (aot_gpr_4 + ctx.gpr[17]);
    aot_gpr_16 = (ctx.gpr[28] | 0u);
    goto L_088FFB9C;
L_088FFB9C:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088FFBA8u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0152_entry, 152u, 398u, 0x08A65C4Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FFBA8u) goto L_088FFBA8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FFBA8:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(6128), ctx.gpr[2]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(6144), aot_gpr_4);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(12));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[18]) < 4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088FFB9C;
      }
      goto L_088FFBC8;
    }
L_088FFBC8:
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(96)));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-21060));
    aot_gpr_31 = (0x088FFBD8u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0152_entry, 152u, 398u, 0x08A65C4Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FFBD8u) goto L_088FFBD8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FFBD8:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8764), ctx.gpr[2]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (0u | 0u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(6220), aot_gpr_4);
    aot_gpr_4 = (0u | 0u);
    ctx.gpr[17] = (aot_gpr_4 + ctx.gpr[17]);
    aot_gpr_16 = (ctx.gpr[28] | 0u);
    goto L_088FFBF4;
L_088FFBF4:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088FFC00u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0152_entry, 152u, 398u, 0x08A65C4Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FFC00u) goto L_088FFC00;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FFC00:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(6232), ctx.gpr[2]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(6240), aot_gpr_4);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(12));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[18]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088FFBF4;
      }
      goto L_088FFC20;
    }
L_088FFC20:
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    aot_gpr_4 = (0u | 0u);
    aot_gpr_16 = (0u | 0u);
    ctx.gpr[17] = (aot_gpr_4 + ctx.gpr[17]);
    ctx.gpr[18] = (ctx.gpr[28] | 0u);
    goto L_088FFC34;
L_088FFC34:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088FFC40u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0152_entry, 152u, 398u, 0x08A65C4Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FFC40u) goto L_088FFC40;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FFC40:
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(6344), ctx.gpr[2]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(6360), aot_gpr_4);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(10));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_16) < 4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088FFC34;
      }
      goto L_088FFC60;
    }
L_088FFC60:
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(12)));
    aot_gpr_4 = (0u | 0u);
    ctx.gpr[19] = (0u | 0u);
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    ctx.gpr[18] = (aot_gpr_4 + ctx.gpr[18]);
    goto L_088FFC78;
L_088FFC78:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x088FFC84u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0152_entry, 152u, 398u, 0x08A65C4Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FFC84u) goto L_088FFC84;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FFC84:
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(0), aot_gpr_4);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(10));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[19]) < 8 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088FFC78;
      }
      goto L_088FFCA8;
    }
L_088FFCA8:
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (0u | 0u);
    aot_gpr_16 = (0u | 0u);
    ctx.gpr[17] = (aot_gpr_4 + ctx.gpr[17]);
    ctx.gpr[18] = (ctx.gpr[28] | 0u);
    goto L_088FFCBC;
L_088FFCBC:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088FFCC8u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0152_entry, 152u, 398u, 0x08A65C4Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FFCC8u) goto L_088FFCC8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FFCC8:
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(6312), ctx.gpr[2]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(6328), aot_gpr_4);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(14));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_16) < 4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088FFCBC;
      }
      goto L_088FFCE8;
    }
L_088FFCE8:
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (0u | 0u);
    aot_gpr_16 = (0u | 0u);
    ctx.gpr[17] = (aot_gpr_4 + ctx.gpr[17]);
    ctx.gpr[18] = (ctx.gpr[28] | 0u);
    goto L_088FFCFC;
L_088FFCFC:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088FFD08u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0152_entry, 152u, 398u, 0x08A65C4Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FFD08u) goto L_088FFD08;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FFD08:
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(6196), ctx.gpr[2]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(7840), aot_gpr_4);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(14));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_16) < 4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088FFCFC;
      }
      goto L_088FFD28;
    }
L_088FFD28:
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-21048));
    aot_gpr_31 = (0x088FFD34u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0152_entry, 152u, 398u, 0x08A65C4Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FFD34u) goto L_088FFD34;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FFD34:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(6212), ctx.gpr[2]);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(6212)));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-21036));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x088FFD50u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(6216), aot_gpr_6);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0152_entry, 152u, 398u, 0x08A65C4Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FFD50u) goto L_088FFD50;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FFD50:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(6112), ctx.gpr[2]);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(6112)));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-21028));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x088FFD6Cu);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(6116), aot_gpr_6);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0152_entry, 152u, 398u, 0x08A65C4Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FFD6Cu) goto L_088FFD6C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FFD6C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(6112)));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(6120), ctx.gpr[2]);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-21020));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8752), aot_gpr_5);
    aot_gpr_31 = (0x088FFD88u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0152_entry, 152u, 398u, 0x08A65C4Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FFD88u) goto L_088FFD88;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FFD88:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(6224), ctx.gpr[2]);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(6224)));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-21008));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x088FFDA4u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(6228), aot_gpr_6);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0152_entry, 152u, 398u, 0x08A65C4Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FFDA4u) goto L_088FFDA4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FFDA4:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(6160), ctx.gpr[2]);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(6160)));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-21000));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x088FFDC0u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(6164), aot_gpr_6);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0152_entry, 152u, 398u, 0x08A65C4Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FFDC0u) goto L_088FFDC0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FFDC0:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(6248), ctx.gpr[2]);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(6248)));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-20984));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x088FFDDCu);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(6256), aot_gpr_6);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0152_entry, 152u, 398u, 0x08A65C4Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FFDDCu) goto L_088FFDDC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FFDDC:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(6252), ctx.gpr[2]);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(6252)));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-20976));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x088FFDF8u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(6260), aot_gpr_6);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0152_entry, 152u, 398u, 0x08A65C4Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FFDF8u) goto L_088FFDF8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FFDF8:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(6272), ctx.gpr[2]);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(6272)));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-20968));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x088FFE14u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(6276), aot_gpr_6);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0152_entry, 152u, 398u, 0x08A65C4Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FFE14u) goto L_088FFE14;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FFE14:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(6280), ctx.gpr[2]);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(6280)));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-20956));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x088FFE30u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(6284), aot_gpr_6);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0152_entry, 152u, 398u, 0x08A65C4Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FFE30u) goto L_088FFE30;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FFE30:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(6288), ctx.gpr[2]);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(6288)));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-20944));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x088FFE4Cu);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(6292), aot_gpr_6);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0152_entry, 152u, 398u, 0x08A65C4Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FFE4Cu) goto L_088FFE4C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FFE4C:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(6264), ctx.gpr[2]);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(6264)));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-20936));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x088FFE68u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(6268), aot_gpr_6);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0152_entry, 152u, 398u, 0x08A65C4Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FFE68u) goto L_088FFE68;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FFE68:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(6304), ctx.gpr[2]);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(6304)));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-20920));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x088FFE84u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(6308), aot_gpr_6);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0152_entry, 152u, 398u, 0x08A65C4Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FFE84u) goto L_088FFE84;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FFE84:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(6296), ctx.gpr[2]);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(6296)));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-20904));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x088FFEA0u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(6300), aot_gpr_6);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0152_entry, 152u, 398u, 0x08A65C4Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FFEA0u) goto L_088FFEA0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FFEA0:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(6376), ctx.gpr[2]);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(6376)));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-20892));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x088FFEBCu);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(6380), aot_gpr_6);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0152_entry, 152u, 398u, 0x08A65C4Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FFEBCu) goto L_088FFEBC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FFEBC:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(6168), ctx.gpr[2]);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(6168)));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-20880));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x088FFED8u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8760), aot_gpr_6);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0152_entry, 152u, 398u, 0x08A65C4Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FFED8u) goto L_088FFED8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FFED8:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(6384), ctx.gpr[2]);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(6384)));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-20872));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x088FFEF4u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(6388), aot_gpr_6);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0152_entry, 152u, 398u, 0x08A65C4Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FFEF4u) goto L_088FFEF4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FFEF4:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(6392), ctx.gpr[2]);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(6392)));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-20860));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x088FFF10u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(6396), aot_gpr_6);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0152_entry, 152u, 398u, 0x08A65C4Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FFF10u) goto L_088FFF10;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FFF10:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(6404), ctx.gpr[2]);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(6404)));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-20852));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x088FFF2Cu);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8596), aot_gpr_6);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0152_entry, 152u, 398u, 0x08A65C4Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FFF2Cu) goto L_088FFF2C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FFF2C:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(6408), ctx.gpr[2]);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(6408)));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-20844));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x088FFF48u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(6412), aot_gpr_6);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0152_entry, 152u, 398u, 0x08A65C4Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FFF48u) goto L_088FFF48;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FFF48:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(6424), ctx.gpr[2]);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(6424)));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-20832));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x088FFF64u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8600), aot_gpr_6);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0152_entry, 152u, 398u, 0x08A65C4Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FFF64u) goto L_088FFF64;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FFF64:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(6428), ctx.gpr[2]);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(6428)));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-20820));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x088FFF80u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8604), aot_gpr_6);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0152_entry, 152u, 398u, 0x08A65C4Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FFF80u) goto L_088FFF80;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FFF80:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(6432), ctx.gpr[2]);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(6432)));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-20804));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x088FFF9Cu);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8608), aot_gpr_6);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0152_entry, 152u, 398u, 0x08A65C4Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FFF9Cu) goto L_088FFF9C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FFF9C:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(6416), ctx.gpr[2]);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(6416)));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-20796));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x088FFFB8u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(6420), aot_gpr_6);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0152_entry, 152u, 398u, 0x08A65C4Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088FFFB8u) goto L_088FFFB8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088FFFB8:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(6440), ctx.gpr[2]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(6440)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-20504)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (2236u << 16u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8768), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(-20484)));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(6444), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(6232)));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8776), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(6240)));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(6452), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(6236)));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8780), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(6244)));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(6448), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(6384)));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8784), aot_gpr_4);
    ctx.pc = 0x08900000u; AOT_REGCACHE_SYNC_OUT(); return;
}

#undef AOT_REGCACHE_SYNC_IN
#undef AOT_REGCACHE_SYNC_OUT

void recomp_unit_0062(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0062_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_62(Runtime &runtime) {
    runtime.register_generated_unit(62u, 0x088FC000u, 16384u, &recomp_unit_0062, &recomp_unit_0062_entry);
    // PSPRECOMP_V812_COMPACT_REGISTRATION: same entry set, looped once in Runtime instead of source-expanded calls.
    runtime.register_generated_entry_mask(0x088FC000u, &recomp_unit_0062, "recomp_unit_0062",
                                          kEntryMasks_recomp_unit_0062, 64u);
}
} // namespace psprecomp
