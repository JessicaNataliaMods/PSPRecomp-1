#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include "vcs_resident_regions.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
// PSPRECOMP_V811_COMPACT_DISPATCH: 64-slot occupancy masks + per-group base id.
static constexpr std::uint64_t kEntryMasks_recomp_unit_0078[64] = {
    0xA081000424902089ull, 0x8150901008221124ull, 0x0864095102220210ull, 0x4A54291200100204ull,
    0x8114294A10010115ull, 0xA511480010292900ull, 0x91044AA88A224844ull, 0x1052125151200402ull,
    0x1151252A9520A440ull, 0xA2A2415240102929ull, 0x92D524250AA2A2A2ull, 0x0002D55555415504ull,
    0x0A088A1565114510ull, 0x4C042A00B4112200ull, 0x442924001120A514ull, 0x2022344411092444ull,
    0x1114425000212510ull, 0x44445124A4100622ull, 0x0512150801001228ull, 0x8505251200010882ull,
    0x54A52220010052A9ull, 0x8440010105049084ull, 0x5001010412112855ull, 0x0085240828452A91ull,
    0x01098AA452491440ull, 0x8504000110491101ull, 0x0224910021215294ull, 0x410A220082441202ull,
    0x41949200A2124540ull, 0x4010224145128010ull, 0xAAAAA54A52855290ull, 0x0000404455440086ull,
    0xA5255244A4924402ull, 0x0001000040090AA4ull, 0x8000000030000014ull, 0x69A6800000402050ull,
    0x0C08D5929685141Aull, 0x24800224200C241Aull, 0xA12092402200002Dull, 0x0008030080004820ull,
    0x0024004004251500ull, 0x0A12912940901012ull, 0xC152040810000010ull, 0x0844829294084414ull,
    0x1430000408006408ull, 0x0010008814840314ull, 0x5200000801000940ull, 0x40056425020081A8ull,
    0x022A000100001100ull, 0x0020200020006000ull, 0x0034250800000000ull, 0x2490000854000020ull,
    0x4282A824400450A1ull, 0x00200A0800006992ull, 0x0A28002181294080ull, 0x8000000411890285ull,
    0x0140000101108024ull, 0x40A1201048025A00ull, 0x020020021148108Aull, 0x0040045000000510ull,
    0x0041002200800500ull, 0x0000040000020000ull, 0x010A284904314002ull, 0x0000000008108010ull,
};
static constexpr std::uint16_t kEntryBases_recomp_unit_0078[64] = {
    1u, 14u, 28u, 42u, 56u, 72u, 87u, 106u, 121u, 141u, 160u, 184u, 205u, 224u, 239u, 255u,
    271u, 285u, 302u, 315u, 329u, 347u, 359u, 374u, 391u, 409u, 421u, 437u, 450u, 467u, 480u, 506u,
    518u, 539u, 548u, 553u, 566u, 589u, 603u, 617u, 624u, 634u, 650u, 660u, 676u, 686u, 697u, 705u,
    720u, 727u, 732u, 739u, 748u, 764u, 775u, 788u, 799u, 807u, 820u, 831u, 838u, 845u, 847u, 861u,
};
void recomp_unit_0078_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
// PSPRECOMP_AOT_REGCACHE_BEGIN
// PSPRECOMP_AOT_REGCACHE_META gprs=4,5,29,31,16,17 fprs=12,13,20,14 gpr_occ=4338 fpr_occ=200 gpr_total=6115 fpr_total=233
    std::uint32_t aot_gpr_4 = ctx.gpr[4];
    std::uint32_t aot_gpr_5 = ctx.gpr[5];
    std::uint32_t aot_gpr_29 = ctx.gpr[29];
    std::uint32_t aot_gpr_31 = ctx.gpr[31];
    std::uint32_t aot_gpr_16 = ctx.gpr[16];
    std::uint32_t aot_gpr_17 = ctx.gpr[17];
    float aot_fpr_12 = ctx.fpr[12];
    float aot_fpr_13 = ctx.fpr[13];
    float aot_fpr_20 = ctx.fpr[20];
    float aot_fpr_14 = ctx.fpr[14];
    bool aot_regcache_valid = true;
#define AOT_REGCACHE_SYNC_OUT() do { if (aot_regcache_valid) { ctx.gpr[4] = aot_gpr_4; ctx.gpr[5] = aot_gpr_5; ctx.gpr[29] = aot_gpr_29; ctx.gpr[31] = aot_gpr_31; ctx.gpr[16] = aot_gpr_16; ctx.gpr[17] = aot_gpr_17; ctx.fpr[12] = aot_fpr_12; ctx.fpr[13] = aot_fpr_13; ctx.fpr[20] = aot_fpr_20; ctx.fpr[14] = aot_fpr_14; } } while (false)
#define AOT_REGCACHE_SYNC_IN() do { if (aot_regcache_valid) { aot_gpr_4 = ctx.gpr[4]; aot_gpr_5 = ctx.gpr[5]; aot_gpr_29 = ctx.gpr[29]; aot_gpr_31 = ctx.gpr[31]; aot_gpr_16 = ctx.gpr[16]; aot_gpr_17 = ctx.gpr[17]; aot_fpr_12 = ctx.fpr[12]; aot_fpr_13 = ctx.fpr[13]; aot_fpr_20 = ctx.fpr[20]; aot_fpr_14 = ctx.fpr[14]; } } while (false)
// PSPRECOMP_AOT_REGCACHE_END
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_redispatch_rounds = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x0893C004u;
        entry_id = 0u;
        if (entry_delta < 16240u && (entry_delta & 3u) == 0u) {
            const std::uint32_t entry_slot = entry_delta >> 2u;
            const std::uint32_t entry_group = entry_slot >> 6u;
            const std::uint64_t entry_mask = kEntryMasks_recomp_unit_0078[entry_group];
            const std::uint64_t entry_bit = 1ull << (entry_slot & 63u);
            if ((entry_mask & entry_bit) != 0u) {
                entry_id = static_cast<std::uint16_t>(
                    kEntryBases_recomp_unit_0078[entry_group] +
                    std::popcount(entry_mask & (entry_bit - 1ull)));
            }
        }
    }
    switch (entry_id) {
    case 1u: goto L_0893C004;
    case 2u: goto L_0893C010;
    case 3u: goto L_0893C020;
    case 4u: goto L_0893C038;
    case 5u: goto L_0893C054;
    case 6u: goto L_0893C060;
    case 7u: goto L_0893C06C;
    case 8u: goto L_0893C078;
    case 9u: goto L_0893C08C;
    case 10u: goto L_0893C0C4;
    case 11u: goto L_0893C0E0;
    case 12u: goto L_0893C0F8;
    case 13u: goto L_0893C100;
    case 14u: goto L_0893C10C;
    case 15u: goto L_0893C118;
    case 16u: goto L_0893C124;
    case 17u: goto L_0893C134;
    case 18u: goto L_0893C148;
    case 19u: goto L_0893C158;
    case 20u: goto L_0893C170;
    case 21u: goto L_0893C194;
    case 22u: goto L_0893C1B4;
    case 23u: goto L_0893C1C0;
    case 24u: goto L_0893C1D4;
    case 25u: goto L_0893C1DC;
    case 26u: goto L_0893C1E4;
    case 27u: goto L_0893C200;
    case 28u: goto L_0893C214;
    case 29u: goto L_0893C228;
    case 30u: goto L_0893C248;
    case 31u: goto L_0893C258;
    case 32u: goto L_0893C268;
    case 33u: goto L_0893C284;
    case 34u: goto L_0893C294;
    case 35u: goto L_0893C29C;
    case 36u: goto L_0893C2A4;
    case 37u: goto L_0893C2B0;
    case 38u: goto L_0893C2CC;
    case 39u: goto L_0893C2D8;
    case 40u: goto L_0893C2DC;
    case 41u: goto L_0893C2F0;
    case 42u: goto L_0893C30C;
    case 43u: goto L_0893C328;
    case 44u: goto L_0893C354;
    case 45u: goto L_0893C388;
    case 46u: goto L_0893C394;
    case 47u: goto L_0893C3A4;
    case 48u: goto L_0893C3B0;
    case 49u: goto L_0893C3B8;
    case 50u: goto L_0893C3CC;
    case 51u: goto L_0893C3D4;
    case 52u: goto L_0893C3DC;
    case 53u: goto L_0893C3E8;
    case 54u: goto L_0893C3F0;
    case 55u: goto L_0893C3FC;
    case 56u: goto L_0893C404;
    case 57u: goto L_0893C40C;
    case 58u: goto L_0893C414;
    case 59u: goto L_0893C424;
    case 60u: goto L_0893C444;
    case 61u: goto L_0893C474;
    case 62u: goto L_0893C488;
    case 63u: goto L_0893C490;
    case 64u: goto L_0893C49C;
    case 65u: goto L_0893C4A4;
    case 66u: goto L_0893C4B0;
    case 67u: goto L_0893C4B8;
    case 68u: goto L_0893C4CC;
    case 69u: goto L_0893C4D4;
    case 70u: goto L_0893C4E4;
    case 71u: goto L_0893C500;
    case 72u: goto L_0893C524;
    case 73u: goto L_0893C530;
    case 74u: goto L_0893C538;
    case 75u: goto L_0893C544;
    case 76u: goto L_0893C550;
    case 77u: goto L_0893C558;
    case 78u: goto L_0893C574;
    case 79u: goto L_0893C5B0;
    case 80u: goto L_0893C5BC;
    case 81u: goto L_0893C5C4;
    case 82u: goto L_0893C5D4;
    case 83u: goto L_0893C5E4;
    case 84u: goto L_0893C5EC;
    case 85u: goto L_0893C5F8;
    case 86u: goto L_0893C600;
    case 87u: goto L_0893C60C;
    case 88u: goto L_0893C61C;
    case 89u: goto L_0893C630;
    case 90u: goto L_0893C63C;
    case 91u: goto L_0893C648;
    case 92u: goto L_0893C658;
    case 93u: goto L_0893C668;
    case 94u: goto L_0893C670;
    case 95u: goto L_0893C680;
    case 96u: goto L_0893C690;
    case 97u: goto L_0893C698;
    case 98u: goto L_0893C6A0;
    case 99u: goto L_0893C6A8;
    case 100u: goto L_0893C6B0;
    case 101u: goto L_0893C6BC;
    case 102u: goto L_0893C6CC;
    case 103u: goto L_0893C6E4;
    case 104u: goto L_0893C6F4;
    case 105u: goto L_0893C700;
    case 106u: goto L_0893C708;
    case 107u: goto L_0893C72C;
    case 108u: goto L_0893C758;
    case 109u: goto L_0893C764;
    case 110u: goto L_0893C774;
    case 111u: goto L_0893C77C;
    case 112u: goto L_0893C784;
    case 113u: goto L_0893C794;
    case 114u: goto L_0893C79C;
    case 115u: goto L_0893C7A8;
    case 116u: goto L_0893C7B4;
    case 117u: goto L_0893C7C8;
    case 118u: goto L_0893C7D4;
    case 119u: goto L_0893C7DC;
    case 120u: goto L_0893C7F4;
    case 121u: goto L_0893C81C;
    case 122u: goto L_0893C82C;
    case 123u: goto L_0893C838;
    case 124u: goto L_0893C840;
    case 125u: goto L_0893C858;
    case 126u: goto L_0893C864;
    case 127u: goto L_0893C86C;
    case 128u: goto L_0893C874;
    case 129u: goto L_0893C880;
    case 130u: goto L_0893C888;
    case 131u: goto L_0893C890;
    case 132u: goto L_0893C898;
    case 133u: goto L_0893C8A4;
    case 134u: goto L_0893C8AC;
    case 135u: goto L_0893C8B8;
    case 136u: goto L_0893C8C4;
    case 137u: goto L_0893C8D4;
    case 138u: goto L_0893C8DC;
    case 139u: goto L_0893C8E4;
    case 140u: goto L_0893C8F4;
    case 141u: goto L_0893C904;
    case 142u: goto L_0893C910;
    case 143u: goto L_0893C918;
    case 144u: goto L_0893C924;
    case 145u: goto L_0893C930;
    case 146u: goto L_0893C938;
    case 147u: goto L_0893C954;
    case 148u: goto L_0893C97C;
    case 149u: goto L_0893C988;
    case 150u: goto L_0893C994;
    case 151u: goto L_0893C99C;
    case 152u: goto L_0893C9A4;
    case 153u: goto L_0893C9BC;
    case 154u: goto L_0893C9C8;
    case 155u: goto L_0893C9D8;
    case 156u: goto L_0893C9E0;
    case 157u: goto L_0893C9E8;
    case 158u: goto L_0893C9F8;
    case 159u: goto L_0893CA00;
    case 160u: goto L_0893CA08;
    case 161u: goto L_0893CA18;
    case 162u: goto L_0893CA20;
    case 163u: goto L_0893CA28;
    case 164u: goto L_0893CA38;
    case 165u: goto L_0893CA40;
    case 166u: goto L_0893CA48;
    case 167u: goto L_0893CA58;
    case 168u: goto L_0893CA60;
    case 169u: goto L_0893CA68;
    case 170u: goto L_0893CA70;
    case 171u: goto L_0893CA84;
    case 172u: goto L_0893CA8C;
    case 173u: goto L_0893CA98;
    case 174u: goto L_0893CAAC;
    case 175u: goto L_0893CAB8;
    case 176u: goto L_0893CAC4;
    case 177u: goto L_0893CACC;
    case 178u: goto L_0893CAD4;
    case 179u: goto L_0893CADC;
    case 180u: goto L_0893CAE0;
    case 181u: goto L_0893CAE8;
    case 182u: goto L_0893CAF4;
    case 183u: goto L_0893CB00;
    case 184u: goto L_0893CB0C;
    case 185u: goto L_0893CB24;
    case 186u: goto L_0893CB2C;
    case 187u: goto L_0893CB34;
    case 188u: goto L_0893CB3C;
    case 189u: goto L_0893CB44;
    case 190u: goto L_0893CB5C;
    case 191u: goto L_0893CB64;
    case 192u: goto L_0893CB6C;
    case 193u: goto L_0893CB74;
    case 194u: goto L_0893CB7C;
    case 195u: goto L_0893CB84;
    case 196u: goto L_0893CB8C;
    case 197u: goto L_0893CB94;
    case 198u: goto L_0893CB9C;
    case 199u: goto L_0893CBA4;
    case 200u: goto L_0893CBAC;
    case 201u: goto L_0893CBB4;
    case 202u: goto L_0893CBBC;
    case 203u: goto L_0893CBC0;
    case 204u: goto L_0893CBC8;
    case 205u: goto L_0893CC14;
    case 206u: goto L_0893CC24;
    case 207u: goto L_0893CC2C;
    case 208u: goto L_0893CC3C;
    case 209u: goto L_0893CC44;
    case 210u: goto L_0893CC54;
    case 211u: goto L_0893CC64;
    case 212u: goto L_0893CC6C;
    case 213u: goto L_0893CC78;
    case 214u: goto L_0893CC7C;
    case 215u: goto L_0893CC84;
    case 216u: goto L_0893CC8C;
    case 217u: goto L_0893CC94;
    case 218u: goto L_0893CCA8;
    case 219u: goto L_0893CCB0;
    case 220u: goto L_0893CCC0;
    case 221u: goto L_0893CCD0;
    case 222u: goto L_0893CCE8;
    case 223u: goto L_0893CCF0;
    case 224u: goto L_0893CD28;
    case 225u: goto L_0893CD38;
    case 226u: goto L_0893CD44;
    case 227u: goto L_0893CD54;
    case 228u: goto L_0893CD6C;
    case 229u: goto L_0893CD74;
    case 230u: goto L_0893CD78;
    case 231u: goto L_0893CD80;
    case 232u: goto L_0893CDA8;
    case 233u: goto L_0893CDB0;
    case 234u: goto L_0893CDB8;
    case 235u: goto L_0893CDCC;
    case 236u: goto L_0893CDEC;
    case 237u: goto L_0893CDF0;
    case 238u: goto L_0893CDFC;
    case 239u: goto L_0893CE0C;
    case 240u: goto L_0893CE14;
    case 241u: goto L_0893CE24;
    case 242u: goto L_0893CE2C;
    case 243u: goto L_0893CE38;
    case 244u: goto L_0893CE40;
    case 245u: goto L_0893CE58;
    case 246u: goto L_0893CE64;
    case 247u: goto L_0893CE74;
    case 248u: goto L_0893CEAC;
    case 249u: goto L_0893CEB8;
    case 250u: goto L_0893CEC4;
    case 251u: goto L_0893CED0;
    case 252u: goto L_0893CED8;
    case 253u: goto L_0893CEEC;
    case 254u: goto L_0893CEFC;
    case 255u: goto L_0893CF0C;
    case 256u: goto L_0893CF1C;
    case 257u: goto L_0893CF2C;
    case 258u: goto L_0893CF38;
    case 259u: goto L_0893CF44;
    case 260u: goto L_0893CF50;
    case 261u: goto L_0893CF64;
    case 262u: goto L_0893CF74;
    case 263u: goto L_0893CF8C;
    case 264u: goto L_0893CF9C;
    case 265u: goto L_0893CFAC;
    case 266u: goto L_0893CFB4;
    case 267u: goto L_0893CFB8;
    case 268u: goto L_0893CFC8;
    case 269u: goto L_0893CFD8;
    case 270u: goto L_0893CFF8;
    case 271u: goto L_0893D014;
    case 272u: goto L_0893D024;
    case 273u: goto L_0893D02C;
    case 274u: goto L_0893D038;
    case 275u: goto L_0893D044;
    case 276u: goto L_0893D058;
    case 277u: goto L_0893D094;
    case 278u: goto L_0893D09C;
    case 279u: goto L_0893D0A8;
    case 280u: goto L_0893D0BC;
    case 281u: goto L_0893D0CC;
    case 282u: goto L_0893D0D4;
    case 283u: goto L_0893D0E4;
    case 284u: goto L_0893D0F4;
    case 285u: goto L_0893D108;
    case 286u: goto L_0893D118;
    case 287u: goto L_0893D128;
    case 288u: goto L_0893D12C;
    case 289u: goto L_0893D154;
    case 290u: goto L_0893D16C;
    case 291u: goto L_0893D178;
    case 292u: goto L_0893D180;
    case 293u: goto L_0893D18C;
    case 294u: goto L_0893D198;
    case 295u: goto L_0893D1A4;
    case 296u: goto L_0893D1B4;
    case 297u: goto L_0893D1BC;
    case 298u: goto L_0893D1CC;
    case 299u: goto L_0893D1DC;
    case 300u: goto L_0893D1EC;
    case 301u: goto L_0893D1FC;
    case 302u: goto L_0893D210;
    case 303u: goto L_0893D218;
    case 304u: goto L_0893D228;
    case 305u: goto L_0893D234;
    case 306u: goto L_0893D264;
    case 307u: goto L_0893D290;
    case 308u: goto L_0893D2A4;
    case 309u: goto L_0893D2AC;
    case 310u: goto L_0893D2B4;
    case 311u: goto L_0893D2C8;
    case 312u: goto L_0893D2D4;
    case 313u: goto L_0893D2E4;
    case 314u: goto L_0893D2EC;
    case 315u: goto L_0893D308;
    case 316u: goto L_0893D320;
    case 317u: goto L_0893D330;
    case 318u: goto L_0893D344;
    case 319u: goto L_0893D388;
    case 320u: goto L_0893D394;
    case 321u: goto L_0893D3A4;
    case 322u: goto L_0893D3AC;
    case 323u: goto L_0893D3B8;
    case 324u: goto L_0893D3C4;
    case 325u: goto L_0893D3CC;
    case 326u: goto L_0893D3E4;
    case 327u: goto L_0893D3EC;
    case 328u: goto L_0893D400;
    case 329u: goto L_0893D404;
    case 330u: goto L_0893D410;
    case 331u: goto L_0893D418;
    case 332u: goto L_0893D420;
    case 333u: goto L_0893D428;
    case 334u: goto L_0893D434;
    case 335u: goto L_0893D43C;
    case 336u: goto L_0893D464;
    case 337u: goto L_0893D498;
    case 338u: goto L_0893D4A8;
    case 339u: goto L_0893D4B8;
    case 340u: goto L_0893D4C4;
    case 341u: goto L_0893D4CC;
    case 342u: goto L_0893D4D8;
    case 343u: goto L_0893D4E0;
    case 344u: goto L_0893D4EC;
    case 345u: goto L_0893D4F4;
    case 346u: goto L_0893D4FC;
    case 347u: goto L_0893D50C;
    case 348u: goto L_0893D520;
    case 349u: goto L_0893D534;
    case 350u: goto L_0893D540;
    case 351u: goto L_0893D54C;
    case 352u: goto L_0893D564;
    case 353u: goto L_0893D56C;
    case 354u: goto L_0893D584;
    case 355u: goto L_0893D5A4;
    case 356u: goto L_0893D5DC;
    case 357u: goto L_0893D5EC;
    case 358u: goto L_0893D600;
    case 359u: goto L_0893D604;
    case 360u: goto L_0893D60C;
    case 361u: goto L_0893D614;
    case 362u: goto L_0893D61C;
    case 363u: goto L_0893D630;
    case 364u: goto L_0893D638;
    case 365u: goto L_0893D644;
    case 366u: goto L_0893D654;
    case 367u: goto L_0893D668;
    case 368u: goto L_0893D674;
    case 369u: goto L_0893D68C;
    case 370u: goto L_0893D6A4;
    case 371u: goto L_0893D6C4;
    case 372u: goto L_0893D6F4;
    case 373u: goto L_0893D6FC;
    case 374u: goto L_0893D704;
    case 375u: goto L_0893D714;
    case 376u: goto L_0893D720;
    case 377u: goto L_0893D728;
    case 378u: goto L_0893D730;
    case 379u: goto L_0893D738;
    case 380u: goto L_0893D744;
    case 381u: goto L_0893D74C;
    case 382u: goto L_0893D75C;
    case 383u: goto L_0893D770;
    case 384u: goto L_0893D778;
    case 385u: goto L_0893D790;
    case 386u: goto L_0893D7AC;
    case 387u: goto L_0893D7B8;
    case 388u: goto L_0893D7C4;
    case 389u: goto L_0893D7CC;
    case 390u: goto L_0893D7E0;
    case 391u: goto L_0893D81C;
    case 392u: goto L_0893D82C;
    case 393u: goto L_0893D834;
    case 394u: goto L_0893D844;
    case 395u: goto L_0893D850;
    case 396u: goto L_0893D85C;
    case 397u: goto L_0893D868;
    case 398u: goto L_0893D874;
    case 399u: goto L_0893D87C;
    case 400u: goto L_0893D88C;
    case 401u: goto L_0893D898;
    case 402u: goto L_0893D8A0;
    case 403u: goto L_0893D8A8;
    case 404u: goto L_0893D8B0;
    case 405u: goto L_0893D8C0;
    case 406u: goto L_0893D8C4;
    case 407u: goto L_0893D8D0;
    case 408u: goto L_0893D8E4;
    case 409u: goto L_0893D904;
    case 410u: goto L_0893D924;
    case 411u: goto L_0893D934;
    case 412u: goto L_0893D944;
    case 413u: goto L_0893D950;
    case 414u: goto L_0893D95C;
    case 415u: goto L_0893D974;
    case 416u: goto L_0893D984;
    case 417u: goto L_0893D9CC;
    case 418u: goto L_0893D9E4;
    case 419u: goto L_0893D9EC;
    case 420u: goto L_0893DA00;
    case 421u: goto L_0893DA0C;
    case 422u: goto L_0893DA14;
    case 423u: goto L_0893DA20;
    case 424u: goto L_0893DA28;
    case 425u: goto L_0893DA34;
    case 426u: goto L_0893DA3C;
    case 427u: goto L_0893DA44;
    case 428u: goto L_0893DA58;
    case 429u: goto L_0893DA64;
    case 430u: goto L_0893DA78;
    case 431u: goto L_0893DAA4;
    case 432u: goto L_0893DAB4;
    case 433u: goto L_0893DAC0;
    case 434u: goto L_0893DACC;
    case 435u: goto L_0893DAD8;
    case 436u: goto L_0893DAE8;
    case 437u: goto L_0893DB08;
    case 438u: goto L_0893DB28;
    case 439u: goto L_0893DB34;
    case 440u: goto L_0893DB4C;
    case 441u: goto L_0893DB5C;
    case 442u: goto L_0893DB68;
    case 443u: goto L_0893DB80;
    case 444u: goto L_0893DBA8;
    case 445u: goto L_0893DBB8;
    case 446u: goto L_0893DBC8;
    case 447u: goto L_0893DBD0;
    case 448u: goto L_0893DBE4;
    case 449u: goto L_0893DBFC;
    case 450u: goto L_0893DC1C;
    case 451u: goto L_0893DC24;
    case 452u: goto L_0893DC2C;
    case 453u: goto L_0893DC3C;
    case 454u: goto L_0893DC48;
    case 455u: goto L_0893DC54;
    case 456u: goto L_0893DC68;
    case 457u: goto L_0893DC78;
    case 458u: goto L_0893DC80;
    case 459u: goto L_0893DCA8;
    case 460u: goto L_0893DCB4;
    case 461u: goto L_0893DCC0;
    case 462u: goto L_0893DCCC;
    case 463u: goto L_0893DCD4;
    case 464u: goto L_0893DCE0;
    case 465u: goto L_0893DCE4;
    case 466u: goto L_0893DCFC;
    case 467u: goto L_0893DD14;
    case 468u: goto L_0893DD40;
    case 469u: goto L_0893DD48;
    case 470u: goto L_0893DD54;
    case 471u: goto L_0893DD64;
    case 472u: goto L_0893DD6C;
    case 473u: goto L_0893DD7C;
    case 474u: goto L_0893DD84;
    case 475u: goto L_0893DD9C;
    case 476u: goto L_0893DDA8;
    case 477u: goto L_0893DDB8;
    case 478u: goto L_0893DDD4;
    case 479u: goto L_0893DDFC;
    case 480u: goto L_0893DE14;
    case 481u: goto L_0893DE20;
    case 482u: goto L_0893DE28;
    case 483u: goto L_0893DE34;
    case 484u: goto L_0893DE3C;
    case 485u: goto L_0893DE44;
    case 486u: goto L_0893DE4C;
    case 487u: goto L_0893DE60;
    case 488u: goto L_0893DE68;
    case 489u: goto L_0893DE74;
    case 490u: goto L_0893DE7C;
    case 491u: goto L_0893DE88;
    case 492u: goto L_0893DE90;
    case 493u: goto L_0893DE9C;
    case 494u: goto L_0893DEA4;
    case 495u: goto L_0893DEAC;
    case 496u: goto L_0893DEB8;
    case 497u: goto L_0893DEC0;
    case 498u: goto L_0893DEC8;
    case 499u: goto L_0893DED0;
    case 500u: goto L_0893DED8;
    case 501u: goto L_0893DEE0;
    case 502u: goto L_0893DEE8;
    case 503u: goto L_0893DEF0;
    case 504u: goto L_0893DEF8;
    case 505u: goto L_0893DF00;
    case 506u: goto L_0893DF08;
    case 507u: goto L_0893DF0C;
    case 508u: goto L_0893DF20;
    case 509u: goto L_0893DF4C;
    case 510u: goto L_0893DF5C;
    case 511u: goto L_0893DF64;
    case 512u: goto L_0893DF6C;
    case 513u: goto L_0893DF74;
    case 514u: goto L_0893DF7C;
    case 515u: goto L_0893DF8C;
    case 516u: goto L_0893DF9C;
    case 517u: goto L_0893DFBC;
    case 518u: goto L_0893E008;
    case 519u: goto L_0893E02C;
    case 520u: goto L_0893E03C;
    case 521u: goto L_0893E048;
    case 522u: goto L_0893E054;
    case 523u: goto L_0893E060;
    case 524u: goto L_0893E06C;
    case 525u: goto L_0893E078;
    case 526u: goto L_0893E080;
    case 527u: goto L_0893E08C;
    case 528u: goto L_0893E09C;
    case 529u: goto L_0893E0A8;
    case 530u: goto L_0893E0B4;
    case 531u: goto L_0893E0BC;
    case 532u: goto L_0893E0C4;
    case 533u: goto L_0893E0CC;
    case 534u: goto L_0893E0D8;
    case 535u: goto L_0893E0E4;
    case 536u: goto L_0893E0EC;
    case 537u: goto L_0893E0F8;
    case 538u: goto L_0893E100;
    case 539u: goto L_0893E10C;
    case 540u: goto L_0893E118;
    case 541u: goto L_0893E120;
    case 542u: goto L_0893E128;
    case 543u: goto L_0893E130;
    case 544u: goto L_0893E144;
    case 545u: goto L_0893E150;
    case 546u: goto L_0893E17C;
    case 547u: goto L_0893E1C4;
    case 548u: goto L_0893E20C;
    case 549u: goto L_0893E214;
    case 550u: goto L_0893E274;
    case 551u: goto L_0893E278;
    case 552u: goto L_0893E300;
    case 553u: goto L_0893E314;
    case 554u: goto L_0893E31C;
    case 555u: goto L_0893E338;
    case 556u: goto L_0893E35C;
    case 557u: goto L_0893E3C0;
    case 558u: goto L_0893E3C8;
    case 559u: goto L_0893E3CC;
    case 560u: goto L_0893E3D8;
    case 561u: goto L_0893E3E0;
    case 562u: goto L_0893E3E4;
    case 563u: goto L_0893E3F0;
    case 564u: goto L_0893E3F8;
    case 565u: goto L_0893E3FC;
    case 566u: goto L_0893E408;
    case 567u: goto L_0893E410;
    case 568u: goto L_0893E414;
    case 569u: goto L_0893E42C;
    case 570u: goto L_0893E434;
    case 571u: goto L_0893E444;
    case 572u: goto L_0893E44C;
    case 573u: goto L_0893E460;
    case 574u: goto L_0893E468;
    case 575u: goto L_0893E46C;
    case 576u: goto L_0893E474;
    case 577u: goto L_0893E480;
    case 578u: goto L_0893E488;
    case 579u: goto L_0893E494;
    case 580u: goto L_0893E4A0;
    case 581u: goto L_0893E4A4;
    case 582u: goto L_0893E4AC;
    case 583u: goto L_0893E4B4;
    case 584u: goto L_0893E4BC;
    case 585u: goto L_0893E4C0;
    case 586u: goto L_0893E4D0;
    case 587u: goto L_0893E4EC;
    case 588u: goto L_0893E4F0;
    case 589u: goto L_0893E508;
    case 590u: goto L_0893E510;
    case 591u: goto L_0893E514;
    case 592u: goto L_0893E52C;
    case 593u: goto L_0893E538;
    case 594u: goto L_0893E54C;
    case 595u: goto L_0893E550;
    case 596u: goto L_0893E578;
    case 597u: goto L_0893E58C;
    case 598u: goto L_0893E598;
    case 599u: goto L_0893E5A8;
    case 600u: goto L_0893E5E0;
    case 601u: goto L_0893E5EC;
    case 602u: goto L_0893E5F8;
    case 603u: goto L_0893E604;
    case 604u: goto L_0893E60C;
    case 605u: goto L_0893E610;
    case 606u: goto L_0893E618;
    case 607u: goto L_0893E668;
    case 608u: goto L_0893E678;
    case 609u: goto L_0893E69C;
    case 610u: goto L_0893E6A8;
    case 611u: goto L_0893E6B4;
    case 612u: goto L_0893E6C0;
    case 613u: goto L_0893E6D8;
    case 614u: goto L_0893E6E4;
    case 615u: goto L_0893E6F8;
    case 616u: goto L_0893E700;
    case 617u: goto L_0893E718;
    case 618u: goto L_0893E730;
    case 619u: goto L_0893E73C;
    case 620u: goto L_0893E780;
    case 621u: goto L_0893E7A4;
    case 622u: goto L_0893E7A8;
    case 623u: goto L_0893E7D0;
    case 624u: goto L_0893E824;
    case 625u: goto L_0893E82C;
    case 626u: goto L_0893E834;
    case 627u: goto L_0893E844;
    case 628u: goto L_0893E84C;
    case 629u: goto L_0893E858;
    case 630u: goto L_0893E86C;
    case 631u: goto L_0893E89C;
    case 632u: goto L_0893E8CC;
    case 633u: goto L_0893E8D8;
    case 634u: goto L_0893E908;
    case 635u: goto L_0893E914;
    case 636u: goto L_0893E934;
    case 637u: goto L_0893E954;
    case 638u: goto L_0893E960;
    case 639u: goto L_0893E97C;
    case 640u: goto L_0893E984;
    case 641u: goto L_0893E990;
    case 642u: goto L_0893E998;
    case 643u: goto L_0893E9A4;
    case 644u: goto L_0893E9B4;
    case 645u: goto L_0893E9C0;
    case 646u: goto L_0893E9C8;
    case 647u: goto L_0893E9D4;
    case 648u: goto L_0893E9E8;
    case 649u: goto L_0893E9F0;
    case 650u: goto L_0893EA14;
    case 651u: goto L_0893EA74;
    case 652u: goto L_0893EA90;
    case 653u: goto L_0893EAAC;
    case 654u: goto L_0893EAC8;
    case 655u: goto L_0893EAD4;
    case 656u: goto L_0893EADC;
    case 657u: goto L_0893EAE4;
    case 658u: goto L_0893EAFC;
    case 659u: goto L_0893EB00;
    case 660u: goto L_0893EB0C;
    case 661u: goto L_0893EB14;
    case 662u: goto L_0893EB2C;
    case 663u: goto L_0893EB3C;
    case 664u: goto L_0893EB50;
    case 665u: goto L_0893EB6C;
    case 666u: goto L_0893EB74;
    case 667u: goto L_0893EB80;
    case 668u: goto L_0893EB88;
    case 669u: goto L_0893EB94;
    case 670u: goto L_0893EBA0;
    case 671u: goto L_0893EBA8;
    case 672u: goto L_0893EBC0;
    case 673u: goto L_0893EBCC;
    case 674u: goto L_0893EBDC;
    case 675u: goto L_0893EBF0;
    case 676u: goto L_0893EC10;
    case 677u: goto L_0893EC2C;
    case 678u: goto L_0893EC38;
    case 679u: goto L_0893EC3C;
    case 680u: goto L_0893EC70;
    case 681u: goto L_0893EC8C;
    case 682u: goto L_0893ECD4;
    case 683u: goto L_0893ECD8;
    case 684u: goto L_0893ECEC;
    case 685u: goto L_0893ECF4;
    case 686u: goto L_0893ED0C;
    case 687u: goto L_0893ED14;
    case 688u: goto L_0893ED24;
    case 689u: goto L_0893ED28;
    case 690u: goto L_0893ED4C;
    case 691u: goto L_0893ED60;
    case 692u: goto L_0893ED6C;
    case 693u: goto L_0893ED74;
    case 694u: goto L_0893ED90;
    case 695u: goto L_0893EDA0;
    case 696u: goto L_0893EDD4;
    case 697u: goto L_0893EE1C;
    case 698u: goto L_0893EE24;
    case 699u: goto L_0893EE30;
    case 700u: goto L_0893EE64;
    case 701u: goto L_0893EE90;
    case 702u: goto L_0893EEE8;
    case 703u: goto L_0893EEF4;
    case 704u: goto L_0893EEFC;
    case 705u: goto L_0893EF10;
    case 706u: goto L_0893EF18;
    case 707u: goto L_0893EF20;
    case 708u: goto L_0893EF24;
    case 709u: goto L_0893EF40;
    case 710u: goto L_0893EF68;
    case 711u: goto L_0893EF84;
    case 712u: goto L_0893EF8C;
    case 713u: goto L_0893EF98;
    case 714u: goto L_0893EFAC;
    case 715u: goto L_0893EFB8;
    case 716u: goto L_0893EFBC;
    case 717u: goto L_0893EFC4;
    case 718u: goto L_0893EFCC;
    case 719u: goto L_0893EFFC;
    case 720u: goto L_0893F024;
    case 721u: goto L_0893F034;
    case 722u: goto L_0893F084;
    case 723u: goto L_0893F0C8;
    case 724u: goto L_0893F0D0;
    case 725u: goto L_0893F0D8;
    case 726u: goto L_0893F0E8;
    case 727u: goto L_0893F138;
    case 728u: goto L_0893F13C;
    case 729u: goto L_0893F178;
    case 730u: goto L_0893F1B8;
    case 731u: goto L_0893F1D8;
    case 732u: goto L_0893F290;
    case 733u: goto L_0893F2A4;
    case 734u: goto L_0893F2AC;
    case 735u: goto L_0893F2B8;
    case 736u: goto L_0893F2CC;
    case 737u: goto L_0893F2D4;
    case 738u: goto L_0893F2D8;
    case 739u: goto L_0893F318;
    case 740u: goto L_0893F36C;
    case 741u: goto L_0893F374;
    case 742u: goto L_0893F37C;
    case 743u: goto L_0893F390;
    case 744u: goto L_0893F3D4;
    case 745u: goto L_0893F3E0;
    case 746u: goto L_0893F3EC;
    case 747u: goto L_0893F3F8;
    case 748u: goto L_0893F404;
    case 749u: goto L_0893F418;
    case 750u: goto L_0893F420;
    case 751u: goto L_0893F434;
    case 752u: goto L_0893F43C;
    case 753u: goto L_0893F44C;
    case 754u: goto L_0893F47C;
    case 755u: goto L_0893F48C;
    case 756u: goto L_0893F498;
    case 757u: goto L_0893F4B0;
    case 758u: goto L_0893F4B8;
    case 759u: goto L_0893F4C0;
    case 760u: goto L_0893F4C8;
    case 761u: goto L_0893F4E0;
    case 762u: goto L_0893F4E8;
    case 763u: goto L_0893F4FC;
    case 764u: goto L_0893F508;
    case 765u: goto L_0893F514;
    case 766u: goto L_0893F520;
    case 767u: goto L_0893F524;
    case 768u: goto L_0893F530;
    case 769u: goto L_0893F538;
    case 770u: goto L_0893F53C;
    case 771u: goto L_0893F590;
    case 772u: goto L_0893F5A8;
    case 773u: goto L_0893F5B0;
    case 774u: goto L_0893F5D8;
    case 775u: goto L_0893F620;
    case 776u: goto L_0893F63C;
    case 777u: goto L_0893F644;
    case 778u: goto L_0893F650;
    case 779u: goto L_0893F658;
    case 780u: goto L_0893F664;
    case 781u: goto L_0893F680;
    case 782u: goto L_0893F684;
    case 783u: goto L_0893F698;
    case 784u: goto L_0893F6D0;
    case 785u: goto L_0893F6D8;
    case 786u: goto L_0893F6E8;
    case 787u: goto L_0893F6F0;
    case 788u: goto L_0893F704;
    case 789u: goto L_0893F70C;
    case 790u: goto L_0893F720;
    case 791u: goto L_0893F728;
    case 792u: goto L_0893F744;
    case 793u: goto L_0893F750;
    case 794u: goto L_0893F760;
    case 795u: goto L_0893F764;
    case 796u: goto L_0893F774;
    case 797u: goto L_0893F78C;
    case 798u: goto L_0893F800;
    case 799u: goto L_0893F80C;
    case 800u: goto L_0893F818;
    case 801u: goto L_0893F840;
    case 802u: goto L_0893F854;
    case 803u: goto L_0893F864;
    case 804u: goto L_0893F884;
    case 805u: goto L_0893F8DC;
    case 806u: goto L_0893F8E4;
    case 807u: goto L_0893F928;
    case 808u: goto L_0893F930;
    case 809u: goto L_0893F934;
    case 810u: goto L_0893F93C;
    case 811u: goto L_0893F948;
    case 812u: goto L_0893F970;
    case 813u: goto L_0893F97C;
    case 814u: goto L_0893F994;
    case 815u: goto L_0893F9B8;
    case 816u: goto L_0893F9C4;
    case 817u: goto L_0893F9D8;
    case 818u: goto L_0893F9E0;
    case 819u: goto L_0893F9FC;
    case 820u: goto L_0893FA08;
    case 821u: goto L_0893FA10;
    case 822u: goto L_0893FA20;
    case 823u: goto L_0893FA34;
    case 824u: goto L_0893FA50;
    case 825u: goto L_0893FA5C;
    case 826u: goto L_0893FA64;
    case 827u: goto L_0893FA74;
    case 828u: goto L_0893FA88;
    case 829u: goto L_0893FAB8;
    case 830u: goto L_0893FAE8;
    case 831u: goto L_0893FB14;
    case 832u: goto L_0893FB24;
    case 833u: goto L_0893FB2C;
    case 834u: goto L_0893FB94;
    case 835u: goto L_0893FB9C;
    case 836u: goto L_0893FBAC;
    case 837u: goto L_0893FBDC;
    case 838u: goto L_0893FC24;
    case 839u: goto L_0893FC2C;
    case 840u: goto L_0893FC60;
    case 841u: goto L_0893FC88;
    case 842u: goto L_0893FC98;
    case 843u: goto L_0893FCC4;
    case 844u: goto L_0893FCDC;
    case 845u: goto L_0893FD48;
    case 846u: goto L_0893FDAC;
    case 847u: goto L_0893FE08;
    case 848u: goto L_0893FE3C;
    case 849u: goto L_0893FE44;
    case 850u: goto L_0893FE54;
    case 851u: goto L_0893FE58;
    case 852u: goto L_0893FE6C;
    case 853u: goto L_0893FE84;
    case 854u: goto L_0893FE90;
    case 855u: goto L_0893FE9C;
    case 856u: goto L_0893FEB0;
    case 857u: goto L_0893FEB8;
    case 858u: goto L_0893FEC8;
    case 859u: goto L_0893FED0;
    case 860u: goto L_0893FEE4;
    case 861u: goto L_0893FF14;
    case 862u: goto L_0893FF40;
    case 863u: goto L_0893FF54;
    case 864u: goto L_0893FF70;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        AOT_REGCACHE_SYNC_OUT(); return;
    }
    }
// PSPRECOMP_V813_SHARED_JR_DISPATCH: one dynamic-JR reject/redispatch path per unit.
LOCAL_JR_DISPATCH:
    {
        const std::uint32_t local_delta_v813 = jump_target - 0x0893C004u;
        if (local_delta_v813 >= 16240u || (local_delta_v813 & 3u) != 0u) {
            ctx.pc = jump_target;
            AOT_REGCACHE_SYNC_OUT();
            // PSPRECOMP_V814_CONTINUATION_RETURN
            Runtime::AotTailContinuation aot_cont_v814{};
            if (rt.take_aot_tail_continuation(jump_target, aot_cont_v814)) {
#if defined(__clang__) && defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
                [[clang::musttail]] return aot_cont_v814.function(
                    rt, ctx, aot_cont_v814.entry_id, aot_mem);
#else
                aot_cont_v814.function(rt, ctx, aot_cont_v814.entry_id, aot_mem); return;
#endif
            }
            return;
        }
    }
    local_pc = jump_target;
    entry_id = 0u;
    goto LOCAL_DISPATCH;

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
L_0893C004:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0893C010u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0077.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 2u, 0x0893C010u, 0x0893B3E8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0077_entry(rt, ctx, 724u, aot_mem);
#else
        recomp_unit_0077_entry(rt, ctx, 724u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 724u, 0x0893B3E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893C010u) goto L_0893C010;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893C010:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x0893C020u);
    ctx.gpr[6] = (aot_gpr_29 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 3u, 0x0893C020u, 0x08ABDC24u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 387u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 387u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 387u, 0x08ABDC24u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893C020u) goto L_0893C020;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893C020:
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0893C038:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_17);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    aot_gpr_31 = (0x0893C054u);
    aot_gpr_17 = (aot_gpr_5 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0077.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 5u, 0x0893C054u, 0x0893B11Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0077_entry(rt, ctx, 685u, aot_mem);
#else
        recomp_unit_0077_entry(rt, ctx, 685u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 685u, 0x0893B11Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893C054u) goto L_0893C054;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893C054:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0893C060u);
    aot_gpr_5 = (aot_gpr_17 | 0u);
    goto L_0893CD28;
L_0893C060:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(28)));
    aot_gpr_31 = (0x0893C06Cu);
    aot_gpr_5 = (aot_gpr_17 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 7u, 0x0893C06Cu, 0x08ABD5E8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 290u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 290u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 290u, 0x08ABD5E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893C06Cu) goto L_0893C06C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893C06C:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0893C078u);
    aot_gpr_5 = (0u | 93u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0077.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 8u, 0x0893C078u, 0x0893B23Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0077_entry(rt, ctx, 701u, aot_mem);
#else
        recomp_unit_0077_entry(rt, ctx, 701u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 701u, 0x0893B23Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893C078u) goto L_0893C078;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893C078:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0893C08C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-64));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(52), ctx.gpr[19]);
    ctx.gpr[19] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(44), aot_gpr_17);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(48), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(36)));
    ctx.gpr[7] = (0u | 278u);
    aot_gpr_17 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(40), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(56), ctx.gpr[20]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(60), aot_gpr_31);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    aot_gpr_16 = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_0893C100;
      }
      goto L_0893C0C4;
    }
L_0893C0C4:
    ctx.gpr[6] = (32768u << 16u);
    ctx.gpr[7] = (2232u << 16u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(24)));
    aot_gpr_4 = (aot_gpr_17 | 0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-3));
    aot_gpr_31 = (0x0893C0E0u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-10664));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0125.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 11u, 0x0893C0E0u, 0x089FB6ACu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0125_entry(rt, ctx, 533u, aot_mem);
#else
        recomp_unit_0125_entry(rt, ctx, 533u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0125_entry, 125u, 533u, 0x089FB6ACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893C0E0u) goto L_0893C0E0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893C0E0:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(24)));
    aot_gpr_4 = (aot_gpr_17 | 0u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(24), aot_gpr_5);
    aot_gpr_31 = (0x0893C0F8u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0077.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 12u, 0x0893C0F8u, 0x0893B3E8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0077_entry(rt, ctx, 724u, aot_mem);
#else
        recomp_unit_0077_entry(rt, ctx, 724u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 724u, 0x0893B3E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893C0F8u) goto L_0893C0F8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893C0F8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0893C10C;
      }
      goto L_0893C100;
    }
L_0893C100:
    aot_gpr_4 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x0893C10Cu);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    goto L_0893C038;
L_0893C10C:
    aot_gpr_4 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x0893C118u);
    aot_gpr_5 = (0u | 61u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0077.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 15u, 0x0893C118u, 0x0893B23Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0077_entry(rt, ctx, 701u, aot_mem);
#else
        recomp_unit_0077_entry(rt, ctx, 701u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 701u, 0x0893B23Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893C118u) goto L_0893C118;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893C118:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x0893C124u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 16u, 0x0893C124u, 0x08ABD63Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 295u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 295u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 295u, 0x08ABD63Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893C124u) goto L_0893C124;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893C124:
    ctx.gpr[20] = (aot_gpr_29 + static_cast<std::uint32_t>(20));
    aot_gpr_4 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x0893C134u);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    goto L_0893CD28;
L_0893C134:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(20)));
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    aot_gpr_31 = (0x0893C148u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 18u, 0x0893C148u, 0x08ABD63Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 295u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 295u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 295u, 0x08ABD63Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893C148u) goto L_0893C148;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893C148:
    aot_gpr_17 = (ctx.gpr[2] | 0u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x0893C158u);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 19u, 0x0893C158u, 0x08ABD63Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 295u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 295u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 295u, 0x08ABD63Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893C158u) goto L_0893C158;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893C158:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_5 = (0u | 9u);
    ctx.gpr[6] = (aot_gpr_16 | 0u);
    ctx.gpr[7] = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x0893C170u);
    ctx.gpr[8] = (ctx.gpr[2] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 20u, 0x0893C170u, 0x08ABDFCCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 434u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 434u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 434u, 0x08ABDFCCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893C170u) goto L_0893C170;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893C170:
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    { std::uint32_t aot_run_words[6]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(40), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      ctx.gpr[20] = aot_run_words[4];
      aot_gpr_31 = aot_run_words[5];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0893C194:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    ctx.gpr[6] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_17);
    aot_gpr_17 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    aot_gpr_16 = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_0893C1DC;
      }
      goto L_0893C1B4;
    }
L_0893C1B4:
    aot_gpr_4 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x0893C1C0u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 23u, 0x0893C1C0u, 0x08ABD4FCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 275u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 275u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 275u, 0x08ABD4FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893C1C0u) goto L_0893C1C0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893C1C0:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(0), 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(32)));
    aot_gpr_5 = (0u | 32u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_0893C1E4;
      }
      goto L_0893C1D4;
    }
L_0893C1D4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0893C214;
      }
      goto L_0893C1DC;
    }
L_0893C1DC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0893C214;
      }
      goto L_0893C1E4;
    }
L_0893C1E4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(20)));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    aot_gpr_4 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x0893C200u);
    aot_gpr_5 = (0u | 31u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 27u, 0x0893C200u, 0x08ABE004u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 436u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 436u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 436u, 0x08ABE004u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893C200u) goto L_0893C200;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893C200:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(32), 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(20)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(36), aot_gpr_4);
    goto L_0893C214;
L_0893C214:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0893C228:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    ctx.gpr[6] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(32)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_17);
    aot_gpr_17 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    aot_gpr_16 = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_0893C294;
      }
      goto L_0893C248;
    }
L_0893C248:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (0u | 12u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_0893C29C;
      }
      goto L_0893C258;
    }
L_0893C258:
    aot_gpr_4 = (aot_gpr_17 | 0u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0893C268u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 32u, 0x0893C268u, 0x08ABD018u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 218u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 218u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 218u, 0x08ABD018u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893C268u) goto L_0893C268;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893C268:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(20)));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    aot_gpr_4 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x0893C284u);
    aot_gpr_5 = (0u | 32u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 33u, 0x0893C284u, 0x08ABE004u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 436u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 436u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 436u, 0x08ABE004u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893C284u) goto L_0893C284;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893C284:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(20)));
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0893C2D8;
      }
      goto L_0893C294;
    }
L_0893C294:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0893C2DC;
      }
      goto L_0893C29C;
    }
L_0893C29C:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0893C2B0;
      }
      goto L_0893C2A4;
    }
L_0893C2A4:
    aot_gpr_4 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x0893C2B0u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 37u, 0x0893C2B0u, 0x08ABD4FCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 275u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 275u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 275u, 0x08ABD4FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893C2B0u) goto L_0893C2B0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893C2B0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(20)));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    aot_gpr_4 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x0893C2CCu);
    aot_gpr_5 = (0u | 31u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 38u, 0x0893C2CCu, 0x08ABE004u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 436u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 436u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 436u, 0x08ABE004u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893C2CCu) goto L_0893C2CC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893C2CC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(20)));
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(1));
    goto L_0893C2D8;
L_0893C2D8:
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(36), aot_gpr_16);
    goto L_0893C2DC;
L_0893C2DC:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0893C2F0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_5 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_17);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    aot_gpr_31 = (0x0893C30Cu);
    aot_gpr_17 = (aot_gpr_4 | 0u);
    goto L_0893CD28;
L_0893C30C:
    ctx.gpr[6] = (4u << 16u);
    ctx.gpr[7] = (2232u << 16u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(28)));
    aot_gpr_4 = (aot_gpr_17 | 0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_gpr_31 = (0x0893C328u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-10664));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0125.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 43u, 0x0893C328u, 0x089FB6ACu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0125_entry(rt, ctx, 533u, aot_mem);
#else
        recomp_unit_0125_entry(rt, ctx, 533u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0125_entry, 125u, 533u, 0x089FB6ACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893C328u) goto L_0893C328;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893C328:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(28)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(32)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(28), aot_gpr_4);
    aot_gpr_4 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(32), aot_gpr_4);
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0893C354:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[6] = (0u | 41u);
    { const std::uint32_t aot_run_words[3]{aot_gpr_16, aot_gpr_17, ctx.gpr[18]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_gpr_31);
    { const bool branch_taken = aot_gpr_5 == ctx.gpr[6];
    aot_gpr_16 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_0893C414;
      }
      goto L_0893C388;
    }
L_0893C388:
    aot_gpr_17 = (2232u << 16u);
    ctx.gpr[18] = (0u | 280u);
    aot_gpr_17 = (aot_gpr_17 + static_cast<std::uint32_t>(-10640));
    goto L_0893C394;
L_0893C394:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(12)));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 279 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_0893C3D4;
      }
      goto L_0893C3A4;
    }
L_0893C3A4:
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 278 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0893C3F0;
      }
      goto L_0893C3B0;
    }
L_0893C3B0:
    aot_gpr_31 = (0x0893C3B8u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0077.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 49u, 0x0893C3B8u, 0x0893B34Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0077_entry(rt, ctx, 715u, aot_mem);
#else
        recomp_unit_0077_entry(rt, ctx, 715u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 715u, 0x0893B34Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893C3B8u) goto L_0893C3B8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893C3B8:
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0893C3CCu);
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0077.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 50u, 0x0893C3CCu, 0x0893B4C4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0077_entry(rt, ctx, 731u, aot_mem);
#else
        recomp_unit_0077_entry(rt, ctx, 731u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 731u, 0x0893B4C4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893C3CCu) goto L_0893C3CC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893C3CC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0893C3FC;
      }
      goto L_0893C3D4;
    }
L_0893C3D4:
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[18];
      if (branch_taken) {
          goto L_0893C3F0;
      }
      goto L_0893C3DC;
    }
L_0893C3DC:
    ctx.gpr[19] = (0u | 1u);
    aot_gpr_31 = (0x0893C3E8u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0077.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 53u, 0x0893C3E8u, 0x0893B11Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0077_entry(rt, ctx, 685u, aot_mem);
#else
        recomp_unit_0077_entry(rt, ctx, 685u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 685u, 0x0893B11Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893C3E8u) goto L_0893C3E8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893C3E8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0893C3FC;
      }
      goto L_0893C3F0;
    }
L_0893C3F0:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0893C3FCu);
    aot_gpr_5 = (aot_gpr_17 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0125.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 55u, 0x0893C3FCu, 0x089FB798u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0125_entry(rt, ctx, 543u, aot_mem);
#else
        recomp_unit_0125_entry(rt, ctx, 543u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0125_entry, 125u, 543u, 0x089FB798u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893C3FCu) goto L_0893C3FC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893C3FC:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    aot_gpr_4 = (aot_gpr_16 | 0u);
      if (branch_taken) {
          goto L_0893C414;
      }
      goto L_0893C404;
    }
L_0893C404:
    aot_gpr_31 = (0x0893C40Cu);
    aot_gpr_5 = (0u | 44u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0077.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 57u, 0x0893C40Cu, 0x0893B208u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0077_entry(rt, ctx, 696u, aot_mem);
#else
        recomp_unit_0077_entry(rt, ctx, 696u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 696u, 0x0893B208u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893C40Cu) goto L_0893C40C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893C40C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_0893C394;
      }
      goto L_0893C414;
    }
L_0893C414:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x0893C424u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0077.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 59u, 0x0893C424u, 0x0893BAB8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0077_entry(rt, ctx, 806u, aot_mem);
#else
        recomp_unit_0077_entry(rt, ctx, 806u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 806u, 0x0893BAB8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893C424u) goto L_0893C424;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893C424:
    { std::uint32_t aot_run_words[6]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      ctx.gpr[20] = aot_run_words[4];
      aot_gpr_31 = aot_run_words[5];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0893C444:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-1520));
    { const std::uint32_t aot_run_words[4]{aot_gpr_16, aot_gpr_17, ctx.gpr[18], ctx.gpr[19]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(1496), aot_run_words); }
    aot_gpr_17 = (aot_gpr_5 | 0u);
    aot_gpr_16 = (ctx.gpr[7] | 0u);
    ctx.gpr[19] = (ctx.gpr[6] | 0u);
    ctx.gpr[18] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1512), aot_gpr_31);
    aot_gpr_31 = (0x0893C474u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0077.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 61u, 0x0893C474u, 0x0893BD18u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0077_entry(rt, ctx, 829u, aot_mem);
#else
        recomp_unit_0077_entry(rt, ctx, 829u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 829u, 0x0893BD18u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893C474u) goto L_0893C474;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893C474:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(60), aot_gpr_16);
    aot_gpr_31 = (0x0893C488u);
    aot_gpr_5 = (0u | 40u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0077.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 62u, 0x0893C488u, 0x0893B23Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0077_entry(rt, ctx, 701u, aot_mem);
#else
        recomp_unit_0077_entry(rt, ctx, 701u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 701u, 0x0893B23Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893C488u) goto L_0893C488;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893C488:
    { const bool branch_taken = ctx.gpr[19] == 0u;
      if (branch_taken) {
          goto L_0893C49C;
      }
      goto L_0893C490;
    }
L_0893C490:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-18344));
    aot_gpr_31 = (0x0893C49Cu);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0077.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 64u, 0x0893C49Cu, 0x0893B670u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0077_entry(rt, ctx, 745u, aot_mem);
#else
        recomp_unit_0077_entry(rt, ctx, 745u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 745u, 0x0893B670u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893C49Cu) goto L_0893C49C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893C49C:
    aot_gpr_31 = (0x0893C4A4u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    goto L_0893C354;
L_0893C4A4:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x0893C4B0u);
    aot_gpr_5 = (0u | 41u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0077.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 66u, 0x0893C4B0u, 0x0893B23Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0077_entry(rt, ctx, 701u, aot_mem);
#else
        recomp_unit_0077_entry(rt, ctx, 701u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 701u, 0x0893B23Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893C4B0u) goto L_0893C4B0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893C4B0:
    aot_gpr_31 = (0x0893C4B8u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    goto L_0893DF20;
L_0893C4B8:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (0u | 262u);
    ctx.gpr[6] = (0u | 265u);
    aot_gpr_31 = (0x0893C4CCu);
    ctx.gpr[7] = (aot_gpr_16 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0077.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 68u, 0x0893C4CCu, 0x0893B280u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0077_entry(rt, ctx, 705u, aot_mem);
#else
        recomp_unit_0077_entry(rt, ctx, 705u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 705u, 0x0893B280u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893C4CCu) goto L_0893C4CC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893C4CC:
    aot_gpr_31 = (0x0893C4D4u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0077.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 69u, 0x0893C4D4u, 0x0893BDC0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0077_entry(rt, ctx, 832u, aot_mem);
#else
        recomp_unit_0077_entry(rt, ctx, 832u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 832u, 0x0893BDC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893C4D4u) goto L_0893C4D4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893C4D4:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    aot_gpr_31 = (0x0893C4E4u);
    ctx.gpr[6] = (aot_gpr_17 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0077.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 70u, 0x0893C4E4u, 0x0893BBDCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0077_entry(rt, ctx, 818u, aot_mem);
#else
        recomp_unit_0077_entry(rt, ctx, 818u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 818u, 0x0893BBDCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893C4E4u) goto L_0893C4E4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893C4E4:
    { std::uint32_t aot_run_words[5]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(1496), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      aot_gpr_31 = aot_run_words[4];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(1520));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0893C500:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_17);
    aot_gpr_16 = (aot_gpr_5 | 0u);
    aot_gpr_17 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_31);
    aot_gpr_31 = (0x0893C524u);
    ctx.gpr[18] = (0u | 1u);
    goto L_0893CD28;
L_0893C524:
    aot_gpr_4 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x0893C530u);
    aot_gpr_5 = (0u | 44u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0077.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 73u, 0x0893C530u, 0x0893B208u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0077_entry(rt, ctx, 696u, aot_mem);
#else
        recomp_unit_0077_entry(rt, ctx, 696u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 696u, 0x0893B208u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893C530u) goto L_0893C530;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893C530:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_0893C558;
      }
      goto L_0893C538;
    }
L_0893C538:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(28)));
    aot_gpr_31 = (0x0893C544u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 75u, 0x0893C544u, 0x08ABD4FCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 275u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 275u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 275u, 0x08ABD4FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893C544u) goto L_0893C544;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893C544:
    aot_gpr_4 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x0893C550u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    goto L_0893CD28;
L_0893C550:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0893C524;
      }
      goto L_0893C558;
    }
L_0893C558:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0893C574:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(28)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    ctx.gpr[19] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (0u | 287u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_gpr_17);
    { const std::uint32_t aot_run_words[3]{ctx.gpr[20], ctx.gpr[21], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(36), aot_run_words); }
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[6];
    aot_gpr_17 = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_0893C658;
      }
      goto L_0893C5B0;
    }
L_0893C5B0:
    aot_gpr_5 = (0u | 123u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_5 = (0u | 40u);
      if (branch_taken) {
          goto L_0893C63C;
      }
      goto L_0893C5BC;
    }
L_0893C5BC:
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_0893C680;
      }
      goto L_0893C5C4;
    }
L_0893C5C4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(8)));
    ctx.gpr[20] = (0u | 41u);
    { const bool branch_taken = ctx.gpr[19] == aot_gpr_4;
    ctx.gpr[21] = (0u | 12u);
      if (branch_taken) {
          goto L_0893C5E4;
      }
      goto L_0893C5D4;
    }
L_0893C5D4:
    aot_gpr_5 = (2232u << 16u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0893C5E4u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-10612));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0125.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 83u, 0x0893C5E4u, 0x089FB798u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0125_entry(rt, ctx, 543u, aot_mem);
#else
        recomp_unit_0125_entry(rt, ctx, 543u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0125_entry, 125u, 543u, 0x089FB798u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893C5E4u) goto L_0893C5E4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893C5E4:
    aot_gpr_31 = (0x0893C5ECu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0077.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 84u, 0x0893C5ECu, 0x0893B11Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0077_entry(rt, ctx, 685u, aot_mem);
#else
        recomp_unit_0077_entry(rt, ctx, 685u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 685u, 0x0893B11Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893C5ECu) goto L_0893C5EC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893C5EC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[20];
      if (branch_taken) {
          goto L_0893C600;
      }
      goto L_0893C5F8;
    }
L_0893C5F8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          goto L_0893C61C;
      }
      goto L_0893C600;
    }
L_0893C600:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0893C60Cu);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    goto L_0893C500;
L_0893C60C:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    aot_gpr_31 = (0x0893C61Cu);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 88u, 0x0893C61Cu, 0x08ABD018u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 218u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 218u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 218u, 0x08ABD018u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893C61Cu) goto L_0893C61C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893C61C:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (0u | 41u);
    ctx.gpr[6] = (0u | 40u);
    aot_gpr_31 = (0x0893C630u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0077.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 89u, 0x0893C630u, 0x0893B280u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0077_entry(rt, ctx, 705u, aot_mem);
#else
        recomp_unit_0077_entry(rt, ctx, 705u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 705u, 0x0893B280u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893C630u) goto L_0893C630;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893C630:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_0893C698;
      }
      goto L_0893C63C;
    }
L_0893C63C:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0893C648u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    goto L_0893DFBC;
L_0893C648:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (0u | 12u);
      if (branch_taken) {
          goto L_0893C698;
      }
      goto L_0893C658;
    }
L_0893C658:
    ctx.gpr[6] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(16)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0893C668u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0077.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 93u, 0x0893C668u, 0x0893B3ACu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0077_entry(rt, ctx, 721u, aot_mem);
#else
        recomp_unit_0077_entry(rt, ctx, 721u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 721u, 0x0893B3ACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893C668u) goto L_0893C668;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893C668:
    aot_gpr_31 = (0x0893C670u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0077.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 94u, 0x0893C670u, 0x0893B11Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0077_entry(rt, ctx, 685u, aot_mem);
#else
        recomp_unit_0077_entry(rt, ctx, 685u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 685u, 0x0893B11Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893C670u) goto L_0893C670;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893C670:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (0u | 12u);
      if (branch_taken) {
          goto L_0893C698;
      }
      goto L_0893C680;
    }
L_0893C680:
    aot_gpr_5 = (2232u << 16u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0893C690u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-10560));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0125.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 96u, 0x0893C690u, 0x089FB798u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0125_entry(rt, ctx, 543u, aot_mem);
#else
        recomp_unit_0125_entry(rt, ctx, 543u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0125_entry, 125u, 543u, 0x089FB798u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893C690u) goto L_0893C690;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893C690:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0893C708;
      }
      goto L_0893C698;
    }
L_0893C698:
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[21];
      if (branch_taken) {
          goto L_0893C6A8;
      }
      goto L_0893C6A0;
    }
L_0893C6A0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_0893C6CC;
      }
      goto L_0893C6A8;
    }
L_0893C6A8:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0893C6BC;
      }
      goto L_0893C6B0;
    }
L_0893C6B0:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x0893C6BCu);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 101u, 0x0893C6BCu, 0x08ABD4FCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 275u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 275u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 275u, 0x08ABD4FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893C6BCu) goto L_0893C6BC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893C6BC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
    aot_gpr_4 = (aot_gpr_4 - aot_gpr_16);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    goto L_0893C6CC;
L_0893C6CC:
    ctx.gpr[7] = (aot_gpr_4 | 0u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (0u | 25u);
    ctx.gpr[6] = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0893C6E4u);
    ctx.gpr[8] = (0u | 2u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 103u, 0x0893C6E4u, 0x08ABDFCCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 434u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 434u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 434u, 0x08ABDFCCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893C6E4u) goto L_0893C6E4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893C6E4:
    aot_gpr_4 = (aot_gpr_17 | 0u);
    aot_gpr_5 = (0u | 12u);
    aot_gpr_31 = (0x0893C6F4u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0077.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 104u, 0x0893C6F4u, 0x0893B394u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0077_entry(rt, ctx, 720u, aot_mem);
#else
        recomp_unit_0077_entry(rt, ctx, 720u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 720u, 0x0893B394u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893C6F4u) goto L_0893C6F4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893C6F4:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x0893C700u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 105u, 0x0893C700u, 0x08ABDEB0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 425u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 425u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 425u, 0x08ABDEB0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893C700u) goto L_0893C700;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893C700:
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(36), aot_gpr_4);
    goto L_0893C708;
L_0893C708:
    { std::uint32_t aot_run_words[7]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      ctx.gpr[20] = aot_run_words[4];
      ctx.gpr[21] = aot_run_words[5];
      aot_gpr_31 = aot_run_words[6];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0893C72C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_17);
    aot_gpr_17 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 41 ? 1u : 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_31);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_5 = (0u | 278u);
      if (branch_taken) {
          goto L_0893C77C;
      }
      goto L_0893C758;
    }
L_0893C758:
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 40 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0893C79C;
      }
      goto L_0893C764;
    }
L_0893C764:
    aot_gpr_5 = (2232u << 16u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x0893C774u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-10532));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0125.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 110u, 0x0893C774u, 0x089FB798u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0125_entry(rt, ctx, 543u, aot_mem);
#else
        recomp_unit_0125_entry(rt, ctx, 543u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0125_entry, 125u, 543u, 0x089FB798u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893C774u) goto L_0893C774;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893C774:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0893C7DC;
      }
      goto L_0893C77C;
    }
L_0893C77C:
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_0893C764;
      }
      goto L_0893C784;
    }
L_0893C784:
    aot_gpr_4 = (aot_gpr_17 | 0u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0893C794u);
    ctx.gpr[6] = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0077.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 113u, 0x0893C794u, 0x0893B9A0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0077_entry(rt, ctx, 791u, aot_mem);
#else
        recomp_unit_0077_entry(rt, ctx, 791u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 791u, 0x0893B9A0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893C794u) goto L_0893C794;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893C794:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0893C7DC;
      }
      goto L_0893C79C;
    }
L_0893C79C:
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(4)));
    aot_gpr_31 = (0x0893C7A8u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0077.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 115u, 0x0893C7A8u, 0x0893B11Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0077_entry(rt, ctx, 685u, aot_mem);
#else
        recomp_unit_0077_entry(rt, ctx, 685u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 685u, 0x0893B11Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893C7A8u) goto L_0893C7A8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893C7A8:
    aot_gpr_4 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x0893C7B4u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    goto L_0893CD28;
L_0893C7B4:
    aot_gpr_4 = (aot_gpr_17 | 0u);
    aot_gpr_5 = (0u | 41u);
    ctx.gpr[6] = (0u | 40u);
    aot_gpr_31 = (0x0893C7C8u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0077.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 117u, 0x0893C7C8u, 0x0893B280u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0077_entry(rt, ctx, 705u, aot_mem);
#else
        recomp_unit_0077_entry(rt, ctx, 705u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 705u, 0x0893B280u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893C7C8u) goto L_0893C7C8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893C7C8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(28)));
    aot_gpr_31 = (0x0893C7D4u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 118u, 0x0893C7D4u, 0x08ABD094u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 222u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 222u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 222u, 0x08ABD094u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893C7D4u) goto L_0893C7D4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893C7D4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0893C7DC;
      }
      goto L_0893C7DC;
    }
L_0893C7DC:
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0893C7F4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-64));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(40), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(44), aot_gpr_17);
    aot_gpr_17 = (aot_gpr_4 | 0u);
    aot_gpr_16 = (aot_gpr_5 | 0u);
    { const std::uint32_t aot_run_words[3]{ctx.gpr[18], ctx.gpr[19], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(48), aot_run_words); }
    aot_gpr_31 = (0x0893C81Cu);
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(28)));
    goto L_0893C72C;
L_0893C81C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(12)));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 92 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 124 ? 1u : 0u);
      if (branch_taken) {
          goto L_0893C86C;
      }
      goto L_0893C82C;
    }
L_0893C82C:
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 59 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 40 ? 1u : 0u);
      if (branch_taken) {
          goto L_0893C858;
      }
      goto L_0893C838;
    }
L_0893C838:
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-40));
      if (branch_taken) {
          goto L_0893C864;
      }
      goto L_0893C840;
    }
L_0893C840:
    aot_gpr_4 = (aot_gpr_4 << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_4);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-10408)));
    jump_target = ctx.gpr[1];
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0893C858:
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 91 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0893C8AC;
      }
      goto L_0893C864;
    }
L_0893C864:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0893C938;
      }
      goto L_0893C86C;
    }
L_0893C86C:
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_5 = (0u | 287u);
      if (branch_taken) {
          goto L_0893C888;
      }
      goto L_0893C874;
    }
L_0893C874:
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 123 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0893C864;
      }
      goto L_0893C880;
    }
L_0893C880:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0893C918;
      }
      goto L_0893C888;
    }
L_0893C888:
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_0893C864;
      }
      goto L_0893C890;
    }
L_0893C890:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0893C918;
      }
      goto L_0893C898;
    }
L_0893C898:
    aot_gpr_4 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x0893C8A4u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0077.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 133u, 0x0893C8A4u, 0x0893BFD4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0077_entry(rt, ctx, 851u, aot_mem);
#else
        recomp_unit_0077_entry(rt, ctx, 851u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 851u, 0x0893BFD4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893C8A4u) goto L_0893C8A4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893C8A4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0893C930;
      }
      goto L_0893C8AC;
    }
L_0893C8AC:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x0893C8B8u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 135u, 0x0893C8B8u, 0x08ABD558u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 280u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 280u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 280u, 0x08ABD558u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893C8B8u) goto L_0893C8B8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893C8B8:
    aot_gpr_4 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x0893C8C4u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    goto L_0893C038;
L_0893C8C4:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0893C8D4u);
    ctx.gpr[6] = (aot_gpr_29 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 137u, 0x0893C8D4u, 0x08ABDC24u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 387u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 387u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 387u, 0x08ABDC24u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893C8D4u) goto L_0893C8D4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893C8D4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0893C930;
      }
      goto L_0893C8DC;
    }
L_0893C8DC:
    aot_gpr_31 = (0x0893C8E4u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0077.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 139u, 0x0893C8E4u, 0x0893B11Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0077_entry(rt, ctx, 685u, aot_mem);
#else
        recomp_unit_0077_entry(rt, ctx, 685u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 685u, 0x0893B11Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893C8E4u) goto L_0893C8E4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893C8E4:
    ctx.gpr[19] = (aot_gpr_29 + static_cast<std::uint32_t>(20));
    aot_gpr_4 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x0893C8F4u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0077.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 140u, 0x0893C8F4u, 0x0893B3E8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0077_entry(rt, ctx, 724u, aot_mem);
#else
        recomp_unit_0077_entry(rt, ctx, 724u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 724u, 0x0893B3E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893C8F4u) goto L_0893C8F4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893C8F4:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0893C904u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 141u, 0x0893C904u, 0x08ABD828u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 330u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 330u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 330u, 0x08ABD828u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893C904u) goto L_0893C904;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893C904:
    aot_gpr_4 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x0893C910u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    goto L_0893C574;
L_0893C910:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0893C930;
      }
      goto L_0893C918;
    }
L_0893C918:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x0893C924u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 144u, 0x0893C924u, 0x08ABD4FCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 275u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 275u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 275u, 0x08ABD4FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893C924u) goto L_0893C924;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893C924:
    aot_gpr_4 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x0893C930u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    goto L_0893C574;
L_0893C930:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0893C81C;
      }
      goto L_0893C938;
    }
L_0893C938:
    { std::uint32_t aot_run_words[5]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(40), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      aot_gpr_31 = aot_run_words[4];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0893C954:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_17);
    aot_gpr_17 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 263 ? 1u : 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 288 ? 1u : 0u);
      if (branch_taken) {
          goto L_0893C99C;
      }
      goto L_0893C97C;
    }
L_0893C97C:
    aot_gpr_5 = (0u | 123u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_0893CA8C;
      }
      goto L_0893C988;
    }
L_0893C988:
    aot_gpr_4 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x0893C994u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    goto L_0893DFBC;
L_0893C994:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0893CA98;
      }
      goto L_0893C99C;
    }
L_0893C99C:
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-263));
      if (branch_taken) {
          goto L_0893CA8C;
      }
      goto L_0893C9A4;
    }
L_0893C9A4:
    aot_gpr_4 = (aot_gpr_4 << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_4);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-10328)));
    jump_target = ctx.gpr[1];
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0893C9BC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(28)));
    aot_gpr_31 = (0x0893C9C8u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(16)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 154u, 0x0893C9C8u, 0x08ABCFB8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 214u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 214u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 214u, 0x08ABCFB8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893C9C8u) goto L_0893C9C8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893C9C8:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (0u | 4u);
    aot_gpr_31 = (0x0893C9D8u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0077.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 155u, 0x0893C9D8u, 0x0893B394u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0077_entry(rt, ctx, 720u, aot_mem);
#else
        recomp_unit_0077_entry(rt, ctx, 720u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 720u, 0x0893B394u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893C9D8u) goto L_0893C9D8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893C9D8:
    aot_gpr_31 = (0x0893C9E0u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0077.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 156u, 0x0893C9E0u, 0x0893B11Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0077_entry(rt, ctx, 685u, aot_mem);
#else
        recomp_unit_0077_entry(rt, ctx, 685u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 685u, 0x0893B11Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893C9E0u) goto L_0893C9E0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893C9E0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0893CA98;
      }
      goto L_0893C9E8;
    }
L_0893C9E8:
    ctx.gpr[6] = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(16)));
    aot_gpr_4 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x0893C9F8u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0077.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 158u, 0x0893C9F8u, 0x0893B3ACu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0077_entry(rt, ctx, 721u, aot_mem);
#else
        recomp_unit_0077_entry(rt, ctx, 721u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 721u, 0x0893B3ACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893C9F8u) goto L_0893C9F8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893C9F8:
    aot_gpr_31 = (0x0893CA00u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0077.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 159u, 0x0893CA00u, 0x0893B11Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0077_entry(rt, ctx, 685u, aot_mem);
#else
        recomp_unit_0077_entry(rt, ctx, 685u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 685u, 0x0893B11Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893CA00u) goto L_0893CA00;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893CA00:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0893CA98;
      }
      goto L_0893CA08;
    }
L_0893CA08:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (0u | 1u);
    aot_gpr_31 = (0x0893CA18u);
    ctx.gpr[6] = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0077.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 161u, 0x0893CA18u, 0x0893B394u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0077_entry(rt, ctx, 720u, aot_mem);
#else
        recomp_unit_0077_entry(rt, ctx, 720u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 720u, 0x0893B394u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893CA18u) goto L_0893CA18;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893CA18:
    aot_gpr_31 = (0x0893CA20u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0077.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 162u, 0x0893CA20u, 0x0893B11Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0077_entry(rt, ctx, 685u, aot_mem);
#else
        recomp_unit_0077_entry(rt, ctx, 685u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 685u, 0x0893B11Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893CA20u) goto L_0893CA20;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893CA20:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0893CA98;
      }
      goto L_0893CA28;
    }
L_0893CA28:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (0u | 2u);
    aot_gpr_31 = (0x0893CA38u);
    ctx.gpr[6] = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0077.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 164u, 0x0893CA38u, 0x0893B394u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0077_entry(rt, ctx, 720u, aot_mem);
#else
        recomp_unit_0077_entry(rt, ctx, 720u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 720u, 0x0893B394u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893CA38u) goto L_0893CA38;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893CA38:
    aot_gpr_31 = (0x0893CA40u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0077.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 165u, 0x0893CA40u, 0x0893B11Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0077_entry(rt, ctx, 685u, aot_mem);
#else
        recomp_unit_0077_entry(rt, ctx, 685u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 685u, 0x0893B11Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893CA40u) goto L_0893CA40;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893CA40:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0893CA98;
      }
      goto L_0893CA48;
    }
L_0893CA48:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (0u | 3u);
    aot_gpr_31 = (0x0893CA58u);
    ctx.gpr[6] = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0077.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 167u, 0x0893CA58u, 0x0893B394u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0077_entry(rt, ctx, 720u, aot_mem);
#else
        recomp_unit_0077_entry(rt, ctx, 720u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 720u, 0x0893B394u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893CA58u) goto L_0893CA58;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893CA58:
    aot_gpr_31 = (0x0893CA60u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0077.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 168u, 0x0893CA60u, 0x0893B11Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0077_entry(rt, ctx, 685u, aot_mem);
#else
        recomp_unit_0077_entry(rt, ctx, 685u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 685u, 0x0893B11Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893CA60u) goto L_0893CA60;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893CA60:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0893CA98;
      }
      goto L_0893CA68;
    }
L_0893CA68:
    aot_gpr_31 = (0x0893CA70u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0077.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 170u, 0x0893CA70u, 0x0893B11Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0077_entry(rt, ctx, 685u, aot_mem);
#else
        recomp_unit_0077_entry(rt, ctx, 685u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 685u, 0x0893B11Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893CA70u) goto L_0893CA70;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893CA70:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (aot_gpr_17 | 0u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0893CA84u);
    ctx.gpr[6] = (0u | 0u);
    goto L_0893C444;
L_0893CA84:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0893CA98;
      }
      goto L_0893CA8C;
    }
L_0893CA8C:
    aot_gpr_4 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x0893CA98u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    goto L_0893C7F4;
L_0893CA98:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0893CAAC:
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 46 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_5 = (0u | 270u);
      if (branch_taken) {
          goto L_0893CACC;
      }
      goto L_0893CAB8;
    }
L_0893CAB8:
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 45 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0893CADC;
      }
      goto L_0893CAC4;
    }
L_0893CAC4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 2u);
      if (branch_taken) {
          goto L_0893CAE0;
      }
      goto L_0893CACC;
    }
L_0893CACC:
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_0893CAC4;
      }
      goto L_0893CAD4;
    }
L_0893CAD4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0893CAE0;
      }
      goto L_0893CADC;
    }
L_0893CADC:
    ctx.gpr[2] = (0u | 0u);
    goto L_0893CAE0;
L_0893CAE0:
    jump_target = aot_gpr_31;
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0893CAE8:
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 257 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 286 ? 1u : 0u);
      if (branch_taken) {
          goto L_0893CB3C;
      }
      goto L_0893CAF4;
    }
L_0893CAF4:
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 63 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_5 = (0u | 94u);
      if (branch_taken) {
          goto L_0893CB2C;
      }
      goto L_0893CB00;
    }
L_0893CB00:
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 42 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-42));
      if (branch_taken) {
          goto L_0893CB24;
      }
      goto L_0893CB0C;
    }
L_0893CB0C:
    aot_gpr_4 = (aot_gpr_4 << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_4);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-10224)));
    jump_target = ctx.gpr[1];
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0893CB24:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 14u);
      if (branch_taken) {
          goto L_0893CBC0;
      }
      goto L_0893CB2C;
    }
L_0893CB2C:
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_0893CB24;
      }
      goto L_0893CB34;
    }
L_0893CB34:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 4u);
      if (branch_taken) {
          goto L_0893CBC0;
      }
      goto L_0893CB3C;
    }
L_0893CB3C:
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-257));
      if (branch_taken) {
          goto L_0893CB24;
      }
      goto L_0893CB44;
    }
L_0893CB44:
    aot_gpr_4 = (aot_gpr_4 << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_4);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-10136)));
    jump_target = ctx.gpr[1];
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0893CB5C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0893CBC0;
      }
      goto L_0893CB64;
    }
L_0893CB64:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0893CBC0;
      }
      goto L_0893CB6C;
    }
L_0893CB6C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 2u);
      if (branch_taken) {
          goto L_0893CBC0;
      }
      goto L_0893CB74;
    }
L_0893CB74:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 3u);
      if (branch_taken) {
          goto L_0893CBC0;
      }
      goto L_0893CB7C;
    }
L_0893CB7C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 5u);
      if (branch_taken) {
          goto L_0893CBC0;
      }
      goto L_0893CB84;
    }
L_0893CB84:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 6u);
      if (branch_taken) {
          goto L_0893CBC0;
      }
      goto L_0893CB8C;
    }
L_0893CB8C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 7u);
      if (branch_taken) {
          goto L_0893CBC0;
      }
      goto L_0893CB94;
    }
L_0893CB94:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 8u);
      if (branch_taken) {
          goto L_0893CBC0;
      }
      goto L_0893CB9C;
    }
L_0893CB9C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 9u);
      if (branch_taken) {
          goto L_0893CBC0;
      }
      goto L_0893CBA4;
    }
L_0893CBA4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 10u);
      if (branch_taken) {
          goto L_0893CBC0;
      }
      goto L_0893CBAC;
    }
L_0893CBAC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 11u);
      if (branch_taken) {
          goto L_0893CBC0;
      }
      goto L_0893CBB4;
    }
L_0893CBB4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 12u);
      if (branch_taken) {
          goto L_0893CBC0;
      }
      goto L_0893CBBC;
    }
L_0893CBBC:
    ctx.gpr[2] = (0u | 13u);
    goto L_0893CBC0;
L_0893CBC0:
    jump_target = aot_gpr_31;
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0893CBC8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-64));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(48)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    ctx.gpr[18] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(48), ctx.gpr[7]);
    ctx.gpr[19] = (2232u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_gpr_17);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[7]) < 201 ? 1u : 0u);
    aot_gpr_17 = (aot_gpr_5 | 0u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-10760));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_gpr_16);
    { const std::uint32_t aot_run_words[4]{ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(36), aot_run_words); }
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_16 = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_0893CC24;
      }
      goto L_0893CC14;
    }
L_0893CC14:
    aot_gpr_5 = (2232u << 16u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x0893CC24u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-10512));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0125.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 206u, 0x0893CC24u, 0x089FB798u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0125_entry(rt, ctx, 543u, aot_mem);
#else
        recomp_unit_0125_entry(rt, ctx, 543u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0125_entry, 125u, 543u, 0x089FB798u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893CC24u) goto L_0893CC24;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893CC24:
    aot_gpr_31 = (0x0893CC2Cu);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    goto L_0893CAAC;
L_0893CC2C:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    aot_gpr_4 = (0u | 2u);
    { const bool branch_taken = ctx.gpr[20] == aot_gpr_4;
      if (branch_taken) {
          goto L_0893CC6C;
      }
      goto L_0893CC3C;
    }
L_0893CC3C:
    aot_gpr_31 = (0x0893CC44u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0077.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 209u, 0x0893CC44u, 0x0893B11Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0077_entry(rt, ctx, 685u, aot_mem);
#else
        recomp_unit_0077_entry(rt, ctx, 685u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 685u, 0x0893B11Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893CC44u) goto L_0893CC44;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893CC44:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x0893CC54u);
    ctx.gpr[6] = (0u | 8u);
    goto L_0893CBC8;
L_0893CC54:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x0893CC64u);
    ctx.gpr[6] = (aot_gpr_17 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 211u, 0x0893CC64u, 0x08ABDC58u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 389u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 389u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 389u, 0x08ABDC58u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893CC64u) goto L_0893CC64;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893CC64:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_0893CC7C;
      }
      goto L_0893CC6C;
    }
L_0893CC6C:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x0893CC78u);
    aot_gpr_5 = (aot_gpr_17 | 0u);
    goto L_0893C954;
L_0893CC78:
    ctx.gpr[20] = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    goto L_0893CC7C;
L_0893CC7C:
    aot_gpr_31 = (0x0893CC84u);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    goto L_0893CAE8;
L_0893CC84:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    ctx.gpr[20] = (0u | 14u);
    goto L_0893CC8C;
L_0893CC8C:
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[20];
    ctx.gpr[22] = (ctx.gpr[21] + ctx.gpr[21]);
      if (branch_taken) {
          goto L_0893CCF0;
      }
      goto L_0893CC94;
    }
L_0893CC94:
    ctx.gpr[22] = (ctx.gpr[22] + ctx.gpr[19]);
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_16) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0893CCF0;
      }
      goto L_0893CCA8;
    }
L_0893CCA8:
    aot_gpr_31 = (0x0893CCB0u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0077.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 219u, 0x0893CCB0u, 0x0893B11Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0077_entry(rt, ctx, 685u, aot_mem);
#else
        recomp_unit_0077_entry(rt, ctx, 685u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 685u, 0x0893B11Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893CCB0u) goto L_0893CCB0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893CCB0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    aot_gpr_31 = (0x0893CCC0u);
    ctx.gpr[6] = (aot_gpr_17 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 220u, 0x0893CCC0u, 0x08ABDD2Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 401u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 401u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 401u, 0x08ABDD2Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893CCC0u) goto L_0893CCC0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893CCC0:
    ctx.gpr[6] = (aot_mem.aot_direct_load8(ctx.gpr[22] + static_cast<std::uint32_t>(1)));
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x0893CCD0u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    goto L_0893CBC8;
L_0893CCD0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    ctx.gpr[6] = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x0893CCE8u);
    ctx.gpr[7] = (aot_gpr_29 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 222u, 0x0893CCE8u, 0x08ABE034u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 438u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 438u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 438u, 0x08ABE034u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893CCE8u) goto L_0893CCE8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893CCE8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[22] | 0u);
      if (branch_taken) {
          goto L_0893CC8C;
      }
      goto L_0893CCF0;
    }
L_0893CCF0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    ctx.gpr[2] = (ctx.gpr[21] | 0u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(48), aot_gpr_4);
    { std::uint32_t aot_run_words[8]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      ctx.gpr[20] = aot_run_words[4];
      ctx.gpr[21] = aot_run_words[5];
      ctx.gpr[22] = aot_run_words[6];
      aot_gpr_31 = aot_run_words[7];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0893CD28:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x0893CD38u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    goto L_0893CBC8;
L_0893CD38:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0893CD44:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-260));
    aot_gpr_5 = (aot_gpr_4 < static_cast<std::uint32_t>(29) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_0893CD74;
      }
      goto L_0893CD54;
    }
L_0893CD54:
    aot_gpr_4 = (aot_gpr_4 << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_4);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-10016)));
    jump_target = ctx.gpr[1];
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0893CD6C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0893CD78;
      }
      goto L_0893CD74;
    }
L_0893CD74:
    ctx.gpr[2] = (0u | 0u);
    goto L_0893CD78;
L_0893CD78:
    jump_target = aot_gpr_31;
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0893CD80:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_gpr_17);
    aot_gpr_17 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(28)));
    aot_gpr_5 = (aot_gpr_29 | 0u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), aot_gpr_31);
    aot_gpr_31 = (0x0893CDA8u);
    ctx.gpr[6] = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0077.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 232u, 0x0893CDA8u, 0x0893BB38u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0077_entry(rt, ctx, 812u, aot_mem);
#else
        recomp_unit_0077_entry(rt, ctx, 812u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 812u, 0x0893BB38u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893CDA8u) goto L_0893CDA8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893CDA8:
    aot_gpr_31 = (0x0893CDB0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_0893DF20;
L_0893CDB0:
    aot_gpr_31 = (0x0893CDB8u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0077.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 234u, 0x0893CDB8u, 0x0893BB60u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0077_entry(rt, ctx, 813u, aot_mem);
#else
        recomp_unit_0077_entry(rt, ctx, 813u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 813u, 0x0893BB60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893CDB8u) goto L_0893CDB8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893CDB8:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0893CDCC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(28)));
    aot_gpr_4 = (ctx.gpr[6] | 0u);
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(36)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = aot_gpr_5 == 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_0893CE38;
      }
      goto L_0893CDEC;
    }
L_0893CDEC:
    ctx.gpr[8] = (0u | 8u);
    goto L_0893CDF0;
L_0893CDF0:
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[8];
      if (branch_taken) {
          goto L_0893CE2C;
      }
      goto L_0893CDFC;
    }
L_0893CDFC:
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(8)));
    ctx.gpr[10] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[10];
      if (branch_taken) {
          goto L_0893CE14;
      }
      goto L_0893CE0C;
    }
L_0893CE0C:
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    goto L_0893CE14;
L_0893CE14:
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(12)));
    ctx.gpr[10] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[10];
      if (branch_taken) {
          goto L_0893CE2C;
      }
      goto L_0893CE24;
    }
L_0893CE24:
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(12), ctx.gpr[7]);
    goto L_0893CE2C;
L_0893CE2C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_0893CDF0;
      }
      goto L_0893CE38;
    }
L_0893CE38:
    { const bool branch_taken = ctx.gpr[6] == 0u;
      if (branch_taken) {
          goto L_0893CE64;
      }
      goto L_0893CE40;
    }
L_0893CE40:
    ctx.gpr[6] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(36)));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x0893CE58u);
    ctx.gpr[8] = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 245u, 0x0893CE58u, 0x08ABDFCCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 434u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 434u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 434u, 0x08ABDFCCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893CE58u) goto L_0893CE58;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893CE58:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0893CE64u);
    aot_gpr_5 = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 246u, 0x0893CE64u, 0x08ABCDC0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 194u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 194u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 194u, 0x08ABCDC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893CE64u) goto L_0893CE64;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893CE64:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0893CE74:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-80));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(44), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(48), aot_gpr_17);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(60), ctx.gpr[20]);
    ctx.gpr[20] = (aot_gpr_5 + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (static_cast<std::int32_t>(aot_gpr_4) < 5 ? 1u : 0u);
    aot_gpr_17 = (aot_gpr_5 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(52), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(56), ctx.gpr[19]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(64), aot_gpr_31);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_0893CEB8;
      }
      goto L_0893CEAC;
    }
L_0893CEAC:
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 9 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0893CEC4;
      }
      goto L_0893CEB8;
    }
L_0893CEB8:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-18336));
    aot_gpr_31 = (0x0893CEC4u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0125.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 250u, 0x0893CEC4u, 0x089FB798u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0125_entry(rt, ctx, 543u, aot_mem);
#else
        recomp_unit_0125_entry(rt, ctx, 543u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0125_entry, 125u, 543u, 0x089FB798u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893CEC4u) goto L_0893CEC4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893CEC4:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0893CED0u);
    aot_gpr_5 = (0u | 44u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0077.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 251u, 0x0893CED0u, 0x0893B208u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0077_entry(rt, ctx, 696u, aot_mem);
#else
        recomp_unit_0077_entry(rt, ctx, 696u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 696u, 0x0893B208u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893CED0u) goto L_0893CED0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893CED0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_0893CF2C;
      }
      goto L_0893CED8;
    }
L_0893CED8:
    ctx.gpr[19] = (aot_gpr_29 + static_cast<std::uint32_t>(24));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_gpr_17);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0893CEECu);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    goto L_0893C7F4;
L_0893CEEC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(24)));
    aot_gpr_5 = (0u | 5u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_0893CF0C;
      }
      goto L_0893CEFC;
    }
L_0893CEFC:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x0893CF0Cu);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    goto L_0893CDCC;
L_0893CF0C:
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(20));
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr_31 = (0x0893CF1Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_0893CE74;
L_0893CF1C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(28)));
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0893CFB8;
      }
      goto L_0893CF2C;
    }
L_0893CF2C:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0893CF38u);
    aot_gpr_5 = (0u | 61u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0077.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 258u, 0x0893CF38u, 0x0893B23Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0077_entry(rt, ctx, 701u, aot_mem);
#else
        recomp_unit_0077_entry(rt, ctx, 701u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 701u, 0x0893B23Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893CF38u) goto L_0893CF38;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893CF38:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0893CF44u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    goto L_0893C500;
L_0893CF44:
    aot_gpr_17 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_17 == ctx.gpr[18];
      if (branch_taken) {
          goto L_0893CF8C;
      }
      goto L_0893CF50;
    }
L_0893CF50:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x0893CF64u);
    ctx.gpr[7] = (aot_gpr_29 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0077.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 261u, 0x0893CF64u, 0x0893BA00u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0077_entry(rt, ctx, 794u, aot_mem);
#else
        recomp_unit_0077_entry(rt, ctx, 794u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 794u, 0x0893BA00u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893CF64u) goto L_0893CF64;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893CF64:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(aot_gpr_17) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_0893CFB4;
      }
      goto L_0893CF74;
    }
L_0893CF74:
    ctx.gpr[6] = (aot_gpr_17 - ctx.gpr[18]);
    aot_gpr_5 = (aot_gpr_5 - ctx.gpr[6]);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(36), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_0893CFB4;
      }
      goto L_0893CF8C;
    }
L_0893CF8C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(28)));
    aot_gpr_5 = (aot_gpr_29 | 0u);
    aot_gpr_31 = (0x0893CF9Cu);
    ctx.gpr[6] = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 264u, 0x0893CF9Cu, 0x08ABD018u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 218u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 218u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 218u, 0x08ABD018u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893CF9Cu) goto L_0893CF9C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893CF9C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(28)));
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x0893CFACu);
    ctx.gpr[6] = (aot_gpr_29 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 265u, 0x0893CFACu, 0x08ABD704u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 310u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 310u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 310u, 0x08ABD704u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893CFACu) goto L_0893CFAC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893CFAC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0893CFD8;
      }
      goto L_0893CFB4;
    }
L_0893CFB4:
    ctx.gpr[18] = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    goto L_0893CFB8;
L_0893CFB8:
    aot_gpr_4 = (aot_gpr_29 | 0u);
    aot_gpr_5 = (0u | 11u);
    aot_gpr_31 = (0x0893CFC8u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0077.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 268u, 0x0893CFC8u, 0x0893B394u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0077_entry(rt, ctx, 720u, aot_mem);
#else
        recomp_unit_0077_entry(rt, ctx, 720u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 720u, 0x0893B394u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893CFC8u) goto L_0893CFC8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893CFC8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(28)));
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x0893CFD8u);
    ctx.gpr[6] = (aot_gpr_29 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 269u, 0x0893CFD8u, 0x08ABD704u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 310u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 310u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 310u, 0x08ABD704u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893CFD8u) goto L_0893CFD8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893CFD8:
    { std::uint32_t aot_run_words[6]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(44), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      ctx.gpr[20] = aot_run_words[4];
      aot_gpr_31 = aot_run_words[5];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(80));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0893CFF8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_5 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_17);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    aot_gpr_31 = (0x0893D014u);
    aot_gpr_17 = (aot_gpr_4 | 0u);
    goto L_0893CD28;
L_0893D014:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (0u | 1u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_0893D02C;
      }
      goto L_0893D024;
    }
L_0893D024:
    aot_gpr_4 = (0u | 3u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(0), aot_gpr_4);
    goto L_0893D02C;
L_0893D02C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(28)));
    aot_gpr_31 = (0x0893D038u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 274u, 0x0893D038u, 0x08ABD9ECu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 347u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 347u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 347u, 0x08ABD9ECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893D038u) goto L_0893D038;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893D038:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(28)));
    aot_gpr_31 = (0x0893D044u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(12)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 275u, 0x0893D044u, 0x08ABCC8Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 176u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 176u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 176u, 0x08ABCC8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893D044u) goto L_0893D044;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893D044:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0893D058:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-512));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(460), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(464), aot_gpr_17);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_17 = (aot_gpr_5 | 0u);
    { const std::uint32_t aot_run_words[8]{ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], ctx.gpr[23], ctx.gpr[30], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(468), aot_run_words); }
    aot_gpr_31 = (0x0893D094u);
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(28)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0077.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 277u, 0x0893D094u, 0x0893B11Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0077_entry(rt, ctx, 685u, aot_mem);
#else
        recomp_unit_0077_entry(rt, ctx, 685u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 685u, 0x0893B11Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893D094u) goto L_0893D094;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893D094:
    aot_gpr_31 = (0x0893D09Cu);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 278u, 0x0893D09Cu, 0x08ABC824u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 121u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 121u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 121u, 0x08ABC824u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893D09Cu) goto L_0893D09C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893D09C:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    aot_gpr_31 = (0x0893D0A8u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 279u, 0x0893D0A8u, 0x08ABC95Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 132u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 132u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 132u, 0x08ABC95Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893D0A8u) goto L_0893D0A8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893D0A8:
    ctx.gpr[21] = (aot_gpr_29 + static_cast<std::uint32_t>(420));
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0893D0BCu);
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    goto L_0893CD28;
L_0893D0BC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(420)));
    aot_gpr_5 = (0u | 4u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    ctx.gpr[22] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0893D0D4;
      }
      goto L_0893D0CC;
    }
L_0893D0CC:
    aot_gpr_4 = (0u | 2u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(420), aot_gpr_4);
    goto L_0893D0D4;
L_0893D0D4:
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    ctx.gpr[21] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    aot_gpr_31 = (0x0893D0E4u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 283u, 0x0893D0E4u, 0x08ABDA94u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 361u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 361u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 361u, 0x08ABDA94u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893D0E4u) goto L_0893D0E4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893D0E4:
    ctx.gpr[6] = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(32)));
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(436));
    aot_gpr_31 = (0x0893D0F4u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 284u, 0x0893D0F4u, 0x08ABCCCCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 179u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 179u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 179u, 0x08ABCCCCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893D0F4u) goto L_0893D0F4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893D0F4:
    ctx.gpr[23] = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    ctx.gpr[23] = (ctx.gpr[23] - ctx.gpr[20]);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[23]) < 101 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(32), ctx.gpr[22]);
      if (branch_taken) {
          goto L_0893D118;
      }
      goto L_0893D108;
    }
L_0893D108:
    aot_gpr_5 = (2232u << 16u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0893D118u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-10488));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0125.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 286u, 0x0893D118u, 0x089FB798u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0125_entry(rt, ctx, 543u, aot_mem);
#else
        recomp_unit_0125_entry(rt, ctx, 543u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0125_entry, 125u, 543u, 0x089FB798u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893D118u) goto L_0893D118;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893D118:
    ctx.gpr[6] = (0u | 0u);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[23]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (ctx.gpr[20] << 2u);
      if (branch_taken) {
          goto L_0893D154;
      }
      goto L_0893D128;
    }
L_0893D128:
    aot_gpr_5 = (aot_gpr_29 | 0u);
    goto L_0893D12C;
L_0893D12C:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(12)));
    ctx.gpr[7] = (ctx.gpr[7] + aot_gpr_4);
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[23]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0893D12C;
      }
      goto L_0893D154;
    }
L_0893D154:
    ctx.gpr[30] = (ctx.gpr[19] | 0u);
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(440));
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x0893D16Cu);
    ctx.gpr[6] = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0077.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 290u, 0x0893D16Cu, 0x0893BB38u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0077_entry(rt, ctx, 812u, aot_mem);
#else
        recomp_unit_0077_entry(rt, ctx, 812u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 812u, 0x0893BB38u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893D16Cu) goto L_0893D16C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893D16C:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0893D178u);
    aot_gpr_5 = (0u | 259u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0077.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 291u, 0x0893D178u, 0x0893B23Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0077_entry(rt, ctx, 701u, aot_mem);
#else
        recomp_unit_0077_entry(rt, ctx, 701u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 701u, 0x0893B23Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893D178u) goto L_0893D178;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893D178:
    aot_gpr_31 = (0x0893D180u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 292u, 0x0893D180u, 0x08ABC95Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 132u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 132u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 132u, 0x08ABC95Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893D180u) goto L_0893D180;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893D180:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    aot_gpr_31 = (0x0893D18Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_0893CD80;
L_0893D18C:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x0893D198u);
    aot_gpr_5 = (ctx.gpr[30] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 294u, 0x0893D198u, 0x08ABCC8Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 176u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 176u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 176u, 0x08ABCC8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893D198u) goto L_0893D198;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893D198:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(432)));
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[22];
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(436)));
      if (branch_taken) {
          goto L_0893D1B4;
      }
      goto L_0893D1A4;
    }
L_0893D1A4:
    ctx.gpr[6] = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[20]);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[6]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(432), aot_gpr_4);
    goto L_0893D1B4;
L_0893D1B4:
    { const bool branch_taken = aot_gpr_5 == ctx.gpr[22];
      if (branch_taken) {
          goto L_0893D1CC;
      }
      goto L_0893D1BC;
    }
L_0893D1BC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    aot_gpr_4 = (aot_gpr_4 - ctx.gpr[20]);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(436), aot_gpr_4);
    goto L_0893D1CC;
L_0893D1CC:
    ctx.gpr[20] = (0u | 0u);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[23]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[22] = (aot_gpr_29 | 0u);
      if (branch_taken) {
          goto L_0893D1FC;
      }
      goto L_0893D1DC;
    }
L_0893D1DC:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x0893D1ECu);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 300u, 0x0893D1ECu, 0x08ABDECCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 426u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 426u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 426u, 0x08ABDECCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893D1ECu) goto L_0893D1EC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893D1EC:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[23]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0893D1DC;
      }
      goto L_0893D1FC;
    }
L_0893D1FC:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (0u | 262u);
    ctx.gpr[6] = (0u | 277u);
    aot_gpr_31 = (0x0893D210u);
    ctx.gpr[7] = (aot_gpr_17 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0077.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 302u, 0x0893D210u, 0x0893B280u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0077_entry(rt, ctx, 705u, aot_mem);
#else
        recomp_unit_0077_entry(rt, ctx, 705u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 705u, 0x0893B280u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893D210u) goto L_0893D210;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893D210:
    aot_gpr_31 = (0x0893D218u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0077.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 303u, 0x0893D218u, 0x0893BB60u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0077_entry(rt, ctx, 813u, aot_mem);
#else
        recomp_unit_0077_entry(rt, ctx, 813u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 813u, 0x0893BB60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893D218u) goto L_0893D218;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893D218:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(432)));
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x0893D228u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 304u, 0x0893D228u, 0x08ABCC38u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 171u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 171u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 171u, 0x08ABCC38u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893D228u) goto L_0893D228;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893D228:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(436)));
    aot_gpr_31 = (0x0893D234u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 305u, 0x0893D234u, 0x08ABCC8Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 176u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 176u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 176u, 0x08ABCC8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893D234u) goto L_0893D234;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893D234:
    { std::uint32_t aot_run_words[10]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(460), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
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
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(512));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0893D264:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-64));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(40), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(44), aot_gpr_17);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(48), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(28)));
    aot_gpr_17 = (aot_gpr_5 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(52), ctx.gpr[19]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(56), aot_gpr_31);
    aot_gpr_31 = (0x0893D290u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 307u, 0x0893D290u, 0x08ABC95Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 132u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 132u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 132u, 0x08ABC95Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893D290u) goto L_0893D290;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893D290:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(20));
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x0893D2A4u);
    ctx.gpr[6] = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0077.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 308u, 0x0893D2A4u, 0x0893BB38u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0077_entry(rt, ctx, 812u, aot_mem);
#else
        recomp_unit_0077_entry(rt, ctx, 812u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 812u, 0x0893BB38u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893D2A4u) goto L_0893D2A4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893D2A4:
    aot_gpr_31 = (0x0893D2ACu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0077.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 309u, 0x0893D2ACu, 0x0893B11Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0077_entry(rt, ctx, 685u, aot_mem);
#else
        recomp_unit_0077_entry(rt, ctx, 685u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 685u, 0x0893B11Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893D2ACu) goto L_0893D2AC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893D2AC:
    aot_gpr_31 = (0x0893D2B4u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_0893CD80;
L_0893D2B4:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (0u | 276u);
    ctx.gpr[6] = (0u | 272u);
    aot_gpr_31 = (0x0893D2C8u);
    ctx.gpr[7] = (aot_gpr_17 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0077.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 311u, 0x0893D2C8u, 0x0893B280u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0077_entry(rt, ctx, 705u, aot_mem);
#else
        recomp_unit_0077_entry(rt, ctx, 705u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 705u, 0x0893B280u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893D2C8u) goto L_0893D2C8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893D2C8:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0893D2D4u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    goto L_0893CFF8;
L_0893D2D4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x0893D2E4u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 313u, 0x0893D2E4u, 0x08ABCC38u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 171u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 171u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 171u, 0x08ABCC38u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893D2E4u) goto L_0893D2E4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893D2E4:
    aot_gpr_31 = (0x0893D2ECu);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0077.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 314u, 0x0893D2ECu, 0x0893BB60u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0077_entry(rt, ctx, 813u, aot_mem);
#else
        recomp_unit_0077_entry(rt, ctx, 813u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 813u, 0x0893BB60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893D2ECu) goto L_0893D2EC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893D2EC:
    { std::uint32_t aot_run_words[5]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(40), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      aot_gpr_31 = aot_run_words[4];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0893D308:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_gpr_31);
    aot_gpr_31 = (0x0893D320u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    goto L_0893CD28;
L_0893D320:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(28)));
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (0x0893D330u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 317u, 0x0893D330u, 0x08ABD4FCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 275u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 275u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 275u, 0x08ABD4FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893D330u) goto L_0893D330;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893D330:
    ctx.gpr[2] = (aot_gpr_16 | 0u);
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(24)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0893D344:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-64));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(44), ctx.gpr[22]);
    ctx.gpr[22] = (aot_gpr_4 | 0u);
    { const std::uint32_t aot_run_words[3]{aot_gpr_16, aot_gpr_17, ctx.gpr[18]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_run_words); }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(40), ctx.gpr[21]);
    ctx.gpr[18] = (ctx.gpr[7] | 0u);
    ctx.gpr[21] = (aot_gpr_5 | 0u);
    aot_gpr_16 = (ctx.gpr[8] | 0u);
    aot_gpr_17 = (ctx.gpr[6] | 0u);
    ctx.gpr[20] = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(48), aot_gpr_31);
    aot_gpr_31 = (0x0893D388u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0077.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 319u, 0x0893D388u, 0x0893B54Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0077_entry(rt, ctx, 734u, aot_mem);
#else
        recomp_unit_0077_entry(rt, ctx, 734u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 734u, 0x0893B54Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893D388u) goto L_0893D388;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893D388:
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    aot_gpr_31 = (0x0893D394u);
    aot_gpr_5 = (0u | 259u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0077.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 320u, 0x0893D394u, 0x0893B23Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0077_entry(rt, ctx, 701u, aot_mem);
#else
        recomp_unit_0077_entry(rt, ctx, 701u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 701u, 0x0893B23Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893D394u) goto L_0893D394;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893D394:
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    aot_gpr_31 = (0x0893D3A4u);
    ctx.gpr[6] = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0077.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 321u, 0x0893D3A4u, 0x0893BB38u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0077_entry(rt, ctx, 812u, aot_mem);
#else
        recomp_unit_0077_entry(rt, ctx, 812u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 812u, 0x0893BB38u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893D3A4u) goto L_0893D3A4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893D3A4:
    aot_gpr_31 = (0x0893D3ACu);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 322u, 0x0893D3ACu, 0x08ABC95Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 132u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 132u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 132u, 0x08ABC95Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893D3ACu) goto L_0893D3AC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893D3AC:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    aot_gpr_31 = (0x0893D3B8u);
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    goto L_0893CD80;
L_0893D3B8:
    aot_gpr_5 = (ctx.gpr[19] + static_cast<std::uint32_t>(-1));
    aot_gpr_31 = (0x0893D3C4u);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 324u, 0x0893D3C4u, 0x08ABCC8Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 176u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 176u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 176u, 0x08ABCC8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893D3C4u) goto L_0893D3C4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893D3C4:
    { const bool branch_taken = aot_gpr_16 == 0u;
    ctx.gpr[8] = (ctx.gpr[18] + static_cast<std::uint32_t>(-3));
      if (branch_taken) {
          goto L_0893D3EC;
      }
      goto L_0893D3CC;
    }
L_0893D3CC:
    ctx.gpr[7] = (2u << 16u);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_5 = (0u | 28u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    aot_gpr_31 = (0x0893D3E4u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-2));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 326u, 0x0893D3E4u, 0x08ABE004u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 436u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 436u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 436u, 0x08ABE004u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893D3E4u) goto L_0893D3E4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893D3E4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_0893D404;
      }
      goto L_0893D3EC;
    }
L_0893D3EC:
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_5 = (0u | 29u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    aot_gpr_31 = (0x0893D400u);
    ctx.gpr[7] = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 328u, 0x0893D400u, 0x08ABDFCCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 434u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 434u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 434u, 0x08ABDFCCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893D400u) goto L_0893D400;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893D400:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    goto L_0893D404;
L_0893D404:
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x0893D410u);
    aot_gpr_5 = (aot_gpr_17 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 330u, 0x0893D410u, 0x08ABDEB0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 425u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 425u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 425u, 0x08ABDEB0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893D410u) goto L_0893D410;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893D410:
    { const bool branch_taken = aot_gpr_16 != 0u;
    aot_gpr_4 = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_0893D428;
      }
      goto L_0893D418;
    }
L_0893D418:
    aot_gpr_31 = (0x0893D420u);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 332u, 0x0893D420u, 0x08ABC824u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 121u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 121u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 121u, 0x08ABC824u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893D420u) goto L_0893D420;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893D420:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    goto L_0893D428;
L_0893D428:
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x0893D434u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 334u, 0x0893D434u, 0x08ABCC38u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 171u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 171u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 171u, 0x08ABCC38u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893D434u) goto L_0893D434;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893D434:
    aot_gpr_31 = (0x0893D43Cu);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0077.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 335u, 0x0893D43Cu, 0x0893BB60u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0077_entry(rt, ctx, 813u, aot_mem);
#else
        recomp_unit_0077_entry(rt, ctx, 813u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 813u, 0x0893BB60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893D43Cu) goto L_0893D43C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893D43C:
    { std::uint32_t aot_run_words[8]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      ctx.gpr[20] = aot_run_words[4];
      ctx.gpr[21] = aot_run_words[5];
      ctx.gpr[22] = aot_run_words[6];
      aot_gpr_31 = aot_run_words[7];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0893D464:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_17);
    aot_gpr_17 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.gpr[19] = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(28)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_gpr_16 = (ctx.gpr[6] | 0u);
    ctx.gpr[18] = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_gpr_31);
    aot_gpr_31 = (0x0893D498u);
    ctx.gpr[6] = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0077.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 337u, 0x0893D498u, 0x0893B4C4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0077_entry(rt, ctx, 731u, aot_mem);
#else
        recomp_unit_0077_entry(rt, ctx, 731u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 731u, 0x0893B4C4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893D498u) goto L_0893D498;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893D498:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-18320));
    aot_gpr_4 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x0893D4A8u);
    ctx.gpr[6] = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0077.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 338u, 0x0893D4A8u, 0x0893B604u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0077_entry(rt, ctx, 741u, aot_mem);
#else
        recomp_unit_0077_entry(rt, ctx, 741u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 741u, 0x0893B604u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893D4A8u) goto L_0893D4A8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893D4A8:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-18308));
    aot_gpr_4 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x0893D4B8u);
    ctx.gpr[6] = (0u | 2u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0077.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 339u, 0x0893D4B8u, 0x0893B604u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0077_entry(rt, ctx, 741u, aot_mem);
#else
        recomp_unit_0077_entry(rt, ctx, 741u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 741u, 0x0893B604u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893D4B8u) goto L_0893D4B8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893D4B8:
    aot_gpr_4 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x0893D4C4u);
    aot_gpr_5 = (0u | 61u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0077.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 340u, 0x0893D4C4u, 0x0893B23Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0077_entry(rt, ctx, 701u, aot_mem);
#else
        recomp_unit_0077_entry(rt, ctx, 701u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 701u, 0x0893B23Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893D4C4u) goto L_0893D4C4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893D4C4:
    aot_gpr_31 = (0x0893D4CCu);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    goto L_0893D308;
L_0893D4CC:
    aot_gpr_4 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x0893D4D8u);
    aot_gpr_5 = (0u | 44u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0077.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 342u, 0x0893D4D8u, 0x0893B23Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0077_entry(rt, ctx, 701u, aot_mem);
#else
        recomp_unit_0077_entry(rt, ctx, 701u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 701u, 0x0893B23Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893D4D8u) goto L_0893D4D8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893D4D8:
    aot_gpr_31 = (0x0893D4E0u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    goto L_0893D308;
L_0893D4E0:
    aot_gpr_4 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x0893D4ECu);
    aot_gpr_5 = (0u | 44u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0077.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 344u, 0x0893D4ECu, 0x0893B208u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0077_entry(rt, ctx, 696u, aot_mem);
#else
        recomp_unit_0077_entry(rt, ctx, 696u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 696u, 0x0893B208u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893D4ECu) goto L_0893D4EC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893D4EC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_0893D50C;
      }
      goto L_0893D4F4;
    }
L_0893D4F4:
    aot_gpr_31 = (0x0893D4FCu);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    goto L_0893D308;
L_0893D4FC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(36)));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(-3));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0893D54C;
      }
      goto L_0893D50C;
    }
L_0893D50C:
    aot_gpr_5 = (16256u << 16u);
    ctx.gpr[20] = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(36)));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_31 = (0x0893D520u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 348u, 0x0893D520u, 0x08ABCFB8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 214u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 214u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 214u, 0x08ABCFB8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893D520u) goto L_0893D520;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893D520:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_5 = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x0893D534u);
    ctx.gpr[7] = (ctx.gpr[2] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 349u, 0x0893D534u, 0x08ABE004u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 436u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 436u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 436u, 0x08ABE004u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893D534u) goto L_0893D534;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893D534:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x0893D540u);
    aot_gpr_5 = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 350u, 0x0893D540u, 0x08ABCDC0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 194u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 194u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 194u, 0x08ABCDC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893D540u) goto L_0893D540;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893D540:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(36)));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(-3));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    goto L_0893D54C;
L_0893D54C:
    ctx.gpr[7] = (aot_gpr_5 | 0u);
    ctx.gpr[8] = (aot_gpr_4 | 0u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_5 = (0u | 13u);
    aot_gpr_31 = (0x0893D564u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 352u, 0x0893D564u, 0x08ABDFCCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 434u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 434u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 434u, 0x08ABDFCCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893D564u) goto L_0893D564;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893D564:
    aot_gpr_31 = (0x0893D56Cu);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 353u, 0x0893D56Cu, 0x08ABC824u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 121u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 121u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 121u, 0x08ABC824u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893D56Cu) goto L_0893D56C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893D56C:
    aot_gpr_4 = (aot_gpr_17 | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (aot_gpr_16 | 0u);
    ctx.gpr[7] = (0u | 3u);
    aot_gpr_31 = (0x0893D584u);
    ctx.gpr[8] = (0u | 1u);
    goto L_0893D344;
L_0893D584:
    { std::uint32_t aot_run_words[6]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      ctx.gpr[20] = aot_run_words[4];
      aot_gpr_31 = aot_run_words[5];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0893D5A4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    ctx.gpr[19] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(28)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    ctx.gpr[20] = (aot_gpr_5 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_gpr_17);
    aot_gpr_17 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(36)));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-18296));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(40), aot_gpr_31);
    aot_gpr_31 = (0x0893D5DCu);
    ctx.gpr[6] = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0077.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 356u, 0x0893D5DCu, 0x0893B604u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0077_entry(rt, ctx, 741u, aot_mem);
#else
        recomp_unit_0077_entry(rt, ctx, 741u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 741u, 0x0893B604u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893D5DCu) goto L_0893D5DC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893D5DC:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-18280));
    ctx.gpr[6] = (0u | 1u);
    aot_gpr_31 = (0x0893D5ECu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0077.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 357u, 0x0893D5ECu, 0x0893B604u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0077_entry(rt, ctx, 741u, aot_mem);
#else
        recomp_unit_0077_entry(rt, ctx, 741u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 741u, 0x0893B604u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893D5ECu) goto L_0893D5EC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893D5EC:
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[18] = (0u | 3u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0893D600u);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0077.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 358u, 0x0893D600u, 0x0893B4C4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0077_entry(rt, ctx, 731u, aot_mem);
#else
        recomp_unit_0077_entry(rt, ctx, 731u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 731u, 0x0893B4C4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893D600u) goto L_0893D600;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893D600:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_0893D604;
L_0893D604:
    aot_gpr_31 = (0x0893D60Cu);
    aot_gpr_5 = (0u | 44u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0077.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 360u, 0x0893D60Cu, 0x0893B208u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0077_entry(rt, ctx, 696u, aot_mem);
#else
        recomp_unit_0077_entry(rt, ctx, 696u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 696u, 0x0893B208u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893D60Cu) goto L_0893D60C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893D60C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_0893D638;
      }
      goto L_0893D614;
    }
L_0893D614:
    aot_gpr_31 = (0x0893D61Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0077.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 362u, 0x0893D61Cu, 0x0893B34Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0077_entry(rt, ctx, 715u, aot_mem);
#else
        recomp_unit_0077_entry(rt, ctx, 715u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 715u, 0x0893B34Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893D61Cu) goto L_0893D61C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893D61C:
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0893D630u);
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0077.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 363u, 0x0893D630u, 0x0893B4C4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0077_entry(rt, ctx, 731u, aot_mem);
#else
        recomp_unit_0077_entry(rt, ctx, 731u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 731u, 0x0893B4C4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893D630u) goto L_0893D630;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893D630:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_gpr_16 | 0u);
      if (branch_taken) {
          goto L_0893D604;
      }
      goto L_0893D638;
    }
L_0893D638:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0893D644u);
    aot_gpr_5 = (0u | 267u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0077.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 365u, 0x0893D644u, 0x0893B23Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0077_entry(rt, ctx, 701u, aot_mem);
#else
        recomp_unit_0077_entry(rt, ctx, 701u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 701u, 0x0893B23Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893D644u) goto L_0893D644;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893D644:
    ctx.gpr[20] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0893D654u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    goto L_0893C500;
L_0893D654:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    aot_gpr_31 = (0x0893D668u);
    ctx.gpr[7] = (aot_gpr_29 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0077.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 367u, 0x0893D668u, 0x0893BA00u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0077_entry(rt, ctx, 794u, aot_mem);
#else
        recomp_unit_0077_entry(rt, ctx, 794u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 794u, 0x0893BA00u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893D668u) goto L_0893D668;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893D668:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x0893D674u);
    aot_gpr_5 = (0u | 3u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 368u, 0x0893D674u, 0x08ABCD5Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 188u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 188u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 188u, 0x08ABCD5Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893D674u) goto L_0893D674;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893D674:
    ctx.gpr[7] = (2u << 16u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_5 = (0u | 30u);
    ctx.gpr[6] = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x0893D68Cu);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-2));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 369u, 0x0893D68Cu, 0x08ABE004u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 436u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 436u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 436u, 0x08ABE004u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893D68Cu) goto L_0893D68C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893D68C:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (aot_gpr_17 | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x0893D6A4u);
    ctx.gpr[8] = (0u | 0u);
    goto L_0893D344;
L_0893D6A4:
    { std::uint32_t aot_run_words[6]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      ctx.gpr[20] = aot_run_words[4];
      aot_gpr_31 = aot_run_words[5];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0893D6C4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_gpr_17);
    aot_gpr_17 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(28)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_gpr_31);
    aot_gpr_31 = (0x0893D6F4u);
    ctx.gpr[6] = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0077.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 372u, 0x0893D6F4u, 0x0893BB38u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0077_entry(rt, ctx, 812u, aot_mem);
#else
        recomp_unit_0077_entry(rt, ctx, 812u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 812u, 0x0893BB38u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893D6F4u) goto L_0893D6F4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893D6F4:
    aot_gpr_31 = (0x0893D6FCu);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0077.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 373u, 0x0893D6FCu, 0x0893B11Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0077_entry(rt, ctx, 685u, aot_mem);
#else
        recomp_unit_0077_entry(rt, ctx, 685u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 685u, 0x0893B11Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893D6FCu) goto L_0893D6FC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893D6FC:
    aot_gpr_31 = (0x0893D704u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0077.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 374u, 0x0893D704u, 0x0893B34Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0077_entry(rt, ctx, 715u, aot_mem);
#else
        recomp_unit_0077_entry(rt, ctx, 715u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 715u, 0x0893B34Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893D704u) goto L_0893D704;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893D704:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (0u | 267u);
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[6];
    aot_gpr_5 = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_0893D728;
      }
      goto L_0893D714;
    }
L_0893D714:
    ctx.gpr[6] = (0u | 61u);
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[6];
    ctx.gpr[6] = (0u | 44u);
      if (branch_taken) {
          goto L_0893D738;
      }
      goto L_0893D720;
    }
L_0893D720:
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[6];
      if (branch_taken) {
          goto L_0893D74C;
      }
      goto L_0893D728;
    }
L_0893D728:
    aot_gpr_31 = (0x0893D730u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    goto L_0893D5A4;
L_0893D730:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0893D75C;
      }
      goto L_0893D738;
    }
L_0893D738:
    aot_gpr_4 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x0893D744u);
    ctx.gpr[6] = (aot_gpr_16 | 0u);
    goto L_0893D464;
L_0893D744:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0893D75C;
      }
      goto L_0893D74C;
    }
L_0893D74C:
    aot_gpr_5 = (2232u << 16u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x0893D75Cu);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-10456));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0125.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 382u, 0x0893D75Cu, 0x089FB798u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0125_entry(rt, ctx, 543u, aot_mem);
#else
        recomp_unit_0125_entry(rt, ctx, 543u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0125_entry, 125u, 543u, 0x089FB798u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893D75Cu) goto L_0893D75C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893D75C:
    aot_gpr_4 = (aot_gpr_17 | 0u);
    aot_gpr_5 = (0u | 262u);
    ctx.gpr[6] = (0u | 264u);
    aot_gpr_31 = (0x0893D770u);
    ctx.gpr[7] = (aot_gpr_16 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0077.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 383u, 0x0893D770u, 0x0893B280u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0077_entry(rt, ctx, 705u, aot_mem);
#else
        recomp_unit_0077_entry(rt, ctx, 705u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 705u, 0x0893B280u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893D770u) goto L_0893D770;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893D770:
    aot_gpr_31 = (0x0893D778u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0077.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 384u, 0x0893D778u, 0x0893BB60u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0077_entry(rt, ctx, 813u, aot_mem);
#else
        recomp_unit_0077_entry(rt, ctx, 813u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 813u, 0x0893BB60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893D778u) goto L_0893D778;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893D778:
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0893D790:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_17);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    aot_gpr_31 = (0x0893D7ACu);
    aot_gpr_17 = (aot_gpr_5 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0077.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 386u, 0x0893D7ACu, 0x0893B11Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0077_entry(rt, ctx, 685u, aot_mem);
#else
        recomp_unit_0077_entry(rt, ctx, 685u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 685u, 0x0893B11Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893D7ACu) goto L_0893D7AC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893D7AC:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0893D7B8u);
    aot_gpr_5 = (aot_gpr_17 | 0u);
    goto L_0893CFF8;
L_0893D7B8:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0893D7C4u);
    aot_gpr_5 = (0u | 274u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0077.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 388u, 0x0893D7C4u, 0x0893B23Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0077_entry(rt, ctx, 701u, aot_mem);
#else
        recomp_unit_0077_entry(rt, ctx, 701u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 701u, 0x0893B23Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893D7C4u) goto L_0893D7C4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893D7C4:
    aot_gpr_31 = (0x0893D7CCu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_0893CD80;
L_0893D7CC:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0893D7E0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), aot_gpr_17);
    aot_gpr_17 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    ctx.gpr[19] = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(28)));
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_5 | 0u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(40), ctx.gpr[20]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(44), aot_gpr_31);
    aot_gpr_31 = (0x0893D81Cu);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    goto L_0893D790;
L_0893D81C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(12)));
    ctx.gpr[20] = (0u | 261u);
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[20];
    ctx.gpr[18] = (aot_gpr_29 + static_cast<std::uint32_t>(20));
      if (branch_taken) {
          goto L_0893D868;
      }
      goto L_0893D82C;
    }
L_0893D82C:
    aot_gpr_31 = (0x0893D834u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 393u, 0x0893D834u, 0x08ABC824u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 121u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 121u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 121u, 0x08ABC824u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893D834u) goto L_0893D834;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893D834:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x0893D844u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 394u, 0x0893D844u, 0x08ABCCCCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 179u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 179u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 179u, 0x08ABCCCCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893D844u) goto L_0893D844;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893D844:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    aot_gpr_31 = (0x0893D850u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 395u, 0x0893D850u, 0x08ABCC8Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 176u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 176u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 176u, 0x08ABCC8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893D850u) goto L_0893D850;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893D850:
    aot_gpr_4 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x0893D85Cu);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    goto L_0893D790;
L_0893D85C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[20];
      if (branch_taken) {
          goto L_0893D82C;
      }
      goto L_0893D868;
    }
L_0893D868:
    aot_gpr_5 = (0u | 260u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_0893D8B0;
      }
      goto L_0893D874;
    }
L_0893D874:
    aot_gpr_31 = (0x0893D87Cu);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 399u, 0x0893D87Cu, 0x08ABC824u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 121u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 121u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 121u, 0x08ABC824u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893D87Cu) goto L_0893D87C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893D87C:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x0893D88Cu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 400u, 0x0893D88Cu, 0x08ABCCCCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 179u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 179u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 179u, 0x08ABCCCCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893D88Cu) goto L_0893D88C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893D88C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    aot_gpr_31 = (0x0893D898u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 401u, 0x0893D898u, 0x08ABCC8Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 176u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 176u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 176u, 0x08ABCC8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893D898u) goto L_0893D898;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893D898:
    aot_gpr_31 = (0x0893D8A0u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0077.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 402u, 0x0893D8A0u, 0x0893B11Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0077_entry(rt, ctx, 685u, aot_mem);
#else
        recomp_unit_0077_entry(rt, ctx, 685u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 685u, 0x0893B11Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893D8A0u) goto L_0893D8A0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893D8A0:
    aot_gpr_31 = (0x0893D8A8u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    goto L_0893CD80;
L_0893D8A8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_0893D8C4;
      }
      goto L_0893D8B0;
    }
L_0893D8B0:
    ctx.gpr[6] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x0893D8C0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 405u, 0x0893D8C0u, 0x08ABCCCCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 179u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 179u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 179u, 0x08ABCCCCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893D8C0u) goto L_0893D8C0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893D8C0:
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    goto L_0893D8C4;
L_0893D8C4:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x0893D8D0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 407u, 0x0893D8D0u, 0x08ABCC8Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 176u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 176u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 176u, 0x08ABCC8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893D8D0u) goto L_0893D8D0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893D8D0:
    aot_gpr_4 = (aot_gpr_17 | 0u);
    aot_gpr_5 = (0u | 262u);
    ctx.gpr[6] = (0u | 266u);
    aot_gpr_31 = (0x0893D8E4u);
    ctx.gpr[7] = (aot_gpr_16 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0077.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 408u, 0x0893D8E4u, 0x0893B280u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0077_entry(rt, ctx, 705u, aot_mem);
#else
        recomp_unit_0077_entry(rt, ctx, 705u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 705u, 0x0893B280u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893D8E4u) goto L_0893D8E4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893D8E4:
    { std::uint32_t aot_run_words[6]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      ctx.gpr[20] = aot_run_words[4];
      aot_gpr_31 = aot_run_words[5];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0893D904:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-64));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(40), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    { const std::uint32_t aot_run_words[3]{aot_gpr_17, ctx.gpr[18], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(44), aot_run_words); }
    aot_gpr_31 = (0x0893D924u);
    aot_gpr_17 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(28)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0077.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 410u, 0x0893D924u, 0x0893B34Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0077_entry(rt, ctx, 715u, aot_mem);
#else
        recomp_unit_0077_entry(rt, ctx, 715u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 715u, 0x0893B34Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893D924u) goto L_0893D924;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893D924:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    aot_gpr_31 = (0x0893D934u);
    ctx.gpr[6] = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0077.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 411u, 0x0893D934u, 0x0893B4C4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0077_entry(rt, ctx, 731u, aot_mem);
#else
        recomp_unit_0077_entry(rt, ctx, 731u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 731u, 0x0893B4C4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893D934u) goto L_0893D934;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893D934:
    ctx.gpr[6] = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(36)));
    aot_gpr_4 = (aot_gpr_29 | 0u);
    aot_gpr_31 = (0x0893D944u);
    aot_gpr_5 = (0u | 5u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0077.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 412u, 0x0893D944u, 0x0893B394u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0077_entry(rt, ctx, 720u, aot_mem);
#else
        recomp_unit_0077_entry(rt, ctx, 720u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 720u, 0x0893B394u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893D944u) goto L_0893D944;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893D944:
    aot_gpr_4 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x0893D950u);
    aot_gpr_5 = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 413u, 0x0893D950u, 0x08ABCDC0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 194u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 194u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 194u, 0x08ABCDC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893D950u) goto L_0893D950;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893D950:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0893D95Cu);
    aot_gpr_5 = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0077.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 414u, 0x0893D95Cu, 0x0893B54Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0077_entry(rt, ctx, 734u, aot_mem);
#else
        recomp_unit_0077_entry(rt, ctx, 734u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 734u, 0x0893B54Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893D95Cu) goto L_0893D95C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893D95C:
    ctx.gpr[18] = (aot_gpr_29 + static_cast<std::uint32_t>(20));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x0893D974u);
    ctx.gpr[6] = (0u | 0u);
    goto L_0893C444;
L_0893D974:
    aot_gpr_4 = (aot_gpr_17 | 0u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    aot_gpr_31 = (0x0893D984u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 416u, 0x0893D984u, 0x08ABD704u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 310u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 310u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 310u, 0x08ABD704u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893D984u) goto L_0893D984;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893D984:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(52)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_17 + aot_gpr_4);
    ctx.gpr[6] = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(24)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(692)));
    ctx.gpr[7] = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(24)));
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[7]);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(40), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0893D9CC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_gpr_17);
    aot_gpr_17 = (0u | 0u);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), aot_gpr_31);
    goto L_0893D9E4;
L_0893D9E4:
    aot_gpr_31 = (0x0893D9ECu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0077.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 419u, 0x0893D9ECu, 0x0893B34Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0077_entry(rt, ctx, 715u, aot_mem);
#else
        recomp_unit_0077_entry(rt, ctx, 715u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 715u, 0x0893B34Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893D9ECu) goto L_0893D9EC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893D9EC:
    ctx.gpr[6] = (aot_gpr_17 | 0u);
    aot_gpr_17 = (aot_gpr_17 + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0893DA00u);
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0077.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 420u, 0x0893DA00u, 0x0893B4C4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0077_entry(rt, ctx, 731u, aot_mem);
#else
        recomp_unit_0077_entry(rt, ctx, 731u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 731u, 0x0893B4C4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893DA00u) goto L_0893DA00;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893DA00:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0893DA0Cu);
    aot_gpr_5 = (0u | 44u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0077.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 421u, 0x0893DA0Cu, 0x0893B208u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0077_entry(rt, ctx, 696u, aot_mem);
#else
        recomp_unit_0077_entry(rt, ctx, 696u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 696u, 0x0893B208u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893DA0Cu) goto L_0893DA0C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893DA0C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_0893D9E4;
      }
      goto L_0893DA14;
    }
L_0893DA14:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0893DA20u);
    aot_gpr_5 = (0u | 61u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0077.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 423u, 0x0893DA20u, 0x0893B208u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0077_entry(rt, ctx, 696u, aot_mem);
#else
        recomp_unit_0077_entry(rt, ctx, 696u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 696u, 0x0893B208u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893DA20u) goto L_0893DA20;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893DA20:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_0893DA3C;
      }
      goto L_0893DA28;
    }
L_0893DA28:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0893DA34u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    goto L_0893C500;
L_0893DA34:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_0893DA44;
      }
      goto L_0893DA3C;
    }
L_0893DA3C:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), 0u);
    aot_gpr_4 = (0u | 0u);
    goto L_0893DA44;
L_0893DA44:
    ctx.gpr[6] = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x0893DA58u);
    ctx.gpr[7] = (aot_gpr_29 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0077.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 428u, 0x0893DA58u, 0x0893BA00u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0077_entry(rt, ctx, 794u, aot_mem);
#else
        recomp_unit_0077_entry(rt, ctx, 794u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 794u, 0x0893BA00u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893DA58u) goto L_0893DA58;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893DA58:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0893DA64u);
    aot_gpr_5 = (aot_gpr_17 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0077.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 429u, 0x0893DA64u, 0x0893B54Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0077_entry(rt, ctx, 734u, aot_mem);
#else
        recomp_unit_0077_entry(rt, ctx, 734u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 734u, 0x0893B54Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893DA64u) goto L_0893DA64;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893DA64:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0893DA78:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_17);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_gpr_16 = (aot_gpr_5 | 0u);
    aot_gpr_17 = (aot_gpr_4 | 0u);
    ctx.gpr[19] = (0u | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_31);
    aot_gpr_31 = (0x0893DAA4u);
    ctx.gpr[6] = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0077.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 431u, 0x0893DAA4u, 0x0893B9A0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0077_entry(rt, ctx, 791u, aot_mem);
#else
        recomp_unit_0077_entry(rt, ctx, 791u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 791u, 0x0893B9A0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893DAA4u) goto L_0893DAA4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893DAA4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(12)));
    ctx.gpr[18] = (0u | 46u);
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[18];
      if (branch_taken) {
          goto L_0893DACC;
      }
      goto L_0893DAB4;
    }
L_0893DAB4:
    aot_gpr_4 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x0893DAC0u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0077.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 433u, 0x0893DAC0u, 0x0893BFD4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0077_entry(rt, ctx, 851u, aot_mem);
#else
        recomp_unit_0077_entry(rt, ctx, 851u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 851u, 0x0893BFD4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893DAC0u) goto L_0893DAC0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893DAC0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[18];
      if (branch_taken) {
          goto L_0893DAB4;
      }
      goto L_0893DACC;
    }
L_0893DACC:
    aot_gpr_5 = (0u | 58u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_0893DAE8;
      }
      goto L_0893DAD8;
    }
L_0893DAD8:
    ctx.gpr[19] = (0u | 1u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x0893DAE8u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0077.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 436u, 0x0893DAE8u, 0x0893BFD4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0077_entry(rt, ctx, 851u, aot_mem);
#else
        recomp_unit_0077_entry(rt, ctx, 851u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 851u, 0x0893BFD4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893DAE8u) goto L_0893DAE8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893DAE8:
    ctx.gpr[2] = (ctx.gpr[19] | 0u);
    { std::uint32_t aot_run_words[5]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      aot_gpr_31 = aot_run_words[4];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0893DB08:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-64));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(40), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    { const std::uint32_t aot_run_words[3]{aot_gpr_17, ctx.gpr[18], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(44), aot_run_words); }
    aot_gpr_31 = (0x0893DB28u);
    aot_gpr_17 = (aot_gpr_5 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0077.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 438u, 0x0893DB28u, 0x0893B11Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0077_entry(rt, ctx, 685u, aot_mem);
#else
        recomp_unit_0077_entry(rt, ctx, 685u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 685u, 0x0893B11Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893DB28u) goto L_0893DB28;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893DB28:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0893DB34u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    goto L_0893DA78;
L_0893DB34:
    ctx.gpr[18] = (aot_gpr_29 + static_cast<std::uint32_t>(20));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    aot_gpr_31 = (0x0893DB4Cu);
    ctx.gpr[7] = (aot_gpr_17 | 0u);
    goto L_0893C444;
L_0893DB4C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(28)));
    aot_gpr_5 = (aot_gpr_29 | 0u);
    aot_gpr_31 = (0x0893DB5Cu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 441u, 0x0893DB5Cu, 0x08ABD704u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 310u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 310u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 310u, 0x08ABD704u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893DB5Cu) goto L_0893DB5C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893DB5C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(28)));
    aot_gpr_31 = (0x0893DB68u);
    aot_gpr_5 = (aot_gpr_17 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 442u, 0x0893DB68u, 0x08ABDEB0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 425u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 425u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 425u, 0x08ABDEB0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893DB68u) goto L_0893DB68;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893DB68:
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(40), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0893DB80:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), aot_gpr_17);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    aot_gpr_17 = (aot_gpr_29 + static_cast<std::uint32_t>(4));
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(28)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(36), aot_gpr_31);
    aot_gpr_31 = (0x0893DBA8u);
    aot_gpr_5 = (aot_gpr_17 | 0u);
    goto L_0893C7F4;
L_0893DBA8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (0u | 12u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_0893DBD0;
      }
      goto L_0893DBB8;
    }
L_0893DBB8:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x0893DBC8u);
    ctx.gpr[6] = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 446u, 0x0893DBC8u, 0x08ABD018u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 218u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 218u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 218u, 0x08ABD018u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893DBC8u) goto L_0893DBC8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893DBC8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0893DBE4;
      }
      goto L_0893DBD0;
    }
L_0893DBD0:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), 0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    aot_gpr_31 = (0x0893DBE4u);
    ctx.gpr[6] = (0u | 1u);
    goto L_0893CE74;
L_0893DBE4:
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0893DBFC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    ctx.gpr[18] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_gpr_17);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_gpr_31);
    aot_gpr_31 = (0x0893DC1Cu);
    aot_gpr_16 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0077.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 450u, 0x0893DC1Cu, 0x0893B11Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0077_entry(rt, ctx, 685u, aot_mem);
#else
        recomp_unit_0077_entry(rt, ctx, 685u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 685u, 0x0893B11Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893DC1Cu) goto L_0893DC1C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893DC1C:
    aot_gpr_31 = (0x0893DC24u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    goto L_0893CD44;
L_0893DC24:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_0893DC3C;
      }
      goto L_0893DC2C;
    }
L_0893DC2C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    aot_gpr_5 = (0u | 59u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_0893DC48;
      }
      goto L_0893DC3C;
    }
L_0893DC3C:
    aot_gpr_4 = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_17 = (0u | 1u);
      if (branch_taken) {
          goto L_0893DCE4;
      }
      goto L_0893DC48;
    }
L_0893DC48:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x0893DC54u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    goto L_0893C500;
L_0893DC54:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    aot_gpr_5 = (0u | 12u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    aot_gpr_17 = (0u | 1u);
      if (branch_taken) {
          goto L_0893DCB4;
      }
      goto L_0893DC68;
    }
L_0893DC68:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    aot_gpr_31 = (0x0893DC78u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 457u, 0x0893DC78u, 0x08ABD018u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 218u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 218u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 218u, 0x08ABD018u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893DC78u) goto L_0893DC78;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893DC78:
    { const bool branch_taken = ctx.gpr[18] != aot_gpr_17;
      if (branch_taken) {
          goto L_0893DCA8;
      }
      goto L_0893DC80;
    }
L_0893DC80:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(12)));
    aot_gpr_5 = (aot_gpr_5 << 2u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-64));
    aot_gpr_5 = (aot_gpr_5 & ctx.gpr[6]);
    aot_gpr_5 = (aot_gpr_5 | 26u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    goto L_0893DCA8;
L_0893DCA8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_17 = (0u | 0u);
      if (branch_taken) {
          goto L_0893DCE4;
      }
      goto L_0893DCB4;
    }
L_0893DCB4:
    aot_gpr_4 = (aot_gpr_17 | 0u);
    { const bool branch_taken = ctx.gpr[18] != aot_gpr_4;
    aot_gpr_17 = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0893DCD4;
      }
      goto L_0893DCC0;
    }
L_0893DCC0:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0893DCCCu);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 462u, 0x0893DCCCu, 0x08ABD558u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 280u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 280u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 280u, 0x08ABD558u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893DCCCu) goto L_0893DCCC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893DCCC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_0893DCE4;
      }
      goto L_0893DCD4;
    }
L_0893DCD4:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0893DCE0u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 464u, 0x0893DCE0u, 0x08ABD4FCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 275u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 275u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 275u, 0x08ABD4FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893DCE0u) goto L_0893DCE0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893DCE0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(52)));
    goto L_0893DCE4;
L_0893DCE4:
    ctx.gpr[6] = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (0u | 27u);
    ctx.gpr[7] = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x0893DCFCu);
    ctx.gpr[8] = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 466u, 0x0893DCFCu, 0x08ABDFCCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 434u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 434u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 434u, 0x08ABDFCCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893DCFCu) goto L_0893DCFC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893DCFC:
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0893DD14:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_17);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.gpr[19] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(28)));
    aot_gpr_17 = (0u | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_31);
    aot_gpr_31 = (0x0893DD40u);
    ctx.gpr[18] = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0077.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 468u, 0x0893DD40u, 0x0893B11Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0077_entry(rt, ctx, 685u, aot_mem);
#else
        recomp_unit_0077_entry(rt, ctx, 685u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 685u, 0x0893B11Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893DD40u) goto L_0893DD40;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893DD40:
    { const bool branch_taken = ctx.gpr[18] == 0u;
      if (branch_taken) {
          goto L_0893DD64;
      }
      goto L_0893DD48;
    }
L_0893DD48:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0893DD64;
      }
      goto L_0893DD54;
    }
L_0893DD54:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.gpr[18] = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_17 = (aot_gpr_17 | aot_gpr_4);
      if (branch_taken) {
          goto L_0893DD40;
      }
      goto L_0893DD64;
    }
L_0893DD64:
    { const bool branch_taken = ctx.gpr[18] != 0u;
      if (branch_taken) {
          goto L_0893DD7C;
      }
      goto L_0893DD6C;
    }
L_0893DD6C:
    aot_gpr_5 = (2232u << 16u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0893DD7Cu);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-10432));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0125.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 473u, 0x0893DD7Cu, 0x089FB798u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0125_entry(rt, ctx, 543u, aot_mem);
#else
        recomp_unit_0125_entry(rt, ctx, 543u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0125_entry, 125u, 543u, 0x089FB798u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893DD7Cu) goto L_0893DD7C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893DD7C:
    { const bool branch_taken = aot_gpr_17 == 0u;
      if (branch_taken) {
          goto L_0893DD9C;
      }
      goto L_0893DD84;
    }
L_0893DD84:
    ctx.gpr[6] = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_5 = (0u | 33u);
    ctx.gpr[7] = (0u | 0u);
    aot_gpr_31 = (0x0893DD9Cu);
    ctx.gpr[8] = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 475u, 0x0893DD9Cu, 0x08ABDFCCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 434u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 434u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 434u, 0x08ABDFCCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893DD9Cu) goto L_0893DD9C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893DD9C:
    aot_gpr_16 = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    aot_gpr_31 = (0x0893DDA8u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 476u, 0x0893DDA8u, 0x08ABC824u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 121u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 121u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 121u, 0x08ABC824u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893DDA8u) goto L_0893DDA8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893DDA8:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0893DDB8u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 477u, 0x0893DDB8u, 0x08ABCCCCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 179u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 179u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 179u, 0x08ABCCCCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893DDB8u) goto L_0893DDB8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893DDB8:
    { std::uint32_t aot_run_words[5]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      aot_gpr_31 = aot_run_words[4];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0893DDD4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(12)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-258));
    aot_gpr_5 = (aot_gpr_4 < static_cast<std::uint32_t>(20) ? 1u : 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_17);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_17 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_0893DF00;
      }
      goto L_0893DDFC;
    }
L_0893DDFC:
    aot_gpr_4 = (aot_gpr_4 << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_4);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-9896)));
    jump_target = ctx.gpr[1];
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0893DE14:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0893DE20u);
    aot_gpr_5 = (aot_gpr_17 | 0u);
    goto L_0893D7E0;
L_0893DE20:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0893DF0C;
      }
      goto L_0893DE28;
    }
L_0893DE28:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0893DE34u);
    aot_gpr_5 = (aot_gpr_17 | 0u);
    goto L_0893D058;
L_0893DE34:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0893DF0C;
      }
      goto L_0893DE3C;
    }
L_0893DE3C:
    aot_gpr_31 = (0x0893DE44u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0077.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 485u, 0x0893DE44u, 0x0893B11Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0077_entry(rt, ctx, 685u, aot_mem);
#else
        recomp_unit_0077_entry(rt, ctx, 685u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 685u, 0x0893B11Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893DE44u) goto L_0893DE44;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893DE44:
    aot_gpr_31 = (0x0893DE4Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_0893CD80;
L_0893DE4C:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (0u | 262u);
    ctx.gpr[6] = (0u | 259u);
    aot_gpr_31 = (0x0893DE60u);
    ctx.gpr[7] = (aot_gpr_17 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0077.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 487u, 0x0893DE60u, 0x0893B280u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0077_entry(rt, ctx, 705u, aot_mem);
#else
        recomp_unit_0077_entry(rt, ctx, 705u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 705u, 0x0893B280u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893DE60u) goto L_0893DE60;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893DE60:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0893DF0C;
      }
      goto L_0893DE68;
    }
L_0893DE68:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0893DE74u);
    aot_gpr_5 = (aot_gpr_17 | 0u);
    goto L_0893D6C4;
L_0893DE74:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0893DF0C;
      }
      goto L_0893DE7C;
    }
L_0893DE7C:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0893DE88u);
    aot_gpr_5 = (aot_gpr_17 | 0u);
    goto L_0893D264;
L_0893DE88:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0893DF0C;
      }
      goto L_0893DE90;
    }
L_0893DE90:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0893DE9Cu);
    aot_gpr_5 = (aot_gpr_17 | 0u);
    goto L_0893DB08;
L_0893DE9C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0893DF0C;
      }
      goto L_0893DEA4;
    }
L_0893DEA4:
    aot_gpr_31 = (0x0893DEACu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0077.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 495u, 0x0893DEACu, 0x0893B11Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0077_entry(rt, ctx, 685u, aot_mem);
#else
        recomp_unit_0077_entry(rt, ctx, 685u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 685u, 0x0893B11Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893DEACu) goto L_0893DEAC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893DEAC:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0893DEB8u);
    aot_gpr_5 = (0u | 265u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0077.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 496u, 0x0893DEB8u, 0x0893B208u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0077_entry(rt, ctx, 696u, aot_mem);
#else
        recomp_unit_0077_entry(rt, ctx, 696u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 696u, 0x0893B208u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893DEB8u) goto L_0893DEB8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893DEB8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_0893DED0;
      }
      goto L_0893DEC0;
    }
L_0893DEC0:
    aot_gpr_31 = (0x0893DEC8u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_0893D904;
L_0893DEC8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0893DED8;
      }
      goto L_0893DED0;
    }
L_0893DED0:
    aot_gpr_31 = (0x0893DED8u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_0893D9CC;
L_0893DED8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0893DF0C;
      }
      goto L_0893DEE0;
    }
L_0893DEE0:
    aot_gpr_31 = (0x0893DEE8u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_0893DBFC;
L_0893DEE8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0893DF0C;
      }
      goto L_0893DEF0;
    }
L_0893DEF0:
    aot_gpr_31 = (0x0893DEF8u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_0893DD14;
L_0893DEF8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0893DF0C;
      }
      goto L_0893DF00;
    }
L_0893DF00:
    aot_gpr_31 = (0x0893DF08u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_0893DB80;
L_0893DF08:
    ctx.gpr[2] = (0u | 0u);
    goto L_0893DF0C;
L_0893DF0C:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0893DF20:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(48)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(48), aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_17);
    aot_gpr_17 = (0u | 0u);
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_5) < 201 ? 1u : 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_16 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_0893DF5C;
      }
      goto L_0893DF4C;
    }
L_0893DF4C:
    aot_gpr_5 = (2232u << 16u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0893DF5Cu);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-10512));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0125.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 510u, 0x0893DF5Cu, 0x089FB798u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0125_entry(rt, ctx, 543u, aot_mem);
#else
        recomp_unit_0125_entry(rt, ctx, 543u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0125_entry, 125u, 543u, 0x089FB798u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893DF5Cu) goto L_0893DF5C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893DF5C:
    { const bool branch_taken = aot_gpr_17 != 0u;
      if (branch_taken) {
          goto L_0893DF9C;
      }
      goto L_0893DF64;
    }
L_0893DF64:
    aot_gpr_31 = (0x0893DF6Cu);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(12)));
    goto L_0893CD44;
L_0893DF6C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_0893DF9C;
      }
      goto L_0893DF74;
    }
L_0893DF74:
    aot_gpr_31 = (0x0893DF7Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_0893DDD4;
L_0893DF7C:
    aot_gpr_17 = (ctx.gpr[2] | 0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0893DF8Cu);
    aot_gpr_5 = (0u | 59u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0077.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 515u, 0x0893DF8Cu, 0x0893B208u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0077_entry(rt, ctx, 696u, aot_mem);
#else
        recomp_unit_0077_entry(rt, ctx, 696u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 696u, 0x0893B208u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893DF8Cu) goto L_0893DF8C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893DF8C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(28)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(36), aot_gpr_5);
      if (branch_taken) {
          goto L_0893DF5C;
      }
      goto L_0893DF9C;
    }
L_0893DF9C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(48)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(48), aot_gpr_4);
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0893DFBC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-80));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(36), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(60), ctx.gpr[22]);
    ctx.gpr[22] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(28)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(40), aot_gpr_17);
    aot_gpr_17 = (aot_gpr_5 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(56), ctx.gpr[21]);
    ctx.gpr[21] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    aot_gpr_5 = (0u | 10u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    { const std::uint32_t aot_run_words[3]{ctx.gpr[18], ctx.gpr[19], ctx.gpr[20]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(44), aot_run_words); }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(64), aot_gpr_31);
    aot_gpr_31 = (0x0893E008u);
    ctx.gpr[8] = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 518u, 0x0893E008u, 0x08ABDFCCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 434u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 434u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 434u, 0x08ABDFCCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893E008u) goto L_0893E008;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893E008:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), 0u);
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_gpr_17);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    aot_gpr_5 = (0u | 10u);
    aot_gpr_31 = (0x0893E02Cu);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0077.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 519u, 0x0893E02Cu, 0x0893B394u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0077_entry(rt, ctx, 720u, aot_mem);
#else
        recomp_unit_0077_entry(rt, ctx, 720u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 720u, 0x0893B394u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893E02Cu) goto L_0893E02C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893E02C:
    aot_gpr_4 = (aot_gpr_29 | 0u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x0893E03Cu);
    ctx.gpr[6] = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0077.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 520u, 0x0893E03Cu, 0x0893B394u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0077_entry(rt, ctx, 720u, aot_mem);
#else
        recomp_unit_0077_entry(rt, ctx, 720u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 720u, 0x0893B394u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893E03Cu) goto L_0893E03C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893E03C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(28)));
    aot_gpr_31 = (0x0893E048u);
    aot_gpr_5 = (aot_gpr_17 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 521u, 0x0893E048u, 0x08ABD4FCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 275u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 275u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 275u, 0x08ABD4FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893E048u) goto L_0893E048;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893E048:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0893E054u);
    aot_gpr_5 = (0u | 123u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0077.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 522u, 0x0893E054u, 0x0893B23Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0077_entry(rt, ctx, 701u, aot_mem);
#else
        recomp_unit_0077_entry(rt, ctx, 701u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 701u, 0x0893B23Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893E054u) goto L_0893E054;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893E054:
    ctx.gpr[19] = (0u | 125u);
    ctx.gpr[18] = (0u | 278u);
    aot_gpr_17 = (0u | 61u);
    goto L_0893E060;
L_0893E060:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0893E06Cu);
    aot_gpr_5 = (0u | 59u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0077.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 524u, 0x0893E06Cu, 0x0893B208u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0077_entry(rt, ctx, 696u, aot_mem);
#else
        recomp_unit_0077_entry(rt, ctx, 696u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 696u, 0x0893B208u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893E06Cu) goto L_0893E06C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893E06C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[19];
      if (branch_taken) {
          goto L_0893E080;
      }
      goto L_0893E078;
    }
L_0893E078:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0893E130;
      }
      goto L_0893E080;
    }
L_0893E080:
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    aot_gpr_31 = (0x0893E08Cu);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    goto L_0893C194;
L_0893E08C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(12)));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 92 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_0893E0BC;
      }
      goto L_0893E09C;
    }
L_0893E09C:
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 91 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0893E100;
      }
      goto L_0893E0A8;
    }
L_0893E0A8:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0893E0B4u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    goto L_0893C08C;
L_0893E0B4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0893E10C;
      }
      goto L_0893E0BC;
    }
L_0893E0BC:
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[18];
      if (branch_taken) {
          goto L_0893E100;
      }
      goto L_0893E0C4;
    }
L_0893E0C4:
    aot_gpr_31 = (0x0893E0CCu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0077.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 533u, 0x0893E0CCu, 0x0893B184u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0077_entry(rt, ctx, 690u, aot_mem);
#else
        recomp_unit_0077_entry(rt, ctx, 690u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 690u, 0x0893B184u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893E0CCu) goto L_0893E0CC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893E0CC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_17;
      if (branch_taken) {
          goto L_0893E0EC;
      }
      goto L_0893E0D8;
    }
L_0893E0D8:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0893E0E4u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    goto L_0893C2F0;
L_0893E0E4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0893E0F8;
      }
      goto L_0893E0EC;
    }
L_0893E0EC:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0893E0F8u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    goto L_0893C08C;
L_0893E0F8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0893E10C;
      }
      goto L_0893E100;
    }
L_0893E100:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0893E10Cu);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    goto L_0893C2F0;
L_0893E10C:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0893E118u);
    aot_gpr_5 = (0u | 44u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0077.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 540u, 0x0893E118u, 0x0893B208u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0077_entry(rt, ctx, 696u, aot_mem);
#else
        recomp_unit_0077_entry(rt, ctx, 696u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 696u, 0x0893B208u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893E118u) goto L_0893E118;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893E118:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    aot_gpr_4 = (aot_gpr_16 | 0u);
      if (branch_taken) {
          goto L_0893E060;
      }
      goto L_0893E120;
    }
L_0893E120:
    aot_gpr_31 = (0x0893E128u);
    aot_gpr_5 = (0u | 59u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0077.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 542u, 0x0893E128u, 0x0893B208u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0077_entry(rt, ctx, 696u, aot_mem);
#else
        recomp_unit_0077_entry(rt, ctx, 696u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 696u, 0x0893B208u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893E128u) goto L_0893E128;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893E128:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_0893E060;
      }
      goto L_0893E130;
    }
L_0893E130:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (0u | 125u);
    ctx.gpr[6] = (0u | 123u);
    aot_gpr_31 = (0x0893E144u);
    ctx.gpr[7] = (ctx.gpr[21] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0077.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 544u, 0x0893E144u, 0x0893B280u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0077_entry(rt, ctx, 705u, aot_mem);
#else
        recomp_unit_0077_entry(rt, ctx, 705u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 705u, 0x0893B280u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893E144u) goto L_0893E144;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893E144:
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    aot_gpr_31 = (0x0893E150u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    goto L_0893C228;
L_0893E150:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    aot_gpr_16 = (ctx.gpr[20] << 2u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(12)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(28)));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_16);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (65280u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(32767));
    aot_gpr_17 = (aot_gpr_4 & ctx.gpr[6]);
    aot_gpr_31 = (0x0893E17Cu);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0045.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 546u, 0x0893E17Cu, 0x088B9600u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0045_entry(rt, ctx, 292u, aot_mem);
#else
        recomp_unit_0045_entry(rt, ctx, 292u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0045_entry, 45u, 292u, 0x088B9600u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893E17Cu) goto L_0893E17C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893E17C:
    aot_gpr_5 = (256u << 16u);
    aot_gpr_4 = (ctx.gpr[2] << 15u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-32768));
    ctx.gpr[6] = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    aot_gpr_4 = (aot_gpr_17 | aot_gpr_4);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-32705));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(24)));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_16);
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (ctx.gpr[6] | 0u);
    aot_gpr_31 = (0x0893E1C4u);
    aot_gpr_17 = (ctx.gpr[7] & aot_gpr_5);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0045.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 547u, 0x0893E1C4u, 0x088B962Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0045_entry(rt, ctx, 295u, aot_mem);
#else
        recomp_unit_0045_entry(rt, ctx, 295u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0045_entry, 45u, 295u, 0x088B962Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893E1C4u) goto L_0893E1C4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893E1C4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (aot_gpr_4 << 6u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(12)));
    aot_gpr_4 = (aot_gpr_4 & 32704u);
    aot_gpr_4 = (aot_gpr_17 | aot_gpr_4);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_4);
    { std::uint32_t aot_run_words[8]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(36), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      ctx.gpr[20] = aot_run_words[4];
      ctx.gpr[21] = aot_run_words[5];
      ctx.gpr[22] = aot_run_words[6];
      aot_gpr_31 = aot_run_words[7];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(80));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0893E20C:
    jump_target = aot_gpr_31;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), aot_gpr_5);
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0893E214:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_17);
    aot_gpr_17 = (aot_gpr_4 | 0u);
    aot_gpr_16 = (ctx.gpr[7] | 0u);
    { const std::uint32_t aot_run_words[5]{ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_run_words); }
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (1u << 16u);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[7]);
    ctx.gpr[7] = (aot_gpr_5 << 4u);
    ctx.gpr[21] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(320)));
    aot_gpr_4 = (ctx.gpr[7] - aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_4 - ctx.gpr[7]);
    ctx.gpr[21] = (ctx.gpr[21] + aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(28)));
    ctx.gpr[20] = (0u | 0u);
    aot_gpr_4 = (ctx.gpr[20] < aot_gpr_4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_0893E314;
      }
      goto L_0893E274;
    }
L_0893E274:
    ctx.gpr[19] = (1u << 16u);
    goto L_0893E278;
L_0893E278:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(24)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[20]);
    aot_gpr_5 = (aot_gpr_5 + ctx.gpr[19]);
    ctx.gpr[6] = (aot_gpr_4 << 5u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(316)));
    aot_gpr_4 = (aot_gpr_4 << 3u);
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (ctx.gpr[6] + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(ctx.gpr[7] + static_cast<std::uint32_t>(0), aot_run_words);
      aot_gpr_5 = aot_run_words[0];
      ctx.gpr[6] = aot_run_words[1];
      ctx.gpr[8] = aot_run_words[2];
    }
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(12), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(24)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(28)));
    ctx.gpr[9] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(20), ctx.gpr[8]);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(24), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(36)));
    { const std::uint32_t aot_run_words[3]{ctx.gpr[6], ctx.gpr[9], aot_gpr_5};
      aot_mem.aot_direct_store32_block(aot_gpr_4 + static_cast<std::uint32_t>(28), aot_run_words); }
    aot_gpr_5 = (0u | 4u);
    aot_gpr_31 = (0x0893E300u);
    ctx.gpr[6] = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0030.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 552u, 0x0893E300u, 0x0887F5E4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0030_entry(rt, ctx, 728u, aot_mem);
#else
        recomp_unit_0030_entry(rt, ctx, 728u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0030_entry, 30u, 728u, 0x0887F5E4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893E300u) goto L_0893E300;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893E300:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(28)));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (ctx.gpr[20] < aot_gpr_4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0893E278;
      }
      goto L_0893E314;
    }
L_0893E314:
    aot_gpr_31 = (0x0893E31Cu);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    goto L_0893E618;
L_0893E31C:
    aot_mem.aot_direct_store32(ctx.gpr[21] + static_cast<std::uint32_t>(32), aot_gpr_16);
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store8(ctx.gpr[21] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (ctx.gpr[21] + static_cast<std::uint32_t>(32));
    aot_gpr_5 = (0u | 4u);
    aot_gpr_31 = (0x0893E338u);
    ctx.gpr[6] = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0030.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 555u, 0x0893E338u, 0x0887F5E4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0030_entry(rt, ctx, 728u, aot_mem);
#else
        recomp_unit_0030_entry(rt, ctx, 728u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0030_entry, 30u, 728u, 0x0887F5E4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893E338u) goto L_0893E338;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893E338:
    { std::uint32_t aot_run_words[7]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      ctx.gpr[20] = aot_run_words[4];
      ctx.gpr[21] = aot_run_words[5];
      aot_gpr_31 = aot_run_words[6];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0893E35C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.gpr[19] = (aot_gpr_5 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (1u << 16u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_17);
    aot_gpr_5 = (ctx.gpr[19] << 4u);
    aot_gpr_17 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(320)));
    aot_gpr_4 = (aot_gpr_5 - ctx.gpr[19]);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_4 - aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_gpr_17 = (aot_gpr_17 + aot_gpr_4);
    ctx.gpr[18] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-18248));
    { const std::uint32_t aot_run_words[5]{ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], ctx.gpr[23], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words); }
    aot_gpr_31 = (0x0893E3C0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_0893ED4C;
L_0893E3C0:
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[2];
    ctx.gpr[23] = (1u << 16u);
      if (branch_taken) {
          goto L_0893E3CC;
      }
      goto L_0893E3C8;
    }
L_0893E3C8:
    ctx.gpr[18] = (0u | 3u);
    goto L_0893E3CC;
L_0893E3CC:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-18240));
    aot_gpr_31 = (0x0893E3D8u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_0893ED4C;
L_0893E3D8:
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[2];
      if (branch_taken) {
          goto L_0893E3E4;
      }
      goto L_0893E3E0;
    }
L_0893E3E0:
    ctx.gpr[18] = (0u | 5u);
    goto L_0893E3E4;
L_0893E3E4:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-18232));
    aot_gpr_31 = (0x0893E3F0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_0893ED4C;
L_0893E3F0:
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[2];
      if (branch_taken) {
          goto L_0893E3FC;
      }
      goto L_0893E3F8;
    }
L_0893E3F8:
    ctx.gpr[18] = (0u | 4u);
    goto L_0893E3FC;
L_0893E3FC:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-18224));
    aot_gpr_31 = (0x0893E408u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_0893ED4C;
L_0893E408:
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[2];
      if (branch_taken) {
          goto L_0893E414;
      }
      goto L_0893E410;
    }
L_0893E410:
    ctx.gpr[18] = (0u | 6u);
    goto L_0893E414;
L_0893E414:
    ctx.gpr[19] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[20] = (0u | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    ctx.gpr[21] = (0u | 0u);
      if (branch_taken) {
          goto L_0893E4D0;
      }
      goto L_0893E42C;
    }
L_0893E42C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[20]) < 0;
      if (branch_taken) {
          goto L_0893E444;
      }
      goto L_0893E434;
    }
L_0893E434:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    if (aot_gpr_5 != 0u) {
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
        goto L_0893E44C;
    }
    goto L_0893E444;
L_0893E444:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (0u | 0u);
      if (branch_taken) {
          goto L_0893E46C;
      }
      goto L_0893E44C;
    }
L_0893E44C:
    aot_gpr_5 = (aot_gpr_5 + ctx.gpr[20]);
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_5 & 128u);
    if (aot_gpr_5 == 0u) {
    ctx.gpr[22] = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
        goto L_0893E468;
    }
    goto L_0893E460;
L_0893E460:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (0u | 0u);
      if (branch_taken) {
          goto L_0893E46C;
      }
      goto L_0893E468;
    }
L_0893E468:
    ctx.gpr[22] = (ctx.gpr[22] + ctx.gpr[21]);
    goto L_0893E46C;
L_0893E46C:
    { const bool branch_taken = ctx.gpr[22] == 0u;
      if (branch_taken) {
          goto L_0893E4C0;
      }
      goto L_0893E474;
    }
L_0893E474:
    ctx.gpr[22] = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[22] == 0u;
      if (branch_taken) {
          goto L_0893E4C0;
      }
      goto L_0893E480;
    }
L_0893E480:
    aot_gpr_31 = (0x0893E488u);
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0018.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 578u, 0x0893E488u, 0x0884D5D4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0018_entry(rt, ctx, 271u, aot_mem);
#else
        recomp_unit_0018_entry(rt, ctx, 271u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0018_entry, 18u, 271u, 0x0884D5D4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893E488u) goto L_0893E488;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893E488:
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[22] == 0u;
      if (branch_taken) {
          goto L_0893E4BC;
      }
      goto L_0893E494;
    }
L_0893E494:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[22] + static_cast<std::uint32_t>(50))))));
    { const bool branch_taken = aot_gpr_5 != ctx.gpr[18];
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_0893E4A4;
      }
      goto L_0893E4A0;
    }
L_0893E4A0:
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    goto L_0893E4A4;
L_0893E4A4:
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[22] = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0893E4B4;
      }
      goto L_0893E4AC;
    }
L_0893E4AC:
    aot_gpr_31 = (0x0893E4B4u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0034.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 583u, 0x0893E4B4u, 0x0888FEB4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0034_entry(rt, ctx, 620u, aot_mem);
#else
        recomp_unit_0034_entry(rt, ctx, 620u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0034_entry, 34u, 620u, 0x0888FEB4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893E4B4u) goto L_0893E4B4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893E4B4:
    { const bool branch_taken = ctx.gpr[22] != 0u;
      if (branch_taken) {
          goto L_0893E494;
      }
      goto L_0893E4BC;
    }
L_0893E4BC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    goto L_0893E4C0;
L_0893E4C0:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr_5 = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(3344));
      if (branch_taken) {
          goto L_0893E42C;
      }
      goto L_0893E4D0;
    }
L_0893E4D0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(8)));
    ctx.gpr[18] = (0u | 0u);
    aot_gpr_5 = (aot_gpr_4 + ctx.gpr[23]);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(304)));
    aot_gpr_5 = (ctx.gpr[18] < aot_gpr_5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    ctx.gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_0893E52C;
      }
      goto L_0893E4EC;
    }
L_0893E4EC:
    ctx.gpr[19] = (1u << 16u);
    goto L_0893E4F0;
L_0893E4F0:
    aot_gpr_5 = (aot_gpr_4 + ctx.gpr[19]);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(332)));
    aot_gpr_5 = (aot_gpr_5 + ctx.gpr[20]);
    ctx.gpr[6] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] != aot_gpr_17;
      if (branch_taken) {
          goto L_0893E514;
      }
      goto L_0893E508;
    }
L_0893E508:
    aot_gpr_31 = (0x0893E510u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0055.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 590u, 0x0893E510u, 0x088E25C4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0055_entry(rt, ctx, 197u, aot_mem);
#else
        recomp_unit_0055_entry(rt, ctx, 197u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0055_entry, 55u, 197u, 0x088E25C4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893E510u) goto L_0893E510;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893E510:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(8)));
    goto L_0893E514;
L_0893E514:
    aot_gpr_5 = (aot_gpr_4 + ctx.gpr[23]);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(304)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr_5 = (ctx.gpr[18] < aot_gpr_5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(20));
      if (branch_taken) {
          goto L_0893E4F0;
      }
      goto L_0893E52C;
    }
L_0893E52C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0893E5A8;
      }
      goto L_0893E538;
    }
L_0893E538:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(28)));
    ctx.gpr[18] = (0u | 0u);
    aot_gpr_4 = (ctx.gpr[18] < aot_gpr_4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[19] = (1u << 16u);
      if (branch_taken) {
          goto L_0893E58C;
      }
      goto L_0893E54C;
    }
L_0893E54C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(24)));
    goto L_0893E550;
L_0893E550:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[18]);
    aot_gpr_5 = (aot_gpr_5 + ctx.gpr[19]);
    ctx.gpr[6] = (aot_gpr_4 << 5u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(316)));
    aot_gpr_4 = (aot_gpr_4 << 3u);
    aot_gpr_4 = (ctx.gpr[6] + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_31 = (0x0893E578u);
    aot_gpr_5 = (0u | 4u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0030.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 596u, 0x0893E578u, 0x0887F6B4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0030_entry(rt, ctx, 736u, aot_mem);
#else
        recomp_unit_0030_entry(rt, ctx, 736u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0030_entry, 30u, 736u, 0x0887F6B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893E578u) goto L_0893E578;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893E578:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(28)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (ctx.gpr[18] < aot_gpr_4 ? 1u : 0u);
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(24)));
        goto L_0893E550;
    }
    goto L_0893E58C;
L_0893E58C:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(32));
    aot_gpr_31 = (0x0893E598u);
    aot_gpr_5 = (0u | 4u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0030.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 598u, 0x0893E598u, 0x0887F6B4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0030_entry(rt, ctx, 736u, aot_mem);
#else
        recomp_unit_0030_entry(rt, ctx, 736u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0030_entry, 30u, 736u, 0x0887F6B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893E598u) goto L_0893E598;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893E598:
    aot_gpr_4 = (2236u << 16u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(32)));
    aot_gpr_31 = (0x0893E5A8u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(31984));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE8F4, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, ctx.gpr[6], ctx.gpr[7], ctx.gpr[8], aot_gpr_16, aot_gpr_17, ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893E5A8u) goto L_0893E5A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0893E5A8:
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(32), 0u);
    aot_mem.aot_direct_store8(aot_gpr_17 + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store16(aot_gpr_17 + static_cast<std::uint32_t>(22), static_cast<std::uint16_t>(0u));
    { std::uint32_t aot_run_words[9]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
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
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0893E5E0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0893E604;
      }
      goto L_0893E5EC;
    }
L_0893E5EC:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(48))))));
    { const bool branch_taken = aot_gpr_5 == ctx.gpr[6];
      if (branch_taken) {
          goto L_0893E60C;
      }
      goto L_0893E5F8;
    }
L_0893E5F8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0893E5EC;
      }
      goto L_0893E604;
    }
L_0893E604:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0893E610;
      }
      goto L_0893E60C;
    }
L_0893E60C:
    ctx.gpr[2] = (0u | 1u);
    goto L_0893E610;
L_0893E610:
    jump_target = aot_gpr_31;
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0893E618:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), ctx.gpr[23]);
    ctx.gpr[18] = (aot_gpr_4 | 0u);
    ctx.gpr[23] = (1u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_17);
    { const std::uint32_t aot_run_words[4]{ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_run_words); }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), ctx.gpr[30]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(36), aot_gpr_31);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[22] = (0u | 0u);
    aot_gpr_5 = (aot_gpr_4 + ctx.gpr[23]);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(304)));
    aot_gpr_5 = (ctx.gpr[22] < aot_gpr_5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    ctx.gpr[30] = (2221u << 16u);
      if (branch_taken) {
          goto L_0893E86C;
      }
      goto L_0893E668;
    }
L_0893E668:
    ctx.gpr[19] = (0u | 0u);
    aot_gpr_17 = (0u | 0u);
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(-1908));
    ctx.gpr[21] = (1u << 16u);
    goto L_0893E678;
L_0893E678:
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[21]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(332)));
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[19]);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(16), ctx.gpr[22]);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_17);
    aot_gpr_31 = (0x0893E69Cu);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(24));
    goto L_0893EC8C;
L_0893E69C:
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_0893E6B4;
      }
      goto L_0893E6A8;
    }
L_0893E6A8:
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_0893E6C0;
      }
      goto L_0893E6B4;
    }
L_0893E6B4:
    ctx.gpr[20] = (aot_gpr_4 + ctx.gpr[23]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(304)));
      if (branch_taken) {
          goto L_0893E858;
      }
      goto L_0893E6C0;
    }
L_0893E6C0:
    aot_gpr_5 = (aot_gpr_4 + ctx.gpr[21]);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(332)));
    aot_gpr_5 = (aot_gpr_5 + ctx.gpr[19]);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_0893E6E4;
      }
      goto L_0893E6D8;
    }
L_0893E6D8:
    ctx.gpr[20] = (aot_gpr_4 + ctx.gpr[23]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(304)));
      if (branch_taken) {
          goto L_0893E858;
      }
      goto L_0893E6E4;
    }
L_0893E6E4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    aot_gpr_4 = (0u | 8u);
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_16 = (0u | 0u);
      if (branch_taken) {
          goto L_0893E700;
      }
      goto L_0893E6F8;
    }
L_0893E6F8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(32)));
    goto L_0893E700;
L_0893E700:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(36)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(48));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    aot_gpr_31 = (0x0893E718u);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_5);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893E718u) goto L_0893E718;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0893E718:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(36)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(32));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    aot_gpr_31 = (0x0893E730u);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_5);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893E730u) goto L_0893E730;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0893E730:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    aot_gpr_31 = (0x0893E73Cu);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0026.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 619u, 0x0893E73Cu, 0x0886D308u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0026_entry(rt, ctx, 171u, aot_mem);
#else
        recomp_unit_0026_entry(rt, ctx, 171u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0026_entry, 26u, 171u, 0x0886D308u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893E73Cu) goto L_0893E73C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893E73C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (aot_gpr_4 + ctx.gpr[21]);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(332)));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_17);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(44)));
    aot_gpr_5 = (aot_gpr_5 + ctx.gpr[19]);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(12), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (aot_gpr_4 + ctx.gpr[21]);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(332)));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_17);
    ctx.gpr[6] = (aot_gpr_5 + ctx.gpr[19]);
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(48)));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(24));
    aot_gpr_4 = (ctx.gpr[6] | 0u);
    aot_gpr_31 = (0x0893E780u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0055.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 620u, 0x0893E780u, 0x088E23CCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0055_entry(rt, ctx, 165u, aot_mem);
#else
        recomp_unit_0055_entry(rt, ctx, 165u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0055_entry, 55u, 165u, 0x088E23CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893E780u) goto L_0893E780;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893E780:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    aot_gpr_16 = (0u | 0u);
    aot_gpr_5 = (aot_gpr_4 + ctx.gpr[21]);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(332)));
    aot_gpr_5 = (aot_gpr_5 + ctx.gpr[19]);
    ctx.gpr[6] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (aot_gpr_16 < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
      if (branch_taken) {
          goto L_0893E824;
      }
      goto L_0893E7A4;
    }
L_0893E7A4:
    ctx.gpr[6] = (aot_gpr_4 + aot_gpr_17);
    goto L_0893E7A8;
L_0893E7A8:
    ctx.gpr[6] = (aot_mem.aot_direct_load32(ctx.gpr[6] + static_cast<std::uint32_t>(44)));
    ctx.gpr[6] = (ctx.gpr[6] + aot_gpr_16);
    ctx.gpr[7] = (ctx.gpr[6] << 6u);
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[6] = (ctx.gpr[7] - ctx.gpr[6]);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(10400)));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_31 = (0x0893E7D0u);
    aot_gpr_5 = (ctx.gpr[6] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0055.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 623u, 0x0893E7D0u, 0x088E2798u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0055_entry(rt, ctx, 231u, aot_mem);
#else
        recomp_unit_0055_entry(rt, ctx, 231u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0055_entry, 55u, 231u, 0x088E2798u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893E7D0u) goto L_0893E7D0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893E7D0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_17);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(44)));
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_16);
    ctx.gpr[6] = (aot_gpr_5 << 6u);
    aot_gpr_5 = (aot_gpr_5 << 3u);
    aot_gpr_5 = (ctx.gpr[6] - aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(10452)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_gpr_5 | aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(1));
    aot_gpr_5 = (aot_gpr_4 + ctx.gpr[21]);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(332)));
    aot_gpr_5 = (aot_gpr_5 + ctx.gpr[19]);
    ctx.gpr[6] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (aot_gpr_16 < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[6] = (aot_gpr_4 + aot_gpr_17);
      if (branch_taken) {
          goto L_0893E7A8;
      }
      goto L_0893E824;
    }
L_0893E824:
    aot_gpr_31 = (0x0893E82Cu);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0038.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 625u, 0x0893E82Cu, 0x0889E994u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0038_entry(rt, ctx, 603u, aot_mem);
#else
        recomp_unit_0038_entry(rt, ctx, 603u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 603u, 0x0889E994u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893E82Cu) goto L_0893E82C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893E82C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_0893E844;
      }
      goto L_0893E834;
    }
L_0893E834:
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_5 = (ctx.gpr[30] | 0u);
    aot_gpr_31 = (0x0893E844u);
    ctx.gpr[6] = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0117.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 627u, 0x0893E844u, 0x089D86FCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0117_entry(rt, ctx, 82u, aot_mem);
#else
        recomp_unit_0117_entry(rt, ctx, 82u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0117_entry, 117u, 82u, 0x089D86FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893E844u) goto L_0893E844;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893E844:
    aot_gpr_31 = (0x0893E84Cu);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0117.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 628u, 0x0893E84Cu, 0x089D868Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0117_entry(rt, ctx, 74u, aot_mem);
#else
        recomp_unit_0117_entry(rt, ctx, 74u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0117_entry, 117u, 74u, 0x089D868Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893E84Cu) goto L_0893E84C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893E84C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[20] = (aot_gpr_4 + ctx.gpr[23]);
    ctx.gpr[20] = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(304)));
    goto L_0893E858;
L_0893E858:
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(1));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(20));
    aot_gpr_5 = (ctx.gpr[22] < ctx.gpr[20] ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_17 = (aot_gpr_17 + static_cast<std::uint32_t>(52));
      if (branch_taken) {
          goto L_0893E678;
      }
      goto L_0893E86C;
    }
L_0893E86C:
    { std::uint32_t aot_run_words[10]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
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
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0893E89C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (1u << 16u);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[7]);
    ctx.gpr[7] = (aot_gpr_5 << 4u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(332)));
    aot_gpr_5 = (aot_gpr_5 << 2u);
    aot_gpr_5 = (ctx.gpr[7] + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x0893E8CCu);
    aot_gpr_5 = (ctx.gpr[6] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0055.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 632u, 0x0893E8CCu, 0x088E2810u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0055_entry(rt, ctx, 234u, aot_mem);
#else
        recomp_unit_0055_entry(rt, ctx, 234u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0055_entry, 55u, 234u, 0x088E2810u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893E8CCu) goto L_0893E8CC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893E8CC:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0893E8D8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (1u << 16u);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[7]);
    ctx.gpr[7] = (aot_gpr_5 << 4u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(332)));
    aot_gpr_5 = (aot_gpr_5 << 2u);
    aot_gpr_5 = (ctx.gpr[7] + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x0893E908u);
    aot_gpr_5 = (ctx.gpr[6] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0055.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 634u, 0x0893E908u, 0x088E2798u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0055_entry(rt, ctx, 231u, aot_mem);
#else
        recomp_unit_0055_entry(rt, ctx, 231u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0055_entry, 55u, 231u, 0x088E2798u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893E908u) goto L_0893E908;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893E908:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0893E914:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[6] | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_17);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    aot_gpr_31 = (0x0893E934u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    goto L_0893E89C;
L_0893E934:
    aot_gpr_17 = (ctx.gpr[2] | 0u);
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(24)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (aot_gpr_5 & 32u);
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_0893E9C8;
      }
      goto L_0893E954;
    }
L_0893E954:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_0893E990;
      }
      goto L_0893E960;
    }
L_0893E960:
    aot_gpr_4 = (aot_gpr_5 | 0u);
    ctx.gpr[6] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[6] & 32u);
    ctx.gpr[6] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
      if (branch_taken) {
          goto L_0893E984;
      }
      goto L_0893E97C;
    }
L_0893E97C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0893E990;
      }
      goto L_0893E984;
    }
L_0893E984:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_0893E960;
      }
      goto L_0893E990;
    }
L_0893E990:
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_0893E9B4;
      }
      goto L_0893E998;
    }
L_0893E998:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_31 = (0x0893E9A4u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0035.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 643u, 0x0893E9A4u, 0x0889057Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0035_entry(rt, ctx, 89u, aot_mem);
#else
        recomp_unit_0035_entry(rt, ctx, 89u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0035_entry, 35u, 89u, 0x0889057Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893E9A4u) goto L_0893E9A4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893E9A4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_gpr_4 | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(8), aot_gpr_4);
      if (branch_taken) {
          goto L_0893E9C0;
      }
      goto L_0893E9B4;
    }
L_0893E9B4:
    aot_fpr_12 = std::bit_cast<float>(0u);
    aot_gpr_31 = (0x0893E9C0u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0035.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 645u, 0x0893E9C0u, 0x088905CCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0035_entry(rt, ctx, 93u, aot_mem);
#else
        recomp_unit_0035_entry(rt, ctx, 93u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0035_entry, 35u, 93u, 0x088905CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893E9C0u) goto L_0893E9C0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893E9C0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0893E9D4;
      }
      goto L_0893E9C8;
    }
L_0893E9C8:
    aot_fpr_12 = std::bit_cast<float>(0u);
    aot_gpr_31 = (0x0893E9D4u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0035.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 647u, 0x0893E9D4u, 0x088905CCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0035_entry(rt, ctx, 93u, aot_mem);
#else
        recomp_unit_0035_entry(rt, ctx, 93u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0035_entry, 35u, 93u, 0x088905CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893E9D4u) goto L_0893E9D4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893E9D4:
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store8(aot_gpr_17 + static_cast<std::uint32_t>(64), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0893E9F0;
      }
      goto L_0893E9E8;
    }
L_0893E9E8:
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_17);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    goto L_0893E9F0;
L_0893E9F0:
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(4), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(0), aot_gpr_17);
    ctx.gpr[2] = (aot_gpr_17 | 0u);
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0893EA14:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_17);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(36), ctx.gpr[23]);
    ctx.gpr[23] = (ctx.gpr[6] | 0u);
    aot_gpr_17 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(24)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(aot_fpr_20));
    { const std::uint32_t aot_run_words[3]{ctx.gpr[18], ctx.gpr[19], ctx.gpr[20]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words); }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), ctx.gpr[22]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(40), ctx.gpr[30]);
    aot_fpr_20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[20] = (ctx.gpr[7] | 0u);
    ctx.gpr[30] = (aot_gpr_4 | 0u);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[22] = (0u | 0u);
    aot_gpr_5 = (ctx.gpr[23] | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), ctx.gpr[21]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(44), aot_gpr_31);
    aot_gpr_31 = (0x0893EA74u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    goto L_0893E8D8;
L_0893EA74:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.gpr[21] = (aot_gpr_5 & 32u);
    aot_gpr_4 = (ctx.gpr[30] | 0u);
    ctx.gpr[21] = (0u < ctx.gpr[21] ? 1u : 0u);
    aot_gpr_5 = (ctx.gpr[23] | 0u);
    aot_gpr_31 = (0x0893EA90u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    goto L_0893E8D8;
L_0893EA90:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr_16 = (aot_gpr_5 & 16u);
    aot_gpr_4 = (ctx.gpr[30] | 0u);
    aot_gpr_16 = (0u < aot_gpr_16 ? 1u : 0u);
    aot_gpr_5 = (ctx.gpr[23] | 0u);
    aot_gpr_31 = (0x0893EAACu);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    goto L_0893E8D8;
L_0893EAAC:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (16u << 16u);
    aot_gpr_5 = (aot_gpr_5 & aot_gpr_4);
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_0893EBA0;
      }
      goto L_0893EAC8;
    }
L_0893EAC8:
    aot_gpr_17 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_17 == 0u;
    aot_gpr_5 = (49024u << 16u);
      if (branch_taken) {
          goto L_0893EBA0;
      }
      goto L_0893EAD4;
    }
L_0893EAD4:
    aot_fpr_13 = std::bit_cast<float>(0u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_5);
    goto L_0893EADC;
L_0893EADC:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    aot_gpr_5 = (aot_gpr_17 | 0u);
      if (branch_taken) {
          goto L_0893EB00;
      }
      goto L_0893EAE4;
    }
L_0893EAE4:
    ctx.gpr[6] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[6] & 32u);
    ctx.gpr[6] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
      if (branch_taken) {
          goto L_0893EB00;
      }
      goto L_0893EAFC;
    }
L_0893EAFC:
    ctx.gpr[22] = (aot_gpr_17 | 0u);
    goto L_0893EB00;
L_0893EB00:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(48))))));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[20];
      if (branch_taken) {
          goto L_0893EB14;
      }
      goto L_0893EB0C;
    }
L_0893EB0C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (aot_gpr_17 | 0u);
      if (branch_taken) {
          goto L_0893EB94;
      }
      goto L_0893EB14;
    }
L_0893EB14:
    ctx.gpr[6] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (ctx.gpr[6] & aot_gpr_4);
    ctx.gpr[7] = (0u < ctx.gpr[7] ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[7] = (ctx.gpr[6] & 16u);
      if (branch_taken) {
          goto L_0893EB94;
      }
      goto L_0893EB2C;
    }
L_0893EB2C:
    ctx.gpr[7] = (0u < ctx.gpr[7] ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    { const bool branch_taken = ctx.gpr[7] != aot_gpr_16;
      if (branch_taken) {
          goto L_0893EB94;
      }
      goto L_0893EB3C;
    }
L_0893EB3C:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(16)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_0893EB80;
      }
      goto L_0893EB50;
    }
L_0893EB50:
    { const float fs = aot_fpr_20; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(36)));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12) ^ 0x80000000u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < ctx.fpr[15])) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_0893EB74;
      }
      goto L_0893EB6C;
    }
L_0893EB6C:
    { const bool branch_taken = aot_gpr_16 != 0u;
      if (branch_taken) {
          goto L_0893EB88;
      }
      goto L_0893EB74;
    }
L_0893EB74:
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(aot_fpr_12));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_0893EB88;
      }
      goto L_0893EB80;
    }
L_0893EB80:
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(aot_fpr_14));
    ctx.gpr[6] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(8)));
    goto L_0893EB88;
L_0893EB88:
    ctx.gpr[6] = (ctx.gpr[6] | 4u);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    ctx.gpr[19] = (0u | 1u);
    goto L_0893EB94;
L_0893EB94:
    aot_gpr_17 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_17 != 0u;
      if (branch_taken) {
          goto L_0893EADC;
      }
      goto L_0893EBA0;
    }
L_0893EBA0:
    if (ctx.gpr[18] != 0u) {
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
        goto L_0893EBF0;
    }
    goto L_0893EBA8;
L_0893EBA8:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (ctx.gpr[30] | 0u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    ctx.gpr[7] = (ctx.gpr[23] | 0u);
    aot_gpr_31 = (0x0893EBC0u);
    ctx.gpr[8] = (ctx.gpr[20] | 0u);
    goto L_0893EF40;
L_0893EBC0:
    aot_gpr_4 = (ctx.gpr[19] | aot_gpr_16);
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_0893EBDC;
      }
      goto L_0893EBCC;
    }
L_0893EBCC:
    aot_fpr_12 = std::bit_cast<float>(0u);
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(aot_fpr_20));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_0893EC38;
      }
      goto L_0893EBDC;
    }
L_0893EBDC:
    aot_gpr_4 = (16256u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_0893EC3C;
      }
      goto L_0893EBF0;
    }
L_0893EBF0:
    aot_gpr_4 = (16256u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_13 - aot_fpr_12;
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_gpr_4 & 1u);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_0893EC38;
      }
      goto L_0893EC10;
    }
L_0893EC10:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(32)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(32)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_12) || std::isnan(aot_fpr_13)) && aot_fpr_12 == aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_0893EC38;
      }
      goto L_0893EC2C;
    }
L_0893EC2C:
    aot_fpr_12 = std::bit_cast<float>(0u);
    aot_gpr_31 = (0x0893EC38u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0035.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 678u, 0x0893EC38u, 0x088905CCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0035_entry(rt, ctx, 93u, aot_mem);
#else
        recomp_unit_0035_entry(rt, ctx, 93u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0035_entry, 35u, 93u, 0x088905CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893EC38u) goto L_0893EC38;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893EC38:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
    goto L_0893EC3C;
L_0893EC3C:
    { std::uint32_t aot_run_words[11]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      aot_gpr_16 = aot_run_words[1];
      aot_gpr_17 = aot_run_words[2];
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
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0893EC70:
    ctx.gpr[6] = (aot_gpr_5 << 4u);
    ctx.gpr[2] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_gpr_5 + ctx.gpr[6]);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_4 - ctx.gpr[6]);
    jump_target = aot_gpr_31;
    ctx.gpr[2] = (ctx.gpr[2] + aot_gpr_4);
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0893EC8C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_17);
    aot_gpr_17 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(8)));
    aot_gpr_16 = (aot_gpr_5 | 0u);
    ctx.gpr[20] = (1u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_gpr_31);
    aot_gpr_5 = (aot_gpr_4 + ctx.gpr[20]);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(328)));
    ctx.gpr[21] = (0u | 0u);
    aot_gpr_5 = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_0893ED24;
      }
      goto L_0893ECD4;
    }
L_0893ECD4:
    ctx.gpr[19] = (1u << 16u);
    goto L_0893ECD8;
L_0893ECD8:
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[19]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(320)));
    aot_gpr_5 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0893ECECu);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[18]);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0213.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 684u, 0x0893ECECu, 0x08B58180u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0213_entry(rt, ctx, 31u, aot_mem);
#else
        recomp_unit_0213_entry(rt, ctx, 31u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 31u, 0x08B58180u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893ECECu) goto L_0893ECEC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893ECEC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_0893ED14;
      }
      goto L_0893ECF4;
    }
L_0893ECF4:
    aot_gpr_5 = (aot_gpr_4 + ctx.gpr[20]);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(328)));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    aot_gpr_5 = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(44));
      if (branch_taken) {
          goto L_0893ECD8;
      }
      goto L_0893ED0C;
    }
L_0893ED0C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0893ED24;
      }
      goto L_0893ED14;
    }
L_0893ED14:
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[19]);
    ctx.gpr[2] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(320)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[18]);
      if (branch_taken) {
          goto L_0893ED28;
      }
      goto L_0893ED24;
    }
L_0893ED24:
    ctx.gpr[2] = (0u | 0u);
    goto L_0893ED28;
L_0893ED28:
    { std::uint32_t aot_run_words[7]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      ctx.gpr[20] = aot_run_words[4];
      ctx.gpr[21] = aot_run_words[5];
      aot_gpr_31 = aot_run_words[6];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0893ED4C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    aot_gpr_31 = (0x0893ED60u);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    goto L_0893EC8C;
L_0893ED60:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    if (aot_gpr_4 != 0u) {
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(8)));
        goto L_0893ED74;
    }
    goto L_0893ED6C;
L_0893ED6C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0893ED90;
      }
      goto L_0893ED74;
    }
L_0893ED74:
    ctx.gpr[6] = (1u << 16u);
    aot_gpr_5 = (aot_gpr_5 + ctx.gpr[6]);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(320)));
    ctx.gpr[6] = (0u | 44u);
    aot_gpr_4 = (aot_gpr_4 - aot_gpr_5);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_4); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[6]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[2] = (ctx.lo);
    goto L_0893ED90;
L_0893ED90:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0893EDA0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (1u << 16u);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[6]);
    ctx.gpr[6] = (aot_gpr_5 << 4u);
    aot_gpr_5 = (ctx.gpr[6] - aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(320)));
    aot_gpr_5 = (aot_gpr_5 << 2u);
    aot_gpr_5 = (aot_gpr_5 - ctx.gpr[6]);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(22))))));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    jump_target = aot_gpr_31;
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(22), static_cast<std::uint16_t>(aot_gpr_5));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0893EDD4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (1u << 16u);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[6]);
    ctx.gpr[6] = (aot_gpr_5 << 4u);
    ctx.gpr[7] = (ctx.gpr[6] - aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(320)));
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    ctx.gpr[6] = (ctx.gpr[7] - ctx.gpr[6]);
    ctx.gpr[6] = (aot_gpr_4 + ctx.gpr[6]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[6] + static_cast<std::uint32_t>(22))))));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store16(ctx.gpr[6] + static_cast<std::uint32_t>(22), static_cast<std::uint16_t>(aot_gpr_5));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[6] + static_cast<std::uint32_t>(22))))));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_0893EE24;
      }
      goto L_0893EE1C;
    }
L_0893EE1C:
    aot_gpr_31 = (0x0893EE24u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0179.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 698u, 0x0893EE24u, 0x08AD3464u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0179_entry(rt, ctx, 570u, aot_mem);
#else
        recomp_unit_0179_entry(rt, ctx, 570u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 570u, 0x08AD3464u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893EE24u) goto L_0893EE24;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893EE24:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0893EE30:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (1u << 16u);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[6]);
    ctx.gpr[6] = (aot_gpr_5 << 4u);
    aot_gpr_5 = (ctx.gpr[6] - aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(320)));
    aot_gpr_5 = (aot_gpr_5 << 2u);
    aot_gpr_5 = (aot_gpr_5 - ctx.gpr[6]);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(22))))));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    jump_target = aot_gpr_31;
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(22), static_cast<std::uint16_t>(aot_gpr_5));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0893EE64:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (1u << 16u);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[6]);
    ctx.gpr[6] = (aot_gpr_5 << 4u);
    aot_gpr_5 = (ctx.gpr[6] - aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(320)));
    aot_gpr_5 = (aot_gpr_5 << 2u);
    aot_gpr_5 = (aot_gpr_5 - ctx.gpr[6]);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    jump_target = aot_gpr_31;
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(22))))));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0893EE90:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_17);
    aot_gpr_17 = (aot_gpr_5 | 0u);
    aot_gpr_16 = (ctx.gpr[6] | 0u);
    { const std::uint32_t aot_run_words[3]{ctx.gpr[18], ctx.gpr[19], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_run_words); }
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (1u << 16u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(24)));
    ctx.gpr[19] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(316)));
    aot_gpr_4 = (aot_gpr_5 << 5u);
    aot_gpr_5 = (aot_gpr_5 << 3u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    ctx.gpr[19] = (ctx.gpr[19] + aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(28)));
    ctx.gpr[18] = (0u | 0u);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0893EF20;
      }
      goto L_0893EEE8;
    }
L_0893EEE8:
    aot_gpr_4 = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
    aot_gpr_31 = (0x0893EEF4u);
    aot_gpr_5 = (aot_gpr_17 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0213.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 703u, 0x0893EEF4u, 0x08B58180u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0213_entry(rt, ctx, 31u, aot_mem);
#else
        recomp_unit_0213_entry(rt, ctx, 31u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 31u, 0x08B58180u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893EEF4u) goto L_0893EEF4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893EEF4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_0893EF18;
      }
      goto L_0893EEFC;
    }
L_0893EEFC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(28)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(40));
      if (branch_taken) {
          goto L_0893EEE8;
      }
      goto L_0893EF10;
    }
L_0893EF10:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0893EF20;
      }
      goto L_0893EF18;
    }
L_0893EF18:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_0893EF24;
      }
      goto L_0893EF20;
    }
L_0893EF20:
    ctx.gpr[2] = (0u | 0u);
    goto L_0893EF24;
L_0893EF24:
    { std::uint32_t aot_run_words[5]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      aot_gpr_31 = aot_run_words[4];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0893EF40:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_17);
    aot_gpr_17 = (aot_gpr_5 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (ctx.gpr[6] | 0u);
    aot_gpr_5 = (ctx.gpr[7] | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_31);
    aot_gpr_31 = (0x0893EF68u);
    ctx.gpr[6] = (ctx.gpr[8] | 0u);
    goto L_0893E89C;
L_0893EF68:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_gpr_4 & 32u);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_17 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_0893EFAC;
      }
      goto L_0893EF84;
    }
L_0893EF84:
    { const bool branch_taken = aot_gpr_16 == 0u;
      if (branch_taken) {
          goto L_0893EFAC;
      }
      goto L_0893EF8C;
    }
L_0893EF8C:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x0893EF98u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0035.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 713u, 0x0893EF98u, 0x0889057Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0035_entry(rt, ctx, 89u, aot_mem);
#else
        recomp_unit_0035_entry(rt, ctx, 89u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0035_entry, 35u, 89u, 0x0889057Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893EF98u) goto L_0893EF98;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893EF98:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_gpr_4 | 1u);
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0893EFBC;
      }
      goto L_0893EFAC;
    }
L_0893EFAC:
    aot_fpr_12 = std::bit_cast<float>(0u);
    aot_gpr_31 = (0x0893EFB8u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0035.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 715u, 0x0893EFB8u, 0x088905CCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0035_entry(rt, ctx, 93u, aot_mem);
#else
        recomp_unit_0035_entry(rt, ctx, 93u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0035_entry, 35u, 93u, 0x088905CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893EFB8u) goto L_0893EFB8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893EFB8:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(0)));
    goto L_0893EFBC;
L_0893EFBC:
    { const bool branch_taken = aot_gpr_16 == 0u;
      if (branch_taken) {
          goto L_0893EFCC;
      }
      goto L_0893EFC4;
    }
L_0893EFC4:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(4), ctx.gpr[18]);
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(0)));
    goto L_0893EFCC;
L_0893EFCC:
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), aot_gpr_17);
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store8(ctx.gpr[18] + static_cast<std::uint32_t>(64), static_cast<std::uint8_t>(aot_gpr_4));
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0893EFFC:
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
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
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0893F024:
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(1044), 0u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(1048), 0u);
    jump_target = aot_gpr_31;
    ctx.gpr[2] = (aot_gpr_4 | 0u);
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0893F034:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-336));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(272), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_fpr_20 = std::bit_cast<float>(0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(276), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_20)) ? 0x00800000u : 0u);
    { const std::uint32_t aot_run_words[12]{std::bit_cast<std::uint32_t>(ctx.fpr[24]), std::bit_cast<std::uint32_t>(ctx.fpr[26]), aot_gpr_16, aot_gpr_17, ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], ctx.gpr[23], ctx.gpr[30], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(280), aot_run_words); }
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_5 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_0893F0D0;
      }
      goto L_0893F084;
    }
L_0893F084:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(268), aot_gpr_5);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    aot_gpr_4 = (16217u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 39322u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_gpr_4);
    ctx.set_vfpu_scalar_bits_ct<32u>(ctx.gpr[6]);
    ctx.execute_vfpu_unary_ct<64u, 0u, 1u, 21u>();
    ctx.execute_vfpu_vec3_ct<0u, 32u, 64u, 1u, 2u>();
    ctx.execute_vfpu_unary_ct<32u, 0u, 1u, 20u>();
    aot_gpr_4 = (ctx.vfpu_scalar_bits_ct<32u>());
    ctx.fpr[22] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(5)));
    if (aot_gpr_4 == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(12)));
        goto L_0893F0D8;
    }
    goto L_0893F0C8;
L_0893F0C8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_17 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(268)));
      if (branch_taken) {
          goto L_0893F13C;
      }
      goto L_0893F0D0;
    }
L_0893F0D0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0893F2D8;
      }
      goto L_0893F0D8;
    }
L_0893F0D8:
    ctx.gpr[6] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_gpr_4 = (aot_gpr_4 < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(268), aot_gpr_5);
      if (branch_taken) {
          goto L_0893F138;
      }
      goto L_0893F0E8;
    }
L_0893F0E8:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(268)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(536)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    aot_gpr_4 = (15044u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 39846u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_13; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_12 = aot_fpr_12 - aot_fpr_13;
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(536), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_gpr_5 + static_cast<std::uint32_t>(16));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[6]);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(528));
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
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_31 = (0x0893F138u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08A931B8, 163u, 0x08A931B8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893F138u) goto L_0893F138;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0893F138:
    aot_gpr_17 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(268)));
    goto L_0893F13C;
L_0893F13C:
    aot_gpr_4 = (0u | 16u);
    ctx.gpr[18] = (aot_gpr_17 + static_cast<std::uint32_t>(16));
    aot_gpr_17 = (aot_gpr_17 + aot_gpr_4);
    aot_gpr_4 = (15692u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    ctx.fpr[24] = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[30] = (0u | 1u);
    aot_gpr_4 = (15616u << 16u);
    ctx.gpr[22] = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    ctx.fpr[26] = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[21] = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    ctx.gpr[20] = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    ctx.gpr[19] = (aot_gpr_29 + static_cast<std::uint32_t>(80));
    aot_gpr_16 = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
    ctx.gpr[23] = (ctx.gpr[18] + static_cast<std::uint32_t>(528));
    goto L_0893F178;
L_0893F178:
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
      const std::uint32_t vfpu_address = aot_gpr_29 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.set_vfpu_scalar_bits_ct<28u>(aot_gpr_4);
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.set_vfpu_scalar_bits_ct<28u>(aot_gpr_4);
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0893F1B8u);
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08A931B8, 163u, 0x08A931B8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893F1B8u) goto L_0893F1B8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0893F1B8:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    { const float fs = aot_fpr_13; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_12 = aot_fpr_12 - aot_fpr_13;
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(268)));
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_31 = (0x0893F1D8u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0079.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 731u, 0x0893F1D8u, 0x08940198u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0079_entry(rt, ctx, 21u, aot_mem);
#else
        recomp_unit_0079_entry(rt, ctx, 21u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0079_entry, 79u, 21u, 0x08940198u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893F1D8u) goto L_0893F1D8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893F1D8:
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    { const std::uint32_t vfpu_address = aot_gpr_16 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr_17 + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = aot_gpr_16 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr_17 + static_cast<std::uint32_t>(0);
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
    aot_gpr_4 = (ctx.vfpu_scalar_bits_ct<28u>());
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 / aot_fpr_13;
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.set_vfpu_scalar_bits_ct<28u>(aot_gpr_4);
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const std::uint32_t vfpu_address = aot_gpr_17 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_16 + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = aot_gpr_29 + static_cast<std::uint32_t>(0);
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
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.set_vfpu_scalar_bits_ct<28u>(aot_gpr_4);
    ctx.execute_vfpu_unary_ct<28u, 28u, 1u, 16u>();
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(16));
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(16));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[30]) < 32 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_17 = (aot_gpr_17 + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_0893F178;
      }
      goto L_0893F290;
    }
L_0893F290:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(268)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0893F2AC;
      }
      goto L_0893F2A4;
    }
L_0893F2A4:
    aot_gpr_31 = (0x0893F2ACu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0079.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 734u, 0x0893F2ACu, 0x08940668u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0079_entry(rt, ctx, 73u, aot_mem);
#else
        recomp_unit_0079_entry(rt, ctx, 73u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0079_entry, 79u, 73u, 0x08940668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893F2ACu) goto L_0893F2AC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893F2AC:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(5)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0893F2D4;
      }
      goto L_0893F2B8;
    }
L_0893F2B8:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(24)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_20)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_0893F2D4;
      }
      goto L_0893F2CC;
    }
L_0893F2CC:
    aot_gpr_31 = (0x0893F2D4u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_0893F620;
L_0893F2D4:
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(0u));
    goto L_0893F2D8;
L_0893F2D8:
    { std::uint32_t aot_run_words[14]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(272), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      ctx.fpr[22] = std::bit_cast<float>(aot_run_words[1]);
      ctx.fpr[24] = std::bit_cast<float>(aot_run_words[2]);
      ctx.fpr[26] = std::bit_cast<float>(aot_run_words[3]);
      aot_gpr_16 = aot_run_words[4];
      aot_gpr_17 = aot_run_words[5];
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
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(336));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0893F318:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(272));
    { const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<12u, 4u>(vfpu_value); }
    aot_gpr_5 = (2246u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1840));
    { const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<36u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(16);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<37u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(32);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<38u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(48);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<39u, 4u>(vfpu_value); }
    aot_gpr_5 = (16800u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_gpr_5);
    ctx.execute_vfpu_vtfm_ct<14u, 36u, 12u, 4u, 3u>();
    ctx.vfpu_ctrl[1u] = 0x00000000u;
    ctx.execute_vfpu_vcmp_ct<14u, 0u, 4u, 3u>();
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(0));
    { const bool branch_taken = ((ctx.vfpu_ctrl[3] >> 5u) & 1u) == 0u;
    // vflush: architectural no-op that retains VFPU prefixes
      if (branch_taken) {
          goto L_0893F374;
      }
      goto L_0893F36C;
    }
L_0893F36C:
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(1));
    aot_gpr_5 = (aot_gpr_5 & 255u);
    goto L_0893F374;
L_0893F374:
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_0893F43C;
      }
      goto L_0893F37C;
    }
L_0893F37C:
    ctx.gpr[6] = (0u | 0u);
    aot_gpr_16 = (2238u << 16u);
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(-272));
    aot_gpr_5 = (0u | 0u);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_16);
    goto L_0893F390;
L_0893F390:
    ctx.gpr[7] = (0u | 128u);
    aot_mem.aot_direct_store8(aot_gpr_5 + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_direct_store8(aot_gpr_5 + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_direct_store8(aot_gpr_5 + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[7] = (0u | 100u);
    aot_mem.aot_direct_store8(aot_gpr_5 + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[7]));
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_4 + static_cast<std::uint32_t>(16), aot_run_words);
      aot_fpr_12 = std::bit_cast<float>(aot_run_words[0]);
      aot_fpr_13 = std::bit_cast<float>(aot_run_words[1]);
      aot_fpr_14 = std::bit_cast<float>(aot_run_words[2]);
    }
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_12), std::bit_cast<std::uint32_t>(aot_fpr_13), std::bit_cast<std::uint32_t>(aot_fpr_14)};
      aot_mem.aot_direct_store32_block(aot_gpr_5 + static_cast<std::uint32_t>(12), aot_run_words); }
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(24));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 32 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_0893F390;
      }
      goto L_0893F3D4;
    }
L_0893F3D4:
    aot_gpr_4 = (0u | 10u);
    aot_gpr_31 = (0x0893F3E0u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08861668, 23u, 203u, 0x08861668u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], ctx.gpr[2], aot_gpr_4, aot_gpr_5, ctx.gpr[6], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893F3E0u) goto L_0893F3E0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0893F3E0:
    aot_gpr_4 = (0u | 8u);
    aot_gpr_31 = (0x0893F3ECu);
    aot_gpr_5 = (0u | 5u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08861668, 23u, 203u, 0x08861668u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], ctx.gpr[2], aot_gpr_4, aot_gpr_5, ctx.gpr[6], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893F3ECu) goto L_0893F3EC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0893F3EC:
    aot_gpr_4 = (0u | 9u);
    aot_gpr_31 = (0x0893F3F8u);
    aot_gpr_5 = (0u | 6u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08861668, 23u, 203u, 0x08861668u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], ctx.gpr[2], aot_gpr_4, aot_gpr_5, ctx.gpr[6], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893F3F8u) goto L_0893F3F8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0893F3F8:
    aot_gpr_4 = (0u | 1u);
    aot_gpr_31 = (0x0893F404u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08861668, 23u, 203u, 0x08861668u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], ctx.gpr[2], aot_gpr_4, aot_gpr_5, ctx.gpr[6], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893F404u) goto L_0893F404;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0893F404:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (0u | 32u);
    ctx.gpr[6] = (0u | 0u);
    aot_gpr_31 = (0x0893F418u);
    ctx.gpr[7] = (0u | 24u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0186.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 749u, 0x0893F418u, 0x08AEE610u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0186_entry(rt, ctx, 515u, aot_mem);
#else
        recomp_unit_0186_entry(rt, ctx, 515u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0186_entry, 186u, 515u, 0x08AEE610u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893F418u) goto L_0893F418;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893F418:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_0893F43C;
      }
      goto L_0893F420;
    }
L_0893F420:
    aot_gpr_5 = (2234u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-9104));
    aot_gpr_4 = (0u | 2u);
    aot_gpr_31 = (0x0893F434u);
    ctx.gpr[6] = (0u | 62u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0186.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 751u, 0x0893F434u, 0x08AEE8E0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0186_entry(rt, ctx, 536u, aot_mem);
#else
        recomp_unit_0186_entry(rt, ctx, 536u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0186_entry, 186u, 536u, 0x08AEE8E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893F434u) goto L_0893F434;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893F434:
    aot_gpr_31 = (0x0893F43Cu);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0186.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 752u, 0x0893F43Cu, 0x08AEE8D0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0186_entry(rt, ctx, 535u, aot_mem);
#else
        recomp_unit_0186_entry(rt, ctx, 535u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0186_entry, 186u, 535u, 0x08AEE8D0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893F43Cu) goto L_0893F43C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893F43C:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0893F44C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    { const std::uint32_t aot_run_words[8]{aot_gpr_16, aot_gpr_17, ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(1044)));
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_16 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_0893F4B0;
      }
      goto L_0893F47C;
    }
L_0893F47C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 3 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_0893F4B8;
      }
      goto L_0893F48C;
    }
L_0893F48C:
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0893F4E0;
      }
      goto L_0893F498;
    }
L_0893F498:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(104)));
    ctx.gpr[22] = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(144)));
    ctx.gpr[19] = (0u + static_cast<std::uint32_t>(-513));
    ctx.gpr[18] = (0u + static_cast<std::uint32_t>(-497));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_17 = (0u + static_cast<std::uint32_t>(-2049));
      if (branch_taken) {
          goto L_0893F4FC;
      }
      goto L_0893F4B0;
    }
L_0893F4B0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0893F5B0;
      }
      goto L_0893F4B8;
    }
L_0893F4B8:
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 5 ? 1u : 0u);
      if (branch_taken) {
          goto L_0893F4E8;
      }
      goto L_0893F4C0;
    }
L_0893F4C0:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0893F4E0;
      }
      goto L_0893F4C8;
    }
L_0893F4C8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(104)));
    ctx.gpr[22] = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(142)));
    ctx.gpr[19] = (0u + static_cast<std::uint32_t>(-513));
    ctx.gpr[18] = (0u + static_cast<std::uint32_t>(-497));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_17 = (0u + static_cast<std::uint32_t>(-2049));
      if (branch_taken) {
          goto L_0893F4FC;
      }
      goto L_0893F4E0;
    }
L_0893F4E0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0893F5B0;
      }
      goto L_0893F4E8;
    }
L_0893F4E8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(104)));
    ctx.gpr[22] = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(140)));
    ctx.gpr[19] = (0u + static_cast<std::uint32_t>(-513));
    ctx.gpr[18] = (0u + static_cast<std::uint32_t>(-497));
    aot_gpr_17 = (0u + static_cast<std::uint32_t>(-2049));
    goto L_0893F4FC;
L_0893F4FC:
    ctx.gpr[20] = (0u | 0u);
    aot_gpr_31 = (0x0893F508u);
    aot_gpr_4 = (0u | 496u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0009.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 764u, 0x0893F508u, 0x0882B994u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0009_entry(rt, ctx, 392u, aot_mem);
#else
        recomp_unit_0009_entry(rt, ctx, 392u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0009_entry, 9u, 392u, 0x0882B994u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893F508u) goto L_0893F508;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893F508:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[21] == 0u;
    aot_gpr_4 = (ctx.gpr[21] | 0u);
      if (branch_taken) {
          goto L_0893F524;
      }
      goto L_0893F514;
    }
L_0893F514:
    aot_gpr_5 = (ctx.gpr[22] | 0u);
    aot_gpr_31 = (0x0893F520u);
    ctx.gpr[6] = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0009.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 766u, 0x0893F520u, 0x0882B688u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0009_entry(rt, ctx, 351u, aot_mem);
#else
        recomp_unit_0009_entry(rt, ctx, 351u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0009_entry, 9u, 351u, 0x0882B688u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893F520u) goto L_0893F520;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893F520:
    ctx.gpr[20] = (ctx.gpr[21] | 0u);
    goto L_0893F524;
L_0893F524:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(1044), ctx.gpr[20]);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    aot_gpr_5 = (aot_gpr_16 + static_cast<std::uint32_t>(1044));
      if (branch_taken) {
          goto L_0893F53C;
      }
      goto L_0893F530;
    }
L_0893F530:
    aot_gpr_31 = (0x0893F538u);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08A92F78, 163u, 419u, 0x08A92F78u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, ctx.gpr[6], ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0163_entry, 163u, 419u, 0x08A92F78u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893F538u) goto L_0893F538;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0893F538:
    ctx.gpr[20] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1044)));
    goto L_0893F53C;
L_0893F53C:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_16 + static_cast<std::uint32_t>(512), aot_run_words);
      aot_fpr_12 = std::bit_cast<float>(aot_run_words[0]);
      aot_fpr_13 = std::bit_cast<float>(aot_run_words[1]);
      aot_fpr_14 = std::bit_cast<float>(aot_run_words[2]);
    }
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_12), std::bit_cast<std::uint32_t>(aot_fpr_13), std::bit_cast<std::uint32_t>(aot_fpr_14)};
      aot_mem.aot_direct_store32_block(ctx.gpr[20] + static_cast<std::uint32_t>(48), aot_run_words); }
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1044)));
    aot_gpr_5 = (0u | 5u);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(476), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1044)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(72)));
    aot_gpr_5 = (aot_gpr_5 & ctx.gpr[19]);
    aot_gpr_5 = (aot_gpr_5 | 512u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(72), aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1044)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(72)));
    aot_gpr_5 = (aot_gpr_5 & ctx.gpr[18]);
    aot_gpr_5 = (aot_gpr_5 | 48u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(72), aot_gpr_5);
    aot_gpr_31 = (0x0893F590u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1044)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0035.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 771u, 0x0893F590u, 0x08891A2Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0035_entry(rt, ctx, 224u, aot_mem);
#else
        recomp_unit_0035_entry(rt, ctx, 224u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0035_entry, 35u, 224u, 0x08891A2Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893F590u) goto L_0893F590;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893F590:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1044)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(72)));
    aot_gpr_5 = (aot_gpr_5 & aot_gpr_17);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(72), aot_gpr_5);
    aot_gpr_31 = (0x0893F5A8u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1044)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0152.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 772u, 0x0893F5A8u, 0x08A66048u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0152_entry(rt, ctx, 463u, aot_mem);
#else
        recomp_unit_0152_entry(rt, ctx, 463u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0152_entry, 152u, 463u, 0x08A66048u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893F5A8u) goto L_0893F5A8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893F5A8:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(1048), 0u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(1052), 0u);
    goto L_0893F5B0;
L_0893F5B0:
    { std::uint32_t aot_run_words[8]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      ctx.gpr[20] = aot_run_words[4];
      ctx.gpr[21] = aot_run_words[5];
      ctx.gpr[22] = aot_run_words[6];
      aot_gpr_31 = aot_run_words[7];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0893F5D8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_fpr_12 = std::bit_cast<float>(0u);
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_12), std::bit_cast<std::uint32_t>(aot_fpr_12), std::bit_cast<std::uint32_t>(aot_fpr_12)};
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
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(528));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(0u));
    aot_gpr_5 = (0u | 1u);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(1044), 0u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(1048), 0u);
    aot_gpr_5 = (16128u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(1056), std::bit_cast<std::uint32_t>(aot_fpr_12));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0893F620:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(1048)));
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_16 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_0893F644;
      }
      goto L_0893F63C;
    }
L_0893F63C:
    aot_gpr_31 = (0x0893F644u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_0893F970;
L_0893F644:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1044)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0893F684;
      }
      goto L_0893F650;
    }
L_0893F650:
    aot_gpr_31 = (0x0893F658u);
    aot_gpr_5 = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0035.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 779u, 0x0893F658u, 0x08891B8Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0035_entry(rt, ctx, 247u, aot_mem);
#else
        recomp_unit_0035_entry(rt, ctx, 247u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0035_entry, 35u, 247u, 0x08891B8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893F658u) goto L_0893F658;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893F658:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1044)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0893F680;
      }
      goto L_0893F664;
    }
L_0893F664:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(92)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(24));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    aot_gpr_31 = (0x0893F680u);
    aot_gpr_5 = (0u | 3u);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893F680u) goto L_0893F680;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0893F680:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(1044), 0u);
    goto L_0893F684;
L_0893F684:
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(0u));
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0893F698:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-160));
    { const std::uint32_t aot_run_words[8]{std::bit_cast<std::uint32_t>(aot_fpr_20), std::bit_cast<std::uint32_t>(ctx.fpr[22]), aot_gpr_16, aot_gpr_17, ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(128), aot_run_words); }
    ctx.gpr[19] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[18] = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_16 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_0893F948;
      }
      goto L_0893F6D0;
    }
L_0893F6D0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) < 0;
      if (branch_taken) {
          goto L_0893F6E8;
      }
      goto L_0893F6D8;
    }
L_0893F6D8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
        goto L_0893F6F0;
    }
    goto L_0893F6E8;
L_0893F6E8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_17 = (0u | 0u);
      if (branch_taken) {
          goto L_0893F720;
      }
      goto L_0893F6F0;
    }
L_0893F6F0:
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[18]);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 & 128u);
    if (aot_gpr_4 == 0u) {
    aot_gpr_17 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
        goto L_0893F70C;
    }
    goto L_0893F704;
L_0893F704:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_17 = (0u | 0u);
      if (branch_taken) {
          goto L_0893F720;
      }
      goto L_0893F70C;
    }
L_0893F70C:
    aot_gpr_4 = (ctx.gpr[18] << 5u);
    aot_gpr_5 = (0u + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 << 6u);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_17 = (aot_gpr_17 + aot_gpr_4);
    goto L_0893F720;
L_0893F720:
    { const bool branch_taken = aot_gpr_17 == 0u;
      if (branch_taken) {
          goto L_0893F93C;
      }
      goto L_0893F728;
    }
L_0893F728:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(76)));
    aot_gpr_5 = (32u << 16u);
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0893F93C;
      }
      goto L_0893F744;
    }
L_0893F744:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(852)));
    if (aot_gpr_4 == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(72)));
        goto L_0893F764;
    }
    goto L_0893F750;
L_0893F750:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(852)));
    aot_gpr_5 = (0u | 6u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_0893F93C;
      }
      goto L_0893F760;
    }
L_0893F760:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(72)));
    goto L_0893F764;
L_0893F764:
    aot_gpr_5 = (32u << 16u);
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0893F93C;
      }
      goto L_0893F774;
    }
L_0893F774:
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(512));
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[20] = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_31 = (0x0893F78Cu);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0079.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 797u, 0x0893F78Cu, 0x08940150u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0079_entry(rt, ctx, 19u, aot_mem);
#else
        recomp_unit_0079_entry(rt, ctx, 19u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0079_entry, 79u, 19u, 0x08940150u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893F78Cu) goto L_0893F78C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893F78C:
    aot_fpr_12 = std::bit_cast<float>(0u);
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_12), std::bit_cast<std::uint32_t>(aot_fpr_12), std::bit_cast<std::uint32_t>(ctx.fpr[0])};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    { const std::uint32_t vfpu_address = aot_gpr_29 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr_17 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr_17 + static_cast<std::uint32_t>(16);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr_17 + static_cast<std::uint32_t>(32);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr_17 + static_cast<std::uint32_t>(48);
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
    ctx.execute_vfpu_unary_ct<28u, 28u, 1u, 22u>();
    aot_gpr_4 = (ctx.vfpu_scalar_bits_ct<28u>());
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (16320u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_0893F93C;
      }
      goto L_0893F800;
    }
L_0893F800:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(1048), aot_gpr_17);
    { const bool branch_taken = aot_gpr_17 == 0u;
      if (branch_taken) {
          goto L_0893F818;
      }
      goto L_0893F80C;
    }
L_0893F80C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1048)));
    aot_gpr_31 = (0x0893F818u);
    aot_gpr_5 = (aot_gpr_16 + static_cast<std::uint32_t>(1048));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08A92F78, 163u, 419u, 0x08A92F78u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, ctx.gpr[6], ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0163_entry, 163u, 419u, 0x08A92F78u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893F818u) goto L_0893F818;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0893F818:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1048)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(236)));
    ctx.gpr[6] = (8192u << 16u);
    aot_gpr_5 = (aot_gpr_5 | ctx.gpr[6]);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(236), aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(72)));
    aot_gpr_4 = (aot_gpr_4 & 496u);
    aot_gpr_5 = (0u | 32u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_0893F854;
      }
      goto L_0893F840;
    }
L_0893F840:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(72)));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-497));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 | 48u);
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(72), aot_gpr_4);
    goto L_0893F854;
L_0893F854:
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1044)));
    ctx.gpr[19] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1048)));
    aot_gpr_31 = (0x0893F864u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0079.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 803u, 0x0893F864u, 0x08940150u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0079_entry(rt, ctx, 19u, aot_mem);
#else
        recomp_unit_0079_entry(rt, ctx, 19u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0079_entry, 79u, 19u, 0x08940150u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893F864u) goto L_0893F864;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893F864:
    ctx.fpr[22] = std::bit_cast<float>(0u);
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(ctx.fpr[22]), std::bit_cast<std::uint32_t>(ctx.fpr[22]), std::bit_cast<std::uint32_t>(ctx.fpr[0])};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(80), aot_run_words); }
    ctx.gpr[6] = (aot_gpr_29 + static_cast<std::uint32_t>(80));
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    aot_gpr_31 = (0x0893F884u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    goto L_0893EFFC;
L_0893F884:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(64), aot_run_words);
      aot_fpr_12 = std::bit_cast<float>(aot_run_words[0]);
      aot_fpr_13 = std::bit_cast<float>(aot_run_words[1]);
      aot_fpr_14 = std::bit_cast<float>(aot_run_words[2]);
    }
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_12), std::bit_cast<std::uint32_t>(aot_fpr_13), std::bit_cast<std::uint32_t>(aot_fpr_14)};
      aot_mem.aot_direct_store32_block(ctx.gpr[18] + static_cast<std::uint32_t>(48), aot_run_words); }
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1044)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(72)));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 1u);
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-513));
    aot_gpr_5 = (aot_gpr_5 & ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[6] << 9u);
    aot_gpr_5 = (aot_gpr_5 | ctx.gpr[6]);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(72), aot_gpr_5);
    aot_fpr_20 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(40)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(56)));
    aot_fpr_20 = aot_fpr_20 - aot_fpr_12;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_20 <= ctx.fpr[22])) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_0893F934;
      }
      goto L_0893F8DC;
    }
L_0893F8DC:
    aot_gpr_31 = (0x0893F8E4u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0079.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 806u, 0x0893F8E4u, 0x08940198u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0079_entry(rt, ctx, 21u, aot_mem);
#else
        recomp_unit_0079_entry(rt, ctx, 21u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0079_entry, 79u, 21u, 0x08940198u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893F8E4u) goto L_0893F8E4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893F8E4:
    aot_gpr_4 = (15616u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = ctx.fpr[0]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1056)));
    aot_fpr_14 = aot_fpr_20 / ctx.fpr[0];
    aot_fpr_20 = aot_fpr_13 - aot_fpr_14;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(1056), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_fpr_12 = aot_fpr_12 / ctx.fpr[0];
    aot_fpr_20 = aot_fpr_20 - aot_fpr_12;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(1056), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_4 = (15395u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 55050u);
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_20 <= ctx.fpr[15])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (15395u << 16u);
      if (branch_taken) {
          goto L_0893F930;
      }
      goto L_0893F928;
    }
L_0893F928:
    aot_gpr_4 = (aot_gpr_4 | 55050u);
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_4);
    goto L_0893F930;
L_0893F930:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(1056), std::bit_cast<std::uint32_t>(aot_fpr_20));
    goto L_0893F934;
L_0893F934:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0893F948;
      }
      goto L_0893F93C;
    }
L_0893F93C:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0893F6D0;
      }
      goto L_0893F948;
    }
L_0893F948:
    { std::uint32_t aot_run_words[8]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(128), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      ctx.fpr[22] = std::bit_cast<float>(aot_run_words[1]);
      aot_gpr_16 = aot_run_words[2];
      aot_gpr_17 = aot_run_words[3];
      ctx.gpr[18] = aot_run_words[4];
      ctx.gpr[19] = aot_run_words[5];
      ctx.gpr[20] = aot_run_words[6];
      aot_gpr_31 = aot_run_words[7];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(160));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0893F970:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(1048)));
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_0893F994;
      }
      goto L_0893F97C;
    }
L_0893F97C:
    ctx.gpr[6] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(236)));
    ctx.gpr[7] = (57344u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[7]);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(236), ctx.gpr[6]);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(1048), 0u);
    goto L_0893F994;
L_0893F994:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(1044)));
    ctx.gpr[6] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(72)));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-513));
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[6] | 512u);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(72), ctx.gpr[6]);
    aot_gpr_5 = (0u | 60u);
    jump_target = aot_gpr_31;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(1052), aot_gpr_5);
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0893F9B8:
    aot_gpr_5 = (0u | 0u);
    aot_gpr_4 = (2247u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(160));
    goto L_0893F9C4;
L_0893F9C4:
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(0u));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(aot_gpr_5) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1072));
      if (branch_taken) {
          goto L_0893F9C4;
      }
      goto L_0893F9D8;
    }
L_0893F9D8:
    jump_target = aot_gpr_31;
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0893F9E0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    { const std::uint32_t aot_run_words[3]{aot_gpr_16, aot_gpr_17, aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_gpr_17 = (0u | 0u);
    aot_gpr_16 = (2247u << 16u);
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(160));
    goto L_0893F9FC;
L_0893F9FC:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0893FA10;
      }
      goto L_0893FA08;
    }
L_0893FA08:
    aot_gpr_31 = (0x0893FA10u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_0893F034;
L_0893FA10:
    aot_gpr_17 = (aot_gpr_17 + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_17) < 8 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(1072));
      if (branch_taken) {
          goto L_0893F9FC;
      }
      goto L_0893FA20;
    }
L_0893FA20:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0893FA34:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    { const std::uint32_t aot_run_words[3]{aot_gpr_16, aot_gpr_17, aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_gpr_17 = (0u | 0u);
    aot_gpr_16 = (2247u << 16u);
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(160));
    goto L_0893FA50;
L_0893FA50:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0893FA64;
      }
      goto L_0893FA5C;
    }
L_0893FA5C:
    aot_gpr_31 = (0x0893FA64u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_0893F318;
L_0893FA64:
    aot_gpr_17 = (aot_gpr_17 + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_17) < 8 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(1072));
      if (branch_taken) {
          goto L_0893FA50;
      }
      goto L_0893FA74;
    }
L_0893FA74:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0893FA88:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-176));
    { const std::uint32_t aot_run_words[3]{aot_gpr_16, aot_gpr_17, aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(152), aot_run_words); }
    ctx.gpr[9] = (ctx.gpr[7] | 0u);
    aot_gpr_17 = (ctx.gpr[8] & 255u);
    ctx.gpr[7] = (ctx.gpr[6] | 0u);
    aot_gpr_16 = (0u | 0u);
    ctx.gpr[8] = (static_cast<std::int32_t>(aot_gpr_16) < 8 ? 1u : 0u);
    ctx.gpr[6] = (aot_gpr_4 | 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    aot_gpr_4 = (ctx.gpr[9] | 0u);
      if (branch_taken) {
          goto L_0893FB9C;
      }
      goto L_0893FAB8;
    }
L_0893FAB8:
    ctx.gpr[8] = (aot_gpr_16 << 4u);
    ctx.gpr[9] = (0u - ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] << 2u);
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] << 4u);
    ctx.gpr[8] = (ctx.gpr[9] + ctx.gpr[8]);
    ctx.gpr[9] = (2247u << 16u);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(160));
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[9]);
    ctx.gpr[8] = (aot_mem.aot_direct_load8(ctx.gpr[8] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[8] = (aot_gpr_16 << 4u);
      if (branch_taken) {
          goto L_0893FB14;
      }
      goto L_0893FAE8;
    }
L_0893FAE8:
    ctx.gpr[9] = (0u - ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] << 2u);
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] << 4u);
    ctx.gpr[8] = (ctx.gpr[9] + ctx.gpr[8]);
    ctx.gpr[9] = (2247u << 16u);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(160));
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[9]);
    ctx.gpr[8] = (aot_mem.aot_direct_load32(ctx.gpr[8] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[6];
      if (branch_taken) {
          goto L_0893FB2C;
      }
      goto L_0893FB14;
    }
L_0893FB14:
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (static_cast<std::int32_t>(aot_gpr_16) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
      if (branch_taken) {
          goto L_0893FAB8;
      }
      goto L_0893FB24;
    }
L_0893FB24:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0893FB9C;
      }
      goto L_0893FB2C;
    }
L_0893FB2C:
    aot_gpr_4 = (aot_gpr_16 << 4u);
    aot_gpr_5 = (0u - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 << 4u);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_5 = (2247u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(160));
    ctx.gpr[6] = (aot_gpr_5 + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (aot_gpr_4 + ctx.gpr[6]);
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
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    ctx.gpr[6] = (aot_gpr_5 + static_cast<std::uint32_t>(528));
    ctx.gpr[6] = (aot_gpr_4 + ctx.gpr[6]);
    aot_fpr_12 = std::bit_cast<float>(0u);
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_12), std::bit_cast<std::uint32_t>(aot_fpr_12), std::bit_cast<std::uint32_t>(aot_fpr_12)};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words); }
    ctx.gpr[7] = (aot_gpr_29 + static_cast<std::uint32_t>(16));
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
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_16 = (0u | 1u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(aot_gpr_16));
    aot_gpr_31 = (0x0893FB94u);
    goto L_0893F44C;
L_0893FB94:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_gpr_16 | 0u);
      if (branch_taken) {
          goto L_0893FE58;
      }
      goto L_0893FB9C;
    }
L_0893FB9C:
    aot_gpr_16 = (0u | 0u);
    ctx.gpr[8] = (static_cast<std::int32_t>(aot_gpr_16) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
      if (branch_taken) {
          goto L_0893FE54;
      }
      goto L_0893FBAC;
    }
L_0893FBAC:
    ctx.gpr[8] = (aot_gpr_16 << 4u);
    ctx.gpr[9] = (0u - ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] << 2u);
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] << 4u);
    ctx.gpr[8] = (ctx.gpr[9] + ctx.gpr[8]);
    ctx.gpr[9] = (2247u << 16u);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(160));
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[9]);
    ctx.gpr[8] = (aot_mem.aot_direct_load8(ctx.gpr[8] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[8] != 0u;
      if (branch_taken) {
          goto L_0893FE44;
      }
      goto L_0893FBDC;
    }
L_0893FBDC:
    ctx.gpr[8] = (aot_gpr_16 << 4u);
    ctx.gpr[9] = (0u - ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] << 2u);
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] << 4u);
    ctx.gpr[8] = (ctx.gpr[9] + ctx.gpr[8]);
    ctx.gpr[9] = (2247u << 16u);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(160));
    ctx.gpr[10] = (ctx.gpr[8] + ctx.gpr[9]);
    aot_mem.aot_direct_store32(ctx.gpr[10] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    aot_mem.aot_direct_store32(ctx.gpr[10] + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_5 = (ctx.gpr[9] + static_cast<std::uint32_t>(16));
    aot_gpr_5 = (ctx.gpr[8] + aot_gpr_5);
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
    aot_mem.aot_direct_store32(ctx.gpr[10] + static_cast<std::uint32_t>(1040), aot_gpr_4);
    aot_gpr_31 = (0x0893FC24u);
    aot_gpr_4 = (ctx.gpr[10] | 0u);
    goto L_0893F5D8;
L_0893FC24:
    { const bool branch_taken = aot_gpr_17 == 0u;
      if (branch_taken) {
          goto L_0893FC60;
      }
      goto L_0893FC2C;
    }
L_0893FC2C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(20000));
    aot_gpr_5 = (aot_gpr_16 << 4u);
    ctx.gpr[6] = (0u - aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 << 4u);
    aot_gpr_5 = (ctx.gpr[6] + aot_gpr_5);
    ctx.gpr[6] = (2247u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(160));
    aot_gpr_5 = (aot_gpr_5 + ctx.gpr[6]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(12), aot_gpr_4);
      if (branch_taken) {
          goto L_0893FC88;
      }
      goto L_0893FC60;
    }
L_0893FC60:
    aot_gpr_4 = (aot_gpr_16 << 4u);
    aot_gpr_5 = (0u - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 << 4u);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_5 = (2247u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(160));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(12), 0u);
    goto L_0893FC88;
L_0893FC88:
    aot_gpr_17 = (0u | 1u);
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_17) < 32 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0893FE08;
      }
      goto L_0893FC98;
    }
L_0893FC98:
    aot_gpr_4 = (aot_gpr_16 << 4u);
    aot_gpr_5 = (0u - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 << 4u);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_5 = (2247u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(160));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_31 = (0x0893FCC4u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0078->0079.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0078_entry, 843u, 0x0893FCC4u, 0x08940198u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0079_entry(rt, ctx, 21u, aot_mem);
#else
        recomp_unit_0079_entry(rt, ctx, 21u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0079_entry, 79u, 21u, 0x08940198u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0893FCC4u) goto L_0893FCC4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0893FCC4:
    aot_gpr_4 = (15616u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = ctx.fpr[0]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_4 = (aot_gpr_17 & 1u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0893FD48;
      }
      goto L_0893FCDC;
    }
L_0893FCDC:
    aot_gpr_4 = (aot_gpr_16 << 4u);
    aot_gpr_5 = (0u - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 << 4u);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_5 = (aot_gpr_17 << 4u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_5 = (2247u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(160));
    ctx.gpr[6] = (aot_gpr_5 + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (aot_gpr_4 + ctx.gpr[6]);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(aot_fpr_12));
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
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0893FDAC;
      }
      goto L_0893FD48;
    }
L_0893FD48:
    aot_gpr_4 = (aot_gpr_16 << 4u);
    aot_gpr_5 = (0u - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 << 4u);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_5 = (aot_gpr_17 << 4u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_5 = (2247u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(160));
    ctx.gpr[6] = (aot_gpr_5 + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (aot_gpr_4 + ctx.gpr[6]);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(aot_fpr_12));
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    goto L_0893FDAC;
L_0893FDAC:
    aot_gpr_4 = (aot_gpr_16 << 4u);
    aot_gpr_5 = (0u - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 << 4u);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_5 = (aot_gpr_17 << 4u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_5 = (2247u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(160));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(528));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_fpr_12 = std::bit_cast<float>(0u);
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_12), std::bit_cast<std::uint32_t>(aot_fpr_12), std::bit_cast<std::uint32_t>(aot_fpr_12)};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_run_words); }
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_17 = (aot_gpr_17 + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_17) < 32 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0893FC98;
      }
      goto L_0893FE08;
    }
L_0893FE08:
    aot_gpr_17 = (0u | 1u);
    aot_gpr_4 = (aot_gpr_16 << 4u);
    aot_gpr_5 = (0u - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 << 4u);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_5 = (2247u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(160));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr_17));
    aot_gpr_31 = (0x0893FE3Cu);
    goto L_0893F44C;
L_0893FE3C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_gpr_17 | 0u);
      if (branch_taken) {
          goto L_0893FE58;
      }
      goto L_0893FE44;
    }
L_0893FE44:
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (static_cast<std::int32_t>(aot_gpr_16) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
      if (branch_taken) {
          goto L_0893FBAC;
      }
      goto L_0893FE54;
    }
L_0893FE54:
    ctx.gpr[2] = (0u | 0u);
    goto L_0893FE58;
L_0893FE58:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(152), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(176));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0893FE6C:
    ctx.gpr[9] = (aot_gpr_5 | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[6] = (2247u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(160));
    ctx.gpr[7] = (0u | 0u);
    aot_gpr_5 = (ctx.gpr[6] | 0u);
    goto L_0893FE84;
L_0893FE84:
    ctx.gpr[10] = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[10] == 0u;
      if (branch_taken) {
          goto L_0893FE9C;
      }
      goto L_0893FE90;
    }
L_0893FE90:
    ctx.gpr[10] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[10] == aot_gpr_4;
      if (branch_taken) {
          goto L_0893FEB8;
      }
      goto L_0893FE9C;
    }
L_0893FE9C:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1072));
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[8]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1072));
      if (branch_taken) {
          goto L_0893FE84;
      }
      goto L_0893FEB0;
    }
L_0893FEB0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0893FEC8;
      }
      goto L_0893FEB8;
    }
L_0893FEB8:
    aot_gpr_4 = (ctx.gpr[6] + static_cast<std::uint32_t>(528));
    aot_gpr_4 = (ctx.gpr[7] + aot_gpr_4);
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
    goto L_0893FEC8;
L_0893FEC8:
    jump_target = aot_gpr_31;
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0893FED0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-128));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0079_entry, 79u, 3u, 0x08940040u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_0893FEE4;
    }
L_0893FEE4:
    ctx.gpr[7] = (ctx.gpr[6] << 4u);
    ctx.gpr[8] = (0u - ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] << 4u);
    ctx.gpr[7] = (ctx.gpr[8] + ctx.gpr[7]);
    ctx.gpr[8] = (2247u << 16u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(160));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[7] = (aot_mem.aot_direct_load8(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[7] = (ctx.gpr[6] << 4u);
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0079_entry, 79u, 2u, 0x08940030u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_0893FF14;
    }
L_0893FF14:
    ctx.gpr[8] = (0u - ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] << 4u);
    ctx.gpr[7] = (ctx.gpr[8] + ctx.gpr[7]);
    ctx.gpr[8] = (2247u << 16u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(160));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[7] != aot_gpr_4;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0079_entry, 79u, 2u, 0x08940030u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_0893FF40;
    }
L_0893FF40:
    aot_fpr_13 = std::bit_cast<float>(0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    if (((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_13));
        goto L_0893FF54;
    }
    goto L_0893FF54;
L_0893FF54:
    aot_gpr_4 = (16255u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 48759u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_13));
        goto L_0893FF70;
    }
    goto L_0893FF70;
L_0893FF70:
    aot_gpr_4 = (16888u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_14 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_14));
    ctx.gpr[7] = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_4);
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    aot_fpr_12 = aot_fpr_12 - ctx.fpr[15];
    ctx.gpr[6] = (ctx.gpr[6] << 4u);
    ctx.gpr[8] = (0u - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 4u);
    ctx.gpr[6] = (ctx.gpr[8] + ctx.gpr[6]);
    aot_gpr_4 = (aot_gpr_4 << 4u);
    aot_gpr_4 = (ctx.gpr[6] + aot_gpr_4);
    ctx.gpr[8] = (2247u << 16u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(160));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(16));
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[8]);
    ctx.gpr[9] = (16256u << 16u);
    aot_fpr_13 = std::bit_cast<float>(ctx.gpr[9]);
    aot_fpr_13 = aot_fpr_13 - aot_fpr_12;
    ctx.gpr[9] = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[9]);
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
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    ctx.gpr[7] = (ctx.gpr[7] << 4u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[8]);
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[7]);
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.pc = 0x08940000u; AOT_REGCACHE_SYNC_OUT(); return;
}

#undef AOT_REGCACHE_SYNC_IN
#undef AOT_REGCACHE_SYNC_OUT

void recomp_unit_0078(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0078_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_78(Runtime &runtime) {
    runtime.register_generated_unit(78u, 0x0893C000u, 16384u, &recomp_unit_0078, &recomp_unit_0078_entry);
    // PSPRECOMP_V812_COMPACT_REGISTRATION: same entry set, looped once in Runtime instead of source-expanded calls.
    runtime.register_generated_entry_mask(0x0893C004u, &recomp_unit_0078, "recomp_unit_0078",
                                          kEntryMasks_recomp_unit_0078, 64u);
}
} // namespace psprecomp
