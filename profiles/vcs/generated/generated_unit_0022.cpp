#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include "vcs_resident_regions.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
// PSPRECOMP_V811_COMPACT_DISPATCH: 64-slot occupancy masks + per-group base id.
static constexpr std::uint64_t kEntryMasks_recomp_unit_0022[64] = {
    0x1414141414141415ull, 0x1414141416082012ull, 0x0820121414141414ull, 0x1414141414141416ull,
    0x1414160820121414ull, 0x1214141414141414ull, 0x1414141414160820ull, 0x1608201214141414ull,
    0x1414141414141414ull, 0x1414141608201214ull, 0x2012141414141414ull, 0x1414141414141608ull,
    0x1414160820121414ull, 0x1214141414141414ull, 0x1414141414160820ull, 0x1608201214141414ull,
    0x1414141414141414ull, 0x1414141608201214ull, 0x2012141414141414ull, 0x1414141414141608ull,
    0x1416082012141414ull, 0x1414141414141414ull, 0x1414141416082012ull, 0x0820121414141414ull,
    0x1414141414141416ull, 0x1414160820121414ull, 0x1214141414141414ull, 0x1414141414160820ull,
    0x1608201214141414ull, 0x1414141414141414ull, 0x1414141608201214ull, 0x2012141414141414ull,
    0x1414141414141608ull, 0x1416082012141414ull, 0x1414141414141414ull, 0x09141414160A9012ull,
    0x90048A0A0A0B0548ull, 0x2850A14285082920ull, 0x142850A142850A14ull, 0x0A142850A142850Aull,
    0x850A142850A14285ull, 0x42850A142850A142ull, 0xA142850A142850A1ull, 0x50A142850A142850ull,
    0x2850A142850A1428ull, 0x142850A142850A14ull, 0x0A142850A142850Aull, 0x850A142850A14285ull,
    0x42850A142850A142ull, 0xA142850A142850A1ull, 0x50A142850A142850ull, 0x21A5055490222428ull,
    0x20904A0286001050ull, 0xAA40422AA0109069ull, 0x0445101204402865ull, 0x02020849020CA428ull,
    0x0004000000210441ull, 0x2048100000008000ull, 0x0000000000000481ull, 0x0000000000800000ull,
    0x0000000000008000ull, 0x8000000000000080ull, 0x0004000800168880ull, 0x0200204040050120ull,
};
static constexpr std::uint16_t kEntryBases_recomp_unit_0022[64] = {
    1u, 18u, 33u, 47u, 64u, 79u, 95u, 110u, 125u, 141u, 156u, 171u, 187u, 202u, 218u, 233u,
    248u, 264u, 279u, 294u, 310u, 325u, 341u, 356u, 370u, 387u, 402u, 418u, 433u, 448u, 464u, 479u,
    494u, 510u, 525u, 541u, 558u, 575u, 592u, 610u, 628u, 647u, 665u, 684u, 702u, 720u, 738u, 756u,
    775u, 793u, 812u, 830u, 849u, 862u, 881u, 896u, 910u, 916u, 921u, 924u, 925u, 926u, 928u, 936u,
};
void recomp_unit_0022_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
// PSPRECOMP_AOT_REGCACHE_BEGIN
// PSPRECOMP_AOT_REGCACHE_META gprs=4,5,6,31,7,8 fprs=13,12,14,0 gpr_occ=5641 fpr_occ=256 gpr_total=7437 fpr_total=488
    std::uint32_t aot_gpr_4 = ctx.gpr[4];
    std::uint32_t aot_gpr_5 = ctx.gpr[5];
    std::uint32_t aot_gpr_6 = ctx.gpr[6];
    std::uint32_t aot_gpr_31 = ctx.gpr[31];
    std::uint32_t aot_gpr_7 = ctx.gpr[7];
    std::uint32_t aot_gpr_8 = ctx.gpr[8];
    float aot_fpr_13 = ctx.fpr[13];
    float aot_fpr_12 = ctx.fpr[12];
    float aot_fpr_14 = ctx.fpr[14];
    float aot_fpr_0 = ctx.fpr[0];
    bool aot_regcache_valid = true;
#define AOT_REGCACHE_SYNC_OUT() do { if (aot_regcache_valid) { ctx.gpr[4] = aot_gpr_4; ctx.gpr[5] = aot_gpr_5; ctx.gpr[6] = aot_gpr_6; ctx.gpr[31] = aot_gpr_31; ctx.gpr[7] = aot_gpr_7; ctx.gpr[8] = aot_gpr_8; ctx.fpr[13] = aot_fpr_13; ctx.fpr[12] = aot_fpr_12; ctx.fpr[14] = aot_fpr_14; ctx.fpr[0] = aot_fpr_0; } } while (false)
#define AOT_REGCACHE_SYNC_IN() do { if (aot_regcache_valid) { aot_gpr_4 = ctx.gpr[4]; aot_gpr_5 = ctx.gpr[5]; aot_gpr_6 = ctx.gpr[6]; aot_gpr_31 = ctx.gpr[31]; aot_gpr_7 = ctx.gpr[7]; aot_gpr_8 = ctx.gpr[8]; aot_fpr_13 = ctx.fpr[13]; aot_fpr_12 = ctx.fpr[12]; aot_fpr_14 = ctx.fpr[14]; aot_fpr_0 = ctx.fpr[0]; } } while (false)
// PSPRECOMP_AOT_REGCACHE_END
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_redispatch_rounds = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x0885C000u;
        entry_id = 0u;
        if (entry_delta < 16360u && (entry_delta & 3u) == 0u) {
            const std::uint32_t entry_slot = entry_delta >> 2u;
            const std::uint32_t entry_group = entry_slot >> 6u;
            const std::uint64_t entry_mask = kEntryMasks_recomp_unit_0022[entry_group];
            const std::uint64_t entry_bit = 1ull << (entry_slot & 63u);
            if ((entry_mask & entry_bit) != 0u) {
                entry_id = static_cast<std::uint16_t>(
                    kEntryBases_recomp_unit_0022[entry_group] +
                    std::popcount(entry_mask & (entry_bit - 1ull)));
            }
        }
    }
    switch (entry_id) {
    case 1u: goto L_0885C000;
    case 2u: goto L_0885C008;
    case 3u: goto L_0885C010;
    case 4u: goto L_0885C028;
    case 5u: goto L_0885C030;
    case 6u: goto L_0885C048;
    case 7u: goto L_0885C050;
    case 8u: goto L_0885C068;
    case 9u: goto L_0885C070;
    case 10u: goto L_0885C088;
    case 11u: goto L_0885C090;
    case 12u: goto L_0885C0A8;
    case 13u: goto L_0885C0B0;
    case 14u: goto L_0885C0C8;
    case 15u: goto L_0885C0D0;
    case 16u: goto L_0885C0E8;
    case 17u: goto L_0885C0F0;
    case 18u: goto L_0885C104;
    case 19u: goto L_0885C110;
    case 20u: goto L_0885C134;
    case 21u: goto L_0885C14C;
    case 22u: goto L_0885C164;
    case 23u: goto L_0885C168;
    case 24u: goto L_0885C170;
    case 25u: goto L_0885C188;
    case 26u: goto L_0885C190;
    case 27u: goto L_0885C1A8;
    case 28u: goto L_0885C1B0;
    case 29u: goto L_0885C1C8;
    case 30u: goto L_0885C1D0;
    case 31u: goto L_0885C1E8;
    case 32u: goto L_0885C1F0;
    case 33u: goto L_0885C208;
    case 34u: goto L_0885C210;
    case 35u: goto L_0885C228;
    case 36u: goto L_0885C230;
    case 37u: goto L_0885C248;
    case 38u: goto L_0885C250;
    case 39u: goto L_0885C268;
    case 40u: goto L_0885C270;
    case 41u: goto L_0885C288;
    case 42u: goto L_0885C290;
    case 43u: goto L_0885C2A4;
    case 44u: goto L_0885C2B0;
    case 45u: goto L_0885C2D4;
    case 46u: goto L_0885C2EC;
    case 47u: goto L_0885C304;
    case 48u: goto L_0885C308;
    case 49u: goto L_0885C310;
    case 50u: goto L_0885C328;
    case 51u: goto L_0885C330;
    case 52u: goto L_0885C348;
    case 53u: goto L_0885C350;
    case 54u: goto L_0885C368;
    case 55u: goto L_0885C370;
    case 56u: goto L_0885C388;
    case 57u: goto L_0885C390;
    case 58u: goto L_0885C3A8;
    case 59u: goto L_0885C3B0;
    case 60u: goto L_0885C3C8;
    case 61u: goto L_0885C3D0;
    case 62u: goto L_0885C3E8;
    case 63u: goto L_0885C3F0;
    case 64u: goto L_0885C408;
    case 65u: goto L_0885C410;
    case 66u: goto L_0885C428;
    case 67u: goto L_0885C430;
    case 68u: goto L_0885C444;
    case 69u: goto L_0885C450;
    case 70u: goto L_0885C474;
    case 71u: goto L_0885C48C;
    case 72u: goto L_0885C4A4;
    case 73u: goto L_0885C4A8;
    case 74u: goto L_0885C4B0;
    case 75u: goto L_0885C4C8;
    case 76u: goto L_0885C4D0;
    case 77u: goto L_0885C4E8;
    case 78u: goto L_0885C4F0;
    case 79u: goto L_0885C508;
    case 80u: goto L_0885C510;
    case 81u: goto L_0885C528;
    case 82u: goto L_0885C530;
    case 83u: goto L_0885C548;
    case 84u: goto L_0885C550;
    case 85u: goto L_0885C568;
    case 86u: goto L_0885C570;
    case 87u: goto L_0885C588;
    case 88u: goto L_0885C590;
    case 89u: goto L_0885C5A8;
    case 90u: goto L_0885C5B0;
    case 91u: goto L_0885C5C8;
    case 92u: goto L_0885C5D0;
    case 93u: goto L_0885C5E4;
    case 94u: goto L_0885C5F0;
    case 95u: goto L_0885C614;
    case 96u: goto L_0885C62C;
    case 97u: goto L_0885C644;
    case 98u: goto L_0885C648;
    case 99u: goto L_0885C650;
    case 100u: goto L_0885C668;
    case 101u: goto L_0885C670;
    case 102u: goto L_0885C688;
    case 103u: goto L_0885C690;
    case 104u: goto L_0885C6A8;
    case 105u: goto L_0885C6B0;
    case 106u: goto L_0885C6C8;
    case 107u: goto L_0885C6D0;
    case 108u: goto L_0885C6E8;
    case 109u: goto L_0885C6F0;
    case 110u: goto L_0885C708;
    case 111u: goto L_0885C710;
    case 112u: goto L_0885C728;
    case 113u: goto L_0885C730;
    case 114u: goto L_0885C748;
    case 115u: goto L_0885C750;
    case 116u: goto L_0885C768;
    case 117u: goto L_0885C770;
    case 118u: goto L_0885C784;
    case 119u: goto L_0885C790;
    case 120u: goto L_0885C7B4;
    case 121u: goto L_0885C7CC;
    case 122u: goto L_0885C7E4;
    case 123u: goto L_0885C7E8;
    case 124u: goto L_0885C7F0;
    case 125u: goto L_0885C808;
    case 126u: goto L_0885C810;
    case 127u: goto L_0885C828;
    case 128u: goto L_0885C830;
    case 129u: goto L_0885C848;
    case 130u: goto L_0885C850;
    case 131u: goto L_0885C868;
    case 132u: goto L_0885C870;
    case 133u: goto L_0885C888;
    case 134u: goto L_0885C890;
    case 135u: goto L_0885C8A8;
    case 136u: goto L_0885C8B0;
    case 137u: goto L_0885C8C8;
    case 138u: goto L_0885C8D0;
    case 139u: goto L_0885C8E8;
    case 140u: goto L_0885C8F0;
    case 141u: goto L_0885C908;
    case 142u: goto L_0885C910;
    case 143u: goto L_0885C924;
    case 144u: goto L_0885C930;
    case 145u: goto L_0885C954;
    case 146u: goto L_0885C96C;
    case 147u: goto L_0885C984;
    case 148u: goto L_0885C988;
    case 149u: goto L_0885C990;
    case 150u: goto L_0885C9A8;
    case 151u: goto L_0885C9B0;
    case 152u: goto L_0885C9C8;
    case 153u: goto L_0885C9D0;
    case 154u: goto L_0885C9E8;
    case 155u: goto L_0885C9F0;
    case 156u: goto L_0885CA08;
    case 157u: goto L_0885CA10;
    case 158u: goto L_0885CA28;
    case 159u: goto L_0885CA30;
    case 160u: goto L_0885CA48;
    case 161u: goto L_0885CA50;
    case 162u: goto L_0885CA68;
    case 163u: goto L_0885CA70;
    case 164u: goto L_0885CA88;
    case 165u: goto L_0885CA90;
    case 166u: goto L_0885CAA8;
    case 167u: goto L_0885CAB0;
    case 168u: goto L_0885CAC4;
    case 169u: goto L_0885CAD0;
    case 170u: goto L_0885CAF4;
    case 171u: goto L_0885CB0C;
    case 172u: goto L_0885CB24;
    case 173u: goto L_0885CB28;
    case 174u: goto L_0885CB30;
    case 175u: goto L_0885CB48;
    case 176u: goto L_0885CB50;
    case 177u: goto L_0885CB68;
    case 178u: goto L_0885CB70;
    case 179u: goto L_0885CB88;
    case 180u: goto L_0885CB90;
    case 181u: goto L_0885CBA8;
    case 182u: goto L_0885CBB0;
    case 183u: goto L_0885CBC8;
    case 184u: goto L_0885CBD0;
    case 185u: goto L_0885CBE8;
    case 186u: goto L_0885CBF0;
    case 187u: goto L_0885CC08;
    case 188u: goto L_0885CC10;
    case 189u: goto L_0885CC28;
    case 190u: goto L_0885CC30;
    case 191u: goto L_0885CC44;
    case 192u: goto L_0885CC50;
    case 193u: goto L_0885CC74;
    case 194u: goto L_0885CC8C;
    case 195u: goto L_0885CCA4;
    case 196u: goto L_0885CCA8;
    case 197u: goto L_0885CCB0;
    case 198u: goto L_0885CCC8;
    case 199u: goto L_0885CCD0;
    case 200u: goto L_0885CCE8;
    case 201u: goto L_0885CCF0;
    case 202u: goto L_0885CD08;
    case 203u: goto L_0885CD10;
    case 204u: goto L_0885CD28;
    case 205u: goto L_0885CD30;
    case 206u: goto L_0885CD48;
    case 207u: goto L_0885CD50;
    case 208u: goto L_0885CD68;
    case 209u: goto L_0885CD70;
    case 210u: goto L_0885CD88;
    case 211u: goto L_0885CD90;
    case 212u: goto L_0885CDA8;
    case 213u: goto L_0885CDB0;
    case 214u: goto L_0885CDC8;
    case 215u: goto L_0885CDD0;
    case 216u: goto L_0885CDE4;
    case 217u: goto L_0885CDF0;
    case 218u: goto L_0885CE14;
    case 219u: goto L_0885CE2C;
    case 220u: goto L_0885CE44;
    case 221u: goto L_0885CE48;
    case 222u: goto L_0885CE50;
    case 223u: goto L_0885CE68;
    case 224u: goto L_0885CE70;
    case 225u: goto L_0885CE88;
    case 226u: goto L_0885CE90;
    case 227u: goto L_0885CEA8;
    case 228u: goto L_0885CEB0;
    case 229u: goto L_0885CEC8;
    case 230u: goto L_0885CED0;
    case 231u: goto L_0885CEE8;
    case 232u: goto L_0885CEF0;
    case 233u: goto L_0885CF08;
    case 234u: goto L_0885CF10;
    case 235u: goto L_0885CF28;
    case 236u: goto L_0885CF30;
    case 237u: goto L_0885CF48;
    case 238u: goto L_0885CF50;
    case 239u: goto L_0885CF68;
    case 240u: goto L_0885CF70;
    case 241u: goto L_0885CF84;
    case 242u: goto L_0885CF90;
    case 243u: goto L_0885CFB4;
    case 244u: goto L_0885CFCC;
    case 245u: goto L_0885CFE4;
    case 246u: goto L_0885CFE8;
    case 247u: goto L_0885CFF0;
    case 248u: goto L_0885D008;
    case 249u: goto L_0885D010;
    case 250u: goto L_0885D028;
    case 251u: goto L_0885D030;
    case 252u: goto L_0885D048;
    case 253u: goto L_0885D050;
    case 254u: goto L_0885D068;
    case 255u: goto L_0885D070;
    case 256u: goto L_0885D088;
    case 257u: goto L_0885D090;
    case 258u: goto L_0885D0A8;
    case 259u: goto L_0885D0B0;
    case 260u: goto L_0885D0C8;
    case 261u: goto L_0885D0D0;
    case 262u: goto L_0885D0E8;
    case 263u: goto L_0885D0F0;
    case 264u: goto L_0885D108;
    case 265u: goto L_0885D110;
    case 266u: goto L_0885D124;
    case 267u: goto L_0885D130;
    case 268u: goto L_0885D154;
    case 269u: goto L_0885D16C;
    case 270u: goto L_0885D184;
    case 271u: goto L_0885D188;
    case 272u: goto L_0885D190;
    case 273u: goto L_0885D1A8;
    case 274u: goto L_0885D1B0;
    case 275u: goto L_0885D1C8;
    case 276u: goto L_0885D1D0;
    case 277u: goto L_0885D1E8;
    case 278u: goto L_0885D1F0;
    case 279u: goto L_0885D208;
    case 280u: goto L_0885D210;
    case 281u: goto L_0885D228;
    case 282u: goto L_0885D230;
    case 283u: goto L_0885D248;
    case 284u: goto L_0885D250;
    case 285u: goto L_0885D268;
    case 286u: goto L_0885D270;
    case 287u: goto L_0885D288;
    case 288u: goto L_0885D290;
    case 289u: goto L_0885D2A8;
    case 290u: goto L_0885D2B0;
    case 291u: goto L_0885D2C4;
    case 292u: goto L_0885D2D0;
    case 293u: goto L_0885D2F4;
    case 294u: goto L_0885D30C;
    case 295u: goto L_0885D324;
    case 296u: goto L_0885D328;
    case 297u: goto L_0885D330;
    case 298u: goto L_0885D348;
    case 299u: goto L_0885D350;
    case 300u: goto L_0885D368;
    case 301u: goto L_0885D370;
    case 302u: goto L_0885D388;
    case 303u: goto L_0885D390;
    case 304u: goto L_0885D3A8;
    case 305u: goto L_0885D3B0;
    case 306u: goto L_0885D3C8;
    case 307u: goto L_0885D3D0;
    case 308u: goto L_0885D3E8;
    case 309u: goto L_0885D3F0;
    case 310u: goto L_0885D408;
    case 311u: goto L_0885D410;
    case 312u: goto L_0885D428;
    case 313u: goto L_0885D430;
    case 314u: goto L_0885D448;
    case 315u: goto L_0885D450;
    case 316u: goto L_0885D464;
    case 317u: goto L_0885D470;
    case 318u: goto L_0885D494;
    case 319u: goto L_0885D4AC;
    case 320u: goto L_0885D4C4;
    case 321u: goto L_0885D4C8;
    case 322u: goto L_0885D4D0;
    case 323u: goto L_0885D4E8;
    case 324u: goto L_0885D4F0;
    case 325u: goto L_0885D508;
    case 326u: goto L_0885D510;
    case 327u: goto L_0885D528;
    case 328u: goto L_0885D530;
    case 329u: goto L_0885D548;
    case 330u: goto L_0885D550;
    case 331u: goto L_0885D568;
    case 332u: goto L_0885D570;
    case 333u: goto L_0885D588;
    case 334u: goto L_0885D590;
    case 335u: goto L_0885D5A8;
    case 336u: goto L_0885D5B0;
    case 337u: goto L_0885D5C8;
    case 338u: goto L_0885D5D0;
    case 339u: goto L_0885D5E8;
    case 340u: goto L_0885D5F0;
    case 341u: goto L_0885D604;
    case 342u: goto L_0885D610;
    case 343u: goto L_0885D634;
    case 344u: goto L_0885D64C;
    case 345u: goto L_0885D664;
    case 346u: goto L_0885D668;
    case 347u: goto L_0885D670;
    case 348u: goto L_0885D688;
    case 349u: goto L_0885D690;
    case 350u: goto L_0885D6A8;
    case 351u: goto L_0885D6B0;
    case 352u: goto L_0885D6C8;
    case 353u: goto L_0885D6D0;
    case 354u: goto L_0885D6E8;
    case 355u: goto L_0885D6F0;
    case 356u: goto L_0885D708;
    case 357u: goto L_0885D710;
    case 358u: goto L_0885D728;
    case 359u: goto L_0885D730;
    case 360u: goto L_0885D748;
    case 361u: goto L_0885D750;
    case 362u: goto L_0885D768;
    case 363u: goto L_0885D770;
    case 364u: goto L_0885D788;
    case 365u: goto L_0885D790;
    case 366u: goto L_0885D7A4;
    case 367u: goto L_0885D7B0;
    case 368u: goto L_0885D7D4;
    case 369u: goto L_0885D7EC;
    case 370u: goto L_0885D804;
    case 371u: goto L_0885D808;
    case 372u: goto L_0885D810;
    case 373u: goto L_0885D828;
    case 374u: goto L_0885D830;
    case 375u: goto L_0885D848;
    case 376u: goto L_0885D850;
    case 377u: goto L_0885D868;
    case 378u: goto L_0885D870;
    case 379u: goto L_0885D888;
    case 380u: goto L_0885D890;
    case 381u: goto L_0885D8A8;
    case 382u: goto L_0885D8B0;
    case 383u: goto L_0885D8C8;
    case 384u: goto L_0885D8D0;
    case 385u: goto L_0885D8E8;
    case 386u: goto L_0885D8F0;
    case 387u: goto L_0885D908;
    case 388u: goto L_0885D910;
    case 389u: goto L_0885D928;
    case 390u: goto L_0885D930;
    case 391u: goto L_0885D944;
    case 392u: goto L_0885D950;
    case 393u: goto L_0885D974;
    case 394u: goto L_0885D98C;
    case 395u: goto L_0885D9A4;
    case 396u: goto L_0885D9A8;
    case 397u: goto L_0885D9B0;
    case 398u: goto L_0885D9C8;
    case 399u: goto L_0885D9D0;
    case 400u: goto L_0885D9E8;
    case 401u: goto L_0885D9F0;
    case 402u: goto L_0885DA08;
    case 403u: goto L_0885DA10;
    case 404u: goto L_0885DA28;
    case 405u: goto L_0885DA30;
    case 406u: goto L_0885DA48;
    case 407u: goto L_0885DA50;
    case 408u: goto L_0885DA68;
    case 409u: goto L_0885DA70;
    case 410u: goto L_0885DA88;
    case 411u: goto L_0885DA90;
    case 412u: goto L_0885DAA8;
    case 413u: goto L_0885DAB0;
    case 414u: goto L_0885DAC8;
    case 415u: goto L_0885DAD0;
    case 416u: goto L_0885DAE4;
    case 417u: goto L_0885DAF0;
    case 418u: goto L_0885DB14;
    case 419u: goto L_0885DB2C;
    case 420u: goto L_0885DB44;
    case 421u: goto L_0885DB48;
    case 422u: goto L_0885DB50;
    case 423u: goto L_0885DB68;
    case 424u: goto L_0885DB70;
    case 425u: goto L_0885DB88;
    case 426u: goto L_0885DB90;
    case 427u: goto L_0885DBA8;
    case 428u: goto L_0885DBB0;
    case 429u: goto L_0885DBC8;
    case 430u: goto L_0885DBD0;
    case 431u: goto L_0885DBE8;
    case 432u: goto L_0885DBF0;
    case 433u: goto L_0885DC08;
    case 434u: goto L_0885DC10;
    case 435u: goto L_0885DC28;
    case 436u: goto L_0885DC30;
    case 437u: goto L_0885DC48;
    case 438u: goto L_0885DC50;
    case 439u: goto L_0885DC68;
    case 440u: goto L_0885DC70;
    case 441u: goto L_0885DC84;
    case 442u: goto L_0885DC90;
    case 443u: goto L_0885DCB4;
    case 444u: goto L_0885DCCC;
    case 445u: goto L_0885DCE4;
    case 446u: goto L_0885DCE8;
    case 447u: goto L_0885DCF0;
    case 448u: goto L_0885DD08;
    case 449u: goto L_0885DD10;
    case 450u: goto L_0885DD28;
    case 451u: goto L_0885DD30;
    case 452u: goto L_0885DD48;
    case 453u: goto L_0885DD50;
    case 454u: goto L_0885DD68;
    case 455u: goto L_0885DD70;
    case 456u: goto L_0885DD88;
    case 457u: goto L_0885DD90;
    case 458u: goto L_0885DDA8;
    case 459u: goto L_0885DDB0;
    case 460u: goto L_0885DDC8;
    case 461u: goto L_0885DDD0;
    case 462u: goto L_0885DDE8;
    case 463u: goto L_0885DDF0;
    case 464u: goto L_0885DE08;
    case 465u: goto L_0885DE10;
    case 466u: goto L_0885DE24;
    case 467u: goto L_0885DE30;
    case 468u: goto L_0885DE54;
    case 469u: goto L_0885DE6C;
    case 470u: goto L_0885DE84;
    case 471u: goto L_0885DE88;
    case 472u: goto L_0885DE90;
    case 473u: goto L_0885DEA8;
    case 474u: goto L_0885DEB0;
    case 475u: goto L_0885DEC8;
    case 476u: goto L_0885DED0;
    case 477u: goto L_0885DEE8;
    case 478u: goto L_0885DEF0;
    case 479u: goto L_0885DF08;
    case 480u: goto L_0885DF10;
    case 481u: goto L_0885DF28;
    case 482u: goto L_0885DF30;
    case 483u: goto L_0885DF48;
    case 484u: goto L_0885DF50;
    case 485u: goto L_0885DF68;
    case 486u: goto L_0885DF70;
    case 487u: goto L_0885DF88;
    case 488u: goto L_0885DF90;
    case 489u: goto L_0885DFA8;
    case 490u: goto L_0885DFB0;
    case 491u: goto L_0885DFC4;
    case 492u: goto L_0885DFD0;
    case 493u: goto L_0885DFF4;
    case 494u: goto L_0885E00C;
    case 495u: goto L_0885E024;
    case 496u: goto L_0885E028;
    case 497u: goto L_0885E030;
    case 498u: goto L_0885E048;
    case 499u: goto L_0885E050;
    case 500u: goto L_0885E068;
    case 501u: goto L_0885E070;
    case 502u: goto L_0885E088;
    case 503u: goto L_0885E090;
    case 504u: goto L_0885E0A8;
    case 505u: goto L_0885E0B0;
    case 506u: goto L_0885E0C8;
    case 507u: goto L_0885E0D0;
    case 508u: goto L_0885E0E8;
    case 509u: goto L_0885E0F0;
    case 510u: goto L_0885E108;
    case 511u: goto L_0885E110;
    case 512u: goto L_0885E128;
    case 513u: goto L_0885E130;
    case 514u: goto L_0885E148;
    case 515u: goto L_0885E150;
    case 516u: goto L_0885E164;
    case 517u: goto L_0885E170;
    case 518u: goto L_0885E194;
    case 519u: goto L_0885E1AC;
    case 520u: goto L_0885E1C4;
    case 521u: goto L_0885E1C8;
    case 522u: goto L_0885E1D0;
    case 523u: goto L_0885E1E8;
    case 524u: goto L_0885E1F0;
    case 525u: goto L_0885E208;
    case 526u: goto L_0885E210;
    case 527u: goto L_0885E228;
    case 528u: goto L_0885E230;
    case 529u: goto L_0885E248;
    case 530u: goto L_0885E250;
    case 531u: goto L_0885E268;
    case 532u: goto L_0885E270;
    case 533u: goto L_0885E288;
    case 534u: goto L_0885E290;
    case 535u: goto L_0885E2A8;
    case 536u: goto L_0885E2B0;
    case 537u: goto L_0885E2C8;
    case 538u: goto L_0885E2D0;
    case 539u: goto L_0885E2E8;
    case 540u: goto L_0885E2F0;
    case 541u: goto L_0885E304;
    case 542u: goto L_0885E310;
    case 543u: goto L_0885E330;
    case 544u: goto L_0885E33C;
    case 545u: goto L_0885E344;
    case 546u: goto L_0885E34C;
    case 547u: goto L_0885E364;
    case 548u: goto L_0885E368;
    case 549u: goto L_0885E370;
    case 550u: goto L_0885E388;
    case 551u: goto L_0885E390;
    case 552u: goto L_0885E3A8;
    case 553u: goto L_0885E3B0;
    case 554u: goto L_0885E3C8;
    case 555u: goto L_0885E3D0;
    case 556u: goto L_0885E3E0;
    case 557u: goto L_0885E3EC;
    case 558u: goto L_0885E40C;
    case 559u: goto L_0885E418;
    case 560u: goto L_0885E420;
    case 561u: goto L_0885E428;
    case 562u: goto L_0885E440;
    case 563u: goto L_0885E444;
    case 564u: goto L_0885E44C;
    case 565u: goto L_0885E464;
    case 566u: goto L_0885E46C;
    case 567u: goto L_0885E484;
    case 568u: goto L_0885E48C;
    case 569u: goto L_0885E4A4;
    case 570u: goto L_0885E4AC;
    case 571u: goto L_0885E4BC;
    case 572u: goto L_0885E4C8;
    case 573u: goto L_0885E4F0;
    case 574u: goto L_0885E4FC;
    case 575u: goto L_0885E514;
    case 576u: goto L_0885E520;
    case 577u: goto L_0885E52C;
    case 578u: goto L_0885E534;
    case 579u: goto L_0885E54C;
    case 580u: goto L_0885E560;
    case 581u: goto L_0885E568;
    case 582u: goto L_0885E57C;
    case 583u: goto L_0885E584;
    case 584u: goto L_0885E598;
    case 585u: goto L_0885E5A0;
    case 586u: goto L_0885E5B4;
    case 587u: goto L_0885E5BC;
    case 588u: goto L_0885E5D0;
    case 589u: goto L_0885E5D8;
    case 590u: goto L_0885E5EC;
    case 591u: goto L_0885E5F4;
    case 592u: goto L_0885E608;
    case 593u: goto L_0885E610;
    case 594u: goto L_0885E624;
    case 595u: goto L_0885E62C;
    case 596u: goto L_0885E640;
    case 597u: goto L_0885E648;
    case 598u: goto L_0885E65C;
    case 599u: goto L_0885E664;
    case 600u: goto L_0885E678;
    case 601u: goto L_0885E680;
    case 602u: goto L_0885E694;
    case 603u: goto L_0885E69C;
    case 604u: goto L_0885E6B0;
    case 605u: goto L_0885E6B8;
    case 606u: goto L_0885E6CC;
    case 607u: goto L_0885E6D4;
    case 608u: goto L_0885E6E8;
    case 609u: goto L_0885E6F0;
    case 610u: goto L_0885E704;
    case 611u: goto L_0885E70C;
    case 612u: goto L_0885E720;
    case 613u: goto L_0885E728;
    case 614u: goto L_0885E73C;
    case 615u: goto L_0885E744;
    case 616u: goto L_0885E758;
    case 617u: goto L_0885E760;
    case 618u: goto L_0885E774;
    case 619u: goto L_0885E77C;
    case 620u: goto L_0885E790;
    case 621u: goto L_0885E798;
    case 622u: goto L_0885E7AC;
    case 623u: goto L_0885E7B4;
    case 624u: goto L_0885E7C8;
    case 625u: goto L_0885E7D0;
    case 626u: goto L_0885E7E4;
    case 627u: goto L_0885E7EC;
    case 628u: goto L_0885E800;
    case 629u: goto L_0885E808;
    case 630u: goto L_0885E81C;
    case 631u: goto L_0885E824;
    case 632u: goto L_0885E838;
    case 633u: goto L_0885E840;
    case 634u: goto L_0885E854;
    case 635u: goto L_0885E85C;
    case 636u: goto L_0885E870;
    case 637u: goto L_0885E878;
    case 638u: goto L_0885E88C;
    case 639u: goto L_0885E894;
    case 640u: goto L_0885E8A8;
    case 641u: goto L_0885E8B0;
    case 642u: goto L_0885E8C4;
    case 643u: goto L_0885E8CC;
    case 644u: goto L_0885E8E0;
    case 645u: goto L_0885E8E8;
    case 646u: goto L_0885E8FC;
    case 647u: goto L_0885E904;
    case 648u: goto L_0885E918;
    case 649u: goto L_0885E920;
    case 650u: goto L_0885E934;
    case 651u: goto L_0885E93C;
    case 652u: goto L_0885E950;
    case 653u: goto L_0885E958;
    case 654u: goto L_0885E96C;
    case 655u: goto L_0885E974;
    case 656u: goto L_0885E988;
    case 657u: goto L_0885E990;
    case 658u: goto L_0885E9A4;
    case 659u: goto L_0885E9AC;
    case 660u: goto L_0885E9C0;
    case 661u: goto L_0885E9C8;
    case 662u: goto L_0885E9DC;
    case 663u: goto L_0885E9E4;
    case 664u: goto L_0885E9F8;
    case 665u: goto L_0885EA00;
    case 666u: goto L_0885EA14;
    case 667u: goto L_0885EA1C;
    case 668u: goto L_0885EA30;
    case 669u: goto L_0885EA38;
    case 670u: goto L_0885EA4C;
    case 671u: goto L_0885EA54;
    case 672u: goto L_0885EA68;
    case 673u: goto L_0885EA70;
    case 674u: goto L_0885EA84;
    case 675u: goto L_0885EA8C;
    case 676u: goto L_0885EAA0;
    case 677u: goto L_0885EAA8;
    case 678u: goto L_0885EABC;
    case 679u: goto L_0885EAC4;
    case 680u: goto L_0885EAD8;
    case 681u: goto L_0885EAE0;
    case 682u: goto L_0885EAF4;
    case 683u: goto L_0885EAFC;
    case 684u: goto L_0885EB10;
    case 685u: goto L_0885EB18;
    case 686u: goto L_0885EB2C;
    case 687u: goto L_0885EB34;
    case 688u: goto L_0885EB48;
    case 689u: goto L_0885EB50;
    case 690u: goto L_0885EB64;
    case 691u: goto L_0885EB6C;
    case 692u: goto L_0885EB80;
    case 693u: goto L_0885EB88;
    case 694u: goto L_0885EB9C;
    case 695u: goto L_0885EBA4;
    case 696u: goto L_0885EBB8;
    case 697u: goto L_0885EBC0;
    case 698u: goto L_0885EBD4;
    case 699u: goto L_0885EBDC;
    case 700u: goto L_0885EBF0;
    case 701u: goto L_0885EBF8;
    case 702u: goto L_0885EC0C;
    case 703u: goto L_0885EC14;
    case 704u: goto L_0885EC28;
    case 705u: goto L_0885EC30;
    case 706u: goto L_0885EC44;
    case 707u: goto L_0885EC4C;
    case 708u: goto L_0885EC60;
    case 709u: goto L_0885EC68;
    case 710u: goto L_0885EC7C;
    case 711u: goto L_0885EC84;
    case 712u: goto L_0885EC98;
    case 713u: goto L_0885ECA0;
    case 714u: goto L_0885ECB4;
    case 715u: goto L_0885ECBC;
    case 716u: goto L_0885ECD0;
    case 717u: goto L_0885ECD8;
    case 718u: goto L_0885ECEC;
    case 719u: goto L_0885ECF4;
    case 720u: goto L_0885ED08;
    case 721u: goto L_0885ED10;
    case 722u: goto L_0885ED24;
    case 723u: goto L_0885ED2C;
    case 724u: goto L_0885ED40;
    case 725u: goto L_0885ED48;
    case 726u: goto L_0885ED5C;
    case 727u: goto L_0885ED64;
    case 728u: goto L_0885ED78;
    case 729u: goto L_0885ED80;
    case 730u: goto L_0885ED94;
    case 731u: goto L_0885ED9C;
    case 732u: goto L_0885EDB0;
    case 733u: goto L_0885EDB8;
    case 734u: goto L_0885EDCC;
    case 735u: goto L_0885EDD4;
    case 736u: goto L_0885EDE8;
    case 737u: goto L_0885EDF0;
    case 738u: goto L_0885EE04;
    case 739u: goto L_0885EE0C;
    case 740u: goto L_0885EE20;
    case 741u: goto L_0885EE28;
    case 742u: goto L_0885EE3C;
    case 743u: goto L_0885EE44;
    case 744u: goto L_0885EE58;
    case 745u: goto L_0885EE60;
    case 746u: goto L_0885EE74;
    case 747u: goto L_0885EE7C;
    case 748u: goto L_0885EE90;
    case 749u: goto L_0885EE98;
    case 750u: goto L_0885EEAC;
    case 751u: goto L_0885EEB4;
    case 752u: goto L_0885EEC8;
    case 753u: goto L_0885EED0;
    case 754u: goto L_0885EEE4;
    case 755u: goto L_0885EEEC;
    case 756u: goto L_0885EF00;
    case 757u: goto L_0885EF08;
    case 758u: goto L_0885EF1C;
    case 759u: goto L_0885EF24;
    case 760u: goto L_0885EF38;
    case 761u: goto L_0885EF40;
    case 762u: goto L_0885EF54;
    case 763u: goto L_0885EF5C;
    case 764u: goto L_0885EF70;
    case 765u: goto L_0885EF78;
    case 766u: goto L_0885EF8C;
    case 767u: goto L_0885EF94;
    case 768u: goto L_0885EFA8;
    case 769u: goto L_0885EFB0;
    case 770u: goto L_0885EFC4;
    case 771u: goto L_0885EFCC;
    case 772u: goto L_0885EFE0;
    case 773u: goto L_0885EFE8;
    case 774u: goto L_0885EFFC;
    case 775u: goto L_0885F004;
    case 776u: goto L_0885F018;
    case 777u: goto L_0885F020;
    case 778u: goto L_0885F034;
    case 779u: goto L_0885F03C;
    case 780u: goto L_0885F050;
    case 781u: goto L_0885F058;
    case 782u: goto L_0885F06C;
    case 783u: goto L_0885F074;
    case 784u: goto L_0885F088;
    case 785u: goto L_0885F090;
    case 786u: goto L_0885F0A4;
    case 787u: goto L_0885F0AC;
    case 788u: goto L_0885F0C0;
    case 789u: goto L_0885F0C8;
    case 790u: goto L_0885F0DC;
    case 791u: goto L_0885F0E4;
    case 792u: goto L_0885F0F8;
    case 793u: goto L_0885F100;
    case 794u: goto L_0885F114;
    case 795u: goto L_0885F11C;
    case 796u: goto L_0885F130;
    case 797u: goto L_0885F138;
    case 798u: goto L_0885F14C;
    case 799u: goto L_0885F154;
    case 800u: goto L_0885F168;
    case 801u: goto L_0885F170;
    case 802u: goto L_0885F184;
    case 803u: goto L_0885F18C;
    case 804u: goto L_0885F1A0;
    case 805u: goto L_0885F1A8;
    case 806u: goto L_0885F1BC;
    case 807u: goto L_0885F1C4;
    case 808u: goto L_0885F1D8;
    case 809u: goto L_0885F1E0;
    case 810u: goto L_0885F1F4;
    case 811u: goto L_0885F1FC;
    case 812u: goto L_0885F210;
    case 813u: goto L_0885F218;
    case 814u: goto L_0885F22C;
    case 815u: goto L_0885F234;
    case 816u: goto L_0885F248;
    case 817u: goto L_0885F250;
    case 818u: goto L_0885F264;
    case 819u: goto L_0885F26C;
    case 820u: goto L_0885F280;
    case 821u: goto L_0885F288;
    case 822u: goto L_0885F29C;
    case 823u: goto L_0885F2A4;
    case 824u: goto L_0885F2B8;
    case 825u: goto L_0885F2C0;
    case 826u: goto L_0885F2D4;
    case 827u: goto L_0885F2DC;
    case 828u: goto L_0885F2F0;
    case 829u: goto L_0885F2F8;
    case 830u: goto L_0885F30C;
    case 831u: goto L_0885F314;
    case 832u: goto L_0885F328;
    case 833u: goto L_0885F334;
    case 834u: goto L_0885F344;
    case 835u: goto L_0885F354;
    case 836u: goto L_0885F370;
    case 837u: goto L_0885F37C;
    case 838u: goto L_0885F388;
    case 839u: goto L_0885F390;
    case 840u: goto L_0885F398;
    case 841u: goto L_0885F3A0;
    case 842u: goto L_0885F3A8;
    case 843u: goto L_0885F3C0;
    case 844u: goto L_0885F3C8;
    case 845u: goto L_0885F3D4;
    case 846u: goto L_0885F3DC;
    case 847u: goto L_0885F3E0;
    case 848u: goto L_0885F3F4;
    case 849u: goto L_0885F410;
    case 850u: goto L_0885F418;
    case 851u: goto L_0885F430;
    case 852u: goto L_0885F464;
    case 853u: goto L_0885F468;
    case 854u: goto L_0885F47C;
    case 855u: goto L_0885F484;
    case 856u: goto L_0885F4A4;
    case 857u: goto L_0885F4AC;
    case 858u: goto L_0885F4B8;
    case 859u: goto L_0885F4D0;
    case 860u: goto L_0885F4DC;
    case 861u: goto L_0885F4F4;
    case 862u: goto L_0885F500;
    case 863u: goto L_0885F50C;
    case 864u: goto L_0885F514;
    case 865u: goto L_0885F518;
    case 866u: goto L_0885F530;
    case 867u: goto L_0885F53C;
    case 868u: goto L_0885F550;
    case 869u: goto L_0885F574;
    case 870u: goto L_0885F57C;
    case 871u: goto L_0885F584;
    case 872u: goto L_0885F58C;
    case 873u: goto L_0885F594;
    case 874u: goto L_0885F5A4;
    case 875u: goto L_0885F5B8;
    case 876u: goto L_0885F5D8;
    case 877u: goto L_0885F5E4;
    case 878u: goto L_0885F5EC;
    case 879u: goto L_0885F5F4;
    case 880u: goto L_0885F5FC;
    case 881u: goto L_0885F600;
    case 882u: goto L_0885F608;
    case 883u: goto L_0885F614;
    case 884u: goto L_0885F618;
    case 885u: goto L_0885F62C;
    case 886u: goto L_0885F634;
    case 887u: goto L_0885F658;
    case 888u: goto L_0885F668;
    case 889u: goto L_0885F684;
    case 890u: goto L_0885F690;
    case 891u: goto L_0885F6B0;
    case 892u: goto L_0885F6C0;
    case 893u: goto L_0885F6C8;
    case 894u: goto L_0885F6D8;
    case 895u: goto L_0885F6E8;
    case 896u: goto L_0885F70C;
    case 897u: goto L_0885F714;
    case 898u: goto L_0885F728;
    case 899u: goto L_0885F734;
    case 900u: goto L_0885F73C;
    case 901u: goto L_0885F748;
    case 902u: goto L_0885F74C;
    case 903u: goto L_0885F764;
    case 904u: goto L_0885F780;
    case 905u: goto L_0885F78C;
    case 906u: goto L_0885F798;
    case 907u: goto L_0885F7AC;
    case 908u: goto L_0885F7C4;
    case 909u: goto L_0885F7E4;
    case 910u: goto L_0885F800;
    case 911u: goto L_0885F818;
    case 912u: goto L_0885F828;
    case 913u: goto L_0885F840;
    case 914u: goto L_0885F854;
    case 915u: goto L_0885F8C8;
    case 916u: goto L_0885F93C;
    case 917u: goto L_0885F9B0;
    case 918u: goto L_0885F9CC;
    case 919u: goto L_0885F9D8;
    case 920u: goto L_0885F9F4;
    case 921u: goto L_0885FA00;
    case 922u: goto L_0885FA1C;
    case 923u: goto L_0885FA28;
    case 924u: goto L_0885FB5C;
    case 925u: goto L_0885FC3C;
    case 926u: goto L_0885FD1C;
    case 927u: goto L_0885FDFC;
    case 928u: goto L_0885FE1C;
    case 929u: goto L_0885FE2C;
    case 930u: goto L_0885FE3C;
    case 931u: goto L_0885FE44;
    case 932u: goto L_0885FE48;
    case 933u: goto L_0885FE50;
    case 934u: goto L_0885FE8C;
    case 935u: goto L_0885FEC8;
    case 936u: goto L_0885FF14;
    case 937u: goto L_0885FF20;
    case 938u: goto L_0885FF40;
    case 939u: goto L_0885FF48;
    case 940u: goto L_0885FF78;
    case 941u: goto L_0885FF98;
    case 942u: goto L_0885FFB4;
    case 943u: goto L_0885FFE4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        AOT_REGCACHE_SYNC_OUT(); return;
    }
    }
L_0885C000:
    aot_gpr_31 = (0x0885C008u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885C008u) goto L_0885C008;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885C008:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0021_entry, 21u, 1025u, 0x0885BFC8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_0885C010;
    }
L_0885C010:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5286u);
    aot_gpr_31 = (0x0885C028u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885C028u) goto L_0885C028;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885C028:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0021_entry, 21u, 1025u, 0x0885BFC8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_0885C030;
    }
L_0885C030:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5284u);
    aot_gpr_31 = (0x0885C048u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885C048u) goto L_0885C048;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885C048:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0021_entry, 21u, 1025u, 0x0885BFC8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_0885C050;
    }
L_0885C050:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5288u);
    aot_gpr_31 = (0x0885C068u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885C068u) goto L_0885C068;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885C068:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0021_entry, 21u, 1025u, 0x0885BFC8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_0885C070;
    }
L_0885C070:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5301u);
    aot_gpr_31 = (0x0885C088u);
    aot_gpr_8 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885C088u) goto L_0885C088;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885C088:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0021_entry, 21u, 1025u, 0x0885BFC8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_0885C090;
    }
L_0885C090:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5277u);
    aot_gpr_31 = (0x0885C0A8u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885C0A8u) goto L_0885C0A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885C0A8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0021_entry, 21u, 1025u, 0x0885BFC8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_0885C0B0;
    }
L_0885C0B0:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5280u);
    aot_gpr_31 = (0x0885C0C8u);
    aot_gpr_8 = (0u | 4u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885C0C8u) goto L_0885C0C8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885C0C8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0021_entry, 21u, 1025u, 0x0885BFC8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_0885C0D0;
    }
L_0885C0D0:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5293u);
    aot_gpr_31 = (0x0885C0E8u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885C0E8u) goto L_0885C0E8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885C0E8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0021_entry, 21u, 1025u, 0x0885BFC8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_0885C0F0;
    }
L_0885C0F0:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x0885C104u);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C971C, 49u, 302u, 0x088C971Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[28], ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 302u, 0x088C971Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885C104u) goto L_0885C104;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885C104:
    aot_gpr_31 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
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
L_0885C110:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr_7 = (aot_gpr_6 & 65535u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_6 = (aot_gpr_7 + static_cast<std::uint32_t>(-118));
    aot_gpr_5 = (2237u << 16u);
    aot_gpr_8 = (aot_gpr_6 < static_cast<std::uint32_t>(41) ? 1u : 0u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = aot_gpr_8 == 0u;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_0885C290;
      }
      goto L_0885C134;
    }
L_0885C134:
    aot_gpr_6 = (aot_gpr_6 << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_6);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-30752)));
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
L_0885C14C:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5321u);
    aot_gpr_31 = (0x0885C164u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885C164u) goto L_0885C164;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885C164:
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_0885C168;
L_0885C168:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0885C2A4;
      }
      goto L_0885C170;
    }
L_0885C170:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5323u);
    aot_gpr_31 = (0x0885C188u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885C188u) goto L_0885C188;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885C188:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885C168;
      }
      goto L_0885C190;
    }
L_0885C190:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5315u);
    aot_gpr_31 = (0x0885C1A8u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885C1A8u) goto L_0885C1A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885C1A8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885C168;
      }
      goto L_0885C1B0;
    }
L_0885C1B0:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5311u);
    aot_gpr_31 = (0x0885C1C8u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885C1C8u) goto L_0885C1C8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885C1C8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885C168;
      }
      goto L_0885C1D0;
    }
L_0885C1D0:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5309u);
    aot_gpr_31 = (0x0885C1E8u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885C1E8u) goto L_0885C1E8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885C1E8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885C168;
      }
      goto L_0885C1F0;
    }
L_0885C1F0:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5313u);
    aot_gpr_31 = (0x0885C208u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885C208u) goto L_0885C208;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885C208:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885C168;
      }
      goto L_0885C210;
    }
L_0885C210:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5326u);
    aot_gpr_31 = (0x0885C228u);
    aot_gpr_8 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885C228u) goto L_0885C228;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885C228:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885C168;
      }
      goto L_0885C230;
    }
L_0885C230:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5302u);
    aot_gpr_31 = (0x0885C248u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885C248u) goto L_0885C248;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885C248:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885C168;
      }
      goto L_0885C250;
    }
L_0885C250:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5305u);
    aot_gpr_31 = (0x0885C268u);
    aot_gpr_8 = (0u | 4u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885C268u) goto L_0885C268;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885C268:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885C168;
      }
      goto L_0885C270;
    }
L_0885C270:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5318u);
    aot_gpr_31 = (0x0885C288u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885C288u) goto L_0885C288;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885C288:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885C168;
      }
      goto L_0885C290;
    }
L_0885C290:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x0885C2A4u);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C971C, 49u, 302u, 0x088C971Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[28], ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 302u, 0x088C971Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885C2A4u) goto L_0885C2A4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885C2A4:
    aot_gpr_31 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
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
L_0885C2B0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr_7 = (aot_gpr_6 & 65535u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_6 = (aot_gpr_7 + static_cast<std::uint32_t>(-118));
    aot_gpr_5 = (2237u << 16u);
    aot_gpr_8 = (aot_gpr_6 < static_cast<std::uint32_t>(41) ? 1u : 0u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = aot_gpr_8 == 0u;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_0885C430;
      }
      goto L_0885C2D4;
    }
L_0885C2D4:
    aot_gpr_6 = (aot_gpr_6 << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_6);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-30584)));
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
L_0885C2EC:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5345u);
    aot_gpr_31 = (0x0885C304u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885C304u) goto L_0885C304;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885C304:
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_0885C308;
L_0885C308:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0885C444;
      }
      goto L_0885C310;
    }
L_0885C310:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5347u);
    aot_gpr_31 = (0x0885C328u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885C328u) goto L_0885C328;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885C328:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885C308;
      }
      goto L_0885C330;
    }
L_0885C330:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5339u);
    aot_gpr_31 = (0x0885C348u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885C348u) goto L_0885C348;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885C348:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885C308;
      }
      goto L_0885C350;
    }
L_0885C350:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5335u);
    aot_gpr_31 = (0x0885C368u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885C368u) goto L_0885C368;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885C368:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885C308;
      }
      goto L_0885C370;
    }
L_0885C370:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5333u);
    aot_gpr_31 = (0x0885C388u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885C388u) goto L_0885C388;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885C388:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885C308;
      }
      goto L_0885C390;
    }
L_0885C390:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5337u);
    aot_gpr_31 = (0x0885C3A8u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885C3A8u) goto L_0885C3A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885C3A8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885C308;
      }
      goto L_0885C3B0;
    }
L_0885C3B0:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5350u);
    aot_gpr_31 = (0x0885C3C8u);
    aot_gpr_8 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885C3C8u) goto L_0885C3C8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885C3C8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885C308;
      }
      goto L_0885C3D0;
    }
L_0885C3D0:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5327u);
    aot_gpr_31 = (0x0885C3E8u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885C3E8u) goto L_0885C3E8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885C3E8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885C308;
      }
      goto L_0885C3F0;
    }
L_0885C3F0:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5330u);
    aot_gpr_31 = (0x0885C408u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885C408u) goto L_0885C408;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885C408:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885C308;
      }
      goto L_0885C410;
    }
L_0885C410:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5342u);
    aot_gpr_31 = (0x0885C428u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885C428u) goto L_0885C428;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885C428:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885C308;
      }
      goto L_0885C430;
    }
L_0885C430:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x0885C444u);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C971C, 49u, 302u, 0x088C971Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[28], ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 302u, 0x088C971Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885C444u) goto L_0885C444;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885C444:
    aot_gpr_31 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
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
L_0885C450:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr_7 = (aot_gpr_6 & 65535u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_6 = (aot_gpr_7 + static_cast<std::uint32_t>(-118));
    aot_gpr_5 = (2237u << 16u);
    aot_gpr_8 = (aot_gpr_6 < static_cast<std::uint32_t>(41) ? 1u : 0u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = aot_gpr_8 == 0u;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_0885C5D0;
      }
      goto L_0885C474;
    }
L_0885C474:
    aot_gpr_6 = (aot_gpr_6 << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_6);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-30416)));
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
L_0885C48C:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5370u);
    aot_gpr_31 = (0x0885C4A4u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885C4A4u) goto L_0885C4A4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885C4A4:
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_0885C4A8;
L_0885C4A8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0885C5E4;
      }
      goto L_0885C4B0;
    }
L_0885C4B0:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5372u);
    aot_gpr_31 = (0x0885C4C8u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885C4C8u) goto L_0885C4C8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885C4C8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885C4A8;
      }
      goto L_0885C4D0;
    }
L_0885C4D0:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5364u);
    aot_gpr_31 = (0x0885C4E8u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885C4E8u) goto L_0885C4E8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885C4E8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885C4A8;
      }
      goto L_0885C4F0;
    }
L_0885C4F0:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5360u);
    aot_gpr_31 = (0x0885C508u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885C508u) goto L_0885C508;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885C508:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885C4A8;
      }
      goto L_0885C510;
    }
L_0885C510:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5358u);
    aot_gpr_31 = (0x0885C528u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885C528u) goto L_0885C528;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885C528:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885C4A8;
      }
      goto L_0885C530;
    }
L_0885C530:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5362u);
    aot_gpr_31 = (0x0885C548u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885C548u) goto L_0885C548;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885C548:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885C4A8;
      }
      goto L_0885C550;
    }
L_0885C550:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5375u);
    aot_gpr_31 = (0x0885C568u);
    aot_gpr_8 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885C568u) goto L_0885C568;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885C568:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885C4A8;
      }
      goto L_0885C570;
    }
L_0885C570:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5351u);
    aot_gpr_31 = (0x0885C588u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885C588u) goto L_0885C588;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885C588:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885C4A8;
      }
      goto L_0885C590;
    }
L_0885C590:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5354u);
    aot_gpr_31 = (0x0885C5A8u);
    aot_gpr_8 = (0u | 4u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885C5A8u) goto L_0885C5A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885C5A8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885C4A8;
      }
      goto L_0885C5B0;
    }
L_0885C5B0:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5367u);
    aot_gpr_31 = (0x0885C5C8u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885C5C8u) goto L_0885C5C8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885C5C8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885C4A8;
      }
      goto L_0885C5D0;
    }
L_0885C5D0:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x0885C5E4u);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C971C, 49u, 302u, 0x088C971Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[28], ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 302u, 0x088C971Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885C5E4u) goto L_0885C5E4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885C5E4:
    aot_gpr_31 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
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
L_0885C5F0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr_7 = (aot_gpr_6 & 65535u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_6 = (aot_gpr_7 + static_cast<std::uint32_t>(-118));
    aot_gpr_5 = (2237u << 16u);
    aot_gpr_8 = (aot_gpr_6 < static_cast<std::uint32_t>(41) ? 1u : 0u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = aot_gpr_8 == 0u;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_0885C770;
      }
      goto L_0885C614;
    }
L_0885C614:
    aot_gpr_6 = (aot_gpr_6 << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_6);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-30248)));
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
L_0885C62C:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5396u);
    aot_gpr_31 = (0x0885C644u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885C644u) goto L_0885C644;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885C644:
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_0885C648;
L_0885C648:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0885C784;
      }
      goto L_0885C650;
    }
L_0885C650:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5398u);
    aot_gpr_31 = (0x0885C668u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885C668u) goto L_0885C668;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885C668:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885C648;
      }
      goto L_0885C670;
    }
L_0885C670:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5390u);
    aot_gpr_31 = (0x0885C688u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885C688u) goto L_0885C688;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885C688:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885C648;
      }
      goto L_0885C690;
    }
L_0885C690:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5385u);
    aot_gpr_31 = (0x0885C6A8u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885C6A8u) goto L_0885C6A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885C6A8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885C648;
      }
      goto L_0885C6B0;
    }
L_0885C6B0:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5383u);
    aot_gpr_31 = (0x0885C6C8u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885C6C8u) goto L_0885C6C8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885C6C8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885C648;
      }
      goto L_0885C6D0;
    }
L_0885C6D0:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5388u);
    aot_gpr_31 = (0x0885C6E8u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885C6E8u) goto L_0885C6E8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885C6E8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885C648;
      }
      goto L_0885C6F0;
    }
L_0885C6F0:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5401u);
    aot_gpr_31 = (0x0885C708u);
    aot_gpr_8 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885C708u) goto L_0885C708;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885C708:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885C648;
      }
      goto L_0885C710;
    }
L_0885C710:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5376u);
    aot_gpr_31 = (0x0885C728u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885C728u) goto L_0885C728;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885C728:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885C648;
      }
      goto L_0885C730;
    }
L_0885C730:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5379u);
    aot_gpr_31 = (0x0885C748u);
    aot_gpr_8 = (0u | 4u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885C748u) goto L_0885C748;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885C748:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885C648;
      }
      goto L_0885C750;
    }
L_0885C750:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5393u);
    aot_gpr_31 = (0x0885C768u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885C768u) goto L_0885C768;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885C768:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885C648;
      }
      goto L_0885C770;
    }
L_0885C770:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x0885C784u);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C9640, 49u, 289u, 0x088C9640u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[28], ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 289u, 0x088C9640u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885C784u) goto L_0885C784;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885C784:
    aot_gpr_31 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
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
L_0885C790:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr_7 = (aot_gpr_6 & 65535u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_6 = (aot_gpr_7 + static_cast<std::uint32_t>(-118));
    aot_gpr_5 = (2237u << 16u);
    aot_gpr_8 = (aot_gpr_6 < static_cast<std::uint32_t>(41) ? 1u : 0u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = aot_gpr_8 == 0u;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_0885C910;
      }
      goto L_0885C7B4;
    }
L_0885C7B4:
    aot_gpr_6 = (aot_gpr_6 << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_6);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-30080)));
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
L_0885C7CC:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5421u);
    aot_gpr_31 = (0x0885C7E4u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885C7E4u) goto L_0885C7E4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885C7E4:
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_0885C7E8;
L_0885C7E8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0885C924;
      }
      goto L_0885C7F0;
    }
L_0885C7F0:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5423u);
    aot_gpr_31 = (0x0885C808u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885C808u) goto L_0885C808;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885C808:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885C7E8;
      }
      goto L_0885C810;
    }
L_0885C810:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5415u);
    aot_gpr_31 = (0x0885C828u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885C828u) goto L_0885C828;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885C828:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885C7E8;
      }
      goto L_0885C830;
    }
L_0885C830:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5411u);
    aot_gpr_31 = (0x0885C848u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885C848u) goto L_0885C848;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885C848:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885C7E8;
      }
      goto L_0885C850;
    }
L_0885C850:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5409u);
    aot_gpr_31 = (0x0885C868u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885C868u) goto L_0885C868;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885C868:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885C7E8;
      }
      goto L_0885C870;
    }
L_0885C870:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5413u);
    aot_gpr_31 = (0x0885C888u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885C888u) goto L_0885C888;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885C888:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885C7E8;
      }
      goto L_0885C890;
    }
L_0885C890:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5426u);
    aot_gpr_31 = (0x0885C8A8u);
    aot_gpr_8 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885C8A8u) goto L_0885C8A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885C8A8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885C7E8;
      }
      goto L_0885C8B0;
    }
L_0885C8B0:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5402u);
    aot_gpr_31 = (0x0885C8C8u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885C8C8u) goto L_0885C8C8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885C8C8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885C7E8;
      }
      goto L_0885C8D0;
    }
L_0885C8D0:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5405u);
    aot_gpr_31 = (0x0885C8E8u);
    aot_gpr_8 = (0u | 4u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885C8E8u) goto L_0885C8E8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885C8E8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885C7E8;
      }
      goto L_0885C8F0;
    }
L_0885C8F0:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5418u);
    aot_gpr_31 = (0x0885C908u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885C908u) goto L_0885C908;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885C908:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885C7E8;
      }
      goto L_0885C910;
    }
L_0885C910:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x0885C924u);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C9640, 49u, 289u, 0x088C9640u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[28], ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 289u, 0x088C9640u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885C924u) goto L_0885C924;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885C924:
    aot_gpr_31 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
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
L_0885C930:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr_7 = (aot_gpr_6 & 65535u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_6 = (aot_gpr_7 + static_cast<std::uint32_t>(-118));
    aot_gpr_5 = (2237u << 16u);
    aot_gpr_8 = (aot_gpr_6 < static_cast<std::uint32_t>(41) ? 1u : 0u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = aot_gpr_8 == 0u;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_0885CAB0;
      }
      goto L_0885C954;
    }
L_0885C954:
    aot_gpr_6 = (aot_gpr_6 << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_6);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-29912)));
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
L_0885C96C:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5447u);
    aot_gpr_31 = (0x0885C984u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885C984u) goto L_0885C984;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885C984:
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_0885C988;
L_0885C988:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0885CAC4;
      }
      goto L_0885C990;
    }
L_0885C990:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5449u);
    aot_gpr_31 = (0x0885C9A8u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885C9A8u) goto L_0885C9A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885C9A8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885C988;
      }
      goto L_0885C9B0;
    }
L_0885C9B0:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5441u);
    aot_gpr_31 = (0x0885C9C8u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885C9C8u) goto L_0885C9C8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885C9C8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885C988;
      }
      goto L_0885C9D0;
    }
L_0885C9D0:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5436u);
    aot_gpr_31 = (0x0885C9E8u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885C9E8u) goto L_0885C9E8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885C9E8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885C988;
      }
      goto L_0885C9F0;
    }
L_0885C9F0:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5434u);
    aot_gpr_31 = (0x0885CA08u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885CA08u) goto L_0885CA08;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885CA08:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885C988;
      }
      goto L_0885CA10;
    }
L_0885CA10:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5439u);
    aot_gpr_31 = (0x0885CA28u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885CA28u) goto L_0885CA28;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885CA28:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885C988;
      }
      goto L_0885CA30;
    }
L_0885CA30:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5452u);
    aot_gpr_31 = (0x0885CA48u);
    aot_gpr_8 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885CA48u) goto L_0885CA48;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885CA48:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885C988;
      }
      goto L_0885CA50;
    }
L_0885CA50:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5427u);
    aot_gpr_31 = (0x0885CA68u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885CA68u) goto L_0885CA68;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885CA68:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885C988;
      }
      goto L_0885CA70;
    }
L_0885CA70:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5430u);
    aot_gpr_31 = (0x0885CA88u);
    aot_gpr_8 = (0u | 4u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885CA88u) goto L_0885CA88;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885CA88:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885C988;
      }
      goto L_0885CA90;
    }
L_0885CA90:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5444u);
    aot_gpr_31 = (0x0885CAA8u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885CAA8u) goto L_0885CAA8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885CAA8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885C988;
      }
      goto L_0885CAB0;
    }
L_0885CAB0:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x0885CAC4u);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C9640, 49u, 289u, 0x088C9640u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[28], ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 289u, 0x088C9640u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885CAC4u) goto L_0885CAC4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885CAC4:
    aot_gpr_31 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
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
L_0885CAD0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr_7 = (aot_gpr_6 & 65535u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_6 = (aot_gpr_7 + static_cast<std::uint32_t>(-118));
    aot_gpr_5 = (2237u << 16u);
    aot_gpr_8 = (aot_gpr_6 < static_cast<std::uint32_t>(41) ? 1u : 0u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = aot_gpr_8 == 0u;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_0885CC30;
      }
      goto L_0885CAF4;
    }
L_0885CAF4:
    aot_gpr_6 = (aot_gpr_6 << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_6);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-29744)));
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
L_0885CB0C:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5472u);
    aot_gpr_31 = (0x0885CB24u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885CB24u) goto L_0885CB24;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885CB24:
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_0885CB28;
L_0885CB28:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0885CC44;
      }
      goto L_0885CB30;
    }
L_0885CB30:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5474u);
    aot_gpr_31 = (0x0885CB48u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885CB48u) goto L_0885CB48;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885CB48:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885CB28;
      }
      goto L_0885CB50;
    }
L_0885CB50:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5466u);
    aot_gpr_31 = (0x0885CB68u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885CB68u) goto L_0885CB68;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885CB68:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885CB28;
      }
      goto L_0885CB70;
    }
L_0885CB70:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5462u);
    aot_gpr_31 = (0x0885CB88u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885CB88u) goto L_0885CB88;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885CB88:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885CB28;
      }
      goto L_0885CB90;
    }
L_0885CB90:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5460u);
    aot_gpr_31 = (0x0885CBA8u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885CBA8u) goto L_0885CBA8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885CBA8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885CB28;
      }
      goto L_0885CBB0;
    }
L_0885CBB0:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5464u);
    aot_gpr_31 = (0x0885CBC8u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885CBC8u) goto L_0885CBC8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885CBC8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885CB28;
      }
      goto L_0885CBD0;
    }
L_0885CBD0:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5453u);
    aot_gpr_31 = (0x0885CBE8u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885CBE8u) goto L_0885CBE8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885CBE8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885CB28;
      }
      goto L_0885CBF0;
    }
L_0885CBF0:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5456u);
    aot_gpr_31 = (0x0885CC08u);
    aot_gpr_8 = (0u | 4u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885CC08u) goto L_0885CC08;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885CC08:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885CB28;
      }
      goto L_0885CC10;
    }
L_0885CC10:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5469u);
    aot_gpr_31 = (0x0885CC28u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885CC28u) goto L_0885CC28;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885CC28:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885CB28;
      }
      goto L_0885CC30;
    }
L_0885CC30:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x0885CC44u);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C9640, 49u, 289u, 0x088C9640u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[28], ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 289u, 0x088C9640u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885CC44u) goto L_0885CC44;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885CC44:
    aot_gpr_31 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
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
L_0885CC50:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr_7 = (aot_gpr_6 & 65535u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_6 = (aot_gpr_7 + static_cast<std::uint32_t>(-118));
    aot_gpr_5 = (2237u << 16u);
    aot_gpr_8 = (aot_gpr_6 < static_cast<std::uint32_t>(41) ? 1u : 0u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = aot_gpr_8 == 0u;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_0885CDD0;
      }
      goto L_0885CC74;
    }
L_0885CC74:
    aot_gpr_6 = (aot_gpr_6 << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_6);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-29576)));
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
L_0885CC8C:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5496u);
    aot_gpr_31 = (0x0885CCA4u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885CCA4u) goto L_0885CCA4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885CCA4:
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_0885CCA8;
L_0885CCA8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0885CDE4;
      }
      goto L_0885CCB0;
    }
L_0885CCB0:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5498u);
    aot_gpr_31 = (0x0885CCC8u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885CCC8u) goto L_0885CCC8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885CCC8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885CCA8;
      }
      goto L_0885CCD0;
    }
L_0885CCD0:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5490u);
    aot_gpr_31 = (0x0885CCE8u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885CCE8u) goto L_0885CCE8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885CCE8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885CCA8;
      }
      goto L_0885CCF0;
    }
L_0885CCF0:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5486u);
    aot_gpr_31 = (0x0885CD08u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885CD08u) goto L_0885CD08;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885CD08:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885CCA8;
      }
      goto L_0885CD10;
    }
L_0885CD10:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5484u);
    aot_gpr_31 = (0x0885CD28u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885CD28u) goto L_0885CD28;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885CD28:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885CCA8;
      }
      goto L_0885CD30;
    }
L_0885CD30:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5488u);
    aot_gpr_31 = (0x0885CD48u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885CD48u) goto L_0885CD48;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885CD48:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885CCA8;
      }
      goto L_0885CD50;
    }
L_0885CD50:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5501u);
    aot_gpr_31 = (0x0885CD68u);
    aot_gpr_8 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885CD68u) goto L_0885CD68;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885CD68:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885CCA8;
      }
      goto L_0885CD70;
    }
L_0885CD70:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5477u);
    aot_gpr_31 = (0x0885CD88u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885CD88u) goto L_0885CD88;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885CD88:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885CCA8;
      }
      goto L_0885CD90;
    }
L_0885CD90:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5480u);
    aot_gpr_31 = (0x0885CDA8u);
    aot_gpr_8 = (0u | 4u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885CDA8u) goto L_0885CDA8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885CDA8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885CCA8;
      }
      goto L_0885CDB0;
    }
L_0885CDB0:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5493u);
    aot_gpr_31 = (0x0885CDC8u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885CDC8u) goto L_0885CDC8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885CDC8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885CCA8;
      }
      goto L_0885CDD0;
    }
L_0885CDD0:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x0885CDE4u);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C9640, 49u, 289u, 0x088C9640u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[28], ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 289u, 0x088C9640u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885CDE4u) goto L_0885CDE4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885CDE4:
    aot_gpr_31 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
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
L_0885CDF0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr_7 = (aot_gpr_6 & 65535u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_6 = (aot_gpr_7 + static_cast<std::uint32_t>(-118));
    aot_gpr_5 = (2237u << 16u);
    aot_gpr_8 = (aot_gpr_6 < static_cast<std::uint32_t>(41) ? 1u : 0u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = aot_gpr_8 == 0u;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_0885CF70;
      }
      goto L_0885CE14;
    }
L_0885CE14:
    aot_gpr_6 = (aot_gpr_6 << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_6);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-29408)));
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
L_0885CE2C:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5521u);
    aot_gpr_31 = (0x0885CE44u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885CE44u) goto L_0885CE44;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885CE44:
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_0885CE48;
L_0885CE48:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0885CF84;
      }
      goto L_0885CE50;
    }
L_0885CE50:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5523u);
    aot_gpr_31 = (0x0885CE68u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885CE68u) goto L_0885CE68;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885CE68:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885CE48;
      }
      goto L_0885CE70;
    }
L_0885CE70:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5515u);
    aot_gpr_31 = (0x0885CE88u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885CE88u) goto L_0885CE88;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885CE88:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885CE48;
      }
      goto L_0885CE90;
    }
L_0885CE90:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5511u);
    aot_gpr_31 = (0x0885CEA8u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885CEA8u) goto L_0885CEA8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885CEA8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885CE48;
      }
      goto L_0885CEB0;
    }
L_0885CEB0:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5509u);
    aot_gpr_31 = (0x0885CEC8u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885CEC8u) goto L_0885CEC8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885CEC8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885CE48;
      }
      goto L_0885CED0;
    }
L_0885CED0:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5513u);
    aot_gpr_31 = (0x0885CEE8u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885CEE8u) goto L_0885CEE8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885CEE8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885CE48;
      }
      goto L_0885CEF0;
    }
L_0885CEF0:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5526u);
    aot_gpr_31 = (0x0885CF08u);
    aot_gpr_8 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885CF08u) goto L_0885CF08;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885CF08:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885CE48;
      }
      goto L_0885CF10;
    }
L_0885CF10:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5502u);
    aot_gpr_31 = (0x0885CF28u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885CF28u) goto L_0885CF28;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885CF28:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885CE48;
      }
      goto L_0885CF30;
    }
L_0885CF30:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5505u);
    aot_gpr_31 = (0x0885CF48u);
    aot_gpr_8 = (0u | 4u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885CF48u) goto L_0885CF48;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885CF48:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885CE48;
      }
      goto L_0885CF50;
    }
L_0885CF50:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5518u);
    aot_gpr_31 = (0x0885CF68u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885CF68u) goto L_0885CF68;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885CF68:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885CE48;
      }
      goto L_0885CF70;
    }
L_0885CF70:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x0885CF84u);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C9640, 49u, 289u, 0x088C9640u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[28], ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 289u, 0x088C9640u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885CF84u) goto L_0885CF84;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885CF84:
    aot_gpr_31 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
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
L_0885CF90:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr_7 = (aot_gpr_6 & 65535u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_6 = (aot_gpr_7 + static_cast<std::uint32_t>(-118));
    aot_gpr_5 = (2237u << 16u);
    aot_gpr_8 = (aot_gpr_6 < static_cast<std::uint32_t>(41) ? 1u : 0u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = aot_gpr_8 == 0u;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_0885D110;
      }
      goto L_0885CFB4;
    }
L_0885CFB4:
    aot_gpr_6 = (aot_gpr_6 << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_6);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-29240)));
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
L_0885CFCC:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5546u);
    aot_gpr_31 = (0x0885CFE4u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885CFE4u) goto L_0885CFE4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885CFE4:
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_0885CFE8;
L_0885CFE8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0885D124;
      }
      goto L_0885CFF0;
    }
L_0885CFF0:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5548u);
    aot_gpr_31 = (0x0885D008u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885D008u) goto L_0885D008;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885D008:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885CFE8;
      }
      goto L_0885D010;
    }
L_0885D010:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5540u);
    aot_gpr_31 = (0x0885D028u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885D028u) goto L_0885D028;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885D028:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885CFE8;
      }
      goto L_0885D030;
    }
L_0885D030:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5536u);
    aot_gpr_31 = (0x0885D048u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885D048u) goto L_0885D048;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885D048:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885CFE8;
      }
      goto L_0885D050;
    }
L_0885D050:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5534u);
    aot_gpr_31 = (0x0885D068u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885D068u) goto L_0885D068;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885D068:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885CFE8;
      }
      goto L_0885D070;
    }
L_0885D070:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5538u);
    aot_gpr_31 = (0x0885D088u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885D088u) goto L_0885D088;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885D088:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885CFE8;
      }
      goto L_0885D090;
    }
L_0885D090:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5551u);
    aot_gpr_31 = (0x0885D0A8u);
    aot_gpr_8 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885D0A8u) goto L_0885D0A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885D0A8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885CFE8;
      }
      goto L_0885D0B0;
    }
L_0885D0B0:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5527u);
    aot_gpr_31 = (0x0885D0C8u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885D0C8u) goto L_0885D0C8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885D0C8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885CFE8;
      }
      goto L_0885D0D0;
    }
L_0885D0D0:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5530u);
    aot_gpr_31 = (0x0885D0E8u);
    aot_gpr_8 = (0u | 4u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885D0E8u) goto L_0885D0E8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885D0E8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885CFE8;
      }
      goto L_0885D0F0;
    }
L_0885D0F0:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5543u);
    aot_gpr_31 = (0x0885D108u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885D108u) goto L_0885D108;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885D108:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885CFE8;
      }
      goto L_0885D110;
    }
L_0885D110:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x0885D124u);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C9640, 49u, 289u, 0x088C9640u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[28], ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 289u, 0x088C9640u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885D124u) goto L_0885D124;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885D124:
    aot_gpr_31 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
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
L_0885D130:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr_7 = (aot_gpr_6 & 65535u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_6 = (aot_gpr_7 + static_cast<std::uint32_t>(-118));
    aot_gpr_5 = (2237u << 16u);
    aot_gpr_8 = (aot_gpr_6 < static_cast<std::uint32_t>(41) ? 1u : 0u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = aot_gpr_8 == 0u;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_0885D2B0;
      }
      goto L_0885D154;
    }
L_0885D154:
    aot_gpr_6 = (aot_gpr_6 << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_6);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-29072)));
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
L_0885D16C:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5571u);
    aot_gpr_31 = (0x0885D184u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885D184u) goto L_0885D184;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885D184:
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_0885D188;
L_0885D188:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0885D2C4;
      }
      goto L_0885D190;
    }
L_0885D190:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5573u);
    aot_gpr_31 = (0x0885D1A8u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885D1A8u) goto L_0885D1A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885D1A8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885D188;
      }
      goto L_0885D1B0;
    }
L_0885D1B0:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5565u);
    aot_gpr_31 = (0x0885D1C8u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885D1C8u) goto L_0885D1C8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885D1C8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885D188;
      }
      goto L_0885D1D0;
    }
L_0885D1D0:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5561u);
    aot_gpr_31 = (0x0885D1E8u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885D1E8u) goto L_0885D1E8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885D1E8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885D188;
      }
      goto L_0885D1F0;
    }
L_0885D1F0:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5559u);
    aot_gpr_31 = (0x0885D208u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885D208u) goto L_0885D208;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885D208:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885D188;
      }
      goto L_0885D210;
    }
L_0885D210:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5563u);
    aot_gpr_31 = (0x0885D228u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885D228u) goto L_0885D228;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885D228:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885D188;
      }
      goto L_0885D230;
    }
L_0885D230:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5576u);
    aot_gpr_31 = (0x0885D248u);
    aot_gpr_8 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885D248u) goto L_0885D248;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885D248:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885D188;
      }
      goto L_0885D250;
    }
L_0885D250:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5552u);
    aot_gpr_31 = (0x0885D268u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885D268u) goto L_0885D268;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885D268:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885D188;
      }
      goto L_0885D270;
    }
L_0885D270:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5555u);
    aot_gpr_31 = (0x0885D288u);
    aot_gpr_8 = (0u | 4u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885D288u) goto L_0885D288;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885D288:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885D188;
      }
      goto L_0885D290;
    }
L_0885D290:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5568u);
    aot_gpr_31 = (0x0885D2A8u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885D2A8u) goto L_0885D2A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885D2A8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885D188;
      }
      goto L_0885D2B0;
    }
L_0885D2B0:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x0885D2C4u);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C9640, 49u, 289u, 0x088C9640u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[28], ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 289u, 0x088C9640u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885D2C4u) goto L_0885D2C4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885D2C4:
    aot_gpr_31 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
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
L_0885D2D0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr_7 = (aot_gpr_6 & 65535u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_6 = (aot_gpr_7 + static_cast<std::uint32_t>(-118));
    aot_gpr_5 = (2237u << 16u);
    aot_gpr_8 = (aot_gpr_6 < static_cast<std::uint32_t>(41) ? 1u : 0u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = aot_gpr_8 == 0u;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_0885D450;
      }
      goto L_0885D2F4;
    }
L_0885D2F4:
    aot_gpr_6 = (aot_gpr_6 << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_6);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-28904)));
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
L_0885D30C:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5596u);
    aot_gpr_31 = (0x0885D324u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885D324u) goto L_0885D324;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885D324:
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_0885D328;
L_0885D328:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0885D464;
      }
      goto L_0885D330;
    }
L_0885D330:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5598u);
    aot_gpr_31 = (0x0885D348u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885D348u) goto L_0885D348;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885D348:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885D328;
      }
      goto L_0885D350;
    }
L_0885D350:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5590u);
    aot_gpr_31 = (0x0885D368u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885D368u) goto L_0885D368;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885D368:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885D328;
      }
      goto L_0885D370;
    }
L_0885D370:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5586u);
    aot_gpr_31 = (0x0885D388u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885D388u) goto L_0885D388;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885D388:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885D328;
      }
      goto L_0885D390;
    }
L_0885D390:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5584u);
    aot_gpr_31 = (0x0885D3A8u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885D3A8u) goto L_0885D3A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885D3A8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885D328;
      }
      goto L_0885D3B0;
    }
L_0885D3B0:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5588u);
    aot_gpr_31 = (0x0885D3C8u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885D3C8u) goto L_0885D3C8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885D3C8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885D328;
      }
      goto L_0885D3D0;
    }
L_0885D3D0:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5601u);
    aot_gpr_31 = (0x0885D3E8u);
    aot_gpr_8 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885D3E8u) goto L_0885D3E8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885D3E8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885D328;
      }
      goto L_0885D3F0;
    }
L_0885D3F0:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5577u);
    aot_gpr_31 = (0x0885D408u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885D408u) goto L_0885D408;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885D408:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885D328;
      }
      goto L_0885D410;
    }
L_0885D410:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5580u);
    aot_gpr_31 = (0x0885D428u);
    aot_gpr_8 = (0u | 4u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885D428u) goto L_0885D428;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885D428:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885D328;
      }
      goto L_0885D430;
    }
L_0885D430:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5593u);
    aot_gpr_31 = (0x0885D448u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885D448u) goto L_0885D448;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885D448:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885D328;
      }
      goto L_0885D450;
    }
L_0885D450:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x0885D464u);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C9640, 49u, 289u, 0x088C9640u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[28], ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 289u, 0x088C9640u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885D464u) goto L_0885D464;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885D464:
    aot_gpr_31 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
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
L_0885D470:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr_7 = (aot_gpr_6 & 65535u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_6 = (aot_gpr_7 + static_cast<std::uint32_t>(-118));
    aot_gpr_5 = (2237u << 16u);
    aot_gpr_8 = (aot_gpr_6 < static_cast<std::uint32_t>(41) ? 1u : 0u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = aot_gpr_8 == 0u;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_0885D5F0;
      }
      goto L_0885D494;
    }
L_0885D494:
    aot_gpr_6 = (aot_gpr_6 << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_6);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-28736)));
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
L_0885D4AC:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5621u);
    aot_gpr_31 = (0x0885D4C4u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885D4C4u) goto L_0885D4C4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885D4C4:
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_0885D4C8;
L_0885D4C8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0885D604;
      }
      goto L_0885D4D0;
    }
L_0885D4D0:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5623u);
    aot_gpr_31 = (0x0885D4E8u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885D4E8u) goto L_0885D4E8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885D4E8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885D4C8;
      }
      goto L_0885D4F0;
    }
L_0885D4F0:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5615u);
    aot_gpr_31 = (0x0885D508u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885D508u) goto L_0885D508;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885D508:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885D4C8;
      }
      goto L_0885D510;
    }
L_0885D510:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5611u);
    aot_gpr_31 = (0x0885D528u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885D528u) goto L_0885D528;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885D528:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885D4C8;
      }
      goto L_0885D530;
    }
L_0885D530:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5609u);
    aot_gpr_31 = (0x0885D548u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885D548u) goto L_0885D548;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885D548:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885D4C8;
      }
      goto L_0885D550;
    }
L_0885D550:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5613u);
    aot_gpr_31 = (0x0885D568u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885D568u) goto L_0885D568;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885D568:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885D4C8;
      }
      goto L_0885D570;
    }
L_0885D570:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5626u);
    aot_gpr_31 = (0x0885D588u);
    aot_gpr_8 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885D588u) goto L_0885D588;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885D588:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885D4C8;
      }
      goto L_0885D590;
    }
L_0885D590:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5602u);
    aot_gpr_31 = (0x0885D5A8u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885D5A8u) goto L_0885D5A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885D5A8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885D4C8;
      }
      goto L_0885D5B0;
    }
L_0885D5B0:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5605u);
    aot_gpr_31 = (0x0885D5C8u);
    aot_gpr_8 = (0u | 4u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885D5C8u) goto L_0885D5C8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885D5C8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885D4C8;
      }
      goto L_0885D5D0;
    }
L_0885D5D0:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5618u);
    aot_gpr_31 = (0x0885D5E8u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885D5E8u) goto L_0885D5E8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885D5E8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885D4C8;
      }
      goto L_0885D5F0;
    }
L_0885D5F0:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x0885D604u);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C9640, 49u, 289u, 0x088C9640u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[28], ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 289u, 0x088C9640u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885D604u) goto L_0885D604;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885D604:
    aot_gpr_31 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
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
L_0885D610:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr_7 = (aot_gpr_6 & 65535u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_6 = (aot_gpr_7 + static_cast<std::uint32_t>(-118));
    aot_gpr_5 = (2237u << 16u);
    aot_gpr_8 = (aot_gpr_6 < static_cast<std::uint32_t>(41) ? 1u : 0u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = aot_gpr_8 == 0u;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_0885D790;
      }
      goto L_0885D634;
    }
L_0885D634:
    aot_gpr_6 = (aot_gpr_6 << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_6);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-28568)));
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
L_0885D64C:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5646u);
    aot_gpr_31 = (0x0885D664u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885D664u) goto L_0885D664;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885D664:
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_0885D668;
L_0885D668:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0885D7A4;
      }
      goto L_0885D670;
    }
L_0885D670:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5648u);
    aot_gpr_31 = (0x0885D688u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885D688u) goto L_0885D688;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885D688:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885D668;
      }
      goto L_0885D690;
    }
L_0885D690:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5640u);
    aot_gpr_31 = (0x0885D6A8u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885D6A8u) goto L_0885D6A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885D6A8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885D668;
      }
      goto L_0885D6B0;
    }
L_0885D6B0:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5636u);
    aot_gpr_31 = (0x0885D6C8u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885D6C8u) goto L_0885D6C8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885D6C8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885D668;
      }
      goto L_0885D6D0;
    }
L_0885D6D0:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5634u);
    aot_gpr_31 = (0x0885D6E8u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885D6E8u) goto L_0885D6E8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885D6E8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885D668;
      }
      goto L_0885D6F0;
    }
L_0885D6F0:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5638u);
    aot_gpr_31 = (0x0885D708u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885D708u) goto L_0885D708;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885D708:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885D668;
      }
      goto L_0885D710;
    }
L_0885D710:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5651u);
    aot_gpr_31 = (0x0885D728u);
    aot_gpr_8 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885D728u) goto L_0885D728;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885D728:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885D668;
      }
      goto L_0885D730;
    }
L_0885D730:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5627u);
    aot_gpr_31 = (0x0885D748u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885D748u) goto L_0885D748;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885D748:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885D668;
      }
      goto L_0885D750;
    }
L_0885D750:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5630u);
    aot_gpr_31 = (0x0885D768u);
    aot_gpr_8 = (0u | 4u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885D768u) goto L_0885D768;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885D768:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885D668;
      }
      goto L_0885D770;
    }
L_0885D770:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5643u);
    aot_gpr_31 = (0x0885D788u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885D788u) goto L_0885D788;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885D788:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885D668;
      }
      goto L_0885D790;
    }
L_0885D790:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x0885D7A4u);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C9640, 49u, 289u, 0x088C9640u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[28], ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 289u, 0x088C9640u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885D7A4u) goto L_0885D7A4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885D7A4:
    aot_gpr_31 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
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
L_0885D7B0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr_7 = (aot_gpr_6 & 65535u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_6 = (aot_gpr_7 + static_cast<std::uint32_t>(-118));
    aot_gpr_5 = (2237u << 16u);
    aot_gpr_8 = (aot_gpr_6 < static_cast<std::uint32_t>(41) ? 1u : 0u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = aot_gpr_8 == 0u;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_0885D930;
      }
      goto L_0885D7D4;
    }
L_0885D7D4:
    aot_gpr_6 = (aot_gpr_6 << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_6);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-28400)));
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
L_0885D7EC:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5671u);
    aot_gpr_31 = (0x0885D804u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885D804u) goto L_0885D804;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885D804:
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_0885D808;
L_0885D808:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0885D944;
      }
      goto L_0885D810;
    }
L_0885D810:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5673u);
    aot_gpr_31 = (0x0885D828u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885D828u) goto L_0885D828;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885D828:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885D808;
      }
      goto L_0885D830;
    }
L_0885D830:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5665u);
    aot_gpr_31 = (0x0885D848u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885D848u) goto L_0885D848;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885D848:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885D808;
      }
      goto L_0885D850;
    }
L_0885D850:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5661u);
    aot_gpr_31 = (0x0885D868u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885D868u) goto L_0885D868;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885D868:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885D808;
      }
      goto L_0885D870;
    }
L_0885D870:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5659u);
    aot_gpr_31 = (0x0885D888u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885D888u) goto L_0885D888;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885D888:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885D808;
      }
      goto L_0885D890;
    }
L_0885D890:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5663u);
    aot_gpr_31 = (0x0885D8A8u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885D8A8u) goto L_0885D8A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885D8A8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885D808;
      }
      goto L_0885D8B0;
    }
L_0885D8B0:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5676u);
    aot_gpr_31 = (0x0885D8C8u);
    aot_gpr_8 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885D8C8u) goto L_0885D8C8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885D8C8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885D808;
      }
      goto L_0885D8D0;
    }
L_0885D8D0:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5652u);
    aot_gpr_31 = (0x0885D8E8u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885D8E8u) goto L_0885D8E8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885D8E8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885D808;
      }
      goto L_0885D8F0;
    }
L_0885D8F0:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5655u);
    aot_gpr_31 = (0x0885D908u);
    aot_gpr_8 = (0u | 4u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885D908u) goto L_0885D908;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885D908:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885D808;
      }
      goto L_0885D910;
    }
L_0885D910:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5668u);
    aot_gpr_31 = (0x0885D928u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885D928u) goto L_0885D928;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885D928:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885D808;
      }
      goto L_0885D930;
    }
L_0885D930:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x0885D944u);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C9640, 49u, 289u, 0x088C9640u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[28], ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 289u, 0x088C9640u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885D944u) goto L_0885D944;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885D944:
    aot_gpr_31 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
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
L_0885D950:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr_7 = (aot_gpr_6 & 65535u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_6 = (aot_gpr_7 + static_cast<std::uint32_t>(-118));
    aot_gpr_5 = (2237u << 16u);
    aot_gpr_8 = (aot_gpr_6 < static_cast<std::uint32_t>(41) ? 1u : 0u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = aot_gpr_8 == 0u;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_0885DAD0;
      }
      goto L_0885D974;
    }
L_0885D974:
    aot_gpr_6 = (aot_gpr_6 << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_6);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-28224)));
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
L_0885D98C:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5720u);
    aot_gpr_31 = (0x0885D9A4u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885D9A4u) goto L_0885D9A4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885D9A4:
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_0885D9A8;
L_0885D9A8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0885DAE4;
      }
      goto L_0885D9B0;
    }
L_0885D9B0:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5722u);
    aot_gpr_31 = (0x0885D9C8u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885D9C8u) goto L_0885D9C8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885D9C8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885D9A8;
      }
      goto L_0885D9D0;
    }
L_0885D9D0:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5714u);
    aot_gpr_31 = (0x0885D9E8u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885D9E8u) goto L_0885D9E8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885D9E8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885D9A8;
      }
      goto L_0885D9F0;
    }
L_0885D9F0:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5710u);
    aot_gpr_31 = (0x0885DA08u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885DA08u) goto L_0885DA08;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885DA08:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885D9A8;
      }
      goto L_0885DA10;
    }
L_0885DA10:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5708u);
    aot_gpr_31 = (0x0885DA28u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885DA28u) goto L_0885DA28;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885DA28:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885D9A8;
      }
      goto L_0885DA30;
    }
L_0885DA30:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5712u);
    aot_gpr_31 = (0x0885DA48u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885DA48u) goto L_0885DA48;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885DA48:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885D9A8;
      }
      goto L_0885DA50;
    }
L_0885DA50:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5725u);
    aot_gpr_31 = (0x0885DA68u);
    aot_gpr_8 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885DA68u) goto L_0885DA68;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885DA68:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885D9A8;
      }
      goto L_0885DA70;
    }
L_0885DA70:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5701u);
    aot_gpr_31 = (0x0885DA88u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885DA88u) goto L_0885DA88;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885DA88:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885D9A8;
      }
      goto L_0885DA90;
    }
L_0885DA90:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5704u);
    aot_gpr_31 = (0x0885DAA8u);
    aot_gpr_8 = (0u | 4u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885DAA8u) goto L_0885DAA8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885DAA8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885D9A8;
      }
      goto L_0885DAB0;
    }
L_0885DAB0:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5717u);
    aot_gpr_31 = (0x0885DAC8u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885DAC8u) goto L_0885DAC8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885DAC8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885D9A8;
      }
      goto L_0885DAD0;
    }
L_0885DAD0:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x0885DAE4u);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C9640, 49u, 289u, 0x088C9640u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[28], ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 289u, 0x088C9640u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885DAE4u) goto L_0885DAE4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885DAE4:
    aot_gpr_31 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
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
L_0885DAF0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr_7 = (aot_gpr_6 & 65535u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_6 = (aot_gpr_7 + static_cast<std::uint32_t>(-118));
    aot_gpr_5 = (2237u << 16u);
    aot_gpr_8 = (aot_gpr_6 < static_cast<std::uint32_t>(41) ? 1u : 0u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = aot_gpr_8 == 0u;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_0885DC70;
      }
      goto L_0885DB14;
    }
L_0885DB14:
    aot_gpr_6 = (aot_gpr_6 << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_6);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-28056)));
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
L_0885DB2C:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5745u);
    aot_gpr_31 = (0x0885DB44u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885DB44u) goto L_0885DB44;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885DB44:
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_0885DB48;
L_0885DB48:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0885DC84;
      }
      goto L_0885DB50;
    }
L_0885DB50:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5747u);
    aot_gpr_31 = (0x0885DB68u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885DB68u) goto L_0885DB68;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885DB68:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885DB48;
      }
      goto L_0885DB70;
    }
L_0885DB70:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5739u);
    aot_gpr_31 = (0x0885DB88u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885DB88u) goto L_0885DB88;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885DB88:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885DB48;
      }
      goto L_0885DB90;
    }
L_0885DB90:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5735u);
    aot_gpr_31 = (0x0885DBA8u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885DBA8u) goto L_0885DBA8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885DBA8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885DB48;
      }
      goto L_0885DBB0;
    }
L_0885DBB0:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5733u);
    aot_gpr_31 = (0x0885DBC8u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885DBC8u) goto L_0885DBC8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885DBC8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885DB48;
      }
      goto L_0885DBD0;
    }
L_0885DBD0:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5737u);
    aot_gpr_31 = (0x0885DBE8u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885DBE8u) goto L_0885DBE8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885DBE8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885DB48;
      }
      goto L_0885DBF0;
    }
L_0885DBF0:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5750u);
    aot_gpr_31 = (0x0885DC08u);
    aot_gpr_8 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885DC08u) goto L_0885DC08;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885DC08:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885DB48;
      }
      goto L_0885DC10;
    }
L_0885DC10:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5726u);
    aot_gpr_31 = (0x0885DC28u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885DC28u) goto L_0885DC28;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885DC28:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885DB48;
      }
      goto L_0885DC30;
    }
L_0885DC30:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5729u);
    aot_gpr_31 = (0x0885DC48u);
    aot_gpr_8 = (0u | 4u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885DC48u) goto L_0885DC48;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885DC48:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885DB48;
      }
      goto L_0885DC50;
    }
L_0885DC50:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5742u);
    aot_gpr_31 = (0x0885DC68u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885DC68u) goto L_0885DC68;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885DC68:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885DB48;
      }
      goto L_0885DC70;
    }
L_0885DC70:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x0885DC84u);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C9640, 49u, 289u, 0x088C9640u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[28], ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 289u, 0x088C9640u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885DC84u) goto L_0885DC84;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885DC84:
    aot_gpr_31 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
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
L_0885DC90:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr_7 = (aot_gpr_6 & 65535u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_6 = (aot_gpr_7 + static_cast<std::uint32_t>(-118));
    aot_gpr_5 = (2237u << 16u);
    aot_gpr_8 = (aot_gpr_6 < static_cast<std::uint32_t>(41) ? 1u : 0u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = aot_gpr_8 == 0u;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_0885DE10;
      }
      goto L_0885DCB4;
    }
L_0885DCB4:
    aot_gpr_6 = (aot_gpr_6 << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_6);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-27888)));
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
L_0885DCCC:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5770u);
    aot_gpr_31 = (0x0885DCE4u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885DCE4u) goto L_0885DCE4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885DCE4:
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_0885DCE8;
L_0885DCE8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0885DE24;
      }
      goto L_0885DCF0;
    }
L_0885DCF0:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5772u);
    aot_gpr_31 = (0x0885DD08u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885DD08u) goto L_0885DD08;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885DD08:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885DCE8;
      }
      goto L_0885DD10;
    }
L_0885DD10:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5764u);
    aot_gpr_31 = (0x0885DD28u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885DD28u) goto L_0885DD28;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885DD28:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885DCE8;
      }
      goto L_0885DD30;
    }
L_0885DD30:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5760u);
    aot_gpr_31 = (0x0885DD48u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885DD48u) goto L_0885DD48;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885DD48:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885DCE8;
      }
      goto L_0885DD50;
    }
L_0885DD50:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5758u);
    aot_gpr_31 = (0x0885DD68u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885DD68u) goto L_0885DD68;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885DD68:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885DCE8;
      }
      goto L_0885DD70;
    }
L_0885DD70:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5762u);
    aot_gpr_31 = (0x0885DD88u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885DD88u) goto L_0885DD88;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885DD88:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885DCE8;
      }
      goto L_0885DD90;
    }
L_0885DD90:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5775u);
    aot_gpr_31 = (0x0885DDA8u);
    aot_gpr_8 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885DDA8u) goto L_0885DDA8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885DDA8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885DCE8;
      }
      goto L_0885DDB0;
    }
L_0885DDB0:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5751u);
    aot_gpr_31 = (0x0885DDC8u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885DDC8u) goto L_0885DDC8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885DDC8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885DCE8;
      }
      goto L_0885DDD0;
    }
L_0885DDD0:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5754u);
    aot_gpr_31 = (0x0885DDE8u);
    aot_gpr_8 = (0u | 4u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885DDE8u) goto L_0885DDE8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885DDE8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885DCE8;
      }
      goto L_0885DDF0;
    }
L_0885DDF0:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5767u);
    aot_gpr_31 = (0x0885DE08u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885DE08u) goto L_0885DE08;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885DE08:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885DCE8;
      }
      goto L_0885DE10;
    }
L_0885DE10:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x0885DE24u);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C9640, 49u, 289u, 0x088C9640u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[28], ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 289u, 0x088C9640u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885DE24u) goto L_0885DE24;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885DE24:
    aot_gpr_31 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
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
L_0885DE30:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr_7 = (aot_gpr_6 & 65535u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_6 = (aot_gpr_7 + static_cast<std::uint32_t>(-118));
    aot_gpr_5 = (2237u << 16u);
    aot_gpr_8 = (aot_gpr_6 < static_cast<std::uint32_t>(41) ? 1u : 0u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = aot_gpr_8 == 0u;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_0885DFB0;
      }
      goto L_0885DE54;
    }
L_0885DE54:
    aot_gpr_6 = (aot_gpr_6 << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_6);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-27720)));
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
L_0885DE6C:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5795u);
    aot_gpr_31 = (0x0885DE84u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885DE84u) goto L_0885DE84;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885DE84:
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_0885DE88;
L_0885DE88:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0885DFC4;
      }
      goto L_0885DE90;
    }
L_0885DE90:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5797u);
    aot_gpr_31 = (0x0885DEA8u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885DEA8u) goto L_0885DEA8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885DEA8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885DE88;
      }
      goto L_0885DEB0;
    }
L_0885DEB0:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5789u);
    aot_gpr_31 = (0x0885DEC8u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885DEC8u) goto L_0885DEC8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885DEC8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885DE88;
      }
      goto L_0885DED0;
    }
L_0885DED0:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5785u);
    aot_gpr_31 = (0x0885DEE8u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885DEE8u) goto L_0885DEE8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885DEE8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885DE88;
      }
      goto L_0885DEF0;
    }
L_0885DEF0:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5783u);
    aot_gpr_31 = (0x0885DF08u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885DF08u) goto L_0885DF08;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885DF08:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885DE88;
      }
      goto L_0885DF10;
    }
L_0885DF10:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5787u);
    aot_gpr_31 = (0x0885DF28u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885DF28u) goto L_0885DF28;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885DF28:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885DE88;
      }
      goto L_0885DF30;
    }
L_0885DF30:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5800u);
    aot_gpr_31 = (0x0885DF48u);
    aot_gpr_8 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885DF48u) goto L_0885DF48;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885DF48:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885DE88;
      }
      goto L_0885DF50;
    }
L_0885DF50:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5776u);
    aot_gpr_31 = (0x0885DF68u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885DF68u) goto L_0885DF68;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885DF68:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885DE88;
      }
      goto L_0885DF70;
    }
L_0885DF70:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5779u);
    aot_gpr_31 = (0x0885DF88u);
    aot_gpr_8 = (0u | 4u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885DF88u) goto L_0885DF88;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885DF88:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885DE88;
      }
      goto L_0885DF90;
    }
L_0885DF90:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5792u);
    aot_gpr_31 = (0x0885DFA8u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885DFA8u) goto L_0885DFA8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885DFA8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885DE88;
      }
      goto L_0885DFB0;
    }
L_0885DFB0:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x0885DFC4u);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C9640, 49u, 289u, 0x088C9640u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[28], ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 289u, 0x088C9640u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885DFC4u) goto L_0885DFC4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885DFC4:
    aot_gpr_31 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
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
L_0885DFD0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr_7 = (aot_gpr_6 & 65535u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_6 = (aot_gpr_7 + static_cast<std::uint32_t>(-118));
    aot_gpr_5 = (2237u << 16u);
    aot_gpr_8 = (aot_gpr_6 < static_cast<std::uint32_t>(41) ? 1u : 0u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = aot_gpr_8 == 0u;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_0885E150;
      }
      goto L_0885DFF4;
    }
L_0885DFF4:
    aot_gpr_6 = (aot_gpr_6 << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_6);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-27552)));
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
L_0885E00C:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5820u);
    aot_gpr_31 = (0x0885E024u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885E024u) goto L_0885E024;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885E024:
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_0885E028;
L_0885E028:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0885E164;
      }
      goto L_0885E030;
    }
L_0885E030:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5822u);
    aot_gpr_31 = (0x0885E048u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885E048u) goto L_0885E048;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885E048:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885E028;
      }
      goto L_0885E050;
    }
L_0885E050:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5814u);
    aot_gpr_31 = (0x0885E068u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885E068u) goto L_0885E068;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885E068:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885E028;
      }
      goto L_0885E070;
    }
L_0885E070:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5810u);
    aot_gpr_31 = (0x0885E088u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885E088u) goto L_0885E088;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885E088:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885E028;
      }
      goto L_0885E090;
    }
L_0885E090:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5808u);
    aot_gpr_31 = (0x0885E0A8u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885E0A8u) goto L_0885E0A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885E0A8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885E028;
      }
      goto L_0885E0B0;
    }
L_0885E0B0:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5812u);
    aot_gpr_31 = (0x0885E0C8u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885E0C8u) goto L_0885E0C8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885E0C8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885E028;
      }
      goto L_0885E0D0;
    }
L_0885E0D0:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5825u);
    aot_gpr_31 = (0x0885E0E8u);
    aot_gpr_8 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885E0E8u) goto L_0885E0E8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885E0E8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885E028;
      }
      goto L_0885E0F0;
    }
L_0885E0F0:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5801u);
    aot_gpr_31 = (0x0885E108u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885E108u) goto L_0885E108;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885E108:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885E028;
      }
      goto L_0885E110;
    }
L_0885E110:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5804u);
    aot_gpr_31 = (0x0885E128u);
    aot_gpr_8 = (0u | 4u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885E128u) goto L_0885E128;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885E128:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885E028;
      }
      goto L_0885E130;
    }
L_0885E130:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5817u);
    aot_gpr_31 = (0x0885E148u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885E148u) goto L_0885E148;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885E148:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885E028;
      }
      goto L_0885E150;
    }
L_0885E150:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x0885E164u);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C9640, 49u, 289u, 0x088C9640u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[28], ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 289u, 0x088C9640u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885E164u) goto L_0885E164;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885E164:
    aot_gpr_31 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
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
L_0885E170:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr_7 = (aot_gpr_6 & 65535u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_6 = (aot_gpr_7 + static_cast<std::uint32_t>(-118));
    aot_gpr_5 = (2237u << 16u);
    aot_gpr_8 = (aot_gpr_6 < static_cast<std::uint32_t>(41) ? 1u : 0u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = aot_gpr_8 == 0u;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_0885E2F0;
      }
      goto L_0885E194;
    }
L_0885E194:
    aot_gpr_6 = (aot_gpr_6 << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_6);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-27384)));
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
L_0885E1AC:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5846u);
    aot_gpr_31 = (0x0885E1C4u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885E1C4u) goto L_0885E1C4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885E1C4:
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_0885E1C8;
L_0885E1C8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0885E304;
      }
      goto L_0885E1D0;
    }
L_0885E1D0:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5848u);
    aot_gpr_31 = (0x0885E1E8u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885E1E8u) goto L_0885E1E8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885E1E8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885E1C8;
      }
      goto L_0885E1F0;
    }
L_0885E1F0:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5840u);
    aot_gpr_31 = (0x0885E208u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885E208u) goto L_0885E208;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885E208:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885E1C8;
      }
      goto L_0885E210;
    }
L_0885E210:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5836u);
    aot_gpr_31 = (0x0885E228u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885E228u) goto L_0885E228;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885E228:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885E1C8;
      }
      goto L_0885E230;
    }
L_0885E230:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5833u);
    aot_gpr_31 = (0x0885E248u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885E248u) goto L_0885E248;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885E248:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885E1C8;
      }
      goto L_0885E250;
    }
L_0885E250:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5838u);
    aot_gpr_31 = (0x0885E268u);
    aot_gpr_8 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885E268u) goto L_0885E268;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885E268:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885E1C8;
      }
      goto L_0885E270;
    }
L_0885E270:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5851u);
    aot_gpr_31 = (0x0885E288u);
    aot_gpr_8 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885E288u) goto L_0885E288;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885E288:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885E1C8;
      }
      goto L_0885E290;
    }
L_0885E290:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5826u);
    aot_gpr_31 = (0x0885E2A8u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885E2A8u) goto L_0885E2A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885E2A8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885E1C8;
      }
      goto L_0885E2B0;
    }
L_0885E2B0:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5829u);
    aot_gpr_31 = (0x0885E2C8u);
    aot_gpr_8 = (0u | 4u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885E2C8u) goto L_0885E2C8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885E2C8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885E1C8;
      }
      goto L_0885E2D0;
    }
L_0885E2D0:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5843u);
    aot_gpr_31 = (0x0885E2E8u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885E2E8u) goto L_0885E2E8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885E2E8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885E1C8;
      }
      goto L_0885E2F0;
    }
L_0885E2F0:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x0885E304u);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C9640, 49u, 289u, 0x088C9640u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[28], ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 289u, 0x088C9640u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885E304u) goto L_0885E304;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885E304:
    aot_gpr_31 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
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
L_0885E310:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (2237u << 16u);
    aot_gpr_6 = (aot_gpr_6 & 65535u);
    aot_gpr_7 = (0u | 159u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = aot_gpr_6 == aot_gpr_7;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_0885E3B0;
      }
      goto L_0885E330;
    }
L_0885E330:
    aot_gpr_7 = (0u | 143u);
    { const bool branch_taken = aot_gpr_6 == aot_gpr_7;
    aot_gpr_7 = (0u | 137u);
      if (branch_taken) {
          goto L_0885E390;
      }
      goto L_0885E33C;
    }
L_0885E33C:
    { const bool branch_taken = aot_gpr_6 == aot_gpr_7;
    aot_gpr_7 = (0u | 119u);
      if (branch_taken) {
          goto L_0885E370;
      }
      goto L_0885E344;
    }
L_0885E344:
    { const bool branch_taken = aot_gpr_6 != aot_gpr_7;
      if (branch_taken) {
          goto L_0885E3D0;
      }
      goto L_0885E34C;
    }
L_0885E34C:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5858u);
    aot_gpr_31 = (0x0885E364u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885E364u) goto L_0885E364;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885E364:
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_0885E368;
L_0885E368:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0885E3E0;
      }
      goto L_0885E370;
    }
L_0885E370:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5855u);
    aot_gpr_31 = (0x0885E388u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885E388u) goto L_0885E388;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885E388:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885E368;
      }
      goto L_0885E390;
    }
L_0885E390:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5852u);
    aot_gpr_31 = (0x0885E3A8u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885E3A8u) goto L_0885E3A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885E3A8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885E368;
      }
      goto L_0885E3B0;
    }
L_0885E3B0:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5861u);
    aot_gpr_31 = (0x0885E3C8u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885E3C8u) goto L_0885E3C8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885E3C8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885E368;
      }
      goto L_0885E3D0;
    }
L_0885E3D0:
    aot_gpr_7 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_31 = (0x0885E3E0u);
    aot_gpr_5 = (aot_gpr_7 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C971C, 49u, 302u, 0x088C971Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[28], ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 302u, 0x088C971Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885E3E0u) goto L_0885E3E0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885E3E0:
    aot_gpr_31 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
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
L_0885E3EC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (2237u << 16u);
    aot_gpr_6 = (aot_gpr_6 & 65535u);
    aot_gpr_7 = (0u | 159u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = aot_gpr_6 == aot_gpr_7;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_0885E48C;
      }
      goto L_0885E40C;
    }
L_0885E40C:
    aot_gpr_7 = (0u | 143u);
    { const bool branch_taken = aot_gpr_6 == aot_gpr_7;
    aot_gpr_7 = (0u | 137u);
      if (branch_taken) {
          goto L_0885E46C;
      }
      goto L_0885E418;
    }
L_0885E418:
    { const bool branch_taken = aot_gpr_6 == aot_gpr_7;
    aot_gpr_7 = (0u | 119u);
      if (branch_taken) {
          goto L_0885E44C;
      }
      goto L_0885E420;
    }
L_0885E420:
    { const bool branch_taken = aot_gpr_6 != aot_gpr_7;
      if (branch_taken) {
          goto L_0885E4AC;
      }
      goto L_0885E428;
    }
L_0885E428:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5870u);
    aot_gpr_31 = (0x0885E440u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885E440u) goto L_0885E440;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885E440:
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_0885E444;
L_0885E444:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0885E4BC;
      }
      goto L_0885E44C;
    }
L_0885E44C:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5867u);
    aot_gpr_31 = (0x0885E464u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885E464u) goto L_0885E464;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885E464:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885E444;
      }
      goto L_0885E46C;
    }
L_0885E46C:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5864u);
    aot_gpr_31 = (0x0885E484u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885E484u) goto L_0885E484;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885E484:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885E444;
      }
      goto L_0885E48C;
    }
L_0885E48C:
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1724));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_7 = (0u | 5873u);
    aot_gpr_31 = (0x0885E4A4u);
    aot_gpr_8 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C95D8, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[9], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885E4A4u) goto L_0885E4A4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885E4A4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885E444;
      }
      goto L_0885E4AC;
    }
L_0885E4AC:
    aot_gpr_7 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_31 = (0x0885E4BCu);
    aot_gpr_5 = (aot_gpr_7 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088C9640, 49u, 289u, 0x088C9640u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[28], ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0049_entry, 49u, 289u, 0x088C9640u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885E4BCu) goto L_0885E4BC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885E4BC:
    aot_gpr_31 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
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
L_0885E4C8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr_7 = (aot_gpr_6 | 0u);
    aot_gpr_8 = (aot_gpr_5 | 0u);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_8 + static_cast<std::uint32_t>(86))))));
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_7 = (aot_gpr_7 & 65535u);
    ctx.gpr[9] = (static_cast<std::int32_t>(aot_gpr_6) < 154 ? 1u : 0u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), aot_gpr_31);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    aot_gpr_4 = (aot_gpr_8 | 0u);
      if (branch_taken) {
          goto L_0885E520;
      }
      goto L_0885E4F0;
    }
L_0885E4F0:
    aot_gpr_8 = (static_cast<std::int32_t>(aot_gpr_6) < 13 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_8 != 0u;
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-13));
      if (branch_taken) {
          goto L_0885E514;
      }
      goto L_0885E4FC;
    }
L_0885E4FC:
    aot_gpr_6 = (aot_gpr_6 << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_6);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-27216)));
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
L_0885E514:
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16352)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(6028));
      if (branch_taken) {
          goto L_0885F328;
      }
      goto L_0885E520;
    }
L_0885E520:
    aot_gpr_8 = (static_cast<std::int32_t>(aot_gpr_6) < 10000 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_8 != 0u;
    aot_gpr_8 = (static_cast<std::int32_t>(aot_gpr_6) < 10017 ? 1u : 0u);
      if (branch_taken) {
          goto L_0885E514;
      }
      goto L_0885E52C;
    }
L_0885E52C:
    { const bool branch_taken = aot_gpr_8 == 0u;
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-10000));
      if (branch_taken) {
          goto L_0885E514;
      }
      goto L_0885E534;
    }
L_0885E534:
    aot_gpr_6 = (aot_gpr_6 << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_6);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-26648)));
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
L_0885E54C:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x0885E560u);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0019_entry, 19u, 38u, 0x08850180u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885E560u) goto L_0885E560;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885E560:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0885F328;
      }
      goto L_0885E568;
    }
L_0885E568:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x0885E57Cu);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0019_entry, 19u, 53u, 0x0885025Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885E57Cu) goto L_0885E57C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885E57C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0885F328;
      }
      goto L_0885E584;
    }
L_0885E584:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x0885E598u);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0019_entry, 19u, 65u, 0x08850310u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885E598u) goto L_0885E598;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885E598:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0885F328;
      }
      goto L_0885E5A0;
    }
L_0885E5A0:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x0885E5B4u);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0019_entry, 19u, 90u, 0x088504B0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885E5B4u) goto L_0885E5B4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885E5B4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0885F328;
      }
      goto L_0885E5BC;
    }
L_0885E5BC:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x0885E5D0u);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0019_entry, 19u, 115u, 0x08850650u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885E5D0u) goto L_0885E5D0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885E5D0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0885F328;
      }
      goto L_0885E5D8;
    }
L_0885E5D8:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x0885E5ECu);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0019_entry, 19u, 130u, 0x0885072Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885E5ECu) goto L_0885E5EC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885E5EC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0885F328;
      }
      goto L_0885E5F4;
    }
L_0885E5F4:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x0885E608u);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0019_entry, 19u, 155u, 0x088508CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885E608u) goto L_0885E608;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885E608:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0885F328;
      }
      goto L_0885E610;
    }
L_0885E610:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x0885E624u);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0019_entry, 19u, 180u, 0x08850A6Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885E624u) goto L_0885E624;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885E624:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0885F328;
      }
      goto L_0885E62C;
    }
L_0885E62C:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x0885E640u);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0019_entry, 19u, 205u, 0x08850C0Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885E640u) goto L_0885E640;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885E640:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0885F328;
      }
      goto L_0885E648;
    }
L_0885E648:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x0885E65Cu);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0019_entry, 19u, 230u, 0x08850DACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885E65Cu) goto L_0885E65C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885E65C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0885F328;
      }
      goto L_0885E664;
    }
L_0885E664:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x0885E678u);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0019_entry, 19u, 255u, 0x08850F4Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885E678u) goto L_0885E678;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885E678:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0885F328;
      }
      goto L_0885E680;
    }
L_0885E680:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x0885E694u);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0019_entry, 19u, 280u, 0x088510ECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885E694u) goto L_0885E694;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885E694:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0885F328;
      }
      goto L_0885E69C;
    }
L_0885E69C:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x0885E6B0u);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0019_entry, 19u, 305u, 0x0885128Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885E6B0u) goto L_0885E6B0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885E6B0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0885F328;
      }
      goto L_0885E6B8;
    }
L_0885E6B8:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x0885E6CCu);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0019_entry, 19u, 330u, 0x0885142Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885E6CCu) goto L_0885E6CC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885E6CC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0885F328;
      }
      goto L_0885E6D4;
    }
L_0885E6D4:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x0885E6E8u);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0019_entry, 19u, 355u, 0x088515CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885E6E8u) goto L_0885E6E8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885E6E8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0885F328;
      }
      goto L_0885E6F0;
    }
L_0885E6F0:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x0885E704u);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0019_entry, 19u, 374u, 0x0885170Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885E704u) goto L_0885E704;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885E704:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0885F328;
      }
      goto L_0885E70C;
    }
L_0885E70C:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x0885E720u);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0019_entry, 19u, 399u, 0x088518ACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885E720u) goto L_0885E720;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885E720:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0885F328;
      }
      goto L_0885E728;
    }
L_0885E728:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x0885E73Cu);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0019_entry, 19u, 424u, 0x08851A4Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885E73Cu) goto L_0885E73C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885E73C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0885F328;
      }
      goto L_0885E744;
    }
L_0885E744:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x0885E758u);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0019_entry, 19u, 449u, 0x08851BECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885E758u) goto L_0885E758;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885E758:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0885F328;
      }
      goto L_0885E760;
    }
L_0885E760:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x0885E774u);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0019_entry, 19u, 474u, 0x08851D8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885E774u) goto L_0885E774;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885E774:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0885F328;
      }
      goto L_0885E77C;
    }
L_0885E77C:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x0885E790u);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0019_entry, 19u, 499u, 0x08851F2Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885E790u) goto L_0885E790;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885E790:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0885F328;
      }
      goto L_0885E798;
    }
L_0885E798:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x0885E7ACu);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0019_entry, 19u, 524u, 0x088520CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885E7ACu) goto L_0885E7AC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885E7AC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0885F328;
      }
      goto L_0885E7B4;
    }
L_0885E7B4:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x0885E7C8u);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0019_entry, 19u, 549u, 0x0885226Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885E7C8u) goto L_0885E7C8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885E7C8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0885F328;
      }
      goto L_0885E7D0;
    }
L_0885E7D0:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x0885E7E4u);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0019_entry, 19u, 574u, 0x0885240Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885E7E4u) goto L_0885E7E4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885E7E4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0885F328;
      }
      goto L_0885E7EC;
    }
L_0885E7EC:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x0885E800u);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0019_entry, 19u, 599u, 0x088525ACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885E800u) goto L_0885E800;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885E800:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0885F328;
      }
      goto L_0885E808;
    }
L_0885E808:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x0885E81Cu);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0019_entry, 19u, 624u, 0x0885274Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885E81Cu) goto L_0885E81C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885E81C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0885F328;
      }
      goto L_0885E824;
    }
L_0885E824:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x0885E838u);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0019_entry, 19u, 664u, 0x088529C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885E838u) goto L_0885E838;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885E838:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0885F328;
      }
      goto L_0885E840;
    }
L_0885E840:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x0885E854u);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0019_entry, 19u, 689u, 0x08852B68u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885E854u) goto L_0885E854;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885E854:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0885F328;
      }
      goto L_0885E85C;
    }
L_0885E85C:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x0885E870u);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0019_entry, 19u, 824u, 0x08853424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885E870u) goto L_0885E870;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885E870:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0885F328;
      }
      goto L_0885E878;
    }
L_0885E878:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x0885E88Cu);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0019_entry, 19u, 849u, 0x088535C4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885E88Cu) goto L_0885E88C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885E88C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0885F328;
      }
      goto L_0885E894;
    }
L_0885E894:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x0885E8A8u);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0019_entry, 19u, 904u, 0x0885391Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885E8A8u) goto L_0885E8A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885E8A8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0885F328;
      }
      goto L_0885E8B0;
    }
L_0885E8B0:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x0885E8C4u);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0019_entry, 19u, 919u, 0x088539F8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885E8C4u) goto L_0885E8C4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885E8C4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0885F328;
      }
      goto L_0885E8CC;
    }
L_0885E8CC:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x0885E8E0u);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0019_entry, 19u, 944u, 0x08853B98u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885E8E0u) goto L_0885E8E0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885E8E0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0885F328;
      }
      goto L_0885E8E8;
    }
L_0885E8E8:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x0885E8FCu);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0020_entry, 20u, 7u, 0x08854044u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885E8FCu) goto L_0885E8FC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885E8FC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0885F328;
      }
      goto L_0885E904;
    }
L_0885E904:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x0885E918u);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0020_entry, 20u, 30u, 0x088541C4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885E918u) goto L_0885E918;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885E918:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0885F328;
      }
      goto L_0885E920;
    }
L_0885E920:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x0885E934u);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0020_entry, 20u, 45u, 0x088542A0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885E934u) goto L_0885E934;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885E934:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0885F328;
      }
      goto L_0885E93C;
    }
L_0885E93C:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x0885E950u);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0020_entry, 20u, 70u, 0x08854440u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885E950u) goto L_0885E950;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885E950:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0885F328;
      }
      goto L_0885E958;
    }
L_0885E958:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x0885E96Cu);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0020_entry, 20u, 139u, 0x0885487Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885E96Cu) goto L_0885E96C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885E96C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0885F328;
      }
      goto L_0885E974;
    }
L_0885E974:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x0885E988u);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0020_entry, 20u, 164u, 0x08854A1Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885E988u) goto L_0885E988;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885E988:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0885F328;
      }
      goto L_0885E990;
    }
L_0885E990:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x0885E9A4u);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0020_entry, 20u, 187u, 0x08854B9Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885E9A4u) goto L_0885E9A4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885E9A4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0885F328;
      }
      goto L_0885E9AC;
    }
L_0885E9AC:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x0885E9C0u);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0020_entry, 20u, 212u, 0x08854D3Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885E9C0u) goto L_0885E9C0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885E9C0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0885F328;
      }
      goto L_0885E9C8;
    }
L_0885E9C8:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x0885E9DCu);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0020_entry, 20u, 237u, 0x08854EDCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885E9DCu) goto L_0885E9DC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885E9DC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0885F328;
      }
      goto L_0885E9E4;
    }
L_0885E9E4:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x0885E9F8u);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0020_entry, 20u, 262u, 0x0885507Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885E9F8u) goto L_0885E9F8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885E9F8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0885F328;
      }
      goto L_0885EA00;
    }
L_0885EA00:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x0885EA14u);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0020_entry, 20u, 287u, 0x0885521Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885EA14u) goto L_0885EA14;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885EA14:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0885F328;
      }
      goto L_0885EA1C;
    }
L_0885EA1C:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x0885EA30u);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0020_entry, 20u, 312u, 0x088553BCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885EA30u) goto L_0885EA30;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885EA30:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0885F328;
      }
      goto L_0885EA38;
    }
L_0885EA38:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x0885EA4Cu);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0020_entry, 20u, 337u, 0x0885555Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885EA4Cu) goto L_0885EA4C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885EA4C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0885F328;
      }
      goto L_0885EA54;
    }
L_0885EA54:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x0885EA68u);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0020_entry, 20u, 362u, 0x088556FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885EA68u) goto L_0885EA68;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885EA68:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0885F328;
      }
      goto L_0885EA70;
    }
L_0885EA70:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x0885EA84u);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0020_entry, 20u, 387u, 0x0885589Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885EA84u) goto L_0885EA84;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885EA84:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0885F328;
      }
      goto L_0885EA8C;
    }
L_0885EA8C:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x0885EAA0u);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0020_entry, 20u, 412u, 0x08855A3Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885EAA0u) goto L_0885EAA0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885EAA0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0885F328;
      }
      goto L_0885EAA8;
    }
L_0885EAA8:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x0885EABCu);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0020_entry, 20u, 437u, 0x08855BDCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885EABCu) goto L_0885EABC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885EABC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0885F328;
      }
      goto L_0885EAC4;
    }
L_0885EAC4:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x0885EAD8u);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0020_entry, 20u, 505u, 0x08855FF0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885EAD8u) goto L_0885EAD8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885EAD8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0885F328;
      }
      goto L_0885EAE0;
    }
L_0885EAE0:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x0885EAF4u);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0020_entry, 20u, 530u, 0x08856190u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885EAF4u) goto L_0885EAF4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885EAF4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0885F328;
      }
      goto L_0885EAFC;
    }
L_0885EAFC:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x0885EB10u);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0020_entry, 20u, 555u, 0x08856330u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885EB10u) goto L_0885EB10;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885EB10:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0885F328;
      }
      goto L_0885EB18;
    }
L_0885EB18:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x0885EB2Cu);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0020_entry, 20u, 580u, 0x088564D0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885EB2Cu) goto L_0885EB2C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885EB2C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0885F328;
      }
      goto L_0885EB34;
    }
L_0885EB34:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x0885EB48u);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0020_entry, 20u, 603u, 0x08856650u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885EB48u) goto L_0885EB48;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885EB48:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0885F328;
      }
      goto L_0885EB50;
    }
L_0885EB50:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x0885EB64u);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0020_entry, 20u, 628u, 0x088567F0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885EB64u) goto L_0885EB64;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885EB64:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0885F328;
      }
      goto L_0885EB6C;
    }
L_0885EB6C:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x0885EB80u);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0020_entry, 20u, 653u, 0x08856990u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885EB80u) goto L_0885EB80;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885EB80:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0885F328;
      }
      goto L_0885EB88;
    }
L_0885EB88:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x0885EB9Cu);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0020_entry, 20u, 678u, 0x08856B30u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885EB9Cu) goto L_0885EB9C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885EB9C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0885F328;
      }
      goto L_0885EBA4;
    }
L_0885EBA4:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x0885EBB8u);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0020_entry, 20u, 703u, 0x08856CD0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885EBB8u) goto L_0885EBB8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885EBB8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0885F328;
      }
      goto L_0885EBC0;
    }
L_0885EBC0:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x0885EBD4u);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0020_entry, 20u, 743u, 0x08856F4Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885EBD4u) goto L_0885EBD4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885EBD4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0885F328;
      }
      goto L_0885EBDC;
    }
L_0885EBDC:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x0885EBF0u);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0020_entry, 20u, 788u, 0x088571E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885EBF0u) goto L_0885EBF0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885EBF0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0885F328;
      }
      goto L_0885EBF8;
    }
L_0885EBF8:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x0885EC0Cu);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0020_entry, 20u, 813u, 0x08857380u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885EC0Cu) goto L_0885EC0C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885EC0C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0885F328;
      }
      goto L_0885EC14;
    }
L_0885EC14:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x0885EC28u);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0020_entry, 20u, 838u, 0x08857520u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885EC28u) goto L_0885EC28;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885EC28:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0885F328;
      }
      goto L_0885EC30;
    }
L_0885EC30:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x0885EC44u);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0020_entry, 20u, 853u, 0x088575FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885EC44u) goto L_0885EC44;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885EC44:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0885F328;
      }
      goto L_0885EC4C;
    }
L_0885EC4C:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x0885EC60u);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0020_entry, 20u, 878u, 0x0885779Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885EC60u) goto L_0885EC60;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885EC60:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0885F328;
      }
      goto L_0885EC68;
    }
L_0885EC68:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x0885EC7Cu);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0020_entry, 20u, 903u, 0x0885793Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885EC7Cu) goto L_0885EC7C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885EC7C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0885F328;
      }
      goto L_0885EC84;
    }
L_0885EC84:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x0885EC98u);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0020_entry, 20u, 918u, 0x08857A18u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885EC98u) goto L_0885EC98;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885EC98:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0885F328;
      }
      goto L_0885ECA0;
    }
L_0885ECA0:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x0885ECB4u);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0020_entry, 20u, 943u, 0x08857BB8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885ECB4u) goto L_0885ECB4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885ECB4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0885F328;
      }
      goto L_0885ECBC;
    }
L_0885ECBC:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x0885ECD0u);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0020_entry, 20u, 966u, 0x08857D38u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885ECD0u) goto L_0885ECD0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885ECD0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0885F328;
      }
      goto L_0885ECD8;
    }
L_0885ECD8:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x0885ECECu);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0020_entry, 20u, 981u, 0x08857E14u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885ECECu) goto L_0885ECEC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885ECEC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0885F328;
      }
      goto L_0885ECF4;
    }
L_0885ECF4:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x0885ED08u);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0020_entry, 20u, 1006u, 0x08857FB4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885ED08u) goto L_0885ED08;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885ED08:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0885F328;
      }
      goto L_0885ED10;
    }
L_0885ED10:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x0885ED24u);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0021_entry, 21u, 62u, 0x0885838Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885ED24u) goto L_0885ED24;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885ED24:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0885F328;
      }
      goto L_0885ED2C;
    }
L_0885ED2C:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x0885ED40u);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0021_entry, 21u, 77u, 0x08858468u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885ED40u) goto L_0885ED40;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885ED40:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0885F328;
      }
      goto L_0885ED48;
    }
L_0885ED48:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x0885ED5Cu);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0021_entry, 21u, 92u, 0x08858544u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885ED5Cu) goto L_0885ED5C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885ED5C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0885F328;
      }
      goto L_0885ED64;
    }
L_0885ED64:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x0885ED78u);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0021_entry, 21u, 107u, 0x08858620u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885ED78u) goto L_0885ED78;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885ED78:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0885F328;
      }
      goto L_0885ED80;
    }
L_0885ED80:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x0885ED94u);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0021_entry, 21u, 137u, 0x088587D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885ED94u) goto L_0885ED94;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885ED94:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0885F328;
      }
      goto L_0885ED9C;
    }
L_0885ED9C:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x0885EDB0u);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0021_entry, 21u, 162u, 0x08858978u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885EDB0u) goto L_0885EDB0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885EDB0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0885F328;
      }
      goto L_0885EDB8;
    }
L_0885EDB8:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x0885EDCCu);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0021_entry, 21u, 187u, 0x08858B18u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885EDCCu) goto L_0885EDCC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885EDCC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0885F328;
      }
      goto L_0885EDD4;
    }
L_0885EDD4:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x0885EDE8u);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0021_entry, 21u, 192u, 0x08858B74u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885EDE8u) goto L_0885EDE8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885EDE8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0885F328;
      }
      goto L_0885EDF0;
    }
L_0885EDF0:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x0885EE04u);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0021_entry, 21u, 197u, 0x08858BD0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885EE04u) goto L_0885EE04;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885EE04:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0885F328;
      }
      goto L_0885EE0C;
    }
L_0885EE0C:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x0885EE20u);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0021_entry, 21u, 202u, 0x08858C2Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885EE20u) goto L_0885EE20;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885EE20:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0885F328;
      }
      goto L_0885EE28;
    }
L_0885EE28:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x0885EE3Cu);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0021_entry, 21u, 441u, 0x088599F8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885EE3Cu) goto L_0885EE3C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885EE3C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0885F328;
      }
      goto L_0885EE44;
    }
L_0885EE44:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x0885EE58u);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0021_entry, 21u, 456u, 0x08859AD4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885EE58u) goto L_0885EE58;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885EE58:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0885F328;
      }
      goto L_0885EE60;
    }
L_0885EE60:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x0885EE74u);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0021_entry, 21u, 483u, 0x08859C94u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885EE74u) goto L_0885EE74;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885EE74:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0885F328;
      }
      goto L_0885EE7C;
    }
L_0885EE7C:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x0885EE90u);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0021_entry, 21u, 510u, 0x08859E54u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885EE90u) goto L_0885EE90;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885EE90:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0885F328;
      }
      goto L_0885EE98;
    }
L_0885EE98:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x0885EEACu);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0021_entry, 21u, 535u, 0x08859FF4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885EEACu) goto L_0885EEAC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885EEAC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0885F328;
      }
      goto L_0885EEB4;
    }
L_0885EEB4:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x0885EEC8u);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0021_entry, 21u, 556u, 0x0885A154u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885EEC8u) goto L_0885EEC8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885EEC8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0885F328;
      }
      goto L_0885EED0;
    }
L_0885EED0:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x0885EEE4u);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0021_entry, 21u, 583u, 0x0885A314u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885EEE4u) goto L_0885EEE4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885EEE4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0885F328;
      }
      goto L_0885EEEC;
    }
L_0885EEEC:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x0885EF00u);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0021_entry, 21u, 610u, 0x0885A4D4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885EF00u) goto L_0885EF00;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885EF00:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0885F328;
      }
      goto L_0885EF08;
    }
L_0885EF08:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x0885EF1Cu);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0021_entry, 21u, 635u, 0x0885A674u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885EF1Cu) goto L_0885EF1C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885EF1C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0885F328;
      }
      goto L_0885EF24;
    }
L_0885EF24:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x0885EF38u);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0021_entry, 21u, 656u, 0x0885A7D4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885EF38u) goto L_0885EF38;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885EF38:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0885F328;
      }
      goto L_0885EF40;
    }
L_0885EF40:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x0885EF54u);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0021_entry, 21u, 683u, 0x0885A994u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885EF54u) goto L_0885EF54;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885EF54:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0885F328;
      }
      goto L_0885EF5C;
    }
L_0885EF5C:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x0885EF70u);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0021_entry, 21u, 710u, 0x0885AB54u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885EF70u) goto L_0885EF70;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885EF70:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0885F328;
      }
      goto L_0885EF78;
    }
L_0885EF78:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x0885EF8Cu);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0021_entry, 21u, 735u, 0x0885ACF4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885EF8Cu) goto L_0885EF8C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885EF8C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0885F328;
      }
      goto L_0885EF94;
    }
L_0885EF94:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x0885EFA8u);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0021_entry, 21u, 771u, 0x0885AF30u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885EFA8u) goto L_0885EFA8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885EFA8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0885F328;
      }
      goto L_0885EFB0;
    }
L_0885EFB0:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x0885EFC4u);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0021_entry, 21u, 796u, 0x0885B0D0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885EFC4u) goto L_0885EFC4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885EFC4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0885F328;
      }
      goto L_0885EFCC;
    }
L_0885EFCC:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x0885EFE0u);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0021_entry, 21u, 821u, 0x0885B270u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885EFE0u) goto L_0885EFE0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885EFE0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0885F328;
      }
      goto L_0885EFE8;
    }
L_0885EFE8:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x0885EFFCu);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0021_entry, 21u, 846u, 0x0885B410u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885EFFCu) goto L_0885EFFC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885EFFC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0885F328;
      }
      goto L_0885F004;
    }
L_0885F004:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x0885F018u);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0021_entry, 21u, 871u, 0x0885B5B0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885F018u) goto L_0885F018;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885F018:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0885F328;
      }
      goto L_0885F020;
    }
L_0885F020:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x0885F034u);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0021_entry, 21u, 896u, 0x0885B750u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885F034u) goto L_0885F034;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885F034:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0885F328;
      }
      goto L_0885F03C;
    }
L_0885F03C:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x0885F050u);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0021_entry, 21u, 921u, 0x0885B8F0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885F050u) goto L_0885F050;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885F050:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0885F328;
      }
      goto L_0885F058;
    }
L_0885F058:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x0885F06Cu);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0021_entry, 21u, 946u, 0x0885BA90u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885F06Cu) goto L_0885F06C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885F06C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0885F328;
      }
      goto L_0885F074;
    }
L_0885F074:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x0885F088u);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0021_entry, 21u, 971u, 0x0885BC30u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885F088u) goto L_0885F088;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885F088:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0885F328;
      }
      goto L_0885F090;
    }
L_0885F090:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x0885F0A4u);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0021_entry, 21u, 996u, 0x0885BDD0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885F0A4u) goto L_0885F0A4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885F0A4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0885F328;
      }
      goto L_0885F0AC;
    }
L_0885F0AC:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x0885F0C0u);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0021_entry, 21u, 1021u, 0x0885BF70u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885F0C0u) goto L_0885F0C0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885F0C0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0885F328;
      }
      goto L_0885F0C8;
    }
L_0885F0C8:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x0885F0DCu);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    goto L_0885C110;
L_0885F0DC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0885F328;
      }
      goto L_0885F0E4;
    }
L_0885F0E4:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x0885F0F8u);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    goto L_0885C2B0;
L_0885F0F8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0885F328;
      }
      goto L_0885F100;
    }
L_0885F100:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x0885F114u);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    goto L_0885C450;
L_0885F114:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0885F328;
      }
      goto L_0885F11C;
    }
L_0885F11C:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x0885F130u);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    goto L_0885C5F0;
L_0885F130:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0885F328;
      }
      goto L_0885F138;
    }
L_0885F138:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x0885F14Cu);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    goto L_0885C790;
L_0885F14C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0885F328;
      }
      goto L_0885F154;
    }
L_0885F154:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x0885F168u);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    goto L_0885C930;
L_0885F168:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0885F328;
      }
      goto L_0885F170;
    }
L_0885F170:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x0885F184u);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    goto L_0885CAD0;
L_0885F184:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0885F328;
      }
      goto L_0885F18C;
    }
L_0885F18C:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x0885F1A0u);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    goto L_0885CC50;
L_0885F1A0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0885F328;
      }
      goto L_0885F1A8;
    }
L_0885F1A8:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x0885F1BCu);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    goto L_0885CDF0;
L_0885F1BC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0885F328;
      }
      goto L_0885F1C4;
    }
L_0885F1C4:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x0885F1D8u);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    goto L_0885CF90;
L_0885F1D8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0885F328;
      }
      goto L_0885F1E0;
    }
L_0885F1E0:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x0885F1F4u);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    goto L_0885D130;
L_0885F1F4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0885F328;
      }
      goto L_0885F1FC;
    }
L_0885F1FC:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x0885F210u);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    goto L_0885D2D0;
L_0885F210:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0885F328;
      }
      goto L_0885F218;
    }
L_0885F218:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x0885F22Cu);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    goto L_0885D470;
L_0885F22C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0885F328;
      }
      goto L_0885F234;
    }
L_0885F234:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x0885F248u);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    goto L_0885D610;
L_0885F248:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0885F328;
      }
      goto L_0885F250;
    }
L_0885F250:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x0885F264u);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    goto L_0885D7B0;
L_0885F264:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0885F328;
      }
      goto L_0885F26C;
    }
L_0885F26C:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x0885F280u);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    goto L_0885D950;
L_0885F280:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0885F328;
      }
      goto L_0885F288;
    }
L_0885F288:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x0885F29Cu);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    goto L_0885DAF0;
L_0885F29C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0885F328;
      }
      goto L_0885F2A4;
    }
L_0885F2A4:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x0885F2B8u);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    goto L_0885DC90;
L_0885F2B8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0885F328;
      }
      goto L_0885F2C0;
    }
L_0885F2C0:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x0885F2D4u);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    goto L_0885DE30;
L_0885F2D4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0885F328;
      }
      goto L_0885F2DC;
    }
L_0885F2DC:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x0885F2F0u);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    goto L_0885DFD0;
L_0885F2F0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0885F328;
      }
      goto L_0885F2F8;
    }
L_0885F2F8:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x0885F30Cu);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    goto L_0885E170;
L_0885F30C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0885F328;
      }
      goto L_0885F314;
    }
L_0885F314:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x0885F328u);
    aot_gpr_6 = (aot_gpr_7 | 0u);
    goto L_0885E310;
L_0885F328:
    aot_gpr_31 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
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
L_0885F334:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x0885F344u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0089_entry, 89u, 288u, 0x08969514u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885F344u) goto L_0885F344;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885F344:
    ctx.gpr[2] = (0u | 0u);
    aot_gpr_31 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
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
L_0885F354:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(40)));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), aot_gpr_31);
    { const bool branch_taken = ctx.gpr[16] == 0u;
      if (branch_taken) {
          goto L_0885F398;
      }
      goto L_0885F370;
    }
L_0885F370:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x0885F37Cu);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0117_entry, 117u, 113u, 0x089D8908u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885F37Cu) goto L_0885F37C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885F37C:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    aot_gpr_31 = (0x0885F388u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 603u, 0x0889E994u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885F388u) goto L_0885F388;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885F388:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_0885F3A0;
      }
      goto L_0885F390;
    }
L_0885F390:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0885F3DC;
      }
      goto L_0885F398;
    }
L_0885F398:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0885F3E0;
      }
      goto L_0885F3A0;
    }
L_0885F3A0:
    aot_gpr_31 = (0x0885F3A8u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 629u, 0x0889EB94u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885F3A8u) goto L_0885F3A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885F3A8:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    aot_gpr_5 = (2182u << 16u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_6 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x0885F3C0u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-3276));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0117_entry, 117u, 82u, 0x089D86FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885F3C0u) goto L_0885F3C0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885F3C0:
    aot_gpr_31 = (0x0885F3C8u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 609u, 0x0889E9D0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885F3C8u) goto L_0885F3C8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885F3C8:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x0885F3D4u);
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0089_entry, 89u, 286u, 0x08969500u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885F3D4u) goto L_0885F3D4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885F3D4:
    aot_gpr_4 = (0u | 12288u);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), aot_gpr_4);
    goto L_0885F3DC;
L_0885F3DC:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    goto L_0885F3E0;
L_0885F3E0:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(ctx.gpr[29] + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
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
L_0885F3F4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(40)));
    { const std::uint32_t aot_run_words[3]{ctx.gpr[16], ctx.gpr[17], aot_gpr_31};
      aot_mem.aot_direct_store32_block(ctx.gpr[29] + static_cast<std::uint32_t>(0), aot_run_words); }
    { const bool branch_taken = aot_gpr_6 != 0u;
    ctx.gpr[16] = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_0885F418;
      }
      goto L_0885F410;
    }
L_0885F410:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0885F468;
      }
      goto L_0885F418;
    }
L_0885F418:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(36)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(32));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_5;
    aot_gpr_31 = (0x0885F430u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885F430u) goto L_0885F430;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885F430:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(16);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(32);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(48);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<3u, 4u>(vfpu_value); }
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(16);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(32);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<3u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(48);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_31 = (0x0885F464u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0030_entry, 30u, 700u, 0x0887F39Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885F464u) goto L_0885F464;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885F464:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    goto L_0885F468;
L_0885F468:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(ctx.gpr[29] + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
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
L_0885F47C:
    jump_target = aot_gpr_31;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(40)));
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
L_0885F484:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), aot_gpr_31);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0885F53C;
      }
      goto L_0885F4A4;
    }
L_0885F4A4:
    aot_gpr_31 = (0x0885F4ACu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0030_entry, 30u, 726u, 0x0887F5C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885F4ACu) goto L_0885F4AC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885F4AC:
    aot_gpr_4 = (ctx.gpr[16] + static_cast<std::uint32_t>(40));
    aot_gpr_31 = (0x0885F4B8u);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0030_entry, 30u, 736u, 0x0887F6B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885F4B8u) goto L_0885F4B8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885F4B8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(88));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_6;
    aot_gpr_31 = (0x0885F4D0u);
    aot_gpr_4 = (ctx.gpr[16] + aot_gpr_5);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885F4D0u) goto L_0885F4D0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885F4D0:
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), 0u);
    aot_gpr_31 = (0x0885F4DCu);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0054_entry, 54u, 476u, 0x088DF860u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885F4DCu) goto L_0885F4DC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885F4DC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(72));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_6;
    aot_gpr_31 = (0x0885F4F4u);
    aot_gpr_4 = (ctx.gpr[16] + aot_gpr_5);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885F4F4u) goto L_0885F4F4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885F4F4:
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] == aot_gpr_4;
      if (branch_taken) {
          goto L_0885F53C;
      }
      goto L_0885F500;
    }
L_0885F500:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
        goto L_0885F518;
    }
    goto L_0885F50C;
L_0885F50C:
    aot_gpr_31 = (0x0885F514u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885F514u) goto L_0885F514;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885F514:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    goto L_0885F518;
L_0885F518:
    ctx.gpr[17] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(72));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_6;
    aot_gpr_31 = (0x0885F530u);
    aot_gpr_4 = (ctx.gpr[16] + aot_gpr_5);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885F530u) goto L_0885F530;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885F530:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x0885F53Cu);
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0078_entry, 78u, 696u, 0x0893EDD4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885F53Cu) goto L_0885F53C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885F53C:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(ctx.gpr[29] + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
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
L_0885F550:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_5 | 0u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-29560));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), aot_gpr_31);
    aot_gpr_31 = (0x0885F574u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 31u, 0x08B58180u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885F574u) goto L_0885F574;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885F574:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_0885F584;
      }
      goto L_0885F57C;
    }
L_0885F57C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0885F5A4;
      }
      goto L_0885F584;
    }
L_0885F584:
    aot_gpr_31 = (0x0885F58Cu);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58974, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885F58Cu) goto L_0885F58C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885F58C:
    aot_gpr_31 = (0x0885F594u);
    aot_gpr_4 = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 468u, 0x08ABE29Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885F594u) goto L_0885F594;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885F594:
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    aot_gpr_31 = (0x0885F5A4u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 63u, 0x08B5831Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885F5A4u) goto L_0885F5A4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885F5A4:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(ctx.gpr[29] + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
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
L_0885F5B8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(44)));
    aot_gpr_6 = (0u + static_cast<std::uint32_t>(-1));
    { const std::uint32_t aot_run_words[3]{ctx.gpr[16], ctx.gpr[17], aot_gpr_31};
      aot_mem.aot_direct_store32_block(ctx.gpr[29] + static_cast<std::uint32_t>(0), aot_run_words); }
    { const bool branch_taken = aot_gpr_5 == aot_gpr_6;
    ctx.gpr[16] = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_0885F5EC;
      }
      goto L_0885F5D8;
    }
L_0885F5D8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0885F5F4;
      }
      goto L_0885F5E4;
    }
L_0885F5E4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
      if (branch_taken) {
          goto L_0885F600;
      }
      goto L_0885F5EC;
    }
L_0885F5EC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0885F618;
      }
      goto L_0885F5F4;
    }
L_0885F5F4:
    aot_gpr_31 = (0x0885F5FCu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885F5FCu) goto L_0885F5FC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885F5FC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    goto L_0885F600;
L_0885F600:
    aot_gpr_31 = (0x0885F608u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0078_entry, 78u, 690u, 0x0893ED4Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885F608u) goto L_0885F608;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885F608:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    aot_gpr_31 = (0x0885F614u);
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE2E4, 174u, 472u, 0x08ABE2E4u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_7, aot_gpr_8, ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 472u, 0x08ABE2E4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885F614u) goto L_0885F614;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885F614:
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), ctx.gpr[17]);
    goto L_0885F618;
L_0885F618:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(ctx.gpr[29] + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
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
L_0885F62C:
    jump_target = aot_gpr_31;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(44)));
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
L_0885F634:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_5 = (2182u << 16u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_6 = (ctx.gpr[29] | 0u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), aot_gpr_31);
    aot_gpr_31 = (0x0885F658u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-2328));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0091_entry, 91u, 614u, 0x08972D0Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885F658u) goto L_0885F658;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885F658:
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
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
L_0885F668:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr_6 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (2182u << 16u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x0885F684u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-2204));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0091_entry, 91u, 614u, 0x08972D0Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885F684u) goto L_0885F684;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885F684:
    aot_gpr_31 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
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
L_0885F690:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), aot_gpr_6);
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), aot_gpr_31);
    aot_gpr_31 = (0x0885F6B0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0147_entry, 147u, 642u, 0x08A536B8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885F6B0u) goto L_0885F6B0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885F6B0:
    aot_gpr_4 = (ctx.gpr[16] + static_cast<std::uint32_t>(12));
    aot_gpr_5 = (0u | 2u);
    aot_gpr_31 = (0x0885F6C0u);
    aot_gpr_6 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0030_entry, 30u, 728u, 0x0887F5E4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885F6C0u) goto L_0885F6C0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885F6C0:
    aot_gpr_31 = (0x0885F6C8u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0030_entry, 30u, 724u, 0x0887F59Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885F6C8u) goto L_0885F6C8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885F6C8:
    aot_gpr_4 = (ctx.gpr[16] + static_cast<std::uint32_t>(40));
    aot_gpr_5 = (0u | 2u);
    aot_gpr_31 = (0x0885F6D8u);
    aot_gpr_6 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0030_entry, 30u, 728u, 0x0887F5E4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885F6D8u) goto L_0885F6D8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885F6D8:
    ctx.gpr[16] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
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
L_0885F6E8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[16] = (aot_gpr_5 | 0u);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), aot_gpr_31);
    aot_gpr_31 = (0x0885F70Cu);
    ctx.gpr[18] = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0080_entry, 80u, 189u, 0x089452FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885F70Cu) goto L_0885F70C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885F70C:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[2];
      if (branch_taken) {
          goto L_0885F73C;
      }
      goto L_0885F714;
    }
L_0885F714:
    aot_gpr_5 = (2182u << 16u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_6 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x0885F728u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-2328));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0091_entry, 91u, 614u, 0x08972D0Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885F728u) goto L_0885F728;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885F728:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0885F748;
      }
      goto L_0885F734;
    }
L_0885F734:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0885F74C;
      }
      goto L_0885F73C;
    }
L_0885F73C:
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0885F74C;
      }
      goto L_0885F748;
    }
L_0885F748:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    goto L_0885F74C;
L_0885F74C:
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(ctx.gpr[29] + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
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
L_0885F764:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), aot_gpr_31);
    aot_gpr_31 = (0x0885F780u);
    ctx.gpr[16] = (aot_gpr_5 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0080_entry, 80u, 189u, 0x089452FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885F780u) goto L_0885F780;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885F780:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) <= 0;
      if (branch_taken) {
          goto L_0885F798;
      }
      goto L_0885F78C;
    }
L_0885F78C:
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (ctx.gpr[16] + aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    goto L_0885F798;
L_0885F798:
    aot_gpr_5 = (2182u << 16u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_6 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x0885F7ACu);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-2204));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0091_entry, 91u, 614u, 0x08972D0Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885F7ACu) goto L_0885F7AC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885F7AC:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(ctx.gpr[29] + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
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
L_0885F7C4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr_4 = (2238u << 16u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_4 + static_cast<std::uint32_t>(18664));
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), aot_gpr_31);
    aot_gpr_31 = (0x0885F7E4u);
    aot_gpr_5 = (0u | 5u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0054_entry, 54u, 451u, 0x088DF69Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885F7E4u) goto L_0885F7E4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885F7E4:
    aot_gpr_4 = (2234u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(20576));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), aot_gpr_5);
    aot_gpr_31 = (0x0885F800u);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-29552));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B60680, 215u, 68u, 0x08B60680u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], ctx.gpr[2], aot_gpr_4, aot_gpr_5, ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885F800u) goto L_0885F800;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885F800:
    aot_gpr_5 = (2232u << 16u);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7912));
    aot_gpr_6 = (ctx.gpr[16] | 0u);
    aot_gpr_7 = (0u | 40u);
    aot_gpr_31 = (0x0885F818u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-26576));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0139_entry, 139u, 279u, 0x08A312B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885F818u) goto L_0885F818;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885F818:
    ctx.gpr[16] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
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
L_0885F828:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), aot_gpr_31);
    aot_gpr_31 = (0x0885F840u);
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 7u, 0x08860358u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0885F840u) goto L_0885F840;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0885F840:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
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
L_0885F854:
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_gpr_5);
    { const float vfpu_constant = std::bit_cast<float>(0x3F22F983u);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    ctx.execute_vfpu_vec3_ct<64u, 0u, 32u, 1u, 2u>();
    ctx.execute_vfpu_unary_ct<1u, 64u, 1u, 19u>();
    aot_gpr_5 = (ctx.vfpu_scalar_bits_ct<1u>());
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_gpr_5);
    { const float vfpu_constant = std::bit_cast<float>(0x3F22F983u);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    ctx.execute_vfpu_vec3_ct<64u, 0u, 32u, 1u, 2u>();
    ctx.execute_vfpu_unary_ct<1u, 64u, 1u, 18u>();
    aot_gpr_5 = (ctx.vfpu_scalar_bits_ct<1u>());
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_5 = (16256u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(0u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(aot_fpr_12));
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_12), std::bit_cast<std::uint32_t>(aot_fpr_13), std::bit_cast<std::uint32_t>(aot_fpr_14)};
      aot_mem.aot_direct_store32_block(aot_gpr_4 + static_cast<std::uint32_t>(16), aot_run_words); }
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_14) ^ 0x80000000u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(aot_fpr_13));
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
L_0885F8C8:
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_gpr_5);
    { const float vfpu_constant = std::bit_cast<float>(0x3F22F983u);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    ctx.execute_vfpu_vec3_ct<64u, 0u, 32u, 1u, 2u>();
    ctx.execute_vfpu_unary_ct<1u, 64u, 1u, 19u>();
    aot_gpr_5 = (ctx.vfpu_scalar_bits_ct<1u>());
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_gpr_5);
    { const float vfpu_constant = std::bit_cast<float>(0x3F22F983u);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    ctx.execute_vfpu_vec3_ct<64u, 0u, 32u, 1u, 2u>();
    ctx.execute_vfpu_unary_ct<1u, 64u, 1u, 18u>();
    aot_gpr_5 = (ctx.vfpu_scalar_bits_ct<1u>());
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_fpr_12 = std::bit_cast<float>(0u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_14) ^ 0x80000000u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (16256u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(aot_fpr_12));
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_14), std::bit_cast<std::uint32_t>(aot_fpr_12), std::bit_cast<std::uint32_t>(aot_fpr_13)};
      aot_mem.aot_direct_store32_block(aot_gpr_4 + static_cast<std::uint32_t>(32), aot_run_words); }
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
L_0885F93C:
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_gpr_5);
    { const float vfpu_constant = std::bit_cast<float>(0x3F22F983u);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    ctx.execute_vfpu_vec3_ct<64u, 0u, 32u, 1u, 2u>();
    ctx.execute_vfpu_unary_ct<1u, 64u, 1u, 19u>();
    aot_gpr_5 = (ctx.vfpu_scalar_bits_ct<1u>());
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_gpr_5);
    { const float vfpu_constant = std::bit_cast<float>(0x3F22F983u);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    ctx.execute_vfpu_vec3_ct<64u, 0u, 32u, 1u, 2u>();
    ctx.execute_vfpu_unary_ct<1u, 64u, 1u, 18u>();
    aot_gpr_5 = (ctx.vfpu_scalar_bits_ct<1u>());
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(aot_fpr_14));
    aot_fpr_12 = std::bit_cast<float>(0u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_14) ^ 0x80000000u);
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_14), std::bit_cast<std::uint32_t>(aot_fpr_13), std::bit_cast<std::uint32_t>(aot_fpr_12)};
      aot_mem.aot_direct_store32_block(aot_gpr_4 + static_cast<std::uint32_t>(16), aot_run_words); }
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (16256u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(aot_fpr_12));
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
L_0885F9B0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_fpr_13 = std::bit_cast<float>(0u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x0885F9CCu);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(aot_fpr_13));
    goto L_0885F854;
L_0885F9CC:
    aot_gpr_31 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
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
L_0885F9D8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_fpr_13 = std::bit_cast<float>(0u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x0885F9F4u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(aot_fpr_13));
    goto L_0885F8C8;
L_0885F9F4:
    aot_gpr_31 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
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
L_0885FA00:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_fpr_13 = std::bit_cast<float>(0u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x0885FA1Cu);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(aot_fpr_13));
    goto L_0885F93C;
L_0885FA1C:
    aot_gpr_31 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
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
L_0885FA28:
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_gpr_5);
    { const float vfpu_constant = std::bit_cast<float>(0x3F22F983u);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    ctx.execute_vfpu_vec3_ct<64u, 0u, 32u, 1u, 2u>();
    ctx.execute_vfpu_unary_ct<1u, 64u, 1u, 19u>();
    aot_gpr_5 = (ctx.vfpu_scalar_bits_ct<1u>());
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_gpr_5);
    { const float vfpu_constant = std::bit_cast<float>(0x3F22F983u);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    ctx.execute_vfpu_vec3_ct<64u, 0u, 32u, 1u, 2u>();
    ctx.execute_vfpu_unary_ct<1u, 64u, 1u, 18u>();
    aot_gpr_5 = (ctx.vfpu_scalar_bits_ct<1u>());
    ctx.fpr[16] = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_gpr_5);
    { const float vfpu_constant = std::bit_cast<float>(0x3F22F983u);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    ctx.execute_vfpu_vec3_ct<64u, 0u, 32u, 1u, 2u>();
    ctx.execute_vfpu_unary_ct<1u, 64u, 1u, 19u>();
    aot_gpr_5 = (ctx.vfpu_scalar_bits_ct<1u>());
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_gpr_5);
    { const float vfpu_constant = std::bit_cast<float>(0x3F22F983u);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    ctx.execute_vfpu_vec3_ct<64u, 0u, 32u, 1u, 2u>();
    ctx.execute_vfpu_unary_ct<1u, 64u, 1u, 18u>();
    aot_gpr_5 = (ctx.vfpu_scalar_bits_ct<1u>());
    ctx.fpr[17] = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_14));
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_gpr_5);
    { const float vfpu_constant = std::bit_cast<float>(0x3F22F983u);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    ctx.execute_vfpu_vec3_ct<64u, 0u, 32u, 1u, 2u>();
    ctx.execute_vfpu_unary_ct<1u, 64u, 1u, 19u>();
    aot_gpr_5 = (ctx.vfpu_scalar_bits_ct<1u>());
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_14));
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_gpr_5);
    { const float vfpu_constant = std::bit_cast<float>(0x3F22F983u);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    ctx.execute_vfpu_vec3_ct<64u, 0u, 32u, 1u, 2u>();
    ctx.execute_vfpu_unary_ct<1u, 64u, 1u, 18u>();
    aot_gpr_5 = (ctx.vfpu_scalar_bits_ct<1u>());
    ctx.fpr[18] = std::bit_cast<float>(aot_gpr_5);
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    { const float fs = aot_fpr_13; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[19] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[19] = fs * ft; }
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_0 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_0 = fs * ft; }
    { const float fs = ctx.fpr[17]; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[2] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    aot_fpr_0 = aot_fpr_0 - ctx.fpr[2];
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_0));
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_0 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_0 = fs * ft; }
    { const float fs = ctx.fpr[19]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[1] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    aot_fpr_0 = aot_fpr_0 + ctx.fpr[1];
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(aot_fpr_0));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_0 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_0 = fs * ft; }
    aot_fpr_0 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_0) ^ 0x80000000u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(aot_fpr_0));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_0 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_0 = fs * ft; }
    aot_fpr_0 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_0) ^ 0x80000000u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(aot_fpr_0));
    { const float fs = ctx.fpr[15]; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_0 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_0 = fs * ft; }
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(aot_fpr_0));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    { const float fs = aot_fpr_13; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    { const float fs = aot_fpr_12; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_fpr_13 = aot_fpr_13 + aot_fpr_14;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(aot_fpr_13));
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    aot_fpr_13 = aot_fpr_13 - ctx.fpr[16];
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(aot_fpr_13));
    { const float fs = ctx.fpr[15]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(0u);
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_12), std::bit_cast<std::uint32_t>(aot_fpr_12), std::bit_cast<std::uint32_t>(aot_fpr_12)};
      aot_mem.aot_direct_store32_block(aot_gpr_4 + static_cast<std::uint32_t>(48), aot_run_words); }
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
L_0885FB5C:
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_gpr_5);
    { const float vfpu_constant = std::bit_cast<float>(0x3F22F983u);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    ctx.execute_vfpu_vec3_ct<64u, 0u, 32u, 1u, 2u>();
    ctx.execute_vfpu_unary_ct<1u, 64u, 1u, 19u>();
    aot_gpr_5 = (ctx.vfpu_scalar_bits_ct<1u>());
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_gpr_5);
    { const float vfpu_constant = std::bit_cast<float>(0x3F22F983u);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    ctx.execute_vfpu_vec3_ct<64u, 0u, 32u, 1u, 2u>();
    ctx.execute_vfpu_unary_ct<1u, 64u, 1u, 18u>();
    aot_gpr_5 = (ctx.vfpu_scalar_bits_ct<1u>());
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    { const float fs = aot_fpr_13; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    { const float fs = aot_fpr_14; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[15] = ctx.fpr[15] - ctx.fpr[17];
    { const float fs = aot_fpr_14; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    { const float fs = aot_fpr_13; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    aot_fpr_12 = aot_fpr_12 + ctx.fpr[16];
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(20)));
    { const float fs = aot_fpr_13; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[19] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[19] = fs * ft; }
    aot_fpr_0 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(24)));
    { const float fs = aot_fpr_14; const float ft = aot_fpr_0; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[17] = ctx.fpr[19] - ctx.fpr[17];
    { const float fs = aot_fpr_14; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    { const float fs = aot_fpr_13; const float ft = aot_fpr_0; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[16] = ctx.fpr[18] + ctx.fpr[16];
    ctx.fpr[2] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(36)));
    { const float fs = aot_fpr_13; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[1] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[3] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(40)));
    { const float fs = aot_fpr_14; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[19] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[19] = fs * ft; }
    ctx.fpr[19] = ctx.fpr[1] - ctx.fpr[19];
    { const float fs = aot_fpr_14; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_0 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_0 = fs * ft; }
    { const float fs = aot_fpr_13; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    ctx.fpr[18] = aot_fpr_0 + ctx.fpr[18];
    ctx.fpr[4] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(52)));
    { const float fs = aot_fpr_13; const float ft = ctx.fpr[4]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[5] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[5] = fs * ft; }
    ctx.fpr[6] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(56)));
    { const float fs = aot_fpr_14; const float ft = ctx.fpr[6]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[1] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[2] = ctx.fpr[5] - ctx.fpr[1];
    { const float fs = aot_fpr_14; const float ft = ctx.fpr[4]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    { const float fs = aot_fpr_13; const float ft = ctx.fpr[6]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_13 = aot_fpr_14 + aot_fpr_13;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(aot_fpr_13));
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
L_0885FC3C:
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_gpr_5);
    { const float vfpu_constant = std::bit_cast<float>(0x3F22F983u);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    ctx.execute_vfpu_vec3_ct<64u, 0u, 32u, 1u, 2u>();
    ctx.execute_vfpu_unary_ct<1u, 64u, 1u, 19u>();
    aot_gpr_5 = (ctx.vfpu_scalar_bits_ct<1u>());
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_gpr_5);
    { const float vfpu_constant = std::bit_cast<float>(0x3F22F983u);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    ctx.execute_vfpu_vec3_ct<64u, 0u, 32u, 1u, 2u>();
    ctx.execute_vfpu_unary_ct<1u, 64u, 1u, 18u>();
    aot_gpr_5 = (ctx.vfpu_scalar_bits_ct<1u>());
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    { const float fs = aot_fpr_13; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    { const float fs = aot_fpr_14; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[17];
    { const float fs = aot_fpr_13; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    { const float fs = aot_fpr_14; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = ctx.fpr[16] - aot_fpr_12;
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
    { const float fs = aot_fpr_13; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[19] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[19] = fs * ft; }
    aot_fpr_0 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(24)));
    { const float fs = aot_fpr_14; const float ft = aot_fpr_0; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[17] = ctx.fpr[19] + ctx.fpr[17];
    { const float fs = aot_fpr_13; const float ft = aot_fpr_0; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_0 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_0 = fs * ft; }
    { const float fs = aot_fpr_14; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[16] = aot_fpr_0 - ctx.fpr[16];
    ctx.fpr[2] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(32)));
    { const float fs = aot_fpr_13; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[1] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[3] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(40)));
    { const float fs = aot_fpr_14; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[19] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[19] = fs * ft; }
    ctx.fpr[19] = ctx.fpr[1] + ctx.fpr[19];
    { const float fs = aot_fpr_13; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    { const float fs = aot_fpr_14; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_0 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_0 = fs * ft; }
    ctx.fpr[18] = ctx.fpr[18] - aot_fpr_0;
    ctx.fpr[4] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(48)));
    { const float fs = aot_fpr_13; const float ft = ctx.fpr[4]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[5] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[5] = fs * ft; }
    ctx.fpr[6] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(56)));
    { const float fs = aot_fpr_14; const float ft = ctx.fpr[6]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[1] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[5] + ctx.fpr[1];
    { const float fs = aot_fpr_13; const float ft = ctx.fpr[6]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    { const float fs = aot_fpr_14; const float ft = ctx.fpr[4]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_fpr_13 = aot_fpr_13 - aot_fpr_14;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(aot_fpr_13));
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
L_0885FD1C:
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_gpr_5);
    { const float vfpu_constant = std::bit_cast<float>(0x3F22F983u);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    ctx.execute_vfpu_vec3_ct<64u, 0u, 32u, 1u, 2u>();
    ctx.execute_vfpu_unary_ct<1u, 64u, 1u, 19u>();
    aot_gpr_5 = (ctx.vfpu_scalar_bits_ct<1u>());
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_gpr_5);
    { const float vfpu_constant = std::bit_cast<float>(0x3F22F983u);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    ctx.execute_vfpu_vec3_ct<64u, 0u, 32u, 1u, 2u>();
    ctx.execute_vfpu_unary_ct<1u, 64u, 1u, 18u>();
    aot_gpr_5 = (ctx.vfpu_scalar_bits_ct<1u>());
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    { const float fs = aot_fpr_13; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    { const float fs = aot_fpr_14; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[15] = ctx.fpr[15] - ctx.fpr[17];
    { const float fs = aot_fpr_14; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    { const float fs = aot_fpr_13; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    aot_fpr_12 = aot_fpr_12 + ctx.fpr[16];
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
    { const float fs = aot_fpr_13; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[19] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[19] = fs * ft; }
    aot_fpr_0 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(20)));
    { const float fs = aot_fpr_14; const float ft = aot_fpr_0; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[17] = ctx.fpr[19] - ctx.fpr[17];
    { const float fs = aot_fpr_14; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    { const float fs = aot_fpr_13; const float ft = aot_fpr_0; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[16] = ctx.fpr[18] + ctx.fpr[16];
    ctx.fpr[2] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(32)));
    { const float fs = aot_fpr_13; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[1] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[3] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(36)));
    { const float fs = aot_fpr_14; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[19] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[19] = fs * ft; }
    ctx.fpr[19] = ctx.fpr[1] - ctx.fpr[19];
    { const float fs = aot_fpr_14; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_0 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_0 = fs * ft; }
    { const float fs = aot_fpr_13; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    ctx.fpr[18] = aot_fpr_0 + ctx.fpr[18];
    ctx.fpr[4] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(48)));
    { const float fs = aot_fpr_13; const float ft = ctx.fpr[4]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[5] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[5] = fs * ft; }
    ctx.fpr[6] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(52)));
    { const float fs = aot_fpr_14; const float ft = ctx.fpr[6]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[1] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[2] = ctx.fpr[5] - ctx.fpr[1];
    { const float fs = aot_fpr_14; const float ft = ctx.fpr[4]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    { const float fs = aot_fpr_13; const float ft = ctx.fpr[6]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_13 = aot_fpr_14 + aot_fpr_13;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(aot_fpr_13));
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
L_0885FDFC:
    ctx.gpr[2] = (0u | 0u);
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
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(16);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(16);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vcmp_ct<0u, 4u, 3u, 5u>();
    { const bool branch_taken = ((ctx.vfpu_ctrl[3] >> 4u) & 1u) != 0u;
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(32);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
      if (branch_taken) {
          goto L_0885FE48;
      }
      goto L_0885FE1C;
    }
L_0885FE1C:
    { const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(32);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vcmp_ct<1u, 5u, 3u, 5u>();
    { const bool branch_taken = ((ctx.vfpu_ctrl[3] >> 4u) & 1u) != 0u;
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(48);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<3u, 4u>(vfpu_value); }
      if (branch_taken) {
          goto L_0885FE48;
      }
      goto L_0885FE2C;
    }
L_0885FE2C:
    { const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(48);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<7u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vcmp_ct<2u, 6u, 3u, 5u>();
    { const bool branch_taken = ((ctx.vfpu_ctrl[3] >> 4u) & 1u) != 0u;
    ctx.execute_vfpu_vcmp_ct<3u, 7u, 3u, 5u>();
      if (branch_taken) {
          goto L_0885FE48;
      }
      goto L_0885FE3C;
    }
L_0885FE3C:
    { const bool branch_taken = ((ctx.vfpu_ctrl[3] >> 4u) & 1u) != 0u;
      if (branch_taken) {
          goto L_0885FE48;
      }
      goto L_0885FE44;
    }
L_0885FE44:
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
    goto L_0885FE48;
L_0885FE48:
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
L_0885FE50:
    { const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(48);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<32u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(16);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<33u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(32);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<34u, 4u>(vfpu_value); }
    { float vfpu_value[4]{};
      ctx.write_vfpu_vector_with_destination_prefix_ct<35u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vtfm_ct<3u, 32u, 4u, 3u, 3u>();
    ctx.execute_vfpu_unary_ct<3u, 3u, 3u, 2u>();
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(64), ctx.vfpu_scalar_bits_ct<99u>());
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(16);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(32);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    jump_target = aot_gpr_31;
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<3u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(48);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
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
L_0885FE8C:
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(48);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<32u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(16);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<33u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(32);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<34u, 4u>(vfpu_value); }
    ctx.gpr[2] = (aot_gpr_5 | 0u);
    { float vfpu_value[4]{};
      ctx.write_vfpu_vector_with_destination_prefix_ct<35u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vtfm_ct<3u, 32u, 4u, 3u, 3u>();
    ctx.execute_vfpu_unary_ct<3u, 3u, 3u, 2u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(16);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(32);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    jump_target = aot_gpr_31;
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<3u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(48);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
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
L_0885FEC8:
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
    { const std::uint32_t vfpu_address = aot_gpr_6 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<8u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr_6 + static_cast<std::uint32_t>(16);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<9u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr_6 + static_cast<std::uint32_t>(32);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<10u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr_6 + static_cast<std::uint32_t>(48);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<11u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; vfpu_value[3u] = 1.0f;
      ctx.write_vfpu_vector_with_destination_prefix_ct<39u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; vfpu_value[3u] = 1.0f;
      ctx.write_vfpu_vector_with_destination_prefix_ct<43u, 4u>(vfpu_value); }
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(64), ctx.vfpu_scalar_bits_ct<100u>());
    { float vfpu_s[16]{}, vfpu_t[16]{}, vfpu_d[16]{};
      ctx.read_vfpu_matrix_ct<8u, 4u>(vfpu_s);
      ctx.read_vfpu_matrix_ct<36u, 4u>(vfpu_t);
      for (std::uint32_t a = 0; a < 4u; ++a) {
        for (std::uint32_t b = 0; b < 4u; ++b) {
          float sum = 0.0f;
          for (std::uint32_t c = 0; c < 4u; ++c) sum += vfpu_s[b * 4u + c] * vfpu_t[a * 4u + c];
          vfpu_d[a * 4u + b] = sum;
        }
      }
      ctx.write_vfpu_matrix_ct<32u, 4u>(vfpu_d);
      ctx.eat_vfpu_prefixes(); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(16);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(32);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    jump_target = aot_gpr_31;
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<3u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(48);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
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
L_0885FF14:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = aot_gpr_6 == 0u;
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
      if (branch_taken) {
          goto L_0885FF40;
      }
      goto L_0885FF20;
    }
L_0885FF20:
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_6 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_6 + static_cast<std::uint32_t>(16);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_6 + static_cast<std::uint32_t>(32);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    jump_target = aot_gpr_31;
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<3u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_6 + static_cast<std::uint32_t>(48);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
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
L_0885FF40:
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
L_0885FF48:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(64)));
    { const std::uint32_t vfpu_address = aot_gpr_6 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr_6 + static_cast<std::uint32_t>(16);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr_6 + static_cast<std::uint32_t>(32);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr_6 + static_cast<std::uint32_t>(48);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<3u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(16);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(32);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    jump_target = aot_gpr_31;
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<3u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(48);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
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
L_0885FF78:
    ctx.execute_vfpu_matrix_init_ct<32u, 4u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(16);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(32);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    jump_target = aot_gpr_31;
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<3u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(48);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
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
L_0885FF98:
    ctx.execute_vfpu_matrix_init_ct<32u, 3u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(16);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    jump_target = aot_gpr_31;
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(32);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
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
L_0885FFB4:
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.execute_vfpu_matrix_init_ct<32u, 4u, 3u>();
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_gpr_5);
    ctx.set_vfpu_scalar_bits_ct<33u>(aot_gpr_5);
    ctx.set_vfpu_scalar_bits_ct<66u>(aot_gpr_5);
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(16);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(32);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    jump_target = aot_gpr_31;
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<3u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(48);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
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
L_0885FFE4:
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_gpr_7 = (std::bit_cast<std::uint32_t>(aot_fpr_14));
    ctx.execute_vfpu_matrix_init_ct<32u, 3u, 3u>();
    ctx.set_vfpu_scalar_bits_ct<3u>(aot_gpr_5);
    ctx.set_vfpu_scalar_bits_ct<35u>(aot_gpr_6);
    ctx.set_vfpu_scalar_bits_ct<67u>(aot_gpr_7);
    ctx.pc = 0x08860000u; AOT_REGCACHE_SYNC_OUT(); return;
}

#undef AOT_REGCACHE_SYNC_IN
#undef AOT_REGCACHE_SYNC_OUT

void recomp_unit_0022(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0022_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_22(Runtime &runtime) {
    runtime.register_generated_unit(22u, 0x0885C000u, 16384u, &recomp_unit_0022, &recomp_unit_0022_entry);
    runtime.register_function(0x0885C000u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C008u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C010u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C028u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C030u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C048u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C050u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C068u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C070u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C088u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C090u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C0A8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C0B0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C0C8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C0D0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C0E8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C0F0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C104u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C110u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C134u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C14Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C164u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C168u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C170u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C188u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C190u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C1A8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C1B0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C1C8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C1D0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C1E8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C1F0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C208u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C210u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C228u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C230u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C248u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C250u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C268u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C270u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C288u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C290u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C2A4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C2B0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C2D4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C2ECu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C304u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C308u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C310u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C328u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C330u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C348u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C350u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C368u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C370u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C388u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C390u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C3A8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C3B0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C3C8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C3D0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C3E8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C3F0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C408u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C410u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C428u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C430u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C444u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C450u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C474u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C48Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C4A4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C4A8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C4B0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C4C8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C4D0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C4E8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C4F0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C508u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C510u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C528u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C530u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C548u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C550u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C568u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C570u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C588u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C590u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C5A8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C5B0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C5C8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C5D0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C5E4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C5F0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C614u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C62Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C644u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C648u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C650u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C668u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C670u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C688u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C690u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C6A8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C6B0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C6C8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C6D0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C6E8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C6F0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C708u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C710u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C728u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C730u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C748u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C750u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C768u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C770u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C784u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C790u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C7B4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C7CCu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C7E4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C7E8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C7F0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C808u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C810u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C828u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C830u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C848u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C850u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C868u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C870u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C888u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C890u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C8A8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C8B0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C8C8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C8D0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C8E8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C8F0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C908u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C910u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C924u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C930u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C954u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C96Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C984u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C988u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C990u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C9A8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C9B0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C9C8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C9D0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C9E8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C9F0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CA08u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CA10u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CA28u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CA30u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CA48u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CA50u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CA68u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CA70u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CA88u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CA90u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CAA8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CAB0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CAC4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CAD0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CAF4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CB0Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CB24u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CB28u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CB30u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CB48u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CB50u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CB68u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CB70u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CB88u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CB90u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CBA8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CBB0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CBC8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CBD0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CBE8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CBF0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CC08u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CC10u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CC28u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CC30u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CC44u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CC50u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CC74u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CC8Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CCA4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CCA8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CCB0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CCC8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CCD0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CCE8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CCF0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CD08u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CD10u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CD28u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CD30u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CD48u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CD50u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CD68u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CD70u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CD88u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CD90u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CDA8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CDB0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CDC8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CDD0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CDE4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CDF0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CE14u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CE2Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CE44u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CE48u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CE50u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CE68u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CE70u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CE88u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CE90u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CEA8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CEB0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CEC8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CED0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CEE8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CEF0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CF08u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CF10u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CF28u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CF30u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CF48u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CF50u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CF68u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CF70u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CF84u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CF90u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CFB4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CFCCu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CFE4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CFE8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CFF0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D008u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D010u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D028u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D030u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D048u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D050u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D068u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D070u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D088u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D090u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D0A8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D0B0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D0C8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D0D0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D0E8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D0F0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D108u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D110u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D124u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D130u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D154u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D16Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D184u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D188u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D190u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D1A8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D1B0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D1C8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D1D0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D1E8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D1F0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D208u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D210u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D228u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D230u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D248u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D250u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D268u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D270u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D288u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D290u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D2A8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D2B0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D2C4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D2D0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D2F4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D30Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D324u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D328u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D330u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D348u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D350u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D368u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D370u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D388u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D390u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D3A8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D3B0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D3C8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D3D0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D3E8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D3F0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D408u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D410u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D428u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D430u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D448u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D450u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D464u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D470u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D494u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D4ACu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D4C4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D4C8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D4D0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D4E8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D4F0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D508u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D510u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D528u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D530u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D548u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D550u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D568u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D570u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D588u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D590u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D5A8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D5B0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D5C8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D5D0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D5E8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D5F0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D604u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D610u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D634u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D64Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D664u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D668u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D670u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D688u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D690u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D6A8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D6B0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D6C8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D6D0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D6E8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D6F0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D708u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D710u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D728u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D730u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D748u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D750u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D768u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D770u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D788u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D790u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D7A4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D7B0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D7D4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D7ECu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D804u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D808u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D810u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D828u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D830u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D848u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D850u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D868u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D870u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D888u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D890u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D8A8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D8B0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D8C8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D8D0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D8E8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D8F0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D908u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D910u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D928u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D930u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D944u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D950u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D974u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D98Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D9A4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D9A8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D9B0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D9C8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D9D0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D9E8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D9F0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DA08u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DA10u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DA28u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DA30u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DA48u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DA50u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DA68u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DA70u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DA88u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DA90u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DAA8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DAB0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DAC8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DAD0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DAE4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DAF0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DB14u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DB2Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DB44u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DB48u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DB50u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DB68u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DB70u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DB88u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DB90u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DBA8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DBB0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DBC8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DBD0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DBE8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DBF0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DC08u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DC10u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DC28u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DC30u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DC48u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DC50u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DC68u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DC70u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DC84u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DC90u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DCB4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DCCCu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DCE4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DCE8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DCF0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DD08u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DD10u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DD28u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DD30u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DD48u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DD50u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DD68u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DD70u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DD88u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DD90u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DDA8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DDB0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DDC8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DDD0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DDE8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DDF0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DE08u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DE10u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DE24u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DE30u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DE54u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DE6Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DE84u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DE88u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DE90u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DEA8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DEB0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DEC8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DED0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DEE8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DEF0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DF08u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DF10u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DF28u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DF30u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DF48u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DF50u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DF68u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DF70u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DF88u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DF90u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DFA8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DFB0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DFC4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DFD0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DFF4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E00Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E024u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E028u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E030u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E048u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E050u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E068u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E070u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E088u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E090u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E0A8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E0B0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E0C8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E0D0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E0E8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E0F0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E108u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E110u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E128u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E130u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E148u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E150u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E164u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E170u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E194u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E1ACu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E1C4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E1C8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E1D0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E1E8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E1F0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E208u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E210u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E228u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E230u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E248u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E250u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E268u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E270u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E288u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E290u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E2A8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E2B0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E2C8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E2D0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E2E8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E2F0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E304u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E310u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E330u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E33Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E344u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E34Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E364u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E368u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E370u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E388u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E390u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E3A8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E3B0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E3C8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E3D0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E3E0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E3ECu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E40Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E418u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E420u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E428u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E440u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E444u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E44Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E464u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E46Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E484u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E48Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E4A4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E4ACu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E4BCu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E4C8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E4F0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E4FCu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E514u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E520u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E52Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E534u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E54Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E560u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E568u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E57Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E584u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E598u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E5A0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E5B4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E5BCu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E5D0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E5D8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E5ECu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E5F4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E608u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E610u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E624u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E62Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E640u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E648u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E65Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E664u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E678u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E680u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E694u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E69Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E6B0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E6B8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E6CCu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E6D4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E6E8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E6F0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E704u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E70Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E720u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E728u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E73Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E744u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E758u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E760u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E774u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E77Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E790u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E798u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E7ACu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E7B4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E7C8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E7D0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E7E4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E7ECu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E800u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E808u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E81Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E824u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E838u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E840u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E854u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E85Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E870u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E878u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E88Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E894u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E8A8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E8B0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E8C4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E8CCu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E8E0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E8E8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E8FCu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E904u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E918u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E920u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E934u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E93Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E950u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E958u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E96Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E974u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E988u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E990u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E9A4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E9ACu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E9C0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E9C8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E9DCu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E9E4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E9F8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EA00u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EA14u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EA1Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EA30u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EA38u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EA4Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EA54u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EA68u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EA70u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EA84u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EA8Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EAA0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EAA8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EABCu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EAC4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EAD8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EAE0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EAF4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EAFCu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EB10u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EB18u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EB2Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EB34u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EB48u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EB50u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EB64u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EB6Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EB80u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EB88u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EB9Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EBA4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EBB8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EBC0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EBD4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EBDCu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EBF0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EBF8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EC0Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EC14u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EC28u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EC30u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EC44u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EC4Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EC60u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EC68u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EC7Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EC84u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EC98u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885ECA0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885ECB4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885ECBCu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885ECD0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885ECD8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885ECECu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885ECF4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885ED08u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885ED10u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885ED24u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885ED2Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885ED40u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885ED48u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885ED5Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885ED64u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885ED78u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885ED80u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885ED94u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885ED9Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EDB0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EDB8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EDCCu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EDD4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EDE8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EDF0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EE04u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EE0Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EE20u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EE28u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EE3Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EE44u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EE58u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EE60u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EE74u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EE7Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EE90u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EE98u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EEACu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EEB4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EEC8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EED0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EEE4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EEECu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EF00u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EF08u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EF1Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EF24u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EF38u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EF40u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EF54u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EF5Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EF70u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EF78u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EF8Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EF94u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EFA8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EFB0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EFC4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EFCCu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EFE0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EFE8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EFFCu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F004u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F018u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F020u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F034u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F03Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F050u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F058u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F06Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F074u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F088u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F090u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F0A4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F0ACu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F0C0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F0C8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F0DCu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F0E4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F0F8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F100u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F114u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F11Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F130u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F138u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F14Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F154u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F168u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F170u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F184u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F18Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F1A0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F1A8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F1BCu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F1C4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F1D8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F1E0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F1F4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F1FCu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F210u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F218u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F22Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F234u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F248u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F250u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F264u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F26Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F280u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F288u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F29Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F2A4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F2B8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F2C0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F2D4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F2DCu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F2F0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F2F8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F30Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F314u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F328u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F334u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F344u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F354u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F370u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F37Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F388u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F390u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F398u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F3A0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F3A8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F3C0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F3C8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F3D4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F3DCu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F3E0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F3F4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F410u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F418u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F430u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F464u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F468u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F47Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F484u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F4A4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F4ACu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F4B8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F4D0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F4DCu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F4F4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F500u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F50Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F514u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F518u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F530u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F53Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F550u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F574u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F57Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F584u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F58Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F594u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F5A4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F5B8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F5D8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F5E4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F5ECu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F5F4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F5FCu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F600u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F608u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F614u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F618u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F62Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F634u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F658u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F668u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F684u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F690u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F6B0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F6C0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F6C8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F6D8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F6E8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F70Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F714u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F728u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F734u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F73Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F748u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F74Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F764u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F780u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F78Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F798u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F7ACu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F7C4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F7E4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F800u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F818u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F828u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F840u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F854u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F8C8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F93Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F9B0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F9CCu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F9D8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F9F4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885FA00u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885FA1Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885FA28u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885FB5Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885FC3Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885FD1Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885FDFCu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885FE1Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885FE2Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885FE3Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885FE44u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885FE48u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885FE50u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885FE8Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885FEC8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885FF14u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885FF20u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885FF40u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885FF48u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885FF78u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885FF98u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885FFB4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885FFE4u, &recomp_unit_0022, "recomp_unit_0022");
}
} // namespace psprecomp
