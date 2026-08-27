#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include "vcs_resident_regions.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
// PSPRECOMP_V811_COMPACT_DISPATCH: 64-slot occupancy masks + per-group base id.
static constexpr std::uint64_t kEntryMasks_recomp_unit_0070[64] = {
    0x04082822880842C1ull, 0x45A2444955155400ull, 0x920A28B122A84C10ull, 0x9002440180248004ull,
    0x08A102A200080310ull, 0x448948242A145481ull, 0x0141400008021016ull, 0xA122448000050095ull,
    0x5100514C14120890ull, 0x260A0A4020821003ull, 0xA54AAAAA20000100ull, 0x145600044B000222ull,
    0x3254244528525249ull, 0x000800D540A05555ull, 0x444A888480111084ull, 0x8948000020129114ull,
    0x2205220844522288ull, 0x4110451090020000ull, 0x0002000C89280414ull, 0x0000000080000400ull,
    0x0400010280055010ull, 0x0001008000000020ull, 0x0805508010801000ull, 0x00A8000000540805ull,
    0x0020044809040000ull, 0x12A8000800110046ull, 0x0008800040000015ull, 0x2242000000888000ull,
    0x0089000448913115ull, 0x1200220112000021ull, 0x0000000020040001ull, 0x90B0004800001080ull,
    0x3144220002210488ull, 0x0000000010020020ull, 0x4858002400000840ull, 0x18A2110001108244ull,
    0x1240008840008810ull, 0x20000508A451294Aull, 0x2801104000010215ull, 0x2A00441000004085ull,
    0x40002000324942A4ull, 0x08002500A1555524ull, 0x8452A282A2349211ull, 0x02A28040A8CA5A28ull,
    0x0000400492894A01ull, 0x00A455A9208AAA44ull, 0x68AA014511080025ull, 0x03A2152000A8440Aull,
    0x42A9224892248A20ull, 0xA90495288040A20Aull, 0x8002000152284204ull, 0x828AA14C20004000ull,
    0x540152222248112Aull, 0x0822505111555042ull, 0x95210840C30582A2ull, 0x500080690150AA88ull,
    0x60914A94852A5489ull, 0x20A4AA2582AA2091ull, 0x228140A05548D4A2ull, 0x2C2C2C244A816050ull,
    0x0800902240024089ull, 0x9110806280800010ull, 0x8A004C4A04A15008ull, 0x5041288A882AA082ull,
};
static constexpr std::uint16_t kEntryBases_recomp_unit_0070[64] = {
    1u, 15u, 36u, 56u, 67u, 79u, 98u, 108u, 122u, 138u, 152u, 169u, 183u, 205u, 222u, 237u,
    250u, 266u, 276u, 287u, 289u, 298u, 301u, 310u, 319u, 326u, 337u, 343u, 350u, 365u, 374u, 377u,
    386u, 399u, 402u, 411u, 424u, 433u, 449u, 459u, 469u, 482u, 499u, 520u, 539u, 551u, 572u, 589u,
    605u, 624u, 642u, 653u, 666u, 684u, 702u, 721u, 737u, 760u, 781u, 801u, 821u, 832u, 843u, 859u,
};
void recomp_unit_0070_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
// PSPRECOMP_AOT_REGCACHE_BEGIN
// PSPRECOMP_AOT_REGCACHE_META gprs=4,5,31,29,16,6 fprs=12,13,20,14 gpr_occ=3645 fpr_occ=611 gpr_total=5139 fpr_total=789
    std::uint32_t aot_gpr_4 = ctx.gpr[4];
    std::uint32_t aot_gpr_5 = ctx.gpr[5];
    std::uint32_t aot_gpr_31 = ctx.gpr[31];
    std::uint32_t aot_gpr_29 = ctx.gpr[29];
    std::uint32_t aot_gpr_16 = ctx.gpr[16];
    std::uint32_t aot_gpr_6 = ctx.gpr[6];
    float aot_fpr_12 = ctx.fpr[12];
    float aot_fpr_13 = ctx.fpr[13];
    float aot_fpr_20 = ctx.fpr[20];
    float aot_fpr_14 = ctx.fpr[14];
    bool aot_regcache_valid = true;
#define AOT_REGCACHE_SYNC_OUT() do { if (aot_regcache_valid) { ctx.gpr[4] = aot_gpr_4; ctx.gpr[5] = aot_gpr_5; ctx.gpr[31] = aot_gpr_31; ctx.gpr[29] = aot_gpr_29; ctx.gpr[16] = aot_gpr_16; ctx.gpr[6] = aot_gpr_6; ctx.fpr[12] = aot_fpr_12; ctx.fpr[13] = aot_fpr_13; ctx.fpr[20] = aot_fpr_20; ctx.fpr[14] = aot_fpr_14; } } while (false)
#define AOT_REGCACHE_SYNC_IN() do { if (aot_regcache_valid) { aot_gpr_4 = ctx.gpr[4]; aot_gpr_5 = ctx.gpr[5]; aot_gpr_31 = ctx.gpr[31]; aot_gpr_29 = ctx.gpr[29]; aot_gpr_16 = ctx.gpr[16]; aot_gpr_6 = ctx.gpr[6]; aot_fpr_12 = ctx.fpr[12]; aot_fpr_13 = ctx.fpr[13]; aot_fpr_20 = ctx.fpr[20]; aot_fpr_14 = ctx.fpr[14]; } } while (false)
// PSPRECOMP_AOT_REGCACHE_END
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_redispatch_rounds = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x0891C000u;
        entry_id = 0u;
        if (entry_delta < 16380u && (entry_delta & 3u) == 0u) {
            const std::uint32_t entry_slot = entry_delta >> 2u;
            const std::uint32_t entry_group = entry_slot >> 6u;
            const std::uint64_t entry_mask = kEntryMasks_recomp_unit_0070[entry_group];
            const std::uint64_t entry_bit = 1ull << (entry_slot & 63u);
            if ((entry_mask & entry_bit) != 0u) {
                entry_id = static_cast<std::uint16_t>(
                    kEntryBases_recomp_unit_0070[entry_group] +
                    std::popcount(entry_mask & (entry_bit - 1ull)));
            }
        }
    }
    switch (entry_id) {
    case 1u: goto L_0891C000;
    case 2u: goto L_0891C018;
    case 3u: goto L_0891C01C;
    case 4u: goto L_0891C024;
    case 5u: goto L_0891C038;
    case 6u: goto L_0891C04C;
    case 7u: goto L_0891C06C;
    case 8u: goto L_0891C07C;
    case 9u: goto L_0891C084;
    case 10u: goto L_0891C094;
    case 11u: goto L_0891C0AC;
    case 12u: goto L_0891C0B4;
    case 13u: goto L_0891C0CC;
    case 14u: goto L_0891C0E8;
    case 15u: goto L_0891C128;
    case 16u: goto L_0891C130;
    case 17u: goto L_0891C138;
    case 18u: goto L_0891C140;
    case 19u: goto L_0891C148;
    case 20u: goto L_0891C150;
    case 21u: goto L_0891C160;
    case 22u: goto L_0891C168;
    case 23u: goto L_0891C170;
    case 24u: goto L_0891C178;
    case 25u: goto L_0891C180;
    case 26u: goto L_0891C18C;
    case 27u: goto L_0891C198;
    case 28u: goto L_0891C1A8;
    case 29u: goto L_0891C1B8;
    case 30u: goto L_0891C1C4;
    case 31u: goto L_0891C1D4;
    case 32u: goto L_0891C1DC;
    case 33u: goto L_0891C1E0;
    case 34u: goto L_0891C1E8;
    case 35u: goto L_0891C1F8;
    case 36u: goto L_0891C210;
    case 37u: goto L_0891C228;
    case 38u: goto L_0891C22C;
    case 39u: goto L_0891C238;
    case 40u: goto L_0891C24C;
    case 41u: goto L_0891C254;
    case 42u: goto L_0891C25C;
    case 43u: goto L_0891C264;
    case 44u: goto L_0891C274;
    case 45u: goto L_0891C280;
    case 46u: goto L_0891C290;
    case 47u: goto L_0891C294;
    case 48u: goto L_0891C29C;
    case 49u: goto L_0891C2AC;
    case 50u: goto L_0891C2B4;
    case 51u: goto L_0891C2C4;
    case 52u: goto L_0891C2CC;
    case 53u: goto L_0891C2E4;
    case 54u: goto L_0891C2F0;
    case 55u: goto L_0891C2FC;
    case 56u: goto L_0891C308;
    case 57u: goto L_0891C33C;
    case 58u: goto L_0891C348;
    case 59u: goto L_0891C354;
    case 60u: goto L_0891C37C;
    case 61u: goto L_0891C380;
    case 62u: goto L_0891C3A8;
    case 63u: goto L_0891C3B8;
    case 64u: goto L_0891C3C4;
    case 65u: goto L_0891C3F0;
    case 66u: goto L_0891C3FC;
    case 67u: goto L_0891C410;
    case 68u: goto L_0891C420;
    case 69u: goto L_0891C424;
    case 70u: goto L_0891C44C;
    case 71u: goto L_0891C484;
    case 72u: goto L_0891C494;
    case 73u: goto L_0891C49C;
    case 74u: goto L_0891C4A4;
    case 75u: goto L_0891C4C0;
    case 76u: goto L_0891C4D4;
    case 77u: goto L_0891C4DC;
    case 78u: goto L_0891C4EC;
    case 79u: goto L_0891C500;
    case 80u: goto L_0891C51C;
    case 81u: goto L_0891C528;
    case 82u: goto L_0891C530;
    case 83u: goto L_0891C538;
    case 84u: goto L_0891C548;
    case 85u: goto L_0891C550;
    case 86u: goto L_0891C564;
    case 87u: goto L_0891C56C;
    case 88u: goto L_0891C574;
    case 89u: goto L_0891C588;
    case 90u: goto L_0891C594;
    case 91u: goto L_0891C5AC;
    case 92u: goto L_0891C5B8;
    case 93u: goto L_0891C5C0;
    case 94u: goto L_0891C5CC;
    case 95u: goto L_0891C5DC;
    case 96u: goto L_0891C5E8;
    case 97u: goto L_0891C5F8;
    case 98u: goto L_0891C604;
    case 99u: goto L_0891C608;
    case 100u: goto L_0891C610;
    case 101u: goto L_0891C630;
    case 102u: goto L_0891C644;
    case 103u: goto L_0891C66C;
    case 104u: goto L_0891C6B8;
    case 105u: goto L_0891C6C0;
    case 106u: goto L_0891C6D8;
    case 107u: goto L_0891C6E0;
    case 108u: goto L_0891C700;
    case 109u: goto L_0891C708;
    case 110u: goto L_0891C710;
    case 111u: goto L_0891C71C;
    case 112u: goto L_0891C740;
    case 113u: goto L_0891C748;
    case 114u: goto L_0891C79C;
    case 115u: goto L_0891C7A8;
    case 116u: goto L_0891C7B8;
    case 117u: goto L_0891C7C4;
    case 118u: goto L_0891C7D4;
    case 119u: goto L_0891C7E0;
    case 120u: goto L_0891C7F4;
    case 121u: goto L_0891C7FC;
    case 122u: goto L_0891C810;
    case 123u: goto L_0891C81C;
    case 124u: goto L_0891C82C;
    case 125u: goto L_0891C844;
    case 126u: goto L_0891C850;
    case 127u: goto L_0891C868;
    case 128u: goto L_0891C870;
    case 129u: goto L_0891C888;
    case 130u: goto L_0891C88C;
    case 131u: goto L_0891C898;
    case 132u: goto L_0891C8A0;
    case 133u: goto L_0891C8B0;
    case 134u: goto L_0891C8B8;
    case 135u: goto L_0891C8E0;
    case 136u: goto L_0891C8F0;
    case 137u: goto L_0891C8F8;
    case 138u: goto L_0891C900;
    case 139u: goto L_0891C904;
    case 140u: goto L_0891C930;
    case 141u: goto L_0891C944;
    case 142u: goto L_0891C95C;
    case 143u: goto L_0891C974;
    case 144u: goto L_0891C998;
    case 145u: goto L_0891C9A4;
    case 146u: goto L_0891C9AC;
    case 147u: goto L_0891C9C4;
    case 148u: goto L_0891C9CC;
    case 149u: goto L_0891C9E4;
    case 150u: goto L_0891C9E8;
    case 151u: goto L_0891C9F4;
    case 152u: goto L_0891CA20;
    case 153u: goto L_0891CA74;
    case 154u: goto L_0891CA84;
    case 155u: goto L_0891CA8C;
    case 156u: goto L_0891CA94;
    case 157u: goto L_0891CA9C;
    case 158u: goto L_0891CAA4;
    case 159u: goto L_0891CAAC;
    case 160u: goto L_0891CAB4;
    case 161u: goto L_0891CABC;
    case 162u: goto L_0891CAC4;
    case 163u: goto L_0891CACC;
    case 164u: goto L_0891CAD8;
    case 165u: goto L_0891CAE0;
    case 166u: goto L_0891CAE8;
    case 167u: goto L_0891CAF4;
    case 168u: goto L_0891CAFC;
    case 169u: goto L_0891CB04;
    case 170u: goto L_0891CB14;
    case 171u: goto L_0891CB24;
    case 172u: goto L_0891CB60;
    case 173u: goto L_0891CB64;
    case 174u: goto L_0891CB6C;
    case 175u: goto L_0891CB78;
    case 176u: goto L_0891CB88;
    case 177u: goto L_0891CBC4;
    case 178u: goto L_0891CBC8;
    case 179u: goto L_0891CBD0;
    case 180u: goto L_0891CBD8;
    case 181u: goto L_0891CBE8;
    case 182u: goto L_0891CBF0;
    case 183u: goto L_0891CC00;
    case 184u: goto L_0891CC0C;
    case 185u: goto L_0891CC18;
    case 186u: goto L_0891CC24;
    case 187u: goto L_0891CC30;
    case 188u: goto L_0891CC38;
    case 189u: goto L_0891CC44;
    case 190u: goto L_0891CC50;
    case 191u: goto L_0891CC58;
    case 192u: goto L_0891CC6C;
    case 193u: goto L_0891CC74;
    case 194u: goto L_0891CC80;
    case 195u: goto L_0891CC88;
    case 196u: goto L_0891CC98;
    case 197u: goto L_0891CCA8;
    case 198u: goto L_0891CCB4;
    case 199u: goto L_0891CCC8;
    case 200u: goto L_0891CCD0;
    case 201u: goto L_0891CCD8;
    case 202u: goto L_0891CCE4;
    case 203u: goto L_0891CCF0;
    case 204u: goto L_0891CCF4;
    case 205u: goto L_0891CD00;
    case 206u: goto L_0891CD08;
    case 207u: goto L_0891CD10;
    case 208u: goto L_0891CD18;
    case 209u: goto L_0891CD20;
    case 210u: goto L_0891CD28;
    case 211u: goto L_0891CD30;
    case 212u: goto L_0891CD38;
    case 213u: goto L_0891CD54;
    case 214u: goto L_0891CD5C;
    case 215u: goto L_0891CD78;
    case 216u: goto L_0891CD80;
    case 217u: goto L_0891CD88;
    case 218u: goto L_0891CD90;
    case 219u: goto L_0891CD98;
    case 220u: goto L_0891CD9C;
    case 221u: goto L_0891CDCC;
    case 222u: goto L_0891CE08;
    case 223u: goto L_0891CE1C;
    case 224u: goto L_0891CE30;
    case 225u: goto L_0891CE40;
    case 226u: goto L_0891CE50;
    case 227u: goto L_0891CE7C;
    case 228u: goto L_0891CE88;
    case 229u: goto L_0891CE9C;
    case 230u: goto L_0891CEAC;
    case 231u: goto L_0891CEBC;
    case 232u: goto L_0891CEC4;
    case 233u: goto L_0891CECC;
    case 234u: goto L_0891CED8;
    case 235u: goto L_0891CEE8;
    case 236u: goto L_0891CEF8;
    case 237u: goto L_0891CF08;
    case 238u: goto L_0891CF10;
    case 239u: goto L_0891CF20;
    case 240u: goto L_0891CF30;
    case 241u: goto L_0891CF3C;
    case 242u: goto L_0891CF44;
    case 243u: goto L_0891CF50;
    case 244u: goto L_0891CF74;
    case 245u: goto L_0891CFCC;
    case 246u: goto L_0891CFD8;
    case 247u: goto L_0891CFE0;
    case 248u: goto L_0891CFEC;
    case 249u: goto L_0891CFFC;
    case 250u: goto L_0891D00C;
    case 251u: goto L_0891D01C;
    case 252u: goto L_0891D024;
    case 253u: goto L_0891D034;
    case 254u: goto L_0891D044;
    case 255u: goto L_0891D050;
    case 256u: goto L_0891D058;
    case 257u: goto L_0891D068;
    case 258u: goto L_0891D078;
    case 259u: goto L_0891D08C;
    case 260u: goto L_0891D0A4;
    case 261u: goto L_0891D0B4;
    case 262u: goto L_0891D0C0;
    case 263u: goto L_0891D0C8;
    case 264u: goto L_0891D0E4;
    case 265u: goto L_0891D0F4;
    case 266u: goto L_0891D144;
    case 267u: goto L_0891D170;
    case 268u: goto L_0891D17C;
    case 269u: goto L_0891D190;
    case 270u: goto L_0891D1A0;
    case 271u: goto L_0891D1A8;
    case 272u: goto L_0891D1B8;
    case 273u: goto L_0891D1D0;
    case 274u: goto L_0891D1E0;
    case 275u: goto L_0891D1F8;
    case 276u: goto L_0891D208;
    case 277u: goto L_0891D210;
    case 278u: goto L_0891D228;
    case 279u: goto L_0891D24C;
    case 280u: goto L_0891D254;
    case 281u: goto L_0891D260;
    case 282u: goto L_0891D26C;
    case 283u: goto L_0891D27C;
    case 284u: goto L_0891D288;
    case 285u: goto L_0891D28C;
    case 286u: goto L_0891D2C4;
    case 287u: goto L_0891D328;
    case 288u: goto L_0891D37C;
    case 289u: goto L_0891D410;
    case 290u: goto L_0891D430;
    case 291u: goto L_0891D438;
    case 292u: goto L_0891D440;
    case 293u: goto L_0891D448;
    case 294u: goto L_0891D47C;
    case 295u: goto L_0891D484;
    case 296u: goto L_0891D4A0;
    case 297u: goto L_0891D4E8;
    case 298u: goto L_0891D514;
    case 299u: goto L_0891D59C;
    case 300u: goto L_0891D5C0;
    case 301u: goto L_0891D630;
    case 302u: goto L_0891D65C;
    case 303u: goto L_0891D670;
    case 304u: goto L_0891D69C;
    case 305u: goto L_0891D6B0;
    case 306u: goto L_0891D6B8;
    case 307u: goto L_0891D6C0;
    case 308u: goto L_0891D6C8;
    case 309u: goto L_0891D6EC;
    case 310u: goto L_0891D700;
    case 311u: goto L_0891D708;
    case 312u: goto L_0891D72C;
    case 313u: goto L_0891D748;
    case 314u: goto L_0891D750;
    case 315u: goto L_0891D758;
    case 316u: goto L_0891D7CC;
    case 317u: goto L_0891D7D4;
    case 318u: goto L_0891D7DC;
    case 319u: goto L_0891D848;
    case 320u: goto L_0891D860;
    case 321u: goto L_0891D86C;
    case 322u: goto L_0891D88C;
    case 323u: goto L_0891D898;
    case 324u: goto L_0891D8A8;
    case 325u: goto L_0891D8D4;
    case 326u: goto L_0891D904;
    case 327u: goto L_0891D908;
    case 328u: goto L_0891D918;
    case 329u: goto L_0891D940;
    case 330u: goto L_0891D950;
    case 331u: goto L_0891D98C;
    case 332u: goto L_0891D9CC;
    case 333u: goto L_0891D9D4;
    case 334u: goto L_0891D9DC;
    case 335u: goto L_0891D9E4;
    case 336u: goto L_0891D9F0;
    case 337u: goto L_0891DA00;
    case 338u: goto L_0891DA08;
    case 339u: goto L_0891DA10;
    case 340u: goto L_0891DA78;
    case 341u: goto L_0891DABC;
    case 342u: goto L_0891DACC;
    case 343u: goto L_0891DB3C;
    case 344u: goto L_0891DB4C;
    case 345u: goto L_0891DB5C;
    case 346u: goto L_0891DBC4;
    case 347u: goto L_0891DBD8;
    case 348u: goto L_0891DBE4;
    case 349u: goto L_0891DBF4;
    case 350u: goto L_0891DC00;
    case 351u: goto L_0891DC08;
    case 352u: goto L_0891DC10;
    case 353u: goto L_0891DC20;
    case 354u: goto L_0891DC30;
    case 355u: goto L_0891DC34;
    case 356u: goto L_0891DC40;
    case 357u: goto L_0891DC50;
    case 358u: goto L_0891DC5C;
    case 359u: goto L_0891DC6C;
    case 360u: goto L_0891DC78;
    case 361u: goto L_0891DC88;
    case 362u: goto L_0891DCC0;
    case 363u: goto L_0891DCCC;
    case 364u: goto L_0891DCDC;
    case 365u: goto L_0891DD00;
    case 366u: goto L_0891DD14;
    case 367u: goto L_0891DD64;
    case 368u: goto L_0891DD70;
    case 369u: goto L_0891DD80;
    case 370u: goto L_0891DDA4;
    case 371u: goto L_0891DDB4;
    case 372u: goto L_0891DDE4;
    case 373u: goto L_0891DDF0;
    case 374u: goto L_0891DE00;
    case 375u: goto L_0891DE48;
    case 376u: goto L_0891DE74;
    case 377u: goto L_0891DF1C;
    case 378u: goto L_0891DF30;
    case 379u: goto L_0891DF8C;
    case 380u: goto L_0891DF98;
    case 381u: goto L_0891DFD0;
    case 382u: goto L_0891DFD4;
    case 383u: goto L_0891DFDC;
    case 384u: goto L_0891DFF0;
    case 385u: goto L_0891DFFC;
    case 386u: goto L_0891E00C;
    case 387u: goto L_0891E01C;
    case 388u: goto L_0891E028;
    case 389u: goto L_0891E040;
    case 390u: goto L_0891E054;
    case 391u: goto L_0891E064;
    case 392u: goto L_0891E0A4;
    case 393u: goto L_0891E0B4;
    case 394u: goto L_0891E0C8;
    case 395u: goto L_0891E0D8;
    case 396u: goto L_0891E0E0;
    case 397u: goto L_0891E0F0;
    case 398u: goto L_0891E0F4;
    case 399u: goto L_0891E114;
    case 400u: goto L_0891E144;
    case 401u: goto L_0891E170;
    case 402u: goto L_0891E218;
    case 403u: goto L_0891E22C;
    case 404u: goto L_0891E288;
    case 405u: goto L_0891E294;
    case 406u: goto L_0891E2CC;
    case 407u: goto L_0891E2D0;
    case 408u: goto L_0891E2D8;
    case 409u: goto L_0891E2EC;
    case 410u: goto L_0891E2F8;
    case 411u: goto L_0891E308;
    case 412u: goto L_0891E318;
    case 413u: goto L_0891E324;
    case 414u: goto L_0891E33C;
    case 415u: goto L_0891E350;
    case 416u: goto L_0891E360;
    case 417u: goto L_0891E3A0;
    case 418u: goto L_0891E3B0;
    case 419u: goto L_0891E3C4;
    case 420u: goto L_0891E3D4;
    case 421u: goto L_0891E3DC;
    case 422u: goto L_0891E3EC;
    case 423u: goto L_0891E3F0;
    case 424u: goto L_0891E410;
    case 425u: goto L_0891E42C;
    case 426u: goto L_0891E43C;
    case 427u: goto L_0891E478;
    case 428u: goto L_0891E48C;
    case 429u: goto L_0891E49C;
    case 430u: goto L_0891E4D8;
    case 431u: goto L_0891E4E4;
    case 432u: goto L_0891E4F0;
    case 433u: goto L_0891E504;
    case 434u: goto L_0891E50C;
    case 435u: goto L_0891E518;
    case 436u: goto L_0891E520;
    case 437u: goto L_0891E52C;
    case 438u: goto L_0891E534;
    case 439u: goto L_0891E540;
    case 440u: goto L_0891E550;
    case 441u: goto L_0891E558;
    case 442u: goto L_0891E568;
    case 443u: goto L_0891E574;
    case 444u: goto L_0891E57C;
    case 445u: goto L_0891E58C;
    case 446u: goto L_0891E5A0;
    case 447u: goto L_0891E5A8;
    case 448u: goto L_0891E5F4;
    case 449u: goto L_0891E600;
    case 450u: goto L_0891E608;
    case 451u: goto L_0891E610;
    case 452u: goto L_0891E624;
    case 453u: goto L_0891E640;
    case 454u: goto L_0891E698;
    case 455u: goto L_0891E6B0;
    case 456u: goto L_0891E6C0;
    case 457u: goto L_0891E6EC;
    case 458u: goto L_0891E6F4;
    case 459u: goto L_0891E700;
    case 460u: goto L_0891E708;
    case 461u: goto L_0891E71C;
    case 462u: goto L_0891E738;
    case 463u: goto L_0891E790;
    case 464u: goto L_0891E7A8;
    case 465u: goto L_0891E7B8;
    case 466u: goto L_0891E7E4;
    case 467u: goto L_0891E7EC;
    case 468u: goto L_0891E7F4;
    case 469u: goto L_0891E808;
    case 470u: goto L_0891E814;
    case 471u: goto L_0891E81C;
    case 472u: goto L_0891E824;
    case 473u: goto L_0891E838;
    case 474u: goto L_0891E840;
    case 475u: goto L_0891E84C;
    case 476u: goto L_0891E858;
    case 477u: goto L_0891E864;
    case 478u: goto L_0891E870;
    case 479u: goto L_0891E874;
    case 480u: goto L_0891E8B4;
    case 481u: goto L_0891E8F8;
    case 482u: goto L_0891E908;
    case 483u: goto L_0891E914;
    case 484u: goto L_0891E920;
    case 485u: goto L_0891E928;
    case 486u: goto L_0891E930;
    case 487u: goto L_0891E938;
    case 488u: goto L_0891E940;
    case 489u: goto L_0891E948;
    case 490u: goto L_0891E950;
    case 491u: goto L_0891E958;
    case 492u: goto L_0891E960;
    case 493u: goto L_0891E974;
    case 494u: goto L_0891E97C;
    case 495u: goto L_0891E9A0;
    case 496u: goto L_0891E9A8;
    case 497u: goto L_0891E9B4;
    case 498u: goto L_0891E9EC;
    case 499u: goto L_0891EA00;
    case 500u: goto L_0891EA10;
    case 501u: goto L_0891EA24;
    case 502u: goto L_0891EA30;
    case 503u: goto L_0891EA3C;
    case 504u: goto L_0891EA48;
    case 505u: goto L_0891EA50;
    case 506u: goto L_0891EA54;
    case 507u: goto L_0891EA64;
    case 508u: goto L_0891EA74;
    case 509u: goto L_0891EA7C;
    case 510u: goto L_0891EA84;
    case 511u: goto L_0891EA9C;
    case 512u: goto L_0891EAA4;
    case 513u: goto L_0891EAB4;
    case 514u: goto L_0891EABC;
    case 515u: goto L_0891EAC4;
    case 516u: goto L_0891EAD0;
    case 517u: goto L_0891EAD8;
    case 518u: goto L_0891EAE8;
    case 519u: goto L_0891EAFC;
    case 520u: goto L_0891EB0C;
    case 521u: goto L_0891EB14;
    case 522u: goto L_0891EB24;
    case 523u: goto L_0891EB2C;
    case 524u: goto L_0891EB30;
    case 525u: goto L_0891EB38;
    case 526u: goto L_0891EB44;
    case 527u: goto L_0891EB4C;
    case 528u: goto L_0891EB58;
    case 529u: goto L_0891EB5C;
    case 530u: goto L_0891EB6C;
    case 531u: goto L_0891EB74;
    case 532u: goto L_0891EB7C;
    case 533u: goto L_0891EB98;
    case 534u: goto L_0891EBBC;
    case 535u: goto L_0891EBC4;
    case 536u: goto L_0891EBD4;
    case 537u: goto L_0891EBDC;
    case 538u: goto L_0891EBE4;
    case 539u: goto L_0891EC00;
    case 540u: goto L_0891EC24;
    case 541u: goto L_0891EC2C;
    case 542u: goto L_0891EC38;
    case 543u: goto L_0891EC40;
    case 544u: goto L_0891EC4C;
    case 545u: goto L_0891EC5C;
    case 546u: goto L_0891EC64;
    case 547u: goto L_0891EC70;
    case 548u: goto L_0891EC7C;
    case 549u: goto L_0891EC88;
    case 550u: goto L_0891ECB8;
    case 551u: goto L_0891ED08;
    case 552u: goto L_0891ED18;
    case 553u: goto L_0891ED24;
    case 554u: goto L_0891ED2C;
    case 555u: goto L_0891ED34;
    case 556u: goto L_0891ED3C;
    case 557u: goto L_0891ED44;
    case 558u: goto L_0891ED4C;
    case 559u: goto L_0891ED5C;
    case 560u: goto L_0891ED74;
    case 561u: goto L_0891ED80;
    case 562u: goto L_0891ED8C;
    case 563u: goto L_0891ED94;
    case 564u: goto L_0891ED9C;
    case 565u: goto L_0891EDA0;
    case 566u: goto L_0891EDA8;
    case 567u: goto L_0891EDB0;
    case 568u: goto L_0891EDB8;
    case 569u: goto L_0891EDC8;
    case 570u: goto L_0891EDD4;
    case 571u: goto L_0891EDDC;
    case 572u: goto L_0891EE00;
    case 573u: goto L_0891EE08;
    case 574u: goto L_0891EE14;
    case 575u: goto L_0891EE4C;
    case 576u: goto L_0891EE60;
    case 577u: goto L_0891EE70;
    case 578u: goto L_0891EE80;
    case 579u: goto L_0891EE88;
    case 580u: goto L_0891EE98;
    case 581u: goto L_0891EEA0;
    case 582u: goto L_0891EEC4;
    case 583u: goto L_0891EECC;
    case 584u: goto L_0891EED4;
    case 585u: goto L_0891EEDC;
    case 586u: goto L_0891EEEC;
    case 587u: goto L_0891EEF4;
    case 588u: goto L_0891EEF8;
    case 589u: goto L_0891EF04;
    case 590u: goto L_0891EF0C;
    case 591u: goto L_0891EF28;
    case 592u: goto L_0891EF38;
    case 593u: goto L_0891EF4C;
    case 594u: goto L_0891EF54;
    case 595u: goto L_0891EF5C;
    case 596u: goto L_0891EF94;
    case 597u: goto L_0891EFA0;
    case 598u: goto L_0891EFA8;
    case 599u: goto L_0891EFB0;
    case 600u: goto L_0891EFC4;
    case 601u: goto L_0891EFD4;
    case 602u: goto L_0891EFDC;
    case 603u: goto L_0891EFE0;
    case 604u: goto L_0891EFE4;
    case 605u: goto L_0891F014;
    case 606u: goto L_0891F024;
    case 607u: goto L_0891F02C;
    case 608u: goto L_0891F03C;
    case 609u: goto L_0891F048;
    case 610u: goto L_0891F054;
    case 611u: goto L_0891F064;
    case 612u: goto L_0891F070;
    case 613u: goto L_0891F07C;
    case 614u: goto L_0891F08C;
    case 615u: goto L_0891F098;
    case 616u: goto L_0891F0A4;
    case 617u: goto L_0891F0B4;
    case 618u: goto L_0891F0C0;
    case 619u: goto L_0891F0CC;
    case 620u: goto L_0891F0D4;
    case 621u: goto L_0891F0DC;
    case 622u: goto L_0891F0E4;
    case 623u: goto L_0891F0F8;
    case 624u: goto L_0891F104;
    case 625u: goto L_0891F10C;
    case 626u: goto L_0891F124;
    case 627u: goto L_0891F134;
    case 628u: goto L_0891F13C;
    case 629u: goto L_0891F158;
    case 630u: goto L_0891F17C;
    case 631u: goto L_0891F18C;
    case 632u: goto L_0891F194;
    case 633u: goto L_0891F1A0;
    case 634u: goto L_0891F1A8;
    case 635u: goto L_0891F1B0;
    case 636u: goto L_0891F1BC;
    case 637u: goto L_0891F1C8;
    case 638u: goto L_0891F1E0;
    case 639u: goto L_0891F1EC;
    case 640u: goto L_0891F1F4;
    case 641u: goto L_0891F1FC;
    case 642u: goto L_0891F208;
    case 643u: goto L_0891F224;
    case 644u: goto L_0891F238;
    case 645u: goto L_0891F24C;
    case 646u: goto L_0891F254;
    case 647u: goto L_0891F264;
    case 648u: goto L_0891F270;
    case 649u: goto L_0891F278;
    case 650u: goto L_0891F280;
    case 651u: goto L_0891F2C4;
    case 652u: goto L_0891F2FC;
    case 653u: goto L_0891F338;
    case 654u: goto L_0891F374;
    case 655u: goto L_0891F388;
    case 656u: goto L_0891F38C;
    case 657u: goto L_0891F398;
    case 658u: goto L_0891F3A0;
    case 659u: goto L_0891F3B4;
    case 660u: goto L_0891F3BC;
    case 661u: goto L_0891F3C4;
    case 662u: goto L_0891F3CC;
    case 663u: goto L_0891F3DC;
    case 664u: goto L_0891F3E4;
    case 665u: goto L_0891F3FC;
    case 666u: goto L_0891F404;
    case 667u: goto L_0891F40C;
    case 668u: goto L_0891F414;
    case 669u: goto L_0891F420;
    case 670u: goto L_0891F430;
    case 671u: goto L_0891F44C;
    case 672u: goto L_0891F458;
    case 673u: goto L_0891F464;
    case 674u: goto L_0891F474;
    case 675u: goto L_0891F484;
    case 676u: goto L_0891F494;
    case 677u: goto L_0891F4A4;
    case 678u: goto L_0891F4B0;
    case 679u: goto L_0891F4B8;
    case 680u: goto L_0891F4C0;
    case 681u: goto L_0891F4E8;
    case 682u: goto L_0891F4F0;
    case 683u: goto L_0891F4F8;
    case 684u: goto L_0891F504;
    case 685u: goto L_0891F518;
    case 686u: goto L_0891F530;
    case 687u: goto L_0891F538;
    case 688u: goto L_0891F540;
    case 689u: goto L_0891F548;
    case 690u: goto L_0891F550;
    case 691u: goto L_0891F558;
    case 692u: goto L_0891F560;
    case 693u: goto L_0891F570;
    case 694u: goto L_0891F580;
    case 695u: goto L_0891F590;
    case 696u: goto L_0891F598;
    case 697u: goto L_0891F5B0;
    case 698u: goto L_0891F5B8;
    case 699u: goto L_0891F5C4;
    case 700u: goto L_0891F5D4;
    case 701u: goto L_0891F5EC;
    case 702u: goto L_0891F604;
    case 703u: goto L_0891F614;
    case 704u: goto L_0891F61C;
    case 705u: goto L_0891F624;
    case 706u: goto L_0891F63C;
    case 707u: goto L_0891F640;
    case 708u: goto L_0891F648;
    case 709u: goto L_0891F660;
    case 710u: goto L_0891F664;
    case 711u: goto L_0891F678;
    case 712u: goto L_0891F67C;
    case 713u: goto L_0891F698;
    case 714u: goto L_0891F6AC;
    case 715u: goto L_0891F6C0;
    case 716u: goto L_0891F6D4;
    case 717u: goto L_0891F6E0;
    case 718u: goto L_0891F6E8;
    case 719u: goto L_0891F6F0;
    case 720u: goto L_0891F6FC;
    case 721u: goto L_0891F70C;
    case 722u: goto L_0891F71C;
    case 723u: goto L_0891F724;
    case 724u: goto L_0891F72C;
    case 725u: goto L_0891F734;
    case 726u: goto L_0891F73C;
    case 727u: goto L_0891F750;
    case 728u: goto L_0891F758;
    case 729u: goto L_0891F760;
    case 730u: goto L_0891F780;
    case 731u: goto L_0891F78C;
    case 732u: goto L_0891F794;
    case 733u: goto L_0891F798;
    case 734u: goto L_0891F7BC;
    case 735u: goto L_0891F7F0;
    case 736u: goto L_0891F7F8;
    case 737u: goto L_0891F800;
    case 738u: goto L_0891F80C;
    case 739u: goto L_0891F81C;
    case 740u: goto L_0891F828;
    case 741u: goto L_0891F830;
    case 742u: goto L_0891F838;
    case 743u: goto L_0891F844;
    case 744u: goto L_0891F84C;
    case 745u: goto L_0891F854;
    case 746u: goto L_0891F860;
    case 747u: goto L_0891F868;
    case 748u: goto L_0891F87C;
    case 749u: goto L_0891F888;
    case 750u: goto L_0891F890;
    case 751u: goto L_0891F89C;
    case 752u: goto L_0891F8A4;
    case 753u: goto L_0891F8AC;
    case 754u: goto L_0891F8B8;
    case 755u: goto L_0891F8C0;
    case 756u: goto L_0891F8D0;
    case 757u: goto L_0891F8DC;
    case 758u: goto L_0891F8F4;
    case 759u: goto L_0891F8F8;
    case 760u: goto L_0891F900;
    case 761u: goto L_0891F910;
    case 762u: goto L_0891F91C;
    case 763u: goto L_0891F934;
    case 764u: goto L_0891F944;
    case 765u: goto L_0891F94C;
    case 766u: goto L_0891F954;
    case 767u: goto L_0891F95C;
    case 768u: goto L_0891F964;
    case 769u: goto L_0891F97C;
    case 770u: goto L_0891F980;
    case 771u: goto L_0891F988;
    case 772u: goto L_0891F994;
    case 773u: goto L_0891F9A4;
    case 774u: goto L_0891F9AC;
    case 775u: goto L_0891F9B4;
    case 776u: goto L_0891F9BC;
    case 777u: goto L_0891F9C8;
    case 778u: goto L_0891F9D4;
    case 779u: goto L_0891F9DC;
    case 780u: goto L_0891F9F4;
    case 781u: goto L_0891FA04;
    case 782u: goto L_0891FA14;
    case 783u: goto L_0891FA1C;
    case 784u: goto L_0891FA28;
    case 785u: goto L_0891FA30;
    case 786u: goto L_0891FA38;
    case 787u: goto L_0891FA3C;
    case 788u: goto L_0891FA4C;
    case 789u: goto L_0891FA58;
    case 790u: goto L_0891FA60;
    case 791u: goto L_0891FA68;
    case 792u: goto L_0891FA70;
    case 793u: goto L_0891FA78;
    case 794u: goto L_0891FA94;
    case 795u: goto L_0891FA9C;
    case 796u: goto L_0891FAB8;
    case 797u: goto L_0891FAC0;
    case 798u: goto L_0891FADC;
    case 799u: goto L_0891FAE4;
    case 800u: goto L_0891FAF4;
    case 801u: goto L_0891FB10;
    case 802u: goto L_0891FB18;
    case 803u: goto L_0891FB34;
    case 804u: goto L_0891FB38;
    case 805u: goto L_0891FB40;
    case 806u: goto L_0891FB5C;
    case 807u: goto L_0891FB64;
    case 808u: goto L_0891FB6C;
    case 809u: goto L_0891FB78;
    case 810u: goto L_0891FB88;
    case 811u: goto L_0891FB94;
    case 812u: goto L_0891FBA8;
    case 813u: goto L_0891FBAC;
    case 814u: goto L_0891FBB4;
    case 815u: goto L_0891FBC8;
    case 816u: goto L_0891FBCC;
    case 817u: goto L_0891FBD4;
    case 818u: goto L_0891FBE8;
    case 819u: goto L_0891FBEC;
    case 820u: goto L_0891FBF4;
    case 821u: goto L_0891FC00;
    case 822u: goto L_0891FC0C;
    case 823u: goto L_0891FC1C;
    case 824u: goto L_0891FC38;
    case 825u: goto L_0891FC44;
    case 826u: goto L_0891FC78;
    case 827u: goto L_0891FC84;
    case 828u: goto L_0891FC94;
    case 829u: goto L_0891FCB0;
    case 830u: goto L_0891FCBC;
    case 831u: goto L_0891FCEC;
    case 832u: goto L_0891FD10;
    case 833u: goto L_0891FD5C;
    case 834u: goto L_0891FD7C;
    case 835u: goto L_0891FD84;
    case 836u: goto L_0891FD94;
    case 837u: goto L_0891FD98;
    case 838u: goto L_0891FDBC;
    case 839u: goto L_0891FDD0;
    case 840u: goto L_0891FDE0;
    case 841u: goto L_0891FDF0;
    case 842u: goto L_0891FDFC;
    case 843u: goto L_0891FE0C;
    case 844u: goto L_0891FE30;
    case 845u: goto L_0891FE38;
    case 846u: goto L_0891FE40;
    case 847u: goto L_0891FE54;
    case 848u: goto L_0891FE5C;
    case 849u: goto L_0891FE68;
    case 850u: goto L_0891FE84;
    case 851u: goto L_0891FE8C;
    case 852u: goto L_0891FE98;
    case 853u: goto L_0891FEA8;
    case 854u: goto L_0891FEAC;
    case 855u: goto L_0891FEB8;
    case 856u: goto L_0891FEE4;
    case 857u: goto L_0891FEEC;
    case 858u: goto L_0891FEFC;
    case 859u: goto L_0891FF04;
    case 860u: goto L_0891FF1C;
    case 861u: goto L_0891FF34;
    case 862u: goto L_0891FF3C;
    case 863u: goto L_0891FF44;
    case 864u: goto L_0891FF4C;
    case 865u: goto L_0891FF54;
    case 866u: goto L_0891FF6C;
    case 867u: goto L_0891FF7C;
    case 868u: goto L_0891FF84;
    case 869u: goto L_0891FF8C;
    case 870u: goto L_0891FF9C;
    case 871u: goto L_0891FFAC;
    case 872u: goto L_0891FFB4;
    case 873u: goto L_0891FFC0;
    case 874u: goto L_0891FFD8;
    case 875u: goto L_0891FFF0;
    case 876u: goto L_0891FFF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        AOT_REGCACHE_SYNC_OUT(); return;
    }
    }
L_0891C000:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[8]);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_6 = (0u | 0u);
    aot_gpr_31 = (0x0891C018u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 163u, 0x089088F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891C018u) goto L_0891C018;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891C018:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    goto L_0891C01C;
L_0891C01C:
    { const bool branch_taken = ctx.gpr[18] == 0u;
      if (branch_taken) {
          goto L_0891C038;
      }
      goto L_0891C024;
    }
L_0891C024:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_gpr_4 | 8u);
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 | 4u);
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), aot_gpr_4);
    goto L_0891C038;
L_0891C038:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(464)));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-257));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(464), aot_gpr_4);
      if (branch_taken) {
          goto L_0891C0CC;
      }
      goto L_0891C04C;
    }
L_0891C04C:
    aot_gpr_4 = (18804u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1720)));
    aot_gpr_4 = (aot_gpr_4 | 9200u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_12) || std::isnan(aot_fpr_13)) && aot_fpr_12 == aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_0891C0B4;
      }
      goto L_0891C06C;
    }
L_0891C06C:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1720)));
    aot_fpr_13 = std::bit_cast<float>(0u);
    aot_gpr_31 = (0x0891C07Cu);
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(816));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 15u, 0x089F4168u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891C07Cu) goto L_0891C07C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891C07C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_0891C0CC;
      }
      goto L_0891C084;
    }
L_0891C084:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(456)));
    aot_gpr_4 = (aot_gpr_4 & 32u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0891C0CC;
      }
      goto L_0891C094;
    }
L_0891C094:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(456)));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-65));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(456), aot_gpr_4);
    aot_gpr_31 = (0x0891C0ACu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08909B60, 65u, 454u, 0x08909B60u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_16, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0065_entry, 65u, 454u, 0x08909B60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891C0ACu) goto L_0891C0AC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891C0AC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0891C0CC;
      }
      goto L_0891C0B4;
    }
L_0891C0B4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(456)));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-65));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(456), aot_gpr_4);
    aot_gpr_31 = (0x0891C0CCu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08909B60, 65u, 454u, 0x08909B60u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_16, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0065_entry, 65u, 454u, 0x08909B60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891C0CCu) goto L_0891C0CC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891C0CC:
    { std::uint32_t aot_run_words[5]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words);
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
L_0891C0E8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[7] & 255u);
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(2120)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    ctx.gpr[20] = (0u | 0u);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    ctx.gpr[17] = (aot_gpr_5 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), aot_gpr_31);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[18] = (aot_gpr_6 | 0u);
      if (branch_taken) {
          goto L_0891C140;
      }
      goto L_0891C128;
    }
L_0891C128:
    aot_gpr_31 = (0x0891C130u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 620u, 0x08906DE4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891C130u) goto L_0891C130;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891C130:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_0891C168;
      }
      goto L_0891C138;
    }
L_0891C138:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0891C148;
      }
      goto L_0891C140;
    }
L_0891C140:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0891C424;
      }
      goto L_0891C148;
    }
L_0891C148:
    { const bool branch_taken = ctx.gpr[19] == 0u;
      if (branch_taken) {
          goto L_0891C424;
      }
      goto L_0891C150;
    }
L_0891C150:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2228)));
    aot_gpr_5 = (0u | 57u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_5 = (0u | 58u);
      if (branch_taken) {
          goto L_0891C424;
      }
      goto L_0891C160;
    }
L_0891C160:
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_0891C424;
      }
      goto L_0891C168;
    }
L_0891C168:
    aot_gpr_31 = (0x0891C170u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08909B60, 65u, 454u, 0x08909B60u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_16, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0065_entry, 65u, 454u, 0x08909B60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891C170u) goto L_0891C170;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891C170:
    aot_gpr_31 = (0x0891C178u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 410u, 0x08909880u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891C178u) goto L_0891C178;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891C178:
    aot_gpr_31 = (0x0891C180u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0129_entry, 129u, 36u, 0x08A08730u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891C180u) goto L_0891C180;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891C180:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0891C18Cu);
    aot_gpr_5 = (0u | 45u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 240u, 0x08908D60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891C18Cu) goto L_0891C18C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891C18C:
    aot_gpr_4 = (0u | 173u);
    { const bool branch_taken = ctx.gpr[18] == aot_gpr_4;
    ctx.gpr[19] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0891C254;
      }
      goto L_0891C198;
    }
L_0891C198:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0891C1A8u);
    aot_gpr_6 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891C1A8u) goto L_0891C1A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891C1A8:
    aot_gpr_4 = (16640u << 16u);
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[20] != 0u;
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_4);
      if (branch_taken) {
          goto L_0891C1E0;
      }
      goto L_0891C1B8;
    }
L_0891C1B8:
    aot_gpr_4 = (0u | 30u);
    { const bool branch_taken = ctx.gpr[18] != aot_gpr_4;
      if (branch_taken) {
          goto L_0891C1E0;
      }
      goto L_0891C1C4;
    }
L_0891C1C4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0891C1D4u);
    aot_gpr_6 = (0u | 275u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891C1D4u) goto L_0891C1D4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891C1D4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_0891C1E0;
      }
      goto L_0891C1DC;
    }
L_0891C1DC:
    ctx.gpr[18] = (0u | 28u);
    goto L_0891C1E0;
L_0891C1E0:
    { const bool branch_taken = ctx.gpr[20] == 0u;
      if (branch_taken) {
          goto L_0891C210;
      }
      goto L_0891C1E8;
    }
L_0891C1E8:
    ctx.fpr[22] = std::bit_cast<float>(0u);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x0891C1F8u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0035_entry, 35u, 73u, 0x08890474u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891C1F8u) goto L_0891C1F8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891C1F8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(ctx.gpr[20] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_direct_store32(ctx.gpr[20] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_4 = (aot_gpr_4 | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[20] + static_cast<std::uint32_t>(8), aot_gpr_4);
      if (branch_taken) {
          goto L_0891C22C;
      }
      goto L_0891C210;
    }
L_0891C210:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_6 = (0u | 0u);
    aot_gpr_31 = (0x0891C228u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 163u, 0x089088F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891C228u) goto L_0891C228;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891C228:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    goto L_0891C22C;
L_0891C22C:
    aot_gpr_4 = (0u | 121u);
    { const bool branch_taken = ctx.gpr[18] != aot_gpr_4;
      if (branch_taken) {
          goto L_0891C294;
      }
      goto L_0891C238;
    }
L_0891C238:
    aot_gpr_5 = (16076u << 16u);
    aot_gpr_5 = (aot_gpr_5 | 52429u);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x0891C24Cu);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0035_entry, 35u, 73u, 0x08890474u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891C24Cu) goto L_0891C24C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891C24C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0891C294;
      }
      goto L_0891C254;
    }
L_0891C254:
    aot_gpr_31 = (0x0891C25Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890D44C, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891C25Cu) goto L_0891C25C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891C25C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_0891C294;
      }
      goto L_0891C264;
    }
L_0891C264:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0891C274u);
    aot_gpr_6 = (0u | 130u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891C274u) goto L_0891C274;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891C274:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[20] != 0u;
      if (branch_taken) {
          goto L_0891C294;
      }
      goto L_0891C280;
    }
L_0891C280:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0891C290u);
    aot_gpr_6 = (0u | 131u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891C290u) goto L_0891C290;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891C290:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    goto L_0891C294;
L_0891C294:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[19];
      if (branch_taken) {
          goto L_0891C2AC;
      }
      goto L_0891C29C;
    }
L_0891C29C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(464)));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(1732), ctx.gpr[19]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (aot_gpr_4 | 4096u);
      if (branch_taken) {
          goto L_0891C420;
      }
      goto L_0891C2AC;
    }
L_0891C2AC:
    aot_gpr_31 = (0x0891C2B4u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890D44C, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891C2B4u) goto L_0891C2B4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891C2B4:
    ctx.gpr[19] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(464)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[19] = (ctx.gpr[19] | 4096u);
      if (branch_taken) {
          goto L_0891C37C;
      }
      goto L_0891C2C4;
    }
L_0891C2C4:
    if (ctx.gpr[20] == 0u) {
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(76)));
        goto L_0891C380;
    }
    goto L_0891C2CC;
L_0891C2CC:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[20] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[8] = (17530u << 16u);
    ctx.gpr[7] = (0u | 130u);
    aot_fpr_13 = std::bit_cast<float>(ctx.gpr[8]);
    { const bool branch_taken = aot_gpr_5 == ctx.gpr[7];
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_0891C2F0;
      }
      goto L_0891C2E4;
    }
L_0891C2E4:
    ctx.gpr[7] = (0u | 131u);
    { const bool branch_taken = aot_gpr_5 != ctx.gpr[7];
      if (branch_taken) {
          goto L_0891C33C;
      }
      goto L_0891C2F0;
    }
L_0891C2F0:
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) >= 0;
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
      if (branch_taken) {
          goto L_0891C308;
      }
      goto L_0891C2FC;
    }
L_0891C2FC:
    aot_gpr_4 = (20352u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_14;
    goto L_0891C308;
L_0891C308:
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(32)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(40)));
    { const float fs = aot_fpr_14; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_gpr_4 = (17096u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(aot_gpr_4);
    { const float fs = ctx.fpr[15]; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_12 = aot_fpr_12 + aot_fpr_14;
    aot_fpr_12 = aot_fpr_12 - aot_fpr_13;
    aot_fpr_12 = aot_fpr_12 + ctx.fpr[16];
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(1732), aot_gpr_4);
      if (branch_taken) {
          goto L_0891C420;
      }
      goto L_0891C33C;
    }
L_0891C33C:
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) >= 0;
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
      if (branch_taken) {
          goto L_0891C354;
      }
      goto L_0891C348;
    }
L_0891C348:
    aot_gpr_4 = (20352u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_14;
    goto L_0891C354;
L_0891C354:
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(32)));
    aot_gpr_4 = (17402u << 16u);
    { const float fs = aot_fpr_14; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    aot_fpr_12 = aot_fpr_12 + ctx.fpr[15];
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(1732), aot_gpr_4);
      if (branch_taken) {
          goto L_0891C420;
      }
      goto L_0891C37C;
    }
L_0891C37C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(76)));
    goto L_0891C380;
L_0891C380:
    aot_gpr_6 = (16320u << 16u);
    aot_gpr_5 = (aot_gpr_5 & aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7764)));
    aot_gpr_5 = (aot_gpr_5 >> 22u);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_6 = (0u | 1000u);
    { const std::uint32_t dividend = aot_gpr_5; const std::uint32_t divisor = aot_gpr_6; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr_5 = (ctx.hi);
    { const bool branch_taken = ctx.gpr[20] == 0u;
      if (branch_taken) {
          goto L_0891C410;
      }
      goto L_0891C3A8;
    }
L_0891C3A8:
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[20] = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) >= 0;
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
      if (branch_taken) {
          goto L_0891C3C4;
      }
      goto L_0891C3B8;
    }
L_0891C3B8:
    aot_gpr_4 = (20352u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    goto L_0891C3C4;
L_0891C3C4:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32)));
    aot_fpr_14 = std::bit_cast<float>(ctx.gpr[17]);
    aot_gpr_4 = (17530u << 16u);
    aot_fpr_14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_14)));
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_13; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    aot_fpr_13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[16])));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_5) >= 0;
    aot_fpr_12 = aot_fpr_12 + aot_fpr_14;
      if (branch_taken) {
          goto L_0891C3FC;
      }
      goto L_0891C3F0;
    }
L_0891C3F0:
    aot_gpr_4 = (20352u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_13 = aot_fpr_13 + aot_fpr_14;
    goto L_0891C3FC;
L_0891C3FC:
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(1732), aot_gpr_4);
      if (branch_taken) {
          goto L_0891C420;
      }
      goto L_0891C410;
    }
L_0891C410:
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[17]);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1000));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(1732), aot_gpr_4);
    goto L_0891C420;
L_0891C420:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(464), ctx.gpr[19]);
    goto L_0891C424;
L_0891C424:
    { std::uint32_t aot_run_words[8]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      ctx.fpr[22] = std::bit_cast<float>(aot_run_words[1]);
      aot_gpr_16 = aot_run_words[2];
      ctx.gpr[17] = aot_run_words[3];
      ctx.gpr[18] = aot_run_words[4];
      ctx.gpr[19] = aot_run_words[5];
      ctx.gpr[20] = aot_run_words[6];
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
L_0891C44C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-80));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(2228)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(56), ctx.gpr[18]);
    ctx.gpr[18] = (0u | 46u);
    { const std::uint32_t aot_run_words[6]{std::bit_cast<std::uint32_t>(aot_fpr_20), std::bit_cast<std::uint32_t>(ctx.fpr[22]), std::bit_cast<std::uint32_t>(ctx.fpr[24]), std::bit_cast<std::uint32_t>(ctx.fpr[26]), aot_gpr_16, ctx.gpr[17]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_run_words); }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(60), ctx.gpr[19]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(64), aot_gpr_31);
    { const bool branch_taken = aot_gpr_5 != ctx.gpr[18];
    aot_gpr_16 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_0891C494;
      }
      goto L_0891C484;
    }
L_0891C484:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(460)));
    aot_gpr_4 = (aot_gpr_4 & 16384u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0891C9F4;
      }
      goto L_0891C494;
    }
L_0891C494:
    aot_gpr_31 = (0x0891C49Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 655u, 0x08906F34u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891C49Cu) goto L_0891C49C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891C49C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_0891C9F4;
      }
      goto L_0891C4A4;
    }
L_0891C4A4:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1252)));
    aot_gpr_4 = (16256u << 16u);
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_20)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    ctx.gpr[17] = (64u << 16u);
      if (branch_taken) {
          goto L_0891C4DC;
      }
      goto L_0891C4C0;
    }
L_0891C4C0:
    aot_gpr_4 = (48793u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 39322u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_31 = (0x0891C4D4u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0055_entry, 55u, 563u, 0x088E3DD8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891C4D4u) goto L_0891C4D4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891C4D4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_0891C4EC;
      }
      goto L_0891C4DC;
    }
L_0891C4DC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(456)));
    aot_gpr_4 = (aot_gpr_4 & ctx.gpr[17]);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0891C550;
      }
      goto L_0891C4EC;
    }
L_0891C4EC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(456)));
    aot_fpr_12 = std::bit_cast<float>(0u);
    aot_gpr_4 = (aot_gpr_4 & ctx.gpr[17]);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_0891C51C;
      }
      goto L_0891C500;
    }
L_0891C500:
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[7] = (16512u << 16u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[7]);
    aot_gpr_5 = (0u | 173u);
    aot_gpr_31 = (0x0891C51Cu);
    aot_gpr_6 = (0u | 0u);
    goto L_0891F338;
L_0891C51C:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0891C548;
      }
      goto L_0891C528;
    }
L_0891C528:
    aot_gpr_31 = (0x0891C530u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890D44C, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891C530u) goto L_0891C530;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891C530:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_0891C548;
      }
      goto L_0891C538;
    }
L_0891C538:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x0891C548u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 173u, 0x08ADC8D4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891C548u) goto L_0891C548;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891C548:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0891C9F4;
      }
      goto L_0891C550;
    }
L_0891C550:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(456)));
    aot_gpr_5 = (32u << 16u);
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[17] = (aot_gpr_16 + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_0891C5AC;
      }
      goto L_0891C564;
    }
L_0891C564:
    aot_gpr_31 = (0x0891C56Cu);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2256)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0162_entry, 162u, 580u, 0x08A8F0B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891C56Cu) goto L_0891C56C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891C56C:
    aot_gpr_31 = (0x0891C574u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B61B60, 215u, 341u, 0x08B61B60u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], ctx.gpr[3], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_29, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 341u, 0x08B61B60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891C574u) goto L_0891C574;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891C574:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-20012)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-20016)));
    aot_gpr_5 = (ctx.gpr[3] | 0u);
    aot_gpr_31 = (0x0891C588u);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0215_entry, 215u, 395u, 0x08B61F5Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891C588u) goto L_0891C588;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891C588:
    aot_gpr_5 = (ctx.gpr[3] | 0u);
    aot_gpr_31 = (0x0891C594u);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B627F0, 215u, 515u, 0x08B627F0u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], ctx.gpr[3], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[9], ctx.gpr[10], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 515u, 0x08B627F0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891C594u) goto L_0891C594;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891C594:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(456)));
    aot_gpr_5 = (65504u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(2256), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(456), aot_gpr_4);
    goto L_0891C5AC;
L_0891C5AC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2228)));
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[18];
      if (branch_taken) {
          goto L_0891C5CC;
      }
      goto L_0891C5B8;
    }
L_0891C5B8:
    aot_gpr_31 = (0x0891C5C0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0129_entry, 129u, 36u, 0x08A08730u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891C5C0u) goto L_0891C5C0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891C5C0:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0891C5CCu);
    aot_gpr_5 = (0u | 46u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 240u, 0x08908D60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891C5CCu) goto L_0891C5CC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891C5CC:
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
    aot_gpr_31 = (0x0891C5DCu);
    aot_gpr_4 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0198_entry, 198u, 717u, 0x08B1FB48u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891C5DCu) goto L_0891C5DC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891C5DC:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    if (aot_gpr_4 == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2116)));
        goto L_0891C608;
    }
    goto L_0891C5E8;
L_0891C5E8:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(852)));
    aot_gpr_6 = (0u | 6u);
    if (aot_gpr_5 == aot_gpr_6) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2116)));
        goto L_0891C608;
    }
    goto L_0891C5F8;
L_0891C5F8:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2120)));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_0891C6C0;
      }
      goto L_0891C604;
    }
L_0891C604:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2116)));
    goto L_0891C608;
L_0891C608:
    if (aot_gpr_4 == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(460)));
        goto L_0891C748;
    }
    goto L_0891C610;
L_0891C610:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2116)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(72)));
    aot_gpr_4 = (aot_gpr_4 & 14u);
    aot_gpr_4 = (aot_gpr_4 ^ 4u);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    if (aot_gpr_4 == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(460)));
        goto L_0891C748;
    }
    goto L_0891C630;
L_0891C630:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2116)));
    aot_gpr_5 = (0u | 6u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(852)));
    if (aot_gpr_4 == aot_gpr_5) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(460)));
        goto L_0891C748;
    }
    goto L_0891C644;
L_0891C644:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(76)));
    aot_gpr_5 = (16320u << 16u);
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7764)));
    aot_gpr_4 = (aot_gpr_4 >> 22u);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(5));
    aot_gpr_4 = (aot_gpr_4 & 7u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0891C6C0;
      }
      goto L_0891C66C;
    }
L_0891C66C:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(86))))));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2116)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    aot_gpr_4 = (aot_gpr_4 << 2u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_6 + static_cast<std::uint32_t>(86))))));
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    aot_gpr_5 = (aot_gpr_5 + ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(20)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (ctx.gpr[7] | 0u);
    ctx.gpr[8] = (2236u << 16u);
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(20)));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-20320));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    ctx.gpr[9] = (0u | 0u);
    aot_gpr_31 = (0x0891C6B8u);
    ctx.gpr[10] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 66u, 0x088B4738u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891C6B8u) goto L_0891C6B8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891C6B8:
    if (static_cast<std::int32_t>(ctx.gpr[2]) <= 0) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(460)));
        goto L_0891C748;
    }
    goto L_0891C6C0;
L_0891C6C0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(460)));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-16385));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(460), aot_gpr_4);
    aot_gpr_31 = (0x0891C6D8u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890D44C, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891C6D8u) goto L_0891C6D8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891C6D8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_0891C708;
      }
      goto L_0891C6E0;
    }
L_0891C6E0:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_6 = (0u | 43u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    aot_gpr_31 = (0x0891C700u);
    ctx.gpr[9] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0057_entry, 57u, 692u, 0x088EB674u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891C700u) goto L_0891C700;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891C700:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0891C740;
      }
      goto L_0891C708;
    }
L_0891C708:
    aot_gpr_31 = (0x0891C710u);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891C710u) goto L_0891C710;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891C710:
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[2] + static_cast<std::uint32_t>(154)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0891C740;
      }
      goto L_0891C71C;
    }
L_0891C71C:
    ctx.gpr[10] = (17530u << 16u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[10]);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_6 = (0u | 43u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    aot_gpr_31 = (0x0891C740u);
    ctx.gpr[9] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0057_entry, 57u, 692u, 0x088EB674u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891C740u) goto L_0891C740;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891C740:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0891C9F4;
      }
      goto L_0891C748;
    }
L_0891C748:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(464)));
    aot_gpr_4 = (aot_gpr_4 | 16384u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(460), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(2116), 0u);
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-2));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(468)));
    aot_gpr_4 = (aot_gpr_5 & aot_gpr_4);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1025));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(464), aot_gpr_4);
    aot_gpr_4 = (aot_gpr_6 & aot_gpr_5);
    aot_gpr_5 = (65528u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(468), aot_gpr_4);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(468), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    aot_gpr_5 = (17530u << 16u);
    ctx.gpr[18] = (2193u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(aot_gpr_5);
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-14252));
      if (branch_taken) {
          goto L_0891C7A8;
      }
      goto L_0891C79C;
    }
L_0891C79C:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(304))))));
    aot_gpr_4 = (aot_gpr_4 | 1u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(304), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_0891C7A8;
L_0891C7A8:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0891C7B8u);
    aot_gpr_6 = (0u | 5u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891C7B8u) goto L_0891C7B8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891C7B8:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
      if (branch_taken) {
          goto L_0891C81C;
      }
      goto L_0891C7C4;
    }
L_0891C7C4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0891C7D4u);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891C7D4u) goto L_0891C7D4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891C7D4:
    aot_gpr_4 = (16640u << 16u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
      if (branch_taken) {
          goto L_0891C7FC;
      }
      goto L_0891C7E0;
    }
L_0891C7E0:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(776)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0891C7F4u);
    ctx.gpr[7] = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 163u, 0x089088F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891C7F4u) goto L_0891C7F4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891C7F4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0891C810;
      }
      goto L_0891C7FC;
    }
L_0891C7FC:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(776)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0891C810u);
    ctx.gpr[7] = (0u | 6u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 163u, 0x089088F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891C810u) goto L_0891C810;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891C810:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_gpr_4 | 4u);
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), aot_gpr_4);
    goto L_0891C81C;
L_0891C81C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2236)));
    aot_gpr_5 = (0u | 28u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_0891C8A0;
      }
      goto L_0891C82C;
    }
L_0891C82C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(464)));
    aot_fpr_12 = std::bit_cast<float>(0u);
    aot_gpr_5 = (8u << 16u);
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(2264), std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_0891C870;
      }
      goto L_0891C844;
    }
L_0891C844:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1372)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0891C870;
      }
      goto L_0891C850;
    }
L_0891C850:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_6 = (0u | 0u);
    aot_gpr_31 = (0x0891C868u);
    ctx.gpr[7] = (0u | 132u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 163u, 0x089088F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891C868u) goto L_0891C868;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891C868:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_0891C88C;
      }
      goto L_0891C870;
    }
L_0891C870:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_6 = (0u | 0u);
    aot_gpr_31 = (0x0891C888u);
    ctx.gpr[7] = (0u | 132u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 163u, 0x089088F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891C888u) goto L_0891C888;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891C888:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    goto L_0891C88C;
L_0891C88C:
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x0891C898u);
    aot_gpr_6 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088905F0, 35u, 95u, 0x088905F0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0035_entry, 35u, 95u, 0x088905F0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891C898u) goto L_0891C898;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891C898:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0891C9F4;
      }
      goto L_0891C8A0;
    }
L_0891C8A0:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0891C8B0u);
    aot_gpr_6 = (0u | 121u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891C8B0u) goto L_0891C8B0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891C8B0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_0891C944;
      }
      goto L_0891C8B8;
    }
L_0891C8B8:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(16)));
    ctx.fpr[22] = std::bit_cast<float>(0u);
    aot_gpr_4 = (16329u << 16u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12) ^ 0x80000000u);
    aot_gpr_4 = (aot_gpr_4 | 4059u);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(20)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_12) || std::isnan(ctx.fpr[22])) && aot_fpr_12 == ctx.fpr[22])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    ctx.fpr[26] = std::bit_cast<float>(aot_gpr_4);
      if (branch_taken) {
          goto L_0891C8F8;
      }
      goto L_0891C8E0;
    }
L_0891C8E0:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_13) || std::isnan(ctx.fpr[22])) && aot_fpr_13 == ctx.fpr[22])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_0891C8F8;
      }
      goto L_0891C8F0;
    }
L_0891C8F0:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[26] = ctx.fpr[22] + ctx.fpr[26];
      if (branch_taken) {
          goto L_0891C904;
      }
      goto L_0891C8F8;
    }
L_0891C8F8:
    aot_gpr_31 = (0x0891C900u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891C900u) goto L_0891C900;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891C900:
    ctx.fpr[26] = ctx.fpr[0] + ctx.fpr[26];
    goto L_0891C904;
L_0891C904:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(2260), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2260)));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(2256), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2256)));
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_gpr_31 = (0x0891C930u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0022_entry, 22u, 923u, 0x0885FA28u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891C930u) goto L_0891C930;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891C930:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words);
      aot_fpr_12 = std::bit_cast<float>(aot_run_words[0]);
      aot_fpr_13 = std::bit_cast<float>(aot_run_words[1]);
      aot_fpr_14 = std::bit_cast<float>(aot_run_words[2]);
    }
    aot_gpr_31 = (0x0891C944u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 4u, 0x08860094u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891C944u) goto L_0891C944;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891C944:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(236)));
    aot_gpr_4 = (aot_gpr_4 & 256u);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0891C998;
      }
      goto L_0891C95C;
    }
L_0891C95C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_6 = (0u | 60u);
    aot_gpr_31 = (0x0891C974u);
    ctx.gpr[7] = (0u | 262u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 163u, 0x089088F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891C974u) goto L_0891C974;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891C974:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_gpr_6 = (0u + static_cast<std::uint32_t>(-3));
    aot_gpr_5 = (aot_gpr_5 & aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 | 8u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), aot_gpr_5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(aot_fpr_20));
      if (branch_taken) {
          goto L_0891C9E8;
      }
      goto L_0891C998;
    }
L_0891C998:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    aot_gpr_31 = (0x0891C9A4u);
    aot_gpr_5 = (0u | 4096u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0026_entry, 26u, 211u, 0x0886D4F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891C9A4u) goto L_0891C9A4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891C9A4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_0891C9CC;
      }
      goto L_0891C9AC;
    }
L_0891C9AC:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_6 = (0u | 0u);
    aot_gpr_31 = (0x0891C9C4u);
    ctx.gpr[7] = (0u | 135u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 163u, 0x089088F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891C9C4u) goto L_0891C9C4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891C9C4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_0891C9E8;
      }
      goto L_0891C9CC;
    }
L_0891C9CC:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_6 = (0u | 0u);
    aot_gpr_31 = (0x0891C9E4u);
    ctx.gpr[7] = (0u | 132u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 163u, 0x089088F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891C9E4u) goto L_0891C9E4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891C9E4:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    goto L_0891C9E8;
L_0891C9E8:
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x0891C9F4u);
    aot_gpr_6 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088905F0, 35u, 95u, 0x088905F0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0035_entry, 35u, 95u, 0x088905F0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891C9F4u) goto L_0891C9F4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891C9F4:
    { std::uint32_t aot_run_words[9]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      ctx.fpr[22] = std::bit_cast<float>(aot_run_words[1]);
      ctx.fpr[24] = std::bit_cast<float>(aot_run_words[2]);
      ctx.fpr[26] = std::bit_cast<float>(aot_run_words[3]);
      aot_gpr_16 = aot_run_words[4];
      ctx.gpr[17] = aot_run_words[5];
      ctx.gpr[18] = aot_run_words[6];
      ctx.gpr[19] = aot_run_words[7];
      aot_gpr_31 = aot_run_words[8];
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
L_0891CA20:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-160));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(128), ctx.gpr[19]);
    ctx.gpr[19] = (aot_gpr_5 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_fpr_20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (16128u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(116), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(124), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(132), ctx.gpr[20]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(136), ctx.gpr[21]);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    ctx.gpr[20] = (ctx.gpr[9] | 0u);
    ctx.gpr[18] = (ctx.gpr[8] | 0u);
    ctx.gpr[21] = (ctx.gpr[7] | 0u);
    aot_gpr_16 = (aot_gpr_6 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(120), ctx.gpr[17]);
    { const std::uint32_t aot_run_words[3]{ctx.gpr[22], ctx.gpr[23], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(140), aot_run_words); }
    aot_gpr_31 = (0x0891CA74u);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 298u, 0x089110BCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891CA74u) goto L_0891CA74;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891CA74:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2228)));
    aot_gpr_5 = (0u | 11u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_0891CBD8;
      }
      goto L_0891CA84;
    }
L_0891CA84:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    ctx.gpr[22] = (0u | 0u);
      if (branch_taken) {
          goto L_0891CAA4;
      }
      goto L_0891CA8C;
    }
L_0891CA8C:
    aot_gpr_31 = (0x0891CA94u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 81u, 0x089104F0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891CA94u) goto L_0891CA94;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891CA94:
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[2];
      if (branch_taken) {
          goto L_0891CAA4;
      }
      goto L_0891CA9C;
    }
L_0891CA9C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (0u | 1u);
      if (branch_taken) {
          goto L_0891CBC8;
      }
      goto L_0891CAA4;
    }
L_0891CAA4:
    { const bool branch_taken = ctx.gpr[21] != 0u;
      if (branch_taken) {
          goto L_0891CAC4;
      }
      goto L_0891CAAC;
    }
L_0891CAAC:
    aot_gpr_31 = (0x0891CAB4u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 81u, 0x089104F0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891CAB4u) goto L_0891CAB4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891CAB4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_0891CAC4;
      }
      goto L_0891CABC;
    }
L_0891CABC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (0u | 1u);
      if (branch_taken) {
          goto L_0891CBC8;
      }
      goto L_0891CAC4;
    }
L_0891CAC4:
    { const bool branch_taken = ctx.gpr[18] == 0u;
      if (branch_taken) {
          goto L_0891CAE0;
      }
      goto L_0891CACC;
    }
L_0891CACC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1136)));
    { const bool branch_taken = ctx.gpr[18] == aot_gpr_4;
      if (branch_taken) {
          goto L_0891CAE0;
      }
      goto L_0891CAD8;
    }
L_0891CAD8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (0u | 1u);
      if (branch_taken) {
          goto L_0891CBC8;
      }
      goto L_0891CAE0;
    }
L_0891CAE0:
    { const bool branch_taken = ctx.gpr[18] != 0u;
      if (branch_taken) {
          goto L_0891CAFC;
      }
      goto L_0891CAE8;
    }
L_0891CAE8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1136)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0891CAFC;
      }
      goto L_0891CAF4;
    }
L_0891CAF4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (0u | 1u);
      if (branch_taken) {
          goto L_0891CBC8;
      }
      goto L_0891CAFC;
    }
L_0891CAFC:
    { const bool branch_taken = ctx.gpr[18] == 0u;
      if (branch_taken) {
          goto L_0891CB6C;
      }
      goto L_0891CB04;
    }
L_0891CB04:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2228)));
    aot_gpr_5 = (0u | 6u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_0891CB6C;
      }
      goto L_0891CB14;
    }
L_0891CB14:
    ctx.gpr[23] = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x0891CB24u);
    aot_gpr_5 = (ctx.gpr[23] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 29u, 0x089101CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891CB24u) goto L_0891CB24;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891CB24:
    aot_gpr_4 = (ctx.gpr[18] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
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
    aot_gpr_4 = (ctx.vfpu_scalar_bits_ct<28u>());
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (16256u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_0891CB64;
      }
      goto L_0891CB60;
    }
L_0891CB60:
    ctx.gpr[22] = (0u | 1u);
    goto L_0891CB64;
L_0891CB64:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0891CBC8;
      }
      goto L_0891CB6C;
    }
L_0891CB6C:
    aot_gpr_4 = (ctx.gpr[21] | ctx.gpr[18]);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0891CBC8;
      }
      goto L_0891CB78;
    }
L_0891CB78:
    ctx.gpr[23] = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x0891CB88u);
    aot_gpr_5 = (ctx.gpr[23] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 29u, 0x089101CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891CB88u) goto L_0891CB88;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891CB88:
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
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
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (16256u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_0891CBC8;
      }
      goto L_0891CBC4;
    }
L_0891CBC4:
    ctx.gpr[22] = (0u | 1u);
    goto L_0891CBC8;
L_0891CBC8:
    { const bool branch_taken = ctx.gpr[22] != 0u;
      if (branch_taken) {
          goto L_0891CBD8;
      }
      goto L_0891CBD0;
    }
L_0891CBD0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0891CD9C;
      }
      goto L_0891CBD8;
    }
L_0891CBD8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(460)));
    aot_gpr_4 = (aot_gpr_4 & 32u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0891CBF0;
      }
      goto L_0891CBE8;
    }
L_0891CBE8:
    aot_gpr_31 = (0x0891CBF0u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 829u, 0x0890B488u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891CBF0u) goto L_0891CBF0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891CBF0:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x0891CC00u);
    aot_gpr_5 = (aot_gpr_5 + ctx.gpr[20]);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0066_entry, 66u, 885u, 0x0890FF54u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891CC00u) goto L_0891CC00;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891CC00:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x0891CC0Cu);
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 75u, 0x08910498u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891CC0Cu) goto L_0891CC0C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891CC0C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1136)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0891CC30;
      }
      goto L_0891CC18;
    }
L_0891CC18:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1136)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0891CC30;
      }
      goto L_0891CC24;
    }
L_0891CC24:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1136)));
    aot_gpr_31 = (0x0891CC30u);
    aot_gpr_5 = (ctx.gpr[17] + static_cast<std::uint32_t>(1136));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08A93004, 163u, 430u, 0x08A93004u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0163_entry, 163u, 430u, 0x08A93004u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891CC30u) goto L_0891CC30;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891CC30:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1136), ctx.gpr[18]);
      if (branch_taken) {
          goto L_0891CC50;
      }
      goto L_0891CC38;
    }
L_0891CC38:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1136)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0891CC50;
      }
      goto L_0891CC44;
    }
L_0891CC44:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1136)));
    aot_gpr_31 = (0x0891CC50u);
    aot_gpr_5 = (ctx.gpr[17] + static_cast<std::uint32_t>(1136));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08A92F78, 163u, 419u, 0x08A92F78u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0163_entry, 163u, 419u, 0x08A92F78u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891CC50u) goto L_0891CC50;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891CC50:
    { const bool branch_taken = ctx.gpr[18] == 0u;
      if (branch_taken) {
          goto L_0891CC74;
      }
      goto L_0891CC58;
    }
L_0891CC58:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(72)));
    aot_gpr_5 = (0u | 6u);
    aot_gpr_4 = (aot_gpr_4 & 14u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_0891CC74;
      }
      goto L_0891CC6C;
    }
L_0891CC6C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_0891CC74;
      }
      goto L_0891CC74;
    }
L_0891CC74:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x0891CC80u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 142u, 0x08910850u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891CC80u) goto L_0891CC80;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891CC80:
    { const bool branch_taken = ctx.gpr[18] == 0u;
      if (branch_taken) {
          goto L_0891CCB4;
      }
      goto L_0891CC88;
    }
L_0891CC88:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2228)));
    aot_gpr_5 = (0u | 6u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_0891CCB4;
      }
      goto L_0891CC98;
    }
L_0891CC98:
    ctx.gpr[18] = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x0891CCA8u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 10u, 0x08910074u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891CCA8u) goto L_0891CCA8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891CCA8:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x0891CCB4u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 142u, 0x08910850u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891CCB4u) goto L_0891CCB4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891CCB4:
    aot_fpr_13 = std::bit_cast<float>(0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_20 <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
      if (branch_taken) {
          goto L_0891CCD0;
      }
      goto L_0891CCC8;
    }
L_0891CCC8:
    aot_gpr_4 = (16800u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    goto L_0891CCD0;
L_0891CCD0:
    aot_gpr_31 = (0x0891CCD8u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 125u, 0x0891077Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891CCD8u) goto L_0891CCD8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891CCD8:
    aot_gpr_5 = (0u | 4u);
    { const bool branch_taken = aot_gpr_16 == aot_gpr_5;
    aot_gpr_4 = (0u | 2u);
      if (branch_taken) {
          goto L_0891CCF0;
      }
      goto L_0891CCE4;
    }
L_0891CCE4:
    aot_gpr_5 = (0u | 2u);
    { const bool branch_taken = aot_gpr_16 != aot_gpr_5;
      if (branch_taken) {
          goto L_0891CCF4;
      }
      goto L_0891CCF0;
    }
L_0891CCF0:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_0891CCF4;
L_0891CCF4:
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1248), aot_gpr_4);
    aot_gpr_31 = (0x0891CD00u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 81u, 0x089104F0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891CD00u) goto L_0891CD00;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891CD00:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_0891CD20;
      }
      goto L_0891CD08;
    }
L_0891CD08:
    aot_gpr_31 = (0x0891CD10u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 648u, 0x08912938u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891CD10u) goto L_0891CD10;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891CD10:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_0891CD78;
      }
      goto L_0891CD18;
    }
L_0891CD18:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0891CD30;
      }
      goto L_0891CD20;
    }
L_0891CD20:
    aot_gpr_31 = (0x0891CD28u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    goto L_0891CDCC;
L_0891CD28:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0891CD9C;
      }
      goto L_0891CD30;
    }
L_0891CD30:
    aot_gpr_31 = (0x0891CD38u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 81u, 0x089104F0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891CD38u) goto L_0891CD38;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891CD38:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(72)));
    aot_gpr_4 = (aot_gpr_4 & 14u);
    aot_gpr_4 = (aot_gpr_4 ^ 2u);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0891CD78;
      }
      goto L_0891CD54;
    }
L_0891CD54:
    aot_gpr_31 = (0x0891CD5Cu);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 81u, 0x089104F0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891CD5Cu) goto L_0891CD5C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891CD5C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(72)));
    aot_gpr_4 = (aot_gpr_4 & 14u);
    aot_gpr_4 = (aot_gpr_4 ^ 10u);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0891CD98;
      }
      goto L_0891CD78;
    }
L_0891CD78:
    aot_gpr_31 = (0x0891CD80u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 639u, 0x089128ACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891CD80u) goto L_0891CD80;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891CD80:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_0891CD98;
      }
      goto L_0891CD88;
    }
L_0891CD88:
    aot_gpr_31 = (0x0891CD90u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    goto L_0891D2C4;
L_0891CD90:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0891CD9C;
      }
      goto L_0891CD98;
    }
L_0891CD98:
    ctx.gpr[2] = (0u | 1u);
    goto L_0891CD9C;
L_0891CD9C:
    { std::uint32_t aot_run_words[10]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(112), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      aot_gpr_16 = aot_run_words[1];
      ctx.gpr[17] = aot_run_words[2];
      ctx.gpr[18] = aot_run_words[3];
      ctx.gpr[19] = aot_run_words[4];
      ctx.gpr[20] = aot_run_words[5];
      ctx.gpr[21] = aot_run_words[6];
      ctx.gpr[22] = aot_run_words[7];
      ctx.gpr[23] = aot_run_words[8];
      aot_gpr_31 = aot_run_words[9];
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
L_0891CDCC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-384));
    { const std::uint32_t aot_run_words[12]{std::bit_cast<std::uint32_t>(aot_fpr_20), std::bit_cast<std::uint32_t>(ctx.fpr[22]), aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], ctx.gpr[23], ctx.gpr[30], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(336), aot_run_words); }
    aot_gpr_31 = (0x0891CE08u);
    ctx.gpr[30] = (aot_gpr_4 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 829u, 0x0890B488u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891CE08u) goto L_0891CE08;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891CE08:
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(96), static_cast<std::uint16_t>(0u));
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(4199)));
    ctx.gpr[17] = (ctx.gpr[30] + static_cast<std::uint32_t>(48));
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[19] = (0u | 1u);
      if (branch_taken) {
          goto L_0891CE30;
      }
      goto L_0891CE1C;
    }
L_0891CE1C:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(96));
    ctx.gpr[18] = (aot_gpr_29 + static_cast<std::uint32_t>(100));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(328), aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_16 = (0u | 1u);
      if (branch_taken) {
          goto L_0891CE40;
      }
      goto L_0891CE30;
    }
L_0891CE30:
    aot_gpr_4 = (ctx.gpr[30] + static_cast<std::uint32_t>(904));
    ctx.gpr[18] = (ctx.gpr[30] + static_cast<std::uint32_t>(908));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(328), aot_gpr_4);
    aot_gpr_16 = (0u | 8u);
    goto L_0891CE40;
L_0891CE40:
    ctx.gpr[20] = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    aot_gpr_4 = (ctx.gpr[30] | 0u);
    aot_gpr_31 = (0x0891CE50u);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 29u, 0x089101CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891CE50u) goto L_0891CE50;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891CE50:
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
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
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_31 = (0x0891CE7Cu);
    aot_gpr_4 = (ctx.gpr[30] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 129u, 0x089107C4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891CE7Cu) goto L_0891CE7C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891CE7C:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_gpr_31 = (0x0891CE88u);
    aot_gpr_4 = (ctx.gpr[30] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 129u, 0x089107C4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891CE88u) goto L_0891CE88;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891CE88:
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_20 < aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_0891CF44;
      }
      goto L_0891CE9C;
    }
L_0891CE9C:
    ctx.gpr[20] = (aot_gpr_29 + static_cast<std::uint32_t>(112));
    aot_gpr_4 = (ctx.gpr[30] | 0u);
    aot_gpr_31 = (0x0891CEACu);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 29u, 0x089101CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891CEACu) goto L_0891CEAC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891CEAC:
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x0891CEBCu);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0066_entry, 66u, 830u, 0x0890FAF8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891CEBCu) goto L_0891CEBC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891CEBC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_0891CF44;
      }
      goto L_0891CEC4;
    }
L_0891CEC4:
    aot_gpr_31 = (0x0891CECCu);
    aot_gpr_4 = (ctx.gpr[30] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0129_entry, 129u, 78u, 0x08A08AE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891CECCu) goto L_0891CECC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891CECC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(2196)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0891CF30;
      }
      goto L_0891CED8;
    }
L_0891CED8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(1248)));
    aot_gpr_5 = (0u | 4u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_0891CF10;
      }
      goto L_0891CEE8;
    }
L_0891CEE8:
    aot_gpr_16 = (aot_gpr_29 + static_cast<std::uint32_t>(128));
    aot_gpr_4 = (ctx.gpr[30] | 0u);
    aot_gpr_31 = (0x0891CEF8u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 29u, 0x089101CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891CEF8u) goto L_0891CEF8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891CEF8:
    aot_gpr_4 = (ctx.gpr[30] | 0u);
    aot_gpr_5 = (0u | 25u);
    aot_gpr_31 = (0x0891CF08u);
    aot_gpr_6 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0178_entry, 178u, 661u, 0x08ACDF58u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891CF08u) goto L_0891CF08;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891CF08:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0891CF30;
      }
      goto L_0891CF10;
    }
L_0891CF10:
    aot_gpr_16 = (aot_gpr_29 + static_cast<std::uint32_t>(144));
    aot_gpr_4 = (ctx.gpr[30] | 0u);
    aot_gpr_31 = (0x0891CF20u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 29u, 0x089101CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891CF20u) goto L_0891CF20;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891CF20:
    aot_gpr_4 = (ctx.gpr[30] | 0u);
    aot_gpr_5 = (0u | 24u);
    aot_gpr_31 = (0x0891CF30u);
    aot_gpr_6 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0178_entry, 178u, 661u, 0x08ACDF58u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891CF30u) goto L_0891CF30;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891CF30:
    aot_gpr_4 = (ctx.gpr[30] | 0u);
    aot_gpr_31 = (0x0891CF3Cu);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 240u, 0x08908D60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891CF3Cu) goto L_0891CF3C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891CF3C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_0891D28C;
      }
      goto L_0891CF44;
    }
L_0891CF44:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(4199)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0891D0B4;
      }
      goto L_0891CF50;
    }
L_0891CF50:
    ctx.gpr[20] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[17] = (aot_gpr_29 + static_cast<std::uint32_t>(160));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    ctx.gpr[21] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[22] = (aot_gpr_29 + static_cast<std::uint32_t>(176));
    aot_gpr_4 = (ctx.gpr[30] | 0u);
    aot_gpr_31 = (0x0891CF74u);
    aot_gpr_5 = (ctx.gpr[22] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 29u, 0x089101CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891CF74u) goto L_0891CF74;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891CF74:
    ctx.gpr[11] = (aot_gpr_16 << 16u);
    ctx.gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[11]) >> 16u));
    aot_gpr_4 = (18804u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 9214u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(2276)));
    aot_gpr_4 = (aot_gpr_4 ^ 2u);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[2] = (aot_gpr_4 & 255u);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_5 = (0u | 1u);
    aot_gpr_6 = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(328)));
    ctx.gpr[8] = (ctx.gpr[22] | 0u);
    ctx.gpr[9] = (ctx.gpr[18] | 0u);
    ctx.gpr[10] = (ctx.gpr[17] | 0u);
    { const std::uint32_t aot_run_words[3]{0u, 0u, ctx.gpr[21]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_gpr_31 = (0x0891CFCCu);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0092_entry, 92u, 607u, 0x08976C80u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891CFCCu) goto L_0891CFCC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891CFCC:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0891D058;
      }
      goto L_0891CFD8;
    }
L_0891CFD8:
    aot_gpr_31 = (0x0891CFE0u);
    aot_gpr_4 = (ctx.gpr[30] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0129_entry, 129u, 78u, 0x08A08AE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891CFE0u) goto L_0891CFE0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891CFE0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(2196)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0891D044;
      }
      goto L_0891CFEC;
    }
L_0891CFEC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(1248)));
    aot_gpr_5 = (0u | 4u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_0891D024;
      }
      goto L_0891CFFC;
    }
L_0891CFFC:
    aot_gpr_16 = (aot_gpr_29 + static_cast<std::uint32_t>(192));
    aot_gpr_4 = (ctx.gpr[30] | 0u);
    aot_gpr_31 = (0x0891D00Cu);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 29u, 0x089101CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891D00Cu) goto L_0891D00C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891D00C:
    aot_gpr_4 = (ctx.gpr[30] | 0u);
    aot_gpr_5 = (0u | 25u);
    aot_gpr_31 = (0x0891D01Cu);
    aot_gpr_6 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0178_entry, 178u, 661u, 0x08ACDF58u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891D01Cu) goto L_0891D01C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891D01C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0891D044;
      }
      goto L_0891D024;
    }
L_0891D024:
    aot_gpr_16 = (aot_gpr_29 + static_cast<std::uint32_t>(208));
    aot_gpr_4 = (ctx.gpr[30] | 0u);
    aot_gpr_31 = (0x0891D034u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 29u, 0x089101CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891D034u) goto L_0891D034;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891D034:
    aot_gpr_4 = (ctx.gpr[30] | 0u);
    aot_gpr_5 = (0u | 24u);
    aot_gpr_31 = (0x0891D044u);
    aot_gpr_6 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0178_entry, 178u, 661u, 0x08ACDF58u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891D044u) goto L_0891D044;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891D044:
    aot_gpr_4 = (ctx.gpr[30] | 0u);
    aot_gpr_31 = (0x0891D050u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 240u, 0x08908D60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891D050u) goto L_0891D050;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891D050:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_0891D28C;
      }
      goto L_0891D058;
    }
L_0891D058:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(328)));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) <= 0;
      if (branch_taken) {
          goto L_0891D0B4;
      }
      goto L_0891D068;
    }
L_0891D068:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(1024)));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_0891D0B4;
      }
      goto L_0891D078;
    }
L_0891D078:
    aot_gpr_4 = (0u | 0u);
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(-1));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(aot_gpr_16) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_5 = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_0891D0A4;
      }
      goto L_0891D08C;
    }
L_0891D08C:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(aot_gpr_16) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 != 0u;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0891D08C;
      }
      goto L_0891D0A4;
    }
L_0891D0A4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(328)));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_5));
    goto L_0891D0B4;
L_0891D0B4:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(332), ctx.gpr[18]);
    aot_gpr_31 = (0x0891D0C0u);
    aot_gpr_4 = (ctx.gpr[30] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 639u, 0x089128ACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891D0C0u) goto L_0891D0C0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891D0C0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_0891D1D0;
      }
      goto L_0891D0C8;
    }
L_0891D0C8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(328)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(332), ctx.gpr[18]);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    ctx.gpr[19] = (0u | 0u);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[22] = (aot_gpr_29 + static_cast<std::uint32_t>(224));
      if (branch_taken) {
          goto L_0891D1D0;
      }
      goto L_0891D0E4;
    }
L_0891D0E4:
    ctx.gpr[21] = (aot_gpr_29 + static_cast<std::uint32_t>(240));
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(332)));
    ctx.gpr[20] = (aot_gpr_29 + static_cast<std::uint32_t>(256));
    ctx.gpr[23] = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    goto L_0891D0F4;
L_0891D0F4:
    ctx.gpr[10] = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
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
      const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    ctx.gpr[17] = (ctx.gpr[22] | 0u);
    aot_gpr_4 = (ctx.gpr[30] | 0u);
    aot_gpr_31 = (0x0891D144u);
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 29u, 0x089101CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891D144u) goto L_0891D144;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891D144:
    aot_gpr_16 = (ctx.gpr[21] | 0u);
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    aot_gpr_4 = (ctx.vfpu_scalar_bits_ct<28u>());
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_31 = (0x0891D170u);
    aot_gpr_4 = (ctx.gpr[30] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 129u, 0x089107C4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891D170u) goto L_0891D170;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891D170:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_gpr_31 = (0x0891D17Cu);
    aot_gpr_4 = (ctx.gpr[30] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 129u, 0x089107C4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891D17Cu) goto L_0891D17C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891D17C:
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_20 < aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_0891D1B8;
      }
      goto L_0891D190;
    }
L_0891D190:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0891D1A0u);
    aot_gpr_6 = (ctx.gpr[23] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0066_entry, 66u, 830u, 0x0890FAF8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891D1A0u) goto L_0891D1A0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891D1A0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_0891D1B8;
      }
      goto L_0891D1A8;
    }
L_0891D1A8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(328)));
    aot_gpr_5 = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_5));
      if (branch_taken) {
          goto L_0891D1D0;
      }
      goto L_0891D1B8;
    }
L_0891D1B8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(328)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0891D0F4;
      }
      goto L_0891D1D0;
    }
L_0891D1D0:
    aot_mem.aot_direct_store16(ctx.gpr[30] + static_cast<std::uint32_t>(906), static_cast<std::uint16_t>(0u));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(1024)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(332)));
      if (branch_taken) {
          goto L_0891D228;
      }
      goto L_0891D1E0;
    }
L_0891D1E0:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(328)));
    aot_gpr_4 = (0u | 0u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_5 = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_0891D228;
      }
      goto L_0891D1F8;
    }
L_0891D1F8:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(1024)));
    { const bool branch_taken = aot_gpr_6 != ctx.gpr[7];
      if (branch_taken) {
          goto L_0891D210;
      }
      goto L_0891D208;
    }
L_0891D208:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store16(ctx.gpr[30] + static_cast<std::uint32_t>(906), static_cast<std::uint16_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_0891D228;
      }
      goto L_0891D210;
    }
L_0891D210:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(328)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_6 + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(aot_gpr_6) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 != 0u;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0891D1F8;
      }
      goto L_0891D228;
    }
L_0891D228:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[30] + static_cast<std::uint32_t>(906))))));
    aot_gpr_16 = (aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(2232)));
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (ctx.gpr[18] + aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (0u | 0u);
    aot_mem.aot_direct_store32(ctx.gpr[30] + static_cast<std::uint32_t>(1024), aot_gpr_4);
    aot_gpr_31 = (0x0891D24Cu);
    aot_gpr_4 = (ctx.gpr[30] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08908E78, 65u, 261u, 0x08908E78u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0065_entry, 65u, 261u, 0x08908E78u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891D24Cu) goto L_0891D24C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891D24C:
    aot_gpr_31 = (0x0891D254u);
    aot_gpr_4 = (ctx.gpr[30] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0129_entry, 129u, 36u, 0x08A08730u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891D254u) goto L_0891D254;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891D254:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(2232)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0891D26C;
      }
      goto L_0891D260;
    }
L_0891D260:
    aot_gpr_4 = (ctx.gpr[30] | 0u);
    aot_gpr_31 = (0x0891D26Cu);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08908E78, 65u, 261u, 0x08908E78u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0065_entry, 65u, 261u, 0x08908E78u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891D26Cu) goto L_0891D26C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891D26C:
    aot_gpr_16 = (0u | 1u);
    aot_gpr_4 = (ctx.gpr[30] | 0u);
    aot_gpr_31 = (0x0891D27Cu);
    aot_gpr_5 = (0u | 11u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 240u, 0x08908D60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891D27Cu) goto L_0891D27C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891D27C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(1248)));
    aot_gpr_31 = (0x0891D288u);
    aot_gpr_4 = (ctx.gpr[30] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890BE50, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0065_entry, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891D288u) goto L_0891D288;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891D288:
    ctx.gpr[2] = (aot_gpr_16 | 0u);
    goto L_0891D28C;
L_0891D28C:
    { std::uint32_t aot_run_words[12]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(336), aot_run_words);
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
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(384));
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
L_0891D2C4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-2032));
    { const std::uint32_t aot_run_words[14]{std::bit_cast<std::uint32_t>(aot_fpr_20), std::bit_cast<std::uint32_t>(ctx.fpr[22]), std::bit_cast<std::uint32_t>(ctx.fpr[24]), std::bit_cast<std::uint32_t>(ctx.fpr[26]), aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], ctx.gpr[23], ctx.gpr[30], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(1964), aot_run_words); }
    ctx.gpr[20] = (aot_gpr_4 | 0u);
    aot_gpr_4 = (48819u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 13107u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_20 = std::bit_cast<float>(0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x0891D328u);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 81u, 0x089104F0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891D328u) goto L_0891D328;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891D328:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[2] + static_cast<std::uint32_t>(86))))));
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(20)));
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(16));
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
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (16051u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 13107u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_12), std::bit_cast<std::uint32_t>(aot_fpr_12), std::bit_cast<std::uint32_t>(aot_fpr_20)};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(48), aot_run_words); }
    aot_gpr_31 = (0x0891D37Cu);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 81u, 0x089104F0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891D37Cu) goto L_0891D37C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891D37C:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[2] + static_cast<std::uint32_t>(86))))));
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(20)));
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(32));
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
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (ctx.gpr[20] + static_cast<std::uint32_t>(48));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(64)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1936), aot_gpr_4);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(68)));
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_12), std::bit_cast<std::uint32_t>(aot_fpr_13), std::bit_cast<std::uint32_t>(aot_fpr_20)};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(96), aot_run_words); }
    aot_gpr_16 = (aot_gpr_29 + static_cast<std::uint32_t>(96));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(80)));
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_14), std::bit_cast<std::uint32_t>(aot_fpr_13), std::bit_cast<std::uint32_t>(aot_fpr_20)};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(112), aot_run_words); }
    ctx.gpr[17] = (aot_gpr_29 + static_cast<std::uint32_t>(112));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(84)));
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_14), std::bit_cast<std::uint32_t>(aot_fpr_13), std::bit_cast<std::uint32_t>(aot_fpr_20)};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(128), aot_run_words); }
    ctx.gpr[18] = (aot_gpr_29 + static_cast<std::uint32_t>(128));
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_12), std::bit_cast<std::uint32_t>(aot_fpr_13), std::bit_cast<std::uint32_t>(aot_fpr_20)};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(144), aot_run_words); }
    ctx.gpr[19] = (aot_gpr_29 + static_cast<std::uint32_t>(144));
    aot_gpr_31 = (0x0891D410u);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 81u, 0x089104F0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891D410u) goto L_0891D410;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891D410:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(72)));
    aot_gpr_4 = (aot_gpr_4 & 14u);
    aot_gpr_4 = (aot_gpr_4 ^ 4u);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    ctx.gpr[23] = (aot_gpr_29 + static_cast<std::uint32_t>(320));
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[30] = (aot_gpr_29 + static_cast<std::uint32_t>(336));
      if (branch_taken) {
          goto L_0891D47C;
      }
      goto L_0891D430;
    }
L_0891D430:
    aot_gpr_31 = (0x0891D438u);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 81u, 0x089104F0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891D438u) goto L_0891D438;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891D438:
    aot_gpr_31 = (0x0891D440u);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0191_entry, 191u, 229u, 0x08B00D78u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891D440u) goto L_0891D440;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891D440:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_0891D47C;
      }
      goto L_0891D448;
    }
L_0891D448:
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(576));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const std::uint32_t vfpu_address = aot_gpr_16 + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = aot_gpr_16 + static_cast<std::uint32_t>(0);
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
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    goto L_0891D47C;
L_0891D47C:
    aot_gpr_31 = (0x0891D484u);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 81u, 0x089104F0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891D484u) goto L_0891D484;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891D484:
    aot_gpr_5 = (aot_gpr_29 | 0u);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[7] = (aot_gpr_29 + static_cast<std::uint32_t>(592));
    ctx.gpr[8] = (aot_gpr_5 + static_cast<std::uint32_t>(160));
    aot_gpr_6 = (aot_gpr_5 + static_cast<std::uint32_t>(96));
    ctx.gpr[10] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1936)));
    goto L_0891D4A0;
L_0891D4A0:
    { const std::uint32_t vfpu_address = aot_gpr_6 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(16);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(32);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(48);
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
      const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[10] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(168), std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(16));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(16));
    ctx.gpr[11] = (static_cast<std::int32_t>(ctx.gpr[9]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[11] != 0u;
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_0891D4A0;
      }
      goto L_0891D4E8;
    }
L_0891D4E8:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(208));
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    ctx.gpr[10] = (0u | 0u);
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(624));
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(608));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(616), std::bit_cast<std::uint32_t>(aot_fpr_20));
    ctx.gpr[9] = (aot_gpr_29 + static_cast<std::uint32_t>(160));
    ctx.gpr[8] = (aot_gpr_29 + static_cast<std::uint32_t>(224));
    ctx.gpr[7] = (aot_gpr_29 | 0u);
    goto L_0891D514;
L_0891D514:
    { const std::uint32_t vfpu_address = ctx.gpr[9] + static_cast<std::uint32_t>(0);
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
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; vfpu_value[0u] = 1.0f;
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 1u, 1u, 3u>();
    ctx.execute_vfpu_vcmp_ct<28u, 32u, 1u, 3u>();
    ctx.execute_vfpu_unary_ct<28u, 28u, 1u, 17u>();
    ctx.execute_vfpu_vscl_ct<1u, 1u, 28u, 3u>();
    ctx.execute_vfpu_vcmov_ct<1u, 0u, 3u, 0u, false>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(628)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(624)));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_13) ^ 0x80000000u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(608), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(612), std::bit_cast<std::uint32_t>(aot_fpr_13));
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
      const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[11] = (ctx.vfpu_scalar_bits_ct<28u>());
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[11]);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12) ^ 0x80000000u);
    aot_mem.aot_direct_store32(ctx.gpr[7] + static_cast<std::uint32_t>(288), std::bit_cast<std::uint32_t>(aot_fpr_12));
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
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(16));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(16));
    ctx.gpr[11] = (static_cast<std::int32_t>(ctx.gpr[10]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[11] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0891D514;
      }
      goto L_0891D59C;
    }
L_0891D59C:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1912), ctx.gpr[20]);
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1936)));
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
      const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_16 = (aot_gpr_29 + static_cast<std::uint32_t>(640));
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x0891D5C0u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 29u, 0x089101CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891D5C0u) goto L_0891D5C0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891D5C0:
    { const std::uint32_t vfpu_address = aot_gpr_16 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vec3_ct<0u, 0u, 1u, 3u, 1u>();
    ctx.gpr[19] = (aot_gpr_29 + static_cast<std::uint32_t>(656));
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
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[20] = (aot_gpr_29 + static_cast<std::uint32_t>(672));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (15820u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    ctx.fpr[22] = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[22] = (0u | 0u);
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]) ^ 0x80000000u);
    ctx.gpr[21] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr_16 = (aot_gpr_29 + static_cast<std::uint32_t>(224));
    ctx.gpr[18] = (aot_gpr_29 | 0u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(1920), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_gpr_5 = (0u | 1u);
    goto L_0891D630;
L_0891D630:
    { const std::uint32_t vfpu_address = aot_gpr_16 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
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
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(288)));
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= ctx.fpr[22])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_0891D670;
      }
      goto L_0891D65C;
    }
L_0891D65C:
    aot_gpr_4 = (0u | 0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < ctx.fpr[24])) ? 0x00800000u : 0u);
    if (((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_gpr_4 = (ctx.gpr[21] | 0u);
        goto L_0891D670;
    }
    goto L_0891D670;
L_0891D670:
    { const std::uint32_t vfpu_address = aot_gpr_16 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    aot_gpr_6 = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[26] = std::bit_cast<float>(aot_gpr_6);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(288)));
    ctx.fpr[26] = ctx.fpr[26] + aot_fpr_13;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[26] <= ctx.fpr[22])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    ctx.gpr[17] = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_0891D6B0;
      }
      goto L_0891D69C;
    }
L_0891D69C:
    ctx.gpr[17] = (0u | 0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[26] < ctx.fpr[24])) ? 0x00800000u : 0u);
    if (((ctx.fcr31 & 0x00800000u) != 0u)) {
    ctx.gpr[17] = (ctx.gpr[21] | 0u);
        goto L_0891D6B0;
    }
    goto L_0891D6B0;
L_0891D6B0:
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[21];
      if (branch_taken) {
          goto L_0891D748;
      }
      goto L_0891D6B8;
    }
L_0891D6B8:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[21];
      if (branch_taken) {
          goto L_0891D748;
      }
      goto L_0891D6C0;
    }
L_0891D6C0:
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(1920), static_cast<std::uint8_t>(aot_gpr_5));
      if (branch_taken) {
          goto L_0891D700;
      }
      goto L_0891D6C8;
    }
L_0891D6C8:
    aot_fpr_12 = ctx.fpr[22] - aot_fpr_12;
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.set_vfpu_scalar_bits_ct<28u>(aot_gpr_4);
    { const std::uint32_t vfpu_address = aot_gpr_16 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(688));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_31 = (0x0891D6ECu);
    aot_gpr_4 = (ctx.gpr[23] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08A931B8, 163u, 0x08A931B8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891D6ECu) goto L_0891D6EC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891D6EC:
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    aot_gpr_4 = (ctx.vfpu_scalar_bits_ct<28u>());
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    goto L_0891D700;
L_0891D700:
    { const bool branch_taken = ctx.gpr[17] != 0u;
      if (branch_taken) {
          goto L_0891D848;
      }
      goto L_0891D708;
    }
L_0891D708:
    aot_fpr_12 = ctx.fpr[22] - ctx.fpr[26];
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.set_vfpu_scalar_bits_ct<28u>(aot_gpr_4);
    { const std::uint32_t vfpu_address = aot_gpr_16 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(704));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_31 = (0x0891D72Cu);
    aot_gpr_4 = (ctx.gpr[30] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08A931B8, 163u, 0x08A931B8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891D72Cu) goto L_0891D72C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891D72C:
    { const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    aot_gpr_4 = (ctx.vfpu_scalar_bits_ct<28u>());
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0891D848;
      }
      goto L_0891D748;
    }
L_0891D748:
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[21];
      if (branch_taken) {
          goto L_0891D7CC;
      }
      goto L_0891D750;
    }
L_0891D750:
    { const bool branch_taken = ctx.gpr[17] != aot_gpr_5;
      if (branch_taken) {
          goto L_0891D7CC;
      }
      goto L_0891D758;
    }
L_0891D758:
    { const std::uint32_t vfpu_address = aot_gpr_16 + static_cast<std::uint32_t>(0);
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    aot_gpr_4 = (ctx.vfpu_scalar_bits_ct<28u>());
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const std::uint32_t vfpu_address = aot_gpr_16 + static_cast<std::uint32_t>(0);
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    aot_gpr_4 = (ctx.vfpu_scalar_bits_ct<28u>());
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(288)));
    aot_fpr_13 = aot_fpr_13 + aot_fpr_14;
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_13) ^ 0x80000000u);
    aot_fpr_12 = aot_fpr_13 / aot_fpr_12;
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.set_vfpu_scalar_bits_ct<28u>(aot_gpr_4);
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(736));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0891D848;
      }
      goto L_0891D7CC;
    }
L_0891D7CC:
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_0891D848;
      }
      goto L_0891D7D4;
    }
L_0891D7D4:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[21];
      if (branch_taken) {
          goto L_0891D848;
      }
      goto L_0891D7DC;
    }
L_0891D7DC:
    { const std::uint32_t vfpu_address = aot_gpr_16 + static_cast<std::uint32_t>(0);
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    aot_gpr_4 = (ctx.vfpu_scalar_bits_ct<28u>());
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const std::uint32_t vfpu_address = aot_gpr_16 + static_cast<std::uint32_t>(0);
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    aot_gpr_4 = (ctx.vfpu_scalar_bits_ct<28u>());
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(288)));
    aot_fpr_13 = aot_fpr_13 + aot_fpr_14;
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_13) ^ 0x80000000u);
    aot_fpr_12 = aot_fpr_13 / aot_fpr_12;
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.set_vfpu_scalar_bits_ct<28u>(aot_gpr_4);
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(768));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
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
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(752));
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
      const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    goto L_0891D848;
L_0891D848:
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(1));
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(16));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[22]) < 4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_5 = (0u | 1u);
      if (branch_taken) {
          goto L_0891D630;
      }
      goto L_0891D860;
    }
L_0891D860:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(1920)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[22] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1912)));
      if (branch_taken) {
          goto L_0891DA10;
      }
      goto L_0891D86C;
    }
L_0891D86C:
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_20), std::bit_cast<std::uint32_t>(aot_fpr_20), std::bit_cast<std::uint32_t>(aot_fpr_20)};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(800), aot_run_words); }
    ctx.gpr[18] = (aot_gpr_29 + static_cast<std::uint32_t>(800));
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_16 = (aot_gpr_29 + static_cast<std::uint32_t>(160));
    ctx.gpr[20] = (aot_gpr_29 + static_cast<std::uint32_t>(816));
    ctx.gpr[19] = (aot_gpr_29 + static_cast<std::uint32_t>(848));
    goto L_0891D88C;
L_0891D88C:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x0891D898u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08A931B8, 163u, 0x08A931B8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891D898u) goto L_0891D898;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891D898:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[17]) < 4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_0891D88C;
      }
      goto L_0891D8A8;
    }
L_0891D8A8:
    aot_gpr_4 = (16000u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.set_vfpu_scalar_bits_ct<1u>(aot_gpr_4);
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_6 = (0u | 0u);
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(880));
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(160));
    goto L_0891D8D4;
L_0891D8D4:
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[7] = (ctx.vfpu_scalar_bits_ct<28u>());
    aot_fpr_13 = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_0891D908;
      }
      goto L_0891D904;
    }
L_0891D904:
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_13));
    goto L_0891D908;
L_0891D908:
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (static_cast<std::int32_t>(aot_gpr_6) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_0891D8D4;
      }
      goto L_0891D918;
    }
L_0891D918:
    aot_fpr_12 = std::sqrt(aot_fpr_12);
    aot_gpr_4 = (16268u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_6 = (0u | 0u);
    aot_gpr_31 = (0x0891D940u);
    ctx.gpr[7] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0133_entry, 133u, 124u, 0x08A1943Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891D940u) goto L_0891D940;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891D940:
    aot_gpr_16 = (aot_gpr_29 + static_cast<std::uint32_t>(784));
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    aot_gpr_31 = (0x0891D950u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 29u, 0x089101CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891D950u) goto L_0891D950;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891D950:
    { const std::uint32_t vfpu_address = aot_gpr_16 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1936)));
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
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(856), std::bit_cast<std::uint32_t>(aot_fpr_20));
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
    aot_gpr_5 = (ctx.vfpu_scalar_bits_ct<28u>());
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_12) || std::isnan(aot_fpr_20)) && aot_fpr_12 == aot_fpr_20)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_0891D9DC;
      }
      goto L_0891D98C;
    }
L_0891D98C:
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
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(864));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_6 = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[23] | 0u);
    aot_gpr_31 = (0x0891D9CCu);
    ctx.gpr[8] = (ctx.gpr[30] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0133_entry, 133u, 125u, 0x08A19470u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891D9CCu) goto L_0891D9CC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891D9CC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_0891D9E4;
      }
      goto L_0891D9D4;
    }
L_0891D9D4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0891DA10;
      }
      goto L_0891D9DC;
    }
L_0891D9DC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0891E874;
      }
      goto L_0891D9E4;
    }
L_0891D9E4:
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    aot_gpr_31 = (0x0891D9F0u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0066_entry, 66u, 885u, 0x0890FF54u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891D9F0u) goto L_0891D9F0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891D9F0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(2228)));
    aot_gpr_5 = (0u | 11u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_0891DA08;
      }
      goto L_0891DA00;
    }
L_0891DA00:
    aot_gpr_31 = (0x0891DA08u);
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0129_entry, 129u, 78u, 0x08A08AE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891DA08u) goto L_0891DA08;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891DA08:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0891E874;
      }
      goto L_0891DA10;
    }
L_0891DA10:
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr_5 = (aot_gpr_4 | 0u);
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[8] = (aot_gpr_29 + static_cast<std::uint32_t>(352));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vec3_ct<0u, 0u, 1u, 3u, 1u>();
    ctx.gpr[9] = (aot_gpr_29 + static_cast<std::uint32_t>(368));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[9] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const std::uint32_t vfpu_address = ctx.gpr[9] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[9] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    ctx.gpr[12] = (0u | 0u);
    ctx.gpr[10] = (aot_gpr_29 + static_cast<std::uint32_t>(912));
    ctx.gpr[11] = (aot_gpr_29 + static_cast<std::uint32_t>(896));
    ctx.gpr[2] = (aot_gpr_29 + static_cast<std::uint32_t>(944));
    ctx.gpr[3] = (aot_gpr_29 + static_cast<std::uint32_t>(928));
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(224));
    ctx.gpr[7] = (aot_gpr_29 | 0u);
    ctx.gpr[13] = (0u | 11u);
    goto L_0891DA78;
L_0891DA78:
    { const std::uint32_t vfpu_address = aot_gpr_6 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[14] = (ctx.vfpu_scalar_bits_ct<28u>());
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[14]);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(288)));
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    { const std::uint32_t vfpu_address = aot_gpr_6 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[14] = (ctx.vfpu_scalar_bits_ct<28u>());
    aot_fpr_14 = std::bit_cast<float>(ctx.gpr[14]);
    aot_fpr_13 = aot_fpr_14 + aot_fpr_13;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_20)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_0891DB3C;
      }
      goto L_0891DABC;
    }
L_0891DABC:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 < aot_fpr_20)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_0891DB3C;
      }
      goto L_0891DACC;
    }
L_0891DACC:
    { const std::uint32_t vfpu_address = aot_gpr_6 + static_cast<std::uint32_t>(0);
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    aot_gpr_4 = (ctx.vfpu_scalar_bits_ct<28u>());
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const std::uint32_t vfpu_address = aot_gpr_6 + static_cast<std::uint32_t>(0);
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    aot_gpr_4 = (ctx.vfpu_scalar_bits_ct<28u>());
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(288)));
    aot_fpr_13 = aot_fpr_14 + aot_fpr_13;
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_13) ^ 0x80000000u);
    aot_fpr_12 = aot_fpr_13 / aot_fpr_12;
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.set_vfpu_scalar_bits_ct<28u>(aot_gpr_4);
    { const std::uint32_t vfpu_address = ctx.gpr[9] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[10] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[10] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[11] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const std::uint32_t vfpu_address = ctx.gpr[11] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (ctx.gpr[12] | 0u);
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0891DBC4;
      }
      goto L_0891DB3C;
    }
L_0891DB3C:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_20)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_0891DBC4;
      }
      goto L_0891DB4C;
    }
L_0891DB4C:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 <= aot_fpr_20)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_0891DBC4;
      }
      goto L_0891DB5C;
    }
L_0891DB5C:
    { const std::uint32_t vfpu_address = aot_gpr_6 + static_cast<std::uint32_t>(0);
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    aot_gpr_5 = (ctx.vfpu_scalar_bits_ct<28u>());
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    { const std::uint32_t vfpu_address = aot_gpr_6 + static_cast<std::uint32_t>(0);
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    aot_gpr_5 = (ctx.vfpu_scalar_bits_ct<28u>());
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(288)));
    aot_fpr_13 = aot_fpr_14 + aot_fpr_13;
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_13) ^ 0x80000000u);
    aot_fpr_12 = aot_fpr_13 / aot_fpr_12;
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.set_vfpu_scalar_bits_ct<28u>(aot_gpr_5);
    { const std::uint32_t vfpu_address = ctx.gpr[9] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[2] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[2] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[3] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const std::uint32_t vfpu_address = ctx.gpr[3] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_5 = (ctx.gpr[12] | 0u);
    goto L_0891DBC4;
L_0891DBC4:
    ctx.gpr[12] = (ctx.gpr[12] + static_cast<std::uint32_t>(1));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(16));
    ctx.gpr[14] = (static_cast<std::int32_t>(ctx.gpr[12]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[14] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0891DA78;
      }
      goto L_0891DBD8;
    }
L_0891DBD8:
    aot_gpr_6 = (aot_gpr_4 | aot_gpr_5);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_6) >= 0;
      if (branch_taken) {
          goto L_0891DC10;
      }
      goto L_0891DBE4;
    }
L_0891DBE4:
    aot_gpr_16 = (ctx.gpr[13] | 0u);
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    aot_gpr_31 = (0x0891DBF4u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0066_entry, 66u, 885u, 0x0890FF54u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891DBF4u) goto L_0891DBF4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891DBF4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(2228)));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_16;
      if (branch_taken) {
          goto L_0891DC08;
      }
      goto L_0891DC00;
    }
L_0891DC00:
    aot_gpr_31 = (0x0891DC08u);
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0129_entry, 129u, 78u, 0x08A08AE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891DC08u) goto L_0891DC08;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891DC08:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0891E874;
      }
      goto L_0891DC10;
    }
L_0891DC10:
    aot_gpr_16 = (aot_gpr_5 + static_cast<std::uint32_t>(3));
    ctx.gpr[21] = (aot_gpr_29 + static_cast<std::uint32_t>(992));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_16) >= 0;
    ctx.gpr[19] = (aot_gpr_29 + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_0891DC30;
      }
      goto L_0891DC20;
    }
L_0891DC20:
    aot_gpr_6 = (0u - aot_gpr_16);
    aot_gpr_16 = (aot_gpr_6 & 3u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_16 = (0u - aot_gpr_16);
      if (branch_taken) {
          goto L_0891DC34;
      }
      goto L_0891DC30;
    }
L_0891DC30:
    aot_gpr_16 = (aot_gpr_16 & 3u);
    goto L_0891DC34;
L_0891DC34:
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(4));
    if (static_cast<std::int32_t>(aot_gpr_5) >= 0) {
    aot_gpr_5 = (aot_gpr_5 & 3u);
        goto L_0891DC50;
    }
    goto L_0891DC40;
L_0891DC40:
    aot_gpr_5 = (0u - aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 & 3u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (0u - aot_gpr_5);
      if (branch_taken) {
          goto L_0891DC50;
      }
      goto L_0891DC50;
    }
L_0891DC50:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(3));
    if (static_cast<std::int32_t>(aot_gpr_6) >= 0) {
    aot_gpr_6 = (aot_gpr_6 & 3u);
        goto L_0891DC6C;
    }
    goto L_0891DC5C;
L_0891DC5C:
    aot_gpr_6 = (0u - aot_gpr_6);
    aot_gpr_6 = (aot_gpr_6 & 3u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_6 = (0u - aot_gpr_6);
      if (branch_taken) {
          goto L_0891DC6C;
      }
      goto L_0891DC6C;
    }
L_0891DC6C:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) >= 0;
    ctx.gpr[18] = (aot_gpr_4 & 3u);
      if (branch_taken) {
          goto L_0891DC88;
      }
      goto L_0891DC78;
    }
L_0891DC78:
    aot_gpr_4 = (0u - aot_gpr_4);
    ctx.gpr[18] = (aot_gpr_4 & 3u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u - ctx.gpr[18]);
      if (branch_taken) {
          goto L_0891DC88;
      }
      goto L_0891DC88;
    }
L_0891DC88:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(384));
    ctx.gpr[20] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1936)));
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (ctx.gpr[19] + static_cast<std::uint32_t>(384));
    ctx.gpr[7] = (aot_gpr_6 << 4u);
    ctx.gpr[7] = (aot_gpr_29 + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(160));
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
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    ctx.gpr[17] = (0u | 2u);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    { const bool branch_taken = aot_gpr_6 == aot_gpr_5;
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(384));
      if (branch_taken) {
          goto L_0891DD00;
      }
      goto L_0891DCC0;
    }
L_0891DCC0:
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(3));
    if (static_cast<std::int32_t>(aot_gpr_6) >= 0) {
    aot_gpr_6 = (aot_gpr_6 & 3u);
        goto L_0891DCDC;
    }
    goto L_0891DCCC;
L_0891DCCC:
    aot_gpr_6 = (0u - aot_gpr_6);
    aot_gpr_6 = (aot_gpr_6 & 3u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_6 = (0u - aot_gpr_6);
      if (branch_taken) {
          goto L_0891DCDC;
      }
      goto L_0891DCDC;
    }
L_0891DCDC:
    ctx.gpr[7] = (aot_gpr_6 << 4u);
    ctx.gpr[7] = (aot_gpr_29 + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(160));
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
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(16));
    { const bool branch_taken = aot_gpr_6 != aot_gpr_5;
      if (branch_taken) {
          goto L_0891DCC0;
      }
      goto L_0891DD00;
    }
L_0891DD00:
    ctx.gpr[23] = (aot_gpr_4 | 0u);
    ctx.gpr[30] = (aot_gpr_29 + static_cast<std::uint32_t>(960));
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    aot_gpr_31 = (0x0891DD14u);
    aot_gpr_5 = (ctx.gpr[30] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 29u, 0x089101CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891DD14u) goto L_0891DD14;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891DD14:
    { const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_5 = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1916), aot_gpr_5);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(464));
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (ctx.gpr[19] + static_cast<std::uint32_t>(464));
    aot_gpr_6 = (ctx.gpr[18] << 4u);
    aot_gpr_6 = (aot_gpr_29 + aot_gpr_6);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(160));
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
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    ctx.gpr[17] = (0u | 2u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    ctx.gpr[18] = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(464));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_16;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1932), aot_gpr_5);
      if (branch_taken) {
          goto L_0891DDA4;
      }
      goto L_0891DD64;
    }
L_0891DD64:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(5));
    if (static_cast<std::int32_t>(aot_gpr_4) >= 0) {
    aot_gpr_4 = (aot_gpr_4 & 3u);
        goto L_0891DD80;
    }
    goto L_0891DD70;
L_0891DD70:
    aot_gpr_4 = (0u - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 & 3u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (0u - aot_gpr_4);
      if (branch_taken) {
          goto L_0891DD80;
      }
      goto L_0891DD80;
    }
L_0891DD80:
    aot_gpr_5 = (aot_gpr_4 << 4u);
    aot_gpr_5 = (aot_gpr_29 + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(160));
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
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_16;
      if (branch_taken) {
          goto L_0891DD64;
      }
      goto L_0891DDA4;
    }
L_0891DDA4:
    aot_gpr_16 = (aot_gpr_29 + static_cast<std::uint32_t>(976));
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    aot_gpr_31 = (0x0891DDB4u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 29u, 0x089101CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891DDB4u) goto L_0891DDB4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891DDB4:
    { const std::uint32_t vfpu_address = aot_gpr_16 + static_cast<std::uint32_t>(0);
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
    aot_gpr_4 = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1924), aot_gpr_4);
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_20), std::bit_cast<std::uint32_t>(aot_fpr_20), std::bit_cast<std::uint32_t>(aot_fpr_20)};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(544), aot_run_words); }
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_16 = (aot_gpr_29 + static_cast<std::uint32_t>(160));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    ctx.gpr[19] = (aot_gpr_29 + static_cast<std::uint32_t>(544));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1928), aot_gpr_4);
    goto L_0891DDE4;
L_0891DDE4:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x0891DDF0u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08A931B8, 163u, 0x08A931B8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891DDF0u) goto L_0891DDF0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891DDF0:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[17]) < 4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_0891DDE4;
      }
      goto L_0891DE00;
    }
L_0891DE00:
    aot_gpr_4 = (16000u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.set_vfpu_scalar_bits_ct<1u>(aot_gpr_4);
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1916)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(560), 0u);
    ctx.gpr[20] = (0u | 1u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1948), aot_gpr_4);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(1952), static_cast<std::uint8_t>(ctx.gpr[20]));
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(384));
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
      const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (16128u << 16u);
      if (branch_taken) {
          goto L_0891E114;
      }
      goto L_0891DE48;
    }
L_0891DE48:
    ctx.fpr[24] = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[19] = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    aot_gpr_4 = (49024u << 16u);
    aot_gpr_16 = (aot_gpr_29 + static_cast<std::uint32_t>(1024));
    ctx.fpr[22] = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[18] = (aot_gpr_29 + static_cast<std::uint32_t>(1008));
    ctx.gpr[30] = (aot_gpr_29 + static_cast<std::uint32_t>(1056));
    ctx.gpr[23] = (aot_gpr_29 + static_cast<std::uint32_t>(1072));
    ctx.gpr[22] = (aot_gpr_29 + static_cast<std::uint32_t>(560));
    ctx.gpr[21] = (aot_gpr_29 + static_cast<std::uint32_t>(1104));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(384));
    goto L_0891DE74;
L_0891DE74:
    ctx.gpr[17] = (ctx.gpr[19] | 0u);
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(992));
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_16 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1032), std::bit_cast<std::uint32_t>(aot_fpr_20));
    { const std::uint32_t vfpu_address = aot_gpr_16 + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = aot_gpr_16 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(ctx.fpr[24]));
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
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1028)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1024)));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_13) ^ 0x80000000u);
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_12), std::bit_cast<std::uint32_t>(aot_fpr_13), std::bit_cast<std::uint32_t>(aot_fpr_20)};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(1008), aot_run_words); }
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
      const std::uint32_t vfpu_address = aot_gpr_16 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(544));
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
    { const std::uint32_t vfpu_address = aot_gpr_16 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_20)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_0891DF30;
      }
      goto L_0891DF1C;
    }
L_0891DF1C:
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(ctx.fpr[22]));
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
    goto L_0891DF30;
L_0891DF30:
    { const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
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
    ctx.execute_vfpu_vec3_ct<0u, 0u, 1u, 3u, 0u>();
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(1040));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
    ctx.execute_vfpu_vec3_ct<0u, 0u, 1u, 3u, 0u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_6 = (ctx.gpr[23] | 0u);
    ctx.gpr[7] = (ctx.gpr[22] | 0u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[11] = (0u | 1u);
    { const std::uint32_t aot_run_words[4]{0u, 0u, 0u, 0u};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_gpr_31 = (0x0891DF8Cu);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0036_entry, 36u, 698u, 0x0889786Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891DF8Cu) goto L_0891DF8C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891DF8C:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0891DFD4;
      }
      goto L_0891DF98;
    }
L_0891DF98:
    { const std::uint32_t aot_run_words[4]{0u, 0u, 0u, 0u};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(1040));
    aot_gpr_5 = (ctx.gpr[30] | 0u);
    aot_gpr_6 = (ctx.gpr[23] | 0u);
    ctx.gpr[7] = (ctx.gpr[22] | 0u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[11] = (0u | 1u);
    aot_gpr_31 = (0x0891DFD0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0036_entry, 36u, 698u, 0x0889786Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891DFD0u) goto L_0891DFD0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891DFD0:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    goto L_0891DFD4;
L_0891DFD4:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0891E0F4;
      }
      goto L_0891DFDC;
    }
L_0891DFDC:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1956), ctx.gpr[20]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1912)));
    ctx.gpr[20] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(560)));
    aot_gpr_31 = (0x0891DFF0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1960), ctx.gpr[20]);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 81u, 0x089104F0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891DFF0u) goto L_0891DFF0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891DFF0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1960)));
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[2];
    ctx.gpr[20] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1956)));
      if (branch_taken) {
          goto L_0891E0F0;
      }
      goto L_0891DFFC;
    }
L_0891DFFC:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(560)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1912)));
    { const bool branch_taken = aot_gpr_5 == aot_gpr_4;
      if (branch_taken) {
          goto L_0891E0F0;
      }
      goto L_0891E00C;
    }
L_0891E00C:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1956), ctx.gpr[20]);
    ctx.gpr[20] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(560)));
    aot_gpr_31 = (0x0891E01Cu);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1960), ctx.gpr[20]);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 3u, 0x08910020u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891E01Cu) goto L_0891E01C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891E01C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1960)));
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[2];
    ctx.gpr[20] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1956)));
      if (branch_taken) {
          goto L_0891E0F0;
      }
      goto L_0891E028;
    }
L_0891E028:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(560)));
    aot_gpr_5 = (0u | 6u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(72)));
    aot_gpr_4 = (aot_gpr_4 & 14u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_0891E0E0;
      }
      goto L_0891E040;
    }
L_0891E040:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(560)));
    aot_gpr_5 = (0u | 1u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(2228)));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_0891E064;
      }
      goto L_0891E054;
    }
L_0891E054:
    aot_gpr_4 = (0u | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1948), ctx.gpr[20]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(1952), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_0891E114;
      }
      goto L_0891E064;
    }
L_0891E064:
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(992));
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
      const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(560)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
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
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_20)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_0891E0B4;
      }
      goto L_0891E0A4;
    }
L_0891E0A4:
    aot_gpr_4 = (0u | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1948), ctx.gpr[20]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(1952), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_0891E114;
      }
      goto L_0891E0B4;
    }
L_0891E0B4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(560)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1912)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(2192)));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_0891E0D8;
      }
      goto L_0891E0C8;
    }
L_0891E0C8:
    aot_gpr_4 = (0u | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1948), ctx.gpr[20]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(1952), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_0891E114;
      }
      goto L_0891E0D8;
    }
L_0891E0D8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0891E0F4;
      }
      goto L_0891E0E0;
    }
L_0891E0E0:
    aot_gpr_4 = (0u | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1948), ctx.gpr[20]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(1952), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_0891E114;
      }
      goto L_0891E0F0;
    }
L_0891E0F0:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(560), 0u);
    goto L_0891E0F4;
L_0891E0F4:
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(992));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1916)));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_0891DE74;
      }
      goto L_0891E114;
    }
L_0891E114:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1924)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(564), 0u);
    ctx.gpr[20] = (0u | 1u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1940), aot_gpr_4);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(1944), static_cast<std::uint8_t>(ctx.gpr[20]));
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(464));
    { const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(1120));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (16128u << 16u);
      if (branch_taken) {
          goto L_0891E410;
      }
      goto L_0891E144;
    }
L_0891E144:
    ctx.fpr[22] = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[19] = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    aot_gpr_4 = (49024u << 16u);
    aot_gpr_16 = (aot_gpr_29 + static_cast<std::uint32_t>(1152));
    ctx.fpr[24] = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[18] = (aot_gpr_29 + static_cast<std::uint32_t>(1136));
    ctx.gpr[30] = (aot_gpr_29 + static_cast<std::uint32_t>(1184));
    ctx.gpr[23] = (aot_gpr_29 + static_cast<std::uint32_t>(1200));
    ctx.gpr[22] = (aot_gpr_29 + static_cast<std::uint32_t>(564));
    ctx.gpr[21] = (aot_gpr_29 + static_cast<std::uint32_t>(1232));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(464));
    goto L_0891E170;
L_0891E170:
    ctx.gpr[17] = (ctx.gpr[19] | 0u);
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(1120));
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_16 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1160), std::bit_cast<std::uint32_t>(aot_fpr_20));
    { const std::uint32_t vfpu_address = aot_gpr_16 + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = aot_gpr_16 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(ctx.fpr[22]));
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
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1156)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1152)));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_13) ^ 0x80000000u);
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_12), std::bit_cast<std::uint32_t>(aot_fpr_13), std::bit_cast<std::uint32_t>(aot_fpr_20)};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(1136), aot_run_words); }
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
      const std::uint32_t vfpu_address = aot_gpr_16 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(544));
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
    { const std::uint32_t vfpu_address = aot_gpr_16 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_20)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_0891E22C;
      }
      goto L_0891E218;
    }
L_0891E218:
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(ctx.fpr[24]));
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
    goto L_0891E22C;
L_0891E22C:
    { const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
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
    ctx.execute_vfpu_vec3_ct<0u, 0u, 1u, 3u, 0u>();
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(1168));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
    ctx.execute_vfpu_vec3_ct<0u, 0u, 1u, 3u, 0u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_6 = (ctx.gpr[23] | 0u);
    ctx.gpr[7] = (ctx.gpr[22] | 0u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[11] = (0u | 1u);
    { const std::uint32_t aot_run_words[4]{0u, 0u, 0u, 0u};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_gpr_31 = (0x0891E288u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0036_entry, 36u, 698u, 0x0889786Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891E288u) goto L_0891E288;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891E288:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0891E2D0;
      }
      goto L_0891E294;
    }
L_0891E294:
    { const std::uint32_t aot_run_words[4]{0u, 0u, 0u, 0u};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(1168));
    aot_gpr_5 = (ctx.gpr[30] | 0u);
    aot_gpr_6 = (ctx.gpr[23] | 0u);
    ctx.gpr[7] = (ctx.gpr[22] | 0u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[11] = (0u | 1u);
    aot_gpr_31 = (0x0891E2CCu);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0036_entry, 36u, 698u, 0x0889786Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891E2CCu) goto L_0891E2CC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891E2CC:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    goto L_0891E2D0;
L_0891E2D0:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0891E3F0;
      }
      goto L_0891E2D8;
    }
L_0891E2D8:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1956), ctx.gpr[20]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1912)));
    ctx.gpr[20] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(564)));
    aot_gpr_31 = (0x0891E2ECu);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1960), ctx.gpr[20]);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 81u, 0x089104F0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891E2ECu) goto L_0891E2EC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891E2EC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1960)));
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[2];
    ctx.gpr[20] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1956)));
      if (branch_taken) {
          goto L_0891E3EC;
      }
      goto L_0891E2F8;
    }
L_0891E2F8:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(564)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1912)));
    { const bool branch_taken = aot_gpr_5 == aot_gpr_4;
      if (branch_taken) {
          goto L_0891E3EC;
      }
      goto L_0891E308;
    }
L_0891E308:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1956), ctx.gpr[20]);
    ctx.gpr[20] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(564)));
    aot_gpr_31 = (0x0891E318u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1960), ctx.gpr[20]);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 3u, 0x08910020u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891E318u) goto L_0891E318;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891E318:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1960)));
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[2];
    ctx.gpr[20] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1956)));
      if (branch_taken) {
          goto L_0891E3EC;
      }
      goto L_0891E324;
    }
L_0891E324:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(564)));
    aot_gpr_5 = (0u | 6u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(72)));
    aot_gpr_4 = (aot_gpr_4 & 14u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_0891E3DC;
      }
      goto L_0891E33C;
    }
L_0891E33C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(564)));
    aot_gpr_5 = (0u | 1u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(2228)));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_0891E360;
      }
      goto L_0891E350;
    }
L_0891E350:
    aot_gpr_4 = (0u | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1940), ctx.gpr[20]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(1944), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_0891E410;
      }
      goto L_0891E360;
    }
L_0891E360:
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(1120));
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
      const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(564)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
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
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_20)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_0891E3B0;
      }
      goto L_0891E3A0;
    }
L_0891E3A0:
    aot_gpr_4 = (0u | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1940), ctx.gpr[20]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(1944), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_0891E410;
      }
      goto L_0891E3B0;
    }
L_0891E3B0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(564)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1912)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(2192)));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_0891E3D4;
      }
      goto L_0891E3C4;
    }
L_0891E3C4:
    aot_gpr_4 = (0u | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1940), ctx.gpr[20]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(1944), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_0891E410;
      }
      goto L_0891E3D4;
    }
L_0891E3D4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0891E3F0;
      }
      goto L_0891E3DC;
    }
L_0891E3DC:
    aot_gpr_4 = (0u | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1940), ctx.gpr[20]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(1944), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_0891E410;
      }
      goto L_0891E3EC;
    }
L_0891E3EC:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(564), 0u);
    goto L_0891E3F0;
L_0891E3F0:
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(1120));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1924)));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_0891E170;
      }
      goto L_0891E410;
    }
L_0891E410:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1932)));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    ctx.gpr[7] = (0u | 0u);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    ctx.gpr[8] = (0u | 1u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[10] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1912)));
      if (branch_taken) {
          goto L_0891E478;
      }
      goto L_0891E42C;
    }
L_0891E42C:
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(1248));
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(384));
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(400));
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1932)));
    goto L_0891E43C;
L_0891E43C:
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
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
    ctx.gpr[11] = (ctx.vfpu_scalar_bits_ct<28u>());
    aot_fpr_13 = std::bit_cast<float>(ctx.gpr[11]);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(16));
    ctx.gpr[11] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[11] != 0u;
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_0891E43C;
      }
      goto L_0891E478;
    }
L_0891E478:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1928)));
    ctx.gpr[7] = (0u | 0u);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
      if (branch_taken) {
          goto L_0891E4D8;
      }
      goto L_0891E48C;
    }
L_0891E48C:
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(1264));
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(464));
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(480));
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1928)));
    goto L_0891E49C;
L_0891E49C:
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
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
    ctx.gpr[11] = (ctx.vfpu_scalar_bits_ct<28u>());
    aot_fpr_14 = std::bit_cast<float>(ctx.gpr[11]);
    aot_fpr_13 = aot_fpr_13 + aot_fpr_14;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(16));
    ctx.gpr[11] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[11] != 0u;
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_0891E49C;
      }
      goto L_0891E4D8;
    }
L_0891E4D8:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(1952)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0891E50C;
      }
      goto L_0891E4E4;
    }
L_0891E4E4:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(1944)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0891E50C;
      }
      goto L_0891E4F0;
    }
L_0891E4F0:
    aot_gpr_4 = (0u | 2u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    if (((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_gpr_4 = (ctx.gpr[8] | 0u);
        goto L_0891E504;
    }
    goto L_0891E504;
L_0891E504:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0891E5F4;
      }
      goto L_0891E50C;
    }
L_0891E50C:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(1952)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0891E520;
      }
      goto L_0891E518;
    }
L_0891E518:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_0891E5F4;
      }
      goto L_0891E520;
    }
L_0891E520:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(1944)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0891E534;
      }
      goto L_0891E52C;
    }
L_0891E52C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (0u | 2u);
      if (branch_taken) {
          goto L_0891E5F4;
      }
      goto L_0891E534;
    }
L_0891E534:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1948)));
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[8];
      if (branch_taken) {
          goto L_0891E558;
      }
      goto L_0891E540;
    }
L_0891E540:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1940)));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0891E558;
      }
      goto L_0891E550;
    }
L_0891E550:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (0u | 2u);
      if (branch_taken) {
          goto L_0891E5F4;
      }
      goto L_0891E558;
    }
L_0891E558:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1948)));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0891E57C;
      }
      goto L_0891E568;
    }
L_0891E568:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1940)));
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[8];
      if (branch_taken) {
          goto L_0891E57C;
      }
      goto L_0891E574;
    }
L_0891E574:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_0891E5F4;
      }
      goto L_0891E57C;
    }
L_0891E57C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(560)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(564)));
    if (aot_gpr_4 != aot_gpr_5) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(560)));
        goto L_0891E5A8;
    }
    goto L_0891E58C;
L_0891E58C:
    aot_gpr_4 = (0u | 2u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    if (((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_gpr_4 = (ctx.gpr[8] | 0u);
        goto L_0891E5A0;
    }
    goto L_0891E5A0;
L_0891E5A0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0891E5F4;
      }
      goto L_0891E5A8;
    }
L_0891E5A8:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(86))))));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(564)));
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_6 + static_cast<std::uint32_t>(86))))));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_gpr_6 << 2u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(20)));
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(12)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (0u | 2u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(20)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(12)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    if (((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_gpr_4 = (ctx.gpr[8] | 0u);
        goto L_0891E5F4;
    }
    goto L_0891E5F4;
L_0891E5F4:
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(4199)));
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_0891E7E4;
      }
      goto L_0891E600;
    }
L_0891E600:
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[8];
      if (branch_taken) {
          goto L_0891E6F4;
      }
      goto L_0891E608;
    }
L_0891E608:
    aot_gpr_31 = (0x0891E610u);
    aot_gpr_4 = (ctx.gpr[10] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 829u, 0x0890B488u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891E610u) goto L_0891E610;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891E610:
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1932)));
    ctx.gpr[8] = (0u | 1u);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_5 = (16640u << 16u);
      if (branch_taken) {
          goto L_0891E7E4;
      }
      goto L_0891E624;
    }
L_0891E624:
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    aot_gpr_5 = (17096u << 16u);
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(1280));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(384));
    ctx.gpr[10] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1912)));
    goto L_0891E640;
L_0891E640:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[10] + static_cast<std::uint32_t>(904))))));
    ctx.gpr[7] = (aot_gpr_5 << 3u);
    ctx.gpr[7] = (aot_gpr_5 + ctx.gpr[7]);
    aot_gpr_5 = (aot_gpr_5 + ctx.gpr[7]);
    aot_gpr_5 = (ctx.gpr[10] + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(944));
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
      const std::uint32_t vfpu_address = aot_gpr_6 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1280)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1284)));
    { const float fs = aot_fpr_12; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1288)));
    { const float fs = ctx.fpr[15]; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[15]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_direct_store16(aot_gpr_5 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.fpr[16] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[16]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_20)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_mem.aot_direct_store16(aot_gpr_5 + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[7]));
      if (branch_taken) {
          goto L_0891E6B0;
      }
      goto L_0891E698;
    }
L_0891E698:
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[7] = (ctx.gpr[7] << 24u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 24u));
      if (branch_taken) {
          goto L_0891E6C0;
      }
      goto L_0891E6B0;
    }
L_0891E6B0:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[7] = (ctx.gpr[7] << 24u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 24u));
    goto L_0891E6C0;
L_0891E6C0:
    aot_mem.aot_direct_store8(aot_gpr_5 + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[10] + static_cast<std::uint32_t>(904))))));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[11] = (ctx.gpr[7] << 2u);
    ctx.gpr[11] = (ctx.gpr[10] + ctx.gpr[11]);
    aot_mem.aot_direct_store32(ctx.gpr[11] + static_cast<std::uint32_t>(908), aot_gpr_5);
    aot_gpr_5 = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store16(ctx.gpr[10] + static_cast<std::uint32_t>(904), static_cast<std::uint16_t>(aot_gpr_5));
    aot_gpr_5 = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_0891E640;
      }
      goto L_0891E6EC;
    }
L_0891E6EC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0891E7E4;
      }
      goto L_0891E6F4;
    }
L_0891E6F4:
    aot_gpr_5 = (0u | 2u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_0891E7E4;
      }
      goto L_0891E700;
    }
L_0891E700:
    aot_gpr_31 = (0x0891E708u);
    aot_gpr_4 = (ctx.gpr[10] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 829u, 0x0890B488u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891E708u) goto L_0891E708;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891E708:
    ctx.gpr[10] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1928)));
    aot_gpr_4 = (0u | 1u);
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(ctx.gpr[10]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_6 = (16640u << 16u);
      if (branch_taken) {
          goto L_0891E7E4;
      }
      goto L_0891E71C;
    }
L_0891E71C:
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_6);
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    aot_gpr_6 = (17096u << 16u);
    ctx.gpr[7] = (aot_gpr_29 + static_cast<std::uint32_t>(1296));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_6);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(464));
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1912)));
    goto L_0891E738;
L_0891E738:
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[9] + static_cast<std::uint32_t>(904))))));
    ctx.gpr[8] = (aot_gpr_6 << 3u);
    ctx.gpr[8] = (aot_gpr_6 + ctx.gpr[8]);
    aot_gpr_6 = (aot_gpr_6 + ctx.gpr[8]);
    aot_gpr_6 = (ctx.gpr[9] + aot_gpr_6);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(944));
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
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1296)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1300)));
    { const float fs = aot_fpr_14; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1304)));
    { const float fs = ctx.fpr[15]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[15]));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_direct_store16(aot_gpr_6 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[8]));
    ctx.fpr[16] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[16]));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_14 < aot_fpr_20)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_mem.aot_direct_store16(aot_gpr_6 + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[8]));
      if (branch_taken) {
          goto L_0891E7A8;
      }
      goto L_0891E790;
    }
L_0891E790:
    aot_fpr_14 = aot_fpr_14 + aot_fpr_13;
    aot_fpr_14 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_14));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(aot_fpr_14));
    ctx.gpr[8] = (ctx.gpr[8] << 24u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 24u));
      if (branch_taken) {
          goto L_0891E7B8;
      }
      goto L_0891E7A8;
    }
L_0891E7A8:
    aot_fpr_14 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_14));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(aot_fpr_14));
    ctx.gpr[8] = (ctx.gpr[8] << 24u);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 24u));
    goto L_0891E7B8;
L_0891E7B8:
    aot_mem.aot_direct_store8(aot_gpr_6 + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[9] + static_cast<std::uint32_t>(904))))));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    ctx.gpr[11] = (ctx.gpr[8] << 2u);
    ctx.gpr[11] = (ctx.gpr[9] + ctx.gpr[11]);
    aot_mem.aot_direct_store32(ctx.gpr[11] + static_cast<std::uint32_t>(908), aot_gpr_6);
    aot_gpr_6 = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store16(ctx.gpr[9] + static_cast<std::uint32_t>(904), static_cast<std::uint16_t>(aot_gpr_6));
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(ctx.gpr[10]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 != 0u;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_0891E738;
      }
      goto L_0891E7E4;
    }
L_0891E7E4:
    aot_gpr_31 = (0x0891E7ECu);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1912)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 133u, 0x089107ECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891E7ECu) goto L_0891E7EC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891E7EC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_0891E824;
      }
      goto L_0891E7F4;
    }
L_0891E7F4:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1912)));
    ctx.gpr[17] = (0u | 11u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0891E808u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0066_entry, 66u, 885u, 0x0890FF54u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891E808u) goto L_0891E808;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891E808:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2228)));
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[17];
      if (branch_taken) {
          goto L_0891E81C;
      }
      goto L_0891E814;
    }
L_0891E814:
    aot_gpr_31 = (0x0891E81Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0129_entry, 129u, 78u, 0x08A08AE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891E81Cu) goto L_0891E81C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891E81C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0891E874;
      }
      goto L_0891E824;
    }
L_0891E824:
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1912)));
    aot_gpr_5 = (0u | 0u);
    ctx.gpr[17] = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2232)));
    aot_gpr_31 = (0x0891E838u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08908E78, 65u, 261u, 0x08908E78u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0065_entry, 65u, 261u, 0x08908E78u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891E838u) goto L_0891E838;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891E838:
    aot_gpr_31 = (0x0891E840u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0129_entry, 129u, 36u, 0x08A08730u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891E840u) goto L_0891E840;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891E840:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2232)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_16 = (0u | 1u);
      if (branch_taken) {
          goto L_0891E858;
      }
      goto L_0891E84C;
    }
L_0891E84C:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x0891E858u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08908E78, 65u, 261u, 0x08908E78u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0065_entry, 65u, 261u, 0x08908E78u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891E858u) goto L_0891E858;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891E858:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x0891E864u);
    aot_gpr_5 = (0u | 11u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 240u, 0x08908D60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891E864u) goto L_0891E864;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891E864:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1248)));
    aot_gpr_31 = (0x0891E870u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890BE50, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0065_entry, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891E870u) goto L_0891E870;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891E870:
    ctx.gpr[2] = (aot_gpr_16 | 0u);
    goto L_0891E874;
L_0891E874:
    { std::uint32_t aot_run_words[14]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(1964), aot_run_words);
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
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(2032));
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
L_0891E8B4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    ctx.gpr[18] = (aot_gpr_6 & 255u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2228)));
    aot_gpr_6 = (0u | 31u);
    { const std::uint32_t aot_run_words[5]{std::bit_cast<std::uint32_t>(aot_fpr_20), std::bit_cast<std::uint32_t>(ctx.fpr[22]), std::bit_cast<std::uint32_t>(ctx.fpr[24]), std::bit_cast<std::uint32_t>(ctx.fpr[26]), std::bit_cast<std::uint32_t>(ctx.fpr[28])};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_run_words); }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(40), aot_gpr_31);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_6;
    ctx.gpr[17] = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_0891E948;
      }
      goto L_0891E8F8;
    }
L_0891E8F8:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(460)));
    aot_gpr_5 = (aot_gpr_5 & 512u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_0891E940;
      }
      goto L_0891E908;
    }
L_0891E908:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2120)));
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_0891E940;
      }
      goto L_0891E914;
    }
L_0891E914:
    aot_gpr_5 = (0u | 17u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_0891E938;
      }
      goto L_0891E920;
    }
L_0891E920:
    aot_gpr_31 = (0x0891E928u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 620u, 0x08906DE4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891E928u) goto L_0891E928;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891E928:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_0891E950;
      }
      goto L_0891E930;
    }
L_0891E930:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0891EC88;
      }
      goto L_0891E938;
    }
L_0891E938:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0891EC88;
      }
      goto L_0891E940;
    }
L_0891E940:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0891EC88;
      }
      goto L_0891E948;
    }
L_0891E948:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0891EC88;
      }
      goto L_0891E950;
    }
L_0891E950:
    aot_gpr_31 = (0x0891E958u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890D44C, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891E958u) goto L_0891E958;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891E958:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_0891E974;
      }
      goto L_0891E960;
    }
L_0891E960:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(456)));
    aot_gpr_5 = (4u << 16u);
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0891E97C;
      }
      goto L_0891E974;
    }
L_0891E974:
    { const bool branch_taken = ctx.gpr[18] == 0u;
      if (branch_taken) {
          goto L_0891EC88;
      }
      goto L_0891E97C;
    }
L_0891E97C:
    aot_gpr_4 = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_16 + static_cast<std::uint32_t>(48));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    aot_fpr_12 = aot_fpr_14 - aot_fpr_12;
    aot_gpr_31 = (0x0891E9A0u);
    aot_fpr_13 = aot_fpr_13 - ctx.fpr[15];
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891E9A0u) goto L_0891E9A0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891E9A0:
    aot_gpr_31 = (0x0891E9A8u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0162_entry, 162u, 580u, 0x08A8F0B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891E9A8u) goto L_0891E9A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891E9A8:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2256)));
    aot_gpr_31 = (0x0891E9B4u);
    aot_fpr_20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0162_entry, 162u, 580u, 0x08A8F0B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891E9B4u) goto L_0891E9B4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891E9B4:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(2256), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[22] = std::bit_cast<float>(0u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2256)));
    aot_gpr_4 = (16457u << 16u);
    aot_fpr_12 = aot_fpr_20 - aot_fpr_12;
    aot_gpr_4 = (aot_gpr_4 | 4059u);
    ctx.fpr[26] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (16329u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 4059u);
    ctx.fpr[28] = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < ctx.fpr[22])) ? 0x00800000u : 0u);
    if (((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12) ^ 0x80000000u);
        goto L_0891E9EC;
    }
    goto L_0891E9EC;
L_0891E9EC:
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[24] <= ctx.fpr[26])) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_0891EA10;
      }
      goto L_0891EA00;
    }
L_0891EA00:
    aot_gpr_4 = (16585u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 4059u);
    ctx.fpr[24] = std::bit_cast<float>(aot_gpr_4);
    ctx.fpr[24] = ctx.fpr[24] - aot_fpr_12;
    goto L_0891EA10;
L_0891EA10:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    aot_gpr_5 = (0u | 4u);
    aot_gpr_4 = (aot_gpr_4 & 14u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_0891EA54;
      }
      goto L_0891EA24;
    }
L_0891EA24:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0891EA54;
      }
      goto L_0891EA30;
    }
L_0891EA30:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(700)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0891EA54;
      }
      goto L_0891EA3C;
    }
L_0891EA3C:
    ctx.gpr[19] = (0u | 1u);
    aot_gpr_31 = (0x0891EA48u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890D44C, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891EA48u) goto L_0891EA48;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891EA48:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_0891EA54;
      }
      goto L_0891EA50;
    }
L_0891EA50:
    ctx.gpr[18] = (0u | 1u);
    goto L_0891EA54;
L_0891EA54:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[24] <= ctx.fpr[28])) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_0891EA84;
      }
      goto L_0891EA64;
    }
L_0891EA64:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[17] + static_cast<std::uint32_t>(86))))));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-943));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_0891EA84;
      }
      goto L_0891EA74;
    }
L_0891EA74:
    { const bool branch_taken = ctx.gpr[19] != 0u;
      if (branch_taken) {
          goto L_0891EA84;
      }
      goto L_0891EA7C;
    }
L_0891EA7C:
    { const bool branch_taken = ctx.gpr[18] == 0u;
      if (branch_taken) {
          goto L_0891EABC;
      }
      goto L_0891EA84;
    }
L_0891EA84:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_6 = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    aot_gpr_31 = (0x0891EA9Cu);
    ctx.gpr[8] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 442u, 0x08909A64u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891EA9Cu) goto L_0891EA9C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891EA9C:
    aot_gpr_31 = (0x0891EAA4u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20934, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891EAA4u) goto L_0891EAA4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891EAA4:
    aot_gpr_4 = (ctx.gpr[2] & 65535u);
    aot_gpr_4 = (aot_gpr_4 & 1u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0891EAD8;
      }
      goto L_0891EAB4;
    }
L_0891EAB4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[17] + static_cast<std::uint32_t>(86))))));
      if (branch_taken) {
          goto L_0891EAC4;
      }
      goto L_0891EABC;
    }
L_0891EABC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0891EC88;
      }
      goto L_0891EAC4;
    }
L_0891EAC4:
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-943));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_0891EAD8;
      }
      goto L_0891EAD0;
    }
L_0891EAD0:
    { const bool branch_taken = ctx.gpr[18] == 0u;
      if (branch_taken) {
          goto L_0891EBC4;
      }
      goto L_0891EAD8;
    }
L_0891EAD8:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(320)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(324)));
    aot_gpr_31 = (0x0891EAE8u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12) ^ 0x80000000u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891EAE8u) goto L_0891EAE8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891EAE8:
    aot_fpr_20 = aot_fpr_20 + ctx.fpr[26];
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_20 <= ctx.fpr[26])) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_0891EB0C;
      }
      goto L_0891EAFC;
    }
L_0891EAFC:
    aot_gpr_4 = (16585u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 4059u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_20 = aot_fpr_20 - aot_fpr_12;
    goto L_0891EB0C;
L_0891EB0C:
    aot_gpr_31 = (0x0891EB14u);
    aot_fpr_12 = aot_fpr_20 - ctx.fpr[24];
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0162_entry, 162u, 580u, 0x08A8F0B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891EB14u) goto L_0891EB14;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891EB14:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[0] <= ctx.fpr[22])) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_0891EB2C;
      }
      goto L_0891EB24;
    }
L_0891EB24:
    { const bool branch_taken = 0u == 0u;
    aot_fpr_20 = ctx.fpr[24] - ctx.fpr[28];
      if (branch_taken) {
          goto L_0891EB30;
      }
      goto L_0891EB2C;
    }
L_0891EB2C:
    aot_fpr_20 = ctx.fpr[24] + ctx.fpr[28];
    goto L_0891EB30;
L_0891EB30:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[17] = (0u | 173u);
      if (branch_taken) {
          goto L_0891EB44;
      }
      goto L_0891EB38;
    }
L_0891EB38:
    aot_gpr_4 = (0u | 1u);
    { const bool branch_taken = ctx.gpr[18] != aot_gpr_4;
      if (branch_taken) {
          goto L_0891EB4C;
      }
      goto L_0891EB44;
    }
L_0891EB44:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 145u);
      if (branch_taken) {
          goto L_0891EB5C;
      }
      goto L_0891EB4C;
    }
L_0891EB4C:
    aot_gpr_4 = (0u | 2u);
    { const bool branch_taken = ctx.gpr[18] != aot_gpr_4;
      if (branch_taken) {
          goto L_0891EB5C;
      }
      goto L_0891EB58;
    }
L_0891EB58:
    ctx.gpr[17] = (0u | 157u);
    goto L_0891EB5C;
L_0891EB5C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0891EB6Cu);
    aot_gpr_6 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891EB6Cu) goto L_0891EB6C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891EB6C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_0891EB7C;
      }
      goto L_0891EB74;
    }
L_0891EB74:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0891EC88;
      }
      goto L_0891EB7C;
    }
L_0891EB7C:
    ctx.gpr[8] = (16640u << 16u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[8]);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_6 = (0u | 0u);
    aot_gpr_31 = (0x0891EB98u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 163u, 0x089088F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891EB98u) goto L_0891EB98;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891EB98:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-5));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), aot_gpr_4);
    aot_gpr_5 = (2193u << 16u);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    aot_gpr_6 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0891EBBCu);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-13576));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088905F0, 35u, 95u, 0x088905F0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0035_entry, 35u, 95u, 0x088905F0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891EBBCu) goto L_0891EBBC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891EBBC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0891EC24;
      }
      goto L_0891EBC4;
    }
L_0891EBC4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0891EBD4u);
    aot_gpr_6 = (0u | 15u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891EBD4u) goto L_0891EBD4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891EBD4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_0891EBE4;
      }
      goto L_0891EBDC;
    }
L_0891EBDC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0891EC88;
      }
      goto L_0891EBE4;
    }
L_0891EBE4:
    ctx.gpr[8] = (16640u << 16u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[8]);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_6 = (0u | 0u);
    aot_gpr_31 = (0x0891EC00u);
    ctx.gpr[7] = (0u | 15u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 163u, 0x089088F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891EC00u) goto L_0891EC00;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891EC00:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-5));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), aot_gpr_4);
    aot_gpr_5 = (2193u << 16u);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    aot_gpr_6 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0891EC24u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-13576));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088905F0, 35u, 95u, 0x088905F0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0035_entry, 35u, 95u, 0x088905F0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891EC24u) goto L_0891EC24;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891EC24:
    { const bool branch_taken = ctx.gpr[18] != 0u;
      if (branch_taken) {
          goto L_0891EC38;
      }
      goto L_0891EC2C;
    }
L_0891EC2C:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0891EC38u);
    aot_gpr_5 = (0u | 141u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 16u, 0x08860424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891EC38u) goto L_0891EC38;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891EC38:
    aot_gpr_31 = (0x0891EC40u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0162_entry, 162u, 580u, 0x08A8F0B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891EC40u) goto L_0891EC40;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891EC40:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(2256), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_gpr_31 = (0x0891EC4Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 410u, 0x08909880u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891EC4Cu) goto L_0891EC4C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891EC4C:
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2232)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0891EC5Cu);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08908E78, 65u, 261u, 0x08908E78u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0065_entry, 65u, 261u, 0x08908E78u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891EC5Cu) goto L_0891EC5C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891EC5C:
    aot_gpr_31 = (0x0891EC64u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0129_entry, 129u, 36u, 0x08A08730u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891EC64u) goto L_0891EC64;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891EC64:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2232)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0891EC7C;
      }
      goto L_0891EC70;
    }
L_0891EC70:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0891EC7Cu);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08908E78, 65u, 261u, 0x08908E78u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0065_entry, 65u, 261u, 0x08908E78u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891EC7Cu) goto L_0891EC7C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891EC7C:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0891EC88u);
    aot_gpr_5 = (0u | 31u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 240u, 0x08908D60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891EC88u) goto L_0891EC88;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891EC88:
    { std::uint32_t aot_run_words[10]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      ctx.fpr[22] = std::bit_cast<float>(aot_run_words[1]);
      ctx.fpr[24] = std::bit_cast<float>(aot_run_words[2]);
      ctx.fpr[26] = std::bit_cast<float>(aot_run_words[3]);
      ctx.fpr[28] = std::bit_cast<float>(aot_run_words[4]);
      aot_gpr_16 = aot_run_words[5];
      ctx.gpr[17] = aot_run_words[6];
      ctx.gpr[18] = aot_run_words[7];
      ctx.gpr[19] = aot_run_words[8];
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
L_0891ECB8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-64));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_6 & 255u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(2228)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    ctx.gpr[7] = (0u | 17u);
    ctx.gpr[22] = (aot_gpr_4 | 0u);
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_20), std::bit_cast<std::uint32_t>(ctx.fpr[22]), std::bit_cast<std::uint32_t>(ctx.fpr[24])};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_run_words); }
    { const std::uint32_t aot_run_words[5]{ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_run_words); }
    { const std::uint32_t aot_run_words[3]{ctx.gpr[23], ctx.gpr[30], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(44), aot_run_words); }
    { const bool branch_taken = aot_gpr_6 == ctx.gpr[7];
    ctx.gpr[23] = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_0891ED44;
      }
      goto L_0891ED08;
    }
L_0891ED08:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(460)));
    aot_gpr_4 = (aot_gpr_4 & 512u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0891ED3C;
      }
      goto L_0891ED18;
    }
L_0891ED18:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(2120)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0891ED3C;
      }
      goto L_0891ED24;
    }
L_0891ED24:
    aot_gpr_31 = (0x0891ED2Cu);
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 620u, 0x08906DE4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891ED2Cu) goto L_0891ED2C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891ED2C:
    if (ctx.gpr[2] != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(456)));
        goto L_0891ED4C;
    }
    goto L_0891ED34;
L_0891ED34:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0891F2FC;
      }
      goto L_0891ED3C;
    }
L_0891ED3C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0891F2FC;
      }
      goto L_0891ED44;
    }
L_0891ED44:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0891F2FC;
      }
      goto L_0891ED4C;
    }
L_0891ED4C:
    aot_gpr_5 = (4u << 16u);
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0891F2FC;
      }
      goto L_0891ED5C;
    }
L_0891ED5C:
    aot_fpr_20 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(2256)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[23] + static_cast<std::uint32_t>(72)));
    aot_gpr_4 = (aot_gpr_4 & 14u);
    aot_gpr_5 = (0u | 4u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    ctx.gpr[30] = (0u | 0u);
      if (branch_taken) {
          goto L_0891EDA0;
      }
      goto L_0891ED74;
    }
L_0891ED74:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[23] + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0891EDA0;
      }
      goto L_0891ED80;
    }
L_0891ED80:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[23] + static_cast<std::uint32_t>(700)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0891EDA0;
      }
      goto L_0891ED8C;
    }
L_0891ED8C:
    aot_gpr_31 = (0x0891ED94u);
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890D44C, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891ED94u) goto L_0891ED94;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891ED94:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_0891EDA0;
      }
      goto L_0891ED9C;
    }
L_0891ED9C:
    aot_gpr_16 = (0u | 1u);
    goto L_0891EDA0;
L_0891EDA0:
    { const bool branch_taken = aot_gpr_16 != 0u;
      if (branch_taken) {
          goto L_0891EF0C;
      }
      goto L_0891EDA8;
    }
L_0891EDA8:
    aot_gpr_31 = (0x0891EDB0u);
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890D44C, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891EDB0u) goto L_0891EDB0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891EDB0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_0891EDDC;
      }
      goto L_0891EDB8;
    }
L_0891EDB8:
    aot_gpr_4 = (0u | 5u);
    aot_mem.aot_direct_store8(ctx.gpr[22] + static_cast<std::uint32_t>(3257), static_cast<std::uint8_t>(aot_gpr_4));
    { const bool branch_taken = ctx.gpr[23] == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[22] + static_cast<std::uint32_t>(3172), ctx.gpr[23]);
      if (branch_taken) {
          goto L_0891EDD4;
      }
      goto L_0891EDC8;
    }
L_0891EDC8:
    aot_gpr_5 = (ctx.gpr[22] + static_cast<std::uint32_t>(3172));
    aot_gpr_31 = (0x0891EDD4u);
    aot_gpr_4 = (ctx.gpr[23] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08A92F78, 163u, 419u, 0x08A92F78u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0163_entry, 163u, 419u, 0x08A92F78u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891EDD4u) goto L_0891EDD4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891EDD4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0891F2FC;
      }
      goto L_0891EDDC;
    }
L_0891EDDC:
    aot_gpr_4 = (ctx.gpr[23] + static_cast<std::uint32_t>(48));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (ctx.gpr[22] + static_cast<std::uint32_t>(48));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    aot_fpr_12 = aot_fpr_14 - aot_fpr_12;
    aot_gpr_31 = (0x0891EE00u);
    aot_fpr_13 = aot_fpr_13 - ctx.fpr[15];
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891EE00u) goto L_0891EE00;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891EE00:
    aot_gpr_31 = (0x0891EE08u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0162_entry, 162u, 580u, 0x08A8F0B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891EE08u) goto L_0891EE08;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891EE08:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(2256)));
    aot_gpr_31 = (0x0891EE14u);
    aot_fpr_20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0162_entry, 162u, 580u, 0x08A8F0B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891EE14u) goto L_0891EE14;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891EE14:
    aot_mem.aot_direct_store32(ctx.gpr[22] + static_cast<std::uint32_t>(2256), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_fpr_13 = std::bit_cast<float>(0u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(2256)));
    aot_gpr_4 = (16457u << 16u);
    aot_fpr_12 = aot_fpr_20 - aot_fpr_12;
    aot_gpr_4 = (aot_gpr_4 | 4059u);
    ctx.fpr[22] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (16329u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 4059u);
    ctx.fpr[24] = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    if (((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12) ^ 0x80000000u);
        goto L_0891EE4C;
    }
    goto L_0891EE4C;
L_0891EE4C:
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 <= ctx.fpr[22])) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_0891EE70;
      }
      goto L_0891EE60;
    }
L_0891EE60:
    aot_gpr_4 = (16585u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 4059u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_13 = aot_fpr_13 - aot_fpr_12;
    goto L_0891EE70;
L_0891EE70:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 <= ctx.fpr[24])) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_0891EED4;
      }
      goto L_0891EE80;
    }
L_0891EE80:
    aot_gpr_31 = (0x0891EE88u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20934, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891EE88u) goto L_0891EE88;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891EE88:
    aot_gpr_4 = (ctx.gpr[2] & 65535u);
    aot_gpr_4 = (aot_gpr_4 & 7u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0891EECC;
      }
      goto L_0891EE98;
    }
L_0891EE98:
    aot_gpr_31 = (0x0891EEA0u);
    aot_fpr_20 = aot_fpr_20 + ctx.fpr[24];
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20934, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891EEA0u) goto L_0891EEA0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891EEA0:
    ctx.gpr[21] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-20252)));
    ctx.gpr[20] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-20256)));
    ctx.gpr[19] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-20228)));
    ctx.gpr[18] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-20232)));
    aot_gpr_4 = (ctx.gpr[2] & 65535u);
    ctx.gpr[17] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-20220)));
    aot_gpr_4 = (aot_gpr_4 & 1u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_16 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-20224)));
      if (branch_taken) {
          goto L_0891EEF4;
      }
      goto L_0891EEC4;
    }
L_0891EEC4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0891EEF8;
      }
      goto L_0891EECC;
    }
L_0891EECC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0891F2FC;
      }
      goto L_0891EED4;
    }
L_0891EED4:
    aot_gpr_31 = (0x0891EEDCu);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20934, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891EEDCu) goto L_0891EEDC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891EEDC:
    aot_gpr_4 = (ctx.gpr[2] & 65535u);
    aot_gpr_4 = (aot_gpr_4 & 1u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0891EE98;
      }
      goto L_0891EEEC;
    }
L_0891EEEC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[30] = (0u | 1u);
      if (branch_taken) {
          goto L_0891EE98;
      }
      goto L_0891EEF4;
    }
L_0891EEF4:
    aot_fpr_20 = aot_fpr_20 - ctx.fpr[22];
    goto L_0891EEF8;
L_0891EEF8:
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    aot_gpr_31 = (0x0891EF04u);
    aot_gpr_5 = (0u | 141u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 16u, 0x08860424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891EF04u) goto L_0891EF04;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891EF04:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[22] + static_cast<std::uint32_t>(1929))))));
      if (branch_taken) {
          goto L_0891EFE4;
      }
      goto L_0891EF0C;
    }
L_0891EF0C:
    ctx.gpr[21] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-20252)));
    ctx.gpr[20] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-20256)));
    ctx.gpr[19] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-20228)));
    ctx.gpr[18] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-20232)));
    ctx.gpr[17] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-20220)));
    { const bool branch_taken = ctx.gpr[23] == 0u;
    aot_gpr_16 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-20224)));
      if (branch_taken) {
          goto L_0891EFE0;
      }
      goto L_0891EF28;
    }
L_0891EF28:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[23] + static_cast<std::uint32_t>(320)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[23] + static_cast<std::uint32_t>(324)));
    aot_gpr_31 = (0x0891EF38u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12) ^ 0x80000000u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891EF38u) goto L_0891EF38;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891EF38:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(476)));
    aot_gpr_4 = (aot_gpr_4 & 192u);
    aot_gpr_4 = (aot_gpr_4 >> 6u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) > 0;
    aot_fpr_20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_0891EF94;
      }
      goto L_0891EF4C;
    }
L_0891EF4C:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) < 0;
      if (branch_taken) {
          goto L_0891EFD4;
      }
      goto L_0891EF54;
    }
L_0891EF54:
    aot_gpr_31 = (0x0891EF5Cu);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20934, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891EF5Cu) goto L_0891EF5C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891EF5C:
    aot_gpr_4 = (ctx.gpr[2] & 65535u);
    aot_gpr_4 = (aot_gpr_4 & 1u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_gpr_4 = (16457u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 4059u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (49097u << 16u);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_4 = (aot_gpr_4 | 4059u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_14;
    { const bool branch_taken = 0u == 0u;
    aot_fpr_20 = aot_fpr_12 + aot_fpr_20;
      if (branch_taken) {
          goto L_0891EFD4;
      }
      goto L_0891EF94;
    }
L_0891EF94:
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_0891EFB0;
      }
      goto L_0891EFA0;
    }
L_0891EFA0:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0891EFC4;
      }
      goto L_0891EFA8;
    }
L_0891EFA8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0891EFD4;
      }
      goto L_0891EFB0;
    }
L_0891EFB0:
    aot_gpr_4 = (49097u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 4059u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    aot_fpr_20 = aot_fpr_20 + aot_fpr_12;
      if (branch_taken) {
          goto L_0891EFD4;
      }
      goto L_0891EFC4;
    }
L_0891EFC4:
    aot_gpr_4 = (16329u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 4059u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_20 = aot_fpr_20 + aot_fpr_12;
    goto L_0891EFD4;
L_0891EFD4:
    aot_gpr_31 = (0x0891EFDCu);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0162_entry, 162u, 580u, 0x08A8F0B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891EFDCu) goto L_0891EFDC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891EFDC:
    aot_fpr_20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_0891EFE0;
L_0891EFE0:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[22] + static_cast<std::uint32_t>(1929))))));
    goto L_0891EFE4;
L_0891EFE4:
    aot_gpr_5 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 - aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[22] + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1396));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_6) >> 31u));
    ctx.gpr[7] = (aot_gpr_6 | 0u);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x0891F014u);
    aot_gpr_6 = (ctx.gpr[7] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0215_entry, 215u, 178u, 0x08B60E84u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891F014u) goto L_0891F014;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891F014:
    ctx.gpr[7] = (ctx.gpr[3] & ctx.gpr[19]);
    aot_gpr_6 = (ctx.gpr[2] & ctx.gpr[18]);
    { const bool branch_taken = aot_gpr_6 != aot_gpr_16;
      if (branch_taken) {
          goto L_0891F02C;
      }
      goto L_0891F024;
    }
L_0891F024:
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[17];
      if (branch_taken) {
          goto L_0891F0CC;
      }
      goto L_0891F02C;
    }
L_0891F02C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    aot_gpr_31 = (0x0891F03Cu);
    aot_gpr_6 = (0u | 214u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891F03Cu) goto L_0891F03C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891F03C:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0891F054;
      }
      goto L_0891F048;
    }
L_0891F048:
    aot_gpr_5 = (50298u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_0891F054;
L_0891F054:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    aot_gpr_31 = (0x0891F064u);
    aot_gpr_6 = (0u | 215u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891F064u) goto L_0891F064;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891F064:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0891F07C;
      }
      goto L_0891F070;
    }
L_0891F070:
    aot_gpr_5 = (50298u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_0891F07C;
L_0891F07C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    aot_gpr_31 = (0x0891F08Cu);
    aot_gpr_6 = (0u | 216u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891F08Cu) goto L_0891F08C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891F08C:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0891F0A4;
      }
      goto L_0891F098;
    }
L_0891F098:
    aot_gpr_5 = (50298u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_0891F0A4;
L_0891F0A4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    aot_gpr_31 = (0x0891F0B4u);
    aot_gpr_6 = (0u | 217u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891F0B4u) goto L_0891F0B4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891F0B4:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0891F0CC;
      }
      goto L_0891F0C0;
    }
L_0891F0C0:
    aot_gpr_5 = (50298u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_0891F0CC;
L_0891F0CC:
    { const bool branch_taken = ctx.gpr[30] != 0u;
      if (branch_taken) {
          goto L_0891F0F8;
      }
      goto L_0891F0D4;
    }
L_0891F0D4:
    aot_gpr_31 = (0x0891F0DCu);
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890D44C, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891F0DCu) goto L_0891F0DC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891F0DC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_0891F1E0;
      }
      goto L_0891F0E4;
    }
L_0891F0E4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(1364)));
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(20)));
    aot_gpr_4 = (aot_gpr_4 & 16u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0891F1E0;
      }
      goto L_0891F0F8;
    }
L_0891F0F8:
    aot_mem.aot_direct_store32(ctx.gpr[22] + static_cast<std::uint32_t>(2256), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x0891F104u);
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08909B60, 65u, 454u, 0x08909B60u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_16, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0065_entry, 65u, 454u, 0x08909B60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891F104u) goto L_0891F104;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891F104:
    aot_gpr_31 = (0x0891F10Cu);
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 410u, 0x08909880u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891F10Cu) goto L_0891F10C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891F10C:
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    aot_gpr_5 = (ctx.gpr[23] | 0u);
    aot_gpr_6 = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    aot_gpr_31 = (0x0891F124u);
    ctx.gpr[8] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 442u, 0x08909A64u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891F124u) goto L_0891F124;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891F124:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    aot_gpr_31 = (0x0891F134u);
    aot_gpr_6 = (0u | 156u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891F134u) goto L_0891F134;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891F134:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_0891F1A8;
      }
      goto L_0891F13C;
    }
L_0891F13C:
    ctx.gpr[8] = (16640u << 16u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(80)));
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[8]);
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    aot_gpr_6 = (0u | 0u);
    aot_gpr_31 = (0x0891F158u);
    ctx.gpr[7] = (0u | 156u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 163u, 0x089088F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891F158u) goto L_0891F158;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891F158:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-5));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), aot_gpr_4);
    aot_gpr_5 = (2193u << 16u);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    aot_gpr_6 = (ctx.gpr[22] | 0u);
    aot_gpr_31 = (0x0891F17Cu);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-13576));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088905F0, 35u, 95u, 0x088905F0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0035_entry, 35u, 95u, 0x088905F0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891F17Cu) goto L_0891F17C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891F17C:
    aot_gpr_16 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(2232)));
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    aot_gpr_31 = (0x0891F18Cu);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08908E78, 65u, 261u, 0x08908E78u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0065_entry, 65u, 261u, 0x08908E78u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891F18Cu) goto L_0891F18C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891F18C:
    aot_gpr_31 = (0x0891F194u);
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0129_entry, 129u, 36u, 0x08A08730u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891F194u) goto L_0891F194;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891F194:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(2232)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0891F1B0;
      }
      goto L_0891F1A0;
    }
L_0891F1A0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0891F1BC;
      }
      goto L_0891F1A8;
    }
L_0891F1A8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0891F2FC;
      }
      goto L_0891F1B0;
    }
L_0891F1B0:
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    aot_gpr_31 = (0x0891F1BCu);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08908E78, 65u, 261u, 0x08908E78u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0065_entry, 65u, 261u, 0x08908E78u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891F1BCu) goto L_0891F1BC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891F1BC:
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    aot_gpr_31 = (0x0891F1C8u);
    aot_gpr_5 = (0u | 31u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 240u, 0x08908D60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891F1C8u) goto L_0891F1C8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891F1C8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[23] + static_cast<std::uint32_t>(72)));
    aot_gpr_4 = (aot_gpr_4 & 14u);
    aot_gpr_4 = (aot_gpr_4 ^ 4u);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_gpr_4 & 255u);
      if (branch_taken) {
          goto L_0891F24C;
      }
      goto L_0891F1E0;
    }
L_0891F1E0:
    aot_mem.aot_direct_store32(ctx.gpr[22] + static_cast<std::uint32_t>(2256), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x0891F1ECu);
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08909B60, 65u, 454u, 0x08909B60u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_16, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0065_entry, 65u, 454u, 0x08909B60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891F1ECu) goto L_0891F1EC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891F1EC:
    aot_gpr_31 = (0x0891F1F4u);
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 410u, 0x08909880u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891F1F4u) goto L_0891F1F4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891F1F4:
    aot_gpr_31 = (0x0891F1FCu);
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0129_entry, 129u, 36u, 0x08A08730u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891F1FCu) goto L_0891F1FC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891F1FC:
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    aot_gpr_31 = (0x0891F208u);
    aot_gpr_5 = (0u | 48u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 240u, 0x08908D60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891F208u) goto L_0891F208;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891F208:
    ctx.gpr[8] = (16640u << 16u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(80)));
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[8]);
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    aot_gpr_6 = (0u | 0u);
    aot_gpr_31 = (0x0891F224u);
    ctx.gpr[7] = (0u | 146u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 163u, 0x089088F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891F224u) goto L_0891F224;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891F224:
    aot_gpr_5 = (2193u << 16u);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    aot_gpr_6 = (ctx.gpr[22] | 0u);
    aot_gpr_31 = (0x0891F238u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-13576));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088905F0, 35u, 95u, 0x088905F0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0035_entry, 35u, 95u, 0x088905F0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891F238u) goto L_0891F238;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891F238:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[23] + static_cast<std::uint32_t>(72)));
    aot_gpr_4 = (aot_gpr_4 & 14u);
    aot_gpr_4 = (aot_gpr_4 ^ 4u);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    goto L_0891F24C;
L_0891F24C:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0891F2FC;
      }
      goto L_0891F254;
    }
L_0891F254:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(1360)));
    aot_gpr_5 = (0u | 6u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_0891F2FC;
      }
      goto L_0891F264;
    }
L_0891F264:
    ctx.gpr[23] = (aot_mem.aot_direct_load32(ctx.gpr[23] + static_cast<std::uint32_t>(900)));
    { const bool branch_taken = ctx.gpr[23] == 0u;
      if (branch_taken) {
          goto L_0891F2FC;
      }
      goto L_0891F270;
    }
L_0891F270:
    aot_gpr_31 = (0x0891F278u);
    aot_gpr_4 = (ctx.gpr[23] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890D44C, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891F278u) goto L_0891F278;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891F278:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_0891F2FC;
      }
      goto L_0891F280;
    }
L_0891F280:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    ctx.gpr[17] = (ctx.gpr[22] + static_cast<std::uint32_t>(48));
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_6 = (aot_gpr_4 << 8u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 << 5u);
    aot_gpr_5 = (2238u << 16u);
    aot_gpr_4 = (aot_gpr_6 + aot_gpr_4);
    aot_gpr_16 = (aot_gpr_5 + static_cast<std::uint32_t>(-6992));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_16);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (0u | 8u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(2288));
    aot_gpr_6 = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (ctx.gpr[22] | 0u);
    aot_gpr_31 = (0x0891F2C4u);
    ctx.gpr[8] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0171_entry, 171u, 958u, 0x08AB3BE8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891F2C4u) goto L_0891F2C4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891F2C4:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_6 = (aot_gpr_4 << 8u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (aot_gpr_6 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_16);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (0u | 9u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(2288));
    aot_gpr_6 = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (ctx.gpr[22] | 0u);
    aot_gpr_31 = (0x0891F2FCu);
    ctx.gpr[8] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0171_entry, 171u, 958u, 0x08AB3BE8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891F2FCu) goto L_0891F2FC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891F2FC:
    { std::uint32_t aot_run_words[13]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      ctx.fpr[22] = std::bit_cast<float>(aot_run_words[1]);
      ctx.fpr[24] = std::bit_cast<float>(aot_run_words[2]);
      aot_gpr_16 = aot_run_words[3];
      ctx.gpr[17] = aot_run_words[4];
      ctx.gpr[18] = aot_run_words[5];
      ctx.gpr[19] = aot_run_words[6];
      ctx.gpr[20] = aot_run_words[7];
      ctx.gpr[21] = aot_run_words[8];
      ctx.gpr[22] = aot_run_words[9];
      ctx.gpr[23] = aot_run_words[10];
      ctx.gpr[30] = aot_run_words[11];
      aot_gpr_31 = aot_run_words[12];
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
L_0891F338:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(2120)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[18] = (aot_gpr_4 | 0u);
    aot_fpr_20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_13));
    ctx.gpr[17] = (aot_gpr_5 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_gpr_31);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    aot_gpr_16 = (aot_gpr_6 | 0u);
      if (branch_taken) {
          goto L_0891F38C;
      }
      goto L_0891F374;
    }
L_0891F374:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2120)));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-964));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(86))))));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_0891F38C;
      }
      goto L_0891F388;
    }
L_0891F388:
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(2120), 0u);
    goto L_0891F38C;
L_0891F38C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1340)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0891F3B4;
      }
      goto L_0891F398;
    }
L_0891F398:
    aot_gpr_31 = (0x0891F3A0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0127_entry, 127u, 371u, 0x08A01528u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891F3A0u) goto L_0891F3A0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891F3A0:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1340)));
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x0891F3B4u);
    ctx.gpr[7] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0127_entry, 127u, 746u, 0x08A02EC8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891F3B4u) goto L_0891F3B4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891F3B4:
    aot_gpr_31 = (0x0891F3BCu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891F3BCu) goto L_0891F3BC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891F3BC:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[2];
      if (branch_taken) {
          goto L_0891F458;
      }
      goto L_0891F3C4;
    }
L_0891F3C4:
    aot_gpr_31 = (0x0891F3CCu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891F3CCu) goto L_0891F3CC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891F3CC:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3261))))));
    aot_gpr_4 = (aot_gpr_4 & 16u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0891F404;
      }
      goto L_0891F3DC;
    }
L_0891F3DC:
    aot_gpr_31 = (0x0891F3E4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891F3E4u) goto L_0891F3E4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891F3E4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(2228)));
    aot_gpr_4 = (aot_gpr_4 ^ 68u);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0891F40C;
      }
      goto L_0891F3FC;
    }
L_0891F3FC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0891F44C;
      }
      goto L_0891F404;
    }
L_0891F404:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0891F798;
      }
      goto L_0891F40C;
    }
L_0891F40C:
    aot_gpr_31 = (0x0891F414u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891F414u) goto L_0891F414;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891F414:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0891F44C;
      }
      goto L_0891F420;
    }
L_0891F420:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(617))))));
    aot_gpr_4 = (aot_gpr_4 & 4u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0891F44C;
      }
      goto L_0891F430;
    }
L_0891F430:
    ctx.gpr[7] = (16256u << 16u);
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[7]);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_31 = (0x0891F44Cu);
    aot_gpr_6 = (0u | 205u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 503u, 0x08A05F80u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891F44Cu) goto L_0891F44C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891F44C:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x0891F458u);
    aot_gpr_5 = (0u | 103u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 16u, 0x08860424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891F458u) goto L_0891F458;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891F458:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x0891F464u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 69u, 0x08910440u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891F464u) goto L_0891F464;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891F464:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2228)));
    aot_gpr_5 = (0u | 58u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_0891F794;
      }
      goto L_0891F474;
    }
L_0891F474:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2228)));
    aot_gpr_5 = (0u | 57u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_0891F794;
      }
      goto L_0891F484;
    }
L_0891F484:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2228)));
    aot_gpr_5 = (0u | 45u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_0891F4A4;
      }
      goto L_0891F494;
    }
L_0891F494:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2228)));
    aot_gpr_5 = (0u | 46u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_0891F4B0;
      }
      goto L_0891F4A4;
    }
L_0891F4A4:
    aot_gpr_4 = (16128u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = ctx.fpr[22]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    goto L_0891F4B0;
L_0891F4B0:
    aot_gpr_31 = (0x0891F4B8u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0129_entry, 129u, 36u, 0x08A08730u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891F4B8u) goto L_0891F4B8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891F4B8:
    aot_gpr_31 = (0x0891F4C0u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 899u, 0x0890B900u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891F4C0u) goto L_0891F4C0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891F4C0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(456)));
    aot_fpr_12 = std::bit_cast<float>(0u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-65));
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(456), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2228)));
    aot_gpr_5 = (0u | 55u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_0891F538;
      }
      goto L_0891F4E8;
    }
L_0891F4E8:
    aot_gpr_31 = (0x0891F4F0u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890D44C, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891F4F0u) goto L_0891F4F0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891F4F0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_0891F598;
      }
      goto L_0891F4F8;
    }
L_0891F4F8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1152)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0891F518;
      }
      goto L_0891F504;
    }
L_0891F504:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1152)));
    aot_gpr_5 = (0u | 6u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_0891F598;
      }
      goto L_0891F518;
    }
L_0891F518:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(92)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(160));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_6;
    aot_gpr_31 = (0x0891F530u);
    aot_gpr_4 = (ctx.gpr[18] + aot_gpr_5);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891F530u) goto L_0891F530;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891F530:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0891F598;
      }
      goto L_0891F538;
    }
L_0891F538:
    aot_gpr_31 = (0x0891F540u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891F540u) goto L_0891F540;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891F540:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_0891F570;
      }
      goto L_0891F548;
    }
L_0891F548:
    aot_gpr_31 = (0x0891F550u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890F6B4, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891F550u) goto L_0891F550;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891F550:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_0891F598;
      }
      goto L_0891F558;
    }
L_0891F558:
    aot_gpr_31 = (0x0891F560u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890F6B4, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891F560u) goto L_0891F560;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891F560:
    aot_gpr_4 = (50298u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[2] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_0891F598;
      }
      goto L_0891F570;
    }
L_0891F570:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2228)));
    aot_gpr_5 = (0u | 61u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_0891F590;
      }
      goto L_0891F580;
    }
L_0891F580:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2228)));
    aot_gpr_5 = (0u | 59u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_0891F598;
      }
      goto L_0891F590;
    }
L_0891F590:
    aot_gpr_31 = (0x0891F598u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0105_entry, 105u, 441u, 0x089AA5B8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891F598u) goto L_0891F598;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891F598:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(236)));
    aot_gpr_4 = (aot_gpr_4 & 256u);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0891F5B8;
      }
      goto L_0891F5B0;
    }
L_0891F5B0:
    aot_gpr_16 = (0u | 0u);
    ctx.gpr[17] = (0u | 152u);
    goto L_0891F5B8;
L_0891F5B8:
    aot_gpr_4 = (0u | 173u);
    { const bool branch_taken = ctx.gpr[17] == aot_gpr_4;
      if (branch_taken) {
          goto L_0891F6C0;
      }
      goto L_0891F5C4;
    }
L_0891F5C4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2228)));
    aot_gpr_5 = (0u | 17u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_0891F640;
      }
      goto L_0891F5D4;
    }
L_0891F5D4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(92)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(216));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_6;
    aot_gpr_31 = (0x0891F5ECu);
    aot_gpr_4 = (ctx.gpr[18] + aot_gpr_5);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891F5ECu) goto L_0891F5EC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891F5EC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(8));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_6;
    aot_gpr_31 = (0x0891F604u);
    aot_gpr_4 = (ctx.gpr[2] + aot_gpr_5);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891F604u) goto L_0891F604;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891F604:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    aot_gpr_5 = (0u | 98u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_5 = (0u | 95u);
      if (branch_taken) {
          goto L_0891F624;
      }
      goto L_0891F614;
    }
L_0891F614:
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_5 = (0u | 5u);
      if (branch_taken) {
          goto L_0891F624;
      }
      goto L_0891F61C;
    }
L_0891F61C:
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_0891F640;
      }
      goto L_0891F624;
    }
L_0891F624:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_6 = (0u | 63u);
    aot_gpr_31 = (0x0891F63Cu);
    ctx.gpr[7] = (0u | 275u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 163u, 0x089088F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891F63Cu) goto L_0891F63C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891F63C:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    goto L_0891F640;
L_0891F640:
    { const bool branch_taken = ctx.gpr[19] != 0u;
      if (branch_taken) {
          goto L_0891F664;
      }
      goto L_0891F648;
    }
L_0891F648:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_6 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0891F660u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 163u, 0x089088F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891F660u) goto L_0891F660;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891F660:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    goto L_0891F664;
L_0891F664:
    aot_fpr_12 = std::bit_cast<float>(0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_20 <= aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_0891F67C;
      }
      goto L_0891F678;
    }
L_0891F678:
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(aot_fpr_20));
    goto L_0891F67C;
L_0891F67C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-9));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 & 1u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0891F6D4;
      }
      goto L_0891F698;
    }
L_0891F698:
    aot_gpr_5 = (2193u << 16u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_6 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x0891F6ACu);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-13152));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088905F0, 35u, 95u, 0x088905F0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0035_entry, 35u, 95u, 0x088905F0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891F6ACu) goto L_0891F6AC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891F6AC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(456)));
    aot_gpr_5 = (8192u << 16u);
    aot_gpr_4 = (aot_gpr_4 | aot_gpr_5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(456), aot_gpr_4);
      if (branch_taken) {
          goto L_0891F6D4;
      }
      goto L_0891F6C0;
    }
L_0891F6C0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(456)));
    aot_gpr_5 = (57344u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(456), aot_gpr_4);
    goto L_0891F6D4;
L_0891F6D4:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x0891F6E0u);
    aot_gpr_5 = (0u | 57u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 240u, 0x08908D60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891F6E0u) goto L_0891F6E0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891F6E0:
    aot_gpr_31 = (0x0891F6E8u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 227u, 0x089050D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891F6E8u) goto L_0891F6E8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891F6E8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_0891F6FC;
      }
      goto L_0891F6F0;
    }
L_0891F6F0:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x0891F6FCu);
    aot_gpr_5 = (0u | 102u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 16u, 0x08860424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891F6FCu) goto L_0891F6FC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891F6FC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2232)));
    aot_gpr_5 = (0u | 61u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_0891F71C;
      }
      goto L_0891F70C;
    }
L_0891F70C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2232)));
    aot_gpr_5 = (0u | 59u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_0891F724;
      }
      goto L_0891F71C;
    }
L_0891F71C:
    aot_gpr_31 = (0x0891F724u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0105_entry, 105u, 441u, 0x089AA5B8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891F724u) goto L_0891F724;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891F724:
    aot_gpr_31 = (0x0891F72Cu);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891F72Cu) goto L_0891F72C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891F72C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_0891F73C;
      }
      goto L_0891F734;
    }
L_0891F734:
    aot_gpr_31 = (0x0891F73Cu);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 970u, 0x0890BDA8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891F73Cu) goto L_0891F73C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891F73C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1768), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-1040)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (0u | 40u);
      if (branch_taken) {
          goto L_0891F78C;
      }
      goto L_0891F750;
    }
L_0891F750:
    { const bool branch_taken = ctx.gpr[17] != aot_gpr_4;
      if (branch_taken) {
          goto L_0891F78C;
      }
      goto L_0891F758;
    }
L_0891F758:
    { const bool branch_taken = ctx.gpr[19] == 0u;
      if (branch_taken) {
          goto L_0891F78C;
      }
      goto L_0891F760;
    }
L_0891F760:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
    aot_gpr_5 = (15395u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(32)));
    aot_gpr_4 = (aot_gpr_5 | 55050u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x0891F780u);
    aot_fpr_12 = aot_fpr_12 - aot_fpr_13;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0035_entry, 35u, 73u, 0x08890474u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891F780u) goto L_0891F780;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891F780:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_gpr_4 | 1u);
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), aot_gpr_4);
    goto L_0891F78C;
L_0891F78C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_0891F798;
      }
      goto L_0891F794;
    }
L_0891F794:
    ctx.gpr[2] = (0u | 0u);
    goto L_0891F798;
L_0891F798:
    { std::uint32_t aot_run_words[7]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      ctx.fpr[22] = std::bit_cast<float>(aot_run_words[1]);
      aot_gpr_16 = aot_run_words[2];
      ctx.gpr[17] = aot_run_words[3];
      ctx.gpr[18] = aot_run_words[4];
      ctx.gpr[19] = aot_run_words[5];
      aot_gpr_31 = aot_run_words[6];
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
L_0891F7BC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(2248)));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(2244)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_20));
    { const std::uint32_t aot_run_words[5]{ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_run_words); }
    { const bool branch_taken = aot_gpr_6 == ctx.gpr[7];
    ctx.gpr[17] = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_0891F84C;
      }
      goto L_0891F7F0;
    }
L_0891F7F0:
    aot_gpr_31 = (0x0891F7F8u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 620u, 0x08906DE4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891F7F8u) goto L_0891F7F8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891F7F8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_0891F84C;
      }
      goto L_0891F800;
    }
L_0891F800:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2244)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0891F838;
      }
      goto L_0891F80C;
    }
L_0891F80C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2228)));
    aot_gpr_5 = (0u | 17u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_0891F830;
      }
      goto L_0891F81C;
    }
L_0891F81C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2120)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0891F854;
      }
      goto L_0891F828;
    }
L_0891F828:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0891F868;
      }
      goto L_0891F830;
    }
L_0891F830:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0891FCEC;
      }
      goto L_0891F838;
    }
L_0891F838:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0891F844u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 304u, 0x08911138u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891F844u) goto L_0891F844;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891F844:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0891FCEC;
      }
      goto L_0891F84C;
    }
L_0891F84C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0891FCEC;
      }
      goto L_0891F854;
    }
L_0891F854:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0891F860u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 305u, 0x08911140u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891F860u) goto L_0891F860;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891F860:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_0891F888;
      }
      goto L_0891F868;
    }
L_0891F868:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(468)));
    aot_gpr_5 = (16u << 16u);
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0891F890;
      }
      goto L_0891F87C;
    }
L_0891F87C:
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(776)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(80)));
      if (branch_taken) {
          goto L_0891F8C0;
      }
      goto L_0891F888;
    }
L_0891F888:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0891FCEC;
      }
      goto L_0891F890;
    }
L_0891F890:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(676)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0891F8B8;
      }
      goto L_0891F89C;
    }
L_0891F89C:
    aot_gpr_31 = (0x0891F8A4u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890D44C, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891F8A4u) goto L_0891F8A4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891F8A4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_0891F8B8;
      }
      goto L_0891F8AC;
    }
L_0891F8AC:
    ctx.gpr[17] = (0u | 30u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(80)));
      if (branch_taken) {
          goto L_0891F8C0;
      }
      goto L_0891F8B8;
    }
L_0891F8B8:
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(776)));
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    goto L_0891F8C0;
L_0891F8C0:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x0891F8D0u);
    aot_gpr_6 = (0u | 217u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891F8D0u) goto L_0891F8D0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891F8D0:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
      if (branch_taken) {
          goto L_0891F8F8;
      }
      goto L_0891F8DC;
    }
L_0891F8DC:
    ctx.gpr[7] = (16640u << 16u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[7]);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x0891F8F4u);
    aot_gpr_6 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 819u, 0x08913524u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891F8F4u) goto L_0891F8F4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891F8F4:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    goto L_0891F8F8;
L_0891F8F8:
    { const bool branch_taken = ctx.gpr[18] != 0u;
      if (branch_taken) {
          goto L_0891F980;
      }
      goto L_0891F900;
    }
L_0891F900:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0891F910u);
    aot_gpr_6 = (0u | 12u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891F910u) goto L_0891F910;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891F910:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
      if (branch_taken) {
          goto L_0891F94C;
      }
      goto L_0891F91C;
    }
L_0891F91C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(236)));
    aot_gpr_4 = (aot_gpr_4 & 256u);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0891F94C;
      }
      goto L_0891F934;
    }
L_0891F934:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2236)));
    aot_gpr_5 = (0u | 12u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_5 = (0u | 20u);
      if (branch_taken) {
          goto L_0891F95C;
      }
      goto L_0891F944;
    }
L_0891F944:
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_0891F95C;
      }
      goto L_0891F94C;
    }
L_0891F94C:
    { const bool branch_taken = ctx.gpr[18] != 0u;
      if (branch_taken) {
          goto L_0891F964;
      }
      goto L_0891F954;
    }
L_0891F954:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0891F980;
      }
      goto L_0891F95C;
    }
L_0891F95C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0891FCEC;
      }
      goto L_0891F964;
    }
L_0891F964:
    ctx.gpr[7] = (16512u << 16u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[7]);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x0891F97Cu);
    aot_gpr_6 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 819u, 0x08913524u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891F97Cu) goto L_0891F97C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891F97C:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    goto L_0891F980;
L_0891F980:
    { const bool branch_taken = ctx.gpr[18] != 0u;
      if (branch_taken) {
          goto L_0891FCEC;
      }
      goto L_0891F988;
    }
L_0891F988:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2244)));
    aot_gpr_31 = (0x0891F994u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 304u, 0x08911138u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891F994u) goto L_0891F994;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891F994:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2244)));
    ctx.gpr[19] = (0u | 2u);
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[19];
    aot_gpr_5 = (0u | 6u);
      if (branch_taken) {
          goto L_0891F9BC;
      }
      goto L_0891F9A4;
    }
L_0891F9A4:
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_5 = (0u | 4u);
      if (branch_taken) {
          goto L_0891F9BC;
      }
      goto L_0891F9AC;
    }
L_0891F9AC:
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_5 = (0u | 5u);
      if (branch_taken) {
          goto L_0891F9BC;
      }
      goto L_0891F9B4;
    }
L_0891F9B4:
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_0891FA3C;
      }
      goto L_0891F9BC;
    }
L_0891F9BC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    aot_gpr_31 = (0x0891F9C8u);
    aot_gpr_5 = (0u | 16u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0026_entry, 26u, 211u, 0x0886D4F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891F9C8u) goto L_0891F9C8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891F9C8:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_5 = (49152u << 16u);
      if (branch_taken) {
          goto L_0891FA28;
      }
      goto L_0891F9D4;
    }
L_0891F9D4:
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_5);
    ctx.gpr[20] = (4u << 16u);
    goto L_0891F9DC;
L_0891F9DC:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_gpr_6 = (aot_gpr_5 & 8u);
    aot_gpr_6 = (0u < aot_gpr_6 ? 1u : 0u);
    aot_gpr_6 = (aot_gpr_6 & 255u);
    { const bool branch_taken = aot_gpr_6 != 0u;
    aot_gpr_5 = (aot_gpr_5 & ctx.gpr[20]);
      if (branch_taken) {
          goto L_0891FA14;
      }
      goto L_0891F9F4;
    }
L_0891F9F4:
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_0891FA14;
      }
      goto L_0891FA04;
    }
L_0891FA04:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_5 = (aot_gpr_5 | 4u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), aot_gpr_5);
    goto L_0891FA14;
L_0891FA14:
    aot_gpr_31 = (0x0891FA1Cu);
    aot_gpr_5 = (0u | 16u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0026_entry, 26u, 217u, 0x0886D53Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891FA1Cu) goto L_0891FA1C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891FA1C:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0891F9DC;
      }
      goto L_0891FA28;
    }
L_0891FA28:
    aot_gpr_31 = (0x0891FA30u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 410u, 0x08909880u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891FA30u) goto L_0891FA30;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891FA30:
    aot_gpr_31 = (0x0891FA38u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08909B60, 65u, 454u, 0x08909B60u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_16, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0065_entry, 65u, 454u, 0x08909B60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891FA38u) goto L_0891FA38;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891FA38:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2244)));
    goto L_0891FA3C;
L_0891FA3C:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    aot_gpr_5 = (aot_gpr_4 < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_0891FB64;
      }
      goto L_0891FA4C;
    }
L_0891FA4C:
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0891FAC0;
      }
      goto L_0891FA58;
    }
L_0891FA58:
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_0891FB64;
      }
      goto L_0891FA60;
    }
L_0891FA60:
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0891FAE4;
      }
      goto L_0891FA68;
    }
L_0891FA68:
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_0891FB40;
      }
      goto L_0891FA70;
    }
L_0891FA70:
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[1];
      if (branch_taken) {
          goto L_0891FA9C;
      }
      goto L_0891FA78;
    }
L_0891FA78:
    ctx.gpr[8] = (16512u << 16u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[8]);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_6 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x0891FA94u);
    ctx.gpr[7] = (0u | 6u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 163u, 0x089088F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891FA94u) goto L_0891FA94;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891FA94:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_0891FB64;
      }
      goto L_0891FA9C;
    }
L_0891FA9C:
    ctx.gpr[8] = (16256u << 16u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[8]);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_6 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x0891FAB8u);
    ctx.gpr[7] = (0u | 3u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 163u, 0x089088F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891FAB8u) goto L_0891FAB8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891FAB8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_0891FB64;
      }
      goto L_0891FAC0;
    }
L_0891FAC0:
    ctx.gpr[8] = (16256u << 16u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[8]);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_6 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x0891FADCu);
    ctx.gpr[7] = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 163u, 0x089088F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891FADCu) goto L_0891FADC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891FADC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_0891FB64;
      }
      goto L_0891FAE4;
    }
L_0891FAE4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2228)));
    aot_gpr_5 = (0u | 9u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(80)));
      if (branch_taken) {
          goto L_0891FB18;
      }
      goto L_0891FAF4;
    }
L_0891FAF4:
    ctx.gpr[8] = (16448u << 16u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[8]);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_6 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x0891FB10u);
    ctx.gpr[7] = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 163u, 0x089088F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891FB10u) goto L_0891FB10;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891FB10:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_0891FB38;
      }
      goto L_0891FB18;
    }
L_0891FB18:
    ctx.gpr[8] = (16256u << 16u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[8]);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_6 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x0891FB34u);
    ctx.gpr[7] = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 163u, 0x089088F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891FB34u) goto L_0891FB34;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891FB34:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    goto L_0891FB38;
L_0891FB38:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0891FB64;
      }
      goto L_0891FB40;
    }
L_0891FB40:
    ctx.gpr[8] = (16256u << 16u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[8]);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_6 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x0891FB5Cu);
    ctx.gpr[7] = (0u | 5u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 163u, 0x089088F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891FB5Cu) goto L_0891FB5C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891FB5C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_0891FB64;
      }
      goto L_0891FB64;
    }
L_0891FB64:
    { const bool branch_taken = ctx.gpr[18] == 0u;
      if (branch_taken) {
          goto L_0891FCEC;
      }
      goto L_0891FB6C;
    }
L_0891FB6C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(676)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0891FC78;
      }
      goto L_0891FB78;
    }
L_0891FB78:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0891FB88u);
    aot_gpr_6 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891FB88u) goto L_0891FB88;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891FB88:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0891FBAC;
      }
      goto L_0891FB94;
    }
L_0891FB94:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(676)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(80)));
    aot_gpr_31 = (0x0891FBA8u);
    aot_gpr_6 = (0u | 3u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891FBA8u) goto L_0891FBA8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891FBA8:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    goto L_0891FBAC;
L_0891FBAC:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0891FBCC;
      }
      goto L_0891FBB4;
    }
L_0891FBB4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(676)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(80)));
    aot_gpr_31 = (0x0891FBC8u);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891FBC8u) goto L_0891FBC8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891FBC8:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    goto L_0891FBCC;
L_0891FBCC:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0891FBEC;
      }
      goto L_0891FBD4;
    }
L_0891FBD4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(676)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(80)));
    aot_gpr_31 = (0x0891FBE8u);
    aot_gpr_6 = (0u | 5u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891FBE8u) goto L_0891FBE8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891FBE8:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    goto L_0891FBEC;
L_0891FBEC:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0891FC00;
      }
      goto L_0891FBF4;
    }
L_0891FBF4:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_0891FCEC;
      }
      goto L_0891FC00;
    }
L_0891FC00:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2276)));
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[19];
      if (branch_taken) {
          goto L_0891FC1C;
      }
      goto L_0891FC0C;
    }
L_0891FC0C:
    aot_gpr_4 = (16256u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_0891FCEC;
      }
      goto L_0891FC1C;
    }
L_0891FC1C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(76)));
    aot_gpr_5 = (16320u << 16u);
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 >> 22u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) >= 0;
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
      if (branch_taken) {
          goto L_0891FC44;
      }
      goto L_0891FC38;
    }
L_0891FC38:
    aot_gpr_4 = (20352u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    goto L_0891FC44;
L_0891FC44:
    aot_gpr_4 = (16076u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_4 = (12288u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (16281u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 39322u);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = ctx.fpr[15] - aot_fpr_12;
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_0891FCEC;
      }
      goto L_0891FC78;
    }
L_0891FC78:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2276)));
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[19];
      if (branch_taken) {
          goto L_0891FC94;
      }
      goto L_0891FC84;
    }
L_0891FC84:
    aot_gpr_4 = (16256u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_0891FCEC;
      }
      goto L_0891FC94;
    }
L_0891FC94:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(76)));
    aot_gpr_5 = (16320u << 16u);
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 >> 22u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) >= 0;
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
      if (branch_taken) {
          goto L_0891FCBC;
      }
      goto L_0891FCB0;
    }
L_0891FCB0:
    aot_gpr_4 = (20352u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    goto L_0891FCBC;
L_0891FCBC:
    aot_gpr_4 = (16076u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_4 = (12288u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (16281u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 39322u);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = ctx.fpr[15] - aot_fpr_12;
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_0891FCEC;
L_0891FCEC:
    { std::uint32_t aot_run_words[7]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      aot_gpr_16 = aot_run_words[1];
      ctx.gpr[17] = aot_run_words[2];
      ctx.gpr[18] = aot_run_words[3];
      ctx.gpr[19] = aot_run_words[4];
      ctx.gpr[20] = aot_run_words[5];
      aot_gpr_31 = aot_run_words[6];
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
L_0891FD10:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-1328));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1280), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    { const std::uint32_t aot_run_words[6]{std::bit_cast<std::uint32_t>(aot_fpr_20), std::bit_cast<std::uint32_t>(ctx.fpr[22]), std::bit_cast<std::uint32_t>(ctx.fpr[24]), std::bit_cast<std::uint32_t>(ctx.fpr[26]), std::bit_cast<std::uint32_t>(ctx.fpr[28]), std::bit_cast<std::uint32_t>(ctx.fpr[30])};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(1256), aot_run_words); }
    { const std::uint32_t aot_run_words[8]{ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], ctx.gpr[23], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(1284), aot_run_words); }
    aot_gpr_31 = (0x0891FD5Cu);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0018_entry, 18u, 271u, 0x0884D5D4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891FD5Cu) goto L_0891FD5C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891FD5C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(472)));
    aot_gpr_5 = (65535u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(32767));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(472), aot_gpr_4);
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_31 = (0x0891FD7Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890D44C, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891FD7Cu) goto L_0891FD7C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891FD7C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_0891FD98;
      }
      goto L_0891FD84;
    }
L_0891FD84:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2228)));
    aot_gpr_5 = (0u | 55u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_0891FD98;
      }
      goto L_0891FD94;
    }
L_0891FD94:
    ctx.gpr[17] = (0u | 1u);
    goto L_0891FD98;
L_0891FD98:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), 0u);
    aot_fpr_12 = std::bit_cast<float>(0u);
    { const std::uint32_t aot_run_words[4]{0u, 0u, std::bit_cast<std::uint32_t>(aot_fpr_12), std::bit_cast<std::uint32_t>(aot_fpr_12)};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_run_words); }
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(2204)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[17] = (ctx.gpr[17] & 255u);
      if (branch_taken) {
          goto L_0891FDF0;
      }
      goto L_0891FDBC;
    }
L_0891FDBC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2200)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_gpr_4 = (aot_gpr_4 < aot_gpr_5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0891FDF0;
      }
      goto L_0891FDD0;
    }
L_0891FDD0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2228)));
    aot_gpr_5 = (0u | 1u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_0891FDF0;
      }
      goto L_0891FDE0;
    }
L_0891FDE0:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(304))))));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(2204), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (aot_gpr_4 | 1u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(304), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_0891FDF0;
L_0891FDF0:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0891FE0C;
      }
      goto L_0891FDFC;
    }
L_0891FDFC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(76)));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1025));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(76), aot_gpr_4);
    goto L_0891FE0C;
L_0891FE0C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(76)));
    aot_gpr_5 = (16320u << 16u);
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7764)));
    aot_gpr_4 = (aot_gpr_4 >> 22u);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 & 31u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0891FE38;
      }
      goto L_0891FE30;
    }
L_0891FE30:
    aot_gpr_31 = (0x0891FE38u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0163_entry, 163u, 450u, 0x08A930F8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891FE38u) goto L_0891FE38;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891FE38:
    aot_gpr_31 = (0x0891FE40u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0080_entry, 80u, 191u, 0x0894530Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891FE40u) goto L_0891FE40;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891FE40:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(460)));
    aot_gpr_5 = (32768u << 16u);
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_0891FE8C;
      }
      goto L_0891FE54;
    }
L_0891FE54:
    aot_gpr_31 = (0x0891FE5Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0066_entry, 66u, 819u, 0x0890FA3Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891FE5Cu) goto L_0891FE5C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891FE5C:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-8));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) >= 0;
      if (branch_taken) {
          goto L_0891FEAC;
      }
      goto L_0891FE68;
    }
L_0891FE68:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(92)));
    ctx.gpr[18] = (0u | 0u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(160));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_6;
    aot_gpr_31 = (0x0891FE84u);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_5);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891FE84u) goto L_0891FE84;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891FE84:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0891FEAC;
      }
      goto L_0891FE8C;
    }
L_0891FE8C:
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[18]) < 255 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0891FEAC;
      }
      goto L_0891FE98;
    }
L_0891FE98:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[18]) < 256 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0891FEAC;
      }
      goto L_0891FEA8;
    }
L_0891FEA8:
    ctx.gpr[18] = (0u | 255u);
    goto L_0891FEAC;
L_0891FEAC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    aot_gpr_31 = (0x0891FEB8u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0080_entry, 80u, 190u, 0x08945304u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891FEB8u) goto L_0891FEB8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891FEB8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(456)));
    aot_gpr_5 = (65408u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(468)));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(456), aot_gpr_4);
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-16385));
    aot_gpr_4 = (aot_gpr_5 & aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(468), aot_gpr_4);
    aot_gpr_31 = (0x0891FEE4u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0068_entry, 68u, 31u, 0x08914630u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891FEE4u) goto L_0891FEE4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891FEE4:
    aot_gpr_31 = (0x0891FEECu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0069_entry, 69u, 422u, 0x0891A380u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891FEECu) goto L_0891FEEC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891FEEC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2228)));
    aot_gpr_5 = (0u | 65u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_0891FF44;
      }
      goto L_0891FEFC;
    }
L_0891FEFC:
    aot_gpr_31 = (0x0891FF04u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 741u, 0x08912FB0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891FF04u) goto L_0891FF04;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891FF04:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(92)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(232));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_6;
    aot_gpr_31 = (0x0891FF1Cu);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_5);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891FF1Cu) goto L_0891FF1C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891FF1C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(40));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_6;
    aot_gpr_31 = (0x0891FF34u);
    aot_gpr_4 = (ctx.gpr[2] + aot_gpr_5);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891FF34u) goto L_0891FF34;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891FF34:
    { const bool branch_taken = ctx.gpr[17] != 0u;
      if (branch_taken) {
          goto L_0891FF54;
      }
      goto L_0891FF3C;
    }
L_0891FF3C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0891FF9C;
      }
      goto L_0891FF44;
    }
L_0891FF44:
    aot_gpr_31 = (0x0891FF4Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 68u, 0x08860704u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891FF4Cu) goto L_0891FF4C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891FF4C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0072_entry, 72u, 144u, 0x089246E4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_0891FF54;
    }
L_0891FF54:
    ctx.gpr[18] = (aot_gpr_16 + static_cast<std::uint32_t>(2016));
    ctx.gpr[19] = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0891FF6Cu);
    aot_gpr_6 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0181_entry, 181u, 413u, 0x08AD9658u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891FF6Cu) goto L_0891FF6C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891FF6C:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0891FF7Cu);
    aot_gpr_6 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0007_entry, 7u, 317u, 0x08821BF4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891FF7Cu) goto L_0891FF7C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891FF7C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_0891FF8C;
      }
      goto L_0891FF84;
    }
L_0891FF84:
    aot_gpr_4 = (0u | 255u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(2056), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_0891FF8C;
L_0891FF8C:
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(2016));
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    aot_gpr_31 = (0x0891FF9Cu);
    aot_gpr_6 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0181_entry, 181u, 554u, 0x08ADA2B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891FF9Cu) goto L_0891FF9C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891FF9C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2228)));
    aot_gpr_5 = (0u | 58u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0071_entry, 71u, 59u, 0x089206D4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_0891FFAC;
    }
L_0891FFAC:
    aot_gpr_31 = (0x0891FFB4u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 831u, 0x08833D14u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891FFB4u) goto L_0891FFB4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891FFB4:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-1040)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0071_entry, 71u, 38u, 0x08920498u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_0891FFC0;
    }
L_0891FFC0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(236)));
    aot_gpr_4 = (aot_gpr_4 & 256u);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0071_entry, 71u, 38u, 0x08920498u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_0891FFD8;
    }
L_0891FFD8:
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1768)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.gpr[17] = (aot_gpr_4 - ctx.gpr[17]);
    aot_gpr_4 = (ctx.gpr[17] < static_cast<std::uint32_t>(2000) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0891FFF8;
      }
      goto L_0891FFF0;
    }
L_0891FFF0:
    { const bool branch_taken = 0u == 0u;
    aot_fpr_20 = std::bit_cast<float>(0u);
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0071_entry, 71u, 6u, 0x08920040u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_0891FFF8;
    }
L_0891FFF8:
    aot_gpr_4 = (ctx.gpr[17] < static_cast<std::uint32_t>(7001) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0071_entry, 71u, 3u, 0x08920014u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0071_entry, 71u, 2u, 0x08920004u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
    }
}

#undef AOT_REGCACHE_SYNC_IN
#undef AOT_REGCACHE_SYNC_OUT

void recomp_unit_0070(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0070_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_70(Runtime &runtime) {
    runtime.register_generated_unit(70u, 0x0891C000u, 16384u, &recomp_unit_0070, &recomp_unit_0070_entry);
    runtime.register_function(0x0891C000u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C018u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C01Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C024u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C038u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C04Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C06Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C07Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C084u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C094u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C0ACu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C0B4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C0CCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C0E8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C128u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C130u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C138u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C140u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C148u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C150u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C160u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C168u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C170u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C178u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C180u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C18Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C198u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C1A8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C1B8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C1C4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C1D4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C1DCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C1E0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C1E8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C1F8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C210u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C228u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C22Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C238u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C24Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C254u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C25Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C264u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C274u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C280u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C290u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C294u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C29Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C2ACu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C2B4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C2C4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C2CCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C2E4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C2F0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C2FCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C308u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C33Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C348u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C354u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C37Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C380u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C3A8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C3B8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C3C4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C3F0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C3FCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C410u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C420u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C424u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C44Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C484u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C494u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C49Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C4A4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C4C0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C4D4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C4DCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C4ECu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C500u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C51Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C528u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C530u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C538u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C548u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C550u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C564u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C56Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C574u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C588u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C594u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C5ACu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C5B8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C5C0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C5CCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C5DCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C5E8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C5F8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C604u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C608u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C610u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C630u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C644u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C66Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C6B8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C6C0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C6D8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C6E0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C700u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C708u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C710u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C71Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C740u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C748u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C79Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C7A8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C7B8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C7C4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C7D4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C7E0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C7F4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C7FCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C810u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C81Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C82Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C844u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C850u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C868u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C870u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C888u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C88Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C898u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C8A0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C8B0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C8B8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C8E0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C8F0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C8F8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C900u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C904u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C930u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C944u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C95Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C974u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C998u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C9A4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C9ACu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C9C4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C9CCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C9E4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C9E8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C9F4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CA20u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CA74u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CA84u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CA8Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CA94u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CA9Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CAA4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CAACu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CAB4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CABCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CAC4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CACCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CAD8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CAE0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CAE8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CAF4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CAFCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CB04u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CB14u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CB24u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CB60u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CB64u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CB6Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CB78u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CB88u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CBC4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CBC8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CBD0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CBD8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CBE8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CBF0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CC00u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CC0Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CC18u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CC24u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CC30u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CC38u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CC44u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CC50u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CC58u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CC6Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CC74u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CC80u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CC88u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CC98u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CCA8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CCB4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CCC8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CCD0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CCD8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CCE4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CCF0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CCF4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CD00u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CD08u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CD10u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CD18u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CD20u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CD28u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CD30u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CD38u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CD54u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CD5Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CD78u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CD80u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CD88u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CD90u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CD98u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CD9Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CDCCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CE08u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CE1Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CE30u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CE40u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CE50u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CE7Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CE88u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CE9Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CEACu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CEBCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CEC4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CECCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CED8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CEE8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CEF8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CF08u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CF10u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CF20u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CF30u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CF3Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CF44u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CF50u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CF74u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CFCCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CFD8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CFE0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CFECu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CFFCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D00Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D01Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D024u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D034u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D044u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D050u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D058u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D068u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D078u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D08Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D0A4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D0B4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D0C0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D0C8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D0E4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D0F4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D144u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D170u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D17Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D190u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D1A0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D1A8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D1B8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D1D0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D1E0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D1F8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D208u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D210u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D228u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D24Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D254u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D260u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D26Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D27Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D288u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D28Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D2C4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D328u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D37Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D410u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D430u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D438u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D440u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D448u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D47Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D484u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D4A0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D4E8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D514u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D59Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D5C0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D630u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D65Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D670u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D69Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D6B0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D6B8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D6C0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D6C8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D6ECu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D700u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D708u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D72Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D748u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D750u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D758u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D7CCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D7D4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D7DCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D848u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D860u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D86Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D88Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D898u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D8A8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D8D4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D904u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D908u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D918u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D940u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D950u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D98Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D9CCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D9D4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D9DCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D9E4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D9F0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DA00u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DA08u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DA10u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DA78u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DABCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DACCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DB3Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DB4Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DB5Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DBC4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DBD8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DBE4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DBF4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DC00u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DC08u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DC10u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DC20u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DC30u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DC34u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DC40u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DC50u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DC5Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DC6Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DC78u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DC88u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DCC0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DCCCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DCDCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DD00u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DD14u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DD64u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DD70u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DD80u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DDA4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DDB4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DDE4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DDF0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DE00u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DE48u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DE74u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DF1Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DF30u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DF8Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DF98u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DFD0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DFD4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DFDCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DFF0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DFFCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E00Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E01Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E028u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E040u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E054u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E064u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E0A4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E0B4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E0C8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E0D8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E0E0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E0F0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E0F4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E114u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E144u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E170u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E218u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E22Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E288u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E294u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E2CCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E2D0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E2D8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E2ECu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E2F8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E308u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E318u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E324u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E33Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E350u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E360u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E3A0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E3B0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E3C4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E3D4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E3DCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E3ECu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E3F0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E410u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E42Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E43Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E478u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E48Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E49Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E4D8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E4E4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E4F0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E504u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E50Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E518u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E520u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E52Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E534u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E540u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E550u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E558u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E568u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E574u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E57Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E58Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E5A0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E5A8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E5F4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E600u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E608u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E610u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E624u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E640u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E698u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E6B0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E6C0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E6ECu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E6F4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E700u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E708u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E71Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E738u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E790u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E7A8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E7B8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E7E4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E7ECu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E7F4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E808u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E814u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E81Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E824u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E838u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E840u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E84Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E858u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E864u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E870u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E874u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E8B4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E8F8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E908u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E914u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E920u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E928u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E930u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E938u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E940u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E948u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E950u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E958u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E960u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E974u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E97Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E9A0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E9A8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E9B4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E9ECu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EA00u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EA10u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EA24u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EA30u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EA3Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EA48u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EA50u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EA54u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EA64u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EA74u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EA7Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EA84u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EA9Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EAA4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EAB4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EABCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EAC4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EAD0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EAD8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EAE8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EAFCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EB0Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EB14u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EB24u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EB2Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EB30u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EB38u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EB44u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EB4Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EB58u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EB5Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EB6Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EB74u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EB7Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EB98u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EBBCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EBC4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EBD4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EBDCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EBE4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EC00u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EC24u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EC2Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EC38u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EC40u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EC4Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EC5Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EC64u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EC70u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EC7Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EC88u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891ECB8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891ED08u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891ED18u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891ED24u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891ED2Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891ED34u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891ED3Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891ED44u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891ED4Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891ED5Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891ED74u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891ED80u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891ED8Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891ED94u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891ED9Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EDA0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EDA8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EDB0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EDB8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EDC8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EDD4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EDDCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EE00u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EE08u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EE14u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EE4Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EE60u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EE70u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EE80u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EE88u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EE98u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EEA0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EEC4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EECCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EED4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EEDCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EEECu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EEF4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EEF8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EF04u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EF0Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EF28u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EF38u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EF4Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EF54u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EF5Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EF94u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EFA0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EFA8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EFB0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EFC4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EFD4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EFDCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EFE0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EFE4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F014u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F024u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F02Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F03Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F048u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F054u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F064u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F070u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F07Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F08Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F098u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F0A4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F0B4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F0C0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F0CCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F0D4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F0DCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F0E4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F0F8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F104u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F10Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F124u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F134u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F13Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F158u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F17Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F18Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F194u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F1A0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F1A8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F1B0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F1BCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F1C8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F1E0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F1ECu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F1F4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F1FCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F208u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F224u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F238u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F24Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F254u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F264u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F270u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F278u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F280u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F2C4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F2FCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F338u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F374u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F388u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F38Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F398u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F3A0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F3B4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F3BCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F3C4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F3CCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F3DCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F3E4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F3FCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F404u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F40Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F414u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F420u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F430u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F44Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F458u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F464u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F474u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F484u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F494u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F4A4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F4B0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F4B8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F4C0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F4E8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F4F0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F4F8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F504u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F518u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F530u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F538u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F540u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F548u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F550u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F558u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F560u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F570u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F580u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F590u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F598u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F5B0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F5B8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F5C4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F5D4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F5ECu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F604u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F614u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F61Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F624u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F63Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F640u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F648u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F660u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F664u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F678u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F67Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F698u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F6ACu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F6C0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F6D4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F6E0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F6E8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F6F0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F6FCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F70Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F71Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F724u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F72Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F734u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F73Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F750u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F758u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F760u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F780u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F78Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F794u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F798u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F7BCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F7F0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F7F8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F800u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F80Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F81Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F828u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F830u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F838u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F844u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F84Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F854u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F860u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F868u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F87Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F888u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F890u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F89Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F8A4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F8ACu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F8B8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F8C0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F8D0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F8DCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F8F4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F8F8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F900u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F910u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F91Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F934u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F944u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F94Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F954u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F95Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F964u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F97Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F980u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F988u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F994u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F9A4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F9ACu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F9B4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F9BCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F9C8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F9D4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F9DCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F9F4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FA04u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FA14u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FA1Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FA28u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FA30u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FA38u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FA3Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FA4Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FA58u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FA60u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FA68u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FA70u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FA78u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FA94u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FA9Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FAB8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FAC0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FADCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FAE4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FAF4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FB10u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FB18u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FB34u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FB38u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FB40u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FB5Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FB64u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FB6Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FB78u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FB88u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FB94u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FBA8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FBACu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FBB4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FBC8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FBCCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FBD4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FBE8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FBECu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FBF4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FC00u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FC0Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FC1Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FC38u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FC44u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FC78u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FC84u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FC94u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FCB0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FCBCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FCECu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FD10u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FD5Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FD7Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FD84u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FD94u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FD98u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FDBCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FDD0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FDE0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FDF0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FDFCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FE0Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FE30u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FE38u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FE40u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FE54u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FE5Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FE68u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FE84u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FE8Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FE98u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FEA8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FEACu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FEB8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FEE4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FEECu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FEFCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FF04u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FF1Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FF34u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FF3Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FF44u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FF4Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FF54u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FF6Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FF7Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FF84u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FF8Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FF9Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FFACu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FFB4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FFC0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FFD8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FFF0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FFF8u, &recomp_unit_0070, "recomp_unit_0070");
}
} // namespace psprecomp
